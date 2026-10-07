// roc 2007-08 00459890  unit: CRobloxWnd  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00459890
//
// 00459890  8b41cc               mov eax, dword ptr [ecx - 0x34]
// 00459893  6a00                 push 0
// 00459895  6a00                 push 0
// 00459897  50                   push eax
// 00459898  ff1584ed7700         call dword ptr [0x77ed84]
// 0045989e  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPScrollBar.cpp (function ?RedrawScrollBar@CXTPScrollBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPScrollBar.cpp
