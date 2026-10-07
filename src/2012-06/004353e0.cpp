// roc 2012-06 004353e0  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004353e0
//
// 004353e0  8b442404             mov eax, dword ptr [esp + 4]
// 004353e4  398160010000         cmp dword ptr [ecx + 0x160], eax
// 004353ea  740b                 je 0x4353f7
// 004353ec  898160010000         mov dword ptr [ecx + 0x160], eax
// 004353f2  e889f35400           call 0x984780
// 004353f7  c20400               ret 4
// library xtp-13.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?SetVariableItemsHeight@CXTPPropertyGrid@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
