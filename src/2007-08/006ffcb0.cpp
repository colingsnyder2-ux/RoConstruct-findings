// roc 2007-08 006ffcb0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2003  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffcb0
//
// 006ffcb0  56                   push esi
// 006ffcb1  8bf1                 mov esi, ecx
// 006ffcb3  e8e83b0000           call 0x7038a0
// 006ffcb8  6a00                 push 0
// 006ffcba  6a00                 push 0
// 006ffcbc  6a01                 push 1
// 006ffcbe  6a04                 push 4
// 006ffcc0  8d4604               lea eax, [esi + 4]
// 006ffcc3  50                   push eax
// 006ffcc4  c7063cd07d00         mov dword ptr [esi], 0x7dd03c
// 006ffcca  ff1578ed7700         call dword ptr [0x77ed78]
// 006ffcd0  8bc6                 mov eax, esi
// 006ffcd2  5e                   pop esi
// 006ffcd3  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage2007@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
