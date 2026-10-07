// roc 2008-06 00714210  unit: CXTPPropertyGridView  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00714210
//
// 00714210  56                   push esi
// 00714211  8b742418             mov esi, dword ptr [esp + 0x18]
// 00714215  8d542408             lea edx, [esp + 8]
// 00714219  33c0                 xor eax, eax
// 0071421b  52                   push edx
// 0071421c  668906               mov word ptr [esi], ax
// 0071421f  e87c40fdff           call 0x6e82a0
// 00714224  85c0                 test eax, eax
// 00714226  7515                 jne 0x71423d
// 00714228  b803000000           mov eax, 3
// 0071422d  668906               mov word ptr [esi], ax
// 00714230  c7460818000000       mov dword ptr [esi + 8], 0x18
// 00714237  33c0                 xor eax, eax
// 00714239  5e                   pop esi
// 0071423a  c21400               ret 0x14
// 0071423d  b857000780           mov eax, 0x80070057
// 00714242  5e                   pop esi
// 00714243  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleRole@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
