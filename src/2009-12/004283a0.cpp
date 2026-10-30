// roc 2009-12 004283a0  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004283a0
//
// 004283a0  8b442404             mov eax, dword ptr [esp + 4]
// 004283a4  398198000000         cmp dword ptr [ecx + 0x98], eax
// 004283aa  740b                 je 0x4283b7
// 004283ac  898198000000         mov dword ptr [ecx + 0x98], eax
// 004283b2  e809d93c00           call 0x7f5cc0
// 004283b7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetBeginGroup@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
