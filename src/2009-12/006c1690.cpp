// roc 2009-12 006c1690  unit: RBX::VInstance::?$NonFactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006c1690
//
// 006c1690  51                   push ecx
// 006c1691  56                   push esi
// 006c1692  8bf1                 mov esi, ecx
// 006c1694  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c1697  85c0                 test eax, eax
// 006c1699  741f                 je 0x6c16ba
// 006c169b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c169f  51                   push ecx
// 006c16a0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006c16a3  8d5608               lea edx, [esi + 8]
// 006c16a6  52                   push edx
// 006c16a7  51                   push ecx
// 006c16a8  50                   push eax
// 006c16a9  e8b2ecffff           call 0x6c0360
// 006c16ae  8b560c               mov edx, dword ptr [esi + 0xc]
// 006c16b1  52                   push edx
// 006c16b2  e8a3211300           call 0x7f385a
// 006c16b7  83c414               add esp, 0x14
// 006c16ba  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006c16c1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006c16c8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006c16cf  5e                   pop esi
// 006c16d0  59                   pop ecx
// 006c16d1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
