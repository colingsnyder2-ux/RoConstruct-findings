// from server: 100% by auto
// roc 2012-06 00967540  unit: RBX::CellContact  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00967540
//
// 00967540  8b11                 mov edx, dword ptr [ecx]
// 00967542  8b4008               mov eax, dword ptr [eax + 8]
// 00967545  83f801               cmp eax, 1
// 00967548  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0096754b  8d0c81               lea ecx, [ecx + eax*4]
// 0096754e  7c14                 jl 0x967564
// 00967550  8b51fc               mov edx, dword ptr [ecx - 4]
// 00967553  8d41fc               lea eax, [ecx - 4]
// 00967556  83e23f               and edx, 0x3f
// 00967559  f682c4f8bf0080       test byte ptr [edx + 0xbff8c4], 0x80
// 00967560  7402                 je 0x967564
// 00967562  8bc8                 mov ecx, eax
// 00967564  8b01                 mov eax, dword ptr [ecx]
// 00967566  8bd0                 mov edx, eax
// 00967568  81e2c03f0000         and edx, 0x3fc0
// 0096756e  f7da                 neg edx
// 00967570  1bd2                 sbb edx, edx
// 00967572  42                   inc edx
// 00967573  c1e206               shl edx, 6
// 00967576  33d0                 xor edx, eax
// 00967578  81e2c03f0000         and edx, 0x3fc0
// 0096757e  33d0                 xor edx, eax
// 00967580  8911                 mov dword ptr [ecx], edx
// 00967582  c3                   ret 
// library lua-5.1.4/lcode.c (function _invertjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
