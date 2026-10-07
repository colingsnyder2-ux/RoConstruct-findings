// roc 2007-08 00567ee0  unit: RBX::RootInstance  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567ee0
//
// 00567ee0  51                   push ecx
// 00567ee1  56                   push esi
// 00567ee2  8bf1                 mov esi, ecx
// 00567ee4  8b4604               mov eax, dword ptr [esi + 4]
// 00567ee7  85c0                 test eax, eax
// 00567ee9  741c                 je 0x567f07
// 00567eeb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00567eef  8b5608               mov edx, dword ptr [esi + 8]
// 00567ef2  51                   push ecx
// 00567ef3  56                   push esi
// 00567ef4  52                   push edx
// 00567ef5  50                   push eax
// 00567ef6  e865feffff           call 0x567d60
// 00567efb  8b4604               mov eax, dword ptr [esi + 4]
// 00567efe  50                   push eax
// 00567eff  e85e7d0c00           call 0x62fc62
// 00567f04  83c414               add esp, 0x14
// 00567f07  c7460400000000       mov dword ptr [esi + 4], 0
// 00567f0e  c7460800000000       mov dword ptr [esi + 8], 0
// 00567f15  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00567f1c  5e                   pop esi
// 00567f1d  59                   pop ecx
// 00567f1e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
