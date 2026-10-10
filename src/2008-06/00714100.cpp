// roc 2008-06 00714100  unit: CXTPPropertyGridView  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714100
//
// 00714100  83b9b000000000       cmp dword ptr [ecx + 0xb0], 0
// 00714107  7505                 jne 0x71410e
// 00714109  33c0                 xor eax, eax
// 0071410b  c20800               ret 8
// 0071410e  8b89b0000000         mov ecx, dword ptr [ecx + 0xb0]
// 00714114  8b01                 mov eax, dword ptr [ecx]
// 00714116  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 0071411c  ffe0                 jmp eax
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?SendNotifyMessageA@CXTPPropertyGridView@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridView.cpp
