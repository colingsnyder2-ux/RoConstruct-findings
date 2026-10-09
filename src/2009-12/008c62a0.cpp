// roc 2009-12 008c62a0  unit: CXTPPropertyGridInplaceButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c62a0
//
// 008c62a0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008c62a3  398858010000         cmp dword ptr [eax + 0x158], ecx
// 008c62a9  750c                 jne 0x8c62b7
// 008c62ab  83795000             cmp dword ptr [ecx + 0x50], 0
// 008c62af  7406                 je 0x8c62b7
// 008c62b1  b801000000           mov eax, 1
// 008c62b6  c3                   ret 
// 008c62b7  33c0                 xor eax, eax
// 008c62b9  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsHot@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
