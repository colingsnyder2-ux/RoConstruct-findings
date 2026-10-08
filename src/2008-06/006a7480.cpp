// from server: 100% by auto
// roc 2008-06 006a7480  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a7480
//
// 006a7480  8b442408             mov eax, dword ptr [esp + 8]
// 006a7484  8b542404             mov edx, dword ptr [esp + 4]
// 006a7488  50                   push eax
// 006a7489  52                   push edx
// 006a748a  e831140700           call 0x7188c0
// 006a748f  8bc8                 mov ecx, eax
// 006a7491  e86e4b1100           call 0x7bc004
// 006a7496  c20800               ret 8
// library xtp-11.2.2/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?SetAt@?$CMap@V?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBDVCOleVariant@@AAV3@@@QAEXPBDAAVCOleVariant@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarCustomProperties.cpp
