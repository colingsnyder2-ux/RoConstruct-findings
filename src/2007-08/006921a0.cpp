// from server: 100% by auto
// roc 2007-08 006921a0  unit: CXTPStatusBarPane  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006921a0
//
// 006921a0  8b442404             mov eax, dword ptr [esp + 4]
// 006921a4  8b5168               mov edx, dword ptr [ecx + 0x68]
// 006921a7  8910                 mov dword ptr [eax], edx
// 006921a9  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 006921ac  895004               mov dword ptr [eax + 4], edx
// 006921af  8b5170               mov edx, dword ptr [ecx + 0x70]
// 006921b2  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 006921b5  895008               mov dword ptr [eax + 8], edx
// 006921b8  89480c               mov dword ptr [eax + 0xc], ecx
// 006921bb  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Calendar\XTPCalendarDayViewEvent.cpp (function ?GetLastClockRect@CXTPCalendarViewEvent@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Calendar/XTPCalendarDayViewEvent.cpp
