// from server: 100% by auto
// roc 2012-06 00a02130  unit: CXTPRibbonTheme  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a02130
//
// 00a02130  56                   push esi
// 00a02131  8bf1                 mov esi, ecx
// 00a02133  e8a8f70400           call 0xa518e0
// 00a02138  6a00                 push 0
// 00a0213a  6a04                 push 4
// 00a0213c  6a02                 push 2
// 00a0213e  6a02                 push 2
// 00a02140  8d4604               lea eax, [esi + 4]
// 00a02143  50                   push eax
// 00a02144  c706dcb9c100         mov dword ptr [esi], 0xc1b9dc
// 00a0214a  ff156c3bb200         call dword ptr [0xb23b6c]
// 00a02150  8bc6                 mov eax, esi
// 00a02152  5e                   pop esi
// 00a02153  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPTabClientWnd.cpp (function ??0CAppearanceSetFlat@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPTabClientWnd.cpp
