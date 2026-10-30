// from server: 100% by auto
// roc 2012-06 009fa190  unit: CXTPControlGallery  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009fa190
//
// 009fa190  56                   push esi
// 009fa191  8b742418             mov esi, dword ptr [esp + 0x18]
// 009fa195  8d542408             lea edx, [esp + 8]
// 009fa199  b803000000           mov eax, 3
// 009fa19e  52                   push edx
// 009fa19f  668906               mov word ptr [esi], ax
// 009fa1a2  e849f6fcff           call 0x9c97f0
// 009fa1a7  f7d8                 neg eax
// 009fa1a9  1bc0                 sbb eax, eax
// 009fa1ab  83c022               add eax, 0x22
// 009fa1ae  894608               mov dword ptr [esi + 8], eax
// 009fa1b1  33c0                 xor eax, eax
// 009fa1b3  5e                   pop esi
// 009fa1b4  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleRole@CXTPControlGallery@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlGallery.cpp
