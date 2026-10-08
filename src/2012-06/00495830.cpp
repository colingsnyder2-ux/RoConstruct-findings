// from server: 100% by auto
// roc 2012-06 00495830  unit: CRobloxView  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00495830
//
// 00495830  8b442414             mov eax, dword ptr [esp + 0x14]
// 00495834  85c0                 test eax, eax
// 00495836  7403                 je 0x49583b
// 00495838  8b4004               mov eax, dword ptr [eax + 4]
// 0049583b  8b542420             mov edx, dword ptr [esp + 0x20]
// 0049583f  52                   push edx
// 00495840  8b542420             mov edx, dword ptr [esp + 0x20]
// 00495844  52                   push edx
// 00495845  8b542420             mov edx, dword ptr [esp + 0x20]
// 00495849  52                   push edx
// 0049584a  8b542418             mov edx, dword ptr [esp + 0x18]
// 0049584e  50                   push eax
// 0049584f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00495853  50                   push eax
// 00495854  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00495858  52                   push edx
// 00495859  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0049585d  50                   push eax
// 0049585e  8b4104               mov eax, dword ptr [ecx + 4]
// 00495861  52                   push edx
// 00495862  50                   push eax
// 00495863  ff156421b200         call dword ptr [0xb22164]
// 00495869  c22000               ret 0x20
// library xtp-15.2.1/Source\Calendar\XTPCalendarControl.cpp (function ?BitBlt@CDC@@QAEHHHHHPAV1@HHK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarControl.cpp
