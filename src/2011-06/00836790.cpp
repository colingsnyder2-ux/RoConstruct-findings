// roc 2011-06 00836790  unit: VCXTPReportRow::?$CXTPSmartPtrInternalT  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00836790
//
// 00836790  56                   push esi
// 00836791  8bf1                 mov esi, ecx
// 00836793  8b4e04               mov ecx, dword ptr [esi + 4]
// 00836796  c706744dac00         mov dword ptr [esi], 0xac4d74
// 0083679c  85c9                 test ecx, ecx
// 0083679e  7405                 je 0x8367a5
// 008367a0  e8353efdff           call 0x80a5da
// 008367a5  f644240801           test byte ptr [esp + 8], 1
// 008367aa  7409                 je 0x8367b5
// 008367ac  56                   push esi
// 008367ad  e8a638fdff           call 0x80a058
// 008367b2  83c404               add esp, 4
// 008367b5  8bc6                 mov eax, esi
// 008367b7  5e                   pop esi
// 008367b8  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ??_G?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
