// roc 2008-06 0079e0b0  unit: CXTPTabPaintManager::CColorSetWhidbey  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079e0b0
//
// 0079e0b0  56                   push esi
// 0079e0b1  57                   push edi
// 0079e0b2  8bf1                 mov esi, ecx
// 0079e0b4  6a5c                 push 0x5c
// 0079e0b6  33ff                 xor edi, edi
// 0079e0b8  8d4604               lea eax, [esi + 4]
// 0079e0bb  57                   push edi
// 0079e0bc  50                   push eax
// 0079e0bd  c706f0da8600         mov dword ptr [esi], 0x86daf0
// 0079e0c3  e83c36f0ff           call 0x6a1704
// 0079e0c8  83c40c               add esp, 0xc
// 0079e0cb  897e60               mov dword ptr [esi + 0x60], edi
// 0079e0ce  897e64               mov dword ptr [esi + 0x64], edi
// 0079e0d1  897e68               mov dword ptr [esi + 0x68], edi
// 0079e0d4  897e6c               mov dword ptr [esi + 0x6c], edi
// 0079e0d7  5f                   pop edi
// 0079e0d8  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 0079e0df  8bc6                 mov eax, esi
// 0079e0e1  5e                   pop esi
// 0079e0e2  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPScrollBar.cpp (function ??0CXTPScrollBase@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPScrollBar.cpp
