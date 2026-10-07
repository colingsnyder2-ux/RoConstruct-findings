// roc 2008-06 006b9a30  unit: CXTPCommandBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b9a30
//
// 006b9a30  8b5118               mov edx, dword ptr [ecx + 0x18]
// 006b9a33  8b442404             mov eax, dword ptr [esp + 4]
// 006b9a37  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 006b9a3a  8910                 mov dword ptr [eax], edx
// 006b9a3c  894804               mov dword ptr [eax + 4], ecx
// 006b9a3f  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?base@?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@QBE?AV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
