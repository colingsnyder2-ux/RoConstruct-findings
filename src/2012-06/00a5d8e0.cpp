// from server: 100% by auto
// roc 2012-06 00a5d8e0  unit: CXTPPropertyGridInplaceList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5d8e0
//
// 00a5d8e0  56                   push esi
// 00a5d8e1  8bf1                 mov esi, ecx
// 00a5d8e3  e8de50f2ff           call 0x9829c6
// 00a5d8e8  c706bc3ec200         mov dword ptr [esi], 0xc23ebc
// 00a5d8ee  c7465400000000       mov dword ptr [esi + 0x54], 0
// 00a5d8f5  8bc6                 mov eax, esi
// 00a5d8f7  5e                   pop esi
// 00a5d8f8  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventPropertiesDlg.cpp (function ??0CXTPCalendarEventLabelComboBox@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventPropertiesDlg.cpp
