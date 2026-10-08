// roc 2008-06 006ae000  unit: CRobloxControlColorSelector  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ae000
//
// 006ae000  56                   push esi
// 006ae001  6854010000           push 0x154
// 006ae006  8bf1                 mov esi, ecx
// 006ae008  6a00                 push 0
// 006ae00a  56                   push esi
// 006ae00b  e8f436ffff           call 0x6a1704
// 006ae010  83c40c               add esp, 0xc
// 006ae013  6a00                 push 0
// 006ae015  56                   push esi
// 006ae016  6854010000           push 0x154
// 006ae01b  6a29                 push 0x29
// 006ae01d  c70654010000         mov dword ptr [esi], 0x154
// 006ae023  ff15902c8000         call dword ptr [0x802c90]
// 006ae029  8bc6                 mov eax, esi
// 006ae02b  5e                   pop esi
// 006ae02c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CNonClientMetrics@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
