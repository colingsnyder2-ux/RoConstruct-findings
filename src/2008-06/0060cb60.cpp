// roc 2008-06 0060cb60  unit: RBX::BallBallContact  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060cb60
//
// 0060cb60  33c0                 xor eax, eax
// 0060cb62  394134               cmp dword ptr [ecx + 0x34], eax
// 0060cb65  0f95c0               setne al
// 0060cb68  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?IsVirtualMode@CXTPReportRecords@@IBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
