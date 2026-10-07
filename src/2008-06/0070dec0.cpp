// roc 2008-06 0070dec0  unit: CXTPStatusBarPane  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070dec0
//
// 0070dec0  8b442404             mov eax, dword ptr [esp + 4]
// 0070dec4  8b5168               mov edx, dword ptr [ecx + 0x68]
// 0070dec7  8910                 mov dword ptr [eax], edx
// 0070dec9  8b516c               mov edx, dword ptr [ecx + 0x6c]
// 0070decc  895004               mov dword ptr [eax + 4], edx
// 0070decf  8b5170               mov edx, dword ptr [ecx + 0x70]
// 0070ded2  8b4974               mov ecx, dword ptr [ecx + 0x74]
// 0070ded5  895008               mov dword ptr [eax + 8], edx
// 0070ded8  89480c               mov dword ptr [eax + 0xc], ecx
// 0070dedb  c20400               ret 4
// library xtp-11.2.2/Source\Calendar\XTPCalendarDayViewEvent.cpp (function ?GetLastClockRect@CXTPCalendarViewEvent@@UAE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Calendar/XTPCalendarDayViewEvent.cpp
