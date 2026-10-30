// roc 2010-06 008176f0  unit: CXTPToolTipContextToolTip  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008176f0
//
// 008176f0  56                   push esi
// 008176f1  6854010000           push 0x154
// 008176f6  8bf1                 mov esi, ecx
// 008176f8  6a00                 push 0
// 008176fa  56                   push esi
// 008176fb  e8e414f9ff           call 0x7a8be4
// 00817700  83c40c               add esp, 0xc
// 00817703  6a00                 push 0
// 00817705  56                   push esi
// 00817706  6854010000           push 0x154
// 0081770b  6a29                 push 0x29
// 0081770d  c70654010000         mov dword ptr [esi], 0x154
// 00817713  ff1594ba9e00         call dword ptr [0x9eba94]
// 00817719  8bc6                 mov eax, esi
// 0081771b  5e                   pop esi
// 0081771c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CNonClientMetrics@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
