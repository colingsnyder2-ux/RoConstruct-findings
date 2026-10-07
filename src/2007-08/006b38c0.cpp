// roc 2007-08 006b38c0  unit: CXTPControlGallery  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b38c0
//
// 006b38c0  56                   push esi
// 006b38c1  8b742418             mov esi, dword ptr [esp + 0x18]
// 006b38c5  8d442408             lea eax, [esp + 8]
// 006b38c9  50                   push eax
// 006b38ca  66c7060300           mov word ptr [esi], 3
// 006b38cf  e8fcdafbff           call 0x6713d0
// 006b38d4  f7d8                 neg eax
// 006b38d6  1bc0                 sbb eax, eax
// 006b38d8  83c022               add eax, 0x22
// 006b38db  894608               mov dword ptr [esi + 8], eax
// 006b38de  33c0                 xor eax, eax
// 006b38e0  5e                   pop esi
// 006b38e1  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleRole@CXTPControlGallery@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
