// roc 2010-06 00428860  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00428860
//
// 00428860  8b442404             mov eax, dword ptr [esp + 4]
// 00428864  398164010000         cmp dword ptr [ecx + 0x164], eax
// 0042886a  740b                 je 0x428877
// 0042886c  898164010000         mov dword ptr [ecx + 0x164], eax
// 00428872  e889153800           call 0x7a9e00
// 00428877  c20400               ret 4
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetVariableItemsHeight@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
