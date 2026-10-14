// roc 2008-06 007469a0  unit: CXTPReportPaintManager  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007469a0
//
// 007469a0  8b8944020000         mov ecx, dword ptr [ecx + 0x244]
// 007469a6  83e1fb               and ecx, 0xfffffffb
// 007469a9  33c0                 xor eax, eax
// 007469ab  83f908               cmp ecx, 8
// 007469ae  771b                 ja 0x7469cb
// 007469b0  ff248dcc697400       jmp dword ptr [ecx*4 + 0x7469cc]
// 007469b7  33c0                 xor eax, eax
// 007469b9  c3                   ret 
// 007469ba  b801000000           mov eax, 1
// 007469bf  c3                   ret 
// 007469c0  b802000000           mov eax, 2
// 007469c5  c3                   ret 
// 007469c6  b808000000           mov eax, 8
// 007469cb  c3                   ret 
// 007469cc  b769                 mov bh, 0x69
// 007469ce  7400                 je 0x7469d0
// 007469d0  ba697400c0           mov edx, 0xc0007469
// 007469d5  697400cb697400cb     imul esi, dword ptr [eax + eax - 0x35], 0xcb007469
// 007469dd  697400cb697400cb     imul esi, dword ptr [eax + eax - 0x35], 0xcb007469
// 007469e5  697400cb697400c6     imul esi, dword ptr [eax + eax - 0x35], 0xc6007469
// library xtp-11.2.2-lib-strlen/Source\ReportControl\XTPReportPaintManager.cpp (function ?GetFooterRowsDividerHeight@CXTPReportPaintManager@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp
