// roc 2012-06 00988360  unit: CXTPPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00988360
//
// 00988360  8b442414             mov eax, dword ptr [esp + 0x14]
// 00988364  85c0                 test eax, eax
// 00988366  7403                 je 0x98836b
// 00988368  8b4004               mov eax, dword ptr [eax + 4]
// 0098836b  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098836f  52                   push edx
// 00988370  8b542428             mov edx, dword ptr [esp + 0x28]
// 00988374  52                   push edx
// 00988375  8b542428             mov edx, dword ptr [esp + 0x28]
// 00988379  52                   push edx
// 0098837a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098837e  52                   push edx
// 0098837f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00988383  52                   push edx
// 00988384  8b542420             mov edx, dword ptr [esp + 0x20]
// 00988388  50                   push eax
// 00988389  8b442428             mov eax, dword ptr [esp + 0x28]
// 0098838d  50                   push eax
// 0098838e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00988392  52                   push edx
// 00988393  8b542424             mov edx, dword ptr [esp + 0x24]
// 00988397  50                   push eax
// 00988398  8b4104               mov eax, dword ptr [ecx + 4]
// 0098839b  52                   push edx
// 0098839c  50                   push eax
// 0098839d  ff15b420b200         call dword ptr [0xb220b4]
// 009883a3  c22800               ret 0x28
// library xtp-15.2.1/Source\Calendar\XTPCalendarDayViewTimeScale.cpp (function ?StretchBlt@CDC@@QAEHHHHHPAV1@HHHHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarDayViewTimeScale.cpp
