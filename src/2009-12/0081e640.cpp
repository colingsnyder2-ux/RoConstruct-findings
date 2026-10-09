// roc 2009-12 0081e640  unit: CXTPReportControl  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e640
//
// 0081e640  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 0081e646  85c9                 test ecx, ecx
// 0081e648  740f                 je 0x81e659
// 0081e64a  e8f1040100           call 0x82eb40
// 0081e64f  85c0                 test eax, eax
// 0081e651  7e06                 jle 0x81e659
// 0081e653  b801000000           mov eax, 1
// 0081e658  c3                   ret 
// 0081e659  33c0                 xor eax, eax
// 0081e65b  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?CanCopy@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
