// from server: 100% by auto
// roc 2007-08 00659da0  unit: VCXTPReportRow::?$CXTPSmartPtrInternalT  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00659da0
//
// 00659da0  56                   push esi
// 00659da1  8bf1                 mov esi, ecx
// 00659da3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00659da6  85c9                 test ecx, ecx
// 00659da8  c70664857c00         mov dword ptr [esi], 0x7c8564
// 00659dae  7405                 je 0x659db5
// 00659db0  e82f64fdff           call 0x6301e4
// 00659db5  f644240801           test byte ptr [esp + 8], 1
// 00659dba  7409                 je 0x659dc5
// 00659dbc  56                   push esi
// 00659dbd  e8a05efdff           call 0x62fc62
// 00659dc2  83c404               add esp, 4
// 00659dc5  8bc6                 mov eax, esi
// 00659dc7  5e                   pop esi
// 00659dc8  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarControl.cpp (function ??_G?$CXTPSmartPtrInternalT@VCXTPCalendarRecurrencePattern@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarControl.cpp
