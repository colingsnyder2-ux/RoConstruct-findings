// roc 2009-06 00810010  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00810010
//
// 00810010  56                   push esi
// 00810011  57                   push edi
// 00810012  8bf1                 mov esi, ecx
// 00810014  6a5c                 push 0x5c
// 00810016  33ff                 xor edi, edi
// 00810018  8d4604               lea eax, [esi + 4]
// 0081001b  57                   push edi
// 0081001c  50                   push eax
// 0081001d  c706c0cc9000         mov dword ptr [esi], 0x90ccc0
// 00810023  e84c9cf0ff           call 0x719c74
// 00810028  83c40c               add esp, 0xc
// 0081002b  897e60               mov dword ptr [esi + 0x60], edi
// 0081002e  897e64               mov dword ptr [esi + 0x64], edi
// 00810031  897e68               mov dword ptr [esi + 0x68], edi
// 00810034  897e6c               mov dword ptr [esi + 0x6c], edi
// 00810037  5f                   pop edi
// 00810038  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 0081003f  8bc6                 mov eax, esi
// 00810041  5e                   pop esi
// 00810042  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ??0CXTPScrollBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
