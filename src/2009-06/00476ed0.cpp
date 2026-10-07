// roc 2009-06 00476ed0  unit: Ogre::RbxMeshLoader  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00476ed0
//
// 00476ed0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00476ed4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00476ed8  8b542408             mov edx, dword ptr [esp + 8]
// 00476edc  50                   push eax
// 00476edd  51                   push ecx
// 00476ede  52                   push edx
// 00476edf  e80cfaffff           call 0x4768f0
// 00476ee4  83c40c               add esp, 0xc
// 00476ee7  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??$fill@V?$_Vector_iterator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@YAXV?$_Vector_iterator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@0@0ABU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
