// from server: 100% by auto
// roc 2008-06 00711390  unit: CPropertyGridItemBrickColor  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00711390
//
// 00711390  56                   push esi
// 00711391  8b742418             mov esi, dword ptr [esp + 0x18]
// 00711395  85f6                 test esi, esi
// 00711397  7428                 je 0x7113c1
// 00711399  8d542408             lea edx, [esp + 8]
// 0071139d  33c0                 xor eax, eax
// 0071139f  52                   push edx
// 007113a0  668906               mov word ptr [esi], ax
// 007113a3  e8f86efdff           call 0x6e82a0
// 007113a8  85c0                 test eax, eax
// 007113aa  7515                 jne 0x7113c1
// 007113ac  b803000000           mov eax, 3
// 007113b1  668906               mov word ptr [esi], ax
// 007113b4  c746081c000000       mov dword ptr [esi + 8], 0x1c
// 007113bb  33c0                 xor eax, eax
// 007113bd  5e                   pop esi
// 007113be  c21400               ret 0x14
// 007113c1  b857000780           mov eax, 0x80070057
// 007113c6  5e                   pop esi
// 007113c7  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?GetAccessibleRole@CXTPPropertyGridItem@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridItem.cpp
