// from server: 100% by auto
// roc 2007-08 006365d0  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006365d0
//
// 006365d0  8b442408             mov eax, dword ptr [esp + 8]
// 006365d4  8b542404             mov edx, dword ptr [esp + 4]
// 006365d8  50                   push eax
// 006365d9  52                   push edx
// 006365da  e8b18a0600           call 0x69f090
// 006365df  8bc8                 mov ecx, eax
// 006365e1  e8b41d1000           call 0x73839a
// 006365e6  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?SetAt@?$CMap@V?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBDVCOleVariant@@AAV3@@@QAEXPBDAAVCOleVariant@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarCustomProperties.cpp
