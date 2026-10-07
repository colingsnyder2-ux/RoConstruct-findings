// roc 2008-06 00420810  unit: CInstanceRecord::CNameItem  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00420810
//
// 00420810  8b542404             mov edx, dword ptr [esp + 4]
// 00420814  8b4144               mov eax, dword ptr [ecx + 0x44]
// 00420817  895144               mov dword ptr [ecx + 0x44], edx
// 0042081a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?SetEditable@CXTPReportRecordItem@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp
