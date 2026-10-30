// roc 2010-06 0087a030  unit: CXTPControlCustom  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a030
//
// 0087a030  56                   push esi
// 0087a031  8bf1                 mov esi, ecx
// 0087a033  c7869001000000000000 mov dword ptr [esi + 0x190], 0
// 0087a03d  e84effffff           call 0x879f90
// 0087a042  8bce                 mov ecx, esi
// 0087a044  5e                   pop esi
// 0087a045  e976fdf2ff           jmp 0x7a9dc0
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnRemoved@CXTPControlCustom@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
