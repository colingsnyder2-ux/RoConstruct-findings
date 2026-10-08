// roc 2009-12 004d1c00  unit: G3D::TextureManager::TextureArgs  size: 410 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d1c00
//
// 004d1c00  6aff                 push -1
// 004d1c02  6821349300           push 0x933421
// 004d1c07  64a100000000         mov eax, dword ptr fs:[0]
// 004d1c0d  50                   push eax
// 004d1c0e  64892500000000       mov dword ptr fs:[0], esp
// 004d1c15  83ec08               sub esp, 8
// 004d1c18  53                   push ebx
// 004d1c19  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 004d1c1d  55                   push ebp
// 004d1c1e  56                   push esi
// 004d1c1f  8bf1                 mov esi, ecx
// 004d1c21  8b6e04               mov ebp, dword ptr [esi + 4]
// 004d1c24  3bdd                 cmp ebx, ebp
// 004d1c26  57                   push edi
// 004d1c27  89742414             mov dword ptr [esp + 0x14], esi
// 004d1c2b  896c2410             mov dword ptr [esp + 0x10], ebp
// 004d1c2f  895e04               mov dword ptr [esi + 4], ebx
// 004d1c32  7d2c                 jge 0x4d1c60
// 004d1c34  8d3cdd00000000       lea edi, [ebx*8]
// 004d1c3b  2bfb                 sub edi, ebx
// 004d1c3d  03ff                 add edi, edi
// 004d1c3f  03ff                 add edi, edi
// 004d1c41  03ff                 add edi, edi
// 004d1c43  2beb                 sub ebp, ebx
// 004d1c45  8b06                 mov eax, dword ptr [esi]
// 004d1c47  8b1407               mov edx, dword ptr [edi + eax]
// 004d1c4a  8d0c07               lea ecx, [edi + eax]
// 004d1c4d  8b4204               mov eax, dword ptr [edx + 4]
// 004d1c50  6a00                 push 0
// 004d1c52  ffd0                 call eax
// 004d1c54  83c738               add edi, 0x38
// 004d1c57  83ed01               sub ebp, 1
// 004d1c5a  75e9                 jne 0x4d1c45
// 004d1c5c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d1c60  f6059cd0b70001       test byte ptr [0xb7d09c], 1
// 004d1c67  7514                 jne 0x4d1c7d
// 004d1c69  830d9cd0b70001       or dword ptr [0xb7d09c], 1
// 004d1c70  bf0a000000           mov edi, 0xa
// 004d1c75  893d98d0b700         mov dword ptr [0xb7d098], edi
// 004d1c7b  eb06                 jmp 0x4d1c83
// 004d1c7d  8b3d98d0b700         mov edi, dword ptr [0xb7d098]
// 004d1c83  8b4e04               mov ecx, dword ptr [esi + 4]
// 004d1c86  8b5608               mov edx, dword ptr [esi + 8]
// 004d1c89  3bca                 cmp ecx, edx
// 004d1c8b  7e77                 jle 0x4d1d04
// 004d1c8d  85d2                 test edx, edx
// 004d1c8f  7509                 jne 0x4d1c9a
// 004d1c91  895e08               mov dword ptr [esi + 8], ebx
// 004d1c94  55                   push ebp
// 004d1c95  e992000000           jmp 0x4d1d2c
// 004d1c9a  3bcf                 cmp ecx, edi
// 004d1c9c  7d09                 jge 0x4d1ca7
// 004d1c9e  897e08               mov dword ptr [esi + 8], edi
// 004d1ca1  55                   push ebp
// 004d1ca2  e985000000           jmp 0x4d1d2c
// 004d1ca7  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004d1caf  8d04d500000000       lea eax, [edx*8]
// 004d1cb6  2bc2                 sub eax, edx
// 004d1cb8  03c0                 add eax, eax
// 004d1cba  03c0                 add eax, eax
// 004d1cbc  03c0                 add eax, eax
// 004d1cbe  3d801a0600           cmp eax, 0x61a80
// 004d1cc3  760a                 jbe 0x4d1ccf
// 004d1cc5  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004d1ccd  eb0f                 jmp 0x4d1cde
// 004d1ccf  3d00fa0000           cmp eax, 0xfa00
// 004d1cd4  7608                 jbe 0x4d1cde
// 004d1cd6  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004d1cde  8bc2                 mov eax, edx
// 004d1ce0  f30f2ac8             cvtsi2ss xmm1, eax
// 004d1ce4  f30f59c8             mulss xmm1, xmm0
// 004d1ce8  f30f2cd1             cvttss2si edx, xmm1
// 004d1cec  2bd0                 sub edx, eax
// 004d1cee  8d040a               lea eax, [edx + ecx]
// 004d1cf1  894608               mov dword ptr [esi + 8], eax
// 004d1cf4  8b0d98d0b700         mov ecx, dword ptr [0xb7d098]
// 004d1cfa  3bc1                 cmp eax, ecx
// 004d1cfc  7d03                 jge 0x4d1d01
// 004d1cfe  894e08               mov dword ptr [esi + 8], ecx
// 004d1d01  55                   push ebp
// 004d1d02  eb28                 jmp 0x4d1d2c
// 004d1d04  b856555555           mov eax, 0x55555556
// 004d1d09  f7ea                 imul edx
// 004d1d0b  8bc2                 mov eax, edx
// 004d1d0d  c1e81f               shr eax, 0x1f
// 004d1d10  03c2                 add eax, edx
// 004d1d12  3bc8                 cmp ecx, eax
// 004d1d14  7f1d                 jg 0x4d1d33
// 004d1d16  807c242c00           cmp byte ptr [esp + 0x2c], 0
// 004d1d1b  7416                 je 0x4d1d33
// 004d1d1d  3bcf                 cmp ecx, edi
// 004d1d1f  7e12                 jle 0x4d1d33
// 004d1d21  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d1d25  3bc8                 cmp ecx, eax
// 004d1d27  7c02                 jl 0x4d1d2b
// 004d1d29  8bc8                 mov ecx, eax
// 004d1d2b  51                   push ecx
// 004d1d2c  8bce                 mov ecx, esi
// 004d1d2e  e88dfbffff           call 0x4d18c0
// 004d1d33  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d1d37  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004d1d3a  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004d1d3e  7d45                 jge 0x4d1d85
// 004d1d40  8b16                 mov edx, dword ptr [esi]
// 004d1d42  8d0ced00000000       lea ecx, [ebp*8]
// 004d1d49  2bcd                 sub ecx, ebp
// 004d1d4b  8d3cca               lea edi, [edx + ecx*8]
// 004d1d4e  897c2428             mov dword ptr [esp + 0x28], edi
// 004d1d52  33db                 xor ebx, ebx
// 004d1d54  895c2420             mov dword ptr [esp + 0x20], ebx
// 004d1d58  3bfb                 cmp edi, ebx
// 004d1d5a  7417                 je 0x4d1d73
// 004d1d5c  8d4f04               lea ecx, [edi + 4]
// 004d1d5f  c644242001           mov byte ptr [esp + 0x20], 1
// 004d1d64  c70720e69a00         mov dword ptr [edi], 0x9ae620
// 004d1d6a  ff15e8b69800         call dword ptr [0x98b6e8]
// 004d1d70  895f20               mov dword ptr [edi + 0x20], ebx
// 004d1d73  45                   inc ebp
// 004d1d74  3b6e04               cmp ebp, dword ptr [esi + 4]
// 004d1d77  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004d1d7f  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004d1d83  7cbb                 jl 0x4d1d40
// 004d1d85  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004d1d89  5f                   pop edi
// 004d1d8a  5e                   pop esi
// 004d1d8b  5d                   pop ebp
// 004d1d8c  5b                   pop ebx
// 004d1d8d  64890d00000000       mov dword ptr fs:[0], ecx
// 004d1d94  83c414               add esp, 0x14
// 004d1d97  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\TextureManager.cpp (function ?resize@?$Array@VTextureArgs@TextureManager@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/TextureManager.cpp
