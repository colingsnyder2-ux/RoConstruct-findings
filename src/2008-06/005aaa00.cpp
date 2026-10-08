// from server: 100% by auto
// roc 2008-06 005aaa00  unit: RBX::VScriptContext::?$FactoryProduct  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aaa00
//
// 005aaa00  56                   push esi
// 005aaa01  8bf1                 mov esi, ecx
// 005aaa03  8b06                 mov eax, dword ptr [esi]
// 005aaa05  85c0                 test eax, eax
// 005aaa07  7418                 je 0x5aaa21
// 005aaa09  8b00                 mov eax, dword ptr [eax]
// 005aaa0b  8d4e08               lea ecx, [esi + 8]
// 005aaa0e  85c0                 test eax, eax
// 005aaa10  7409                 je 0x5aaa1b
// 005aaa12  6a01                 push 1
// 005aaa14  51                   push ecx
// 005aaa15  51                   push ecx
// 005aaa16  ffd0                 call eax
// 005aaa18  83c40c               add esp, 0xc
// 005aaa1b  c70600000000         mov dword ptr [esi], 0
// 005aaa21  5e                   pop esi
// 005aaa22  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?clear@?$function1@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
