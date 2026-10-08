// roc 2009-12 00535610  unit: RBX::Network::IdSerializer  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00535610
//
// 00535610  51                   push ecx
// 00535611  56                   push esi
// 00535612  8bf1                 mov esi, ecx
// 00535614  8b460c               mov eax, dword ptr [esi + 0xc]
// 00535617  85c0                 test eax, eax
// 00535619  741f                 je 0x53563a
// 0053561b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0053561f  51                   push ecx
// 00535620  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00535623  8d5608               lea edx, [esi + 8]
// 00535626  52                   push edx
// 00535627  51                   push ecx
// 00535628  50                   push eax
// 00535629  e892fbffff           call 0x5351c0
// 0053562e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00535631  52                   push edx
// 00535632  e823e22b00           call 0x7f385a
// 00535637  83c414               add esp, 0x14
// 0053563a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00535641  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00535648  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0053564f  5e                   pop esi
// 00535650  59                   pop ecx
// 00535651  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
