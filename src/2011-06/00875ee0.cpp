// roc 2011-06 00875ee0  unit: CXTPPropertyGridView  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00875ee0
//
// 00875ee0  56                   push esi
// 00875ee1  8b742418             mov esi, dword ptr [esp + 0x18]
// 00875ee5  8d542408             lea edx, [esp + 8]
// 00875ee9  33c0                 xor eax, eax
// 00875eeb  52                   push edx
// 00875eec  668906               mov word ptr [esi], ax
// 00875eef  e83cb4fdff           call 0x851330
// 00875ef4  85c0                 test eax, eax
// 00875ef6  7515                 jne 0x875f0d
// 00875ef8  b803000000           mov eax, 3
// 00875efd  668906               mov word ptr [esi], ax
// 00875f00  c7460818000000       mov dword ptr [esi + 8], 0x18
// 00875f07  33c0                 xor eax, eax
// 00875f09  5e                   pop esi
// 00875f0a  c21400               ret 0x14
// 00875f0d  b857000780           mov eax, 0x80070057
// 00875f12  5e                   pop esi
// 00875f13  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleRole@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
