// from server: 100% by auto
// roc 2012-06 009ee4a0  unit: CXTPPropertyGridView  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ee4a0
//
// 009ee4a0  56                   push esi
// 009ee4a1  8b742418             mov esi, dword ptr [esp + 0x18]
// 009ee4a5  8d542408             lea edx, [esp + 8]
// 009ee4a9  b803000000           mov eax, 3
// 009ee4ae  52                   push edx
// 009ee4af  668906               mov word ptr [esi], ax
// 009ee4b2  c7460800000000       mov dword ptr [esi + 8], 0
// 009ee4b9  e832b3fdff           call 0x9c97f0
// 009ee4be  85c0                 test eax, eax
// 009ee4c0  7507                 jne 0x9ee4c9
// 009ee4c2  c7460800001000       mov dword ptr [esi + 8], 0x100000
// 009ee4c9  33c0                 xor eax, eax
// 009ee4cb  5e                   pop esi
// 009ee4cc  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleState@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
