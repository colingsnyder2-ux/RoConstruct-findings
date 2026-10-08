// from server: 100% by auto
// roc 2012-06 00999e60  unit: CXTPImageManagerResource::CBitmapDC  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00999e60
//
// 00999e60  8b442404             mov eax, dword ptr [esp + 4]
// 00999e64  56                   push esi
// 00999e65  8b7108               mov esi, dword ptr [ecx + 8]
// 00999e68  50                   push eax
// 00999e69  56                   push esi
// 00999e6a  e861800d00           call 0xa71ed0
// 00999e6f  8bc6                 mov eax, esi
// 00999e71  5e                   pop esi
// 00999e72  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Add@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@QAEHAAV?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
