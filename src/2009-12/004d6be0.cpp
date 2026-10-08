// roc 2009-12 004d6be0  unit: G3D::Win32Window  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6be0
//
// 004d6be0  8b442404             mov eax, dword ptr [esp + 4]
// 004d6be4  55                   push ebp
// 004d6be5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004d6be8  ba01000000           mov edx, 1
// 004d6bed  56                   push esi
// 004d6bee  894104               mov dword ptr [ecx + 4], eax
// 004d6bf1  57                   push edi
// 004d6bf2  8415b8d8b700         test byte ptr [0xb7d8b8], dl
// 004d6bf8  7513                 jne 0x4d6c0d
// 004d6bfa  0915b8d8b700         or dword ptr [0xb7d8b8], edx
// 004d6c00  bf0a000000           mov edi, 0xa
// 004d6c05  893db4d8b700         mov dword ptr [0xb7d8b4], edi
// 004d6c0b  eb06                 jmp 0x4d6c13
// 004d6c0d  8b3db4d8b700         mov edi, dword ptr [0xb7d8b4]
// 004d6c13  8b5108               mov edx, dword ptr [ecx + 8]
// 004d6c16  8b7104               mov esi, dword ptr [ecx + 4]
// 004d6c19  3bf2                 cmp esi, edx
// 004d6c1b  0f8e83000000         jle 0x4d6ca4
// 004d6c21  85d2                 test edx, edx
// 004d6c23  750f                 jne 0x4d6c34
// 004d6c25  55                   push ebp
// 004d6c26  894108               mov dword ptr [ecx + 8], eax
// 004d6c29  e822f41b00           call 0x696050
// 004d6c2e  5f                   pop edi
// 004d6c2f  5e                   pop esi
// 004d6c30  5d                   pop ebp
// 004d6c31  c20800               ret 8
// 004d6c34  3bf7                 cmp esi, edi
// 004d6c36  7d0f                 jge 0x4d6c47
// 004d6c38  55                   push ebp
// 004d6c39  897908               mov dword ptr [ecx + 8], edi
// 004d6c3c  e80ff41b00           call 0x696050
// 004d6c41  5f                   pop edi
// 004d6c42  5e                   pop esi
// 004d6c43  5d                   pop ebp
// 004d6c44  c20800               ret 8
// 004d6c47  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004d6c4f  8bc2                 mov eax, edx
// 004d6c51  03c0                 add eax, eax
// 004d6c53  03c0                 add eax, eax
// 004d6c55  3d801a0600           cmp eax, 0x61a80
// 004d6c5a  760a                 jbe 0x4d6c66
// 004d6c5c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004d6c64  eb0f                 jmp 0x4d6c75
// 004d6c66  3d00fa0000           cmp eax, 0xfa00
// 004d6c6b  7608                 jbe 0x4d6c75
// 004d6c6d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004d6c75  8bc2                 mov eax, edx
// 004d6c77  f30f2ac8             cvtsi2ss xmm1, eax
// 004d6c7b  f30f59c8             mulss xmm1, xmm0
// 004d6c7f  f30f2cd1             cvttss2si edx, xmm1
// 004d6c83  2bd0                 sub edx, eax
// 004d6c85  8d0432               lea eax, [edx + esi]
// 004d6c88  894108               mov dword ptr [ecx + 8], eax
// 004d6c8b  8b15b4d8b700         mov edx, dword ptr [0xb7d8b4]
// 004d6c91  3bc2                 cmp eax, edx
// 004d6c93  7d03                 jge 0x4d6c98
// 004d6c95  895108               mov dword ptr [ecx + 8], edx
// 004d6c98  55                   push ebp
// 004d6c99  e8b2f31b00           call 0x696050
// 004d6c9e  5f                   pop edi
// 004d6c9f  5e                   pop esi
// 004d6ca0  5d                   pop ebp
// 004d6ca1  c20800               ret 8
// 004d6ca4  b856555555           mov eax, 0x55555556
// 004d6ca9  f7ea                 imul edx
// 004d6cab  8bc2                 mov eax, edx
// 004d6cad  c1e81f               shr eax, 0x1f
// 004d6cb0  03c2                 add eax, edx
// 004d6cb2  3bf0                 cmp esi, eax
// 004d6cb4  7f17                 jg 0x4d6ccd
// 004d6cb6  807c241400           cmp byte ptr [esp + 0x14], 0
// 004d6cbb  7410                 je 0x4d6ccd
// 004d6cbd  3bf7                 cmp esi, edi
// 004d6cbf  7e0c                 jle 0x4d6ccd
// 004d6cc1  3bf5                 cmp esi, ebp
// 004d6cc3  7c02                 jl 0x4d6cc7
// 004d6cc5  8bf5                 mov esi, ebp
// 004d6cc7  56                   push esi
// 004d6cc8  e883f31b00           call 0x696050
// 004d6ccd  5f                   pop edi
// 004d6cce  5e                   pop esi
// 004d6ccf  5d                   pop ebp
// 004d6cd0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
