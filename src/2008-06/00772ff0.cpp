// from server: 100% by auto
// roc 2008-06 00772ff0  unit: CXTPPropertyGridInplaceButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772ff0
//
// 00772ff0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00772ff3  398858010000         cmp dword ptr [eax + 0x158], ecx
// 00772ff9  750c                 jne 0x773007
// 00772ffb  83795000             cmp dword ptr [ecx + 0x50], 0
// 00772fff  7406                 je 0x773007
// 00773001  b801000000           mov eax, 1
// 00773006  c3                   ret 
// 00773007  33c0                 xor eax, eax
// 00773009  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsHot@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
