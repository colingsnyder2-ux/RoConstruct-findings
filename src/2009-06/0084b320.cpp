// roc 2009-06 0084b320  unit: G3D::H::PAV?$Array::?$Table  size: 795 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0084b320
//
// 0084b320  83ec18               sub esp, 0x18
// 0084b323  56                   push esi
// 0084b324  6890ae4900           push 0x49ae90
// 0084b329  68e0775600           push 0x5677e0
// 0084b32e  6800800000           push 0x8000
// 0084b333  8bf1                 mov esi, ecx
// 0084b335  6a0c                 push 0xc
// 0084b337  56                   push esi
// 0084b338  e843e9ecff           call 0x719c80
// 0084b33d  dd442430             fld qword ptr [esp + 0x30]
// 0084b341  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084b345  dd9e10000600         fstp qword ptr [esi + 0x60010]
// 0084b34b  d9ee                 fldz 
// 0084b34d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0084b351  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084b355  898600000600         mov dword ptr [esi + 0x60000], eax
// 0084b35b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0084b35f  898e04000600         mov dword ptr [esi + 0x60004], ecx
// 0084b365  899608000600         mov dword ptr [esi + 0x60008], edx
// 0084b36b  89860c000600         mov dword ptr [esi + 0x6000c], eax
// 0084b371  d99618000600         fst dword ptr [esi + 0x60018]
// 0084b377  d9961c000600         fst dword ptr [esi + 0x6001c]
// 0084b37d  d99620000600         fst dword ptr [esi + 0x60020]
// 0084b383  d99624000600         fst dword ptr [esi + 0x60024]
// 0084b389  d99628000600         fst dword ptr [esi + 0x60028]
// 0084b38f  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 0084b395  e8c67cd2ff           call 0x573060
// 0084b39a  d900                 fld dword ptr [eax]
// 0084b39c  d9542404             fst dword ptr [esp + 4]
// 0084b3a0  d94004               fld dword ptr [eax + 4]
// 0084b3a3  d9542408             fst dword ptr [esp + 8]
// 0084b3a7  d94008               fld dword ptr [eax + 8]
// 0084b3aa  8b8600000600         mov eax, dword ptr [esi + 0x60000]
// 0084b3b0  83780400             cmp dword ptr [eax + 4], 0
// 0084b3b4  d954240c             fst dword ptr [esp + 0xc]
// 0084b3b8  d9c2                 fld st(2)
// 0084b3ba  d9e0                 fchs 
// 0084b3bc  d9542410             fst dword ptr [esp + 0x10]
// 0084b3c0  d9c2                 fld st(2)
// 0084b3c2  d9e0                 fchs 
// 0084b3c4  d9542414             fst dword ptr [esp + 0x14]
// 0084b3c8  d9c2                 fld st(2)
// 0084b3ca  d9e0                 fchs 
// 0084b3cc  d9542418             fst dword ptr [esp + 0x18]
// 0084b3d0  0f8eb7000000         jle 0x84b48d
// 0084b3d6  8b10                 mov edx, dword ptr [eax]
// 0084b3d8  53                   push ebx
// 0084b3d9  8b5804               mov ebx, dword ptr [eax + 4]
// 0084b3dc  57                   push edi
// 0084b3dd  8d4a04               lea ecx, [edx + 4]
// 0084b3e0  d94104               fld dword ptr [ecx + 4]
// 0084b3e3  8d7904               lea edi, [ecx + 4]
// 0084b3e6  d8dc                 fcomp st(4)
// 0084b3e8  dfe0                 fnstsw ax
// 0084b3ea  dddb                 fstp st(3)
// 0084b3ec  f6c441               test ah, 0x41
// 0084b3ef  8d442414             lea eax, [esp + 0x14]
// 0084b3f3  7402                 je 0x84b3f7
// 0084b3f5  8bc7                 mov eax, edi
// 0084b3f7  d900                 fld dword ptr [eax]
// 0084b3f9  d901                 fld dword ptr [ecx]
// 0084b3fb  d8dd                 fcomp st(5)
// 0084b3fd  dfe0                 fnstsw ax
// 0084b3ff  dddc                 fstp st(4)
// 0084b401  f6c441               test ah, 0x41
// 0084b404  8d442410             lea eax, [esp + 0x10]
// 0084b408  7402                 je 0x84b40c
// 0084b40a  8bc1                 mov eax, ecx
// 0084b40c  d900                 fld dword ptr [eax]
// 0084b40e  d902                 fld dword ptr [edx]
// 0084b410  d8de                 fcomp st(6)
// 0084b412  dfe0                 fnstsw ax
// 0084b414  dddd                 fstp st(5)
// 0084b416  f6c441               test ah, 0x41
// 0084b419  8d44240c             lea eax, [esp + 0xc]
// 0084b41d  7402                 je 0x84b421
// 0084b41f  8bc2                 mov eax, edx
// 0084b421  d900                 fld dword ptr [eax]
// 0084b423  d954240c             fst dword ptr [esp + 0xc]
// 0084b427  d9cd                 fxch st(5)
// 0084b429  d9542410             fst dword ptr [esp + 0x10]
// 0084b42d  d9cc                 fxch st(4)
// 0084b42f  d9542414             fst dword ptr [esp + 0x14]
// 0084b433  d9cb                 fxch st(3)
// 0084b435  d81f                 fcomp dword ptr [edi]
// 0084b437  dfe0                 fnstsw ax
// 0084b439  f6c441               test ah, 0x41
// 0084b43c  8d442420             lea eax, [esp + 0x20]
// 0084b440  7402                 je 0x84b444
// 0084b442  8bc7                 mov eax, edi
// 0084b444  d900                 fld dword ptr [eax]
// 0084b446  d9c9                 fxch st(1)
// 0084b448  d819                 fcomp dword ptr [ecx]
// 0084b44a  dfe0                 fnstsw ax
// 0084b44c  f6c441               test ah, 0x41
// 0084b44f  8d44241c             lea eax, [esp + 0x1c]
// 0084b453  7402                 je 0x84b457
// 0084b455  8bc1                 mov eax, ecx
// 0084b457  d900                 fld dword ptr [eax]
// 0084b459  d9ca                 fxch st(2)
// 0084b45b  d81a                 fcomp dword ptr [edx]
// 0084b45d  dfe0                 fnstsw ax
// 0084b45f  f6c441               test ah, 0x41
// 0084b462  8d442418             lea eax, [esp + 0x18]
// 0084b466  7402                 je 0x84b46a
// 0084b468  8bc2                 mov eax, edx
// 0084b46a  d900                 fld dword ptr [eax]
// 0084b46c  83c20c               add edx, 0xc
// 0084b46f  d9542418             fst dword ptr [esp + 0x18]
// 0084b473  83c10c               add ecx, 0xc
// 0084b476  83eb01               sub ebx, 1
// 0084b479  d9ca                 fxch st(2)
// 0084b47b  d954241c             fst dword ptr [esp + 0x1c]
// 0084b47f  d9c9                 fxch st(1)
// 0084b481  d9542420             fst dword ptr [esp + 0x20]
// 0084b485  0f8555ffffff         jne 0x84b3e0
// 0084b48b  5f                   pop edi
// 0084b48c  5b                   pop ebx
// 0084b48d  d9cd                 fxch st(5)
// 0084b48f  d99618000600         fst dword ptr [esi + 0x60018]
// 0084b495  d9cc                 fxch st(4)
// 0084b497  d9961c000600         fst dword ptr [esi + 0x6001c]
// 0084b49d  d9cb                 fxch st(3)
// 0084b49f  d99620000600         fst dword ptr [esi + 0x60020]
// 0084b4a5  d9ca                 fxch st(2)
// 0084b4a7  dee4                 fsubrp st(4)
// 0084b4a9  dee2                 fsubrp st(2)
// 0084b4ab  deeb                 fsubp st(3)
// 0084b4ad  d9c9                 fxch st(1)
// 0084b4af  d99e24000600         fstp dword ptr [esi + 0x60024]
// 0084b4b5  d99e28000600         fstp dword ptr [esi + 0x60028]
// 0084b4bb  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 0084b4c1  d98624000600         fld dword ptr [esi + 0x60024]
// 0084b4c7  d9ee                 fldz 
// 0084b4c9  d9c0                 fld st(0)
// 0084b4cb  ddea                 fucomp st(2)
// 0084b4cd  dfe0                 fnstsw ax
// 0084b4cf  dd05b84c9200         fld qword ptr [0x924cb8]
// 0084b4d5  d9e8                 fld1 
// 0084b4d7  f6c444               test ah, 0x44
// 0084b4da  0f8ba8000000         jnp 0x84b588
// 0084b4e0  f605b8c8a30001       test byte ptr [0xa3c8b8], 1
// 0084b4e7  d9cb                 fxch st(3)
// 0084b4e9  d9e1                 fabs 
// 0084b4eb  d9c0                 fld st(0)
// 0084b4ed  d9c9                 fxch st(1)
// 0084b4ef  d8c4                 fadd st(4)
// 0084b4f1  7515                 jne 0x84b508
// 0084b4f3  8b0d44e58900         mov ecx, dword ptr [0x89e544]
// 0084b4f9  830db8c8a30001       or dword ptr [0xa3c8b8], 1
// 0084b500  dd01                 fld qword ptr [ecx]
// 0084b502  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0084b508  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 0084b50e  dde9                 fucomp st(1)
// 0084b510  dfe0                 fnstsw ax
// 0084b512  f6c444               test ah, 0x44
// 0084b515  7a06                 jp 0x84b51d
// 0084b517  ddd8                 fstp st(0)
// 0084b519  d9c1                 fld st(1)
// 0084b51b  eb02                 jmp 0x84b51f
// 0084b51d  d8ca                 fmul st(2)
// 0084b51f  ded9                 fcompp 
// 0084b521  dfe0                 fnstsw ax
// 0084b523  f6c401               test ah, 1
// 0084b526  7462                 je 0x84b58a
// 0084b528  d9e8                 fld1 
// 0084b52a  d9c0                 fld st(0)
// 0084b52c  d8b624000600         fdiv dword ptr [esi + 0x60024]
// 0084b532  d99e24000600         fstp dword ptr [esi + 0x60024]
// 0084b538  d98628000600         fld dword ptr [esi + 0x60028]
// 0084b53e  d9c3                 fld st(3)
// 0084b540  dde9                 fucomp st(1)
// 0084b542  dfe0                 fnstsw ax
// 0084b544  f6c444               test ah, 0x44
// 0084b547  0f8bab000000         jnp 0x84b5f8
// 0084b54d  f605b8c8a30001       test byte ptr [0xa3c8b8], 1
// 0084b554  d9e1                 fabs 
// 0084b556  d9c0                 fld st(0)
// 0084b558  d9c9                 fxch st(1)
// 0084b55a  d8c5                 fadd st(5)
// 0084b55c  7515                 jne 0x84b573
// 0084b55e  8b1544e58900         mov edx, dword ptr [0x89e544]
// 0084b564  830db8c8a30001       or dword ptr [0xa3c8b8], 1
// 0084b56b  dd02                 fld qword ptr [edx]
// 0084b56d  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0084b573  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 0084b579  dde9                 fucomp st(1)
// 0084b57b  dfe0                 fnstsw ax
// 0084b57d  f6c444               test ah, 0x44
// 0084b580  7a12                 jp 0x84b594
// 0084b582  ddd8                 fstp st(0)
// 0084b584  d9c2                 fld st(2)
// 0084b586  eb0e                 jmp 0x84b596
// 0084b588  dddb                 fstp st(3)
// 0084b58a  d9e8                 fld1 
// 0084b58c  d99624000600         fst dword ptr [esi + 0x60024]
// 0084b592  eba4                 jmp 0x84b538
// 0084b594  d8cb                 fmul st(3)
// 0084b596  ded9                 fcompp 
// 0084b598  dfe0                 fnstsw ax
// 0084b59a  f6c401               test ah, 1
// 0084b59d  745b                 je 0x84b5fa
// 0084b59f  d9c0                 fld st(0)
// 0084b5a1  d8b628000600         fdiv dword ptr [esi + 0x60028]
// 0084b5a7  d99e28000600         fstp dword ptr [esi + 0x60028]
// 0084b5ad  d9862c000600         fld dword ptr [esi + 0x6002c]
// 0084b5b3  dde3                 fucom st(3)
// 0084b5b5  dfe0                 fnstsw ax
// 0084b5b7  dddb                 fstp st(3)
// 0084b5b9  f6c444               test ah, 0x44
// 0084b5bc  7b68                 jnp 0x84b626
// 0084b5be  f605b8c8a30001       test byte ptr [0xa3c8b8], 1
// 0084b5c5  d9ca                 fxch st(2)
// 0084b5c7  d9e1                 fabs 
// 0084b5c9  d9c0                 fld st(0)
// 0084b5cb  d9c9                 fxch st(1)
// 0084b5cd  dec4                 faddp st(4)
// 0084b5cf  7514                 jne 0x84b5e5
// 0084b5d1  a144e58900           mov eax, dword ptr [0x89e544]
// 0084b5d6  830db8c8a30001       or dword ptr [0xa3c8b8], 1
// 0084b5dd  dd00                 fld qword ptr [eax]
// 0084b5df  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0084b5e5  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 0084b5eb  ddec                 fucomp st(4)
// 0084b5ed  dfe0                 fnstsw ax
// 0084b5ef  f6c444               test ah, 0x44
// 0084b5f2  7a0e                 jp 0x84b602
// 0084b5f4  dddb                 fstp st(3)
// 0084b5f6  eb0e                 jmp 0x84b606
// 0084b5f8  ddd8                 fstp st(0)
// 0084b5fa  d99628000600         fst dword ptr [esi + 0x60028]
// 0084b600  ebab                 jmp 0x84b5ad
// 0084b602  d9cb                 fxch st(3)
// 0084b604  dec9                 fmulp st(1)
// 0084b606  d8da                 fcomp st(2)
// 0084b608  dfe0                 fnstsw ax
// 0084b60a  ddd9                 fstp st(1)
// 0084b60c  f6c401               test ah, 1
// 0084b60f  7406                 je 0x84b617
// 0084b611  d8b62c000600         fdiv dword ptr [esi + 0x6002c]
// 0084b617  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 0084b61d  8bc6                 mov eax, esi
// 0084b61f  5e                   pop esi
// 0084b620  83c418               add esp, 0x18
// 0084b623  c21800               ret 0x18
// 0084b626  ddda                 fstp st(2)
// 0084b628  8bc6                 mov eax, esi
// 0084b62a  ddda                 fstp st(2)
// 0084b62c  ddd9                 fstp st(1)
// 0084b62e  d99e2c000600         fstp dword ptr [esi + 0x6002c]
// 0084b634  5e                   pop esi
// 0084b635  83c418               add esp, 0x18
// 0084b638  c21800               ret 0x18
// library g3d-6.09-rbx2008/G3Dcpp\MeshAlgWeld.cpp (function ??0Welder@_internal@G3D@@QAE@ABV?$Array@VVector3@G3D@@@2@AAV32@AAV?$Array@H@2@2N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/MeshAlgWeld.cpp
