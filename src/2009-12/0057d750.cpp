// roc 2009-12 0057d750  unit: std::Vlength_error::U?$error_info_injector::?$clone_impl  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0057d750
//
// 0057d750  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057d754  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057d758  8b542408             mov edx, dword ptr [esp + 8]
// 0057d75c  50                   push eax
// 0057d75d  51                   push ecx
// 0057d75e  52                   push edx
// 0057d75f  e85cf6ffff           call 0x57cdc0
// 0057d764  83c40c               add esp, 0xc
// 0057d767  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??$fill@V?$_Vector_iterator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@YAXV?$_Vector_iterator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@0@0ABU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
