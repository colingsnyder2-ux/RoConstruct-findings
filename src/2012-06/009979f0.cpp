// roc 2012-06 009979f0  unit: CXTPCommandBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009979f0
//
// 009979f0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 009979f3  8b442404             mov eax, dword ptr [esp + 4]
// 009979f7  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 009979fa  8910                 mov dword ptr [eax], edx
// 009979fc  894804               mov dword ptr [eax + 4], ecx
// 009979ff  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?base@?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@QBE?AV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
