// roc 2009-12 007bf140  unit: RBX::FilterStairs  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007bf140
//
// 007bf140  8b442404             mov eax, dword ptr [esp + 4]
// 007bf144  55                   push ebp
// 007bf145  8b6904               mov ebp, dword ptr [ecx + 4]
// 007bf148  ba01000000           mov edx, 1
// 007bf14d  56                   push esi
// 007bf14e  894104               mov dword ptr [ecx + 4], eax
// 007bf151  57                   push edi
// 007bf152  8415008db900         test byte ptr [0xb98d00], dl
// 007bf158  7513                 jne 0x7bf16d
// 007bf15a  0915008db900         or dword ptr [0xb98d00], edx
// 007bf160  bf0a000000           mov edi, 0xa
// 007bf165  893dfc8cb900         mov dword ptr [0xb98cfc], edi
// 007bf16b  eb06                 jmp 0x7bf173
// 007bf16d  8b3dfc8cb900         mov edi, dword ptr [0xb98cfc]
// 007bf173  8b5108               mov edx, dword ptr [ecx + 8]
// 007bf176  8b7104               mov esi, dword ptr [ecx + 4]
// 007bf179  3bf2                 cmp esi, edx
// 007bf17b  0f8e83000000         jle 0x7bf204
// 007bf181  85d2                 test edx, edx
// 007bf183  750f                 jne 0x7bf194
// 007bf185  55                   push ebp
// 007bf186  894108               mov dword ptr [ecx + 8], eax
// 007bf189  e8c26eedff           call 0x696050
// 007bf18e  5f                   pop edi
// 007bf18f  5e                   pop esi
// 007bf190  5d                   pop ebp
// 007bf191  c20800               ret 8
// 007bf194  3bf7                 cmp esi, edi
// 007bf196  7d0f                 jge 0x7bf1a7
// 007bf198  55                   push ebp
// 007bf199  897908               mov dword ptr [ecx + 8], edi
// 007bf19c  e8af6eedff           call 0x696050
// 007bf1a1  5f                   pop edi
// 007bf1a2  5e                   pop esi
// 007bf1a3  5d                   pop ebp
// 007bf1a4  c20800               ret 8
// 007bf1a7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 007bf1af  8bc2                 mov eax, edx
// 007bf1b1  03c0                 add eax, eax
// 007bf1b3  03c0                 add eax, eax
// 007bf1b5  3d801a0600           cmp eax, 0x61a80
// 007bf1ba  760a                 jbe 0x7bf1c6
// 007bf1bc  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 007bf1c4  eb0f                 jmp 0x7bf1d5
// 007bf1c6  3d00fa0000           cmp eax, 0xfa00
// 007bf1cb  7608                 jbe 0x7bf1d5
// 007bf1cd  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 007bf1d5  8bc2                 mov eax, edx
// 007bf1d7  f30f2ac8             cvtsi2ss xmm1, eax
// 007bf1db  f30f59c8             mulss xmm1, xmm0
// 007bf1df  f30f2cd1             cvttss2si edx, xmm1
// 007bf1e3  2bd0                 sub edx, eax
// 007bf1e5  8d0432               lea eax, [edx + esi]
// 007bf1e8  894108               mov dword ptr [ecx + 8], eax
// 007bf1eb  8b15fc8cb900         mov edx, dword ptr [0xb98cfc]
// 007bf1f1  3bc2                 cmp eax, edx
// 007bf1f3  7d03                 jge 0x7bf1f8
// 007bf1f5  895108               mov dword ptr [ecx + 8], edx
// 007bf1f8  55                   push ebp
// 007bf1f9  e8526eedff           call 0x696050
// 007bf1fe  5f                   pop edi
// 007bf1ff  5e                   pop esi
// 007bf200  5d                   pop ebp
// 007bf201  c20800               ret 8
// 007bf204  b856555555           mov eax, 0x55555556
// 007bf209  f7ea                 imul edx
// 007bf20b  8bc2                 mov eax, edx
// 007bf20d  c1e81f               shr eax, 0x1f
// 007bf210  03c2                 add eax, edx
// 007bf212  3bf0                 cmp esi, eax
// 007bf214  7f17                 jg 0x7bf22d
// 007bf216  807c241400           cmp byte ptr [esp + 0x14], 0
// 007bf21b  7410                 je 0x7bf22d
// 007bf21d  3bf7                 cmp esi, edi
// 007bf21f  7e0c                 jle 0x7bf22d
// 007bf221  3bf5                 cmp esi, ebp
// 007bf223  7c02                 jl 0x7bf227
// 007bf225  8bf5                 mov esi, ebp
// 007bf227  56                   push esi
// 007bf228  e8236eedff           call 0x696050
// 007bf22d  5f                   pop edi
// 007bf22e  5e                   pop esi
// 007bf22f  5d                   pop ebp
// 007bf230  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
