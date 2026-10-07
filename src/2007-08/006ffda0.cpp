// roc 2007-08 006ffda0  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffda0
//
// 006ffda0  53                   push ebx
// 006ffda1  56                   push esi
// 006ffda2  57                   push edi
// 006ffda3  8bf1                 mov esi, ecx
// 006ffda5  e8f63a0000           call 0x7038a0
// 006ffdaa  8b1d78ed7700         mov ebx, dword ptr [0x77ed78]
// 006ffdb0  6a00                 push 0
// 006ffdb2  6a04                 push 4
// 006ffdb4  6a02                 push 2
// 006ffdb6  6a02                 push 2
// 006ffdb8  8d7e04               lea edi, [esi + 4]
// 006ffdbb  57                   push edi
// 006ffdbc  c706bc567d00         mov dword ptr [esi], 0x7d56bc
// 006ffdc2  ffd3                 call ebx
// 006ffdc4  6a00                 push 0
// 006ffdc6  6a02                 push 2
// 006ffdc8  6a03                 push 3
// 006ffdca  6a02                 push 2
// 006ffdcc  57                   push edi
// 006ffdcd  c7065cd17d00         mov dword ptr [esi], 0x7dd15c
// 006ffdd3  ffd3                 call ebx
// 006ffdd5  5f                   pop edi
// 006ffdd6  8bc6                 mov eax, esi
// 006ffdd8  5e                   pop esi
// 006ffdd9  5b                   pop ebx
// 006ffdda  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetExcel@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
