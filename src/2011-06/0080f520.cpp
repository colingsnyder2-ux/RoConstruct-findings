// from server: 100% by auto
// roc 2011-06 0080f520  unit: CRobloxControlColorSelector  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080f520
//
// 0080f520  56                   push esi
// 0080f521  6a3c                 push 0x3c
// 0080f523  8bf1                 mov esi, ecx
// 0080f525  6a00                 push 0
// 0080f527  56                   push esi
// 0080f528  e8b7bdffff           call 0x80b2e4
// 0080f52d  83c40c               add esp, 0xc
// 0080f530  8bc6                 mov eax, esi
// 0080f532  5e                   pop esi
// 0080f533  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPPaintManager.cpp (function ??0CLogFont@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPPaintManager.cpp
