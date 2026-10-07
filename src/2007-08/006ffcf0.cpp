// roc 2007-08 006ffcf0  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage2007  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ffcf0
//
// 006ffcf0  56                   push esi
// 006ffcf1  8bf1                 mov esi, ecx
// 006ffcf3  e8a83b0000           call 0x7038a0
// 006ffcf8  6a02                 push 2
// 006ffcfa  6a04                 push 4
// 006ffcfc  6a02                 push 2
// 006ffcfe  6a02                 push 2
// 006ffd00  8d4604               lea eax, [esi + 4]
// 006ffd03  50                   push eax
// 006ffd04  c70684d07d00         mov dword ptr [esi], 0x7dd084
// 006ffd0a  ff1578ed7700         call dword ptr [0x77ed78]
// 006ffd10  c7461400000000       mov dword ptr [esi + 0x14], 0
// 006ffd17  8bc6                 mov eax, esi
// 006ffd19  5e                   pop esi
// 006ffd1a  c3                   ret 
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ??0CAppearanceSetStateButtons@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
