// from server: 100% by auto
// roc 2011-06 008f12f0  unit: CXTShadowWnd  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f12f0
//
// 008f12f0  56                   push esi
// 008f12f1  8bf1                 mov esi, ecx
// 008f12f3  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 008f12fa  750f                 jne 0x8f130b
// 008f12fc  ff15381ba400         call dword ptr [0xa41b38]
// 008f1302  3b4620               cmp eax, dword ptr [esi + 0x20]
// 008f1305  7404                 je 0x8f130b
// 008f1307  33c0                 xor eax, eax
// 008f1309  5e                   pop esi
// 008f130a  c3                   ret 
// 008f130b  b801000000           mov eax, 1
// 008f1310  5e                   pop esi
// 008f1311  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?GetHilite@CXTButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
