// from server: 100% by auto
// roc 2011-06 00796e40  unit: RBX::VHttp::?$sp_counted_impl_p  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00796e40
//
// 00796e40  51                   push ecx
// 00796e41  56                   push esi
// 00796e42  8bf1                 mov esi, ecx
// 00796e44  8b4604               mov eax, dword ptr [esi + 4]
// 00796e47  85c0                 test eax, eax
// 00796e49  741c                 je 0x796e67
// 00796e4b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00796e4f  8b5608               mov edx, dword ptr [esi + 8]
// 00796e52  51                   push ecx
// 00796e53  56                   push esi
// 00796e54  52                   push edx
// 00796e55  50                   push eax
// 00796e56  e8f5f4ffff           call 0x796350
// 00796e5b  8b4604               mov eax, dword ptr [esi + 4]
// 00796e5e  50                   push eax
// 00796e5f  e8f4310700           call 0x80a058
// 00796e64  83c414               add esp, 0x14
// 00796e67  c7460400000000       mov dword ptr [esi + 4], 0
// 00796e6e  c7460800000000       mov dword ptr [esi + 8], 0
// 00796e75  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00796e7c  5e                   pop esi
// 00796e7d  59                   pop ecx
// 00796e7e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
