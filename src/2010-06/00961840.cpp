// roc 2010-06 00961840  unit: RBX::SceneUpdater  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00961840
//
// 00961840  8b442414             mov eax, dword ptr [esp + 0x14]
// 00961844  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00961848  8b542408             mov edx, dword ptr [esp + 8]
// 0096184c  50                   push eax
// 0096184d  51                   push ecx
// 0096184e  52                   push edx
// 0096184f  e85cfeffff           call 0x9616b0
// 00961854  83c40c               add esp, 0xc
// 00961857  c3                   ret 
// library boost-1.34.1/libs\regex\src\instances.cpp (function ??$fill@V?$_Vector_iterator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@YAXV?$_Vector_iterator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@0@0ABU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
