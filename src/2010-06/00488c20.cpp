// roc 2010-06 00488c20  unit: G3D::Win32Window  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488c20
//
// 00488c20  8b442404             mov eax, dword ptr [esp + 4]
// 00488c24  55                   push ebp
// 00488c25  8b6904               mov ebp, dword ptr [ecx + 4]
// 00488c28  ba01000000           mov edx, 1
// 00488c2d  56                   push esi
// 00488c2e  894104               mov dword ptr [ecx + 4], eax
// 00488c31  57                   push edi
// 00488c32  84156838c000         test byte ptr [0xc03868], dl
// 00488c38  7513                 jne 0x488c4d
// 00488c3a  09156838c000         or dword ptr [0xc03868], edx
// 00488c40  bf0a000000           mov edi, 0xa
// 00488c45  893d6438c000         mov dword ptr [0xc03864], edi
// 00488c4b  eb06                 jmp 0x488c53
// 00488c4d  8b3d6438c000         mov edi, dword ptr [0xc03864]
// 00488c53  8b5108               mov edx, dword ptr [ecx + 8]
// 00488c56  8b7104               mov esi, dword ptr [ecx + 4]
// 00488c59  3bf2                 cmp esi, edx
// 00488c5b  0f8e83000000         jle 0x488ce4
// 00488c61  85d2                 test edx, edx
// 00488c63  750f                 jne 0x488c74
// 00488c65  55                   push ebp
// 00488c66  894108               mov dword ptr [ecx + 8], eax
// 00488c69  e8b2f7ffff           call 0x488420
// 00488c6e  5f                   pop edi
// 00488c6f  5e                   pop esi
// 00488c70  5d                   pop ebp
// 00488c71  c20800               ret 8
// 00488c74  3bf7                 cmp esi, edi
// 00488c76  7d0f                 jge 0x488c87
// 00488c78  55                   push ebp
// 00488c79  897908               mov dword ptr [ecx + 8], edi
// 00488c7c  e89ff7ffff           call 0x488420
// 00488c81  5f                   pop edi
// 00488c82  5e                   pop esi
// 00488c83  5d                   pop ebp
// 00488c84  c20800               ret 8
// 00488c87  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00488c8f  8bc2                 mov eax, edx
// 00488c91  03c0                 add eax, eax
// 00488c93  03c0                 add eax, eax
// 00488c95  3d801a0600           cmp eax, 0x61a80
// 00488c9a  760a                 jbe 0x488ca6
// 00488c9c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00488ca4  eb0f                 jmp 0x488cb5
// 00488ca6  3d00fa0000           cmp eax, 0xfa00
// 00488cab  7608                 jbe 0x488cb5
// 00488cad  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00488cb5  8bc2                 mov eax, edx
// 00488cb7  f30f2ac8             cvtsi2ss xmm1, eax
// 00488cbb  f30f59c8             mulss xmm1, xmm0
// 00488cbf  f30f2cd1             cvttss2si edx, xmm1
// 00488cc3  2bd0                 sub edx, eax
// 00488cc5  8d0432               lea eax, [edx + esi]
// 00488cc8  894108               mov dword ptr [ecx + 8], eax
// 00488ccb  8b156438c000         mov edx, dword ptr [0xc03864]
// 00488cd1  3bc2                 cmp eax, edx
// 00488cd3  7d03                 jge 0x488cd8
// 00488cd5  895108               mov dword ptr [ecx + 8], edx
// 00488cd8  55                   push ebp
// 00488cd9  e842f7ffff           call 0x488420
// 00488cde  5f                   pop edi
// 00488cdf  5e                   pop esi
// 00488ce0  5d                   pop ebp
// 00488ce1  c20800               ret 8
// 00488ce4  b856555555           mov eax, 0x55555556
// 00488ce9  f7ea                 imul edx
// 00488ceb  8bc2                 mov eax, edx
// 00488ced  c1e81f               shr eax, 0x1f
// 00488cf0  03c2                 add eax, edx
// 00488cf2  3bf0                 cmp esi, eax
// 00488cf4  7f17                 jg 0x488d0d
// 00488cf6  807c241400           cmp byte ptr [esp + 0x14], 0
// 00488cfb  7410                 je 0x488d0d
// 00488cfd  3bf7                 cmp esi, edi
// 00488cff  7e0c                 jle 0x488d0d
// 00488d01  3bf5                 cmp esi, ebp
// 00488d03  7c02                 jl 0x488d07
// 00488d05  8bf5                 mov esi, ebp
// 00488d07  56                   push esi
// 00488d08  e813f7ffff           call 0x488420
// 00488d0d  5f                   pop edi
// 00488d0e  5e                   pop esi
// 00488d0f  5d                   pop ebp
// 00488d10  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
