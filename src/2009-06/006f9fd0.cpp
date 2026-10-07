// roc 2009-06 006f9fd0  unit: RBX::GroupDragTool  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9fd0
//
// 006f9fd0  8b11                 mov edx, dword ptr [ecx]
// 006f9fd2  8b4008               mov eax, dword ptr [eax + 8]
// 006f9fd5  83f801               cmp eax, 1
// 006f9fd8  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 006f9fdb  8d0c81               lea ecx, [ecx + eax*4]
// 006f9fde  7c14                 jl 0x6f9ff4
// 006f9fe0  8b51fc               mov edx, dword ptr [ecx - 4]
// 006f9fe3  8d41fc               lea eax, [ecx - 4]
// 006f9fe6  83e23f               and edx, 0x3f
// 006f9fe9  f68274e48e0080       test byte ptr [edx + 0x8ee474], 0x80
// 006f9ff0  7402                 je 0x6f9ff4
// 006f9ff2  8bc8                 mov ecx, eax
// 006f9ff4  8b01                 mov eax, dword ptr [ecx]
// 006f9ff6  8bd0                 mov edx, eax
// 006f9ff8  81e2c03f0000         and edx, 0x3fc0
// 006f9ffe  f7da                 neg edx
// 006fa000  1bd2                 sbb edx, edx
// 006fa002  42                   inc edx
// 006fa003  c1e206               shl edx, 6
// 006fa006  33d0                 xor edx, eax
// 006fa008  81e2c03f0000         and edx, 0x3fc0
// 006fa00e  33d0                 xor edx, eax
// 006fa010  8911                 mov dword ptr [ecx], edx
// 006fa012  c3                   ret 
// library lua-5.1.4/lcode.c (function _invertjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
