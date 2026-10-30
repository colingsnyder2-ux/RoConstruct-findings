// roc 2007-08 0069aaf0  unit: CXTPPropertyGridView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069aaf0
//
// 0069aaf0  83b9b000000000       cmp dword ptr [ecx + 0xb0], 0
// 0069aaf7  7505                 jne 0x69aafe
// 0069aaf9  33c0                 xor eax, eax
// 0069aafb  c20800               ret 8
// 0069aafe  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 0069ab04  8b01                 mov eax, dword ptr [ecx]
// 0069ab06  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0069ab0c  ffe0                 jmp eax
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SendNotifyMessageA@CXTPPropertyGridView@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
