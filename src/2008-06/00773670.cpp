// from server: 100% by auto
// roc 2008-06 00773670  unit: PAVCXTPPropertyGridInplaceButton::?$CArray  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773670
//
// 00773670  8b442404             mov eax, dword ptr [esp + 4]
// 00773674  56                   push esi
// 00773675  50                   push eax
// 00773676  8bf1                 mov esi, ecx
// 00773678  e8d3fbffff           call 0x773250
// 0077367d  50                   push eax
// 0077367e  8bce                 mov ecx, esi
// 00773680  e8abffffff           call 0x773630
// 00773685  5e                   pop esi
// 00773686  c20400               ret 4
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?Remove@CXTPPropertyGridInplaceButtons@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
