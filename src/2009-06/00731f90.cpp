// from server: 100% by auto
// roc 2009-06 00731f90  unit: CXTPCommandBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00731f90
//
// 00731f90  8b5118               mov edx, dword ptr [ecx + 0x18]
// 00731f93  8b442404             mov eax, dword ptr [esp + 4]
// 00731f97  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00731f9a  8910                 mov dword ptr [eax], edx
// 00731f9c  894804               mov dword ptr [eax + 4], ecx
// 00731f9f  c20400               ret 4
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?base@?$match_results@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@2@@boost@@QBE?AV?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
