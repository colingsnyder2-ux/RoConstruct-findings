// roc 2009-12 005f9ed0  unit: G3D::LineSegment  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f9ed0
//
// 005f9ed0  8b442404             mov eax, dword ptr [esp + 4]
// 005f9ed4  55                   push ebp
// 005f9ed5  8b6904               mov ebp, dword ptr [ecx + 4]
// 005f9ed8  ba01000000           mov edx, 1
// 005f9edd  56                   push esi
// 005f9ede  894104               mov dword ptr [ecx + 4], eax
// 005f9ee1  57                   push edi
// 005f9ee2  84150841b800         test byte ptr [0xb84108], dl
// 005f9ee8  7513                 jne 0x5f9efd
// 005f9eea  09150841b800         or dword ptr [0xb84108], edx
// 005f9ef0  bf20000000           mov edi, 0x20
// 005f9ef5  893d0441b800         mov dword ptr [0xb84104], edi
// 005f9efb  eb06                 jmp 0x5f9f03
// 005f9efd  8b3d0441b800         mov edi, dword ptr [0xb84104]
// 005f9f03  8b5108               mov edx, dword ptr [ecx + 8]
// 005f9f06  8b7104               mov esi, dword ptr [ecx + 4]
// 005f9f09  3bf2                 cmp esi, edx
// 005f9f0b  7e7d                 jle 0x5f9f8a
// 005f9f0d  85d2                 test edx, edx
// 005f9f0f  750f                 jne 0x5f9f20
// 005f9f11  55                   push ebp
// 005f9f12  894108               mov dword ptr [ecx + 8], eax
// 005f9f15  e8f6d7ecff           call 0x4c7710
// 005f9f1a  5f                   pop edi
// 005f9f1b  5e                   pop esi
// 005f9f1c  5d                   pop ebp
// 005f9f1d  c20800               ret 8
// 005f9f20  3bf7                 cmp esi, edi
// 005f9f22  7d0f                 jge 0x5f9f33
// 005f9f24  55                   push ebp
// 005f9f25  897908               mov dword ptr [ecx + 8], edi
// 005f9f28  e8e3d7ecff           call 0x4c7710
// 005f9f2d  5f                   pop edi
// 005f9f2e  5e                   pop esi
// 005f9f2f  5d                   pop ebp
// 005f9f30  c20800               ret 8
// 005f9f33  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 005f9f3b  8bc2                 mov eax, edx
// 005f9f3d  3d801a0600           cmp eax, 0x61a80
// 005f9f42  760a                 jbe 0x5f9f4e
// 005f9f44  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 005f9f4c  eb0f                 jmp 0x5f9f5d
// 005f9f4e  3d00fa0000           cmp eax, 0xfa00
// 005f9f53  7608                 jbe 0x5f9f5d
// 005f9f55  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 005f9f5d  f30f2ac8             cvtsi2ss xmm1, eax
// 005f9f61  f30f59c8             mulss xmm1, xmm0
// 005f9f65  f30f2cd1             cvttss2si edx, xmm1
// 005f9f69  2bd0                 sub edx, eax
// 005f9f6b  8d0432               lea eax, [edx + esi]
// 005f9f6e  894108               mov dword ptr [ecx + 8], eax
// 005f9f71  8b150441b800         mov edx, dword ptr [0xb84104]
// 005f9f77  3bc2                 cmp eax, edx
// 005f9f79  7d03                 jge 0x5f9f7e
// 005f9f7b  895108               mov dword ptr [ecx + 8], edx
// 005f9f7e  55                   push ebp
// 005f9f7f  e88cd7ecff           call 0x4c7710
// 005f9f84  5f                   pop edi
// 005f9f85  5e                   pop esi
// 005f9f86  5d                   pop ebp
// 005f9f87  c20800               ret 8
// 005f9f8a  b856555555           mov eax, 0x55555556
// 005f9f8f  f7ea                 imul edx
// 005f9f91  8bc2                 mov eax, edx
// 005f9f93  c1e81f               shr eax, 0x1f
// 005f9f96  03c2                 add eax, edx
// 005f9f98  3bf0                 cmp esi, eax
// 005f9f9a  7f17                 jg 0x5f9fb3
// 005f9f9c  807c241400           cmp byte ptr [esp + 0x14], 0
// 005f9fa1  7410                 je 0x5f9fb3
// 005f9fa3  3bf7                 cmp esi, edi
// 005f9fa5  7e0c                 jle 0x5f9fb3
// 005f9fa7  3bf5                 cmp esi, ebp
// 005f9fa9  7c02                 jl 0x5f9fad
// 005f9fab  8bf5                 mov esi, ebp
// 005f9fad  56                   push esi
// 005f9fae  e85dd7ecff           call 0x4c7710
// 005f9fb3  5f                   pop edi
// 005f9fb4  5e                   pop esi
// 005f9fb5  5d                   pop ebp
// 005f9fb6  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
