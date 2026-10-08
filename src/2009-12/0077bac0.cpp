// roc 2009-12 0077bac0  unit: RBX::BallBallContact  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0077bac0
//
// 0077bac0  8b442404             mov eax, dword ptr [esp + 4]
// 0077bac4  55                   push ebp
// 0077bac5  8b6904               mov ebp, dword ptr [ecx + 4]
// 0077bac8  ba01000000           mov edx, 1
// 0077bacd  56                   push esi
// 0077bace  894104               mov dword ptr [ecx + 4], eax
// 0077bad1  57                   push edi
// 0077bad2  8415e487b900         test byte ptr [0xb987e4], dl
// 0077bad8  7513                 jne 0x77baed
// 0077bada  0915e487b900         or dword ptr [0xb987e4], edx
// 0077bae0  bf0a000000           mov edi, 0xa
// 0077bae5  893de087b900         mov dword ptr [0xb987e0], edi
// 0077baeb  eb06                 jmp 0x77baf3
// 0077baed  8b3de087b900         mov edi, dword ptr [0xb987e0]
// 0077baf3  8b5108               mov edx, dword ptr [ecx + 8]
// 0077baf6  8b7104               mov esi, dword ptr [ecx + 4]
// 0077baf9  3bf2                 cmp esi, edx
// 0077bafb  0f8e83000000         jle 0x77bb84
// 0077bb01  85d2                 test edx, edx
// 0077bb03  750f                 jne 0x77bb14
// 0077bb05  55                   push ebp
// 0077bb06  894108               mov dword ptr [ecx + 8], eax
// 0077bb09  e842a5f1ff           call 0x696050
// 0077bb0e  5f                   pop edi
// 0077bb0f  5e                   pop esi
// 0077bb10  5d                   pop ebp
// 0077bb11  c20800               ret 8
// 0077bb14  3bf7                 cmp esi, edi
// 0077bb16  7d0f                 jge 0x77bb27
// 0077bb18  55                   push ebp
// 0077bb19  897908               mov dword ptr [ecx + 8], edi
// 0077bb1c  e82fa5f1ff           call 0x696050
// 0077bb21  5f                   pop edi
// 0077bb22  5e                   pop esi
// 0077bb23  5d                   pop ebp
// 0077bb24  c20800               ret 8
// 0077bb27  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 0077bb2f  8bc2                 mov eax, edx
// 0077bb31  03c0                 add eax, eax
// 0077bb33  03c0                 add eax, eax
// 0077bb35  3d801a0600           cmp eax, 0x61a80
// 0077bb3a  760a                 jbe 0x77bb46
// 0077bb3c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 0077bb44  eb0f                 jmp 0x77bb55
// 0077bb46  3d00fa0000           cmp eax, 0xfa00
// 0077bb4b  7608                 jbe 0x77bb55
// 0077bb4d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 0077bb55  8bc2                 mov eax, edx
// 0077bb57  f30f2ac8             cvtsi2ss xmm1, eax
// 0077bb5b  f30f59c8             mulss xmm1, xmm0
// 0077bb5f  f30f2cd1             cvttss2si edx, xmm1
// 0077bb63  2bd0                 sub edx, eax
// 0077bb65  8d0432               lea eax, [edx + esi]
// 0077bb68  894108               mov dword ptr [ecx + 8], eax
// 0077bb6b  8b15e087b900         mov edx, dword ptr [0xb987e0]
// 0077bb71  3bc2                 cmp eax, edx
// 0077bb73  7d03                 jge 0x77bb78
// 0077bb75  895108               mov dword ptr [ecx + 8], edx
// 0077bb78  55                   push ebp
// 0077bb79  e8d2a4f1ff           call 0x696050
// 0077bb7e  5f                   pop edi
// 0077bb7f  5e                   pop esi
// 0077bb80  5d                   pop ebp
// 0077bb81  c20800               ret 8
// 0077bb84  b856555555           mov eax, 0x55555556
// 0077bb89  f7ea                 imul edx
// 0077bb8b  8bc2                 mov eax, edx
// 0077bb8d  c1e81f               shr eax, 0x1f
// 0077bb90  03c2                 add eax, edx
// 0077bb92  3bf0                 cmp esi, eax
// 0077bb94  7f17                 jg 0x77bbad
// 0077bb96  807c241400           cmp byte ptr [esp + 0x14], 0
// 0077bb9b  7410                 je 0x77bbad
// 0077bb9d  3bf7                 cmp esi, edi
// 0077bb9f  7e0c                 jle 0x77bbad
// 0077bba1  3bf5                 cmp esi, ebp
// 0077bba3  7c02                 jl 0x77bba7
// 0077bba5  8bf5                 mov esi, ebp
// 0077bba7  56                   push esi
// 0077bba8  e8a3a4f1ff           call 0x696050
// 0077bbad  5f                   pop edi
// 0077bbae  5e                   pop esi
// 0077bbaf  5d                   pop ebp
// 0077bbb0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
