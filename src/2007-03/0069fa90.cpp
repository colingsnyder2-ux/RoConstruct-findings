// roc 2007-03 0069fa90  unit: seg_00690000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069fa90
//
// 0069fa90  56                   push esi
// 0069fa91  8b742418             mov esi, dword ptr [esp + 0x18]
// 0069fa95  8d442408             lea eax, [esp + 8]
// 0069fa99  50                   push eax
// 0069fa9a  66c7060300           mov word ptr [esi], 3
// 0069fa9f  e80c65feff           call 0x685fb0
// 0069faa4  f7d8                 neg eax
// 0069faa6  1bc0                 sbb eax, eax
// 0069faa8  83c022               add eax, 0x22
// 0069faab  894608               mov dword ptr [esi + 8], eax
// 0069faae  33c0                 xor eax, eax
// 0069fab0  5e                   pop esi
// 0069fab1  c21400               ret 0x14
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleRole@CXTPControlGallery@@MAEJUtagVARIANT@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlGallery.cpp
