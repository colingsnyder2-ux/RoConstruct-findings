// roc 2009-06 00788710  unit: CXTPToolTipContextToolTip  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00788710
//
// 00788710  56                   push esi
// 00788711  6854010000           push 0x154
// 00788716  8bf1                 mov esi, ecx
// 00788718  6a00                 push 0
// 0078871a  56                   push esi
// 0078871b  e85415f9ff           call 0x719c74
// 00788720  83c40c               add esp, 0xc
// 00788723  6a00                 push 0
// 00788725  56                   push esi
// 00788726  6854010000           push 0x154
// 0078872b  6a29                 push 0x29
// 0078872d  c70654010000         mov dword ptr [esi], 0x154
// 00788733  ff1564ee8900         call dword ptr [0x89ee64]
// 00788739  8bc6                 mov eax, esi
// 0078873b  5e                   pop esi
// 0078873c  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPPaintManager.cpp (function ??0CNonClientMetrics@CXTPPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPPaintManager.cpp
