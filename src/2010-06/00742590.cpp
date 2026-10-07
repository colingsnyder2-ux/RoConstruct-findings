// roc 2010-06 00742590  unit: RBX::VHttp::?$sp_counted_impl_p  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00742590
//
// 00742590  51                   push ecx
// 00742591  56                   push esi
// 00742592  8bf1                 mov esi, ecx
// 00742594  8b460c               mov eax, dword ptr [esi + 0xc]
// 00742597  85c0                 test eax, eax
// 00742599  741f                 je 0x7425ba
// 0074259b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0074259f  51                   push ecx
// 007425a0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007425a3  8d5608               lea edx, [esi + 8]
// 007425a6  52                   push edx
// 007425a7  51                   push ecx
// 007425a8  50                   push eax
// 007425a9  e8728ef6ff           call 0x6ab420
// 007425ae  8b560c               mov edx, dword ptr [esi + 0xc]
// 007425b1  52                   push edx
// 007425b2  e8e3530600           call 0x7a799a
// 007425b7  83c414               add esp, 0x14
// 007425ba  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 007425c1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 007425c8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 007425cf  5e                   pop esi
// 007425d0  59                   pop ecx
// 007425d1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
