// from server: 100% by auto
// roc 2011-06 0097ecf0  unit: RBX::BeveledBlockBuilder  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0097ecf0
//
// 0097ecf0  8bc1                 mov eax, ecx
// 0097ecf2  33c9                 xor ecx, ecx
// 0097ecf4  894804               mov dword ptr [eax + 4], ecx
// 0097ecf7  894808               mov dword ptr [eax + 8], ecx
// 0097ecfa  89480c               mov dword ptr [eax + 0xc], ecx
// 0097ecfd  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
