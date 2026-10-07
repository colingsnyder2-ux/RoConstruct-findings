// roc 2012-06 0098f040  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098f040
//
// 0098f040  8b442408             mov eax, dword ptr [esp + 8]
// 0098f044  8b542404             mov edx, dword ptr [esp + 4]
// 0098f048  50                   push eax
// 0098f049  52                   push edx
// 0098f04a  e8b16c0600           call 0x9f5d00
// 0098f04f  8bc8                 mov ecx, eax
// 0098f051  e876a51000           call 0xa995cc
// 0098f056  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarCustomProperties.cpp (function ?SetAt@?$CMap@V?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@PBDVCOleVariant@@AAV3@@@QAEXPBDAAVCOleVariant@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCustomProperties.cpp
