// from server: 100% by auto
// roc 2007-08 006ffc00  unit: CXTSplitterWnd  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffc00
//
// 006ffc00  56                   push esi
// 006ffc01  8bf1                 mov esi, ecx
// 006ffc03  e8983c0000           call 0x7038a0
// 006ffc08  6a00                 push 0
// 006ffc0a  6a06                 push 6
// 006ffc0c  6a03                 push 3
// 006ffc0e  6a02                 push 2
// 006ffc10  8d4604               lea eax, [esi + 4]
// 006ffc13  50                   push eax
// 006ffc14  c706accf7d00         mov dword ptr [esi], 0x7dcfac
// 006ffc1a  ff1578ed7700         call dword ptr [0x77ed78]
// 006ffc20  8bc6                 mov eax, esi
// 006ffc22  5e                   pop esi
// 006ffc23  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
