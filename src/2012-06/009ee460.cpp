// from server: 100% by auto
// roc 2012-06 009ee460  unit: CXTPPropertyGridView  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee460
//
// 009ee460  56                   push esi
// 009ee461  8b742418             mov esi, dword ptr [esp + 0x18]
// 009ee465  8d542408             lea edx, [esp + 8]
// 009ee469  33c0                 xor eax, eax
// 009ee46b  52                   push edx
// 009ee46c  668906               mov word ptr [esi], ax
// 009ee46f  e87cb3fdff           call 0x9c97f0
// 009ee474  85c0                 test eax, eax
// 009ee476  7515                 jne 0x9ee48d
// 009ee478  b803000000           mov eax, 3
// 009ee47d  668906               mov word ptr [esi], ax
// 009ee480  c7460818000000       mov dword ptr [esi + 8], 0x18
// 009ee487  33c0                 xor eax, eax
// 009ee489  5e                   pop esi
// 009ee48a  c21400               ret 0x14
// 009ee48d  b857000780           mov eax, 0x80070057
// 009ee492  5e                   pop esi
// 009ee493  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleRole@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
