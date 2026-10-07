// roc 2007-08 006ffc40  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffc40
//
// 006ffc40  56                   push esi
// 006ffc41  8bf1                 mov esi, ecx
// 006ffc43  e8583c0000           call 0x7038a0
// 006ffc48  6a00                 push 0
// 006ffc4a  6a06                 push 6
// 006ffc4c  6a03                 push 3
// 006ffc4e  6a02                 push 2
// 006ffc50  8d4604               lea eax, [esi + 4]
// 006ffc53  50                   push eax
// 006ffc54  c706f4cf7d00         mov dword ptr [esi], 0x7dcff4
// 006ffc5a  ff1578ed7700         call dword ptr [0x77ed78]
// 006ffc60  c7462400000000       mov dword ptr [esi + 0x24], 0
// 006ffc67  8bc6                 mov eax, esi
// 006ffc69  5e                   pop esi
// 006ffc6a  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPage2003@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
