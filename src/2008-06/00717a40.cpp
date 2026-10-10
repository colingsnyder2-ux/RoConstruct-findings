// roc 2008-06 00717a40  unit: CXTPPropertyGridItemEnum  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717a40
//
// 00717a40  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 00717a46  85c0                 test eax, eax
// 00717a48  7415                 je 0x717a5f
// 00717a4a  8b00                 mov eax, dword ptr [eax]
// 00717a4c  3b810c010000         cmp eax, dword ptr [ecx + 0x10c]
// 00717a52  740b                 je 0x717a5f
// 00717a54  8b11                 mov edx, dword ptr [ecx]
// 00717a56  50                   push eax
// 00717a57  8b82e8000000         mov eax, dword ptr [edx + 0xe8]
// 00717a5d  ffd0                 call eax
// 00717a5f  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?OnBeforeInsert@CXTPPropertyGridItemEnum@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp
