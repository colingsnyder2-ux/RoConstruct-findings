// roc 2011-06 004015b0  unit: CAboutRobloxDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004015b0
//
// 004015b0  b801000000           mov eax, 1
// 004015b5  8405e814cb00         test byte ptr [0xcb14e8], al
// 004015bb  753e                 jne 0x4015fb
// 004015bd  0905e814cb00         or dword ptr [0xcb14e8], eax
// 004015c3  b8c0114000           mov eax, 0x4011c0
// 004015c8  b98cffffff           mov ecx, 0xffffff8c
// 004015cd  a3fc61c000           mov dword ptr [0xc061fc], eax
// 004015d2  33c0                 xor eax, eax
// 004015d4  890d0062c000         mov dword ptr [0xc06200], ecx
// 004015da  33c9                 xor ecx, ecx
// 004015dc  c7050462c00005000000 mov dword ptr [0xc06204], 5
// 004015e6  a30862c000           mov dword ptr [0xc06208], eax
// 004015eb  a30c62c000           mov dword ptr [0xc0620c], eax
// 004015f0  a31062c000           mov dword ptr [0xc06210], eax
// 004015f5  890d1462c000         mov dword ptr [0xc06214], ecx
// 004015fb  b8f061c000           mov eax, 0xc061f0
// 00401600  c3                   ret 
// copied from an identical function in another client (function ?GetDHtmlEventMap@@YAPBUDHtmlEventMapEntry@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/roc_click_7d73bb003aafb5be.cpp