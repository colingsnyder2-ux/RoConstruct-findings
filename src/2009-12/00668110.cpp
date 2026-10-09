// roc 2009-12 00668110  unit: RBX::SimpleThrottlingArbiter  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00668110
//
// 00668110  51                   push ecx
// 00668111  56                   push esi
// 00668112  33c0                 xor eax, eax
// 00668114  89442404             mov dword ptr [esp + 4], eax
// 00668118  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0066811c  50                   push eax
// 0066811d  88442408             mov byte ptr [esp + 8], al
// 00668121  8b542408             mov edx, dword ptr [esp + 8]
// 00668125  8d442410             lea eax, [esp + 0x10]
// 00668129  50                   push eax
// 0066812a  51                   push ecx
// 0066812b  52                   push edx
// 0066812c  56                   push esi
// 0066812d  83c104               add ecx, 4
// 00668130  e8fbf6ffff           call 0x667830
// 00668135  8bc6                 mov eax, esi
// 00668137  5e                   pop esi
// 00668138  59                   pop ecx
// 00668139  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
