// roc 2008-06 006f72f0  unit: CXTPControlSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f72f0
//
// 006f72f0  e84b8afeff           call 0x6dfd40
// 006f72f5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f72f9  51                   push ecx
// 006f72fa  8bc8                 mov ecx, eax
// 006f72fc  e8df83feff           call 0x6df6e0
// 006f7301  c3                   ret 
// library xtp-11.2.2/Source\Calendar\XTPCalendarEventPropertiesDlg.cpp (function ?GetXtremeColor@@YAKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarEventPropertiesDlg.cpp
