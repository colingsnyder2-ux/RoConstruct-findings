// roc 2010-06 005cf260  unit: RBX::SimpleThrottlingArbiter  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005cf260
//
// 005cf260  51                   push ecx
// 005cf261  56                   push esi
// 005cf262  33c0                 xor eax, eax
// 005cf264  89442404             mov dword ptr [esp + 4], eax
// 005cf268  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005cf26c  50                   push eax
// 005cf26d  88442408             mov byte ptr [esp + 8], al
// 005cf271  8b542408             mov edx, dword ptr [esp + 8]
// 005cf275  8d442410             lea eax, [esp + 0x10]
// 005cf279  50                   push eax
// 005cf27a  51                   push ecx
// 005cf27b  52                   push edx
// 005cf27c  56                   push esi
// 005cf27d  83c104               add ecx, 4
// 005cf280  e82bf5ffff           call 0x5ce7b0
// 005cf285  8bc6                 mov eax, esi
// 005cf287  5e                   pop esi
// 005cf288  59                   pop ecx
// 005cf289  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
