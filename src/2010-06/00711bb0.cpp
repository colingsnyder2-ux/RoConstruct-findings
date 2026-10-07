// roc 2010-06 00711bb0  unit: RBX::BallBallContact  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00711bb0
//
// 00711bb0  8b442404             mov eax, dword ptr [esp + 4]
// 00711bb4  55                   push ebp
// 00711bb5  8b6904               mov ebp, dword ptr [ecx + 4]
// 00711bb8  ba01000000           mov edx, 1
// 00711bbd  56                   push esi
// 00711bbe  894104               mov dword ptr [ecx + 4], eax
// 00711bc1  57                   push edi
// 00711bc2  84159828c200         test byte ptr [0xc22898], dl
// 00711bc8  7513                 jne 0x711bdd
// 00711bca  09159828c200         or dword ptr [0xc22898], edx
// 00711bd0  bf0a000000           mov edi, 0xa
// 00711bd5  893d9428c200         mov dword ptr [0xc22894], edi
// 00711bdb  eb06                 jmp 0x711be3
// 00711bdd  8b3d9428c200         mov edi, dword ptr [0xc22894]
// 00711be3  8b5108               mov edx, dword ptr [ecx + 8]
// 00711be6  8b7104               mov esi, dword ptr [ecx + 4]
// 00711be9  3bf2                 cmp esi, edx
// 00711beb  0f8e83000000         jle 0x711c74
// 00711bf1  85d2                 test edx, edx
// 00711bf3  750f                 jne 0x711c04
// 00711bf5  55                   push ebp
// 00711bf6  894108               mov dword ptr [ecx + 8], eax
// 00711bf9  e82268d7ff           call 0x488420
// 00711bfe  5f                   pop edi
// 00711bff  5e                   pop esi
// 00711c00  5d                   pop ebp
// 00711c01  c20800               ret 8
// 00711c04  3bf7                 cmp esi, edi
// 00711c06  7d0f                 jge 0x711c17
// 00711c08  55                   push ebp
// 00711c09  897908               mov dword ptr [ecx + 8], edi
// 00711c0c  e80f68d7ff           call 0x488420
// 00711c11  5f                   pop edi
// 00711c12  5e                   pop esi
// 00711c13  5d                   pop ebp
// 00711c14  c20800               ret 8
// 00711c17  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00711c1f  8bc2                 mov eax, edx
// 00711c21  03c0                 add eax, eax
// 00711c23  03c0                 add eax, eax
// 00711c25  3d801a0600           cmp eax, 0x61a80
// 00711c2a  760a                 jbe 0x711c36
// 00711c2c  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00711c34  eb0f                 jmp 0x711c45
// 00711c36  3d00fa0000           cmp eax, 0xfa00
// 00711c3b  7608                 jbe 0x711c45
// 00711c3d  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00711c45  8bc2                 mov eax, edx
// 00711c47  f30f2ac8             cvtsi2ss xmm1, eax
// 00711c4b  f30f59c8             mulss xmm1, xmm0
// 00711c4f  f30f2cd1             cvttss2si edx, xmm1
// 00711c53  2bd0                 sub edx, eax
// 00711c55  8d0432               lea eax, [edx + esi]
// 00711c58  894108               mov dword ptr [ecx + 8], eax
// 00711c5b  8b159428c200         mov edx, dword ptr [0xc22894]
// 00711c61  3bc2                 cmp eax, edx
// 00711c63  7d03                 jge 0x711c68
// 00711c65  895108               mov dword ptr [ecx + 8], edx
// 00711c68  55                   push ebp
// 00711c69  e8b267d7ff           call 0x488420
// 00711c6e  5f                   pop edi
// 00711c6f  5e                   pop esi
// 00711c70  5d                   pop ebp
// 00711c71  c20800               ret 8
// 00711c74  b856555555           mov eax, 0x55555556
// 00711c79  f7ea                 imul edx
// 00711c7b  8bc2                 mov eax, edx
// 00711c7d  c1e81f               shr eax, 0x1f
// 00711c80  03c2                 add eax, edx
// 00711c82  3bf0                 cmp esi, eax
// 00711c84  7f17                 jg 0x711c9d
// 00711c86  807c241400           cmp byte ptr [esp + 0x14], 0
// 00711c8b  7410                 je 0x711c9d
// 00711c8d  3bf7                 cmp esi, edi
// 00711c8f  7e0c                 jle 0x711c9d
// 00711c91  3bf5                 cmp esi, ebp
// 00711c93  7c02                 jl 0x711c97
// 00711c95  8bf5                 mov esi, ebp
// 00711c97  56                   push esi
// 00711c98  e88367d7ff           call 0x488420
// 00711c9d  5f                   pop edi
// 00711c9e  5e                   pop esi
// 00711c9f  5d                   pop ebp
// 00711ca0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
