// roc 2010-06 00401630  unit: CAboutRobloxDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00401630
//
// 00401630  b801000000           mov eax, 1
// 00401635  8405c8f9bf00         test byte ptr [0xbff9c8], al
// 0040163b  753e                 jne 0x40167b
// 0040163d  0905c8f9bf00         or dword ptr [0xbff9c8], eax
// 00401643  b820124000           mov eax, 0x401220
// 00401648  b98cffffff           mov ecx, 0xffffff8c
// 0040164d  a3fc81b700           mov dword ptr [0xb781fc], eax
// 00401652  33c0                 xor eax, eax
// 00401654  890d0082b700         mov dword ptr [0xb78200], ecx
// 0040165a  33c9                 xor ecx, ecx
// 0040165c  c7050482b70005000000 mov dword ptr [0xb78204], 5
// 00401666  a30882b700           mov dword ptr [0xb78208], eax
// 0040166b  a30c82b700           mov dword ptr [0xb7820c], eax
// 00401670  a31082b700           mov dword ptr [0xb78210], eax
// 00401675  890d1482b700         mov dword ptr [0xb78214], ecx
// 0040167b  b8f081b700           mov eax, 0xb781f0
// 00401680  c3                   ret 
// copied from an identical function in another client (function ?GetDHtmlEventMap@@YAPBUDHtmlEventMapEntry@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/roc_click_7d73bb003aafb5be.cpp