// roc 2009-12 00403fa0  unit: ATL::CRegObject  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00403fa0
//
// 00403fa0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00403fa4  83c104               add ecx, 4
// 00403fa7  e864ffffff           call 0x403f10
// 00403fac  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ?destroy@?$allocator@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@std@@QAEXPAV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
