// roc 2007-08 006fff50  unit: CXTPTabPaintManager::CColorSetWinXP  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fff50
//
// 006fff50  56                   push esi
// 006fff51  8bf1                 mov esi, ecx
// 006fff53  e848390000           call 0x7038a0
// 006fff58  6a00                 push 0
// 006fff5a  6a06                 push 6
// 006fff5c  6a03                 push 3
// 006fff5e  6a02                 push 2
// 006fff60  8d4604               lea eax, [esi + 4]
// 006fff63  50                   push eax
// 006fff64  c706accf7d00         mov dword ptr [esi], 0x7dcfac
// 006fff6a  ff1578ed7700         call dword ptr [0x77ed78]
// 006fff70  c70604d27d00         mov dword ptr [esi], 0x7dd204
// 006fff76  8bc6                 mov eax, esi
// 006fff78  5e                   pop esi
// 006fff79  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetPropertyPageSelected@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
