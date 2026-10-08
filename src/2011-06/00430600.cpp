// roc 2011-06 00430600  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00430600
//
// 00430600  8b442404             mov eax, dword ptr [esp + 4]
// 00430604  398198000000         cmp dword ptr [ecx + 0x98], eax
// 0043060a  740b                 je 0x430617
// 0043060c  898198000000         mov dword ptr [ecx + 0x98], eax
// 00430612  e8d9be3d00           call 0x80c4f0
// 00430617  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetBeginGroup@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
