// roc 2009-12 006ed0c0  unit: RBX::Primitive  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006ed0c0
//
// 006ed0c0  8b442404             mov eax, dword ptr [esp + 4]
// 006ed0c4  55                   push ebp
// 006ed0c5  8b6904               mov ebp, dword ptr [ecx + 4]
// 006ed0c8  ba01000000           mov edx, 1
// 006ed0cd  56                   push esi
// 006ed0ce  894104               mov dword ptr [ecx + 4], eax
// 006ed0d1  57                   push edi
// 006ed0d2  8415e03fb900         test byte ptr [0xb93fe0], dl
// 006ed0d8  7513                 jne 0x6ed0ed
// 006ed0da  0915e03fb900         or dword ptr [0xb93fe0], edx
// 006ed0e0  bf0a000000           mov edi, 0xa
// 006ed0e5  893ddc3fb900         mov dword ptr [0xb93fdc], edi
// 006ed0eb  eb06                 jmp 0x6ed0f3
// 006ed0ed  8b3ddc3fb900         mov edi, dword ptr [0xb93fdc]
// 006ed0f3  8b5108               mov edx, dword ptr [ecx + 8]
// 006ed0f6  8b7104               mov esi, dword ptr [ecx + 4]
// 006ed0f9  3bf2                 cmp esi, edx
// 006ed0fb  0f8e83000000         jle 0x6ed184
// 006ed101  85d2                 test edx, edx
// 006ed103  750f                 jne 0x6ed114
// 006ed105  55                   push ebp
// 006ed106  894108               mov dword ptr [ecx + 8], eax
// 006ed109  e8428ffaff           call 0x696050
// 006ed10e  5f                   pop edi
// 006ed10f  5e                   pop esi
// 006ed110  5d                   pop ebp
// 006ed111  c20800               ret 8
// 006ed114  3bf7                 cmp esi, edi
// 006ed116  7d0f                 jge 0x6ed127
// 006ed118  55                   push ebp
// 006ed119  897908               mov dword ptr [ecx + 8], edi
// 006ed11c  e82f8ffaff           call 0x696050
// 006ed121  5f                   pop edi
// 006ed122  5e                   pop esi
// 006ed123  5d                   pop ebp
// 006ed124  c20800               ret 8
// 006ed127  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 006ed12f  8bc2                 mov eax, edx
// 006ed131  03c0                 add eax, eax
// 006ed133  03c0                 add eax, eax
// 006ed135  3d801a0600           cmp eax, 0x61a80
// 006ed13a  760a                 jbe 0x6ed146
// 006ed13c  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 006ed144  eb0f                 jmp 0x6ed155
// 006ed146  3d00fa0000           cmp eax, 0xfa00
// 006ed14b  7608                 jbe 0x6ed155
// 006ed14d  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 006ed155  8bc2                 mov eax, edx
// 006ed157  f30f2ac8             cvtsi2ss xmm1, eax
// 006ed15b  f30f59c8             mulss xmm1, xmm0
// 006ed15f  f30f2cd1             cvttss2si edx, xmm1
// 006ed163  2bd0                 sub edx, eax
// 006ed165  8d0432               lea eax, [edx + esi]
// 006ed168  894108               mov dword ptr [ecx + 8], eax
// 006ed16b  8b15dc3fb900         mov edx, dword ptr [0xb93fdc]
// 006ed171  3bc2                 cmp eax, edx
// 006ed173  7d03                 jge 0x6ed178
// 006ed175  895108               mov dword ptr [ecx + 8], edx
// 006ed178  55                   push ebp
// 006ed179  e8d28efaff           call 0x696050
// 006ed17e  5f                   pop edi
// 006ed17f  5e                   pop esi
// 006ed180  5d                   pop ebp
// 006ed181  c20800               ret 8
// 006ed184  b856555555           mov eax, 0x55555556
// 006ed189  f7ea                 imul edx
// 006ed18b  8bc2                 mov eax, edx
// 006ed18d  c1e81f               shr eax, 0x1f
// 006ed190  03c2                 add eax, edx
// 006ed192  3bf0                 cmp esi, eax
// 006ed194  7f17                 jg 0x6ed1ad
// 006ed196  807c241400           cmp byte ptr [esp + 0x14], 0
// 006ed19b  7410                 je 0x6ed1ad
// 006ed19d  3bf7                 cmp esi, edi
// 006ed19f  7e0c                 jle 0x6ed1ad
// 006ed1a1  3bf5                 cmp esi, ebp
// 006ed1a3  7c02                 jl 0x6ed1a7
// 006ed1a5  8bf5                 mov esi, ebp
// 006ed1a7  56                   push esi
// 006ed1a8  e8a38efaff           call 0x696050
// 006ed1ad  5f                   pop edi
// 006ed1ae  5e                   pop esi
// 006ed1af  5d                   pop ebp
// 006ed1b0  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
