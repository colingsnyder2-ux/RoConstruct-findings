// roc 2007-03 004eb2f0  unit: seg_004e0000  size: 712 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb2f0
//
// 004eb2f0  81ec88000000         sub esp, 0x88
// 004eb2f6  53                   push ebx
// 004eb2f7  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 004eb2fe  55                   push ebp
// 004eb2ff  56                   push esi
// 004eb300  8bf1                 mov esi, ecx
// 004eb302  57                   push edi
// 004eb303  8bcb                 mov ecx, ebx
// 004eb305  e86692f8ff           call 0x474570
// 004eb30a  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004eb310  33ff                 xor edi, edi
// 004eb312  397844               cmp dword ptr [eax + 0x44], edi
// 004eb315  7e28                 jle 0x4eb33f
// 004eb317  33ed                 xor ebp, ebp
// 004eb319  8da42400000000       lea esp, [esp]
// 004eb320  8b4040               mov eax, dword ptr [eax + 0x40]
// 004eb323  03c5                 add eax, ebp
// 004eb325  50                   push eax
// 004eb326  57                   push edi
// 004eb327  8bcb                 mov ecx, ebx
// 004eb329  e852a6f8ff           call 0x475980
// 004eb32e  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004eb334  83c701               add edi, 1
// 004eb337  83c550               add ebp, 0x50
// 004eb33a  3b7844               cmp edi, dword ptr [eax + 0x44]
// 004eb33d  7ce1                 jl 0x4eb320
// 004eb33f  80bc24a000000000     cmp byte ptr [esp + 0xa0], 0
// 004eb347  7441                 je 0x4eb38a
// 004eb349  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 004eb34f  33ff                 xor edi, edi
// 004eb351  397950               cmp dword ptr [ecx + 0x50], edi
// 004eb354  7e34                 jle 0x4eb38a
// 004eb356  33ed                 xor ebp, ebp
// 004eb358  eb06                 jmp 0x4eb360
// 004eb35a  8d9b00000000         lea ebx, [ebx]
// 004eb360  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004eb366  8b504c               mov edx, dword ptr [eax + 0x4c]
// 004eb369  8b4044               mov eax, dword ptr [eax + 0x44]
// 004eb36c  03d5                 add edx, ebp
// 004eb36e  52                   push edx
// 004eb36f  03c7                 add eax, edi
// 004eb371  50                   push eax
// 004eb372  8bcb                 mov ecx, ebx
// 004eb374  e807a6f8ff           call 0x475980
// 004eb379  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 004eb37f  83c701               add edi, 1
// 004eb382  83c550               add ebp, 0x50
// 004eb385  3b7950               cmp edi, dword ptr [ecx + 0x50]
// 004eb388  7cd6                 jl 0x4eb360
// 004eb38a  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004eb390  d94028               fld dword ptr [eax + 0x28]
// 004eb393  51                   push ecx
// 004eb394  d8401c               fadd dword ptr [eax + 0x1c]
// 004eb397  8d542428             lea edx, [esp + 0x28]
// 004eb39b  8d4c241c             lea ecx, [esp + 0x1c]
// 004eb39f  d95c2418             fstp dword ptr [esp + 0x18]
// 004eb3a3  d9402c               fld dword ptr [eax + 0x2c]
// 004eb3a6  d84020               fadd dword ptr [eax + 0x20]
// 004eb3a9  d95c2414             fstp dword ptr [esp + 0x14]
// 004eb3ad  d94024               fld dword ptr [eax + 0x24]
// 004eb3b0  d84018               fadd dword ptr [eax + 0x18]
// 004eb3b3  d95c241c             fstp dword ptr [esp + 0x1c]
// 004eb3b7  d9442418             fld dword ptr [esp + 0x18]
// 004eb3bb  d95c2420             fstp dword ptr [esp + 0x20]
// 004eb3bf  d9442414             fld dword ptr [esp + 0x14]
// 004eb3c3  d95c2424             fstp dword ptr [esp + 0x24]
// 004eb3c7  d905084c7900         fld dword ptr [0x794c08]
// 004eb3cd  d91c24               fstp dword ptr [esp]
// 004eb3d0  52                   push edx
// 004eb3d1  e81a570100           call 0x500af0
// 004eb3d6  8d442424             lea eax, [esp + 0x24]
// 004eb3da  50                   push eax
// 004eb3db  8bcb                 mov ecx, ebx
// 004eb3dd  e85e91f8ff           call 0x474540
// 004eb3e2  d905dced7900         fld dword ptr [0x79eddc]
// 004eb3e8  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 004eb3ee  8b7850               mov edi, dword ptr [eax + 0x50]
// 004eb3f1  d95c2430             fstp dword ptr [esp + 0x30]
// 004eb3f5  d90578587900         fld dword ptr [0x795878]
// 004eb3fb  03ff                 add edi, edi
// 004eb3fd  d95c2434             fstp dword ptr [esp + 0x34]
// 004eb401  d905a0727900         fld dword ptr [0x7972a0]
// 004eb407  d95c2438             fstp dword ptr [esp + 0x38]
// 004eb40b  83785000             cmp dword ptr [eax + 0x50], 0
// 004eb40f  7e41                 jle 0x4eb452
// 004eb411  8bc8                 mov ecx, eax
// 004eb413  8b494c               mov ecx, dword ptr [ecx + 0x4c]
// 004eb416  8d54243c             lea edx, [esp + 0x3c]
// 004eb41a  52                   push edx
// 004eb41b  e830530100           call 0x500750
// 004eb420  d900                 fld dword ptr [eax]
// 004eb422  d9e0                 fchs 
// 004eb424  d95c2418             fstp dword ptr [esp + 0x18]
// 004eb428  d94004               fld dword ptr [eax + 4]
// 004eb42b  d9e0                 fchs 
// 004eb42d  d95c241c             fstp dword ptr [esp + 0x1c]
// 004eb431  d94008               fld dword ptr [eax + 8]
// 004eb434  d9e0                 fchs 
// 004eb436  d95c2420             fstp dword ptr [esp + 0x20]
// 004eb43a  d9442418             fld dword ptr [esp + 0x18]
// 004eb43e  d95c2430             fstp dword ptr [esp + 0x30]
// 004eb442  d944241c             fld dword ptr [esp + 0x1c]
// 004eb446  d95c2434             fstp dword ptr [esp + 0x34]
// 004eb44a  d9442420             fld dword ptr [esp + 0x20]
// 004eb44e  d95c2438             fstp dword ptr [esp + 0x38]
// 004eb452  807e7100             cmp byte ptr [esi + 0x71], 0
// 004eb456  0f844f010000         je 0x4eb5ab
// 004eb45c  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 004eb462  d94124               fld dword ptr [ecx + 0x24]
// 004eb465  d9442424             fld dword ptr [esp + 0x24]
// 004eb469  d9c0                 fld st(0)
// 004eb46b  ddea                 fucomp st(2)
// 004eb46d  dfe0                 fnstsw ax
// 004eb46f  ddd9                 fstp st(1)
// 004eb471  f6c444               test ah, 0x44
// 004eb474  d944242c             fld dword ptr [esp + 0x2c]
// 004eb478  d9442428             fld dword ptr [esp + 0x28]
// 004eb47c  7a1c                 jp 0x4eb49a
// 004eb47e  d94128               fld dword ptr [ecx + 0x28]
// 004eb481  d9c1                 fld st(1)
// 004eb483  dae9                 fucompp 
// 004eb485  dfe0                 fnstsw ax
// 004eb487  f6c444               test ah, 0x44
// 004eb48a  7a0e                 jp 0x4eb49a
// 004eb48c  d9412c               fld dword ptr [ecx + 0x2c]
// 004eb48f  d9c2                 fld st(2)
// 004eb491  dae9                 fucompp 
// 004eb493  dfe0                 fnstsw ax
// 004eb495  f6c444               test ah, 0x44
// 004eb498  7b5c                 jnp 0x4eb4f6
// 004eb49a  d86928               fsubr dword ptr [ecx + 0x28]
// 004eb49d  6a01                 push 1
// 004eb49f  6a00                 push 0
// 004eb4a1  8d442420             lea eax, [esp + 0x20]
// 004eb4a5  d95c2418             fstp dword ptr [esp + 0x18]
// 004eb4a9  50                   push eax
// 004eb4aa  8d542454             lea edx, [esp + 0x54]
// 004eb4ae  d8692c               fsubr dword ptr [ecx + 0x2c]
// 004eb4b1  d95c2420             fstp dword ptr [esp + 0x20]
// 004eb4b5  d86924               fsubr dword ptr [ecx + 0x24]
// 004eb4b8  8d4c243c             lea ecx, [esp + 0x3c]
// 004eb4bc  51                   push ecx
// 004eb4bd  52                   push edx
// 004eb4be  d95c242c             fstp dword ptr [esp + 0x2c]
// 004eb4c2  d9442424             fld dword ptr [esp + 0x24]
// 004eb4c6  d95c2430             fstp dword ptr [esp + 0x30]
// 004eb4ca  d9442428             fld dword ptr [esp + 0x28]
// 004eb4ce  d95c2434             fstp dword ptr [esp + 0x34]
// 004eb4d2  e8e94d0100           call 0x5002c0
// 004eb4d7  83c414               add esp, 0x14
// 004eb4da  50                   push eax
// 004eb4db  57                   push edi
// 004eb4dc  8bcb                 mov ecx, ebx
// 004eb4de  e89da4f8ff           call 0x475980
// 004eb4e3  d944242c             fld dword ptr [esp + 0x2c]
// 004eb4e7  d9442428             fld dword ptr [esp + 0x28]
// 004eb4eb  83c701               add edi, 1
// 004eb4ee  d9442424             fld dword ptr [esp + 0x24]
// 004eb4f2  d9ca                 fxch st(2)
// 004eb4f4  d9c9                 fxch st(1)
// 004eb4f6  8bb684000000         mov esi, dword ptr [esi + 0x84]
// 004eb4fc  d94618               fld dword ptr [esi + 0x18]
// 004eb4ff  d9c3                 fld st(3)
// 004eb501  dae9                 fucompp 
// 004eb503  dfe0                 fnstsw ax
// 004eb505  f6c444               test ah, 0x44
// 004eb508  7a1c                 jp 0x4eb526
// 004eb50a  d9461c               fld dword ptr [esi + 0x1c]
// 004eb50d  d9c1                 fld st(1)
// 004eb50f  dae9                 fucompp 
// 004eb511  dfe0                 fnstsw ax
// 004eb513  f6c444               test ah, 0x44
// 004eb516  7a0e                 jp 0x4eb526
// 004eb518  d94620               fld dword ptr [esi + 0x20]
// 004eb51b  d9c2                 fld st(2)
// 004eb51d  dae9                 fucompp 
// 004eb51f  dfe0                 fnstsw ax
// 004eb521  f6c444               test ah, 0x44
// 004eb524  7b7f                 jnp 0x4eb5a5
// 004eb526  f605c4a08b0001       test byte ptr [0x8ba0c4], 1
// 004eb52d  d86e1c               fsubr dword ptr [esi + 0x1c]
// 004eb530  d95c2410             fstp dword ptr [esp + 0x10]
// 004eb534  d86e20               fsubr dword ptr [esi + 0x20]
// 004eb537  d95c2414             fstp dword ptr [esp + 0x14]
// 004eb53b  d86e18               fsubr dword ptr [esi + 0x18]
// 004eb53e  d95c2418             fstp dword ptr [esp + 0x18]
// 004eb542  d9442410             fld dword ptr [esp + 0x10]
// 004eb546  d95c241c             fstp dword ptr [esp + 0x1c]
// 004eb54a  d9442414             fld dword ptr [esp + 0x14]
// 004eb54e  d95c2420             fstp dword ptr [esp + 0x20]
// 004eb552  751d                 jne 0x4eb571
// 004eb554  d9ee                 fldz 
// 004eb556  830dc4a08b0001       or dword ptr [0x8ba0c4], 1
// 004eb55d  d915b8a08b00         fst dword ptr [0x8ba0b8]
// 004eb563  d9e8                 fld1 
// 004eb565  d91dbca08b00         fstp dword ptr [0x8ba0bc]
// 004eb56b  d91dc0a08b00         fstp dword ptr [0x8ba0c0]
// 004eb571  6a01                 push 1
// 004eb573  6a00                 push 0
// 004eb575  8d442420             lea eax, [esp + 0x20]
// 004eb579  50                   push eax
// 004eb57a  8d4c2454             lea ecx, [esp + 0x54]
// 004eb57e  68b8a08b00           push 0x8ba0b8
// 004eb583  51                   push ecx
// 004eb584  e8374d0100           call 0x5002c0
// 004eb589  83c414               add esp, 0x14
// 004eb58c  50                   push eax
// 004eb58d  83c701               add edi, 1
// 004eb590  57                   push edi
// 004eb591  8bcb                 mov ecx, ebx
// 004eb593  e8e8a3f8ff           call 0x475980
// 004eb598  5f                   pop edi
// 004eb599  5e                   pop esi
// 004eb59a  5d                   pop ebp
// 004eb59b  5b                   pop ebx
// 004eb59c  81c488000000         add esp, 0x88
// 004eb5a2  c20800               ret 8
// 004eb5a5  ddda                 fstp st(2)
// 004eb5a7  ddd8                 fstp st(0)
// 004eb5a9  ddd8                 fstp st(0)
// 004eb5ab  5f                   pop edi
// 004eb5ac  5e                   pop esi
// 004eb5ad  5d                   pop ebp
// 004eb5ae  5b                   pop ebx
// 004eb5af  81c488000000         add esp, 0x88
// 004eb5b5  c20800               ret 8
// library rbxgs-render/RenderScene.cpp (function ?turnOnLights@RenderScene@Render@RBX@@ABEXPAVRenderDevice@G3D@@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
