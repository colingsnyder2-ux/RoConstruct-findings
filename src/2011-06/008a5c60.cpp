// roc 2011-06 008a5c60  unit: CXTPRibbonBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a5c60
//
// 008a5c60  56                   push esi
// 008a5c61  8bf1                 mov esi, ecx
// 008a5c63  e8c8b8ffff           call 0x8a1530
// 008a5c68  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008a5c6c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008a5c70  898674010000         mov dword ptr [esi + 0x174], eax
// 008a5c76  c7064c34ad00         mov dword ptr [esi], 0xad344c
// 008a5c7c  c74620ec33ad00       mov dword ptr [esi + 0x20], 0xad33ec
// 008a5c83  898e7c010000         mov dword ptr [esi + 0x17c], ecx
// 008a5c89  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 008a5c93  8bc6                 mov eax, esi
// 008a5c95  5e                   pop esi
// 008a5c96  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ??0CControlQuickAccessCommand@CXTPRibbonBar@@QAE@PAVCXTPControls@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
