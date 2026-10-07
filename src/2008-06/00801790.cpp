// roc 2008-06 00801790  unit: seg_00800000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801790
//
// 00801790  c705dc669600ac368500 mov dword ptr [0x9666dc], 0x8536ac
// 0080179a  e801ddecff           call 0x6cf4a0
// 0080179f  833d1ce1970000       cmp dword ptr [0x97e11c], 0
// 008017a6  751a                 jne 0x8017c2
// 008017a8  a118e19700           mov eax, dword ptr [0x97e118]
// 008017ad  85c0                 test eax, eax
// 008017af  7407                 je 0x8017b8
// 008017b1  50                   push eax
// 008017b2  ff15ec218000         call dword ptr [0x8021ec]
// 008017b8  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 008017c2  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??__Fgs_CXTPReportRow_Batch_BlocksManager@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
