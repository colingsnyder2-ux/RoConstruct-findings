// from server: 100% by auto
// roc 2010-06 00488b30  unit: G3D::Win32Window  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00488b30
//
// 00488b30  8b442404             mov eax, dword ptr [esp + 4]
// 00488b34  55                   push ebp
// 00488b35  8b6904               mov ebp, dword ptr [ecx + 4]
// 00488b38  ba01000000           mov edx, 1
// 00488b3d  56                   push esi
// 00488b3e  894104               mov dword ptr [ecx + 4], eax
// 00488b41  57                   push edi
// 00488b42  84156038c000         test byte ptr [0xc03860], dl
// 00488b48  7513                 jne 0x488b5d
// 00488b4a  09156038c000         or dword ptr [0xc03860], edx
// 00488b50  bf20000000           mov edi, 0x20
// 00488b55  893d5c38c000         mov dword ptr [0xc0385c], edi
// 00488b5b  eb06                 jmp 0x488b63
// 00488b5d  8b3d5c38c000         mov edi, dword ptr [0xc0385c]
// 00488b63  8b5108               mov edx, dword ptr [ecx + 8]
// 00488b66  8b7104               mov esi, dword ptr [ecx + 4]
// 00488b69  3bf2                 cmp esi, edx
// 00488b6b  7e7d                 jle 0x488bea
// 00488b6d  85d2                 test edx, edx
// 00488b6f  750f                 jne 0x488b80
// 00488b71  55                   push ebp
// 00488b72  894108               mov dword ptr [ecx + 8], eax
// 00488b75  e866f7ffff           call 0x4882e0
// 00488b7a  5f                   pop edi
// 00488b7b  5e                   pop esi
// 00488b7c  5d                   pop ebp
// 00488b7d  c20800               ret 8
// 00488b80  3bf7                 cmp esi, edi
// 00488b82  7d0f                 jge 0x488b93
// 00488b84  55                   push ebp
// 00488b85  897908               mov dword ptr [ecx + 8], edi
// 00488b88  e853f7ffff           call 0x4882e0
// 00488b8d  5f                   pop edi
// 00488b8e  5e                   pop esi
// 00488b8f  5d                   pop ebp
// 00488b90  c20800               ret 8
// 00488b93  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00488b9b  8bc2                 mov eax, edx
// 00488b9d  3d801a0600           cmp eax, 0x61a80
// 00488ba2  760a                 jbe 0x488bae
// 00488ba4  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00488bac  eb0f                 jmp 0x488bbd
// 00488bae  3d00fa0000           cmp eax, 0xfa00
// 00488bb3  7608                 jbe 0x488bbd
// 00488bb5  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00488bbd  f30f2ac8             cvtsi2ss xmm1, eax
// 00488bc1  f30f59c8             mulss xmm1, xmm0
// 00488bc5  f30f2cd1             cvttss2si edx, xmm1
// 00488bc9  2bd0                 sub edx, eax
// 00488bcb  8d0432               lea eax, [edx + esi]
// 00488bce  894108               mov dword ptr [ecx + 8], eax
// 00488bd1  8b155c38c000         mov edx, dword ptr [0xc0385c]
// 00488bd7  3bc2                 cmp eax, edx
// 00488bd9  7d03                 jge 0x488bde
// 00488bdb  895108               mov dword ptr [ecx + 8], edx
// 00488bde  55                   push ebp
// 00488bdf  e8fcf6ffff           call 0x4882e0
// 00488be4  5f                   pop edi
// 00488be5  5e                   pop esi
// 00488be6  5d                   pop ebp
// 00488be7  c20800               ret 8
// 00488bea  b856555555           mov eax, 0x55555556
// 00488bef  f7ea                 imul edx
// 00488bf1  8bc2                 mov eax, edx
// 00488bf3  c1e81f               shr eax, 0x1f
// 00488bf6  03c2                 add eax, edx
// 00488bf8  3bf0                 cmp esi, eax
// 00488bfa  7f17                 jg 0x488c13
// 00488bfc  807c241400           cmp byte ptr [esp + 0x14], 0
// 00488c01  7410                 je 0x488c13
// 00488c03  3bf7                 cmp esi, edi
// 00488c05  7e0c                 jle 0x488c13
// 00488c07  3bf5                 cmp esi, ebp
// 00488c09  7c02                 jl 0x488c0d
// 00488c0b  8bf5                 mov esi, ebp
// 00488c0d  56                   push esi
// 00488c0e  e8cdf6ffff           call 0x4882e0
// 00488c13  5f                   pop edi
// 00488c14  5e                   pop esi
// 00488c15  5d                   pop ebp
// 00488c16  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@_N@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
