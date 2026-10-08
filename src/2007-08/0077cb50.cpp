// from server: 100% by auto
// roc 2007-08 0077cb50  unit: seg_00770000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0077cb50
//
// 0077cb50  c705005b8b0094817c00 mov dword ptr [0x8b5b00], 0x7c8194
// 0077cb5a  e801d5edff           call 0x65a060
// 0077cb5f  833d80878c0000       cmp dword ptr [0x8c8780], 0
// 0077cb66  751a                 jne 0x77cb82
// 0077cb68  a17c878c00           mov eax, dword ptr [0x8c877c]
// 0077cb6d  85c0                 test eax, eax
// 0077cb6f  7407                 je 0x77cb78
// 0077cb71  50                   push eax
// 0077cb72  ff1584d27700         call dword ptr [0x77d284]
// 0077cb78  c7057c878c0000000000 mov dword ptr [0x8c877c], 0
// 0077cb82  c3                   ret 
// library xtp-11.2.2-vc8/Source\ReportControl\XTPReportControl.cpp (function ??__Fgs_CXTPReportRow_Batch_BlocksManager@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/ReportControl/XTPReportControl.cpp
