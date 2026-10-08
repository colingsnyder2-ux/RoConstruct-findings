// roc 2009-06 00774e20  unit: CXTPPropertyGrid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00774e20
//
// 00774e20  56                   push esi
// 00774e21  8bf1                 mov esi, ecx
// 00774e23  e8763cfaff           call 0x718a9e
// 00774e28  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 00774e2f  7411                 je 0x774e42
// 00774e31  6a00                 push 0
// 00774e33  8bce                 mov ecx, esi
// 00774e35  e8b6feffff           call 0x774cf0
// 00774e3a  8bce                 mov ecx, esi
// 00774e3c  5e                   pop esi
// 00774e3d  e9aef1ffff           jmp 0x773ff0
// 00774e42  5e                   pop esi
// 00774e43  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreSubclassWindow@CXTPPropertyGrid@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
