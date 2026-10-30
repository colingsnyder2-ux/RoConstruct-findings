// roc 2010-06 00878c60  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00878c60
//
// 00878c60  56                   push esi
// 00878c61  8bf1                 mov esi, ecx
// 00878c63  e89eedf2ff           call 0x7a7a06
// 00878c68  8bce                 mov ecx, esi
// 00878c6a  e86f411000           call 0x97cdde
// 00878c6f  83e050               and eax, 0x50
// 00878c72  3c50                 cmp al, 0x50
// 00878c74  7533                 jne 0x878ca9
// 00878c76  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00878c79  57                   push edi
// 00878c7a  8bce                 mov ecx, esi
// 00878c7c  8d7803               lea edi, [eax + 3]
// 00878c7f  e8364a1000           call 0x97d6ba
// 00878c84  3bf8                 cmp edi, eax
// 00878c86  7e04                 jle 0x878c8c
// 00878c88  8bc7                 mov eax, edi
// 00878c8a  eb07                 jmp 0x878c93
// 00878c8c  8bce                 mov ecx, esi
// 00878c8e  e8274a1000           call 0x97d6ba
// 00878c93  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00878c96  0fb7c0               movzx eax, ax
// 00878c99  50                   push eax
// 00878c9a  6a00                 push 0
// 00878c9c  68a0010000           push 0x1a0
// 00878ca1  51                   push ecx
// 00878ca2  ff1554ba9e00         call dword ptr [0x9eba54]
// 00878ca8  5f                   pop edi
// 00878ca9  5e                   pop esi
// 00878caa  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?PreSubclassWindow@CXTPCustomizeToolbarsPageCheckListBox@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
