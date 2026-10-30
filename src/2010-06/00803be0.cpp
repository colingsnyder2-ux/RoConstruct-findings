// roc 2010-06 00803be0  unit: CXTPPropertyGrid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00803be0
//
// 00803be0  56                   push esi
// 00803be1  8bf1                 mov esi, ecx
// 00803be3  e81e3efaff           call 0x7a7a06
// 00803be8  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 00803bef  7411                 je 0x803c02
// 00803bf1  6a00                 push 0
// 00803bf3  8bce                 mov ecx, esi
// 00803bf5  e8b6feffff           call 0x803ab0
// 00803bfa  8bce                 mov ecx, esi
// 00803bfc  5e                   pop esi
// 00803bfd  e9aef1ffff           jmp 0x802db0
// 00803c02  5e                   pop esi
// 00803c03  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreSubclassWindow@CXTPPropertyGrid@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
