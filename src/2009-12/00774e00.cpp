// roc 2009-12 00774e00  unit: RBX::VLocalBackpackTool::?$FactoryProduct  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00774e00
//
// 00774e00  8b442404             mov eax, dword ptr [esp + 4]
// 00774e04  55                   push ebp
// 00774e05  8b6904               mov ebp, dword ptr [ecx + 4]
// 00774e08  ba01000000           mov edx, 1
// 00774e0d  56                   push esi
// 00774e0e  894104               mov dword ptr [ecx + 4], eax
// 00774e11  57                   push edi
// 00774e12  8415c087b900         test byte ptr [0xb987c0], dl
// 00774e18  7513                 jne 0x774e2d
// 00774e1a  0915c087b900         or dword ptr [0xb987c0], edx
// 00774e20  bf0a000000           mov edi, 0xa
// 00774e25  893dbc87b900         mov dword ptr [0xb987bc], edi
// 00774e2b  eb06                 jmp 0x774e33
// 00774e2d  8b3dbc87b900         mov edi, dword ptr [0xb987bc]
// 00774e33  8b5108               mov edx, dword ptr [ecx + 8]
// 00774e36  8b7104               mov esi, dword ptr [ecx + 4]
// 00774e39  3bf2                 cmp esi, edx
// 00774e3b  0f8e83000000         jle 0x774ec4
// 00774e41  85d2                 test edx, edx
// 00774e43  750f                 jne 0x774e54
// 00774e45  55                   push ebp
// 00774e46  894108               mov dword ptr [ecx + 8], eax
// 00774e49  e80212f2ff           call 0x696050
// 00774e4e  5f                   pop edi
// 00774e4f  5e                   pop esi
// 00774e50  5d                   pop ebp
// 00774e51  c20800               ret 8
// 00774e54  3bf7                 cmp esi, edi
// 00774e56  7d0f                 jge 0x774e67
// 00774e58  55                   push ebp
// 00774e59  897908               mov dword ptr [ecx + 8], edi
// 00774e5c  e8ef11f2ff           call 0x696050
// 00774e61  5f                   pop edi
// 00774e62  5e                   pop esi
// 00774e63  5d                   pop ebp
// 00774e64  c20800               ret 8
// 00774e67  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 00774e6f  8bc2                 mov eax, edx
// 00774e71  03c0                 add eax, eax
// 00774e73  03c0                 add eax, eax
// 00774e75  3d801a0600           cmp eax, 0x61a80
// 00774e7a  760a                 jbe 0x774e86
// 00774e7c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00774e84  eb0f                 jmp 0x774e95
// 00774e86  3d00fa0000           cmp eax, 0xfa00
// 00774e8b  7608                 jbe 0x774e95
// 00774e8d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00774e95  8bc2                 mov eax, edx
// 00774e97  f30f2ac8             cvtsi2ss xmm1, eax
// 00774e9b  f30f59c8             mulss xmm1, xmm0
// 00774e9f  f30f2cd1             cvttss2si edx, xmm1
// 00774ea3  2bd0                 sub edx, eax
// 00774ea5  8d0432               lea eax, [edx + esi]
// 00774ea8  894108               mov dword ptr [ecx + 8], eax
// 00774eab  8b15bc87b900         mov edx, dword ptr [0xb987bc]
// 00774eb1  3bc2                 cmp eax, edx
// 00774eb3  7d03                 jge 0x774eb8
// 00774eb5  895108               mov dword ptr [ecx + 8], edx
// 00774eb8  55                   push ebp
// 00774eb9  e89211f2ff           call 0x696050
// 00774ebe  5f                   pop edi
// 00774ebf  5e                   pop esi
// 00774ec0  5d                   pop ebp
// 00774ec1  c20800               ret 8
// 00774ec4  b856555555           mov eax, 0x55555556
// 00774ec9  f7ea                 imul edx
// 00774ecb  8bc2                 mov eax, edx
// 00774ecd  c1e81f               shr eax, 0x1f
// 00774ed0  03c2                 add eax, edx
// 00774ed2  3bf0                 cmp esi, eax
// 00774ed4  7f17                 jg 0x774eed
// 00774ed6  807c241400           cmp byte ptr [esp + 0x14], 0
// 00774edb  7410                 je 0x774eed
// 00774edd  3bf7                 cmp esi, edi
// 00774edf  7e0c                 jle 0x774eed
// 00774ee1  3bf5                 cmp esi, ebp
// 00774ee3  7c02                 jl 0x774ee7
// 00774ee5  8bf5                 mov esi, ebp
// 00774ee7  56                   push esi
// 00774ee8  e86311f2ff           call 0x696050
// 00774eed  5f                   pop edi
// 00774eee  5e                   pop esi
// 00774eef  5d                   pop ebp
// 00774ef0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
