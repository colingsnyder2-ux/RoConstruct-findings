// roc 2010-06 007bd2b0  unit: CXTPCommandBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bd2b0
//
// 007bd2b0  8b5118               mov edx, dword ptr [ecx + 0x18]
// 007bd2b3  8b442404             mov eax, dword ptr [esp + 4]
// 007bd2b7  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 007bd2ba  8910                 mov dword ptr [eax], edx
// 007bd2bc  894804               mov dword ptr [eax + 4], ecx
// 007bd2bf  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?base@?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@QBE?AV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
