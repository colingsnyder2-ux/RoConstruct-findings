// roc 2007-08 00401310  unit: CAboutRobloxDialog  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401310
//
// 00401310  b801000000           mov eax, 1
// 00401315  840520ae8b00         test byte ptr [0x8bae20], al
// 0040131b  753e                 jne 0x40135b
// 0040131d  090520ae8b00         or dword ptr [0x8bae20], eax
// 00401323  b810114000           mov eax, 0x401110
// 00401328  b98cffffff           mov ecx, 0xffffff8c
// 0040132d  a360018800           mov dword ptr [0x880160], eax
// 00401332  33c0                 xor eax, eax
// 00401334  890d64018800         mov dword ptr [0x880164], ecx
// 0040133a  33c9                 xor ecx, ecx
// 0040133c  c7056801880005000000 mov dword ptr [0x880168], 5
// 00401346  a36c018800           mov dword ptr [0x88016c], eax
// 0040134b  a370018800           mov dword ptr [0x880170], eax
// 00401350  a374018800           mov dword ptr [0x880174], eax
// 00401355  890d78018800         mov dword ptr [0x880178], ecx
// 0040135b  b854018800           mov eax, 0x880154
// 00401360  c3                   ret 
// copied from an identical function in another client (function ?GetDHtmlEventMap@@YAPBUDHtmlEventMapEntry@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-9.0 atlmfc/src/mfc/roc_click_7d73bb003aafb5be.cpp