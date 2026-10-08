// from server: 100% by auto
// roc 2011-06 009c0490  unit: RBX::WedgeBuilder  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009c0490
//
// 009c0490  51                   push ecx
// 009c0491  8b542410             mov edx, dword ptr [esp + 0x10]
// 009c0495  56                   push esi
// 009c0496  8b742410             mov esi, dword ptr [esp + 0x10]
// 009c049a  57                   push edi
// 009c049b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 009c049f  c644240800           mov byte ptr [esp + 8], 0
// 009c04a4  8b442408             mov eax, dword ptr [esp + 8]
// 009c04a8  50                   push eax
// 009c04a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009c04ad  52                   push edx
// 009c04ae  51                   push ecx
// 009c04af  50                   push eax
// 009c04b0  56                   push esi
// 009c04b1  57                   push edi
// 009c04b2  e899ffffff           call 0x9c0450
// 009c04b7  8bc6                 mov eax, esi
// 009c04b9  83c418               add esp, 0x18
// 009c04bc  c1e004               shl eax, 4
// 009c04bf  03c7                 add eax, edi
// 009c04c1  5f                   pop edi
// 009c04c2  5e                   pop esi
// 009c04c3  59                   pop ecx
// 009c04c4  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
