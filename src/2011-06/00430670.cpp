// roc 2011-06 00430670  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430670
//
// 00430670  8b442404             mov eax, dword ptr [esp + 4]
// 00430674  398164010000         cmp dword ptr [ecx + 0x164], eax
// 0043067a  740b                 je 0x430687
// 0043067c  898164010000         mov dword ptr [ecx + 0x164], eax
// 00430682  e869be3d00           call 0x80c4f0
// 00430687  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetVariableItemsHeight@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
