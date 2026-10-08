// from server: 100% by auto
// roc 2012-06 0091b830  unit: seg_00910000  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0091b830
//
// 0091b830  51                   push ecx
// 0091b831  8b542410             mov edx, dword ptr [esp + 0x10]
// 0091b835  56                   push esi
// 0091b836  8b742410             mov esi, dword ptr [esp + 0x10]
// 0091b83a  57                   push edi
// 0091b83b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0091b83f  c644240800           mov byte ptr [esp + 8], 0
// 0091b844  8b442408             mov eax, dword ptr [esp + 8]
// 0091b848  50                   push eax
// 0091b849  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0091b84d  52                   push edx
// 0091b84e  51                   push ecx
// 0091b84f  50                   push eax
// 0091b850  56                   push esi
// 0091b851  57                   push edi
// 0091b852  e839fbffff           call 0x91b390
// 0091b857  8d0cb6               lea ecx, [esi + esi*4]
// 0091b85a  83c418               add esp, 0x18
// 0091b85d  8d048f               lea eax, [edi + ecx*4]
// 0091b860  5f                   pop edi
// 0091b861  5e                   pop esi
// 0091b862  59                   pop ecx
// 0091b863  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@IAEPAU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
