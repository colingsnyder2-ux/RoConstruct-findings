// from server: 100% by auto
// roc 2008-06 006e82a0  unit: CXTPToolBar::CControlButtonExpand  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e82a0
//
// 006e82a0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006e82a4  85c9                 test ecx, ecx
// 006e82a6  7445                 je 0x6e82ed
// 006e82a8  0fb701               movzx eax, word ptr [ecx]
// 006e82ab  6685c0               test ax, ax
// 006e82ae  7443                 je 0x6e82f3
// 006e82b0  6683f803             cmp ax, 3
// 006e82b4  7442                 je 0x6e82f8
// 006e82b6  6683f802             cmp ax, 2
// 006e82ba  7442                 je 0x6e82fe
// 006e82bc  ba03400000           mov edx, 0x4003
// 006e82c1  663bc2               cmp ax, dx
// 006e82c4  7506                 jne 0x6e82cc
// 006e82c6  83790800             cmp dword ptr [ecx + 8], 0
// 006e82ca  7539                 jne 0x6e8305
// 006e82cc  ba02400000           mov edx, 0x4002
// 006e82d1  663bc2               cmp ax, dx
// 006e82d4  7506                 jne 0x6e82dc
// 006e82d6  83790800             cmp dword ptr [ecx + 8], 0
// 006e82da  7531                 jne 0x6e830d
// 006e82dc  ba0c400000           mov edx, 0x400c
// 006e82e1  663bc2               cmp ax, dx
// 006e82e4  7507                 jne 0x6e82ed
// 006e82e6  8b4908               mov ecx, dword ptr [ecx + 8]
// 006e82e9  85c9                 test ecx, ecx
// 006e82eb  75bb                 jne 0x6e82a8
// 006e82ed  83c8ff               or eax, 0xffffffff
// 006e82f0  c20400               ret 4
// 006e82f3  33c0                 xor eax, eax
// 006e82f5  c20400               ret 4
// 006e82f8  8b4108               mov eax, dword ptr [ecx + 8]
// 006e82fb  c20400               ret 4
// 006e82fe  0fbf4108             movsx eax, word ptr [ecx + 8]
// 006e8302  c20400               ret 4
// 006e8305  8b4108               mov eax, dword ptr [ecx + 8]
// 006e8308  8b00                 mov eax, dword ptr [eax]
// 006e830a  c20400               ret 4
// 006e830d  8b4908               mov ecx, dword ptr [ecx + 8]
// 006e8310  0fbf01               movsx eax, word ptr [ecx]
// 006e8313  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetChildIndex@CXTPAccessible@@IAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
