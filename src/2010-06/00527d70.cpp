// roc 2010-06 00527d70  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527d70
//
// 00527d70  83c104               add ecx, 4
// 00527d73  c701f0e9a100         mov dword ptr [ecx], 0xa1e9f0
// 00527d79  e942840000           jmp 0x5301c0
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ??1CPair@?$CMap@PAVCXTPReportRecordItem@@PAV1@VCXTPReportRecordMergeItem@@AAV2@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
