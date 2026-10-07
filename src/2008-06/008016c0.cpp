// roc 2008-06 008016c0  unit: seg_00800000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008016c0
//
// 008016c0  833d0ce1970000       cmp dword ptr [0x97e10c], 0
// 008016c7  c705cc669600dc398500 mov dword ptr [0x9666cc], 0x8539dc
// 008016d1  751a                 jne 0x8016ed
// 008016d3  a108e19700           mov eax, dword ptr [0x97e108]
// 008016d8  85c0                 test eax, eax
// 008016da  7407                 je 0x8016e3
// 008016dc  50                   push eax
// 008016dd  ff15ec218000         call dword ptr [0x8021ec]
// 008016e3  c70508e1970000000000 mov dword ptr [0x97e108], 0
// 008016ed  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??__Fg_objCXTPReportDataAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
