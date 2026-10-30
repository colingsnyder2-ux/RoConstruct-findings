// roc 2009-12 007fd5d0  unit: CXTPControlComboBoxAutoCompleteWnd  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fd5d0
//
// 007fd5d0  56                   push esi
// 007fd5d1  6854010000           push 0x154
// 007fd5d6  8bf1                 mov esi, ecx
// 007fd5d8  6a00                 push 0
// 007fd5da  56                   push esi
// 007fd5db  e8c474ffff           call 0x7f4aa4
// 007fd5e0  83c40c               add esp, 0xc
// 007fd5e3  6a00                 push 0
// 007fd5e5  56                   push esi
// 007fd5e6  6854010000           push 0x154
// 007fd5eb  6a29                 push 0x29
// 007fd5ed  c70654010000         mov dword ptr [esi], 0x154
// 007fd5f3  ff1500cc9800         call dword ptr [0x98cc00]
// 007fd5f9  8bc6                 mov eax, esi
// 007fd5fb  5e                   pop esi
// 007fd5fc  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CNonClientMetrics@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
