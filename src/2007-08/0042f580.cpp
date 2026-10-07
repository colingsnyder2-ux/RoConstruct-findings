// roc 2007-08 0042f580  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f580
//
// 0042f580  8b442404             mov eax, dword ptr [esp + 4]
// 0042f584  398160010000         cmp dword ptr [ecx + 0x160], eax
// 0042f58a  740b                 je 0x42f597
// 0042f58c  898160010000         mov dword ptr [ecx + 0x160], eax
// 0042f592  e819a82000           call 0x639db0
// 0042f597  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlButton.cpp (function ?SetWidth@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlButton.cpp
