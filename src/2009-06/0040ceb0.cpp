// roc 2009-06 0040ceb0  unit: CIDEBrowserView  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040ceb0
//
// 0040ceb0  8b442404             mov eax, dword ptr [esp + 4]
// 0040ceb4  398148010000         cmp dword ptr [ecx + 0x148], eax
// 0040ceba  740b                 je 0x40cec7
// 0040cebc  898148010000         mov dword ptr [ecx + 0x148], eax
// 0040cec2  e8d9273100           call 0x71f6a0
// 0040cec7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPControlPopupColor.cpp (function ?SetStyle@CXTPControl@@QAEXW4XTPButtonStyle@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlPopupColor.cpp
