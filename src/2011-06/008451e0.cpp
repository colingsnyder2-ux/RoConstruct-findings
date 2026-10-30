// from server: 100% by auto
// roc 2011-06 008451e0  unit: CXTPReportSelectedRows  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008451e0
//
// 008451e0  8b8164040000         mov eax, dword ptr [ecx + 0x464]
// 008451e6  83f806               cmp eax, 6
// 008451e9  7405                 je 0x8451f0
// 008451eb  83f807               cmp eax, 7
// 008451ee  7506                 jne 0x8451f6
// 008451f0  8b8168040000         mov eax, dword ptr [ecx + 0x468]
// 008451f6  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPColorManager.cpp (function ?GetCurrentSystemTheme@CXTPColorManager@@QBE?AW4XTPCurrentSystemTheme@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPColorManager.cpp
