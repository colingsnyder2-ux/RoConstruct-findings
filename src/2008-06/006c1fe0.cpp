// roc 2008-06 006c1fe0  unit: CXTPToolBar  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c1fe0
//
// 006c1fe0  56                   push esi
// 006c1fe1  8bf1                 mov esi, ecx
// 006c1fe3  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 006c1fea  7465                 je 0x6c2051
// 006c1fec  57                   push edi
// 006c1fed  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c1ff1  8d47f6               lea eax, [edi - 0xa]
// 006c1ff4  83f807               cmp eax, 7
// 006c1ff7  7745                 ja 0x6c203e
// 006c1ff9  e868a10f00           call 0x7bc166
// 006c1ffe  8b0d443e8000         mov ecx, dword ptr [0x803e44]
// 006c2004  6a13                 push 0x13
// 006c2006  6a00                 push 0
// 006c2008  6a00                 push 0
// 006c200a  6a00                 push 0
// 006c200c  6a00                 push 0
// 006c200e  51                   push ecx
// 006c200f  8bce                 mov ecx, esi
// 006c2011  e830eafdff           call 0x6a0a46
// 006c2016  8b8e04010000         mov ecx, dword ptr [esi + 0x104]
// 006c201c  e82f29feff           call 0x6a4950
// 006c2021  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c2025  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006c202b  8b11                 mov edx, dword ptr [ecx]
// 006c202d  8b5208               mov edx, dword ptr [edx + 8]
// 006c2030  50                   push eax
// 006c2031  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c2035  50                   push eax
// 006c2036  57                   push edi
// 006c2037  ffd2                 call edx
// 006c2039  5f                   pop edi
// 006c203a  5e                   pop esi
// 006c203b  c20c00               ret 0xc
// 006c203e  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c2042  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c2046  50                   push eax
// 006c2047  51                   push ecx
// 006c2048  57                   push edi
// 006c2049  8bce                 mov ecx, esi
// 006c204b  e8506effff           call 0x6b8ea0
// 006c2050  5f                   pop edi
// 006c2051  5e                   pop esi
// 006c2052  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPToolBar.cpp (function ?OnNcLButtonDown@CXTPToolBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPToolBar.cpp
