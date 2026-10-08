// from server: 100% by auto
// roc 2007-08 0063cd00  unit: CRobloxControlColorSelector  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063cd00
//
// 0063cd00  56                   push esi
// 0063cd01  6854010000           push 0x154
// 0063cd06  8bf1                 mov esi, ecx
// 0063cd08  6a00                 push 0
// 0063cd0a  56                   push esi
// 0063cd0b  e87c3effff           call 0x630b8c
// 0063cd10  83c40c               add esp, 0xc
// 0063cd13  6a00                 push 0
// 0063cd15  56                   push esi
// 0063cd16  6854010000           push 0x154
// 0063cd1b  6a29                 push 0x29
// 0063cd1d  c70654010000         mov dword ptr [esi], 0x154
// 0063cd23  ff150cee7700         call dword ptr [0x77ee0c]
// 0063cd29  8bc6                 mov eax, esi
// 0063cd2b  5e                   pop esi
// 0063cd2c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CNonClientMetrics@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
