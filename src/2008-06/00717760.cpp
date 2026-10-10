// roc 2008-06 00717760  unit: CPropertyGridItemBrickColor  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00717760
//
// 00717760  8b8110010000         mov eax, dword ptr [ecx + 0x110]
// 00717766  85c0                 test eax, eax
// 00717768  7415                 je 0x71777f
// 0071776a  8b00                 mov eax, dword ptr [eax]
// 0071776c  3b810c010000         cmp eax, dword ptr [ecx + 0x10c]
// 00717772  740b                 je 0x71777f
// 00717774  8b11                 mov edx, dword ptr [ecx]
// 00717776  50                   push eax
// 00717777  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 0071777d  ffd0                 call eax
// 0071777f  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItemBool.cpp (function ?OnBeforeInsert@CXTPPropertyGridItemBool@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItemBool.cpp
