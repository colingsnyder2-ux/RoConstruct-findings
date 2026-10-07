// roc 2009-06 006b6690  unit: RBX::ToolMouseCommand  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b6690
//
// 006b6690  8bc1                 mov eax, ecx
// 006b6692  33c9                 xor ecx, ecx
// 006b6694  894804               mov dword ptr [eax + 4], ecx
// 006b6697  894808               mov dword ptr [eax + 8], ecx
// 006b669a  89480c               mov dword ptr [eax + 0xc], ecx
// 006b669d  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??0?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
