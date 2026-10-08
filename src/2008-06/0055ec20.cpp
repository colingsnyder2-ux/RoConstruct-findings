// from server: 100% by auto
// roc 2008-06 0055ec20  unit: RBX::MD5HasherImpl  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055ec20
//
// 0055ec20  56                   push esi
// 0055ec21  8b742408             mov esi, dword ptr [esp + 8]
// 0055ec25  8b06                 mov eax, dword ptr [esi]
// 0055ec27  85c0                 test eax, eax
// 0055ec29  7418                 je 0x55ec43
// 0055ec2b  8b00                 mov eax, dword ptr [eax]
// 0055ec2d  8d4e08               lea ecx, [esi + 8]
// 0055ec30  85c0                 test eax, eax
// 0055ec32  7409                 je 0x55ec3d
// 0055ec34  6a01                 push 1
// 0055ec36  51                   push ecx
// 0055ec37  51                   push ecx
// 0055ec38  ffd0                 call eax
// 0055ec3a  83c40c               add esp, 0xc
// 0055ec3d  c70600000000         mov dword ptr [esi], 0
// 0055ec43  5e                   pop esi
// 0055ec44  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?destroy@?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@QAEXPAV?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
