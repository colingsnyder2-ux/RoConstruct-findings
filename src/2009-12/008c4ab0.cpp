// roc 2009-12 008c4ab0  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c4ab0
//
// 008c4ab0  56                   push esi
// 008c4ab1  8bf1                 mov esi, ecx
// 008c4ab3  e80eeef2ff           call 0x7f38c6
// 008c4ab8  8bce                 mov ecx, esi
// 008c4aba  e8b3190600           call 0x926472
// 008c4abf  83e050               and eax, 0x50
// 008c4ac2  3c50                 cmp al, 0x50
// 008c4ac4  7533                 jne 0x8c4af9
// 008c4ac6  8b466c               mov eax, dword ptr [esi + 0x6c]
// 008c4ac9  57                   push edi
// 008c4aca  8bce                 mov ecx, esi
// 008c4acc  8d7803               lea edi, [eax + 3]
// 008c4acf  e8a4220600           call 0x926d78
// 008c4ad4  3bf8                 cmp edi, eax
// 008c4ad6  7e04                 jle 0x8c4adc
// 008c4ad8  8bc7                 mov eax, edi
// 008c4ada  eb07                 jmp 0x8c4ae3
// 008c4adc  8bce                 mov ecx, esi
// 008c4ade  e895220600           call 0x926d78
// 008c4ae3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c4ae6  0fb7c0               movzx eax, ax
// 008c4ae9  50                   push eax
// 008c4aea  6a00                 push 0
// 008c4aec  68a0010000           push 0x1a0
// 008c4af1  51                   push ecx
// 008c4af2  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c4af8  5f                   pop edi
// 008c4af9  5e                   pop esi
// 008c4afa  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?PreSubclassWindow@CXTPCustomizeToolbarsPageCheckListBox@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
