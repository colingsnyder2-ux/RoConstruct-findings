// from server: 100% by auto
// roc 2012-06 00987830  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00987830
//
// 00987830  56                   push esi
// 00987831  6a3c                 push 0x3c
// 00987833  8bf1                 mov esi, ecx
// 00987835  6a00                 push 0
// 00987837  56                   push esi
// 00987838  e837bbffff           call 0x983374
// 0098783d  83c40c               add esp, 0xc
// 00987840  8bc6                 mov eax, esi
// 00987842  5e                   pop esi
// 00987843  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ??0CLogFont@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
