// from server: 100% by auto
// roc 2009-06 006f9ae0  unit: RBX::GroupDragTool  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f9ae0
//
// 006f9ae0  83f801               cmp eax, 1
// 006f9ae3  8b12                 mov edx, dword ptr [edx]
// 006f9ae5  8b520c               mov edx, dword ptr [edx + 0xc]
// 006f9ae8  56                   push esi
// 006f9ae9  8d1482               lea edx, [edx + eax*4]
// 006f9aec  7c12                 jl 0x6f9b00
// 006f9aee  8b42fc               mov eax, dword ptr [edx - 4]
// 006f9af1  8d72fc               lea esi, [edx - 4]
// 006f9af4  83e03f               and eax, 0x3f
// 006f9af7  f68074e48e0080       test byte ptr [eax + 0x8ee474], 0x80
// 006f9afe  7502                 jne 0x6f9b02
// 006f9b00  8bf2                 mov esi, edx
// 006f9b02  8b06                 mov eax, dword ptr [esi]
// 006f9b04  8bd0                 mov edx, eax
// 006f9b06  83e23f               and edx, 0x3f
// 006f9b09  80fa1b               cmp dl, 0x1b
// 006f9b0c  7404                 je 0x6f9b12
// 006f9b0e  33c0                 xor eax, eax
// 006f9b10  5e                   pop esi
// 006f9b11  c3                   ret 
// 006f9b12  81f9ff000000         cmp ecx, 0xff
// 006f9b18  741f                 je 0x6f9b39
// 006f9b1a  8bd0                 mov edx, eax
// 006f9b1c  c1ea17               shr edx, 0x17
// 006f9b1f  3bca                 cmp ecx, edx
// 006f9b21  7416                 je 0x6f9b39
// 006f9b23  c1e106               shl ecx, 6
// 006f9b26  33c8                 xor ecx, eax
// 006f9b28  81e1c03f0000         and ecx, 0x3fc0
// 006f9b2e  33c8                 xor ecx, eax
// 006f9b30  890e                 mov dword ptr [esi], ecx
// 006f9b32  b801000000           mov eax, 1
// 006f9b37  5e                   pop esi
// 006f9b38  c3                   ret 
// 006f9b39  8bc8                 mov ecx, eax
// 006f9b3b  81e1ffffb5ff         and ecx, 0xffb5ffff
// 006f9b41  81c900003400         or ecx, 0x340000
// 006f9b47  2500c07f00           and eax, 0x7fc000
// 006f9b4c  c1e911               shr ecx, 0x11
// 006f9b4f  0bc8                 or ecx, eax
// 006f9b51  890e                 mov dword ptr [esi], ecx
// 006f9b53  b801000000           mov eax, 1
// 006f9b58  5e                   pop esi
// 006f9b59  c3                   ret 
// library lua-5.1.4/lcode.c (function _patchtestreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
