// roc 2011-06 007d2430  unit: RBX::ScoreHud  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007d2430
//
// 007d2430  51                   push ecx
// 007d2431  8b542410             mov edx, dword ptr [esp + 0x10]
// 007d2435  56                   push esi
// 007d2436  8b742410             mov esi, dword ptr [esp + 0x10]
// 007d243a  57                   push edi
// 007d243b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007d243f  c644240800           mov byte ptr [esp + 8], 0
// 007d2444  8b442408             mov eax, dword ptr [esp + 8]
// 007d2448  50                   push eax
// 007d2449  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007d244d  52                   push edx
// 007d244e  51                   push ecx
// 007d244f  50                   push eax
// 007d2450  56                   push esi
// 007d2451  57                   push edi
// 007d2452  e819f3ffff           call 0x7d1770
// 007d2457  8bc6                 mov eax, esi
// 007d2459  83c418               add esp, 0x18
// 007d245c  c1e004               shl eax, 4
// 007d245f  03c7                 add eax, edi
// 007d2461  5f                   pop edi
// 007d2462  5e                   pop esi
// 007d2463  59                   pop ecx
// 007d2464  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
