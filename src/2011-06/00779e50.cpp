// from server: 100% by auto
// roc 2011-06 00779e50  unit: seg_00770000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00779e50
//
// 00779e50  51                   push ecx
// 00779e51  8b542410             mov edx, dword ptr [esp + 0x10]
// 00779e55  56                   push esi
// 00779e56  8b742410             mov esi, dword ptr [esp + 0x10]
// 00779e5a  57                   push edi
// 00779e5b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00779e5f  c644240800           mov byte ptr [esp + 8], 0
// 00779e64  8b442408             mov eax, dword ptr [esp + 8]
// 00779e68  50                   push eax
// 00779e69  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00779e6d  52                   push edx
// 00779e6e  51                   push ecx
// 00779e6f  50                   push eax
// 00779e70  56                   push esi
// 00779e71  57                   push edi
// 00779e72  e8f9feffff           call 0x779d70
// 00779e77  8d0cb6               lea ecx, [esi + esi*4]
// 00779e7a  83c418               add esp, 0x18
// 00779e7d  8d048f               lea eax, [edi + ecx*4]
// 00779e80  5f                   pop edi
// 00779e81  5e                   pop esi
// 00779e82  59                   pop ecx
// 00779e83  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@IAEPAU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
