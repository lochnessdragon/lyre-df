#include "Core.h"
#include "Console.h"
#include "Export.h"
#include "PluginManager.h"
#include "DataDefs.h"

using namespace DFHack;

#define xstr(s) str(s)
#define str(s) #s
#define LYRE_VERSION 0.0.1

command_result lyre(color_ostream &out, std::vector<std::string> & params);

DFHACK_PLUGIN("lyre");

DFhackCExport command_result plugin_init(color_ostream& out, std::vector<PluginCommand>& commands) {
	out.print("Lyre Sound Engine Loaded v" xstr(LYRE_VERSION));
	return CR_OK;
}

DFhackCExport command_result plugin_shutdown(color_ostream& out) {
	out.print("Lyre Sound Engine shutting down.");
	return CR_OK;
}