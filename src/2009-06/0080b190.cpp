// roc 2009-06 0080b190  unit: CXTCaptionButton  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0080b190
//
// 0080b190  8b442408             mov eax, dword ptr [esp + 8]
// 0080b194  56                   push esi
// 0080b195  57                   push edi
// 0080b196  8bf1                 mov esi, ecx
// 0080b198  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080b19c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0080b19f  50                   push eax
// 0080b1a0  51                   push ecx
// 0080b1a1  6a0c                 push 0xc
// 0080b1a3  52                   push edx
// 0080b1a4  ff155ced8900         call dword ptr [0x89ed5c]
// 0080b1aa  6a00                 push 0
// 0080b1ac  8bf8                 mov edi, eax
// 0080b1ae  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080b1b1  6a00                 push 0
// 0080b1b3  50                   push eax
// 0080b1b4  ff157cee8900         call dword ptr [0x89ee7c]
// 0080b1ba  8bc7                 mov eax, edi
// 0080b1bc  5f                   pop edi
// 0080b1bd  5e                   pop esi
// 0080b1be  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTButton.cpp (function ?OnSetText@CXTButton@@IAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButton.cpp
