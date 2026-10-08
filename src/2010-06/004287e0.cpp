// roc 2010-06 004287e0  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004287e0
//
// 004287e0  8b442404             mov eax, dword ptr [esp + 4]
// 004287e4  398198000000         cmp dword ptr [ecx + 0x98], eax
// 004287ea  740b                 je 0x4287f7
// 004287ec  898198000000         mov dword ptr [ecx + 0x98], eax
// 004287f2  e809163800           call 0x7a9e00
// 004287f7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetBeginGroup@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
