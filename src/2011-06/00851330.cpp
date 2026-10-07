// roc 2011-06 00851330  unit: CXTPToolBar::CControlButtonExpand  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00851330
//
// 00851330  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00851334  85c9                 test ecx, ecx
// 00851336  7445                 je 0x85137d
// 00851338  0fb701               movzx eax, word ptr [ecx]
// 0085133b  6685c0               test ax, ax
// 0085133e  7443                 je 0x851383
// 00851340  6683f803             cmp ax, 3
// 00851344  7442                 je 0x851388
// 00851346  6683f802             cmp ax, 2
// 0085134a  7442                 je 0x85138e
// 0085134c  ba03400000           mov edx, 0x4003
// 00851351  663bc2               cmp ax, dx
// 00851354  7506                 jne 0x85135c
// 00851356  83790800             cmp dword ptr [ecx + 8], 0
// 0085135a  7539                 jne 0x851395
// 0085135c  ba02400000           mov edx, 0x4002
// 00851361  663bc2               cmp ax, dx
// 00851364  7506                 jne 0x85136c
// 00851366  83790800             cmp dword ptr [ecx + 8], 0
// 0085136a  7531                 jne 0x85139d
// 0085136c  ba0c400000           mov edx, 0x400c
// 00851371  663bc2               cmp ax, dx
// 00851374  7507                 jne 0x85137d
// 00851376  8b4908               mov ecx, dword ptr [ecx + 8]
// 00851379  85c9                 test ecx, ecx
// 0085137b  75bb                 jne 0x851338
// 0085137d  83c8ff               or eax, 0xffffffff
// 00851380  c20400               ret 4
// 00851383  33c0                 xor eax, eax
// 00851385  c20400               ret 4
// 00851388  8b4108               mov eax, dword ptr [ecx + 8]
// 0085138b  c20400               ret 4
// 0085138e  0fbf4108             movsx eax, word ptr [ecx + 8]
// 00851392  c20400               ret 4
// 00851395  8b4108               mov eax, dword ptr [ecx + 8]
// 00851398  8b00                 mov eax, dword ptr [eax]
// 0085139a  c20400               ret 4
// 0085139d  8b4908               mov ecx, dword ptr [ecx + 8]
// 008513a0  0fbf01               movsx eax, word ptr [ecx]
// 008513a3  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetChildIndex@CXTPAccessible@@IAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
