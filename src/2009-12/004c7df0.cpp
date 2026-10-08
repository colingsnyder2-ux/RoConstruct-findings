// roc 2009-12 004c7df0  unit: G3D::GImage::Error  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7df0
//
// 004c7df0  8b442404             mov eax, dword ptr [esp + 4]
// 004c7df4  55                   push ebp
// 004c7df5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004c7df8  ba01000000           mov edx, 1
// 004c7dfd  56                   push esi
// 004c7dfe  894104               mov dword ptr [ecx + 4], eax
// 004c7e01  57                   push edi
// 004c7e02  841518d0b700         test byte ptr [0xb7d018], dl
// 004c7e08  7513                 jne 0x4c7e1d
// 004c7e0a  091518d0b700         or dword ptr [0xb7d018], edx
// 004c7e10  bf20000000           mov edi, 0x20
// 004c7e15  893d14d0b700         mov dword ptr [0xb7d014], edi
// 004c7e1b  eb06                 jmp 0x4c7e23
// 004c7e1d  8b3d14d0b700         mov edi, dword ptr [0xb7d014]
// 004c7e23  8b5108               mov edx, dword ptr [ecx + 8]
// 004c7e26  8b7104               mov esi, dword ptr [ecx + 4]
// 004c7e29  3bf2                 cmp esi, edx
// 004c7e2b  7e7d                 jle 0x4c7eaa
// 004c7e2d  85d2                 test edx, edx
// 004c7e2f  750f                 jne 0x4c7e40
// 004c7e31  55                   push ebp
// 004c7e32  894108               mov dword ptr [ecx + 8], eax
// 004c7e35  e8d6f8ffff           call 0x4c7710
// 004c7e3a  5f                   pop edi
// 004c7e3b  5e                   pop esi
// 004c7e3c  5d                   pop ebp
// 004c7e3d  c20800               ret 8
// 004c7e40  3bf7                 cmp esi, edi
// 004c7e42  7d0f                 jge 0x4c7e53
// 004c7e44  55                   push ebp
// 004c7e45  897908               mov dword ptr [ecx + 8], edi
// 004c7e48  e8c3f8ffff           call 0x4c7710
// 004c7e4d  5f                   pop edi
// 004c7e4e  5e                   pop esi
// 004c7e4f  5d                   pop ebp
// 004c7e50  c20800               ret 8
// 004c7e53  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004c7e5b  8bc2                 mov eax, edx
// 004c7e5d  3d801a0600           cmp eax, 0x61a80
// 004c7e62  760a                 jbe 0x4c7e6e
// 004c7e64  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004c7e6c  eb0f                 jmp 0x4c7e7d
// 004c7e6e  3d00fa0000           cmp eax, 0xfa00
// 004c7e73  7608                 jbe 0x4c7e7d
// 004c7e75  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004c7e7d  f30f2ac8             cvtsi2ss xmm1, eax
// 004c7e81  f30f59c8             mulss xmm1, xmm0
// 004c7e85  f30f2cd1             cvttss2si edx, xmm1
// 004c7e89  2bd0                 sub edx, eax
// 004c7e8b  8d0432               lea eax, [edx + esi]
// 004c7e8e  894108               mov dword ptr [ecx + 8], eax
// 004c7e91  8b1514d0b700         mov edx, dword ptr [0xb7d014]
// 004c7e97  3bc2                 cmp eax, edx
// 004c7e99  7d03                 jge 0x4c7e9e
// 004c7e9b  895108               mov dword ptr [ecx + 8], edx
// 004c7e9e  55                   push ebp
// 004c7e9f  e86cf8ffff           call 0x4c7710
// 004c7ea4  5f                   pop edi
// 004c7ea5  5e                   pop esi
// 004c7ea6  5d                   pop ebp
// 004c7ea7  c20800               ret 8
// 004c7eaa  b856555555           mov eax, 0x55555556
// 004c7eaf  f7ea                 imul edx
// 004c7eb1  8bc2                 mov eax, edx
// 004c7eb3  c1e81f               shr eax, 0x1f
// 004c7eb6  03c2                 add eax, edx
// 004c7eb8  3bf0                 cmp esi, eax
// 004c7eba  7f17                 jg 0x4c7ed3
// 004c7ebc  807c241400           cmp byte ptr [esp + 0x14], 0
// 004c7ec1  7410                 je 0x4c7ed3
// 004c7ec3  3bf7                 cmp esi, edi
// 004c7ec5  7e0c                 jle 0x4c7ed3
// 004c7ec7  3bf5                 cmp esi, ebp
// 004c7ec9  7c02                 jl 0x4c7ecd
// 004c7ecb  8bf5                 mov esi, ebp
// 004c7ecd  56                   push esi
// 004c7ece  e83df8ffff           call 0x4c7710
// 004c7ed3  5f                   pop edi
// 004c7ed4  5e                   pop esi
// 004c7ed5  5d                   pop ebp
// 004c7ed6  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
