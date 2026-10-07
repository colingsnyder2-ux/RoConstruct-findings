// roc 2012-06 0049e4c0  unit: CrashReporter  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0049e4c0
//
// 0049e4c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0049e4c4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0049e4c8  50                   push eax
// 0049e4c9  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0049e4cd  52                   push edx
// 0049e4ce  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0049e4d2  50                   push eax
// 0049e4d3  52                   push edx
// 0049e4d4  51                   push ecx
// 0049e4d5  ff156c3bb200         call dword ptr [0xb23b6c]
// 0049e4db  c21000               ret 0x10
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?SetRect@CRect@@QAEXHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
