// from server: 100% by auto
// roc 2008-06 0077a410  unit: CXTPPropertyGridInplaceList  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077a410
//
// 0077a410  56                   push esi
// 0077a411  6a00                 push 0
// 0077a413  8bf1                 mov esi, ecx
// 0077a415  e8b6fcf7ff           call 0x6fa0d0
// 0077a41a  83c404               add esp, 4
// 0077a41d  8bce                 mov ecx, esi
// 0077a41f  5e                   pop esi
// 0077a420  e9e763f2ff           jmp 0x6a080c
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?PostNcDestroy@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
