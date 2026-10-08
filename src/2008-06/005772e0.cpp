// roc 2008-06 005772e0  unit: RBX::DataModel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005772e0
//
// 005772e0  51                   push ecx
// 005772e1  56                   push esi
// 005772e2  33c0                 xor eax, eax
// 005772e4  89442404             mov dword ptr [esp + 4], eax
// 005772e8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005772ec  50                   push eax
// 005772ed  88442408             mov byte ptr [esp + 8], al
// 005772f1  8b542408             mov edx, dword ptr [esp + 8]
// 005772f5  8d442410             lea eax, [esp + 0x10]
// 005772f9  50                   push eax
// 005772fa  51                   push ecx
// 005772fb  52                   push edx
// 005772fc  56                   push esi
// 005772fd  83c104               add ecx, 4
// 00577300  e84bfbffff           call 0x576e50
// 00577305  8bc6                 mov eax, esi
// 00577307  5e                   pop esi
// 00577308  59                   pop ecx
// 00577309  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
