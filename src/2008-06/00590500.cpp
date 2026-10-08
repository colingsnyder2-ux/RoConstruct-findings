// from server: 100% by auto
// roc 2008-06 00590500  unit: RBX::RootInstance  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590500
//
// 00590500  51                   push ecx
// 00590501  56                   push esi
// 00590502  8bf1                 mov esi, ecx
// 00590504  8b460c               mov eax, dword ptr [esi + 0xc]
// 00590507  85c0                 test eax, eax
// 00590509  741f                 je 0x59052a
// 0059050b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0059050f  51                   push ecx
// 00590510  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00590513  8d5608               lea edx, [esi + 8]
// 00590516  52                   push edx
// 00590517  51                   push ecx
// 00590518  50                   push eax
// 00590519  e872feffff           call 0x590390
// 0059051e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00590521  52                   push edx
// 00590522  e853011100           call 0x6a067a
// 00590527  83c414               add esp, 0x14
// 0059052a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00590531  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00590538  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0059053f  5e                   pop esi
// 00590540  59                   pop ecx
// 00590541  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
