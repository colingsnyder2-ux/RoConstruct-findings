// roc 2012-06 00a69660  unit: CXTShadowWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a69660
//
// 00a69660  56                   push esi
// 00a69661  8bf1                 mov esi, ecx
// 00a69663  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00a6966a  750f                 jne 0xa6967b
// 00a6966c  ff157c3ab200         call dword ptr [0xb23a7c]
// 00a69672  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00a69675  7404                 je 0xa6967b
// 00a69677  33c0                 xor eax, eax
// 00a69679  5e                   pop esi
// 00a6967a  c3                   ret 
// 00a6967b  b801000000           mov eax, 1
// 00a69680  5e                   pop esi
// 00a69681  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?GetHilite@CXTButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
