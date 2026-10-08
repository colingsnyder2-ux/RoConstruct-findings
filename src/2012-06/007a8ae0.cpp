// from server: 100% by auto
// roc 2012-06 007a8ae0  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007a8ae0
//
// 007a8ae0  51                   push ecx
// 007a8ae1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a8ae5  56                   push esi
// 007a8ae6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a8aea  57                   push edi
// 007a8aeb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007a8aef  c644240800           mov byte ptr [esp + 8], 0
// 007a8af4  8b442408             mov eax, dword ptr [esp + 8]
// 007a8af8  50                   push eax
// 007a8af9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a8afd  52                   push edx
// 007a8afe  51                   push ecx
// 007a8aff  50                   push eax
// 007a8b00  56                   push esi
// 007a8b01  57                   push edi
// 007a8b02  e899f9ffff           call 0x7a84a0
// 007a8b07  8d0cb6               lea ecx, [esi + esi*4]
// 007a8b0a  83c418               add esp, 0x18
// 007a8b0d  8d048f               lea eax, [edi + ecx*4]
// 007a8b10  5f                   pop edi
// 007a8b11  5e                   pop esi
// 007a8b12  59                   pop ecx
// 007a8b13  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@IAEPAU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
