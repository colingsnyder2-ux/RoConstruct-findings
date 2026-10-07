// roc 2011-06 0092dd90  unit: Ogre::GfxClustererPart  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0092dd90
//
// 0092dd90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0092dd94  e8b7ddffff           call 0x92bb50
// 0092dd99  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?destroy@?$allocator@V?$basic_option@D@program_options@boost@@@std@@QAEXPAV?$basic_option@D@program_options@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
