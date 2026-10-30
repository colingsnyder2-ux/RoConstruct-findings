// from server: 100% by auto
// roc 2011-06 00879370  unit: CPropertyGridItemBrickColor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00879370
//
// 00879370  56                   push esi
// 00879371  8b742418             mov esi, dword ptr [esp + 0x18]
// 00879375  85f6                 test esi, esi
// 00879377  7428                 je 0x8793a1
// 00879379  8d542408             lea edx, [esp + 8]
// 0087937d  33c0                 xor eax, eax
// 0087937f  52                   push edx
// 00879380  668906               mov word ptr [esi], ax
// 00879383  e8a87ffdff           call 0x851330
// 00879388  85c0                 test eax, eax
// 0087938a  7515                 jne 0x8793a1
// 0087938c  b803000000           mov eax, 3
// 00879391  668906               mov word ptr [esi], ax
// 00879394  c746081c000000       mov dword ptr [esi + 8], 0x1c
// 0087939b  33c0                 xor eax, eax
// 0087939d  5e                   pop esi
// 0087939e  c21400               ret 0x14
// 008793a1  b857000780           mov eax, 0x80070057
// 008793a6  5e                   pop esi
// 008793a7  c21400               ret 0x14
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetAccessibleRole@CXTPPropertyGridItem@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridItem.cpp
