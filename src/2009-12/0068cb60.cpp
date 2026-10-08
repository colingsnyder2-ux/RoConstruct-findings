// roc 2009-12 0068cb60  unit: RBX::RootInstance  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068cb60
//
// 0068cb60  51                   push ecx
// 0068cb61  56                   push esi
// 0068cb62  8bf1                 mov esi, ecx
// 0068cb64  8b460c               mov eax, dword ptr [esi + 0xc]
// 0068cb67  85c0                 test eax, eax
// 0068cb69  741f                 je 0x68cb8a
// 0068cb6b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068cb6f  51                   push ecx
// 0068cb70  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0068cb73  8d5608               lea edx, [esi + 8]
// 0068cb76  52                   push edx
// 0068cb77  51                   push ecx
// 0068cb78  50                   push eax
// 0068cb79  e832010b00           call 0x73ccb0
// 0068cb7e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0068cb81  52                   push edx
// 0068cb82  e8d36c1600           call 0x7f385a
// 0068cb87  83c414               add esp, 0x14
// 0068cb8a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0068cb91  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0068cb98  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0068cb9f  5e                   pop esi
// 0068cba0  59                   pop ecx
// 0068cba1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
