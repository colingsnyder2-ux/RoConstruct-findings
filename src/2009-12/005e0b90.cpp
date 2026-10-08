// roc 2009-12 005e0b90  unit: RBX::RbxG3D::RenderScene  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e0b90
//
// 005e0b90  8b442404             mov eax, dword ptr [esp + 4]
// 005e0b94  55                   push ebp
// 005e0b95  8b6904               mov ebp, dword ptr [ecx + 4]
// 005e0b98  ba01000000           mov edx, 1
// 005e0b9d  56                   push esi
// 005e0b9e  894104               mov dword ptr [ecx + 4], eax
// 005e0ba1  57                   push edi
// 005e0ba2  84155430b800         test byte ptr [0xb83054], dl
// 005e0ba8  7513                 jne 0x5e0bbd
// 005e0baa  09155430b800         or dword ptr [0xb83054], edx
// 005e0bb0  bf0a000000           mov edi, 0xa
// 005e0bb5  893d5030b800         mov dword ptr [0xb83050], edi
// 005e0bbb  eb06                 jmp 0x5e0bc3
// 005e0bbd  8b3d5030b800         mov edi, dword ptr [0xb83050]
// 005e0bc3  8b5108               mov edx, dword ptr [ecx + 8]
// 005e0bc6  8b7104               mov esi, dword ptr [ecx + 4]
// 005e0bc9  3bf2                 cmp esi, edx
// 005e0bcb  0f8e83000000         jle 0x5e0c54
// 005e0bd1  85d2                 test edx, edx
// 005e0bd3  750f                 jne 0x5e0be4
// 005e0bd5  55                   push ebp
// 005e0bd6  894108               mov dword ptr [ecx + 8], eax
// 005e0bd9  e872540b00           call 0x696050
// 005e0bde  5f                   pop edi
// 005e0bdf  5e                   pop esi
// 005e0be0  5d                   pop ebp
// 005e0be1  c20800               ret 8
// 005e0be4  3bf7                 cmp esi, edi
// 005e0be6  7d0f                 jge 0x5e0bf7
// 005e0be8  55                   push ebp
// 005e0be9  897908               mov dword ptr [ecx + 8], edi
// 005e0bec  e85f540b00           call 0x696050
// 005e0bf1  5f                   pop edi
// 005e0bf2  5e                   pop esi
// 005e0bf3  5d                   pop ebp
// 005e0bf4  c20800               ret 8
// 005e0bf7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 005e0bff  8bc2                 mov eax, edx
// 005e0c01  03c0                 add eax, eax
// 005e0c03  03c0                 add eax, eax
// 005e0c05  3d801a0600           cmp eax, 0x61a80
// 005e0c0a  760a                 jbe 0x5e0c16
// 005e0c0c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 005e0c14  eb0f                 jmp 0x5e0c25
// 005e0c16  3d00fa0000           cmp eax, 0xfa00
// 005e0c1b  7608                 jbe 0x5e0c25
// 005e0c1d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 005e0c25  8bc2                 mov eax, edx
// 005e0c27  f30f2ac8             cvtsi2ss xmm1, eax
// 005e0c2b  f30f59c8             mulss xmm1, xmm0
// 005e0c2f  f30f2cd1             cvttss2si edx, xmm1
// 005e0c33  2bd0                 sub edx, eax
// 005e0c35  8d0432               lea eax, [edx + esi]
// 005e0c38  894108               mov dword ptr [ecx + 8], eax
// 005e0c3b  8b155030b800         mov edx, dword ptr [0xb83050]
// 005e0c41  3bc2                 cmp eax, edx
// 005e0c43  7d03                 jge 0x5e0c48
// 005e0c45  895108               mov dword ptr [ecx + 8], edx
// 005e0c48  55                   push ebp
// 005e0c49  e802540b00           call 0x696050
// 005e0c4e  5f                   pop edi
// 005e0c4f  5e                   pop esi
// 005e0c50  5d                   pop ebp
// 005e0c51  c20800               ret 8
// 005e0c54  b856555555           mov eax, 0x55555556
// 005e0c59  f7ea                 imul edx
// 005e0c5b  8bc2                 mov eax, edx
// 005e0c5d  c1e81f               shr eax, 0x1f
// 005e0c60  03c2                 add eax, edx
// 005e0c62  3bf0                 cmp esi, eax
// 005e0c64  7f17                 jg 0x5e0c7d
// 005e0c66  807c241400           cmp byte ptr [esp + 0x14], 0
// 005e0c6b  7410                 je 0x5e0c7d
// 005e0c6d  3bf7                 cmp esi, edi
// 005e0c6f  7e0c                 jle 0x5e0c7d
// 005e0c71  3bf5                 cmp esi, ebp
// 005e0c73  7c02                 jl 0x5e0c77
// 005e0c75  8bf5                 mov esi, ebp
// 005e0c77  56                   push esi
// 005e0c78  e8d3530b00           call 0x696050
// 005e0c7d  5f                   pop edi
// 005e0c7e  5e                   pop esi
// 005e0c7f  5d                   pop ebp
// 005e0c80  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
