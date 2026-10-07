// roc 2012-06 009f18f0  unit: CPropertyGridItemBrickColor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f18f0
//
// 009f18f0  56                   push esi
// 009f18f1  8b742418             mov esi, dword ptr [esp + 0x18]
// 009f18f5  85f6                 test esi, esi
// 009f18f7  7428                 je 0x9f1921
// 009f18f9  8d542408             lea edx, [esp + 8]
// 009f18fd  33c0                 xor eax, eax
// 009f18ff  52                   push edx
// 009f1900  668906               mov word ptr [esi], ax
// 009f1903  e8e87efdff           call 0x9c97f0
// 009f1908  85c0                 test eax, eax
// 009f190a  7515                 jne 0x9f1921
// 009f190c  b803000000           mov eax, 3
// 009f1911  668906               mov word ptr [esi], ax
// 009f1914  c746081c000000       mov dword ptr [esi + 8], 0x1c
// 009f191b  33c0                 xor eax, eax
// 009f191d  5e                   pop esi
// 009f191e  c21400               ret 0x14
// 009f1921  b857000780           mov eax, 0x80070057
// 009f1926  5e                   pop esi
// 009f1927  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetAccessibleRole@CXTPPropertyGridItem@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
