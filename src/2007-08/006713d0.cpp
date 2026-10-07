// roc 2007-08 006713d0  unit: CXTPToolBar::CControlButtonExpand  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006713d0
//
// 006713d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006713d4  85c9                 test ecx, ecx
// 006713d6  7439                 je 0x671411
// 006713d8  0fb701               movzx eax, word ptr [ecx]
// 006713db  6685c0               test ax, ax
// 006713de  7437                 je 0x671417
// 006713e0  663d0300             cmp ax, 3
// 006713e4  7436                 je 0x67141c
// 006713e6  663d0200             cmp ax, 2
// 006713ea  7436                 je 0x671422
// 006713ec  663d0340             cmp ax, 0x4003
// 006713f0  7506                 jne 0x6713f8
// 006713f2  83790800             cmp dword ptr [ecx + 8], 0
// 006713f6  7531                 jne 0x671429
// 006713f8  663d0240             cmp ax, 0x4002
// 006713fc  7506                 jne 0x671404
// 006713fe  83790800             cmp dword ptr [ecx + 8], 0
// 00671402  752d                 jne 0x671431
// 00671404  663d0c40             cmp ax, 0x400c
// 00671408  7507                 jne 0x671411
// 0067140a  8b4908               mov ecx, dword ptr [ecx + 8]
// 0067140d  85c9                 test ecx, ecx
// 0067140f  75c7                 jne 0x6713d8
// 00671411  83c8ff               or eax, 0xffffffff
// 00671414  c20400               ret 4
// 00671417  33c0                 xor eax, eax
// 00671419  c20400               ret 4
// 0067141c  8b4108               mov eax, dword ptr [ecx + 8]
// 0067141f  c20400               ret 4
// 00671422  0fbf4108             movsx eax, word ptr [ecx + 8]
// 00671426  c20400               ret 4
// 00671429  8b4108               mov eax, dword ptr [ecx + 8]
// 0067142c  8b00                 mov eax, dword ptr [eax]
// 0067142e  c20400               ret 4
// 00671431  8b4908               mov ecx, dword ptr [ecx + 8]
// 00671434  0fbf01               movsx eax, word ptr [ecx]
// 00671437  c20400               ret 4
// library xtp-11.2.2-vc8/Source\Common\XTPSystemHelpers.cpp (function ?GetChildIndex@CXTPAccessible@@IAEJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPSystemHelpers.cpp
