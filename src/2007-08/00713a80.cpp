// roc 2007-08 00713a80  unit: CXTShadowWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713a80
//
// 00713a80  56                   push esi
// 00713a81  8bf1                 mov esi, ecx
// 00713a83  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00713a8a  750f                 jne 0x713a9b
// 00713a8c  ff1544ec7700         call dword ptr [0x77ec44]
// 00713a92  3b4620               cmp eax, dword ptr [esi + 0x20]
// 00713a95  7404                 je 0x713a9b
// 00713a97  33c0                 xor eax, eax
// 00713a99  5e                   pop esi
// 00713a9a  c3                   ret 
// 00713a9b  b801000000           mov eax, 1
// 00713aa0  5e                   pop esi
// 00713aa1  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?GetHilite@CXTButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
