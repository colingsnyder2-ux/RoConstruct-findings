// from server: 100% by auto
// roc 2011-06 0068b6f0  unit: RBX::VKeyframeSequence::?$FactoryProduct  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0068b6f0
//
// 0068b6f0  51                   push ecx
// 0068b6f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068b6f5  56                   push esi
// 0068b6f6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0068b6fa  57                   push edi
// 0068b6fb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0068b6ff  c644240800           mov byte ptr [esp + 8], 0
// 0068b704  8b442408             mov eax, dword ptr [esp + 8]
// 0068b708  50                   push eax
// 0068b709  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0068b70d  52                   push edx
// 0068b70e  51                   push ecx
// 0068b70f  50                   push eax
// 0068b710  56                   push esi
// 0068b711  57                   push edi
// 0068b712  e8e9f3ffff           call 0x68ab00
// 0068b717  8d0cb6               lea ecx, [esi + esi*4]
// 0068b71a  83c418               add esp, 0x18
// 0068b71d  8d048f               lea eax, [edi + ecx*4]
// 0068b720  5f                   pop edi
// 0068b721  5e                   pop esi
// 0068b722  59                   pop ecx
// 0068b723  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@IAEPAU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
