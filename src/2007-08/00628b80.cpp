// roc 2007-08 00628b80  unit: RBX::AssemblyStage  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628b80
//
// 00628b80  8b11                 mov edx, dword ptr [ecx]
// 00628b82  8b4008               mov eax, dword ptr [eax + 8]
// 00628b85  83f801               cmp eax, 1
// 00628b88  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00628b8b  8d0c81               lea ecx, [ecx + eax*4]
// 00628b8e  7c14                 jl 0x628ba4
// 00628b90  8b51fc               mov edx, dword ptr [ecx - 4]
// 00628b93  8d41fc               lea eax, [ecx - 4]
// 00628b96  83e23f               and edx, 0x3f
// 00628b99  f682f4377c0080       test byte ptr [edx + 0x7c37f4], 0x80
// 00628ba0  7402                 je 0x628ba4
// 00628ba2  8bc8                 mov ecx, eax
// 00628ba4  8b01                 mov eax, dword ptr [ecx]
// 00628ba6  8bd0                 mov edx, eax
// 00628ba8  81e2c03f0000         and edx, 0x3fc0
// 00628bae  f7da                 neg edx
// 00628bb0  1bd2                 sbb edx, edx
// 00628bb2  83c201               add edx, 1
// 00628bb5  c1e206               shl edx, 6
// 00628bb8  33d0                 xor edx, eax
// 00628bba  81e2c03f0000         and edx, 0x3fc0
// 00628bc0  33d0                 xor edx, eax
// 00628bc2  8911                 mov dword ptr [ecx], edx
// 00628bc4  c3                   ret 
// library lua-5.1.4/lcode.c (function _invertjump)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
