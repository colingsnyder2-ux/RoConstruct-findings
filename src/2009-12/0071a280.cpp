// roc 2009-12 0071a280  unit: RBX::VPhysicsService::?$EventDesc  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0071a280
//
// 0071a280  8b442404             mov eax, dword ptr [esp + 4]
// 0071a284  55                   push ebp
// 0071a285  8b6904               mov ebp, dword ptr [ecx + 4]
// 0071a288  ba01000000           mov edx, 1
// 0071a28d  56                   push esi
// 0071a28e  894104               mov dword ptr [ecx + 4], eax
// 0071a291  57                   push edi
// 0071a292  8415b058b900         test byte ptr [0xb958b0], dl
// 0071a298  7513                 jne 0x71a2ad
// 0071a29a  0915b058b900         or dword ptr [0xb958b0], edx
// 0071a2a0  bf0a000000           mov edi, 0xa
// 0071a2a5  893dac58b900         mov dword ptr [0xb958ac], edi
// 0071a2ab  eb06                 jmp 0x71a2b3
// 0071a2ad  8b3dac58b900         mov edi, dword ptr [0xb958ac]
// 0071a2b3  8b5108               mov edx, dword ptr [ecx + 8]
// 0071a2b6  8b7104               mov esi, dword ptr [ecx + 4]
// 0071a2b9  3bf2                 cmp esi, edx
// 0071a2bb  0f8e83000000         jle 0x71a344
// 0071a2c1  85d2                 test edx, edx
// 0071a2c3  750f                 jne 0x71a2d4
// 0071a2c5  55                   push ebp
// 0071a2c6  894108               mov dword ptr [ecx + 8], eax
// 0071a2c9  e882bdf7ff           call 0x696050
// 0071a2ce  5f                   pop edi
// 0071a2cf  5e                   pop esi
// 0071a2d0  5d                   pop ebp
// 0071a2d1  c20800               ret 8
// 0071a2d4  3bf7                 cmp esi, edi
// 0071a2d6  7d0f                 jge 0x71a2e7
// 0071a2d8  55                   push ebp
// 0071a2d9  897908               mov dword ptr [ecx + 8], edi
// 0071a2dc  e86fbdf7ff           call 0x696050
// 0071a2e1  5f                   pop edi
// 0071a2e2  5e                   pop esi
// 0071a2e3  5d                   pop ebp
// 0071a2e4  c20800               ret 8
// 0071a2e7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 0071a2ef  8bc2                 mov eax, edx
// 0071a2f1  03c0                 add eax, eax
// 0071a2f3  03c0                 add eax, eax
// 0071a2f5  3d801a0600           cmp eax, 0x61a80
// 0071a2fa  760a                 jbe 0x71a306
// 0071a2fc  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 0071a304  eb0f                 jmp 0x71a315
// 0071a306  3d00fa0000           cmp eax, 0xfa00
// 0071a30b  7608                 jbe 0x71a315
// 0071a30d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 0071a315  8bc2                 mov eax, edx
// 0071a317  f30f2ac8             cvtsi2ss xmm1, eax
// 0071a31b  f30f59c8             mulss xmm1, xmm0
// 0071a31f  f30f2cd1             cvttss2si edx, xmm1
// 0071a323  2bd0                 sub edx, eax
// 0071a325  8d0432               lea eax, [edx + esi]
// 0071a328  894108               mov dword ptr [ecx + 8], eax
// 0071a32b  8b15ac58b900         mov edx, dword ptr [0xb958ac]
// 0071a331  3bc2                 cmp eax, edx
// 0071a333  7d03                 jge 0x71a338
// 0071a335  895108               mov dword ptr [ecx + 8], edx
// 0071a338  55                   push ebp
// 0071a339  e812bdf7ff           call 0x696050
// 0071a33e  5f                   pop edi
// 0071a33f  5e                   pop esi
// 0071a340  5d                   pop ebp
// 0071a341  c20800               ret 8
// 0071a344  b856555555           mov eax, 0x55555556
// 0071a349  f7ea                 imul edx
// 0071a34b  8bc2                 mov eax, edx
// 0071a34d  c1e81f               shr eax, 0x1f
// 0071a350  03c2                 add eax, edx
// 0071a352  3bf0                 cmp esi, eax
// 0071a354  7f17                 jg 0x71a36d
// 0071a356  807c241400           cmp byte ptr [esp + 0x14], 0
// 0071a35b  7410                 je 0x71a36d
// 0071a35d  3bf7                 cmp esi, edi
// 0071a35f  7e0c                 jle 0x71a36d
// 0071a361  3bf5                 cmp esi, ebp
// 0071a363  7c02                 jl 0x71a367
// 0071a365  8bf5                 mov esi, ebp
// 0071a367  56                   push esi
// 0071a368  e8e3bcf7ff           call 0x696050
// 0071a36d  5f                   pop edi
// 0071a36e  5e                   pop esi
// 0071a36f  5d                   pop ebp
// 0071a370  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
