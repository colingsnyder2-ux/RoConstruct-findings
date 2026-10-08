// from server: 100% by auto
// roc 2012-06 009aeda0  unit: VCXTPReportRow::?$CXTPSmartPtrInternalT  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009aeda0
//
// 009aeda0  56                   push esi
// 009aeda1  8bf1                 mov esi, ecx
// 009aeda3  8b4e04               mov ecx, dword ptr [esi + 4]
// 009aeda6  c7065404c100         mov dword ptr [esi], 0xc10454
// 009aedac  85c9                 test ecx, ecx
// 009aedae  7405                 je 0x9aedb5
// 009aedb0  e8d538fdff           call 0x98268a
// 009aedb5  f644240801           test byte ptr [esp + 8], 1
// 009aedba  7409                 je 0x9aedc5
// 009aedbc  56                   push esi
// 009aedbd  e85233fdff           call 0x982114
// 009aedc2  83c404               add esp, 4
// 009aedc5  8bc6                 mov eax, esi
// 009aedc7  5e                   pop esi
// 009aedc8  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??_G?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
