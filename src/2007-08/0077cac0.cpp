// roc 2007-08 0077cac0  unit: seg_00770000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cac0
//
// 0077cac0  833d70878c0000       cmp dword ptr [0x8c8770], 0
// 0077cac7  c705f45a8b009c837c00 mov dword ptr [0x8b5af4], 0x7c839c
// 0077cad1  751a                 jne 0x77caed
// 0077cad3  a16c878c00           mov eax, dword ptr [0x8c876c]
// 0077cad8  85c0                 test eax, eax
// 0077cada  7407                 je 0x77cae3
// 0077cadc  50                   push eax
// 0077cadd  ff1584d27700         call dword ptr [0x77d284]
// 0077cae3  c7056c878c0000000000 mov dword ptr [0x8c876c], 0
// 0077caed  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??__Fg_objCXTPReportDataAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
