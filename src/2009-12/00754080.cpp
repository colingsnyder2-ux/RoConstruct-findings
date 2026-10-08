// roc 2009-12 00754080  unit: RBX::VBasicPartInstance::?$SeatImpl  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00754080
//
// 00754080  8b442404             mov eax, dword ptr [esp + 4]
// 00754084  55                   push ebp
// 00754085  8b6904               mov ebp, dword ptr [ecx + 4]
// 00754088  ba01000000           mov edx, 1
// 0075408d  56                   push esi
// 0075408e  894104               mov dword ptr [ecx + 4], eax
// 00754091  57                   push edi
// 00754092  84155873b900         test byte ptr [0xb97358], dl
// 00754098  7513                 jne 0x7540ad
// 0075409a  09155873b900         or dword ptr [0xb97358], edx
// 007540a0  bf0a000000           mov edi, 0xa
// 007540a5  893d5473b900         mov dword ptr [0xb97354], edi
// 007540ab  eb06                 jmp 0x7540b3
// 007540ad  8b3d5473b900         mov edi, dword ptr [0xb97354]
// 007540b3  8b5108               mov edx, dword ptr [ecx + 8]
// 007540b6  8b7104               mov esi, dword ptr [ecx + 4]
// 007540b9  3bf2                 cmp esi, edx
// 007540bb  0f8e83000000         jle 0x754144
// 007540c1  85d2                 test edx, edx
// 007540c3  750f                 jne 0x7540d4
// 007540c5  55                   push ebp
// 007540c6  894108               mov dword ptr [ecx + 8], eax
// 007540c9  e8821ff4ff           call 0x696050
// 007540ce  5f                   pop edi
// 007540cf  5e                   pop esi
// 007540d0  5d                   pop ebp
// 007540d1  c20800               ret 8
// 007540d4  3bf7                 cmp esi, edi
// 007540d6  7d0f                 jge 0x7540e7
// 007540d8  55                   push ebp
// 007540d9  897908               mov dword ptr [ecx + 8], edi
// 007540dc  e86f1ff4ff           call 0x696050
// 007540e1  5f                   pop edi
// 007540e2  5e                   pop esi
// 007540e3  5d                   pop ebp
// 007540e4  c20800               ret 8
// 007540e7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 007540ef  8bc2                 mov eax, edx
// 007540f1  03c0                 add eax, eax
// 007540f3  03c0                 add eax, eax
// 007540f5  3d801a0600           cmp eax, 0x61a80
// 007540fa  760a                 jbe 0x754106
// 007540fc  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 00754104  eb0f                 jmp 0x754115
// 00754106  3d00fa0000           cmp eax, 0xfa00
// 0075410b  7608                 jbe 0x754115
// 0075410d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 00754115  8bc2                 mov eax, edx
// 00754117  f30f2ac8             cvtsi2ss xmm1, eax
// 0075411b  f30f59c8             mulss xmm1, xmm0
// 0075411f  f30f2cd1             cvttss2si edx, xmm1
// 00754123  2bd0                 sub edx, eax
// 00754125  8d0432               lea eax, [edx + esi]
// 00754128  894108               mov dword ptr [ecx + 8], eax
// 0075412b  8b155473b900         mov edx, dword ptr [0xb97354]
// 00754131  3bc2                 cmp eax, edx
// 00754133  7d03                 jge 0x754138
// 00754135  895108               mov dword ptr [ecx + 8], edx
// 00754138  55                   push ebp
// 00754139  e8121ff4ff           call 0x696050
// 0075413e  5f                   pop edi
// 0075413f  5e                   pop esi
// 00754140  5d                   pop ebp
// 00754141  c20800               ret 8
// 00754144  b856555555           mov eax, 0x55555556
// 00754149  f7ea                 imul edx
// 0075414b  8bc2                 mov eax, edx
// 0075414d  c1e81f               shr eax, 0x1f
// 00754150  03c2                 add eax, edx
// 00754152  3bf0                 cmp esi, eax
// 00754154  7f17                 jg 0x75416d
// 00754156  807c241400           cmp byte ptr [esp + 0x14], 0
// 0075415b  7410                 je 0x75416d
// 0075415d  3bf7                 cmp esi, edi
// 0075415f  7e0c                 jle 0x75416d
// 00754161  3bf5                 cmp esi, ebp
// 00754163  7c02                 jl 0x754167
// 00754165  8bf5                 mov esi, ebp
// 00754167  56                   push esi
// 00754168  e8e31ef4ff           call 0x696050
// 0075416d  5f                   pop edi
// 0075416e  5e                   pop esi
// 0075416f  5d                   pop ebp
// 00754170  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
