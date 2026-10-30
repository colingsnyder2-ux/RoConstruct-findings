// roc 2009-06 0073d290  unit: CRobloxReportView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073d290
//
// 0073d290  8b542404             mov edx, dword ptr [esp + 4]
// 0073d294  83fa01               cmp edx, 1
// 0073d297  750a                 jne 0x73d2a3
// 0073d299  8b8164030000         mov eax, dword ptr [ecx + 0x364]
// 0073d29f  85c0                 test eax, eax
// 0073d2a1  7509                 jne 0x73d2ac
// 0073d2a3  89542404             mov dword ptr [esp + 4], edx
// 0073d2a7  e982bbfdff           jmp 0x718e2e
// 0073d2ac  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportView.cpp (function ?GetScrollBarCtrl@CXTPReportView@@MBEPAVCScrollBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportView.cpp
