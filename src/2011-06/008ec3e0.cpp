// roc 2011-06 008ec3e0  unit: CXTColorPageCustom  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ec3e0
//
// 008ec3e0  56                   push esi
// 008ec3e1  6a01                 push 1
// 008ec3e3  8bf1                 mov esi, ecx
// 008ec3e5  e8fcdef1ff           call 0x80a2e6
// 008ec3ea  0fb6866c070000       movzx eax, byte ptr [esi + 0x76c]
// 008ec3f1  0fb68e70070000       movzx ecx, byte ptr [esi + 0x770]
// 008ec3f8  0fb69668070000       movzx edx, byte ptr [esi + 0x768]
// 008ec3ff  c1e008               shl eax, 8
// 008ec402  0bc1                 or eax, ecx
// 008ec404  c1e008               shl eax, 8
// 008ec407  6a00                 push 0
// 008ec409  0bc2                 or eax, edx
// 008ec40b  50                   push eax
// 008ec40c  8bce                 mov ecx, esi
// 008ec40e  e81dfaffff           call 0x8ebe30
// 008ec413  5e                   pop esi
// 008ec414  c3                   ret 
// library xtp-15.2.1/Source\Controls\Dialog\XTPColorPageCustom.cpp (function ?OnChangeEdit@CXTPColorPageCustom@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Dialog/XTPColorPageCustom.cpp
