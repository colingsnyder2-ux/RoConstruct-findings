// roc 2009-06 00427750  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00427750
//
// 00427750  8b442404             mov eax, dword ptr [esp + 4]
// 00427754  398198000000         cmp dword ptr [ecx + 0x98], eax
// 0042775a  740b                 je 0x427767
// 0042775c  898198000000         mov dword ptr [ecx + 0x98], eax
// 00427762  e8397f2f00           call 0x71f6a0
// 00427767  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetBeginGroup@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
