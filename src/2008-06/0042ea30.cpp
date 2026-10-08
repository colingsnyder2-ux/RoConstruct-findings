// from server: 100% by auto
// roc 2008-06 0042ea30  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ea30
//
// 0042ea30  8b442404             mov eax, dword ptr [esp + 4]
// 0042ea34  398160010000         cmp dword ptr [ecx + 0x160], eax
// 0042ea3a  740b                 je 0x42ea47
// 0042ea3c  898160010000         mov dword ptr [ecx + 0x160], eax
// 0042ea42  e879c52700           call 0x6aafc0
// 0042ea47  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetWidth@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
