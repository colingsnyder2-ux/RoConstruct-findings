// from server: 100% by auto
// roc 2007-08 0077cb90  unit: seg_00770000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cb90
//
// 0077cb90  c705045b8b009c817c00 mov dword ptr [0x8b5b04], 0x7c819c
// 0077cb9a  e8a1d6edff           call 0x65a240
// 0077cb9f  833d80878c0000       cmp dword ptr [0x8c8780], 0
// 0077cba6  751a                 jne 0x77cbc2
// 0077cba8  a17c878c00           mov eax, dword ptr [0x8c877c]
// 0077cbad  85c0                 test eax, eax
// 0077cbaf  7407                 je 0x77cbb8
// 0077cbb1  50                   push eax
// 0077cbb2  ff1584d27700         call dword ptr [0x77d284]
// 0077cbb8  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 0077cbc2  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??__Fgs_CXTPReportRow_Batch_BlocksManager@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
