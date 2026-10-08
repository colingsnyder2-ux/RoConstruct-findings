// from server: 100% by auto
// roc 2012-06 009ad740  unit: CXTPReportControl  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ad740
//
// 009ad740  e8994ffdff           call 0x9826de
// 009ad745  c20c00               ret 0xc
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?OnSize@CWnd@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
