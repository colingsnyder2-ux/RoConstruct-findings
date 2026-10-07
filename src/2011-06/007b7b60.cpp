// roc 2011-06 007b7b60  unit: RBX::GuiLayerCollector  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b7b60
//
// 007b7b60  51                   push ecx
// 007b7b61  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b7b65  56                   push esi
// 007b7b66  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b7b6a  57                   push edi
// 007b7b6b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b7b6f  c644240800           mov byte ptr [esp + 8], 0
// 007b7b74  8b442408             mov eax, dword ptr [esp + 8]
// 007b7b78  50                   push eax
// 007b7b79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b7b7d  52                   push edx
// 007b7b7e  51                   push ecx
// 007b7b7f  50                   push eax
// 007b7b80  56                   push esi
// 007b7b81  57                   push edi
// 007b7b82  e889feffff           call 0x7b7a10
// 007b7b87  8bc6                 mov eax, esi
// 007b7b89  83c418               add esp, 0x18
// 007b7b8c  c1e004               shl eax, 4
// 007b7b8f  03c7                 add eax, edi
// 007b7b91  5f                   pop edi
// 007b7b92  5e                   pop esi
// 007b7b93  59                   pop ecx
// 007b7b94  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
