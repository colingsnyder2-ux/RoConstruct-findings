// roc 2011-06 00881b80  unit: CXTPControlGallery  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00881b80
//
// 00881b80  56                   push esi
// 00881b81  8b742418             mov esi, dword ptr [esp + 0x18]
// 00881b85  8d542408             lea edx, [esp + 8]
// 00881b89  b803000000           mov eax, 3
// 00881b8e  52                   push edx
// 00881b8f  668906               mov word ptr [esi], ax
// 00881b92  e899f7fcff           call 0x851330
// 00881b97  f7d8                 neg eax
// 00881b99  1bc0                 sbb eax, eax
// 00881b9b  83c022               add eax, 0x22
// 00881b9e  894608               mov dword ptr [esi + 8], eax
// 00881ba1  33c0                 xor eax, eax
// 00881ba3  5e                   pop esi
// 00881ba4  c21400               ret 0x14
// library xtp-15.2.1/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleRole@CXTPControlGallery@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlGallery.cpp
