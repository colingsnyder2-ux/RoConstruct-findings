// roc 2012-06 009adae0  unit: CXTPReportControl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009adae0
//
// 009adae0  837c240801           cmp dword ptr [esp + 8], 1
// 009adae5  7523                 jne 0x9adb0a
// 009adae7  8b81c0010000         mov eax, dword ptr [ecx + 0x1c0]
// 009adaed  83e801               sub eax, 1
// 009adaf0  7518                 jne 0x9adb0a
// 009adaf2  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 009adaf8  8b4878               mov ecx, dword ptr [eax + 0x78]
// 009adafb  51                   push ecx
// 009adafc  ff15783bb200         call dword ptr [0xb23b78]
// 009adb02  b801000000           mov eax, 1
// 009adb07  c20c00               ret 0xc
// 009adb0a  e8cf4bfdff           call 0x9826de
// 009adb0f  c20c00               ret 0xc
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnSetCursor@CXTPReportControl@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
