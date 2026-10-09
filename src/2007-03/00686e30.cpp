// roc 2007-03 00686e30  unit: seg_00680000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00686e30
//
// 00686e30  83b9b000000000       cmp dword ptr [ecx + 0xb0], 0
// 00686e37  7505                 jne 0x686e3e
// 00686e39  33c0                 xor eax, eax
// 00686e3b  c20800               ret 8
// 00686e3e  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00686e44  8b01                 mov eax, dword ptr [ecx]
// 00686e46  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 00686e4c  ffe0                 jmp eax
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SendNotifyMessageA@CXTPPropertyGridView@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
