// from server: 100% by auto
// roc 2012-06 008e5320  unit: RBX::VehicleSeat  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e5320
//
// 008e5320  8b91b0000000         mov edx, dword ptr [ecx + 0xb0]
// 008e5326  8b442404             mov eax, dword ptr [esp + 4]
// 008e532a  8910                 mov dword ptr [eax], edx
// 008e532c  8b91b4000000         mov edx, dword ptr [ecx + 0xb4]
// 008e5332  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 008e5338  895004               mov dword ptr [eax + 4], edx
// 008e533b  894808               mov dword ptr [eax + 8], ecx
// 008e533e  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarEvent.cpp (function ?GetRException_EndTimeOrig@CXTPCalendarEvent@@UBE?AVCOleDateTime@ATL@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarEvent.cpp
