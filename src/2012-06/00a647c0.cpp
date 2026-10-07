// roc 2012-06 00a647c0  unit: CXTColorPageCustom  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a647c0
//
// 00a647c0  56                   push esi
// 00a647c1  6a01                 push 1
// 00a647c3  8bf1                 mov esi, ecx
// 00a647c5  e8d2dbf1ff           call 0x98239c
// 00a647ca  0fb6866c070000       movzx eax, byte ptr [esi + 0x76c]
// 00a647d1  0fb68e70070000       movzx ecx, byte ptr [esi + 0x770]
// 00a647d8  0fb69668070000       movzx edx, byte ptr [esi + 0x768]
// 00a647df  c1e008               shl eax, 8
// 00a647e2  0bc1                 or eax, ecx
// 00a647e4  c1e008               shl eax, 8
// 00a647e7  6a00                 push 0
// 00a647e9  0bc2                 or eax, edx
// 00a647eb  50                   push eax
// 00a647ec  8bce                 mov ecx, esi
// 00a647ee  e81dfaffff           call 0xa64210
// 00a647f3  5e                   pop esi
// 00a647f4  c3                   ret 
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnChangeEdit@CXTPColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
