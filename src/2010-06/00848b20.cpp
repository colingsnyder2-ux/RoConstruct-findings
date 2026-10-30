// roc 2010-06 00848b20  unit: CXTPRibbonBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848b20
//
// 00848b20  56                   push esi
// 00848b21  8bf1                 mov esi, ecx
// 00848b23  e838b8ffff           call 0x844360
// 00848b28  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00848b2c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00848b30  898674010000         mov dword ptr [esi + 0x174], eax
// 00848b36  c7062c8aa600         mov dword ptr [esi], 0xa68a2c
// 00848b3c  c74620cc89a600       mov dword ptr [esi + 0x20], 0xa689cc
// 00848b43  898e7c010000         mov dword ptr [esi + 0x17c], ecx
// 00848b49  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 00848b53  8bc6                 mov eax, esi
// 00848b55  5e                   pop esi
// 00848b56  c20800               ret 8
// copied from an identical function in another client (function ??0CControlQuickAccessCommand@CXTPRibbonBar@@QAE@PAVCXTPControls@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Ribbon/XTPRibbonBar.cpp