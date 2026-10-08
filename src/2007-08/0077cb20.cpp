// from server: 100% by auto
// roc 2007-08 0077cb20  unit: seg_00770000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cb20
//
// 0077cb20  833d90878c0000       cmp dword ptr [0x8c8790], 0
// 0077cb27  c705fc5a8b00ac837c00 mov dword ptr [0x8b5afc], 0x7c83ac
// 0077cb31  751a                 jne 0x77cb4d
// 0077cb33  a18c878c00           mov eax, dword ptr [0x8c878c]
// 0077cb38  85c0                 test eax, eax
// 0077cb3a  7407                 je 0x77cb43
// 0077cb3c  50                   push eax
// 0077cb3d  ff1584d27700         call dword ptr [0x77d284]
// 0077cb43  c7058c878c0000000000 mov dword ptr [0x8c878c], 0
// 0077cb4d  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??__Fg_objCXTPReportDataAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
