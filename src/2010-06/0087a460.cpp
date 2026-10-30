// roc 2010-06 0087a460  unit: CXTPPropertyGridInplaceButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a460
//
// 0087a460  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0087a463  398858010000         cmp dword ptr [eax + 0x158], ecx
// 0087a469  750c                 jne 0x87a477
// 0087a46b  83795000             cmp dword ptr [ecx + 0x50], 0
// 0087a46f  7406                 je 0x87a477
// 0087a471  b801000000           mov eax, 1
// 0087a476  c3                   ret 
// 0087a477  33c0                 xor eax, eax
// 0087a479  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsHot@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
