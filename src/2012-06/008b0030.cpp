// roc 2012-06 008b0030  unit: RBX::GuiLayerCollector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008b0030
//
// 008b0030  51                   push ecx
// 008b0031  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b0035  56                   push esi
// 008b0036  8b742410             mov esi, dword ptr [esp + 0x10]
// 008b003a  57                   push edi
// 008b003b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008b003f  c644240800           mov byte ptr [esp + 8], 0
// 008b0044  8b442408             mov eax, dword ptr [esp + 8]
// 008b0048  50                   push eax
// 008b0049  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008b004d  52                   push edx
// 008b004e  51                   push ecx
// 008b004f  50                   push eax
// 008b0050  56                   push esi
// 008b0051  57                   push edi
// 008b0052  e8e9fbffff           call 0x8afc40
// 008b0057  8bc6                 mov eax, esi
// 008b0059  83c418               add esp, 0x18
// 008b005c  c1e004               shl eax, 4
// 008b005f  03c7                 add eax, edi
// 008b0061  5f                   pop edi
// 008b0062  5e                   pop esi
// 008b0063  59                   pop ecx
// 008b0064  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
