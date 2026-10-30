// roc 2010-06 00878cb0  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00878cb0
//
// 00878cb0  56                   push esi
// 00878cb1  8bf1                 mov esi, ecx
// 00878cb3  e8b8f2f2ff           call 0x7a7f70
// 00878cb8  8bce                 mov ecx, esi
// 00878cba  e81f411000           call 0x97cdde
// 00878cbf  83e050               and eax, 0x50
// 00878cc2  3c50                 cmp al, 0x50
// 00878cc4  7533                 jne 0x878cf9
// 00878cc6  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00878cc9  57                   push edi
// 00878cca  8bce                 mov ecx, esi
// 00878ccc  8d7803               lea edi, [eax + 3]
// 00878ccf  e8e6491000           call 0x97d6ba
// 00878cd4  3bf8                 cmp edi, eax
// 00878cd6  7e04                 jle 0x878cdc
// 00878cd8  8bc7                 mov eax, edi
// 00878cda  eb07                 jmp 0x878ce3
// 00878cdc  8bce                 mov ecx, esi
// 00878cde  e8d7491000           call 0x97d6ba
// 00878ce3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00878ce6  0fb7c0               movzx eax, ax
// 00878ce9  50                   push eax
// 00878cea  6a00                 push 0
// 00878cec  68a0010000           push 0x1a0
// 00878cf1  51                   push ecx
// 00878cf2  ff1554ba9e00         call dword ptr [0x9eba54]
// 00878cf8  5f                   pop edi
// 00878cf9  33c0                 xor eax, eax
// 00878cfb  5e                   pop esi
// 00878cfc  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnSetFont@CXTPCustomizeToolbarsPageCheckListBox@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
