// roc 2009-12 008c4b00  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4b00
//
// 008c4b00  56                   push esi
// 008c4b01  8bf1                 mov esi, ecx
// 008c4b03  e828f3f2ff           call 0x7f3e30
// 008c4b08  8bce                 mov ecx, esi
// 008c4b0a  e863190600           call 0x926472
// 008c4b0f  83e050               and eax, 0x50
// 008c4b12  3c50                 cmp al, 0x50
// 008c4b14  7533                 jne 0x8c4b49
// 008c4b16  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008c4b19  57                   push edi
// 008c4b1a  8bce                 mov ecx, esi
// 008c4b1c  8d7803               lea edi, [eax + 3]
// 008c4b1f  e854220600           call 0x926d78
// 008c4b24  3bf8                 cmp edi, eax
// 008c4b26  7e04                 jle 0x8c4b2c
// 008c4b28  8bc7                 mov eax, edi
// 008c4b2a  eb07                 jmp 0x8c4b33
// 008c4b2c  8bce                 mov ecx, esi
// 008c4b2e  e845220600           call 0x926d78
// 008c4b33  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c4b36  0fb7c0               movzx eax, ax
// 008c4b39  50                   push eax
// 008c4b3a  6a00                 push 0
// 008c4b3c  68a0010000           push 0x1a0
// 008c4b41  51                   push ecx
// 008c4b42  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c4b48  5f                   pop edi
// 008c4b49  33c0                 xor eax, eax
// 008c4b4b  5e                   pop esi
// 008c4b4c  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnSetFont@CXTPCustomizeToolbarsPageCheckListBox@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
