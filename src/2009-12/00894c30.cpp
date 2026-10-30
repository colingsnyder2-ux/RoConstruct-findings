// roc 2009-12 00894c30  unit: CXTPRibbonBar::CControlQuickAccessMorePopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894c30
//
// 00894c30  56                   push esi
// 00894c31  57                   push edi
// 00894c32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00894c36  8bf1                 mov esi, ecx
// 00894c38  85ff                 test edi, edi
// 00894c3a  7425                 je 0x894c61
// 00894c3c  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00894c42  85c9                 test ecx, ecx
// 00894c44  7405                 je 0x894c4b
// 00894c46  e891f1f5ff           call 0x7f3ddc
// 00894c4b  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00894c51  8b01                 mov eax, dword ptr [ecx]
// 00894c53  8b9044020000         mov edx, dword ptr [eax + 0x244]
// 00894c59  ffd2                 call edx
// 00894c5b  898678010000         mov dword ptr [esi + 0x178], eax
// 00894c61  57                   push edi
// 00894c62  8bce                 mov ecx, esi
// 00894c64  e8e768faff           call 0x83b550
// 00894c69  5f                   pop edi
// 00894c6a  5e                   pop esi
// 00894c6b  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPopup@CControlQuickAccessMorePopup@CXTPRibbonBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp