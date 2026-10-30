// from server: 100% by auto
// roc 2012-06 006bae90  unit: RBX::VStandardOut::?$sp_counted_impl_p  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006bae90
//
// 006bae90  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006bae94  8d44240c             lea eax, [esp + 0xc]
// 006bae98  50                   push eax
// 006bae99  51                   push ecx
// 006bae9a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006bae9e  e8edf9ffff           call 0x6ba890
// 006baea3  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Format@?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@QAAXPBDZZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
