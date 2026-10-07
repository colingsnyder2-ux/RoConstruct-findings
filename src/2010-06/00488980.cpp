// roc 2010-06 00488980  unit: G3D::Win32Window  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488980
//
// 00488980  8b442404             mov eax, dword ptr [esp + 4]
// 00488984  55                   push ebp
// 00488985  8b6904               mov ebp, dword ptr [ecx + 4]
// 00488988  ba01000000           mov edx, 1
// 0048898d  56                   push esi
// 0048898e  894104               mov dword ptr [ecx + 4], eax
// 00488991  57                   push edi
// 00488992  84155838c000         test byte ptr [0xc03858], dl
// 00488998  7513                 jne 0x4889ad
// 0048899a  09155838c000         or dword ptr [0xc03858], edx
// 004889a0  bf0a000000           mov edi, 0xa
// 004889a5  893d5438c000         mov dword ptr [0xc03854], edi
// 004889ab  eb06                 jmp 0x4889b3
// 004889ad  8b3d5438c000         mov edi, dword ptr [0xc03854]
// 004889b3  8b5108               mov edx, dword ptr [ecx + 8]
// 004889b6  8b7104               mov esi, dword ptr [ecx + 4]
// 004889b9  3bf2                 cmp esi, edx
// 004889bb  0f8e83000000         jle 0x488a44
// 004889c1  85d2                 test edx, edx
// 004889c3  750f                 jne 0x4889d4
// 004889c5  55                   push ebp
// 004889c6  894108               mov dword ptr [ecx + 8], eax
// 004889c9  e852f8ffff           call 0x488220
// 004889ce  5f                   pop edi
// 004889cf  5e                   pop esi
// 004889d0  5d                   pop ebp
// 004889d1  c20800               ret 8
// 004889d4  3bf7                 cmp esi, edi
// 004889d6  7d0f                 jge 0x4889e7
// 004889d8  55                   push ebp
// 004889d9  897908               mov dword ptr [ecx + 8], edi
// 004889dc  e83ff8ffff           call 0x488220
// 004889e1  5f                   pop edi
// 004889e2  5e                   pop esi
// 004889e3  5d                   pop ebp
// 004889e4  c20800               ret 8
// 004889e7  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 004889ef  8bc2                 mov eax, edx
// 004889f1  03c0                 add eax, eax
// 004889f3  03c0                 add eax, eax
// 004889f5  3d801a0600           cmp eax, 0x61a80
// 004889fa  760a                 jbe 0x488a06
// 004889fc  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00488a04  eb0f                 jmp 0x488a15
// 00488a06  3d00fa0000           cmp eax, 0xfa00
// 00488a0b  7608                 jbe 0x488a15
// 00488a0d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00488a15  8bc2                 mov eax, edx
// 00488a17  f30f2ac8             cvtsi2ss xmm1, eax
// 00488a1b  f30f59c8             mulss xmm1, xmm0
// 00488a1f  f30f2cd1             cvttss2si edx, xmm1
// 00488a23  2bd0                 sub edx, eax
// 00488a25  8d0432               lea eax, [edx + esi]
// 00488a28  894108               mov dword ptr [ecx + 8], eax
// 00488a2b  8b155438c000         mov edx, dword ptr [0xc03854]
// 00488a31  3bc2                 cmp eax, edx
// 00488a33  7d03                 jge 0x488a38
// 00488a35  895108               mov dword ptr [ecx + 8], edx
// 00488a38  55                   push ebp
// 00488a39  e8e2f7ffff           call 0x488220
// 00488a3e  5f                   pop edi
// 00488a3f  5e                   pop esi
// 00488a40  5d                   pop ebp
// 00488a41  c20800               ret 8
// 00488a44  b856555555           mov eax, 0x55555556
// 00488a49  f7ea                 imul edx
// 00488a4b  8bc2                 mov eax, edx
// 00488a4d  c1e81f               shr eax, 0x1f
// 00488a50  03c2                 add eax, edx
// 00488a52  3bf0                 cmp esi, eax
// 00488a54  7f17                 jg 0x488a6d
// 00488a56  807c241400           cmp byte ptr [esp + 0x14], 0
// 00488a5b  7410                 je 0x488a6d
// 00488a5d  3bf7                 cmp esi, edi
// 00488a5f  7e0c                 jle 0x488a6d
// 00488a61  3bf5                 cmp esi, ebp
// 00488a63  7c02                 jl 0x488a67
// 00488a65  8bf5                 mov esi, ebp
// 00488a67  56                   push esi
// 00488a68  e8b3f7ffff           call 0x488220
// 00488a6d  5f                   pop edi
// 00488a6e  5e                   pop esi
// 00488a6f  5d                   pop ebp
// 00488a70  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
