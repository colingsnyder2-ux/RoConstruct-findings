// roc 2007-08 006ffd30  unit: CXTPTabPaintManager::CAppearanceSetStateButtons  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffd30
//
// 006ffd30  56                   push esi
// 006ffd31  8bf1                 mov esi, ecx
// 006ffd33  e8683b0000           call 0x7038a0
// 006ffd38  6a00                 push 0
// 006ffd3a  6a06                 push 6
// 006ffd3c  6a03                 push 3
// 006ffd3e  6a02                 push 2
// 006ffd40  8d4604               lea eax, [esi + 4]
// 006ffd43  50                   push eax
// 006ffd44  c706f4cf7d00         mov dword ptr [esi], 0x7dcff4
// 006ffd4a  ff1578ed7700         call dword ptr [0x77ed78]
// 006ffd50  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006ffd57  c70614d17d00         mov dword ptr [esi], 0x7dd114
// 006ffd5d  c7462001000000       mov dword ptr [esi + 0x20], 1
// 006ffd64  8bc6                 mov eax, esi
// 006ffd66  5e                   pop esi
// 006ffd67  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
