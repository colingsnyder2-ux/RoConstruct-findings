// roc 2012-06 009e37f0  unit: CXTPPropertyGrid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e37f0
//
// 009e37f0  56                   push esi
// 009e37f1  8bf1                 mov esi, ecx
// 009e37f3  e888e9f9ff           call 0x982180
// 009e37f8  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 009e37ff  7411                 je 0x9e3812
// 009e3801  6a00                 push 0
// 009e3803  8bce                 mov ecx, esi
// 009e3805  e8b6feffff           call 0x9e36c0
// 009e380a  8bce                 mov ecx, esi
// 009e380c  5e                   pop esi
// 009e380d  e9aef1ffff           jmp 0x9e29c0
// 009e3812  5e                   pop esi
// 009e3813  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreSubclassWindow@CXTPPropertyGrid@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
