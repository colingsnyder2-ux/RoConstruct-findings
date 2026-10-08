// from server: 100% by auto
// roc 2008-06 0066b030  unit: RBX::GroupDragTool  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066b030
//
// 0066b030  8b11                 mov edx, dword ptr [ecx]
// 0066b032  8b4008               mov eax, dword ptr [eax + 8]
// 0066b035  83f801               cmp eax, 1
// 0066b038  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0066b03b  8d0c81               lea ecx, [ecx + eax*4]
// 0066b03e  7c14                 jl 0x66b054
// 0066b040  8b51fc               mov edx, dword ptr [ecx - 4]
// 0066b043  8d41fc               lea eax, [ecx - 4]
// 0066b046  83e23f               and edx, 0x3f
// 0066b049  f68244c9840080       test byte ptr [edx + 0x84c944], 0x80
// 0066b050  7402                 je 0x66b054
// 0066b052  8bc8                 mov ecx, eax
// 0066b054  8b01                 mov eax, dword ptr [ecx]
// 0066b056  8bd0                 mov edx, eax
// 0066b058  81e2c03f0000         and edx, 0x3fc0
// 0066b05e  f7da                 neg edx
// 0066b060  1bd2                 sbb edx, edx
// 0066b062  42                   inc edx
// 0066b063  c1e206               shl edx, 6
// 0066b066  33d0                 xor edx, eax
// 0066b068  81e2c03f0000         and edx, 0x3fc0
// 0066b06e  33d0                 xor edx, eax
// 0066b070  8911                 mov dword ptr [ecx], edx
// 0066b072  c3                   ret 
// library lua-5.1.4/lcode.c (function _invertjump)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
