# Lyre Dwarf Fortress
A new sound engine for dwarf fortress.

Planned Features:
1) Playing random songs from a resource pack
2) Changing songs and resource pakcs on the fly
3) More sounds in game

## Building
Grab yourself a copy of the dfhack source code and add this repository in the ```plugins/external``` folder. Then, add the following line to the bottom of the ```CMakeLists.txt``` file in that folder: ```add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/external/lyre-df/)```. (Note: This only works if you did not rename the folder you installed lyre df into.) Then you are good to build dfhack through the instructions on the [wiki](https://docs.dfhack.org/en/stable/docs/Compile.html#linux).