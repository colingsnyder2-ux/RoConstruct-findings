// roc 2011-06 0078b210  unit: RBX::Block  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0078b210
//
// 0078b210  51                   push ecx
// 0078b211  56                   push esi
// 0078b212  8bf1                 mov esi, ecx
// 0078b214  8b4604               mov eax, dword ptr [esi + 4]
// 0078b217  85c0                 test eax, eax
// 0078b219  741c                 je 0x78b237
// 0078b21b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0078b21f  8b5608               mov edx, dword ptr [esi + 8]
// 0078b222  51                   push ecx
// 0078b223  56                   push esi
// 0078b224  52                   push edx
// 0078b225  50                   push eax
// 0078b226  e895fcffff           call 0x78aec0
// 0078b22b  8b4604               mov eax, dword ptr [esi + 4]
// 0078b22e  50                   push eax
// 0078b22f  e824ee0700           call 0x80a058
// 0078b234  83c414               add esp, 0x14
// 0078b237  c7460400000000       mov dword ptr [esi + 4], 0
// 0078b23e  c7460800000000       mov dword ptr [esi + 8], 0
// 0078b245  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0078b24c  5e                   pop esi
// 0078b24d  59                   pop ecx
// 0078b24e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
