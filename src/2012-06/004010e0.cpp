// roc 2012-06 004010e0  unit: CInsertObjectDialog  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004010e0
//
// 004010e0  0fb7542404           movzx edx, word ptr [esp + 4]
// 004010e5  89542404             mov dword ptr [esp + 4], edx
// 004010e9  e9e2115800           jmp 0x9822d0
// library xtp-15.2.1/Source\Calendar\XTPCalendarControlView.cpp (function ?Create@CDialog@@UAEHIPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControlView.cpp
