// roc 2011-06 005eabf0  unit: boost::io::Vtoo_few_args::?$error_info_injector  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005eabf0
//
// 005eabf0  51                   push ecx
// 005eabf1  56                   push esi
// 005eabf2  33c0                 xor eax, eax
// 005eabf4  89442404             mov dword ptr [esp + 4], eax
// 005eabf8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005eabfc  50                   push eax
// 005eabfd  88442408             mov byte ptr [esp + 8], al
// 005eac01  8b542408             mov edx, dword ptr [esp + 8]
// 005eac05  8d442410             lea eax, [esp + 0x10]
// 005eac09  50                   push eax
// 005eac0a  51                   push ecx
// 005eac0b  52                   push edx
// 005eac0c  56                   push esi
// 005eac0d  83c104               add ecx, 4
// 005eac10  e89bf1ffff           call 0x5e9db0
// 005eac15  8bc6                 mov eax, esi
// 005eac17  5e                   pop esi
// 005eac18  59                   pop ecx
// 005eac19  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
