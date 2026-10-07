// roc 2012-06 005141a0  unit: seg_00510000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005141a0
//
// 005141a0  51                   push ecx
// 005141a1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005141a5  56                   push esi
// 005141a6  8b742410             mov esi, dword ptr [esp + 0x10]
// 005141aa  57                   push edi
// 005141ab  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005141af  c644240800           mov byte ptr [esp + 8], 0
// 005141b4  8b442408             mov eax, dword ptr [esp + 8]
// 005141b8  50                   push eax
// 005141b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005141bd  52                   push edx
// 005141be  51                   push ecx
// 005141bf  50                   push eax
// 005141c0  56                   push esi
// 005141c1  57                   push edi
// 005141c2  e8e9f5ffff           call 0x5137b0
// 005141c7  8d0cb6               lea ecx, [esi + esi*4]
// 005141ca  83c418               add esp, 0x18
// 005141cd  8d048f               lea eax, [edi + ecx*4]
// 005141d0  5f                   pop edi
// 005141d1  5e                   pop esi
// 005141d2  59                   pop ecx
// 005141d3  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@IAEPAU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
