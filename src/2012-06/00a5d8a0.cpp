// roc 2012-06 00a5d8a0  unit: CXTPPropertyGridInplaceList  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5d8a0
//
// 00a5d8a0  56                   push esi
// 00a5d8a1  6a00                 push 0
// 00a5d8a3  8bf1                 mov esi, ecx
// 00a5d8a5  e8e69df7ff           call 0x9d7690
// 00a5d8aa  83c404               add esp, 4
// 00a5d8ad  8bce                 mov ecx, esi
// 00a5d8af  5e                   pop esi
// 00a5d8b0  e9eb49f2ff           jmp 0x9822a0
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?PostNcDestroy@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
