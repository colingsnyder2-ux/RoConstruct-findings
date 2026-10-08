// from server: 100% by auto
// roc 2011-06 0085c540  unit: CXTPControlSelector  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085c540
//
// 0085c540  e89b8efeff           call 0x8453e0
// 0085c545  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0085c549  51                   push ecx
// 0085c54a  8bc8                 mov ecx, eax
// 0085c54c  e81f88feff           call 0x844d70
// 0085c551  c3                   ret 
// library xtp-15.2.1/Source\Calendar\XTPCalendarEventPropertiesDlg.cpp (function ?GetXtremeColor@@YAKI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEventPropertiesDlg.cpp
