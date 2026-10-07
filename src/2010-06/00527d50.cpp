// roc 2010-06 00527d50  unit: G3D::VVector3::?$Table  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00527d50
//
// 00527d50  83c104               add ecx, 4
// 00527d53  c701e0e9a100         mov dword ptr [ecx], 0xa1e9e0
// 00527d59  e962fdffff           jmp 0x527ac0
// library xtp-15.2.1/Source\ReportControl\XTPReportControl.cpp (function ??1CPair@?$CMap@PAVCXTPReportRecordItem@@PAV1@VCXTPReportRecordMergeItem@@AAV2@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportControl.cpp
