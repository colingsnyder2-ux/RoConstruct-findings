// from server: 100% by auto
// roc 2011-06 0086bea0  unit: CXTPStatusBarPane  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086bea0
//
// 0086bea0  8b442404             mov eax, dword ptr [esp + 4]
// 0086bea4  8b5168               mov edx, dword ptr [ecx + 0x68]
// 0086bea7  8910                 mov dword ptr [eax], edx
// 0086bea9  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 0086beac  895004               mov dword ptr [eax + 4], edx
// 0086beaf  8b5170               mov edx, dword ptr [ecx + 0x70]
// 0086beb2  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 0086beb5  895008               mov dword ptr [eax + 8], edx
// 0086beb8  89480c               mov dword ptr [eax + 0xc], ecx
// 0086bebb  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarDayViewEvent.cpp (function ?GetLastClockRect@CXTPCalendarViewEvent@@UBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDayViewEvent.cpp
