// roc 2012-06 00448c40  unit: CMultiPlayerPane  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00448c40
//
// 00448c40  56                   push esi
// 00448c41  8bf1                 mov esi, ecx
// 00448c43  e87e9d5300           call 0x9829c6
// 00448c48  c706641cb500         mov dword ptr [esi], 0xb51c64
// 00448c4e  c7465400000000       mov dword ptr [esi + 0x54], 0
// 00448c55  8bc6                 mov eax, esi
// 00448c57  5e                   pop esi
// 00448c58  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventPropertiesDlg.cpp (function ??0CXTPCalendarEventLabelComboBox@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventPropertiesDlg.cpp
