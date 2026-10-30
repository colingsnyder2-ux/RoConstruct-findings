// from server: 100% by auto
// roc 2011-06 00816dd0  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816dd0
//
// 00816dd0  8b442408             mov eax, dword ptr [esp + 8]
// 00816dd4  8b542404             mov edx, dword ptr [esp + 4]
// 00816dd8  50                   push eax
// 00816dd9  52                   push edx
// 00816dda  e84153c1ff           call 0x42c120
// 00816ddf  8bc8                 mov ecx, eax
// 00816de1  e82c581b00           call 0x9cc612
// 00816de6  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?SetAt@?$CMap@V?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBDVCOleVariant@@AAV3@@@QAEXPBDAAVCOleVariant@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCustomProperties.cpp
