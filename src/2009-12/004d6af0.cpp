// roc 2009-12 004d6af0  unit: G3D::Win32Window  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6af0
//
// 004d6af0  8b442404             mov eax, dword ptr [esp + 4]
// 004d6af4  55                   push ebp
// 004d6af5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004d6af8  ba01000000           mov edx, 1
// 004d6afd  56                   push esi
// 004d6afe  894104               mov dword ptr [ecx + 4], eax
// 004d6b01  57                   push edi
// 004d6b02  8415b0d8b700         test byte ptr [0xb7d8b0], dl
// 004d6b08  7513                 jne 0x4d6b1d
// 004d6b0a  0915b0d8b700         or dword ptr [0xb7d8b0], edx
// 004d6b10  bf20000000           mov edi, 0x20
// 004d6b15  893dacd8b700         mov dword ptr [0xb7d8ac], edi
// 004d6b1b  eb06                 jmp 0x4d6b23
// 004d6b1d  8b3dacd8b700         mov edi, dword ptr [0xb7d8ac]
// 004d6b23  8b5108               mov edx, dword ptr [ecx + 8]
// 004d6b26  8b7104               mov esi, dword ptr [ecx + 4]
// 004d6b29  3bf2                 cmp esi, edx
// 004d6b2b  7e7d                 jle 0x4d6baa
// 004d6b2d  85d2                 test edx, edx
// 004d6b2f  750f                 jne 0x4d6b40
// 004d6b31  55                   push ebp
// 004d6b32  894108               mov dword ptr [ecx + 8], eax
// 004d6b35  e8d60bffff           call 0x4c7710
// 004d6b3a  5f                   pop edi
// 004d6b3b  5e                   pop esi
// 004d6b3c  5d                   pop ebp
// 004d6b3d  c20800               ret 8
// 004d6b40  3bf7                 cmp esi, edi
// 004d6b42  7d0f                 jge 0x4d6b53
// 004d6b44  55                   push ebp
// 004d6b45  897908               mov dword ptr [ecx + 8], edi
// 004d6b48  e8c30bffff           call 0x4c7710
// 004d6b4d  5f                   pop edi
// 004d6b4e  5e                   pop esi
// 004d6b4f  5d                   pop ebp
// 004d6b50  c20800               ret 8
// 004d6b53  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004d6b5b  8bc2                 mov eax, edx
// 004d6b5d  3d801a0600           cmp eax, 0x61a80
// 004d6b62  760a                 jbe 0x4d6b6e
// 004d6b64  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004d6b6c  eb0f                 jmp 0x4d6b7d
// 004d6b6e  3d00fa0000           cmp eax, 0xfa00
// 004d6b73  7608                 jbe 0x4d6b7d
// 004d6b75  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004d6b7d  f30f2ac8             cvtsi2ss xmm1, eax
// 004d6b81  f30f59c8             mulss xmm1, xmm0
// 004d6b85  f30f2cd1             cvttss2si edx, xmm1
// 004d6b89  2bd0                 sub edx, eax
// 004d6b8b  8d0432               lea eax, [edx + esi]
// 004d6b8e  894108               mov dword ptr [ecx + 8], eax
// 004d6b91  8b15acd8b700         mov edx, dword ptr [0xb7d8ac]
// 004d6b97  3bc2                 cmp eax, edx
// 004d6b99  7d03                 jge 0x4d6b9e
// 004d6b9b  895108               mov dword ptr [ecx + 8], edx
// 004d6b9e  55                   push ebp
// 004d6b9f  e86c0bffff           call 0x4c7710
// 004d6ba4  5f                   pop edi
// 004d6ba5  5e                   pop esi
// 004d6ba6  5d                   pop ebp
// 004d6ba7  c20800               ret 8
// 004d6baa  b856555555           mov eax, 0x55555556
// 004d6baf  f7ea                 imul edx
// 004d6bb1  8bc2                 mov eax, edx
// 004d6bb3  c1e81f               shr eax, 0x1f
// 004d6bb6  03c2                 add eax, edx
// 004d6bb8  3bf0                 cmp esi, eax
// 004d6bba  7f17                 jg 0x4d6bd3
// 004d6bbc  807c241400           cmp byte ptr [esp + 0x14], 0
// 004d6bc1  7410                 je 0x4d6bd3
// 004d6bc3  3bf7                 cmp esi, edi
// 004d6bc5  7e0c                 jle 0x4d6bd3
// 004d6bc7  3bf5                 cmp esi, ebp
// 004d6bc9  7c02                 jl 0x4d6bcd
// 004d6bcb  8bf5                 mov esi, ebp
// 004d6bcd  56                   push esi
// 004d6bce  e83d0bffff           call 0x4c7710
// 004d6bd3  5f                   pop edi
// 004d6bd4  5e                   pop esi
// 004d6bd5  5d                   pop ebp
// 004d6bd6  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
