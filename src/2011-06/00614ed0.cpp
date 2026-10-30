// from server: 100% by auto
// roc 2011-06 00614ed0  unit: RBX::MergeBinder  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614ed0
//
// 00614ed0  51                   push ecx
// 00614ed1  8b542410             mov edx, dword ptr [esp + 0x10]
// 00614ed5  56                   push esi
// 00614ed6  8b742410             mov esi, dword ptr [esp + 0x10]
// 00614eda  57                   push edi
// 00614edb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00614edf  c644240800           mov byte ptr [esp + 8], 0
// 00614ee4  8b442408             mov eax, dword ptr [esp + 8]
// 00614ee8  50                   push eax
// 00614ee9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00614eed  52                   push edx
// 00614eee  51                   push ecx
// 00614eef  50                   push eax
// 00614ef0  56                   push esi
// 00614ef1  57                   push edi
// 00614ef2  e809c1e3ff           call 0x451000
// 00614ef7  8bc6                 mov eax, esi
// 00614ef9  83c418               add esp, 0x18
// 00614efc  c1e004               shl eax, 4
// 00614eff  03c7                 add eax, edi
// 00614f01  5f                   pop edi
// 00614f02  5e                   pop esi
// 00614f03  59                   pop ecx
// 00614f04  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
