// from server: 100% by auto
// roc 2012-06 007d0c60  unit: RBX::SpawnLocation  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d0c60
//
// 007d0c60  e88bfdffff           call 0x7d09f0
// 007d0c65  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?OnEnable@CWnd@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
