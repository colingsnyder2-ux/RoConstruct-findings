// roc 2009-12 007b7190  unit: RBX::CleanStage  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007b7190
//
// 007b7190  8b442404             mov eax, dword ptr [esp + 4]
// 007b7194  55                   push ebp
// 007b7195  8b6904               mov ebp, dword ptr [ecx + 4]
// 007b7198  ba01000000           mov edx, 1
// 007b719d  56                   push esi
// 007b719e  894104               mov dword ptr [ecx + 4], eax
// 007b71a1  57                   push edi
// 007b71a2  84153c8cb900         test byte ptr [0xb98c3c], dl
// 007b71a8  7513                 jne 0x7b71bd
// 007b71aa  09153c8cb900         or dword ptr [0xb98c3c], edx
// 007b71b0  bf0a000000           mov edi, 0xa
// 007b71b5  893d388cb900         mov dword ptr [0xb98c38], edi
// 007b71bb  eb06                 jmp 0x7b71c3
// 007b71bd  8b3d388cb900         mov edi, dword ptr [0xb98c38]
// 007b71c3  8b5108               mov edx, dword ptr [ecx + 8]
// 007b71c6  8b7104               mov esi, dword ptr [ecx + 4]
// 007b71c9  3bf2                 cmp esi, edx
// 007b71cb  0f8e83000000         jle 0x7b7254
// 007b71d1  85d2                 test edx, edx
// 007b71d3  750f                 jne 0x7b71e4
// 007b71d5  55                   push ebp
// 007b71d6  894108               mov dword ptr [ecx + 8], eax
// 007b71d9  e872eeedff           call 0x696050
// 007b71de  5f                   pop edi
// 007b71df  5e                   pop esi
// 007b71e0  5d                   pop ebp
// 007b71e1  c20800               ret 8
// 007b71e4  3bf7                 cmp esi, edi
// 007b71e6  7d0f                 jge 0x7b71f7
// 007b71e8  55                   push ebp
// 007b71e9  897908               mov dword ptr [ecx + 8], edi
// 007b71ec  e85feeedff           call 0x696050
// 007b71f1  5f                   pop edi
// 007b71f2  5e                   pop esi
// 007b71f3  5d                   pop ebp
// 007b71f4  c20800               ret 8
// 007b71f7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 007b71ff  8bc2                 mov eax, edx
// 007b7201  03c0                 add eax, eax
// 007b7203  03c0                 add eax, eax
// 007b7205  3d801a0600           cmp eax, 0x61a80
// 007b720a  760a                 jbe 0x7b7216
// 007b720c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 007b7214  eb0f                 jmp 0x7b7225
// 007b7216  3d00fa0000           cmp eax, 0xfa00
// 007b721b  7608                 jbe 0x7b7225
// 007b721d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 007b7225  8bc2                 mov eax, edx
// 007b7227  f30f2ac8             cvtsi2ss xmm1, eax
// 007b722b  f30f59c8             mulss xmm1, xmm0
// 007b722f  f30f2cd1             cvttss2si edx, xmm1
// 007b7233  2bd0                 sub edx, eax
// 007b7235  8d0432               lea eax, [edx + esi]
// 007b7238  894108               mov dword ptr [ecx + 8], eax
// 007b723b  8b15388cb900         mov edx, dword ptr [0xb98c38]
// 007b7241  3bc2                 cmp eax, edx
// 007b7243  7d03                 jge 0x7b7248
// 007b7245  895108               mov dword ptr [ecx + 8], edx
// 007b7248  55                   push ebp
// 007b7249  e802eeedff           call 0x696050
// 007b724e  5f                   pop edi
// 007b724f  5e                   pop esi
// 007b7250  5d                   pop ebp
// 007b7251  c20800               ret 8
// 007b7254  b856555555           mov eax, 0x55555556
// 007b7259  f7ea                 imul edx
// 007b725b  8bc2                 mov eax, edx
// 007b725d  c1e81f               shr eax, 0x1f
// 007b7260  03c2                 add eax, edx
// 007b7262  3bf0                 cmp esi, eax
// 007b7264  7f17                 jg 0x7b727d
// 007b7266  807c241400           cmp byte ptr [esp + 0x14], 0
// 007b726b  7410                 je 0x7b727d
// 007b726d  3bf7                 cmp esi, edi
// 007b726f  7e0c                 jle 0x7b727d
// 007b7271  3bf5                 cmp esi, ebp
// 007b7273  7c02                 jl 0x7b7277
// 007b7275  8bf5                 mov esi, ebp
// 007b7277  56                   push esi
// 007b7278  e8d3ededff           call 0x696050
// 007b727d  5f                   pop edi
// 007b727e  5e                   pop esi
// 007b727f  5d                   pop ebp
// 007b7280  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
