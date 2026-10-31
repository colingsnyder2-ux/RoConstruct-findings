// roc 2012-06 00401540  unit: CAboutRobloxDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00401540
//
// 00401540  b801000000           mov eax, 1
// 00401545  8405f862e100         test byte ptr [0xe162f8], al
// 0040154b  753e                 jne 0x40158b
// 0040154d  0905f862e100         or dword ptr [0xe162f8], eax
// 00401553  b8b0114000           mov eax, 0x4011b0
// 00401558  b98cffffff           mov ecx, 0xffffff8c
// 0040155d  a3fcf1d500           mov dword ptr [0xd5f1fc], eax
// 00401562  33c0                 xor eax, eax
// 00401564  890d00f2d500         mov dword ptr [0xd5f200], ecx
// 0040156a  33c9                 xor ecx, ecx
// 0040156c  c70504f2d50005000000 mov dword ptr [0xd5f204], 5
// 00401576  a308f2d500           mov dword ptr [0xd5f208], eax
// 0040157b  a30cf2d500           mov dword ptr [0xd5f20c], eax
// 00401580  a310f2d500           mov dword ptr [0xd5f210], eax
// 00401585  890d14f2d500         mov dword ptr [0xd5f214], ecx
// 0040158b  b8f0f1d500           mov eax, 0xd5f1f0
// 00401590  c3                   ret 
// copied from an identical function in another client (function ?GetDHtmlEventMap@@YAPBUDHtmlEventMapEntry@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/roc_click_7d73bb003aafb5be.cpp