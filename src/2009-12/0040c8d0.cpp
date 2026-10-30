// roc 2009-12 0040c8d0  unit: CNullDoc  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0040c8d0
//
// 0040c8d0  8b442404             mov eax, dword ptr [esp + 4]
// 0040c8d4  398148010000         cmp dword ptr [ecx + 0x148], eax
// 0040c8da  740b                 je 0x40c8e7
// 0040c8dc  898148010000         mov dword ptr [ecx + 0x148], eax
// 0040c8e2  e8d9933e00           call 0x7f5cc0
// 0040c8e7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetStyle@CXTPControl@@QAEXW4XTPButtonStyle@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
