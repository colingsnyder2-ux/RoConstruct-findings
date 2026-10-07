// roc 2008-06 0078c1c0  unit: CXTColorPageCustom  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078c1c0
//
// 0078c1c0  56                   push esi
// 0078c1c1  6a01                 push 1
// 0078c1c3  8bf1                 mov esi, ecx
// 0078c1c5  e84447f1ff           call 0x6a090e
// 0078c1ca  0fb6866c070000       movzx eax, byte ptr [esi + 0x76c]
// 0078c1d1  0fb68e70070000       movzx ecx, byte ptr [esi + 0x770]
// 0078c1d8  0fb69668070000       movzx edx, byte ptr [esi + 0x768]
// 0078c1df  c1e008               shl eax, 8
// 0078c1e2  0bc1                 or eax, ecx
// 0078c1e4  c1e008               shl eax, 8
// 0078c1e7  6a00                 push 0
// 0078c1e9  0bc2                 or eax, edx
// 0078c1eb  50                   push eax
// 0078c1ec  8bce                 mov ecx, esi
// 0078c1ee  e81dfaffff           call 0x78bc10
// 0078c1f3  5e                   pop esi
// 0078c1f4  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?OnChangeEdit@CXTColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
