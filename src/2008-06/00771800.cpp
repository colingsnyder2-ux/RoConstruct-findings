// roc 2008-06 00771800  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00771800
//
// 00771800  56                   push esi
// 00771801  8bf1                 mov esi, ecx
// 00771803  e8e4eef2ff           call 0x6a06ec
// 00771808  8bce                 mov ecx, esi
// 0077180a  e8fba70400           call 0x7bc00a
// 0077180f  83e050               and eax, 0x50
// 00771812  3c50                 cmp al, 0x50
// 00771814  7533                 jne 0x771849
// 00771816  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00771819  57                   push edi
// 0077181a  8bce                 mov ecx, esi
// 0077181c  8d7803               lea edi, [eax + 3]
// 0077181f  e83ab10400           call 0x7bc95e
// 00771824  3bf8                 cmp edi, eax
// 00771826  7e04                 jle 0x77182c
// 00771828  8bc7                 mov eax, edi
// 0077182a  eb07                 jmp 0x771833
// 0077182c  8bce                 mov ecx, esi
// 0077182e  e82bb10400           call 0x7bc95e
// 00771833  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00771836  0fb7c0               movzx eax, ax
// 00771839  50                   push eax
// 0077183a  6a00                 push 0
// 0077183c  68a0010000           push 0x1a0
// 00771841  51                   push ecx
// 00771842  ff15142e8000         call dword ptr [0x802e14]
// 00771848  5f                   pop edi
// 00771849  5e                   pop esi
// 0077184a  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?PreSubclassWindow@CXTPCustomizeToolbarsPageCheckListBox@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
