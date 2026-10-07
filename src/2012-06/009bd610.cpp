// roc 2012-06 009bd610  unit: CXTPReportSelectedRows  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bd610
//
// 009bd610  8b8164040000         mov eax, dword ptr [ecx + 0x464]
// 009bd616  83f806               cmp eax, 6
// 009bd619  7405                 je 0x9bd620
// 009bd61b  83f807               cmp eax, 7
// 009bd61e  7506                 jne 0x9bd626
// 009bd620  8b8168040000         mov eax, dword ptr [ecx + 0x468]
// 009bd626  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetCurrentSystemTheme@CXTPColorManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
