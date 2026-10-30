// roc 2009-06 007eb710  unit: CXTPPropertyGridInplaceButton  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb710
//
// 007eb710  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007eb713  398858010000         cmp dword ptr [eax + 0x158], ecx
// 007eb719  750c                 jne 0x7eb727
// 007eb71b  83795000             cmp dword ptr [ecx + 0x50], 0
// 007eb71f  7406                 je 0x7eb727
// 007eb721  b801000000           mov eax, 1
// 007eb726  c3                   ret 
// 007eb727  33c0                 xor eax, eax
// 007eb729  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsHot@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
