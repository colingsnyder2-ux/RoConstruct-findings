// from server: 100% by auto
// roc 2007-08 00628650  unit: RBX::AssemblyStage  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628650
//
// 00628650  83f801               cmp eax, 1
// 00628653  8b12                 mov edx, dword ptr [edx]
// 00628655  8b520c               mov edx, dword ptr [edx + 0xc]
// 00628658  56                   push esi
// 00628659  8d1482               lea edx, [edx + eax*4]
// 0062865c  7c12                 jl 0x628670
// 0062865e  8b42fc               mov eax, dword ptr [edx - 4]
// 00628661  8d72fc               lea esi, [edx - 4]
// 00628664  83e03f               and eax, 0x3f
// 00628667  f680f4377c0080       test byte ptr [eax + 0x7c37f4], 0x80
// 0062866e  7502                 jne 0x628672
// 00628670  8bf2                 mov esi, edx
// 00628672  8b06                 mov eax, dword ptr [esi]
// 00628674  8bd0                 mov edx, eax
// 00628676  83e23f               and edx, 0x3f
// 00628679  80fa1b               cmp dl, 0x1b
// 0062867c  7404                 je 0x628682
// 0062867e  33c0                 xor eax, eax
// 00628680  5e                   pop esi
// 00628681  c3                   ret 
// 00628682  81f9ff000000         cmp ecx, 0xff
// 00628688  741f                 je 0x6286a9
// 0062868a  8bd0                 mov edx, eax
// 0062868c  c1ea17               shr edx, 0x17
// 0062868f  3bca                 cmp ecx, edx
// 00628691  7416                 je 0x6286a9
// 00628693  c1e106               shl ecx, 6
// 00628696  33c8                 xor ecx, eax
// 00628698  81e1c03f0000         and ecx, 0x3fc0
// 0062869e  33c8                 xor ecx, eax
// 006286a0  890e                 mov dword ptr [esi], ecx
// 006286a2  b801000000           mov eax, 1
// 006286a7  5e                   pop esi
// 006286a8  c3                   ret 
// 006286a9  8bc8                 mov ecx, eax
// 006286ab  81e1ffffb5ff         and ecx, 0xffb5ffff
// 006286b1  81c900003400         or ecx, 0x340000
// 006286b7  2500c07f00           and eax, 0x7fc000
// 006286bc  c1e911               shr ecx, 0x11
// 006286bf  0bc8                 or ecx, eax
// 006286c1  890e                 mov dword ptr [esi], ecx
// 006286c3  b801000000           mov eax, 1
// 006286c8  5e                   pop esi
// 006286c9  c3                   ret 
// library lua-5.1.4/lcode.c (function _patchtestreg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
