// roc 2008-06 00721de0  unit: CXTPRibbonBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00721de0
//
// 00721de0  56                   push esi
// 00721de1  8bf1                 mov esi, ecx
// 00721de3  e858380200           call 0x745640
// 00721de8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00721dec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00721df0  898674010000         mov dword ptr [esi + 0x174], eax
// 00721df6  c7069c0b8600         mov dword ptr [esi], 0x860b9c
// 00721dfc  c746203c0b8600       mov dword ptr [esi + 0x20], 0x860b3c
// 00721e03  898e7c010000         mov dword ptr [esi + 0x17c], ecx
// 00721e09  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 00721e13  8bc6                 mov eax, esi
// 00721e15  5e                   pop esi
// 00721e16  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ??0CControlQuickAccessCommand@CXTPRibbonBar@@QAE@PAVCXTPControls@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
