// roc 2012-06 006d5c80  unit: boost::io::Vtoo_few_args::?$error_info_injector  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d5c80
//
// 006d5c80  51                   push ecx
// 006d5c81  56                   push esi
// 006d5c82  33c0                 xor eax, eax
// 006d5c84  89442404             mov dword ptr [esp + 4], eax
// 006d5c88  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d5c8c  50                   push eax
// 006d5c8d  88442408             mov byte ptr [esp + 8], al
// 006d5c91  8b542408             mov edx, dword ptr [esp + 8]
// 006d5c95  8d442410             lea eax, [esp + 0x10]
// 006d5c99  50                   push eax
// 006d5c9a  51                   push ecx
// 006d5c9b  52                   push edx
// 006d5c9c  56                   push esi
// 006d5c9d  83c104               add ecx, 4
// 006d5ca0  e8bbe4ffff           call 0x6d4160
// 006d5ca5  8bc6                 mov eax, esi
// 006d5ca7  5e                   pop esi
// 006d5ca8  59                   pop ecx
// 006d5ca9  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
