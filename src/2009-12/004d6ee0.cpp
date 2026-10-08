// roc 2009-12 004d6ee0  unit: G3D::Win32Window  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6ee0
//
// 004d6ee0  8b442404             mov eax, dword ptr [esp + 4]
// 004d6ee4  55                   push ebp
// 004d6ee5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004d6ee8  ba01000000           mov edx, 1
// 004d6eed  56                   push esi
// 004d6eee  894104               mov dword ptr [ecx + 4], eax
// 004d6ef1  57                   push edi
// 004d6ef2  8415c4d8b700         test byte ptr [0xb7d8c4], dl
// 004d6ef8  7513                 jne 0x4d6f0d
// 004d6efa  0915c4d8b700         or dword ptr [0xb7d8c4], edx
// 004d6f00  bf0a000000           mov edi, 0xa
// 004d6f05  893dc0d8b700         mov dword ptr [0xb7d8c0], edi
// 004d6f0b  eb06                 jmp 0x4d6f13
// 004d6f0d  8b3dc0d8b700         mov edi, dword ptr [0xb7d8c0]
// 004d6f13  8b5108               mov edx, dword ptr [ecx + 8]
// 004d6f16  8b7104               mov esi, dword ptr [ecx + 4]
// 004d6f19  3bf2                 cmp esi, edx
// 004d6f1b  0f8e86000000         jle 0x4d6fa7
// 004d6f21  85d2                 test edx, edx
// 004d6f23  750f                 jne 0x4d6f34
// 004d6f25  55                   push ebp
// 004d6f26  894108               mov dword ptr [ecx + 8], eax
// 004d6f29  e892f4ffff           call 0x4d63c0
// 004d6f2e  5f                   pop edi
// 004d6f2f  5e                   pop esi
// 004d6f30  5d                   pop ebp
// 004d6f31  c20800               ret 8
// 004d6f34  3bf7                 cmp esi, edi
// 004d6f36  7d0f                 jge 0x4d6f47
// 004d6f38  55                   push ebp
// 004d6f39  897908               mov dword ptr [ecx + 8], edi
// 004d6f3c  e87ff4ffff           call 0x4d63c0
// 004d6f41  5f                   pop edi
// 004d6f42  5e                   pop esi
// 004d6f43  5d                   pop ebp
// 004d6f44  c20800               ret 8
// 004d6f47  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004d6f4f  8bc2                 mov eax, edx
// 004d6f51  8d0480               lea eax, [eax + eax*4]
// 004d6f54  03c0                 add eax, eax
// 004d6f56  03c0                 add eax, eax
// 004d6f58  3d801a0600           cmp eax, 0x61a80
// 004d6f5d  760a                 jbe 0x4d6f69
// 004d6f5f  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004d6f67  eb0f                 jmp 0x4d6f78
// 004d6f69  3d00fa0000           cmp eax, 0xfa00
// 004d6f6e  7608                 jbe 0x4d6f78
// 004d6f70  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004d6f78  8bc2                 mov eax, edx
// 004d6f7a  f30f2ac8             cvtsi2ss xmm1, eax
// 004d6f7e  f30f59c8             mulss xmm1, xmm0
// 004d6f82  f30f2cd1             cvttss2si edx, xmm1
// 004d6f86  2bd0                 sub edx, eax
// 004d6f88  8d0432               lea eax, [edx + esi]
// 004d6f8b  894108               mov dword ptr [ecx + 8], eax
// 004d6f8e  8b15c0d8b700         mov edx, dword ptr [0xb7d8c0]
// 004d6f94  3bc2                 cmp eax, edx
// 004d6f96  7d03                 jge 0x4d6f9b
// 004d6f98  895108               mov dword ptr [ecx + 8], edx
// 004d6f9b  55                   push ebp
// 004d6f9c  e81ff4ffff           call 0x4d63c0
// 004d6fa1  5f                   pop edi
// 004d6fa2  5e                   pop esi
// 004d6fa3  5d                   pop ebp
// 004d6fa4  c20800               ret 8
// 004d6fa7  b856555555           mov eax, 0x55555556
// 004d6fac  f7ea                 imul edx
// 004d6fae  8bc2                 mov eax, edx
// 004d6fb0  c1e81f               shr eax, 0x1f
// 004d6fb3  03c2                 add eax, edx
// 004d6fb5  3bf0                 cmp esi, eax
// 004d6fb7  7f17                 jg 0x4d6fd0
// 004d6fb9  807c241400           cmp byte ptr [esp + 0x14], 0
// 004d6fbe  7410                 je 0x4d6fd0
// 004d6fc0  3bf7                 cmp esi, edi
// 004d6fc2  7e0c                 jle 0x4d6fd0
// 004d6fc4  3bf5                 cmp esi, ebp
// 004d6fc6  7c02                 jl 0x4d6fca
// 004d6fc8  8bf5                 mov esi, ebp
// 004d6fca  56                   push esi
// 004d6fcb  e8f0f3ffff           call 0x4d63c0
// 004d6fd0  5f                   pop edi
// 004d6fd1  5e                   pop esi
// 004d6fd2  5d                   pop ebp
// 004d6fd3  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?resize@?$Array@TSDL_Event@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
