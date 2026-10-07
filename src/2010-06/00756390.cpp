// roc 2010-06 00756390  unit: RBX::Block  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00756390
//
// 00756390  51                   push ecx
// 00756391  56                   push esi
// 00756392  8bf1                 mov esi, ecx
// 00756394  8b460c               mov eax, dword ptr [esi + 0xc]
// 00756397  85c0                 test eax, eax
// 00756399  741f                 je 0x7563ba
// 0075639b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0075639f  51                   push ecx
// 007563a0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007563a3  8d5608               lea edx, [esi + 8]
// 007563a6  52                   push edx
// 007563a7  51                   push ecx
// 007563a8  50                   push eax
// 007563a9  e892fcffff           call 0x756040
// 007563ae  8b560c               mov edx, dword ptr [esi + 0xc]
// 007563b1  52                   push edx
// 007563b2  e8e3150500           call 0x7a799a
// 007563b7  83c414               add esp, 0x14
// 007563ba  8b06                 mov eax, dword ptr [esi]
// 007563bc  50                   push eax
// 007563bd  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007563c4  c7461000000000       mov dword ptr [esi + 0x10], 0
// 007563cb  c7461400000000       mov dword ptr [esi + 0x14], 0
// 007563d2  e8c3150500           call 0x7a799a
// 007563d7  83c404               add esp, 4
// 007563da  5e                   pop esi
// 007563db  59                   pop ecx
// 007563dc  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
