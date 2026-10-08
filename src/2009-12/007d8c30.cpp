// roc 2009-12 007d8c30  unit: RBX::HUMAN::GettingUp  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007d8c30
//
// 007d8c30  8b442404             mov eax, dword ptr [esp + 4]
// 007d8c34  55                   push ebp
// 007d8c35  8b6904               mov ebp, dword ptr [ecx + 4]
// 007d8c38  ba01000000           mov edx, 1
// 007d8c3d  56                   push esi
// 007d8c3e  894104               mov dword ptr [ecx + 4], eax
// 007d8c41  57                   push edi
// 007d8c42  8415788fb900         test byte ptr [0xb98f78], dl
// 007d8c48  7513                 jne 0x7d8c5d
// 007d8c4a  0915788fb900         or dword ptr [0xb98f78], edx
// 007d8c50  bf0a000000           mov edi, 0xa
// 007d8c55  893d748fb900         mov dword ptr [0xb98f74], edi
// 007d8c5b  eb06                 jmp 0x7d8c63
// 007d8c5d  8b3d748fb900         mov edi, dword ptr [0xb98f74]
// 007d8c63  8b5108               mov edx, dword ptr [ecx + 8]
// 007d8c66  8b7104               mov esi, dword ptr [ecx + 4]
// 007d8c69  3bf2                 cmp esi, edx
// 007d8c6b  0f8e83000000         jle 0x7d8cf4
// 007d8c71  85d2                 test edx, edx
// 007d8c73  750f                 jne 0x7d8c84
// 007d8c75  55                   push ebp
// 007d8c76  894108               mov dword ptr [ecx + 8], eax
// 007d8c79  e8d2d3ebff           call 0x696050
// 007d8c7e  5f                   pop edi
// 007d8c7f  5e                   pop esi
// 007d8c80  5d                   pop ebp
// 007d8c81  c20800               ret 8
// 007d8c84  3bf7                 cmp esi, edi
// 007d8c86  7d0f                 jge 0x7d8c97
// 007d8c88  55                   push ebp
// 007d8c89  897908               mov dword ptr [ecx + 8], edi
// 007d8c8c  e8bfd3ebff           call 0x696050
// 007d8c91  5f                   pop edi
// 007d8c92  5e                   pop esi
// 007d8c93  5d                   pop ebp
// 007d8c94  c20800               ret 8
// 007d8c97  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 007d8c9f  8bc2                 mov eax, edx
// 007d8ca1  03c0                 add eax, eax
// 007d8ca3  03c0                 add eax, eax
// 007d8ca5  3d801a0600           cmp eax, 0x61a80
// 007d8caa  760a                 jbe 0x7d8cb6
// 007d8cac  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 007d8cb4  eb0f                 jmp 0x7d8cc5
// 007d8cb6  3d00fa0000           cmp eax, 0xfa00
// 007d8cbb  7608                 jbe 0x7d8cc5
// 007d8cbd  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 007d8cc5  8bc2                 mov eax, edx
// 007d8cc7  f30f2ac8             cvtsi2ss xmm1, eax
// 007d8ccb  f30f59c8             mulss xmm1, xmm0
// 007d8ccf  f30f2cd1             cvttss2si edx, xmm1
// 007d8cd3  2bd0                 sub edx, eax
// 007d8cd5  8d0432               lea eax, [edx + esi]
// 007d8cd8  894108               mov dword ptr [ecx + 8], eax
// 007d8cdb  8b15748fb900         mov edx, dword ptr [0xb98f74]
// 007d8ce1  3bc2                 cmp eax, edx
// 007d8ce3  7d03                 jge 0x7d8ce8
// 007d8ce5  895108               mov dword ptr [ecx + 8], edx
// 007d8ce8  55                   push ebp
// 007d8ce9  e862d3ebff           call 0x696050
// 007d8cee  5f                   pop edi
// 007d8cef  5e                   pop esi
// 007d8cf0  5d                   pop ebp
// 007d8cf1  c20800               ret 8
// 007d8cf4  b856555555           mov eax, 0x55555556
// 007d8cf9  f7ea                 imul edx
// 007d8cfb  8bc2                 mov eax, edx
// 007d8cfd  c1e81f               shr eax, 0x1f
// 007d8d00  03c2                 add eax, edx
// 007d8d02  3bf0                 cmp esi, eax
// 007d8d04  7f17                 jg 0x7d8d1d
// 007d8d06  807c241400           cmp byte ptr [esp + 0x14], 0
// 007d8d0b  7410                 je 0x7d8d1d
// 007d8d0d  3bf7                 cmp esi, edi
// 007d8d0f  7e0c                 jle 0x7d8d1d
// 007d8d11  3bf5                 cmp esi, ebp
// 007d8d13  7c02                 jl 0x7d8d17
// 007d8d15  8bf5                 mov esi, ebp
// 007d8d17  56                   push esi
// 007d8d18  e833d3ebff           call 0x696050
// 007d8d1d  5f                   pop edi
// 007d8d1e  5e                   pop esi
// 007d8d1f  5d                   pop ebp
// 007d8d20  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
