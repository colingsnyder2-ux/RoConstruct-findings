// from server: 100% by auto
// roc 2008-06 006adfe0  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006adfe0
//
// 006adfe0  56                   push esi
// 006adfe1  6a3c                 push 0x3c
// 006adfe3  8bf1                 mov esi, ecx
// 006adfe5  6a00                 push 0
// 006adfe7  56                   push esi
// 006adfe8  e81737ffff           call 0x6a1704
// 006adfed  83c40c               add esp, 0xc
// 006adff0  8bc6                 mov eax, esi
// 006adff2  5e                   pop esi
// 006adff3  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ??0CLogFont@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
