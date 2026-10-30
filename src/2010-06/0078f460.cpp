// from server: 100% by auto
// roc 2010-06 0078f460  unit: RBX::GroupDragTool  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0078f460
//
// 0078f460  83f801               cmp eax, 1
// 0078f463  8b12                 mov edx, dword ptr [edx]
// 0078f465  8b520c               mov edx, dword ptr [edx + 0xc]
// 0078f468  56                   push esi
// 0078f469  8d1482               lea edx, [edx + eax*4]
// 0078f46c  7c12                 jl 0x78f480
// 0078f46e  8b42fc               mov eax, dword ptr [edx - 4]
// 0078f471  8d72fc               lea esi, [edx - 4]
// 0078f474  83e03f               and eax, 0x3f
// 0078f477  f680e434a50080       test byte ptr [eax + 0xa534e4], 0x80
// 0078f47e  7502                 jne 0x78f482
// 0078f480  8bf2                 mov esi, edx
// 0078f482  8b06                 mov eax, dword ptr [esi]
// 0078f484  8bd0                 mov edx, eax
// 0078f486  83e23f               and edx, 0x3f
// 0078f489  80fa1b               cmp dl, 0x1b
// 0078f48c  7404                 je 0x78f492
// 0078f48e  33c0                 xor eax, eax
// 0078f490  5e                   pop esi
// 0078f491  c3                   ret 
// 0078f492  81f9ff000000         cmp ecx, 0xff
// 0078f498  741f                 je 0x78f4b9
// 0078f49a  8bd0                 mov edx, eax
// 0078f49c  c1ea17               shr edx, 0x17
// 0078f49f  3bca                 cmp ecx, edx
// 0078f4a1  7416                 je 0x78f4b9
// 0078f4a3  c1e106               shl ecx, 6
// 0078f4a6  33c8                 xor ecx, eax
// 0078f4a8  81e1c03f0000         and ecx, 0x3fc0
// 0078f4ae  33c8                 xor ecx, eax
// 0078f4b0  890e                 mov dword ptr [esi], ecx
// 0078f4b2  b801000000           mov eax, 1
// 0078f4b7  5e                   pop esi
// 0078f4b8  c3                   ret 
// 0078f4b9  8bc8                 mov ecx, eax
// 0078f4bb  81e1ffffb5ff         and ecx, 0xffb5ffff
// 0078f4c1  81c900003400         or ecx, 0x340000
// 0078f4c7  2500c07f00           and eax, 0x7fc000
// 0078f4cc  c1e911               shr ecx, 0x11
// 0078f4cf  0bc8                 or ecx, eax
// 0078f4d1  890e                 mov dword ptr [esi], ecx
// 0078f4d3  b801000000           mov eax, 1
// 0078f4d8  5e                   pop esi
// 0078f4d9  c3                   ret 
// library lua-5.1.4/lcode.c (function _patchtestreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
