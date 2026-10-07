// roc 2012-06 00435400  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00435400
//
// 00435400  8b442404             mov eax, dword ptr [esp + 4]
// 00435404  398164010000         cmp dword ptr [ecx + 0x164], eax
// 0043540a  740b                 je 0x435417
// 0043540c  898164010000         mov dword ptr [ecx + 0x164], eax
// 00435412  e869f35400           call 0x984780
// 00435417  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetVariableItemsHeight@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
