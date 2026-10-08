// from server: 100% by auto
// roc 2008-06 0072e2d0  unit: CXTPControlGallery  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072e2d0
//
// 0072e2d0  56                   push esi
// 0072e2d1  8b742418             mov esi, dword ptr [esp + 0x18]
// 0072e2d5  8d542408             lea edx, [esp + 8]
// 0072e2d9  b803000000           mov eax, 3
// 0072e2de  52                   push edx
// 0072e2df  668906               mov word ptr [esi], ax
// 0072e2e2  e8b99ffbff           call 0x6e82a0
// 0072e2e7  f7d8                 neg eax
// 0072e2e9  1bc0                 sbb eax, eax
// 0072e2eb  83c022               add eax, 0x22
// 0072e2ee  894608               mov dword ptr [esi + 8], eax
// 0072e2f1  33c0                 xor eax, eax
// 0072e2f3  5e                   pop esi
// 0072e2f4  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleRole@CXTPControlGallery@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
