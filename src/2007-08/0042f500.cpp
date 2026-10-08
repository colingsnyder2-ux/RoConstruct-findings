// from server: 100% by auto
// roc 2007-08 0042f500  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f500
//
// 0042f500  8b442404             mov eax, dword ptr [esp + 4]
// 0042f504  398198000000         cmp dword ptr [ecx + 0x98], eax
// 0042f50a  740b                 je 0x42f517
// 0042f50c  898198000000         mov dword ptr [ecx + 0x98], eax
// 0042f512  e899a82000           call 0x639db0
// 0042f517  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlButton.cpp (function ?SetBeginGroup@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlButton.cpp
