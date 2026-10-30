// from server: 100% by auto
// roc 2008-06 00801720  unit: seg_00800000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801720
//
// 00801720  833d2ce1970000       cmp dword ptr [0x97e12c], 0
// 00801727  c705d4669600ec398500 mov dword ptr [0x9666d4], 0x8539ec
// 00801731  751a                 jne 0x80174d
// 00801733  a128e19700           mov eax, dword ptr [0x97e128]
// 00801738  85c0                 test eax, eax
// 0080173a  7407                 je 0x801743
// 0080173c  50                   push eax
// 0080173d  ff15ec218000         call dword ptr [0x8021ec]
// 00801743  c70528e1970000000000 mov dword ptr [0x97e128], 0
// 0080174d  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??__Fg_objCXTPReportDataAllocator@@YAXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
