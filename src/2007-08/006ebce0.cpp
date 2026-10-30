// from server: 100% by auto
// roc 2007-08 006ebce0  unit: CXTPDockingPanePaintManager  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ebce0
//
// 006ebce0  56                   push esi
// 006ebce1  8bf1                 mov esi, ecx
// 006ebce3  e8f248f4ff           call 0x6305da
// 006ebce8  8b442408             mov eax, dword ptr [esp + 8]
// 006ebcec  89465c               mov dword ptr [esi + 0x5c], eax
// 006ebcef  33c0                 xor eax, eax
// 006ebcf1  894658               mov dword ptr [esi + 0x58], eax
// 006ebcf4  894654               mov dword ptr [esi + 0x54], eax
// 006ebcf7  c706ccad7d00         mov dword ptr [esi], 0x7dadcc
// 006ebcfd  8bc6                 mov eax, esi
// 006ebcff  5e                   pop esi
// 006ebd00  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ??0CXTPDockingPaneContextStickerWnd@@QAE@PAVCXTPDockingPaneContext@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
