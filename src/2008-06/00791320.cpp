// roc 2008-06 00791320  unit: CXTShadowWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791320
//
// 00791320  56                   push esi
// 00791321  8bf1                 mov esi, ecx
// 00791323  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 0079132a  750f                 jne 0x79133b
// 0079132c  ff15ac2d8000         call dword ptr [0x802dac]
// 00791332  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00791335  7404                 je 0x79133b
// 00791337  33c0                 xor eax, eax
// 00791339  5e                   pop esi
// 0079133a  c3                   ret 
// 0079133b  b801000000           mov eax, 1
// 00791340  5e                   pop esi
// 00791341  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?GetHilite@CXTButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
