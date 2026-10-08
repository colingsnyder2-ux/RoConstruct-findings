// from server: 100% by auto
// roc 2011-06 006efd20  unit: RBX::BillboardGui  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006efd20
//
// 006efd20  51                   push ecx
// 006efd21  56                   push esi
// 006efd22  8bf1                 mov esi, ecx
// 006efd24  8b4604               mov eax, dword ptr [esi + 4]
// 006efd27  85c0                 test eax, eax
// 006efd29  741c                 je 0x6efd47
// 006efd2b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006efd2f  8b5608               mov edx, dword ptr [esi + 8]
// 006efd32  51                   push ecx
// 006efd33  56                   push esi
// 006efd34  52                   push edx
// 006efd35  50                   push eax
// 006efd36  e855fcffff           call 0x6ef990
// 006efd3b  8b4604               mov eax, dword ptr [esi + 4]
// 006efd3e  50                   push eax
// 006efd3f  e814a31100           call 0x80a058
// 006efd44  83c414               add esp, 0x14
// 006efd47  c7460400000000       mov dword ptr [esi + 4], 0
// 006efd4e  c7460800000000       mov dword ptr [esi + 8], 0
// 006efd55  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006efd5c  5e                   pop esi
// 006efd5d  59                   pop ecx
// 006efd5e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
