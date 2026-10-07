// roc 2010-06 0078f950  unit: RBX::GroupDragTool  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f950
//
// 0078f950  8b11                 mov edx, dword ptr [ecx]
// 0078f952  8b4008               mov eax, dword ptr [eax + 8]
// 0078f955  83f801               cmp eax, 1
// 0078f958  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0078f95b  8d0c81               lea ecx, [ecx + eax*4]
// 0078f95e  7c14                 jl 0x78f974
// 0078f960  8b51fc               mov edx, dword ptr [ecx - 4]
// 0078f963  8d41fc               lea eax, [ecx - 4]
// 0078f966  83e23f               and edx, 0x3f
// 0078f969  f682e434a50080       test byte ptr [edx + 0xa534e4], 0x80
// 0078f970  7402                 je 0x78f974
// 0078f972  8bc8                 mov ecx, eax
// 0078f974  8b01                 mov eax, dword ptr [ecx]
// 0078f976  8bd0                 mov edx, eax
// 0078f978  81e2c03f0000         and edx, 0x3fc0
// 0078f97e  f7da                 neg edx
// 0078f980  1bd2                 sbb edx, edx
// 0078f982  42                   inc edx
// 0078f983  c1e206               shl edx, 6
// 0078f986  33d0                 xor edx, eax
// 0078f988  81e2c03f0000         and edx, 0x3fc0
// 0078f98e  33d0                 xor edx, eax
// 0078f990  8911                 mov dword ptr [ecx], edx
// 0078f992  c3                   ret 
// library lua-5.1.4/lcode.c (function _invertjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
