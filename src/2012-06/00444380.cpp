// roc 2012-06 00444380  unit: RBX::$$A6AXVBrickColor::?$signal::Vslot::?$callable  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00444380
//
// 00444380  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00444384  e877e7ffff           call 0x442b00
// 00444389  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?destroy@?$allocator@V?$basic_option@D@program_options@boost@@@std@@QAEXPAV?$basic_option@D@program_options@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
