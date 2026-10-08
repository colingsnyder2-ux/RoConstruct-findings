// roc 2012-06 006d5cb0  unit: boost::io::Vtoo_few_args::?$error_info_injector  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d5cb0
//
// 006d5cb0  51                   push ecx
// 006d5cb1  56                   push esi
// 006d5cb2  33c0                 xor eax, eax
// 006d5cb4  89442404             mov dword ptr [esp + 4], eax
// 006d5cb8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006d5cbc  50                   push eax
// 006d5cbd  88442408             mov byte ptr [esp + 8], al
// 006d5cc1  8b542408             mov edx, dword ptr [esp + 8]
// 006d5cc5  8d442410             lea eax, [esp + 0x10]
// 006d5cc9  50                   push eax
// 006d5cca  51                   push ecx
// 006d5ccb  52                   push edx
// 006d5ccc  56                   push esi
// 006d5ccd  83c104               add ecx, 4
// 006d5cd0  e80be5ffff           call 0x6d41e0
// 006d5cd5  8bc6                 mov eax, esi
// 006d5cd7  5e                   pop esi
// 006d5cd8  59                   pop ecx
// 006d5cd9  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
