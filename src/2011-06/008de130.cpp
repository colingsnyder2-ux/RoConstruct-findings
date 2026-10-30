// roc 2011-06 008de130  unit: RBX::ViewRbxGfx  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de130
//
// 008de130  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008de133  398858010000         cmp dword ptr [eax + 0x158], ecx
// 008de139  750c                 jne 0x8de147
// 008de13b  83795000             cmp dword ptr [ecx + 0x50], 0
// 008de13f  7406                 je 0x8de147
// 008de141  b801000000           mov eax, 1
// 008de146  c3                   ret 
// 008de147  33c0                 xor eax, eax
// 008de149  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsHot@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
