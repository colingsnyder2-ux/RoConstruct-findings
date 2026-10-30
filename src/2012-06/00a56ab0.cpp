// from server: 100% by auto
// roc 2012-06 00a56ab0  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56ab0
//
// 00a56ab0  8b442404             mov eax, dword ptr [esp + 4]
// 00a56ab4  56                   push esi
// 00a56ab5  50                   push eax
// 00a56ab6  8bf1                 mov esi, ecx
// 00a56ab8  e8d3fbffff           call 0xa56690
// 00a56abd  50                   push eax
// 00a56abe  8bce                 mov ecx, esi
// 00a56ac0  e8abffffff           call 0xa56a70
// 00a56ac5  5e                   pop esi
// 00a56ac6  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?Remove@CXTPPropertyGridInplaceButtons@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
