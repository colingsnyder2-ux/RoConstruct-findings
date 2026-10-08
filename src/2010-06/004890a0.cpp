// from server: 100% by auto
// roc 2010-06 004890a0  unit: G3D::Win32Window  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004890a0
//
// 004890a0  8b442404             mov eax, dword ptr [esp + 4]
// 004890a4  55                   push ebp
// 004890a5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004890a8  ba01000000           mov edx, 1
// 004890ad  56                   push esi
// 004890ae  894104               mov dword ptr [ecx + 4], eax
// 004890b1  57                   push edi
// 004890b2  84157438c000         test byte ptr [0xc03874], dl
// 004890b8  7513                 jne 0x4890cd
// 004890ba  09157438c000         or dword ptr [0xc03874], edx
// 004890c0  bf0a000000           mov edi, 0xa
// 004890c5  893d7038c000         mov dword ptr [0xc03870], edi
// 004890cb  eb06                 jmp 0x4890d3
// 004890cd  8b3d7038c000         mov edi, dword ptr [0xc03870]
// 004890d3  8b5108               mov edx, dword ptr [ecx + 8]
// 004890d6  8b7104               mov esi, dword ptr [ecx + 4]
// 004890d9  3bf2                 cmp esi, edx
// 004890db  0f8e86000000         jle 0x489167
// 004890e1  85d2                 test edx, edx
// 004890e3  750f                 jne 0x4890f4
// 004890e5  55                   push ebp
// 004890e6  894108               mov dword ptr [ecx + 8], eax
// 004890e9  e8c2f2ffff           call 0x4883b0
// 004890ee  5f                   pop edi
// 004890ef  5e                   pop esi
// 004890f0  5d                   pop ebp
// 004890f1  c20800               ret 8
// 004890f4  3bf7                 cmp esi, edi
// 004890f6  7d0f                 jge 0x489107
// 004890f8  55                   push ebp
// 004890f9  897908               mov dword ptr [ecx + 8], edi
// 004890fc  e8aff2ffff           call 0x4883b0
// 00489101  5f                   pop edi
// 00489102  5e                   pop esi
// 00489103  5d                   pop ebp
// 00489104  c20800               ret 8
// 00489107  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 0048910f  8bc2                 mov eax, edx
// 00489111  8d0480               lea eax, [eax + eax*4]
// 00489114  03c0                 add eax, eax
// 00489116  03c0                 add eax, eax
// 00489118  3d801a0600           cmp eax, 0x61a80
// 0048911d  760a                 jbe 0x489129
// 0048911f  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00489127  eb0f                 jmp 0x489138
// 00489129  3d00fa0000           cmp eax, 0xfa00
// 0048912e  7608                 jbe 0x489138
// 00489130  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00489138  8bc2                 mov eax, edx
// 0048913a  f30f2ac8             cvtsi2ss xmm1, eax
// 0048913e  f30f59c8             mulss xmm1, xmm0
// 00489142  f30f2cd1             cvttss2si edx, xmm1
// 00489146  2bd0                 sub edx, eax
// 00489148  8d0432               lea eax, [edx + esi]
// 0048914b  894108               mov dword ptr [ecx + 8], eax
// 0048914e  8b157038c000         mov edx, dword ptr [0xc03870]
// 00489154  3bc2                 cmp eax, edx
// 00489156  7d03                 jge 0x48915b
// 00489158  895108               mov dword ptr [ecx + 8], edx
// 0048915b  55                   push ebp
// 0048915c  e84ff2ffff           call 0x4883b0
// 00489161  5f                   pop edi
// 00489162  5e                   pop esi
// 00489163  5d                   pop ebp
// 00489164  c20800               ret 8
// 00489167  b856555555           mov eax, 0x55555556
// 0048916c  f7ea                 imul edx
// 0048916e  8bc2                 mov eax, edx
// 00489170  c1e81f               shr eax, 0x1f
// 00489173  03c2                 add eax, edx
// 00489175  3bf0                 cmp esi, eax
// 00489177  7f17                 jg 0x489190
// 00489179  807c241400           cmp byte ptr [esp + 0x14], 0
// 0048917e  7410                 je 0x489190
// 00489180  3bf7                 cmp esi, edi
// 00489182  7e0c                 jle 0x489190
// 00489184  3bf5                 cmp esi, ebp
// 00489186  7c02                 jl 0x48918a
// 00489188  8bf5                 mov esi, ebp
// 0048918a  56                   push esi
// 0048918b  e820f2ffff           call 0x4883b0
// 00489190  5f                   pop edi
// 00489191  5e                   pop esi
// 00489192  5d                   pop ebp
// 00489193  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?resize@?$Array@TSDL_Event@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
