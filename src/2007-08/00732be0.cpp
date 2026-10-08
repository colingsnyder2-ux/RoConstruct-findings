// roc 2007-08 00732be0  unit: seg_00730000  size: 956 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00732be0
//
// 00732be0  83ec54               sub esp, 0x54
// 00732be3  53                   push ebx
// 00732be4  55                   push ebp
// 00732be5  56                   push esi
// 00732be6  57                   push edi
// 00732be7  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00732beb  807f4c00             cmp byte ptr [edi + 0x4c], 0
// 00732bef  8be9                 mov ebp, ecx
// 00732bf1  8d4768               lea eax, [edi + 0x68]
// 00732bf4  7503                 jne 0x732bf9
// 00732bf6  8d4774               lea eax, [edi + 0x74]
// 00732bf9  f6058cd08b0001       test byte ptr [0x8bd08c], 1
// 00732c00  d900                 fld dword ptr [eax]
// 00732c02  d95c241c             fstp dword ptr [esp + 0x1c]
// 00732c06  d94004               fld dword ptr [eax + 4]
// 00732c09  d95c2420             fstp dword ptr [esp + 0x20]
// 00732c0d  d94008               fld dword ptr [eax + 8]
// 00732c10  d95c2424             fstp dword ptr [esp + 0x24]
// 00732c14  d944241c             fld dword ptr [esp + 0x1c]
// 00732c18  d9542444             fst dword ptr [esp + 0x44]
// 00732c1c  d9442420             fld dword ptr [esp + 0x20]
// 00732c20  d9542448             fst dword ptr [esp + 0x48]
// 00732c24  d9442424             fld dword ptr [esp + 0x24]
// 00732c28  d954244c             fst dword ptr [esp + 0x4c]
// 00732c2c  d9ee                 fldz 
// 00732c2e  d9542450             fst dword ptr [esp + 0x50]
// 00732c32  751d                 jne 0x732c51
// 00732c34  830d8cd08b0001       or dword ptr [0x8bd08c], 1
// 00732c3b  d91580d08b00         fst dword ptr [0x8bd080]
// 00732c41  d91d84d08b00         fstp dword ptr [0x8bd084]
// 00732c47  d9e8                 fld1 
// 00732c49  d91d88d08b00         fstp dword ptr [0x8bd088]
// 00732c4f  eb02                 jmp 0x732c53
// 00732c51  ddd8                 fstp st(0)
// 00732c53  d90588d08b00         fld dword ptr [0x8bd088]
// 00732c59  d9c0                 fld st(0)
// 00732c5b  d8cb                 fmul st(3)
// 00732c5d  d9c2                 fld st(2)
// 00732c5f  d90584d08b00         fld dword ptr [0x8bd084]
// 00732c65  d9c0                 fld st(0)
// 00732c67  deca                 fmulp st(2)
// 00732c69  d9ca                 fxch st(2)
// 00732c6b  dee1                 fsubrp st(1)
// 00732c6d  d95c2428             fstp dword ptr [esp + 0x28]
// 00732c71  d90580d08b00         fld dword ptr [0x8bd080]
// 00732c77  d9c0                 fld st(0)
// 00732c79  decc                 fmulp st(4)
// 00732c7b  d9c5                 fld st(5)
// 00732c7d  decb                 fmulp st(3)
// 00732c7f  d9cb                 fxch st(3)
// 00732c81  dee2                 fsubrp st(2)
// 00732c83  d9c9                 fxch st(1)
// 00732c85  d95c242c             fstp dword ptr [esp + 0x2c]
// 00732c89  decb                 fmulp st(3)
// 00732c8b  dec9                 fmulp st(1)
// 00732c8d  dee9                 fsubp st(1)
// 00732c8f  d95c2430             fstp dword ptr [esp + 0x30]
// 00732c93  d944242c             fld dword ptr [esp + 0x2c]
// 00732c97  d9442428             fld dword ptr [esp + 0x28]
// 00732c9b  d9442430             fld dword ptr [esp + 0x30]
// 00732c9f  d9c1                 fld st(1)
// 00732ca1  deca                 fmulp st(2)
// 00732ca3  d9c2                 fld st(2)
// 00732ca5  decb                 fmulp st(3)
// 00732ca7  d9c9                 fxch st(1)
// 00732ca9  dec2                 faddp st(2)
// 00732cab  dcc8                 fmul st(0), st(0)
// 00732cad  dec1                 faddp st(1)
// 00732caf  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732cb3  d944246c             fld dword ptr [esp + 0x6c]
// 00732cb7  e850e1efff           call 0x630e0c
// 00732cbc  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732cc0  d944246c             fld dword ptr [esp + 0x6c]
// 00732cc4  d9e8                 fld1 
// 00732cc6  def1                 fdivrp st(1)
// 00732cc8  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732ccc  d9442428             fld dword ptr [esp + 0x28]
// 00732cd0  d944246c             fld dword ptr [esp + 0x6c]
// 00732cd4  d9c0                 fld st(0)
// 00732cd6  deca                 fmulp st(2)
// 00732cd8  d9c9                 fxch st(1)
// 00732cda  d95c2438             fstp dword ptr [esp + 0x38]
// 00732cde  d944242c             fld dword ptr [esp + 0x2c]
// 00732ce2  d8c9                 fmul st(1)
// 00732ce4  d95c243c             fstp dword ptr [esp + 0x3c]
// 00732ce8  d84c2430             fmul dword ptr [esp + 0x30]
// 00732cec  d95c2440             fstp dword ptr [esp + 0x40]
// 00732cf0  d9442438             fld dword ptr [esp + 0x38]
// 00732cf4  d9542454             fst dword ptr [esp + 0x54]
// 00732cf8  d944243c             fld dword ptr [esp + 0x3c]
// 00732cfc  d9542458             fst dword ptr [esp + 0x58]
// 00732d00  d9442440             fld dword ptr [esp + 0x40]
// 00732d04  d954245c             fst dword ptr [esp + 0x5c]
// 00732d08  d9ee                 fldz 
// 00732d0a  d95c2460             fstp dword ptr [esp + 0x60]
// 00732d0e  d9c0                 fld st(0)
// 00732d10  d9442420             fld dword ptr [esp + 0x20]
// 00732d14  d9c0                 fld st(0)
// 00732d16  deca                 fmulp st(2)
// 00732d18  d9c3                 fld st(3)
// 00732d1a  d9442424             fld dword ptr [esp + 0x24]
// 00732d1e  d9c0                 fld st(0)
// 00732d20  deca                 fmulp st(2)
// 00732d22  d9cb                 fxch st(3)
// 00732d24  dee1                 fsubrp st(1)
// 00732d26  d95c2438             fstp dword ptr [esp + 0x38]
// 00732d2a  d9c4                 fld st(4)
// 00732d2c  deca                 fmulp st(2)
// 00732d2e  d944241c             fld dword ptr [esp + 0x1c]
// 00732d32  d9c0                 fld st(0)
// 00732d34  decc                 fmulp st(4)
// 00732d36  d9ca                 fxch st(2)
// 00732d38  dee3                 fsubrp st(3)
// 00732d3a  d9ca                 fxch st(2)
// 00732d3c  d95c243c             fstp dword ptr [esp + 0x3c]
// 00732d40  deca                 fmulp st(2)
// 00732d42  deca                 fmulp st(2)
// 00732d44  dee1                 fsubrp st(1)
// 00732d46  d95c2440             fstp dword ptr [esp + 0x40]
// 00732d4a  d9442438             fld dword ptr [esp + 0x38]
// 00732d4e  d95c2428             fstp dword ptr [esp + 0x28]
// 00732d52  d944243c             fld dword ptr [esp + 0x3c]
// 00732d56  d95c242c             fstp dword ptr [esp + 0x2c]
// 00732d5a  d9442440             fld dword ptr [esp + 0x40]
// 00732d5e  d95c2430             fstp dword ptr [esp + 0x30]
// 00732d62  d9ee                 fldz 
// 00732d64  d95c2434             fstp dword ptr [esp + 0x34]
// 00732d68  d905688b7e00         fld dword ptr [0x7e8b68]
// 00732d6e  d85f78               fcomp dword ptr [edi + 0x78]
// 00732d71  dfe0                 fnstsw ax
// 00732d73  f6c405               test ah, 5
// 00732d76  0f8a3b010000         jp 0x732eb7
// 00732d7c  d94710               fld dword ptr [edi + 0x10]
// 00732d7f  d9470c               fld dword ptr [edi + 0xc]
// 00732d82  d94714               fld dword ptr [edi + 0x14]
// 00732d85  d9c1                 fld st(1)
// 00732d87  deca                 fmulp st(2)
// 00732d89  d9c2                 fld st(2)
// 00732d8b  decb                 fmulp st(3)
// 00732d8d  d9c9                 fxch st(1)
// 00732d8f  dec2                 faddp st(2)
// 00732d91  dcc8                 fmul st(0), st(0)
// 00732d93  dec1                 faddp st(1)
// 00732d95  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732d99  d944246c             fld dword ptr [esp + 0x6c]
// 00732d9d  e86ae0efff           call 0x630e0c
// 00732da2  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732da6  d944246c             fld dword ptr [esp + 0x6c]
// 00732daa  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00732dae  dcc8                 fmul st(0), st(0)
// 00732db0  8bcb                 mov ecx, ebx
// 00732db2  dc2d608b7e00         fsubr qword ptr [0x7e8b60]
// 00732db8  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732dbc  d944246c             fld dword ptr [esp + 0x6c]
// 00732dc0  d9542410             fst dword ptr [esp + 0x10]
// 00732dc4  dc8b90080000         fmul qword ptr [ebx + 0x890]
// 00732dca  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732dce  e8bd68d4ff           call 0x479690
// 00732dd3  807f4c00             cmp byte ptr [edi + 0x4c], 0
// 00732dd7  8d87b8000000         lea eax, [edi + 0xb8]
// 00732ddd  7506                 jne 0x732de5
// 00732ddf  8d8788000000         lea eax, [edi + 0x88]
// 00732de5  50                   push eax
// 00732de6  8bcb                 mov ecx, ebx
// 00732de8  e8f316d4ff           call 0x4744e0
// 00732ded  6a02                 push 2
// 00732def  6a02                 push 2
// 00732df1  6a00                 push 0
// 00732df3  8bcb                 mov ecx, ebx
// 00732df5  e87613d4ff           call 0x474170
// 00732dfa  6a03                 push 3
// 00732dfc  ff1540eb7700         call dword ptr [0x77eb40]
// 00732e02  8b753c               mov esi, dword ptr [ebp + 0x3c]
// 00732e05  83ee01               sub esi, 1
// 00732e08  0f889a000000         js 0x732ea8
// 00732e0e  8bde                 mov ebx, esi
// 00732e10  c1e304               shl ebx, 4
// 00732e13  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00732e16  d904b0               fld dword ptr [eax + esi*4]
// 00732e19  8d04b0               lea eax, [eax + esi*4]
// 00732e1c  d84c246c             fmul dword ptr [esp + 0x6c]
// 00732e20  51                   push ecx
// 00732e21  d95c241c             fstp dword ptr [esp + 0x1c]
// 00732e25  d900                 fld dword ptr [eax]
// 00732e27  d84c2414             fmul dword ptr [esp + 0x14]
// 00732e2b  d95c2418             fstp dword ptr [esp + 0x18]
// 00732e2f  d9442418             fld dword ptr [esp + 0x18]
// 00732e33  d91c24               fstp dword ptr [esp]
// 00732e36  ff15c4ea7700         call dword ptr [0x77eac4]
// 00732e3c  6a00                 push 0
// 00732e3e  ff157ceb7700         call dword ptr [0x77eb7c]
// 00732e44  d94708               fld dword ptr [edi + 8]
// 00732e47  d9442418             fld dword ptr [esp + 0x18]
// 00732e4b  83ec0c               sub esp, 0xc
// 00732e4e  d9c0                 fld st(0)
// 00732e50  deca                 fmulp st(2)
// 00732e52  d9c9                 fxch st(1)
// 00732e54  d95c2424             fstp dword ptr [esp + 0x24]
// 00732e58  d9442424             fld dword ptr [esp + 0x24]
// 00732e5c  d95c2408             fstp dword ptr [esp + 8]
// 00732e60  d94704               fld dword ptr [edi + 4]
// 00732e63  d8c9                 fmul st(1)
// 00732e65  d95c2424             fstp dword ptr [esp + 0x24]
// 00732e69  d9442424             fld dword ptr [esp + 0x24]
// 00732e6d  d95c2404             fstp dword ptr [esp + 4]
// 00732e71  d80f                 fmul dword ptr [edi]
// 00732e73  d95c2424             fstp dword ptr [esp + 0x24]
// 00732e77  d9442424             fld dword ptr [esp + 0x24]
// 00732e7b  d91c24               fstp dword ptr [esp]
// 00732e7e  ff1570eb7700         call dword ptr [0x77eb70]
// 00732e84  8b4d38               mov ecx, dword ptr [ebp + 0x38]
// 00732e87  03cb                 add ecx, ebx
// 00732e89  51                   push ecx
// 00732e8a  ff15acea7700         call dword ptr [0x77eaac]
// 00732e90  ff1584eb7700         call dword ptr [0x77eb84]
// 00732e96  83ee01               sub esi, 1
// 00732e99  83eb10               sub ebx, 0x10
// 00732e9c  85f6                 test esi, esi
// 00732e9e  0f8d6fffffff         jge 0x732e13
// 00732ea4  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00732ea8  ff158ceb7700         call dword ptr [0x77eb8c]
// 00732eae  8bcb                 mov ecx, ebx
// 00732eb0  e81b68d4ff           call 0x4796d0
// 00732eb5  eb04                 jmp 0x732ebb
// 00732eb7  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00732ebb  51                   push ecx
// 00732ebc  8bc4                 mov eax, esp
// 00732ebe  c70000000000         mov dword ptr [eax], 0
// 00732ec4  8b6d2c               mov ebp, dword ptr [ebp + 0x2c]
// 00732ec7  85ed                 test ebp, ebp
// 00732ec9  8964246c             mov dword ptr [esp + 0x6c], esp
// 00732ecd  740c                 je 0x732edb
// 00732ecf  8928                 mov dword ptr [eax], ebp
// 00732ed1  83c504               add ebp, 4
// 00732ed4  55                   push ebp
// 00732ed5  ff15ecd27700         call dword ptr [0x77d2ec]
// 00732edb  6a00                 push 0
// 00732edd  8bcb                 mov ecx, ebx
// 00732edf  e86c33d4ff           call 0x476250
// 00732ee4  6a02                 push 2
// 00732ee6  6a01                 push 1
// 00732ee8  6a00                 push 0
// 00732eea  8bcb                 mov ecx, ebx
// 00732eec  e87f12d4ff           call 0x474170
// 00732ef1  dd05d8067a00         fld qword ptr [0x7a06d8]
// 00732ef7  83ec08               sub esp, 8
// 00732efa  dd1c24               fstp qword ptr [esp]
// 00732efd  6a02                 push 2
// 00732eff  8bcb                 mov ecx, ebx
// 00732f01  e8ca0dd4ff           call 0x473cd0
// 00732f06  d9442420             fld dword ptr [esp + 0x20]
// 00732f0a  dc0d40f37900         fmul qword ptr [0x79f340]
// 00732f10  d95c2468             fstp dword ptr [esp + 0x68]
// 00732f14  d9ee                 fldz 
// 00732f16  d95c246c             fstp dword ptr [esp + 0x6c]
// 00732f1a  d9442468             fld dword ptr [esp + 0x68]
// 00732f1e  dc1de0fe7800         fcomp qword ptr [0x78fee0]
// 00732f24  dfe0                 fnstsw ax
// 00732f26  f6c441               test ah, 0x41
// 00732f29  8d442468             lea eax, [esp + 0x68]
// 00732f2d  7404                 je 0x732f33
// 00732f2f  8d44246c             lea eax, [esp + 0x6c]
// 00732f33  d900                 fld dword ptr [eax]
// 00732f35  8d4c2468             lea ecx, [esp + 0x68]
// 00732f39  d95c2468             fstp dword ptr [esp + 0x68]
// 00732f3d  d9e8                 fld1 
// 00732f3f  d954246c             fst dword ptr [esp + 0x6c]
// 00732f43  d85c2468             fcomp dword ptr [esp + 0x68]
// 00732f47  dfe0                 fnstsw ax
// 00732f49  f6c441               test ah, 0x41
// 00732f4c  7404                 je 0x732f52
// 00732f4e  8d4c246c             lea ecx, [esp + 0x6c]
// 00732f52  d907                 fld dword ptr [edi]
// 00732f54  83ec10               sub esp, 0x10
// 00732f57  8bc4                 mov eax, esp
// 00732f59  d918                 fstp dword ptr [eax]
// 00732f5b  89642428             mov dword ptr [esp + 0x28], esp
// 00732f5f  d94704               fld dword ptr [edi + 4]
// 00732f62  83ec08               sub esp, 8
// 00732f65  d95804               fstp dword ptr [eax + 4]
// 00732f68  8d54245c             lea edx, [esp + 0x5c]
// 00732f6c  d94708               fld dword ptr [edi + 8]
// 00732f6f  8d742440             lea esi, [esp + 0x40]
// 00732f73  d95808               fstp dword ptr [eax + 8]
// 00732f76  8d7c246c             lea edi, [esp + 0x6c]
// 00732f7a  d901                 fld dword ptr [ecx]
// 00732f7c  d9580c               fstp dword ptr [eax + 0xc]
// 00732f7f  dd05588b7e00         fld qword ptr [0x7e8b58]
// 00732f85  dd1c24               fstp qword ptr [esp]
// 00732f88  52                   push edx
// 00732f89  53                   push ebx
// 00732f8a  e841efffff           call 0x731ed0
// 00732f8f  83c420               add esp, 0x20
// 00732f92  5f                   pop edi
// 00732f93  5e                   pop esi
// 00732f94  5d                   pop ebp
// 00732f95  5b                   pop ebx
// 00732f96  83c454               add esp, 0x54
// 00732f99  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Sky.cpp (function ?drawMoonAndStars@Sky@G3D@@AAEXPAVRenderDevice@2@ABVLightingParameters@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Sky.cpp
