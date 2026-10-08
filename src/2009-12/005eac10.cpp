// roc 2009-12 005eac10  unit: G3D::Shader  size: 388 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005eac10
//
// 005eac10  6aff                 push -1
// 005eac12  68c9eb9300           push 0x93ebc9
// 005eac17  64a100000000         mov eax, dword ptr fs:[0]
// 005eac1d  50                   push eax
// 005eac1e  64892500000000       mov dword ptr fs:[0], esp
// 005eac25  83ec08               sub esp, 8
// 005eac28  53                   push ebx
// 005eac29  55                   push ebp
// 005eac2a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005eac2e  56                   push esi
// 005eac2f  8bf1                 mov esi, ecx
// 005eac31  8b4604               mov eax, dword ptr [esi + 4]
// 005eac34  3be8                 cmp ebp, eax
// 005eac36  57                   push edi
// 005eac37  89742414             mov dword ptr [esp + 0x14], esi
// 005eac3b  89442410             mov dword ptr [esp + 0x10], eax
// 005eac3f  896e04               mov dword ptr [esi + 4], ebp
// 005eac42  7d27                 jge 0x5eac6b
// 005eac44  8d3ced00000000       lea edi, [ebp*8]
// 005eac4b  2bfd                 sub edi, ebp
// 005eac4d  03ff                 add edi, edi
// 005eac4f  8bd8                 mov ebx, eax
// 005eac51  03ff                 add edi, edi
// 005eac53  2bdd                 sub ebx, ebp
// 005eac55  8b0e                 mov ecx, dword ptr [esi]
// 005eac57  03cf                 add ecx, edi
// 005eac59  ff15e4b69800         call dword ptr [0x98b6e4]
// 005eac5f  83c71c               add edi, 0x1c
// 005eac62  83eb01               sub ebx, 1
// 005eac65  75ee                 jne 0x5eac55
// 005eac67  8b442410             mov eax, dword ptr [esp + 0x10]
// 005eac6b  f605a03db80001       test byte ptr [0xb83da0], 1
// 005eac72  7514                 jne 0x5eac88
// 005eac74  830da03db80001       or dword ptr [0xb83da0], 1
// 005eac7b  bf0a000000           mov edi, 0xa
// 005eac80  893d9c3db800         mov dword ptr [0xb83d9c], edi
// 005eac86  eb06                 jmp 0x5eac8e
// 005eac88  8b3d9c3db800         mov edi, dword ptr [0xb83d9c]
// 005eac8e  8b4e04               mov ecx, dword ptr [esi + 4]
// 005eac91  8b5608               mov edx, dword ptr [esi + 8]
// 005eac94  33db                 xor ebx, ebx
// 005eac96  3bca                 cmp ecx, edx
// 005eac98  7e79                 jle 0x5ead13
// 005eac9a  3bd3                 cmp edx, ebx
// 005eac9c  7509                 jne 0x5eaca7
// 005eac9e  896e08               mov dword ptr [esi + 8], ebp
// 005eaca1  50                   push eax
// 005eaca2  e993000000           jmp 0x5ead3a
// 005eaca7  3bcf                 cmp ecx, edi
// 005eaca9  7d09                 jge 0x5eacb4
// 005eacab  897e08               mov dword ptr [esi + 8], edi
// 005eacae  50                   push eax
// 005eacaf  e986000000           jmp 0x5ead3a
// 005eacb4  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 005eacbc  8d04d500000000       lea eax, [edx*8]
// 005eacc3  2bc2                 sub eax, edx
// 005eacc5  03c0                 add eax, eax
// 005eacc7  03c0                 add eax, eax
// 005eacc9  3d801a0600           cmp eax, 0x61a80
// 005eacce  760a                 jbe 0x5eacda
// 005eacd0  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 005eacd8  eb0f                 jmp 0x5eace9
// 005eacda  3d00fa0000           cmp eax, 0xfa00
// 005eacdf  7608                 jbe 0x5eace9
// 005eace1  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 005eace9  8bc2                 mov eax, edx
// 005eaceb  f30f2ac8             cvtsi2ss xmm1, eax
// 005eacef  f30f59c8             mulss xmm1, xmm0
// 005eacf3  f30f2cd1             cvttss2si edx, xmm1
// 005eacf7  2bd0                 sub edx, eax
// 005eacf9  8d040a               lea eax, [edx + ecx]
// 005eacfc  894608               mov dword ptr [esi + 8], eax
// 005eacff  8b0d9c3db800         mov ecx, dword ptr [0xb83d9c]
// 005ead05  3bc1                 cmp eax, ecx
// 005ead07  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ead0b  7d03                 jge 0x5ead10
// 005ead0d  894e08               mov dword ptr [esi + 8], ecx
// 005ead10  50                   push eax
// 005ead11  eb27                 jmp 0x5ead3a
// 005ead13  b856555555           mov eax, 0x55555556
// 005ead18  f7ea                 imul edx
// 005ead1a  8bc2                 mov eax, edx
// 005ead1c  c1e81f               shr eax, 0x1f
// 005ead1f  03c2                 add eax, edx
// 005ead21  3bc8                 cmp ecx, eax
// 005ead23  7f1c                 jg 0x5ead41
// 005ead25  385c242c             cmp byte ptr [esp + 0x2c], bl
// 005ead29  7416                 je 0x5ead41
// 005ead2b  3bcf                 cmp ecx, edi
// 005ead2d  7e12                 jle 0x5ead41
// 005ead2f  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ead33  3bc8                 cmp ecx, eax
// 005ead35  7c02                 jl 0x5ead39
// 005ead37  8bc8                 mov ecx, eax
// 005ead39  51                   push ecx
// 005ead3a  8bce                 mov ecx, esi
// 005ead3c  e88ffaffff           call 0x5ea7d0
// 005ead41  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ead45  3b7e04               cmp edi, dword ptr [esi + 4]
// 005ead48  897c242c             mov dword ptr [esp + 0x2c], edi
// 005ead4c  7d31                 jge 0x5ead7f
// 005ead4e  83cdff               or ebp, 0xffffffff
// 005ead51  8b16                 mov edx, dword ptr [esi]
// 005ead53  8d0cfd00000000       lea ecx, [edi*8]
// 005ead5a  2bcf                 sub ecx, edi
// 005ead5c  8d0c8a               lea ecx, [edx + ecx*4]
// 005ead5f  894c2428             mov dword ptr [esp + 0x28], ecx
// 005ead63  895c2420             mov dword ptr [esp + 0x20], ebx
// 005ead67  3bcb                 cmp ecx, ebx
// 005ead69  7406                 je 0x5ead71
// 005ead6b  ff15e8b69800         call dword ptr [0x98b6e8]
// 005ead71  47                   inc edi
// 005ead72  3b7e04               cmp edi, dword ptr [esi + 4]
// 005ead75  896c2420             mov dword ptr [esp + 0x20], ebp
// 005ead79  897c242c             mov dword ptr [esp + 0x2c], edi
// 005ead7d  7cd2                 jl 0x5ead51
// 005ead7f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005ead83  5f                   pop edi
// 005ead84  5e                   pop esi
// 005ead85  5d                   pop ebp
// 005ead86  5b                   pop ebx
// 005ead87  64890d00000000       mov dword ptr fs:[0], ecx
// 005ead8e  83c414               add esp, 0x14
// 005ead91  c20800               ret 8
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
