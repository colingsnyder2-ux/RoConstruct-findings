// from server: 100% by auto
// roc 2008-06 0066ab40  unit: RBX::GroupDragTool  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ab40
//
// 0066ab40  83f801               cmp eax, 1
// 0066ab43  8b12                 mov edx, dword ptr [edx]
// 0066ab45  8b520c               mov edx, dword ptr [edx + 0xc]
// 0066ab48  56                   push esi
// 0066ab49  8d1482               lea edx, [edx + eax*4]
// 0066ab4c  7c12                 jl 0x66ab60
// 0066ab4e  8b42fc               mov eax, dword ptr [edx - 4]
// 0066ab51  8d72fc               lea esi, [edx - 4]
// 0066ab54  83e03f               and eax, 0x3f
// 0066ab57  f68044c9840080       test byte ptr [eax + 0x84c944], 0x80
// 0066ab5e  7502                 jne 0x66ab62
// 0066ab60  8bf2                 mov esi, edx
// 0066ab62  8b06                 mov eax, dword ptr [esi]
// 0066ab64  8bd0                 mov edx, eax
// 0066ab66  83e23f               and edx, 0x3f
// 0066ab69  80fa1b               cmp dl, 0x1b
// 0066ab6c  7404                 je 0x66ab72
// 0066ab6e  33c0                 xor eax, eax
// 0066ab70  5e                   pop esi
// 0066ab71  c3                   ret 
// 0066ab72  81f9ff000000         cmp ecx, 0xff
// 0066ab78  741f                 je 0x66ab99
// 0066ab7a  8bd0                 mov edx, eax
// 0066ab7c  c1ea17               shr edx, 0x17
// 0066ab7f  3bca                 cmp ecx, edx
// 0066ab81  7416                 je 0x66ab99
// 0066ab83  c1e106               shl ecx, 6
// 0066ab86  33c8                 xor ecx, eax
// 0066ab88  81e1c03f0000         and ecx, 0x3fc0
// 0066ab8e  33c8                 xor ecx, eax
// 0066ab90  890e                 mov dword ptr [esi], ecx
// 0066ab92  b801000000           mov eax, 1
// 0066ab97  5e                   pop esi
// 0066ab98  c3                   ret 
// 0066ab99  8bc8                 mov ecx, eax
// 0066ab9b  81e1ffffb5ff         and ecx, 0xffb5ffff
// 0066aba1  81c900003400         or ecx, 0x340000
// 0066aba7  2500c07f00           and eax, 0x7fc000
// 0066abac  c1e911               shr ecx, 0x11
// 0066abaf  0bc8                 or ecx, eax
// 0066abb1  890e                 mov dword ptr [esi], ecx
// 0066abb3  b801000000           mov eax, 1
// 0066abb8  5e                   pop esi
// 0066abb9  c3                   ret 
// library lua-5.1.4/lcode.c (function _patchtestreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
