// roc 2012-06 009d4960  unit: CXTPControlSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009d4960
//
// 009d4960  e8fb8efeff           call 0x9bd860
// 009d4965  8b4c2404             mov ecx, dword ptr [esp + 4]
// 009d4969  51                   push ecx
// 009d496a  8bc8                 mov ecx, eax
// 009d496c  e82f88feff           call 0x9bd1a0
// 009d4971  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventPropertiesDlg.cpp (function ?GetXtremeColor@@YAKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventPropertiesDlg.cpp
