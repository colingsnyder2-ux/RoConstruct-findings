// roc 2007-03 0044b570  unit: seg_00440000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044b570
//
// 0044b570  8b442404             mov eax, dword ptr [esp + 4]
// 0044b574  398198000000         cmp dword ptr [ecx + 0x98], eax
// 0044b57a  740b                 je 0x44b587
// 0044b57c  898198000000         mov dword ptr [ecx + 0x98], eax
// 0044b582  e8693d1e00           call 0x62f2f0
// 0044b587  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlButton.cpp (function ?SetBeginGroup@CXTPControl@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlButton.cpp
