// roc 2011-06 005eabc0  unit: boost::io::Vtoo_few_args::?$error_info_injector  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005eabc0
//
// 005eabc0  51                   push ecx
// 005eabc1  56                   push esi
// 005eabc2  33c0                 xor eax, eax
// 005eabc4  89442404             mov dword ptr [esp + 4], eax
// 005eabc8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005eabcc  50                   push eax
// 005eabcd  88442408             mov byte ptr [esp + 8], al
// 005eabd1  8b542408             mov edx, dword ptr [esp + 8]
// 005eabd5  8d442410             lea eax, [esp + 0x10]
// 005eabd9  50                   push eax
// 005eabda  51                   push ecx
// 005eabdb  52                   push edx
// 005eabdc  56                   push esi
// 005eabdd  83c104               add ecx, 4
// 005eabe0  e84bf1ffff           call 0x5e9d30
// 005eabe5  8bc6                 mov eax, esi
// 005eabe7  5e                   pop esi
// 005eabe8  59                   pop ecx
// 005eabe9  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
