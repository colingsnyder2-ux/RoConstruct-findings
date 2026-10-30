// from server: 100% by auto
// roc 2008-06 008016f0  unit: seg_00800000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 008016f0
//
// 008016f0  833d1ce1970000       cmp dword ptr [0x97e11c], 0
// 008016f7  c705d0669600e4398500 mov dword ptr [0x9666d0], 0x8539e4
// 00801701  751a                 jne 0x80171d
// 00801703  a118e19700           mov eax, dword ptr [0x97e118]
// 00801708  85c0                 test eax, eax
// 0080170a  7407                 je 0x801713
// 0080170c  50                   push eax
// 0080170d  ff15ec218000         call dword ptr [0x8021ec]
// 00801713  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 0080171d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??__Fg_objCXTPReportDataAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
