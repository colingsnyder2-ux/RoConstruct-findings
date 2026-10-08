// from server: 100% by auto
// roc 2007-08 006ad700  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad700
//
// 006ad700  56                   push esi
// 006ad701  8bf1                 mov esi, ecx
// 006ad703  e898610500           call 0x7038a0
// 006ad708  6a00                 push 0
// 006ad70a  6a04                 push 4
// 006ad70c  6a02                 push 2
// 006ad70e  6a02                 push 2
// 006ad710  8d4604               lea eax, [esi + 4]
// 006ad713  50                   push eax
// 006ad714  c706bc567d00         mov dword ptr [esi], 0x7d56bc
// 006ad71a  ff1578ed7700         call dword ptr [0x77ed78]
// 006ad720  c70604577d00         mov dword ptr [esi], 0x7d5704
// 006ad726  c7462401000000       mov dword ptr [esi + 0x24], 1
// 006ad72d  c7462800000000       mov dword ptr [esi + 0x28], 0
// 006ad734  8bc6                 mov eax, esi
// 006ad736  5e                   pop esi
// 006ad737  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ??0CAppearanceSetPropertyPageFlat@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
