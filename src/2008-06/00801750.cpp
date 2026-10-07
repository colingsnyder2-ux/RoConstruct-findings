// roc 2008-06 00801750  unit: seg_00800000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801750
//
// 00801750  c705d8669600a4368500 mov dword ptr [0x9666d8], 0x8536a4
// 0080175a  e861dbecff           call 0x6cf2c0
// 0080175f  833d1ce1970000       cmp dword ptr [0x97e11c], 0
// 00801766  751a                 jne 0x801782
// 00801768  a118e19700           mov eax, dword ptr [0x97e118]
// 0080176d  85c0                 test eax, eax
// 0080176f  7407                 je 0x801778
// 00801771  50                   push eax
// 00801772  ff15ec218000         call dword ptr [0x8021ec]
// 00801778  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 00801782  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??__Fgs_CXTPReportRow_Batch_BlocksManager@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
