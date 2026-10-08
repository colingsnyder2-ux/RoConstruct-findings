// roc 2007-08 004f78c0  unit: G3D::Sphere  size: 712 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f78c0
//
// 004f78c0  81ec88000000         sub esp, 0x88
// 004f78c6  53                   push ebx
// 004f78c7  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 004f78ce  55                   push ebp
// 004f78cf  56                   push esi
// 004f78d0  8bf1                 mov esi, ecx
// 004f78d2  57                   push edi
// 004f78d3  8bcb                 mov ecx, ebx
// 004f78d5  e896cbf7ff           call 0x474470
// 004f78da  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004f78e0  33ff                 xor edi, edi
// 004f78e2  397844               cmp dword ptr [eax + 0x44], edi
// 004f78e5  7e28                 jle 0x4f790f
// 004f78e7  33ed                 xor ebp, ebp
// 004f78e9  8da42400000000       lea esp, [esp]
// 004f78f0  8b4040               mov eax, dword ptr [eax + 0x40]
// 004f78f3  03c5                 add eax, ebp
// 004f78f5  50                   push eax
// 004f78f6  57                   push edi
// 004f78f7  8bcb                 mov ecx, ebx
// 004f78f9  e862dff7ff           call 0x475860
// 004f78fe  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004f7904  83c701               add edi, 1
// 004f7907  83c550               add ebp, 0x50
// 004f790a  3b7844               cmp edi, dword ptr [eax + 0x44]
// 004f790d  7ce1                 jl 0x4f78f0
// 004f790f  80bc24a000000000     cmp byte ptr [esp + 0xa0], 0
// 004f7917  7441                 je 0x4f795a
// 004f7919  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 004f791f  33ff                 xor edi, edi
// 004f7921  397950               cmp dword ptr [ecx + 0x50], edi
// 004f7924  7e34                 jle 0x4f795a
// 004f7926  33ed                 xor ebp, ebp
// 004f7928  eb06                 jmp 0x4f7930
// 004f792a  8d9b00000000         lea ebx, [ebx]
// 004f7930  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004f7936  8b504c               mov edx, dword ptr [eax + 0x4c]
// 004f7939  8b4044               mov eax, dword ptr [eax + 0x44]
// 004f793c  03d5                 add edx, ebp
// 004f793e  52                   push edx
// 004f793f  03c7                 add eax, edi
// 004f7941  50                   push eax
// 004f7942  8bcb                 mov ecx, ebx
// 004f7944  e817dff7ff           call 0x475860
// 004f7949  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 004f794f  83c701               add edi, 1
// 004f7952  83c550               add ebp, 0x50
// 004f7955  3b7950               cmp edi, dword ptr [ecx + 0x50]
// 004f7958  7cd6                 jl 0x4f7930
// 004f795a  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004f7960  d94028               fld dword ptr [eax + 0x28]
// 004f7963  51                   push ecx
// 004f7964  d8401c               fadd dword ptr [eax + 0x1c]
// 004f7967  8d542428             lea edx, [esp + 0x28]
// 004f796b  8d4c241c             lea ecx, [esp + 0x1c]
// 004f796f  d95c2418             fstp dword ptr [esp + 0x18]
// 004f7973  d9402c               fld dword ptr [eax + 0x2c]
// 004f7976  d84020               fadd dword ptr [eax + 0x20]
// 004f7979  d95c2414             fstp dword ptr [esp + 0x14]
// 004f797d  d94024               fld dword ptr [eax + 0x24]
// 004f7980  d84018               fadd dword ptr [eax + 0x18]
// 004f7983  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f7987  d9442418             fld dword ptr [esp + 0x18]
// 004f798b  d95c2420             fstp dword ptr [esp + 0x20]
// 004f798f  d9442414             fld dword ptr [esp + 0x14]
// 004f7993  d95c2424             fstp dword ptr [esp + 0x24]
// 004f7997  d90588797900         fld dword ptr [0x797988]
// 004f799d  d91c24               fstp dword ptr [esp]
// 004f79a0  52                   push edx
// 004f79a1  e84a3a0100           call 0x50b3f0
// 004f79a6  8d442424             lea eax, [esp + 0x24]
// 004f79aa  50                   push eax
// 004f79ab  8bcb                 mov ecx, ebx
// 004f79ad  e88ecaf7ff           call 0x474440
// 004f79b2  d90584f77900         fld dword ptr [0x79f784]
// 004f79b8  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004f79be  8b7850               mov edi, dword ptr [eax + 0x50]
// 004f79c1  d95c2430             fstp dword ptr [esp + 0x30]
// 004f79c5  d9056c647900         fld dword ptr [0x79646c]
// 004f79cb  03ff                 add edi, edi
// 004f79cd  d95c2434             fstp dword ptr [esp + 0x34]
// 004f79d1  d905b07e7900         fld dword ptr [0x797eb0]
// 004f79d7  d95c2438             fstp dword ptr [esp + 0x38]
// 004f79db  83785000             cmp dword ptr [eax + 0x50], 0
// 004f79df  7e41                 jle 0x4f7a22
// 004f79e1  8bc8                 mov ecx, eax
// 004f79e3  8b494c               mov ecx, dword ptr [ecx + 0x4c]
// 004f79e6  8d54243c             lea edx, [esp + 0x3c]
// 004f79ea  52                   push edx
// 004f79eb  e840360100           call 0x50b030
// 004f79f0  d900                 fld dword ptr [eax]
// 004f79f2  d9e0                 fchs 
// 004f79f4  d95c2418             fstp dword ptr [esp + 0x18]
// 004f79f8  d94004               fld dword ptr [eax + 4]
// 004f79fb  d9e0                 fchs 
// 004f79fd  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f7a01  d94008               fld dword ptr [eax + 8]
// 004f7a04  d9e0                 fchs 
// 004f7a06  d95c2420             fstp dword ptr [esp + 0x20]
// 004f7a0a  d9442418             fld dword ptr [esp + 0x18]
// 004f7a0e  d95c2430             fstp dword ptr [esp + 0x30]
// 004f7a12  d944241c             fld dword ptr [esp + 0x1c]
// 004f7a16  d95c2434             fstp dword ptr [esp + 0x34]
// 004f7a1a  d9442420             fld dword ptr [esp + 0x20]
// 004f7a1e  d95c2438             fstp dword ptr [esp + 0x38]
// 004f7a22  807e7100             cmp byte ptr [esi + 0x71], 0
// 004f7a26  0f844f010000         je 0x4f7b7b
// 004f7a2c  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 004f7a32  d94124               fld dword ptr [ecx + 0x24]
// 004f7a35  d9442424             fld dword ptr [esp + 0x24]
// 004f7a39  d9c0                 fld st(0)
// 004f7a3b  ddea                 fucomp st(2)
// 004f7a3d  dfe0                 fnstsw ax
// 004f7a3f  ddd9                 fstp st(1)
// 004f7a41  f6c444               test ah, 0x44
// 004f7a44  d944242c             fld dword ptr [esp + 0x2c]
// 004f7a48  d9442428             fld dword ptr [esp + 0x28]
// 004f7a4c  7a1c                 jp 0x4f7a6a
// 004f7a4e  d94128               fld dword ptr [ecx + 0x28]
// 004f7a51  d9c1                 fld st(1)
// 004f7a53  dae9                 fucompp 
// 004f7a55  dfe0                 fnstsw ax
// 004f7a57  f6c444               test ah, 0x44
// 004f7a5a  7a0e                 jp 0x4f7a6a
// 004f7a5c  d9412c               fld dword ptr [ecx + 0x2c]
// 004f7a5f  d9c2                 fld st(2)
// 004f7a61  dae9                 fucompp 
// 004f7a63  dfe0                 fnstsw ax
// 004f7a65  f6c444               test ah, 0x44
// 004f7a68  7b5c                 jnp 0x4f7ac6
// 004f7a6a  d86928               fsubr dword ptr [ecx + 0x28]
// 004f7a6d  6a01                 push 1
// 004f7a6f  6a00                 push 0
// 004f7a71  8d442420             lea eax, [esp + 0x20]
// 004f7a75  d95c2418             fstp dword ptr [esp + 0x18]
// 004f7a79  50                   push eax
// 004f7a7a  8d542454             lea edx, [esp + 0x54]
// 004f7a7e  d8692c               fsubr dword ptr [ecx + 0x2c]
// 004f7a81  d95c2420             fstp dword ptr [esp + 0x20]
// 004f7a85  d86924               fsubr dword ptr [ecx + 0x24]
// 004f7a88  8d4c243c             lea ecx, [esp + 0x3c]
// 004f7a8c  51                   push ecx
// 004f7a8d  52                   push edx
// 004f7a8e  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f7a92  d9442424             fld dword ptr [esp + 0x24]
// 004f7a96  d95c2430             fstp dword ptr [esp + 0x30]
// 004f7a9a  d9442428             fld dword ptr [esp + 0x28]
// 004f7a9e  d95c2434             fstp dword ptr [esp + 0x34]
// 004f7aa2  e8d9300100           call 0x50ab80
// 004f7aa7  83c414               add esp, 0x14
// 004f7aaa  50                   push eax
// 004f7aab  57                   push edi
// 004f7aac  8bcb                 mov ecx, ebx
// 004f7aae  e8adddf7ff           call 0x475860
// 004f7ab3  d944242c             fld dword ptr [esp + 0x2c]
// 004f7ab7  d9442428             fld dword ptr [esp + 0x28]
// 004f7abb  83c701               add edi, 1
// 004f7abe  d9442424             fld dword ptr [esp + 0x24]
// 004f7ac2  d9ca                 fxch st(2)
// 004f7ac4  d9c9                 fxch st(1)
// 004f7ac6  8bb684000000         mov esi, dword ptr [esi + 0x84]
// 004f7acc  d94618               fld dword ptr [esi + 0x18]
// 004f7acf  d9c3                 fld st(3)
// 004f7ad1  dae9                 fucompp 
// 004f7ad3  dfe0                 fnstsw ax
// 004f7ad5  f6c444               test ah, 0x44
// 004f7ad8  7a1c                 jp 0x4f7af6
// 004f7ada  d9461c               fld dword ptr [esi + 0x1c]
// 004f7add  d9c1                 fld st(1)
// 004f7adf  dae9                 fucompp 
// 004f7ae1  dfe0                 fnstsw ax
// 004f7ae3  f6c444               test ah, 0x44
// 004f7ae6  7a0e                 jp 0x4f7af6
// 004f7ae8  d94620               fld dword ptr [esi + 0x20]
// 004f7aeb  d9c2                 fld st(2)
// 004f7aed  dae9                 fucompp 
// 004f7aef  dfe0                 fnstsw ax
// 004f7af1  f6c444               test ah, 0x44
// 004f7af4  7b7f                 jnp 0x4f7b75
// 004f7af6  f605f4fb8b0001       test byte ptr [0x8bfbf4], 1
// 004f7afd  d86e1c               fsubr dword ptr [esi + 0x1c]
// 004f7b00  d95c2410             fstp dword ptr [esp + 0x10]
// 004f7b04  d86e20               fsubr dword ptr [esi + 0x20]
// 004f7b07  d95c2414             fstp dword ptr [esp + 0x14]
// 004f7b0b  d86e18               fsubr dword ptr [esi + 0x18]
// 004f7b0e  d95c2418             fstp dword ptr [esp + 0x18]
// 004f7b12  d9442410             fld dword ptr [esp + 0x10]
// 004f7b16  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f7b1a  d9442414             fld dword ptr [esp + 0x14]
// 004f7b1e  d95c2420             fstp dword ptr [esp + 0x20]
// 004f7b22  751d                 jne 0x4f7b41
// 004f7b24  d9ee                 fldz 
// 004f7b26  830df4fb8b0001       or dword ptr [0x8bfbf4], 1
// 004f7b2d  d915e8fb8b00         fst dword ptr [0x8bfbe8]
// 004f7b33  d9e8                 fld1 
// 004f7b35  d91decfb8b00         fstp dword ptr [0x8bfbec]
// 004f7b3b  d91df0fb8b00         fstp dword ptr [0x8bfbf0]
// 004f7b41  6a01                 push 1
// 004f7b43  6a00                 push 0
// 004f7b45  8d442420             lea eax, [esp + 0x20]
// 004f7b49  50                   push eax
// 004f7b4a  8d4c2454             lea ecx, [esp + 0x54]
// 004f7b4e  68e8fb8b00           push 0x8bfbe8
// 004f7b53  51                   push ecx
// 004f7b54  e827300100           call 0x50ab80
// 004f7b59  83c414               add esp, 0x14
// 004f7b5c  50                   push eax
// 004f7b5d  83c701               add edi, 1
// 004f7b60  57                   push edi
// 004f7b61  8bcb                 mov ecx, ebx
// 004f7b63  e8f8dcf7ff           call 0x475860
// 004f7b68  5f                   pop edi
// 004f7b69  5e                   pop esi
// 004f7b6a  5d                   pop ebp
// 004f7b6b  5b                   pop ebx
// 004f7b6c  81c488000000         add esp, 0x88
// 004f7b72  c20800               ret 8
// 004f7b75  ddda                 fstp st(2)
// 004f7b77  ddd8                 fstp st(0)
// 004f7b79  ddd8                 fstp st(0)
// 004f7b7b  5f                   pop edi
// 004f7b7c  5e                   pop esi
// 004f7b7d  5d                   pop ebp
// 004f7b7e  5b                   pop ebx
// 004f7b7f  81c488000000         add esp, 0x88
// 004f7b85  c20800               ret 8
// library rbxgs-render/RenderScene.cpp (function ?turnOnLights@RenderScene@Render@RBX@@ABEXPAVRenderDevice@G3D@@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
