// roc 2009-12 004d6940  unit: G3D::Win32Window  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6940
//
// 004d6940  8b442404             mov eax, dword ptr [esp + 4]
// 004d6944  55                   push ebp
// 004d6945  8b6904               mov ebp, dword ptr [ecx + 4]
// 004d6948  ba01000000           mov edx, 1
// 004d694d  56                   push esi
// 004d694e  894104               mov dword ptr [ecx + 4], eax
// 004d6951  57                   push edi
// 004d6952  8415a8d8b700         test byte ptr [0xb7d8a8], dl
// 004d6958  7513                 jne 0x4d696d
// 004d695a  0915a8d8b700         or dword ptr [0xb7d8a8], edx
// 004d6960  bf0a000000           mov edi, 0xa
// 004d6965  893da4d8b700         mov dword ptr [0xb7d8a4], edi
// 004d696b  eb06                 jmp 0x4d6973
// 004d696d  8b3da4d8b700         mov edi, dword ptr [0xb7d8a4]
// 004d6973  8b5108               mov edx, dword ptr [ecx + 8]
// 004d6976  8b7104               mov esi, dword ptr [ecx + 4]
// 004d6979  3bf2                 cmp esi, edx
// 004d697b  0f8e83000000         jle 0x4d6a04
// 004d6981  85d2                 test edx, edx
// 004d6983  750f                 jne 0x4d6994
// 004d6985  55                   push ebp
// 004d6986  894108               mov dword ptr [ecx + 8], eax
// 004d6989  e872f9ffff           call 0x4d6300
// 004d698e  5f                   pop edi
// 004d698f  5e                   pop esi
// 004d6990  5d                   pop ebp
// 004d6991  c20800               ret 8
// 004d6994  3bf7                 cmp esi, edi
// 004d6996  7d0f                 jge 0x4d69a7
// 004d6998  55                   push ebp
// 004d6999  897908               mov dword ptr [ecx + 8], edi
// 004d699c  e85ff9ffff           call 0x4d6300
// 004d69a1  5f                   pop edi
// 004d69a2  5e                   pop esi
// 004d69a3  5d                   pop ebp
// 004d69a4  c20800               ret 8
// 004d69a7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004d69af  8bc2                 mov eax, edx
// 004d69b1  03c0                 add eax, eax
// 004d69b3  03c0                 add eax, eax
// 004d69b5  3d801a0600           cmp eax, 0x61a80
// 004d69ba  760a                 jbe 0x4d69c6
// 004d69bc  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004d69c4  eb0f                 jmp 0x4d69d5
// 004d69c6  3d00fa0000           cmp eax, 0xfa00
// 004d69cb  7608                 jbe 0x4d69d5
// 004d69cd  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004d69d5  8bc2                 mov eax, edx
// 004d69d7  f30f2ac8             cvtsi2ss xmm1, eax
// 004d69db  f30f59c8             mulss xmm1, xmm0
// 004d69df  f30f2cd1             cvttss2si edx, xmm1
// 004d69e3  2bd0                 sub edx, eax
// 004d69e5  8d0432               lea eax, [edx + esi]
// 004d69e8  894108               mov dword ptr [ecx + 8], eax
// 004d69eb  8b15a4d8b700         mov edx, dword ptr [0xb7d8a4]
// 004d69f1  3bc2                 cmp eax, edx
// 004d69f3  7d03                 jge 0x4d69f8
// 004d69f5  895108               mov dword ptr [ecx + 8], edx
// 004d69f8  55                   push ebp
// 004d69f9  e802f9ffff           call 0x4d6300
// 004d69fe  5f                   pop edi
// 004d69ff  5e                   pop esi
// 004d6a00  5d                   pop ebp
// 004d6a01  c20800               ret 8
// 004d6a04  b856555555           mov eax, 0x55555556
// 004d6a09  f7ea                 imul edx
// 004d6a0b  8bc2                 mov eax, edx
// 004d6a0d  c1e81f               shr eax, 0x1f
// 004d6a10  03c2                 add eax, edx
// 004d6a12  3bf0                 cmp esi, eax
// 004d6a14  7f17                 jg 0x4d6a2d
// 004d6a16  807c241400           cmp byte ptr [esp + 0x14], 0
// 004d6a1b  7410                 je 0x4d6a2d
// 004d6a1d  3bf7                 cmp esi, edi
// 004d6a1f  7e0c                 jle 0x4d6a2d
// 004d6a21  3bf5                 cmp esi, ebp
// 004d6a23  7c02                 jl 0x4d6a27
// 004d6a25  8bf5                 mov esi, ebp
// 004d6a27  56                   push esi
// 004d6a28  e8d3f8ffff           call 0x4d6300
// 004d6a2d  5f                   pop edi
// 004d6a2e  5e                   pop esi
// 004d6a2f  5d                   pop ebp
// 004d6a30  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
