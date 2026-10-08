// roc 2009-12 00696bf0  unit: RBX::Workspace  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00696bf0
//
// 00696bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00696bf4  55                   push ebp
// 00696bf5  8b6904               mov ebp, dword ptr [ecx + 4]
// 00696bf8  ba01000000           mov edx, 1
// 00696bfd  56                   push esi
// 00696bfe  894104               mov dword ptr [ecx + 4], eax
// 00696c01  57                   push edi
// 00696c02  84155016b900         test byte ptr [0xb91650], dl
// 00696c08  7513                 jne 0x696c1d
// 00696c0a  09155016b900         or dword ptr [0xb91650], edx
// 00696c10  bf0a000000           mov edi, 0xa
// 00696c15  893d4c16b900         mov dword ptr [0xb9164c], edi
// 00696c1b  eb06                 jmp 0x696c23
// 00696c1d  8b3d4c16b900         mov edi, dword ptr [0xb9164c]
// 00696c23  8b5108               mov edx, dword ptr [ecx + 8]
// 00696c26  8b7104               mov esi, dword ptr [ecx + 4]
// 00696c29  3bf2                 cmp esi, edx
// 00696c2b  0f8e83000000         jle 0x696cb4
// 00696c31  85d2                 test edx, edx
// 00696c33  750f                 jne 0x696c44
// 00696c35  55                   push ebp
// 00696c36  894108               mov dword ptr [ecx + 8], eax
// 00696c39  e812f4ffff           call 0x696050
// 00696c3e  5f                   pop edi
// 00696c3f  5e                   pop esi
// 00696c40  5d                   pop ebp
// 00696c41  c20800               ret 8
// 00696c44  3bf7                 cmp esi, edi
// 00696c46  7d0f                 jge 0x696c57
// 00696c48  55                   push ebp
// 00696c49  897908               mov dword ptr [ecx + 8], edi
// 00696c4c  e8fff3ffff           call 0x696050
// 00696c51  5f                   pop edi
// 00696c52  5e                   pop esi
// 00696c53  5d                   pop ebp
// 00696c54  c20800               ret 8
// 00696c57  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 00696c5f  8bc2                 mov eax, edx
// 00696c61  03c0                 add eax, eax
// 00696c63  03c0                 add eax, eax
// 00696c65  3d801a0600           cmp eax, 0x61a80
// 00696c6a  760a                 jbe 0x696c76
// 00696c6c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00696c74  eb0f                 jmp 0x696c85
// 00696c76  3d00fa0000           cmp eax, 0xfa00
// 00696c7b  7608                 jbe 0x696c85
// 00696c7d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00696c85  8bc2                 mov eax, edx
// 00696c87  f30f2ac8             cvtsi2ss xmm1, eax
// 00696c8b  f30f59c8             mulss xmm1, xmm0
// 00696c8f  f30f2cd1             cvttss2si edx, xmm1
// 00696c93  2bd0                 sub edx, eax
// 00696c95  8d0432               lea eax, [edx + esi]
// 00696c98  894108               mov dword ptr [ecx + 8], eax
// 00696c9b  8b154c16b900         mov edx, dword ptr [0xb9164c]
// 00696ca1  3bc2                 cmp eax, edx
// 00696ca3  7d03                 jge 0x696ca8
// 00696ca5  895108               mov dword ptr [ecx + 8], edx
// 00696ca8  55                   push ebp
// 00696ca9  e8a2f3ffff           call 0x696050
// 00696cae  5f                   pop edi
// 00696caf  5e                   pop esi
// 00696cb0  5d                   pop ebp
// 00696cb1  c20800               ret 8
// 00696cb4  b856555555           mov eax, 0x55555556
// 00696cb9  f7ea                 imul edx
// 00696cbb  8bc2                 mov eax, edx
// 00696cbd  c1e81f               shr eax, 0x1f
// 00696cc0  03c2                 add eax, edx
// 00696cc2  3bf0                 cmp esi, eax
// 00696cc4  7f17                 jg 0x696cdd
// 00696cc6  807c241400           cmp byte ptr [esp + 0x14], 0
// 00696ccb  7410                 je 0x696cdd
// 00696ccd  3bf7                 cmp esi, edi
// 00696ccf  7e0c                 jle 0x696cdd
// 00696cd1  3bf5                 cmp esi, ebp
// 00696cd3  7c02                 jl 0x696cd7
// 00696cd5  8bf5                 mov esi, ebp
// 00696cd7  56                   push esi
// 00696cd8  e873f3ffff           call 0x696050
// 00696cdd  5f                   pop edi
// 00696cde  5e                   pop esi
// 00696cdf  5d                   pop ebp
// 00696ce0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
