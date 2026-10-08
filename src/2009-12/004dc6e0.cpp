// roc 2009-12 004dc6e0  unit: G3D::Shader  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dc6e0
//
// 004dc6e0  6aff                 push -1
// 004dc6e2  68493f9300           push 0x933f49
// 004dc6e7  64a100000000         mov eax, dword ptr fs:[0]
// 004dc6ed  50                   push eax
// 004dc6ee  64892500000000       mov dword ptr fs:[0], esp
// 004dc6f5  83ec08               sub esp, 8
// 004dc6f8  53                   push ebx
// 004dc6f9  55                   push ebp
// 004dc6fa  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 004dc6fe  56                   push esi
// 004dc6ff  8bf1                 mov esi, ecx
// 004dc701  8b4604               mov eax, dword ptr [esi + 4]
// 004dc704  3be8                 cmp ebp, eax
// 004dc706  57                   push edi
// 004dc707  89742414             mov dword ptr [esp + 0x14], esi
// 004dc70b  89442410             mov dword ptr [esp + 0x10], eax
// 004dc70f  896e04               mov dword ptr [esi + 4], ebp
// 004dc712  7d25                 jge 0x4dc739
// 004dc714  8d7c6d00             lea edi, [ebp + ebp*2]
// 004dc718  8bd8                 mov ebx, eax
// 004dc71a  c1e704               shl edi, 4
// 004dc71d  2bdd                 sub ebx, ebp
// 004dc71f  90                   nop 
// 004dc720  8b06                 mov eax, dword ptr [esi]
// 004dc722  03c7                 add eax, edi
// 004dc724  8d4808               lea ecx, [eax + 8]
// 004dc727  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dc72d  83c730               add edi, 0x30
// 004dc730  83eb01               sub ebx, 1
// 004dc733  75eb                 jne 0x4dc720
// 004dc735  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dc739  f605f4dbb70001       test byte ptr [0xb7dbf4], 1
// 004dc740  7514                 jne 0x4dc756
// 004dc742  830df4dbb70001       or dword ptr [0xb7dbf4], 1
// 004dc749  bf0a000000           mov edi, 0xa
// 004dc74e  893df0dbb700         mov dword ptr [0xb7dbf0], edi
// 004dc754  eb06                 jmp 0x4dc75c
// 004dc756  8b3df0dbb700         mov edi, dword ptr [0xb7dbf0]
// 004dc75c  8b4e04               mov ecx, dword ptr [esi + 4]
// 004dc75f  8b5608               mov edx, dword ptr [esi + 8]
// 004dc762  33db                 xor ebx, ebx
// 004dc764  3bca                 cmp ecx, edx
// 004dc766  7e74                 jle 0x4dc7dc
// 004dc768  3bd3                 cmp edx, ebx
// 004dc76a  7509                 jne 0x4dc775
// 004dc76c  896e08               mov dword ptr [esi + 8], ebp
// 004dc76f  50                   push eax
// 004dc770  e98e000000           jmp 0x4dc803
// 004dc775  3bcf                 cmp ecx, edi
// 004dc777  7d09                 jge 0x4dc782
// 004dc779  897e08               mov dword ptr [esi + 8], edi
// 004dc77c  50                   push eax
// 004dc77d  e981000000           jmp 0x4dc803
// 004dc782  f30f100590269b00     movss xmm0, dword ptr [0x9b2690]
// 004dc78a  8bc2                 mov eax, edx
// 004dc78c  8d0440               lea eax, [eax + eax*2]
// 004dc78f  c1e004               shl eax, 4
// 004dc792  3d801a0600           cmp eax, 0x61a80
// 004dc797  760a                 jbe 0x4dc7a3
// 004dc799  f30f1005b0279b00     movss xmm0, dword ptr [0x9b27b0]
// 004dc7a1  eb0f                 jmp 0x4dc7b2
// 004dc7a3  3d00fa0000           cmp eax, 0xfa00
// 004dc7a8  7608                 jbe 0x4dc7b2
// 004dc7aa  f30f100524169b00     movss xmm0, dword ptr [0x9b1624]
// 004dc7b2  8bc2                 mov eax, edx
// 004dc7b4  f30f2ac8             cvtsi2ss xmm1, eax
// 004dc7b8  f30f59c8             mulss xmm1, xmm0
// 004dc7bc  f30f2cd1             cvttss2si edx, xmm1
// 004dc7c0  2bd0                 sub edx, eax
// 004dc7c2  8d040a               lea eax, [edx + ecx]
// 004dc7c5  894608               mov dword ptr [esi + 8], eax
// 004dc7c8  8b0df0dbb700         mov ecx, dword ptr [0xb7dbf0]
// 004dc7ce  3bc1                 cmp eax, ecx
// 004dc7d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dc7d4  7d03                 jge 0x4dc7d9
// 004dc7d6  894e08               mov dword ptr [esi + 8], ecx
// 004dc7d9  50                   push eax
// 004dc7da  eb27                 jmp 0x4dc803
// 004dc7dc  b856555555           mov eax, 0x55555556
// 004dc7e1  f7ea                 imul edx
// 004dc7e3  8bc2                 mov eax, edx
// 004dc7e5  c1e81f               shr eax, 0x1f
// 004dc7e8  03c2                 add eax, edx
// 004dc7ea  3bc8                 cmp ecx, eax
// 004dc7ec  7f1c                 jg 0x4dc80a
// 004dc7ee  385c242c             cmp byte ptr [esp + 0x2c], bl
// 004dc7f2  7416                 je 0x4dc80a
// 004dc7f4  3bcf                 cmp ecx, edi
// 004dc7f6  7e12                 jle 0x4dc80a
// 004dc7f8  8b442410             mov eax, dword ptr [esp + 0x10]
// 004dc7fc  3bc8                 cmp ecx, eax
// 004dc7fe  7c02                 jl 0x4dc802
// 004dc800  8bc8                 mov ecx, eax
// 004dc802  51                   push ecx
// 004dc803  8bce                 mov ecx, esi
// 004dc805  e896fdffff           call 0x4dc5a0
// 004dc80a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004dc80e  3b7e04               cmp edi, dword ptr [esi + 4]
// 004dc811  897c242c             mov dword ptr [esp + 0x2c], edi
// 004dc815  7d32                 jge 0x4dc849
// 004dc817  83cdff               or ebp, 0xffffffff
// 004dc81a  8d9b00000000         lea ebx, [ebx]
// 004dc820  8d047f               lea eax, [edi + edi*2]
// 004dc823  c1e004               shl eax, 4
// 004dc826  0306                 add eax, dword ptr [esi]
// 004dc828  89442428             mov dword ptr [esp + 0x28], eax
// 004dc82c  895c2420             mov dword ptr [esp + 0x20], ebx
// 004dc830  7409                 je 0x4dc83b
// 004dc832  8d4808               lea ecx, [eax + 8]
// 004dc835  ff15e8b69800         call dword ptr [0x98b6e8]
// 004dc83b  47                   inc edi
// 004dc83c  3b7e04               cmp edi, dword ptr [esi + 4]
// 004dc83f  896c2420             mov dword ptr [esp + 0x20], ebp
// 004dc843  897c242c             mov dword ptr [esp + 0x2c], edi
// 004dc847  7cd7                 jl 0x4dc820
// 004dc849  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004dc84d  5f                   pop edi
// 004dc84e  5e                   pop esi
// 004dc84f  5d                   pop ebp
// 004dc850  5b                   pop ebx
// 004dc851  64890d00000000       mov dword ptr fs:[0], ecx
// 004dc858  83c414               add esp, 0x14
// 004dc85b  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?resize@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
