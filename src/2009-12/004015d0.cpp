// roc 2009-12 004015d0  unit: CAboutRobloxDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004015d0
//
// 004015d0  b801000000           mov eax, 1
// 004015d5  84051894b700         test byte ptr [0xb79418], al
// 004015db  753e                 jne 0x40161b
// 004015dd  09051894b700         or dword ptr [0xb79418], eax
// 004015e3  b820124000           mov eax, 0x401220
// 004015e8  b98cffffff           mov ecx, 0xffffff8c
// 004015ed  a3fcf1af00           mov dword ptr [0xaff1fc], eax
// 004015f2  33c0                 xor eax, eax
// 004015f4  890d00f2af00         mov dword ptr [0xaff200], ecx
// 004015fa  33c9                 xor ecx, ecx
// 004015fc  c70504f2af0005000000 mov dword ptr [0xaff204], 5
// 00401606  a308f2af00           mov dword ptr [0xaff208], eax
// 0040160b  a30cf2af00           mov dword ptr [0xaff20c], eax
// 00401610  a310f2af00           mov dword ptr [0xaff210], eax
// 00401615  890d14f2af00         mov dword ptr [0xaff214], ecx
// 0040161b  b8f0f1af00           mov eax, 0xaff1f0
// 00401620  c3                   ret 
// copied from an identical function in another client (function ?GetDHtmlEventMap@@YAPBUDHtmlEventMapEntry@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/roc_click_7d73bb003aafb5be.cpp