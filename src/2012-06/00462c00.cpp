// roc 2012-06 00462c00  unit: RBX::MergeBinder  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00462c00
//
// 00462c00  51                   push ecx
// 00462c01  8b542410             mov edx, dword ptr [esp + 0x10]
// 00462c05  56                   push esi
// 00462c06  8b742410             mov esi, dword ptr [esp + 0x10]
// 00462c0a  57                   push edi
// 00462c0b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00462c0f  c644240800           mov byte ptr [esp + 8], 0
// 00462c14  8b442408             mov eax, dword ptr [esp + 8]
// 00462c18  50                   push eax
// 00462c19  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00462c1d  52                   push edx
// 00462c1e  51                   push ecx
// 00462c1f  50                   push eax
// 00462c20  56                   push esi
// 00462c21  57                   push edi
// 00462c22  e8e94a2a00           call 0x707710
// 00462c27  8bc6                 mov eax, esi
// 00462c29  83c418               add esp, 0x18
// 00462c2c  c1e004               shl eax, 4
// 00462c2f  03c7                 add eax, edi
// 00462c31  5f                   pop edi
// 00462c32  5e                   pop esi
// 00462c33  59                   pop ecx
// 00462c34  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
