// roc 2011-06 007e77e0  unit: RBX::AdvRotateTool  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007e77e0
//
// 007e77e0  51                   push ecx
// 007e77e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e77e5  56                   push esi
// 007e77e6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007e77ea  57                   push edi
// 007e77eb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007e77ef  c644240800           mov byte ptr [esp + 8], 0
// 007e77f4  8b442408             mov eax, dword ptr [esp + 8]
// 007e77f8  50                   push eax
// 007e77f9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007e77fd  52                   push edx
// 007e77fe  51                   push ecx
// 007e77ff  50                   push eax
// 007e7800  56                   push esi
// 007e7801  57                   push edi
// 007e7802  e839feffff           call 0x7e7640
// 007e7807  8d0cb6               lea ecx, [esi + esi*4]
// 007e780a  83c418               add esp, 0x18
// 007e780d  8d048f               lea eax, [edi + ecx*4]
// 007e7810  5f                   pop edi
// 007e7811  5e                   pop esi
// 007e7812  59                   pop ecx
// 007e7813  c20c00               ret 0xc
// library boost-1.34.1/libs\regex\src\instances.cpp (function ?_Ufill@?$vector@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@V?$allocator@U?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@@std@@@std@@IAEPAU?$sub_match@V?$_String_const_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@boost@@PAU34@IABU34@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/instances.cpp
