// from server: 100% by auto
// roc 2011-06 007f25a0  unit: RBX::AdvLuaDragTool  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f25a0
//
// 007f25a0  8b11                 mov edx, dword ptr [ecx]
// 007f25a2  8b4008               mov eax, dword ptr [eax + 8]
// 007f25a5  83f801               cmp eax, 1
// 007f25a8  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 007f25ab  8d0c81               lea ecx, [ecx + eax*4]
// 007f25ae  7c14                 jl 0x7f25c4
// 007f25b0  8b51fc               mov edx, dword ptr [ecx - 4]
// 007f25b3  8d41fc               lea eax, [ecx - 4]
// 007f25b6  83e23f               and edx, 0x3f
// 007f25b9  f682bce0ab0080       test byte ptr [edx + 0xabe0bc], 0x80
// 007f25c0  7402                 je 0x7f25c4
// 007f25c2  8bc8                 mov ecx, eax
// 007f25c4  8b01                 mov eax, dword ptr [ecx]
// 007f25c6  8bd0                 mov edx, eax
// 007f25c8  81e2c03f0000         and edx, 0x3fc0
// 007f25ce  f7da                 neg edx
// 007f25d0  1bd2                 sbb edx, edx
// 007f25d2  42                   inc edx
// 007f25d3  c1e206               shl edx, 6
// 007f25d6  33d0                 xor edx, eax
// 007f25d8  81e2c03f0000         and edx, 0x3fc0
// 007f25de  33d0                 xor edx, eax
// 007f25e0  8911                 mov dword ptr [ecx], edx
// 007f25e2  c3                   ret 
// library lua-5.1.4/lcode.c (function _invertjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
