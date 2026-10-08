// roc 2008-06 005772b0  unit: RBX::DataModel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005772b0
//
// 005772b0  51                   push ecx
// 005772b1  56                   push esi
// 005772b2  33c0                 xor eax, eax
// 005772b4  89442404             mov dword ptr [esp + 4], eax
// 005772b8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005772bc  50                   push eax
// 005772bd  88442408             mov byte ptr [esp + 8], al
// 005772c1  8b542408             mov edx, dword ptr [esp + 8]
// 005772c5  8d442410             lea eax, [esp + 0x10]
// 005772c9  50                   push eax
// 005772ca  51                   push ecx
// 005772cb  52                   push edx
// 005772cc  56                   push esi
// 005772cd  83c104               add ecx, 4
// 005772d0  e8ebfaffff           call 0x576dc0
// 005772d5  8bc6                 mov eax, esi
// 005772d7  5e                   pop esi
// 005772d8  59                   pop ecx
// 005772d9  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
