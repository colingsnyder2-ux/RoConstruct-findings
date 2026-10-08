// from server: 100% by auto
// roc 2010-06 00498b50  unit: G3D::Shader  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00498b50
//
// 00498b50  6aff                 push -1
// 00498b52  68a96d9800           push 0x986da9
// 00498b57  64a100000000         mov eax, dword ptr fs:[0]
// 00498b5d  50                   push eax
// 00498b5e  64892500000000       mov dword ptr fs:[0], esp
// 00498b65  83ec08               sub esp, 8
// 00498b68  53                   push ebx
// 00498b69  55                   push ebp
// 00498b6a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00498b6e  56                   push esi
// 00498b6f  8bf1                 mov esi, ecx
// 00498b71  8b4604               mov eax, dword ptr [esi + 4]
// 00498b74  3be8                 cmp ebp, eax
// 00498b76  57                   push edi
// 00498b77  89742414             mov dword ptr [esp + 0x14], esi
// 00498b7b  89442410             mov dword ptr [esp + 0x10], eax
// 00498b7f  896e04               mov dword ptr [esi + 4], ebp
// 00498b82  7d25                 jge 0x498ba9
// 00498b84  8d7c6d00             lea edi, [ebp + ebp*2]
// 00498b88  8bd8                 mov ebx, eax
// 00498b8a  c1e704               shl edi, 4
// 00498b8d  2bdd                 sub ebx, ebp
// 00498b8f  90                   nop 
// 00498b90  8b06                 mov eax, dword ptr [esi]
// 00498b92  03c7                 add eax, edi
// 00498b94  8d4808               lea ecx, [eax + 8]
// 00498b97  ff1500a49e00         call dword ptr [0x9ea400]
// 00498b9d  83c730               add edi, 0x30
// 00498ba0  83eb01               sub ebx, 1
// 00498ba3  75eb                 jne 0x498b90
// 00498ba5  8b442410             mov eax, dword ptr [esp + 0x10]
// 00498ba9  f605fc3cc00001       test byte ptr [0xc03cfc], 1
// 00498bb0  7514                 jne 0x498bc6
// 00498bb2  830dfc3cc00001       or dword ptr [0xc03cfc], 1
// 00498bb9  bf0a000000           mov edi, 0xa
// 00498bbe  893df83cc000         mov dword ptr [0xc03cf8], edi
// 00498bc4  eb06                 jmp 0x498bcc
// 00498bc6  8b3df83cc000         mov edi, dword ptr [0xc03cf8]
// 00498bcc  8b4e04               mov ecx, dword ptr [esi + 4]
// 00498bcf  8b5608               mov edx, dword ptr [esi + 8]
// 00498bd2  33db                 xor ebx, ebx
// 00498bd4  3bca                 cmp ecx, edx
// 00498bd6  7e74                 jle 0x498c4c
// 00498bd8  3bd3                 cmp edx, ebx
// 00498bda  7509                 jne 0x498be5
// 00498bdc  896e08               mov dword ptr [esi + 8], ebp
// 00498bdf  50                   push eax
// 00498be0  e98e000000           jmp 0x498c73
// 00498be5  3bcf                 cmp ecx, edi
// 00498be7  7d09                 jge 0x498bf2
// 00498be9  897e08               mov dword ptr [esi + 8], edi
// 00498bec  50                   push eax
// 00498bed  e981000000           jmp 0x498c73
// 00498bf2  f30f10050834a100     movss xmm0, dword ptr [0xa13408]
// 00498bfa  8bc2                 mov eax, edx
// 00498bfc  8d0440               lea eax, [eax + eax*2]
// 00498bff  c1e004               shl eax, 4
// 00498c02  3d801a0600           cmp eax, 0x61a80
// 00498c07  760a                 jbe 0x498c13
// 00498c09  f30f10050434a100     movss xmm0, dword ptr [0xa13404]
// 00498c11  eb0f                 jmp 0x498c22
// 00498c13  3d00fa0000           cmp eax, 0xfa00
// 00498c18  7608                 jbe 0x498c22
// 00498c1a  f30f1005d427a100     movss xmm0, dword ptr [0xa127d4]
// 00498c22  8bc2                 mov eax, edx
// 00498c24  f30f2ac8             cvtsi2ss xmm1, eax
// 00498c28  f30f59c8             mulss xmm1, xmm0
// 00498c2c  f30f2cd1             cvttss2si edx, xmm1
// 00498c30  2bd0                 sub edx, eax
// 00498c32  8d040a               lea eax, [edx + ecx]
// 00498c35  894608               mov dword ptr [esi + 8], eax
// 00498c38  8b0df83cc000         mov ecx, dword ptr [0xc03cf8]
// 00498c3e  3bc1                 cmp eax, ecx
// 00498c40  8b442410             mov eax, dword ptr [esp + 0x10]
// 00498c44  7d03                 jge 0x498c49
// 00498c46  894e08               mov dword ptr [esi + 8], ecx
// 00498c49  50                   push eax
// 00498c4a  eb27                 jmp 0x498c73
// 00498c4c  b856555555           mov eax, 0x55555556
// 00498c51  f7ea                 imul edx
// 00498c53  8bc2                 mov eax, edx
// 00498c55  c1e81f               shr eax, 0x1f
// 00498c58  03c2                 add eax, edx
// 00498c5a  3bc8                 cmp ecx, eax
// 00498c5c  7f1c                 jg 0x498c7a
// 00498c5e  385c242c             cmp byte ptr [esp + 0x2c], bl
// 00498c62  7416                 je 0x498c7a
// 00498c64  3bcf                 cmp ecx, edi
// 00498c66  7e12                 jle 0x498c7a
// 00498c68  8b442410             mov eax, dword ptr [esp + 0x10]
// 00498c6c  3bc8                 cmp ecx, eax
// 00498c6e  7c02                 jl 0x498c72
// 00498c70  8bc8                 mov ecx, eax
// 00498c72  51                   push ecx
// 00498c73  8bce                 mov ecx, esi
// 00498c75  e856fdffff           call 0x4989d0
// 00498c7a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00498c7e  3b7e04               cmp edi, dword ptr [esi + 4]
// 00498c81  897c242c             mov dword ptr [esp + 0x2c], edi
// 00498c85  7d32                 jge 0x498cb9
// 00498c87  83cdff               or ebp, 0xffffffff
// 00498c8a  8d9b00000000         lea ebx, [ebx]
// 00498c90  8d047f               lea eax, [edi + edi*2]
// 00498c93  c1e004               shl eax, 4
// 00498c96  0306                 add eax, dword ptr [esi]
// 00498c98  89442428             mov dword ptr [esp + 0x28], eax
// 00498c9c  895c2420             mov dword ptr [esp + 0x20], ebx
// 00498ca0  7409                 je 0x498cab
// 00498ca2  8d4808               lea ecx, [eax + 8]
// 00498ca5  ff1504a49e00         call dword ptr [0x9ea404]
// 00498cab  47                   inc edi
// 00498cac  3b7e04               cmp edi, dword ptr [esi + 4]
// 00498caf  896c2420             mov dword ptr [esp + 0x20], ebp
// 00498cb3  897c242c             mov dword ptr [esp + 0x2c], edi
// 00498cb7  7cd7                 jl 0x498c90
// 00498cb9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00498cbd  5f                   pop edi
// 00498cbe  5e                   pop esi
// 00498cbf  5d                   pop ebp
// 00498cc0  5b                   pop ebx
// 00498cc1  64890d00000000       mov dword ptr fs:[0], ecx
// 00498cc8  83c414               add esp, 0x14
// 00498ccb  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?resize@?$Array@VUniformDeclaration@VertexAndPixelShader@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
