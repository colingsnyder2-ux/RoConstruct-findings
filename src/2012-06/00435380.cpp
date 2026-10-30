// roc 2012-06 00435380  unit: CRobloxControlColorSelector  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00435380
//
// 00435380  8b442404             mov eax, dword ptr [esp + 4]
// 00435384  398198000000         cmp dword ptr [ecx + 0x98], eax
// 0043538a  740b                 je 0x435397
// 0043538c  898198000000         mov dword ptr [ecx + 0x98], eax
// 00435392  e8e9f35400           call 0x984780
// 00435397  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetBeginGroup@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
