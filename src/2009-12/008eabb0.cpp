// roc 2009-12 008eabb0  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eabb0
//
// 008eabb0  56                   push esi
// 008eabb1  57                   push edi
// 008eabb2  8bf1                 mov esi, ecx
// 008eabb4  6a5c                 push 0x5c
// 008eabb6  33ff                 xor edi, edi
// 008eabb8  8d4604               lea eax, [esi + 4]
// 008eabbb  57                   push edi
// 008eabbc  50                   push eax
// 008eabbd  c70630d1a000         mov dword ptr [esi], 0xa0d130
// 008eabc3  e8dc9ef0ff           call 0x7f4aa4
// 008eabc8  83c40c               add esp, 0xc
// 008eabcb  897e60               mov dword ptr [esi + 0x60], edi
// 008eabce  897e64               mov dword ptr [esi + 0x64], edi
// 008eabd1  897e68               mov dword ptr [esi + 0x68], edi
// 008eabd4  897e6c               mov dword ptr [esi + 0x6c], edi
// 008eabd7  5f                   pop edi
// 008eabd8  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 008eabdf  8bc6                 mov eax, esi
// 008eabe1  5e                   pop esi
// 008eabe2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ??0CXTPScrollBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
