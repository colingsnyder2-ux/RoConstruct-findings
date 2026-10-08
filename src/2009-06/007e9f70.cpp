// roc 2009-06 007e9f70  unit: CXTPCustomizeToolbarsPageCheckListBox  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e9f70
//
// 007e9f70  56                   push esi
// 007e9f71  8bf1                 mov esi, ecx
// 007e9f73  e890f0f2ff           call 0x719008
// 007e9f78  8bce                 mov ecx, esi
// 007e9f7a  e85d1f0600           call 0x84bedc
// 007e9f7f  83e050               and eax, 0x50
// 007e9f82  3c50                 cmp al, 0x50
// 007e9f84  7533                 jne 0x7e9fb9
// 007e9f86  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007e9f89  57                   push edi
// 007e9f8a  8bce                 mov ecx, esi
// 007e9f8c  8d7803               lea edi, [eax + 3]
// 007e9f8f  e878280600           call 0x84c80c
// 007e9f94  3bf8                 cmp edi, eax
// 007e9f96  7e04                 jle 0x7e9f9c
// 007e9f98  8bc7                 mov eax, edi
// 007e9f9a  eb07                 jmp 0x7e9fa3
// 007e9f9c  8bce                 mov ecx, esi
// 007e9f9e  e869280600           call 0x84c80c
// 007e9fa3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007e9fa6  0fb7c0               movzx eax, ax
// 007e9fa9  50                   push eax
// 007e9faa  6a00                 push 0
// 007e9fac  68a0010000           push 0x1a0
// 007e9fb1  51                   push ecx
// 007e9fb2  ff1590ee8900         call dword ptr [0x89ee90]
// 007e9fb8  5f                   pop edi
// 007e9fb9  33c0                 xor eax, eax
// 007e9fbb  5e                   pop esi
// 007e9fbc  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPCustomizeToolbarsPage.cpp (function ?OnSetFont@CXTPCustomizeToolbarsPageCheckListBox@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCustomizeToolbarsPage.cpp
