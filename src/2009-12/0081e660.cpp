// roc 2009-12 0081e660  unit: CXTPReportControl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e660
//
// 0081e660  8bd1                 mov edx, ecx
// 0081e662  e8d9feffff           call 0x81e540
// 0081e667  85c0                 test eax, eax
// 0081e669  7403                 je 0x81e66e
// 0081e66b  33c0                 xor eax, eax
// 0081e66d  c3                   ret 
// 0081e66e  8b02                 mov eax, dword ptr [edx]
// 0081e670  8bca                 mov ecx, edx
// 0081e672  8b907c010000         mov edx, dword ptr [eax + 0x17c]
// 0081e678  ffe2                 jmp edx
// copied from an identical function in another client (function ?CanCut@CXTPReportControl@@UAEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportControl.cpp