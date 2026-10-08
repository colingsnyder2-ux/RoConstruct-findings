// roc 2009-12 004c7cf0  unit: G3D::GImage::Error  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004c7cf0
//
// 004c7cf0  8b442404             mov eax, dword ptr [esp + 4]
// 004c7cf4  55                   push ebp
// 004c7cf5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004c7cf8  ba01000000           mov edx, 1
// 004c7cfd  56                   push esi
// 004c7cfe  894104               mov dword ptr [ecx + 4], eax
// 004c7d01  57                   push edi
// 004c7d02  841510d0b700         test byte ptr [0xb7d010], dl
// 004c7d08  7513                 jne 0x4c7d1d
// 004c7d0a  091510d0b700         or dword ptr [0xb7d010], edx
// 004c7d10  bf0a000000           mov edi, 0xa
// 004c7d15  893d0cd0b700         mov dword ptr [0xb7d00c], edi
// 004c7d1b  eb06                 jmp 0x4c7d23
// 004c7d1d  8b3d0cd0b700         mov edi, dword ptr [0xb7d00c]
// 004c7d23  8b5108               mov edx, dword ptr [ecx + 8]
// 004c7d26  8b7104               mov esi, dword ptr [ecx + 4]
// 004c7d29  3bf2                 cmp esi, edx
// 004c7d2b  0f8e83000000         jle 0x4c7db4
// 004c7d31  85d2                 test edx, edx
// 004c7d33  750f                 jne 0x4c7d44
// 004c7d35  55                   push ebp
// 004c7d36  894108               mov dword ptr [ecx + 8], eax
// 004c7d39  e812e31c00           call 0x696050
// 004c7d3e  5f                   pop edi
// 004c7d3f  5e                   pop esi
// 004c7d40  5d                   pop ebp
// 004c7d41  c20800               ret 8
// 004c7d44  3bf7                 cmp esi, edi
// 004c7d46  7d0f                 jge 0x4c7d57
// 004c7d48  55                   push ebp
// 004c7d49  897908               mov dword ptr [ecx + 8], edi
// 004c7d4c  e8ffe21c00           call 0x696050
// 004c7d51  5f                   pop edi
// 004c7d52  5e                   pop esi
// 004c7d53  5d                   pop ebp
// 004c7d54  c20800               ret 8
// 004c7d57  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004c7d5f  8bc2                 mov eax, edx
// 004c7d61  03c0                 add eax, eax
// 004c7d63  03c0                 add eax, eax
// 004c7d65  3d801a0600           cmp eax, 0x61a80
// 004c7d6a  760a                 jbe 0x4c7d76
// 004c7d6c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004c7d74  eb0f                 jmp 0x4c7d85
// 004c7d76  3d00fa0000           cmp eax, 0xfa00
// 004c7d7b  7608                 jbe 0x4c7d85
// 004c7d7d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004c7d85  8bc2                 mov eax, edx
// 004c7d87  f30f2ac8             cvtsi2ss xmm1, eax
// 004c7d8b  f30f59c8             mulss xmm1, xmm0
// 004c7d8f  f30f2cd1             cvttss2si edx, xmm1
// 004c7d93  2bd0                 sub edx, eax
// 004c7d95  8d0432               lea eax, [edx + esi]
// 004c7d98  894108               mov dword ptr [ecx + 8], eax
// 004c7d9b  8b150cd0b700         mov edx, dword ptr [0xb7d00c]
// 004c7da1  3bc2                 cmp eax, edx
// 004c7da3  7d03                 jge 0x4c7da8
// 004c7da5  895108               mov dword ptr [ecx + 8], edx
// 004c7da8  55                   push ebp
// 004c7da9  e8a2e21c00           call 0x696050
// 004c7dae  5f                   pop edi
// 004c7daf  5e                   pop esi
// 004c7db0  5d                   pop ebp
// 004c7db1  c20800               ret 8
// 004c7db4  b856555555           mov eax, 0x55555556
// 004c7db9  f7ea                 imul edx
// 004c7dbb  8bc2                 mov eax, edx
// 004c7dbd  c1e81f               shr eax, 0x1f
// 004c7dc0  03c2                 add eax, edx
// 004c7dc2  3bf0                 cmp esi, eax
// 004c7dc4  7f17                 jg 0x4c7ddd
// 004c7dc6  807c241400           cmp byte ptr [esp + 0x14], 0
// 004c7dcb  7410                 je 0x4c7ddd
// 004c7dcd  3bf7                 cmp esi, edi
// 004c7dcf  7e0c                 jle 0x4c7ddd
// 004c7dd1  3bf5                 cmp esi, ebp
// 004c7dd3  7c02                 jl 0x4c7dd7
// 004c7dd5  8bf5                 mov esi, ebp
// 004c7dd7  56                   push esi
// 004c7dd8  e873e21c00           call 0x696050
// 004c7ddd  5f                   pop edi
// 004c7dde  5e                   pop esi
// 004c7ddf  5d                   pop ebp
// 004c7de0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
