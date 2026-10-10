// roc 2008-06 00722080  unit: CXTPRibbonBar::CControlQuickAccessMorePopup  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722080
//
// 00722080  56                   push esi
// 00722081  57                   push edi
// 00722082  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00722086  8bf1                 mov esi, ecx
// 00722088  85ff                 test edi, edi
// 0072208a  7425                 je 0x7220b1
// 0072208c  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00722092  85c9                 test ecx, ecx
// 00722094  7405                 je 0x72209b
// 00722096  e849ebf7ff           call 0x6a0be4
// 0072209b  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 007220a1  8b01                 mov eax, dword ptr [ecx]
// 007220a3  8b9044020000         mov edx, dword ptr [eax + 0x244]
// 007220a9  ffd2                 call edx
// 007220ab  898678010000         mov dword ptr [esi + 0x178], eax
// 007220b1  57                   push edi
// 007220b2  8bce                 mov ecx, esi
// 007220b4  e8a75dfcff           call 0x6e7e60
// 007220b9  5f                   pop edi
// 007220ba  5e                   pop esi
// 007220bb  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?OnSetPopup@CControlQuickAccessMorePopup@CXTPRibbonBar@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
