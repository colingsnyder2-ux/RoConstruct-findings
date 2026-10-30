// roc 2012-06 00a56430  unit: CXTPPropertyGridInplaceButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56430
//
// 00a56430  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a56433  398858010000         cmp dword ptr [eax + 0x158], ecx
// 00a56439  750c                 jne 0xa56447
// 00a5643b  83795000             cmp dword ptr [ecx + 0x50], 0
// 00a5643f  7406                 je 0xa56447
// 00a56441  b801000000           mov eax, 1
// 00a56446  c3                   ret 
// 00a56447  33c0                 xor eax, eax
// 00a56449  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsHot@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
