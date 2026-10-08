// roc 2012-06 009ed480  unit: CXTPToolTipContextToolTip  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ed480
//
// 009ed480  56                   push esi
// 009ed481  6854010000           push 0x154
// 009ed486  8bf1                 mov esi, ecx
// 009ed488  6a00                 push 0
// 009ed48a  56                   push esi
// 009ed48b  e8e45ef9ff           call 0x983374
// 009ed490  83c40c               add esp, 0xc
// 009ed493  6a00                 push 0
// 009ed495  56                   push esi
// 009ed496  6854010000           push 0x154
// 009ed49b  6a29                 push 0x29
// 009ed49d  c70654010000         mov dword ptr [esi], 0x154
// 009ed4a3  ff15543ab200         call dword ptr [0xb23a54]
// 009ed4a9  8bc6                 mov eax, esi
// 009ed4ab  5e                   pop esi
// 009ed4ac  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CNonClientMetrics@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
