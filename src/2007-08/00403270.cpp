// roc 2007-08 00403270  unit: ATL::CRegObject  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00403270
//
// 00403270  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00403274  83c104               add ecx, 4
// 00403277  e864ffffff           call 0x4031e0
// 0040327c  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?destroy@?$allocator@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@std@@QAEXPAV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
