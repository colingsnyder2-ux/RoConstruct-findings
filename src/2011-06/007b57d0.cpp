// roc 2011-06 007b57d0  unit: RBX::TreeStage  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007b57d0
//
// 007b57d0  51                   push ecx
// 007b57d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 007b57d5  56                   push esi
// 007b57d6  8b742410             mov esi, dword ptr [esp + 0x10]
// 007b57da  57                   push edi
// 007b57db  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007b57df  c644240800           mov byte ptr [esp + 8], 0
// 007b57e4  8b442408             mov eax, dword ptr [esp + 8]
// 007b57e8  50                   push eax
// 007b57e9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b57ed  52                   push edx
// 007b57ee  51                   push ecx
// 007b57ef  50                   push eax
// 007b57f0  56                   push esi
// 007b57f1  57                   push edi
// 007b57f2  e849feffff           call 0x7b5640
// 007b57f7  8bc6                 mov eax, esi
// 007b57f9  83c418               add esp, 0x18
// 007b57fc  c1e004               shl eax, 4
// 007b57ff  03c7                 add eax, edi
// 007b5801  5f                   pop edi
// 007b5802  5e                   pop esi
// 007b5803  59                   pop ecx
// 007b5804  c20c00               ret 0xc
// library templates-boost-1_34_1/vector_pod16.cpp (function ?_Ufill@?$vector@UE@@V?$allocator@UE@@@std@@@std@@IAEPAUE@@PAU3@IABU3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 vector_pod16.cpp
