// roc 2012-06 009e6e30  unit: CXTPStatusBarPane  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6e30
//
// 009e6e30  8b442404             mov eax, dword ptr [esp + 4]
// 009e6e34  8b5168               mov edx, dword ptr [ecx + 0x68]
// 009e6e37  8910                 mov dword ptr [eax], edx
// 009e6e39  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 009e6e3c  895004               mov dword ptr [eax + 4], edx
// 009e6e3f  8b5170               mov edx, dword ptr [ecx + 0x70]
// 009e6e42  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 009e6e45  895008               mov dword ptr [eax + 8], edx
// 009e6e48  89480c               mov dword ptr [eax + 0xc], ecx
// 009e6e4b  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarDayViewEvent.cpp (function ?GetLastClockRect@CXTPCalendarViewEvent@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDayViewEvent.cpp
