// from server: 100% by auto
// roc 2008-06 0042e9d0  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042e9d0
//
// 0042e9d0  8b442404             mov eax, dword ptr [esp + 4]
// 0042e9d4  398198000000         cmp dword ptr [ecx + 0x98], eax
// 0042e9da  740b                 je 0x42e9e7
// 0042e9dc  898198000000         mov dword ptr [ecx + 0x98], eax
// 0042e9e2  e8d9c52700           call 0x6aafc0
// 0042e9e7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetBeginGroup@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
