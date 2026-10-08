// from server: 100% by auto
// roc 2007-08 00510c30  unit: G3D::H::PAV?$Array::?$Table  size: 918 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00510c30
//
// 00510c30  83ec18               sub esp, 0x18
// 00510c33  56                   push esi
// 00510c34  6840c04700           push 0x47c040
// 00510c39  6870df4700           push 0x47df70
// 00510c3e  6800800000           push 0x8000
// 00510c43  8bf1                 mov esi, ecx
// 00510c45  6a0c                 push 0xc
// 00510c47  56                   push esi
// 00510c48  e88fff1100           call 0x630bdc
// 00510c4d  dd442430             fld qword ptr [esp + 0x30]
// 00510c51  8b442420             mov eax, dword ptr [esp + 0x20]
// 00510c55  dd9e10000600         fstp qword ptr [esi + 0x60010]
// 00510c5b  d9ee                 fldz 
// 00510c5d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00510c61  8b542428             mov edx, dword ptr [esp + 0x28]
// 00510c65  898600000600         mov dword ptr [esi + 0x60000], eax
// 00510c6b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00510c6f  898e04000600         mov dword ptr [esi + 0x60004], ecx
// 00510c75  899608000600         mov dword ptr [esi + 0x60008], edx
// 00510c7b  89860c000600         mov dword ptr [esi + 0x6000c], eax
// 00510c81  d99618000600         fst dword ptr [esi + 0x60018]
// 00510c87  d9961c000600         fst dword ptr [esi + 0x6001c]
// 00510c8d  d99620000600         fst dword ptr [esi + 0x60020]
// 00510c93  d99624000600         fst dword ptr [esi + 0x60024]
// 00510c99  d99628000600         fst dword ptr [esi + 0x60028]
// 00510c9f  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 00510ca5  e83633feff           call 0x4f3fe0
// 00510caa  d900                 fld dword ptr [eax]
// 00510cac  d95c2404             fstp dword ptr [esp + 4]
// 00510cb0  d94004               fld dword ptr [eax + 4]
// 00510cb3  d95c2408             fstp dword ptr [esp + 8]
// 00510cb7  d94008               fld dword ptr [eax + 8]
// 00510cba  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 00510cc0  83780400             cmp dword ptr [eax + 4], 0
// 00510cc4  d95c240c             fstp dword ptr [esp + 0xc]
// 00510cc8  d9442404             fld dword ptr [esp + 4]
// 00510ccc  d9c0                 fld st(0)
// 00510cce  d9e0                 fchs 
// 00510cd0  d95c2410             fstp dword ptr [esp + 0x10]
// 00510cd4  d9442408             fld dword ptr [esp + 8]
// 00510cd8  d9c0                 fld st(0)
// 00510cda  d9e0                 fchs 
// 00510cdc  d95c2414             fstp dword ptr [esp + 0x14]
// 00510ce0  d944240c             fld dword ptr [esp + 0xc]
// 00510ce4  d9c0                 fld st(0)
// 00510ce6  d9e0                 fchs 
// 00510ce8  d95c2418             fstp dword ptr [esp + 0x18]
// 00510cec  0f8ee7000000         jle 0x510dd9
// 00510cf2  8b10                 mov edx, dword ptr [eax]
// 00510cf4  53                   push ebx
// 00510cf5  8b5804               mov ebx, dword ptr [eax + 4]
// 00510cf8  57                   push edi
// 00510cf9  8d4a04               lea ecx, [edx + 4]
// 00510cfc  8d642400             lea esp, [esp]
// 00510d00  d94104               fld dword ptr [ecx + 4]
// 00510d03  8d7904               lea edi, [ecx + 4]
// 00510d06  d8d1                 fcom st(1)
// 00510d08  dfe0                 fnstsw ax
// 00510d0a  ddd9                 fstp st(1)
// 00510d0c  f6c441               test ah, 0x41
// 00510d0f  8d442414             lea eax, [esp + 0x14]
// 00510d13  7402                 je 0x510d17
// 00510d15  8bc7                 mov eax, edi
// 00510d17  d900                 fld dword ptr [eax]
// 00510d19  d95c242c             fstp dword ptr [esp + 0x2c]
// 00510d1d  d901                 fld dword ptr [ecx]
// 00510d1f  d8d2                 fcom st(2)
// 00510d21  dfe0                 fnstsw ax
// 00510d23  ddda                 fstp st(2)
// 00510d25  f6c441               test ah, 0x41
// 00510d28  8d442410             lea eax, [esp + 0x10]
// 00510d2c  7402                 je 0x510d30
// 00510d2e  8bc1                 mov eax, ecx
// 00510d30  d900                 fld dword ptr [eax]
// 00510d32  d95c2428             fstp dword ptr [esp + 0x28]
// 00510d36  d902                 fld dword ptr [edx]
// 00510d38  d8d3                 fcom st(3)
// 00510d3a  dfe0                 fnstsw ax
// 00510d3c  dddb                 fstp st(3)
// 00510d3e  f6c441               test ah, 0x41
// 00510d41  8d44240c             lea eax, [esp + 0xc]
// 00510d45  7402                 je 0x510d49
// 00510d47  8bc2                 mov eax, edx
// 00510d49  d900                 fld dword ptr [eax]
// 00510d4b  d95c240c             fstp dword ptr [esp + 0xc]
// 00510d4f  d9442428             fld dword ptr [esp + 0x28]
// 00510d53  d95c2410             fstp dword ptr [esp + 0x10]
// 00510d57  d944242c             fld dword ptr [esp + 0x2c]
// 00510d5b  d95c2414             fstp dword ptr [esp + 0x14]
// 00510d5f  d9442420             fld dword ptr [esp + 0x20]
// 00510d63  ded9                 fcompp 
// 00510d65  dfe0                 fnstsw ax
// 00510d67  f6c441               test ah, 0x41
// 00510d6a  8d442420             lea eax, [esp + 0x20]
// 00510d6e  7402                 je 0x510d72
// 00510d70  8bc7                 mov eax, edi
// 00510d72  d900                 fld dword ptr [eax]
// 00510d74  d95c242c             fstp dword ptr [esp + 0x2c]
// 00510d78  d944241c             fld dword ptr [esp + 0x1c]
// 00510d7c  ded9                 fcompp 
// 00510d7e  dfe0                 fnstsw ax
// 00510d80  f6c441               test ah, 0x41
// 00510d83  8d44241c             lea eax, [esp + 0x1c]
// 00510d87  7402                 je 0x510d8b
// 00510d89  8bc1                 mov eax, ecx
// 00510d8b  d900                 fld dword ptr [eax]
// 00510d8d  d95c2428             fstp dword ptr [esp + 0x28]
// 00510d91  d9442418             fld dword ptr [esp + 0x18]
// 00510d95  ded9                 fcompp 
// 00510d97  dfe0                 fnstsw ax
// 00510d99  f6c441               test ah, 0x41
// 00510d9c  8d442418             lea eax, [esp + 0x18]
// 00510da0  7402                 je 0x510da4
// 00510da2  8bc2                 mov eax, edx
// 00510da4  d900                 fld dword ptr [eax]
// 00510da6  83c20c               add edx, 0xc
// 00510da9  d95c2418             fstp dword ptr [esp + 0x18]
// 00510dad  83c10c               add ecx, 0xc
// 00510db0  83eb01               sub ebx, 1
// 00510db3  d9442428             fld dword ptr [esp + 0x28]
// 00510db7  d95c241c             fstp dword ptr [esp + 0x1c]
// 00510dbb  d944242c             fld dword ptr [esp + 0x2c]
// 00510dbf  d95c2420             fstp dword ptr [esp + 0x20]
// 00510dc3  d9442414             fld dword ptr [esp + 0x14]
// 00510dc7  d9442410             fld dword ptr [esp + 0x10]
// 00510dcb  d944240c             fld dword ptr [esp + 0xc]
// 00510dcf  d9ca                 fxch st(2)
// 00510dd1  0f8529ffffff         jne 0x510d00
// 00510dd7  5f                   pop edi
// 00510dd8  5b                   pop ebx
// 00510dd9  d9ca                 fxch st(2)
// 00510ddb  d99618000600         fst dword ptr [esi + 0x60018]
// 00510de1  d9c9                 fxch st(1)
// 00510de3  d9961c000600         fst dword ptr [esi + 0x6001c]
// 00510de9  d9ca                 fxch st(2)
// 00510deb  d99620000600         fst dword ptr [esi + 0x60020]
// 00510df1  d9442410             fld dword ptr [esp + 0x10]
// 00510df5  dee2                 fsubrp st(2)
// 00510df7  d9c9                 fxch st(1)
// 00510df9  d95c2404             fstp dword ptr [esp + 4]
// 00510dfd  d9442414             fld dword ptr [esp + 0x14]
// 00510e01  dee2                 fsubrp st(2)
// 00510e03  d9c9                 fxch st(1)
// 00510e05  d95c2408             fstp dword ptr [esp + 8]
// 00510e09  d86c2418             fsubr dword ptr [esp + 0x18]
// 00510e0d  d95c240c             fstp dword ptr [esp + 0xc]
// 00510e11  d9442404             fld dword ptr [esp + 4]
// 00510e15  d99e24000600         fstp dword ptr [esi + 0x60024]
// 00510e1b  d9442408             fld dword ptr [esp + 8]
// 00510e1f  d99e28000600         fstp dword ptr [esi + 0x60028]
// 00510e25  d944240c             fld dword ptr [esp + 0xc]
// 00510e29  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 00510e2f  d98624000600         fld dword ptr [esi + 0x60024]
// 00510e35  d9ee                 fldz 
// 00510e37  d9c0                 fld st(0)
// 00510e39  ddea                 fucomp st(2)
// 00510e3b  dfe0                 fnstsw ax
// 00510e3d  d9e8                 fld1 
// 00510e3f  f6c444               test ah, 0x44
// 00510e42  dd05b80e7a00         fld qword ptr [0x7a0eb8]
// 00510e48  d9e8                 fld1 
// 00510e4a  7b5c                 jnp 0x510ea8
// 00510e4c  f60508d18b0001       test byte ptr [0x8bd108], 1
// 00510e53  d9c4                 fld st(4)
// 00510e55  d8e4                 fsub st(4)
// 00510e57  d9e1                 fabs 
// 00510e59  d9cd                 fxch st(5)
// 00510e5b  d9e1                 fabs 
// 00510e5d  d8c1                 fadd st(1)
// 00510e5f  7515                 jne 0x510e76
// 00510e61  8b0d64e57700         mov ecx, dword ptr [0x77e564]
// 00510e67  830d08d18b0001       or dword ptr [0x8bd108], 1
// 00510e6e  dd01                 fld qword ptr [ecx]
// 00510e70  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 00510e76  dd0500d18b00         fld qword ptr [0x8bd100]
// 00510e7c  dde9                 fucomp st(1)
// 00510e7e  dfe0                 fnstsw ax
// 00510e80  f6c444               test ah, 0x44
// 00510e83  7a06                 jp 0x510e8b
// 00510e85  ddd8                 fstp st(0)
// 00510e87  d9c1                 fld st(1)
// 00510e89  eb02                 jmp 0x510e8d
// 00510e8b  d8ca                 fmul st(2)
// 00510e8d  d8dd                 fcomp st(5)
// 00510e8f  dfe0                 fnstsw ax
// 00510e91  dddc                 fstp st(4)
// 00510e93  f6c401               test ah, 1
// 00510e96  7412                 je 0x510eaa
// 00510e98  d98624000600         fld dword ptr [esi + 0x60024]
// 00510e9e  d8fc                 fdivr st(4)
// 00510ea0  d99e24000600         fstp dword ptr [esi + 0x60024]
// 00510ea6  eb0c                 jmp 0x510eb4
// 00510ea8  dddc                 fstp st(4)
// 00510eaa  d9c9                 fxch st(1)
// 00510eac  d99624000600         fst dword ptr [esi + 0x60024]
// 00510eb2  d9c9                 fxch st(1)
// 00510eb4  d98628000600         fld dword ptr [esi + 0x60028]
// 00510eba  d9c3                 fld st(3)
// 00510ebc  dde9                 fucomp st(1)
// 00510ebe  dfe0                 fnstsw ax
// 00510ec0  f6c444               test ah, 0x44
// 00510ec3  7b5a                 jnp 0x510f1f
// 00510ec5  f60508d18b0001       test byte ptr [0x8bd108], 1
// 00510ecc  d9c0                 fld st(0)
// 00510ece  d8e4                 fsub st(4)
// 00510ed0  d9e1                 fabs 
// 00510ed2  d9c9                 fxch st(1)
// 00510ed4  d9e1                 fabs 
// 00510ed6  d8c5                 fadd st(5)
// 00510ed8  7515                 jne 0x510eef
// 00510eda  8b1564e57700         mov edx, dword ptr [0x77e564]
// 00510ee0  830d08d18b0001       or dword ptr [0x8bd108], 1
// 00510ee7  dd02                 fld qword ptr [edx]
// 00510ee9  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 00510eef  dd0500d18b00         fld qword ptr [0x8bd100]
// 00510ef5  dde9                 fucomp st(1)
// 00510ef7  dfe0                 fnstsw ax
// 00510ef9  f6c444               test ah, 0x44
// 00510efc  7a06                 jp 0x510f04
// 00510efe  ddd8                 fstp st(0)
// 00510f00  d9c1                 fld st(1)
// 00510f02  eb02                 jmp 0x510f06
// 00510f04  d8ca                 fmul st(2)
// 00510f06  ded9                 fcompp 
// 00510f08  dfe0                 fnstsw ax
// 00510f0a  f6c401               test ah, 1
// 00510f0d  7412                 je 0x510f21
// 00510f0f  d98628000600         fld dword ptr [esi + 0x60028]
// 00510f15  d8fc                 fdivr st(4)
// 00510f17  d99e28000600         fstp dword ptr [esi + 0x60028]
// 00510f1d  eb0c                 jmp 0x510f2b
// 00510f1f  ddd8                 fstp st(0)
// 00510f21  d9c9                 fxch st(1)
// 00510f23  d99628000600         fst dword ptr [esi + 0x60028]
// 00510f29  d9c9                 fxch st(1)
// 00510f2b  d9862c000600         fld dword ptr [esi + 0x6002c]
// 00510f31  d9c3                 fld st(3)
// 00510f33  dde9                 fucomp st(1)
// 00510f35  dfe0                 fnstsw ax
// 00510f37  f6c444               test ah, 0x44
// 00510f3a  7b5c                 jnp 0x510f98
// 00510f3c  f60508d18b0001       test byte ptr [0x8bd108], 1
// 00510f43  d9c0                 fld st(0)
// 00510f45  dee4                 fsubrp st(4)
// 00510f47  d9cb                 fxch st(3)
// 00510f49  d9e1                 fabs 
// 00510f4b  d9cb                 fxch st(3)
// 00510f4d  d9e1                 fabs 
// 00510f4f  d8c4                 fadd st(4)
// 00510f51  7514                 jne 0x510f67
// 00510f53  a164e57700           mov eax, dword ptr [0x77e564]
// 00510f58  830d08d18b0001       or dword ptr [0x8bd108], 1
// 00510f5f  dd00                 fld qword ptr [eax]
// 00510f61  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 00510f67  dd0500d18b00         fld qword ptr [0x8bd100]
// 00510f6d  dde9                 fucomp st(1)
// 00510f6f  dfe0                 fnstsw ax
// 00510f71  f6c444               test ah, 0x44
// 00510f74  7a04                 jp 0x510f7a
// 00510f76  ddd8                 fstp st(0)
// 00510f78  eb02                 jmp 0x510f7c
// 00510f7a  dec9                 fmulp st(1)
// 00510f7c  d8da                 fcomp st(2)
// 00510f7e  dfe0                 fnstsw ax
// 00510f80  ddd9                 fstp st(1)
// 00510f82  f6c401               test ah, 1
// 00510f85  7528                 jne 0x510faf
// 00510f87  ddd9                 fstp st(1)
// 00510f89  8bc6                 mov eax, esi
// 00510f8b  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 00510f91  5e                   pop esi
// 00510f92  83c418               add esp, 0x18
// 00510f95  c21800               ret 0x18
// 00510f98  ddd8                 fstp st(0)
// 00510f9a  8bc6                 mov eax, esi
// 00510f9c  ddda                 fstp st(2)
// 00510f9e  ddda                 fstp st(2)
// 00510fa0  ddd8                 fstp st(0)
// 00510fa2  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 00510fa8  5e                   pop esi
// 00510fa9  83c418               add esp, 0x18
// 00510fac  c21800               ret 0x18
// 00510faf  ddd8                 fstp st(0)
// 00510fb1  8bc6                 mov eax, esi
// 00510fb3  d8b62c000600         fdiv dword ptr [esi + 0x6002c]
// 00510fb9  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 00510fbf  5e                   pop esi
// 00510fc0  83c418               add esp, 0x18
// 00510fc3  c21800               ret 0x18
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ??0Welder@_internal@G3D@@QAE@ABV?$Array@VVector3@G3D@@@2@AAV32@AAV?$Array@H@2@2N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
