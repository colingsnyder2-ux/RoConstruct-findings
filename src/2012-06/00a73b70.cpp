// roc 2012-06 00a73b70  unit: CXTPRibbonTabPopupToolBar  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a73b70
//
// 00a73b70  8b442404             mov eax, dword ptr [esp + 4]
// 00a73b74  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a73b77  8910                 mov dword ptr [eax], edx
// 00a73b79  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00a73b7c  895004               mov dword ptr [eax + 4], edx
// 00a73b7f  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00a73b82  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00a73b85  895008               mov dword ptr [eax + 8], edx
// 00a73b88  89480c               mov dword ptr [eax + 0xc], ecx
// 00a73b8b  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarDayView.cpp (function ?GetEventRect@CXTPCalendarViewEvent@@QBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDayView.cpp
