// roc 2009-12 00696af0  unit: RBX::Workspace  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00696af0
//
// 00696af0  8b442404             mov eax, dword ptr [esp + 4]
// 00696af4  55                   push ebp
// 00696af5  8b6904               mov ebp, dword ptr [ecx + 4]
// 00696af8  ba01000000           mov edx, 1
// 00696afd  56                   push esi
// 00696afe  894104               mov dword ptr [ecx + 4], eax
// 00696b01  57                   push edi
// 00696b02  84154816b900         test byte ptr [0xb91648], dl
// 00696b08  7513                 jne 0x696b1d
// 00696b0a  09154816b900         or dword ptr [0xb91648], edx
// 00696b10  bf0a000000           mov edi, 0xa
// 00696b15  893d4416b900         mov dword ptr [0xb91644], edi
// 00696b1b  eb06                 jmp 0x696b23
// 00696b1d  8b3d4416b900         mov edi, dword ptr [0xb91644]
// 00696b23  8b5108               mov edx, dword ptr [ecx + 8]
// 00696b26  8b7104               mov esi, dword ptr [ecx + 4]
// 00696b29  3bf2                 cmp esi, edx
// 00696b2b  0f8e83000000         jle 0x696bb4
// 00696b31  85d2                 test edx, edx
// 00696b33  750f                 jne 0x696b44
// 00696b35  55                   push ebp
// 00696b36  894108               mov dword ptr [ecx + 8], eax
// 00696b39  e812f5ffff           call 0x696050
// 00696b3e  5f                   pop edi
// 00696b3f  5e                   pop esi
// 00696b40  5d                   pop ebp
// 00696b41  c20800               ret 8
// 00696b44  3bf7                 cmp esi, edi
// 00696b46  7d0f                 jge 0x696b57
// 00696b48  55                   push ebp
// 00696b49  897908               mov dword ptr [ecx + 8], edi
// 00696b4c  e8fff4ffff           call 0x696050
// 00696b51  5f                   pop edi
// 00696b52  5e                   pop esi
// 00696b53  5d                   pop ebp
// 00696b54  c20800               ret 8
// 00696b57  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 00696b5f  8bc2                 mov eax, edx
// 00696b61  03c0                 add eax, eax
// 00696b63  03c0                 add eax, eax
// 00696b65  3d801a0600           cmp eax, 0x61a80
// 00696b6a  760a                 jbe 0x696b76
// 00696b6c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00696b74  eb0f                 jmp 0x696b85
// 00696b76  3d00fa0000           cmp eax, 0xfa00
// 00696b7b  7608                 jbe 0x696b85
// 00696b7d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00696b85  8bc2                 mov eax, edx
// 00696b87  f30f2ac8             cvtsi2ss xmm1, eax
// 00696b8b  f30f59c8             mulss xmm1, xmm0
// 00696b8f  f30f2cd1             cvttss2si edx, xmm1
// 00696b93  2bd0                 sub edx, eax
// 00696b95  8d0432               lea eax, [edx + esi]
// 00696b98  894108               mov dword ptr [ecx + 8], eax
// 00696b9b  8b154416b900         mov edx, dword ptr [0xb91644]
// 00696ba1  3bc2                 cmp eax, edx
// 00696ba3  7d03                 jge 0x696ba8
// 00696ba5  895108               mov dword ptr [ecx + 8], edx
// 00696ba8  55                   push ebp
// 00696ba9  e8a2f4ffff           call 0x696050
// 00696bae  5f                   pop edi
// 00696baf  5e                   pop esi
// 00696bb0  5d                   pop ebp
// 00696bb1  c20800               ret 8
// 00696bb4  b856555555           mov eax, 0x55555556
// 00696bb9  f7ea                 imul edx
// 00696bbb  8bc2                 mov eax, edx
// 00696bbd  c1e81f               shr eax, 0x1f
// 00696bc0  03c2                 add eax, edx
// 00696bc2  3bf0                 cmp esi, eax
// 00696bc4  7f17                 jg 0x696bdd
// 00696bc6  807c241400           cmp byte ptr [esp + 0x14], 0
// 00696bcb  7410                 je 0x696bdd
// 00696bcd  3bf7                 cmp esi, edi
// 00696bcf  7e0c                 jle 0x696bdd
// 00696bd1  3bf5                 cmp esi, ebp
// 00696bd3  7c02                 jl 0x696bd7
// 00696bd5  8bf5                 mov esi, ebp
// 00696bd7  56                   push esi
// 00696bd8  e873f4ffff           call 0x696050
// 00696bdd  5f                   pop edi
// 00696bde  5e                   pop esi
// 00696bdf  5d                   pop ebp
// 00696be0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
