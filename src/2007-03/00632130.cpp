// roc 2007-03 00632130  unit: seg_00630000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00632130
//
// 00632130  56                   push esi
// 00632131  6854010000           push 0x154
// 00632136  8bf1                 mov esi, ecx
// 00632138  6a00                 push 0
// 0063213a  56                   push esi
// 0063213b  e8dccefeff           call 0x61f01c
// 00632140  83c40c               add esp, 0xc
// 00632143  6a00                 push 0
// 00632145  56                   push esi
// 00632146  6854010000           push 0x154
// 0063214b  6a29                 push 0x29
// 0063214d  c70654010000         mov dword ptr [esi], 0x154
// 00632153  ff150cef7700         call dword ptr [0x77ef0c]
// 00632159  8bc6                 mov eax, esi
// 0063215b  5e                   pop esi
// 0063215c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CNonClientMetrics@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
