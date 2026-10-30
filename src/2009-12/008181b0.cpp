// roc 2009-12 008181b0  unit: CRobloxReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008181b0
//
// 008181b0  8b542404             mov edx, dword ptr [esp + 4]
// 008181b4  83fa01               cmp edx, 1
// 008181b7  750a                 jne 0x8181c3
// 008181b9  8b8164030000         mov eax, dword ptr [ecx + 0x364]
// 008181bf  85c0                 test eax, eax
// 008181c1  7509                 jne 0x8181cc
// 008181c3  89542404             mov dword ptr [esp + 4], edx
// 008181c7  e996bafdff           jmp 0x7f3c62
// 008181cc  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetScrollBarCtrl@CXTPReportView@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
