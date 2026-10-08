// from server: 100% by auto
// roc 2011-06 008e5540  unit: CXTPPropertyGridInplaceList  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e5540
//
// 008e5540  56                   push esi
// 008e5541  6a00                 push 0
// 008e5543  8bf1                 mov esi, ecx
// 008e5545  e8369df7ff           call 0x85f280
// 008e554a  83c404               add esp, 4
// 008e554d  8bce                 mov ecx, esi
// 008e554f  5e                   pop esi
// 008e5550  e98f4cf2ff           jmp 0x80a1e4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?PostNcDestroy@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
