// roc 2011-06 00438e00  unit: RBX::$$A6AXVBrickColor::?$signal::Vslot::?$callable  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00438e00
//
// 00438e00  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00438e04  e897ecffff           call 0x437aa0
// 00438e09  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?destroy@?$allocator@V?$basic_option@D@program_options@boost@@@std@@QAEXPAV?$basic_option@D@program_options@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
