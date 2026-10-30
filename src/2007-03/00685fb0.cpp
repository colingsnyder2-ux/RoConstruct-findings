// roc 2007-03 00685fb0  unit: seg_00680000  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00685fb0
//
// 00685fb0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00685fb4  85c9                 test ecx, ecx
// 00685fb6  7439                 je 0x685ff1
// 00685fb8  0fb701               movzx eax, word ptr [ecx]
// 00685fbb  6685c0               test ax, ax
// 00685fbe  7437                 je 0x685ff7
// 00685fc0  663d0300             cmp ax, 3
// 00685fc4  7436                 je 0x685ffc
// 00685fc6  663d0200             cmp ax, 2
// 00685fca  7436                 je 0x686002
// 00685fcc  663d0340             cmp ax, 0x4003
// 00685fd0  7506                 jne 0x685fd8
// 00685fd2  83790800             cmp dword ptr [ecx + 8], 0
// 00685fd6  7531                 jne 0x686009
// 00685fd8  663d0240             cmp ax, 0x4002
// 00685fdc  7506                 jne 0x685fe4
// 00685fde  83790800             cmp dword ptr [ecx + 8], 0
// 00685fe2  752d                 jne 0x686011
// 00685fe4  663d0c40             cmp ax, 0x400c
// 00685fe8  7507                 jne 0x685ff1
// 00685fea  8b4908               mov ecx, dword ptr [ecx + 8]
// 00685fed  85c9                 test ecx, ecx
// 00685fef  75c7                 jne 0x685fb8
// 00685ff1  83c8ff               or eax, 0xffffffff
// 00685ff4  c20400               ret 4
// 00685ff7  33c0                 xor eax, eax
// 00685ff9  c20400               ret 4
// 00685ffc  8b4108               mov eax, dword ptr [ecx + 8]
// 00685fff  c20400               ret 4
// 00686002  0fbf4108             movsx eax, word ptr [ecx + 8]
// 00686006  c20400               ret 4
// 00686009  8b4108               mov eax, dword ptr [ecx + 8]
// 0068600c  8b00                 mov eax, dword ptr [eax]
// 0068600e  c20400               ret 4
// 00686011  8b4908               mov ecx, dword ptr [ecx + 8]
// 00686014  0fbf01               movsx eax, word ptr [ecx]
// 00686017  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetChildIndex@CXTPAccessible@@IAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
