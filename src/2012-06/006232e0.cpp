// roc 2012-06 006232e0  unit: RBX::WedgeBuilder  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006232e0
//
// 006232e0  51                   push ecx
// 006232e1  8b542410             mov edx, dword ptr [esp + 0x10]
// 006232e5  56                   push esi
// 006232e6  8b742410             mov esi, dword ptr [esp + 0x10]
// 006232ea  57                   push edi
// 006232eb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006232ef  c644240800           mov byte ptr [esp + 8], 0
// 006232f4  8b442408             mov eax, dword ptr [esp + 8]
// 006232f8  50                   push eax
// 006232f9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006232fd  52                   push edx
// 006232fe  51                   push ecx
// 006232ff  50                   push eax
// 00623300  56                   push esi
// 00623301  57                   push edi
// 00623302  e869ffffff           call 0x623270
// 00623307  8bc6                 mov eax, esi
// 00623309  83c418               add esp, 0x18
// 0062330c  c1e004               shl eax, 4
// 0062330f  03c7                 add eax, edi
// 00623311  5f                   pop edi
// 00623312  5e                   pop esi
// 00623313  59                   pop ecx
// 00623314  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
