// roc 2007-08 0067f860  unit: CXTPControlSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f860
//
// 0067f860  e80b97feff           call 0x668f70
// 0067f865  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0067f869  51                   push ecx
// 0067f86a  8bc8                 mov ecx, eax
// 0067f86c  e8bf90feff           call 0x668930
// 0067f871  c3                   ret 
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarEventPropertiesDlg.cpp (function ?GetXtremeColor@@YAKI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarEventPropertiesDlg.cpp
