// roc 2009-12 007da200  unit: RBX::SpatialFilter  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007da200
//
// 007da200  8b442404             mov eax, dword ptr [esp + 4]
// 007da204  55                   push ebp
// 007da205  8b6904               mov ebp, dword ptr [ecx + 4]
// 007da208  ba01000000           mov edx, 1
// 007da20d  56                   push esi
// 007da20e  894104               mov dword ptr [ecx + 4], eax
// 007da211  57                   push edi
// 007da212  8415c08fb900         test byte ptr [0xb98fc0], dl
// 007da218  7513                 jne 0x7da22d
// 007da21a  0915c08fb900         or dword ptr [0xb98fc0], edx
// 007da220  bf0a000000           mov edi, 0xa
// 007da225  893dbc8fb900         mov dword ptr [0xb98fbc], edi
// 007da22b  eb06                 jmp 0x7da233
// 007da22d  8b3dbc8fb900         mov edi, dword ptr [0xb98fbc]
// 007da233  8b5108               mov edx, dword ptr [ecx + 8]
// 007da236  8b7104               mov esi, dword ptr [ecx + 4]
// 007da239  3bf2                 cmp esi, edx
// 007da23b  0f8e83000000         jle 0x7da2c4
// 007da241  85d2                 test edx, edx
// 007da243  750f                 jne 0x7da254
// 007da245  55                   push ebp
// 007da246  894108               mov dword ptr [ecx + 8], eax
// 007da249  e802beebff           call 0x696050
// 007da24e  5f                   pop edi
// 007da24f  5e                   pop esi
// 007da250  5d                   pop ebp
// 007da251  c20800               ret 8
// 007da254  3bf7                 cmp esi, edi
// 007da256  7d0f                 jge 0x7da267
// 007da258  55                   push ebp
// 007da259  897908               mov dword ptr [ecx + 8], edi
// 007da25c  e8efbdebff           call 0x696050
// 007da261  5f                   pop edi
// 007da262  5e                   pop esi
// 007da263  5d                   pop ebp
// 007da264  c20800               ret 8
// 007da267  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 007da26f  8bc2                 mov eax, edx
// 007da271  03c0                 add eax, eax
// 007da273  03c0                 add eax, eax
// 007da275  3d801a0600           cmp eax, 0x61a80
// 007da27a  760a                 jbe 0x7da286
// 007da27c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 007da284  eb0f                 jmp 0x7da295
// 007da286  3d00fa0000           cmp eax, 0xfa00
// 007da28b  7608                 jbe 0x7da295
// 007da28d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 007da295  8bc2                 mov eax, edx
// 007da297  f30f2ac8             cvtsi2ss xmm1, eax
// 007da29b  f30f59c8             mulss xmm1, xmm0
// 007da29f  f30f2cd1             cvttss2si edx, xmm1
// 007da2a3  2bd0                 sub edx, eax
// 007da2a5  8d0432               lea eax, [edx + esi]
// 007da2a8  894108               mov dword ptr [ecx + 8], eax
// 007da2ab  8b15bc8fb900         mov edx, dword ptr [0xb98fbc]
// 007da2b1  3bc2                 cmp eax, edx
// 007da2b3  7d03                 jge 0x7da2b8
// 007da2b5  895108               mov dword ptr [ecx + 8], edx
// 007da2b8  55                   push ebp
// 007da2b9  e892bdebff           call 0x696050
// 007da2be  5f                   pop edi
// 007da2bf  5e                   pop esi
// 007da2c0  5d                   pop ebp
// 007da2c1  c20800               ret 8
// 007da2c4  b856555555           mov eax, 0x55555556
// 007da2c9  f7ea                 imul edx
// 007da2cb  8bc2                 mov eax, edx
// 007da2cd  c1e81f               shr eax, 0x1f
// 007da2d0  03c2                 add eax, edx
// 007da2d2  3bf0                 cmp esi, eax
// 007da2d4  7f17                 jg 0x7da2ed
// 007da2d6  807c241400           cmp byte ptr [esp + 0x14], 0
// 007da2db  7410                 je 0x7da2ed
// 007da2dd  3bf7                 cmp esi, edi
// 007da2df  7e0c                 jle 0x7da2ed
// 007da2e1  3bf5                 cmp esi, ebp
// 007da2e3  7c02                 jl 0x7da2e7
// 007da2e5  8bf5                 mov esi, ebp
// 007da2e7  56                   push esi
// 007da2e8  e863bdebff           call 0x696050
// 007da2ed  5f                   pop edi
// 007da2ee  5e                   pop esi
// 007da2ef  5d                   pop ebp
// 007da2f0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
