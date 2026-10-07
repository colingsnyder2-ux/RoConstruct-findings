// roc 2012-06 0098ef60  unit: CXTPControlComboBoxPopupBar  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098ef60
//
// 0098ef60  8b442408             mov eax, dword ptr [esp + 8]
// 0098ef64  8b542404             mov edx, dword ptr [esp + 4]
// 0098ef68  50                   push eax
// 0098ef69  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0098ef6c  52                   push edx
// 0098ef6d  68b0000000           push 0xb0
// 0098ef72  50                   push eax
// 0098ef73  ff15043cb200         call dword ptr [0xb23c04]
// 0098ef79  c20800               ret 8
// library xtp-15.2.1/Source\Calendar\XTPCalendarView.cpp (function ?GetSel@CEdit@@QBEXAAH0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarView.cpp
