// roc 2010-06 005319b0  unit: RBX::G3DPart  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005319b0
//
// 005319b0  51                   push ecx
// 005319b1  56                   push esi
// 005319b2  8bf1                 mov esi, ecx
// 005319b4  8b460c               mov eax, dword ptr [esi + 0xc]
// 005319b7  85c0                 test eax, eax
// 005319b9  741f                 je 0x5319da
// 005319bb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005319bf  51                   push ecx
// 005319c0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005319c3  8d5608               lea edx, [esi + 8]
// 005319c6  52                   push edx
// 005319c7  51                   push ecx
// 005319c8  50                   push eax
// 005319c9  e802d5ffff           call 0x52eed0
// 005319ce  8b560c               mov edx, dword ptr [esi + 0xc]
// 005319d1  52                   push edx
// 005319d2  e8c35f2700           call 0x7a799a
// 005319d7  83c414               add esp, 0x14
// 005319da  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005319e1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005319e8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005319ef  5e                   pop esi
// 005319f0  59                   pop ecx
// 005319f1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
