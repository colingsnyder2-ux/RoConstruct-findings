// roc 2008-06 00401810  unit: CAboutRobloxDialog  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00401810
//
// 00401810  8b442410             mov eax, dword ptr [esp + 0x10]
// 00401814  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00401818  8b542408             mov edx, dword ptr [esp + 8]
// 0040181c  50                   push eax
// 0040181d  8b442408             mov eax, dword ptr [esp + 8]
// 00401821  51                   push ecx
// 00401822  52                   push edx
// 00401823  50                   push eax
// 00401824  ff15ac288000         call dword ptr [0x8028ac]
// 0040182a  50                   push eax
// 0040182b  e850feffff           call 0x401680
// 00401830  83c414               add esp, 0x14
// 00401833  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\Calendar\XTPCalendarEvent.cpp (function ?memcpy_s@Checked@ATL@@YAXPAXIPBXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Calendar/XTPCalendarEvent.cpp
