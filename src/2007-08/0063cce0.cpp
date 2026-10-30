// from server: 100% by auto
// roc 2007-08 0063cce0  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cce0
//
// 0063cce0  56                   push esi
// 0063cce1  6a3c                 push 0x3c
// 0063cce3  8bf1                 mov esi, ecx
// 0063cce5  6a00                 push 0
// 0063cce7  56                   push esi
// 0063cce8  e89f3effff           call 0x630b8c
// 0063cced  83c40c               add esp, 0xc
// 0063ccf0  8bc6                 mov eax, esi
// 0063ccf2  5e                   pop esi
// 0063ccf3  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CLogFont@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
