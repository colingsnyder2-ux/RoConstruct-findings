// roc 2008-06 006fc4a0  unit: CXTPPropertyGrid  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fc4a0
//
// 006fc4a0  56                   push esi
// 006fc4a1  8bf1                 mov esi, ecx
// 006fc4a3  e84442faff           call 0x6a06ec
// 006fc4a8  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 006fc4af  7411                 je 0x6fc4c2
// 006fc4b1  6a00                 push 0
// 006fc4b3  8bce                 mov ecx, esi
// 006fc4b5  e8b6feffff           call 0x6fc370
// 006fc4ba  8bce                 mov ecx, esi
// 006fc4bc  5e                   pop esi
// 006fc4bd  e9aef1ffff           jmp 0x6fb670
// 006fc4c2  5e                   pop esi
// 006fc4c3  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?PreSubclassWindow@CXTPPropertyGrid@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGrid.cpp
