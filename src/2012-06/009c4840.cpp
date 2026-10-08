// roc 2012-06 009c4840  unit: CXTPToolBar::CControlButtonExpand  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c4840
//
// 009c4840  56                   push esi
// 009c4841  8b742408             mov esi, dword ptr [esp + 8]
// 009c4845  57                   push edi
// 009c4846  56                   push esi
// 009c4847  8bf9                 mov edi, ecx
// 009c4849  e8f2fbffff           call 0x9c4440
// 009c484e  837e2800             cmp dword ptr [esi + 0x28], 0
// 009c4852  752e                 jne 0x9c4882
// 009c4854  8b8778010000         mov eax, dword ptr [edi + 0x178]
// 009c485a  85c0                 test eax, eax
// 009c485c  7413                 je 0x9c4871
// 009c485e  8b80d8000000         mov eax, dword ptr [eax + 0xd8]
// 009c4864  6a00                 push 0
// 009c4866  8d4c2410             lea ecx, [esp + 0x10]
// 009c486a  89442410             mov dword ptr [esp + 0x10], eax
// 009c486e  51                   push ecx
// 009c486f  eb1a                 jmp 0x9c488b
// 009c4871  6a00                 push 0
// 009c4873  8d4c2410             lea ecx, [esp + 0x10]
// 009c4877  c744241000000000     mov dword ptr [esp + 0x10], 0
// 009c487f  51                   push ecx
// 009c4880  eb09                 jmp 0x9c488b
// 009c4882  6a00                 push 0
// 009c4884  8d977c010000         lea edx, [edi + 0x17c]
// 009c488a  52                   push edx
// 009c488b  68d832c100           push 0xc132d8
// 009c4890  56                   push esi
// 009c4891  e88a3a0100           call 0x9d8320
// 009c4896  8b462c               mov eax, dword ptr [esi + 0x2c]
// 009c4899  83c410               add esp, 0x10
// 009c489c  83f804               cmp eax, 4
// 009c489f  761c                 jbe 0x9c48bd
// 009c48a1  83f812               cmp eax, 0x12
// 009c48a4  7317                 jae 0x9c48bd
// 009c48a6  6a00                 push 0
// 009c48a8  81c748010000         add edi, 0x148
// 009c48ae  57                   push edi
// 009c48af  682481ba00           push 0xba8124
// 009c48b4  56                   push esi
// 009c48b5  e8663a0100           call 0x9d8320
// 009c48ba  83c410               add esp, 0x10
// 009c48bd  5f                   pop edi
// 009c48be  5e                   pop esi
// 009c48bf  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPDockState.cpp (function ?DoPropExchange@CXTPControlPopup@@UAEXPAVCXTPPropExchange@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPDockState.cpp
