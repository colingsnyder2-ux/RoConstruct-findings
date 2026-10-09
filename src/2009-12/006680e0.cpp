// roc 2009-12 006680e0  unit: RBX::SimpleThrottlingArbiter  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006680e0
//
// 006680e0  51                   push ecx
// 006680e1  56                   push esi
// 006680e2  33c0                 xor eax, eax
// 006680e4  89442404             mov dword ptr [esp + 4], eax
// 006680e8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006680ec  50                   push eax
// 006680ed  88442408             mov byte ptr [esp + 8], al
// 006680f1  8b542408             mov edx, dword ptr [esp + 8]
// 006680f5  8d442410             lea eax, [esp + 0x10]
// 006680f9  50                   push eax
// 006680fa  51                   push ecx
// 006680fb  52                   push edx
// 006680fc  56                   push esi
// 006680fd  83c104               add ecx, 4
// 00668100  e89bf6ffff           call 0x6677a0
// 00668105  8bc6                 mov eax, esi
// 00668107  5e                   pop esi
// 00668108  59                   pop ecx
// 00668109  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
