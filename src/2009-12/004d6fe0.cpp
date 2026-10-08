// roc 2009-12 004d6fe0  unit: G3D::Win32Window  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d6fe0
//
// 004d6fe0  8b442404             mov eax, dword ptr [esp + 4]
// 004d6fe4  55                   push ebp
// 004d6fe5  8b6904               mov ebp, dword ptr [ecx + 4]
// 004d6fe8  ba01000000           mov edx, 1
// 004d6fed  56                   push esi
// 004d6fee  894104               mov dword ptr [ecx + 4], eax
// 004d6ff1  57                   push edi
// 004d6ff2  8415ccd8b700         test byte ptr [0xb7d8cc], dl
// 004d6ff8  7513                 jne 0x4d700d
// 004d6ffa  0915ccd8b700         or dword ptr [0xb7d8cc], edx
// 004d7000  bf0a000000           mov edi, 0xa
// 004d7005  893dc8d8b700         mov dword ptr [0xb7d8c8], edi
// 004d700b  eb06                 jmp 0x4d7013
// 004d700d  8b3dc8d8b700         mov edi, dword ptr [0xb7d8c8]
// 004d7013  8b5108               mov edx, dword ptr [ecx + 8]
// 004d7016  8b7104               mov esi, dword ptr [ecx + 4]
// 004d7019  3bf2                 cmp esi, edx
// 004d701b  0f8e83000000         jle 0x4d70a4
// 004d7021  85d2                 test edx, edx
// 004d7023  750f                 jne 0x4d7034
// 004d7025  55                   push ebp
// 004d7026  894108               mov dword ptr [ecx + 8], eax
// 004d7029  e822f01b00           call 0x696050
// 004d702e  5f                   pop edi
// 004d702f  5e                   pop esi
// 004d7030  5d                   pop ebp
// 004d7031  c20800               ret 8
// 004d7034  3bf7                 cmp esi, edi
// 004d7036  7d0f                 jge 0x4d7047
// 004d7038  55                   push ebp
// 004d7039  897908               mov dword ptr [ecx + 8], edi
// 004d703c  e80ff01b00           call 0x696050
// 004d7041  5f                   pop edi
// 004d7042  5e                   pop esi
// 004d7043  5d                   pop ebp
// 004d7044  c20800               ret 8
// 004d7047  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004d704f  8bc2                 mov eax, edx
// 004d7051  03c0                 add eax, eax
// 004d7053  03c0                 add eax, eax
// 004d7055  3d801a0600           cmp eax, 0x61a80
// 004d705a  760a                 jbe 0x4d7066
// 004d705c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004d7064  eb0f                 jmp 0x4d7075
// 004d7066  3d00fa0000           cmp eax, 0xfa00
// 004d706b  7608                 jbe 0x4d7075
// 004d706d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004d7075  8bc2                 mov eax, edx
// 004d7077  f30f2ac8             cvtsi2ss xmm1, eax
// 004d707b  f30f59c8             mulss xmm1, xmm0
// 004d707f  f30f2cd1             cvttss2si edx, xmm1
// 004d7083  2bd0                 sub edx, eax
// 004d7085  8d0432               lea eax, [edx + esi]
// 004d7088  894108               mov dword ptr [ecx + 8], eax
// 004d708b  8b15c8d8b700         mov edx, dword ptr [0xb7d8c8]
// 004d7091  3bc2                 cmp eax, edx
// 004d7093  7d03                 jge 0x4d7098
// 004d7095  895108               mov dword ptr [ecx + 8], edx
// 004d7098  55                   push ebp
// 004d7099  e8b2ef1b00           call 0x696050
// 004d709e  5f                   pop edi
// 004d709f  5e                   pop esi
// 004d70a0  5d                   pop ebp
// 004d70a1  c20800               ret 8
// 004d70a4  b856555555           mov eax, 0x55555556
// 004d70a9  f7ea                 imul edx
// 004d70ab  8bc2                 mov eax, edx
// 004d70ad  c1e81f               shr eax, 0x1f
// 004d70b0  03c2                 add eax, edx
// 004d70b2  3bf0                 cmp esi, eax
// 004d70b4  7f17                 jg 0x4d70cd
// 004d70b6  807c241400           cmp byte ptr [esp + 0x14], 0
// 004d70bb  7410                 je 0x4d70cd
// 004d70bd  3bf7                 cmp esi, edi
// 004d70bf  7e0c                 jle 0x4d70cd
// 004d70c1  3bf5                 cmp esi, ebp
// 004d70c3  7c02                 jl 0x4d70c7
// 004d70c5  8bf5                 mov esi, ebp
// 004d70c7  56                   push esi
// 004d70c8  e883ef1b00           call 0x696050
// 004d70cd  5f                   pop edi
// 004d70ce  5e                   pop esi
// 004d70cf  5d                   pop ebp
// 004d70d0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
