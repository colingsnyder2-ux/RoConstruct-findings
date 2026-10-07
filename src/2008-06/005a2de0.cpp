// roc 2008-06 005a2de0  unit: RBX::Workspace  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a2de0
//
// 005a2de0  51                   push ecx
// 005a2de1  56                   push esi
// 005a2de2  8bf1                 mov esi, ecx
// 005a2de4  8b460c               mov eax, dword ptr [esi + 0xc]
// 005a2de7  85c0                 test eax, eax
// 005a2de9  741f                 je 0x5a2e0a
// 005a2deb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a2def  51                   push ecx
// 005a2df0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a2df3  8d5608               lea edx, [esi + 8]
// 005a2df6  52                   push edx
// 005a2df7  51                   push ecx
// 005a2df8  50                   push eax
// 005a2df9  e892ebffff           call 0x5a1990
// 005a2dfe  8b560c               mov edx, dword ptr [esi + 0xc]
// 005a2e01  52                   push edx
// 005a2e02  e873d80f00           call 0x6a067a
// 005a2e07  83c414               add esp, 0x14
// 005a2e0a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005a2e11  c7461000000000       mov dword ptr [esi + 0x10], 0
// 005a2e18  c7461400000000       mov dword ptr [esi + 0x14], 0
// 005a2e1f  5e                   pop esi
// 005a2e20  59                   pop ecx
// 005a2e21  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
