// from server: 100% by auto
// roc 2007-08 0077caf0  unit: seg_00770000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077caf0
//
// 0077caf0  833d80878c0000       cmp dword ptr [0x8c8780], 0
// 0077caf7  c705f85a8b00a4837c00 mov dword ptr [0x8b5af8], 0x7c83a4
// 0077cb01  751a                 jne 0x77cb1d
// 0077cb03  a17c878c00           mov eax, dword ptr [0x8c877c]
// 0077cb08  85c0                 test eax, eax
// 0077cb0a  7407                 je 0x77cb13
// 0077cb0c  50                   push eax
// 0077cb0d  ff1584d27700         call dword ptr [0x77d284]
// 0077cb13  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 0077cb1d  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??__Fg_objCXTPReportDataAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
