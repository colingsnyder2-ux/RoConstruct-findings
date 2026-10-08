// roc 2010-06 005cf230  unit: RBX::SimpleThrottlingArbiter  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cf230
//
// 005cf230  51                   push ecx
// 005cf231  56                   push esi
// 005cf232  33c0                 xor eax, eax
// 005cf234  89442404             mov dword ptr [esp + 4], eax
// 005cf238  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005cf23c  50                   push eax
// 005cf23d  88442408             mov byte ptr [esp + 8], al
// 005cf241  8b542408             mov edx, dword ptr [esp + 8]
// 005cf245  8d442410             lea eax, [esp + 0x10]
// 005cf249  50                   push eax
// 005cf24a  51                   push ecx
// 005cf24b  52                   push edx
// 005cf24c  56                   push esi
// 005cf24d  83c104               add ecx, 4
// 005cf250  e8dbf4ffff           call 0x5ce730
// 005cf255  8bc6                 mov eax, esi
// 005cf257  5e                   pop esi
// 005cf258  59                   pop ecx
// 005cf259  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
