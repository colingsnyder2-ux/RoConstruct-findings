// roc 2007-08 006fc870  unit: CXTPPropertyGridInplaceList  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006fc870
//
// 006fc870  56                   push esi
// 006fc871  6a00                 push 0
// 006fc873  8bf1                 mov esi, ecx
// 006fc875  e8c65ef8ff           call 0x682740
// 006fc87a  83c404               add esp, 4
// 006fc87d  8bce                 mov ecx, esi
// 006fc87f  5e                   pop esi
// 006fc880  e96335f3ff           jmp 0x62fde8
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridInplaceList.cpp (function ?PostNcDestroy@CXTPPropertyGridInplaceList@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridInplaceList.cpp
