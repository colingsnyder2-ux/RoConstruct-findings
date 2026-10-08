// from server: 100% by auto
// roc 2007-08 006ad630  unit: CXTPRibbonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad630
//
// 006ad630  56                   push esi
// 006ad631  8bf1                 mov esi, ecx
// 006ad633  e868620500           call 0x7038a0
// 006ad638  6a00                 push 0
// 006ad63a  6a04                 push 4
// 006ad63c  6a02                 push 2
// 006ad63e  6a02                 push 2
// 006ad640  8d4604               lea eax, [esi + 4]
// 006ad643  50                   push eax
// 006ad644  c706bc567d00         mov dword ptr [esi], 0x7d56bc
// 006ad64a  ff1578ed7700         call dword ptr [0x77ed78]
// 006ad650  8bc6                 mov eax, esi
// 006ad652  5e                   pop esi
// 006ad653  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CAppearanceSetFlat@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
