// roc 2011-06 008de7a0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de7a0
//
// 008de7a0  8b442404             mov eax, dword ptr [esp + 4]
// 008de7a4  56                   push esi
// 008de7a5  50                   push eax
// 008de7a6  8bf1                 mov esi, ecx
// 008de7a8  e8d3fbffff           call 0x8de380
// 008de7ad  50                   push eax
// 008de7ae  8bce                 mov ecx, esi
// 008de7b0  e8abffffff           call 0x8de760
// 008de7b5  5e                   pop esi
// 008de7b6  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?Remove@CXTPPropertyGridInplaceButtons@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
