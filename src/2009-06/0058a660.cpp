// roc 2009-06 0058a660  unit: seg_00580000  size: 435 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058a660
//
// 0058a660  83ec20               sub esp, 0x20
// 0058a663  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058a667  8b5004               mov edx, dword ptr [eax + 4]
// 0058a66a  56                   push esi
// 0058a66b  8bf1                 mov esi, ecx
// 0058a66d  8b08                 mov ecx, dword ptr [eax]
// 0058a66f  d94604               fld dword ptr [esi + 4]
// 0058a672  89542408             mov dword ptr [esp + 8], edx
// 0058a676  d9442408             fld dword ptr [esp + 8]
// 0058a67a  8b500c               mov edx, dword ptr [eax + 0xc]
// 0058a67d  dcc9                 fmul st(1), st(0)
// 0058a67f  d94608               fld dword ptr [esi + 8]
// 0058a682  894c2404             mov dword ptr [esp + 4], ecx
// 0058a686  8b4808               mov ecx, dword ptr [eax + 8]
// 0058a689  894c240c             mov dword ptr [esp + 0xc], ecx
// 0058a68d  d944240c             fld dword ptr [esp + 0xc]
// 0058a691  dcc9                 fmul st(1), st(0)
// 0058a693  89542410             mov dword ptr [esp + 0x10], edx
// 0058a697  d9cb                 fxch st(3)
// 0058a699  dec1                 faddp st(1)
// 0058a69b  d906                 fld dword ptr [esi]
// 0058a69d  d9442404             fld dword ptr [esp + 4]
// 0058a6a1  dcc9                 fmul st(1), st(0)
// 0058a6a3  d9ca                 fxch st(2)
// 0058a6a5  dec1                 faddp st(1)
// 0058a6a7  d9442410             fld dword ptr [esp + 0x10]
// 0058a6ab  d9c0                 fld st(0)
// 0058a6ad  d84e0c               fmul dword ptr [esi + 0xc]
// 0058a6b0  dec2                 faddp st(2)
// 0058a6b2  d9ee                 fldz 
// 0058a6b4  d8da                 fcomp st(2)
// 0058a6b6  dfe0                 fnstsw ax
// 0058a6b8  f6c441               test ah, 0x41
// 0058a6bb  755f                 jne 0x58a71c
// 0058a6bd  ddd9                 fstp st(1)
// 0058a6bf  d9c9                 fxch st(1)
// 0058a6c1  d9e0                 fchs 
// 0058a6c3  d9542414             fst dword ptr [esp + 0x14]
// 0058a6c7  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058a6cb  d9ca                 fxch st(2)
// 0058a6cd  89442404             mov dword ptr [esp + 4], eax
// 0058a6d1  d9e0                 fchs 
// 0058a6d3  d9542418             fst dword ptr [esp + 0x18]
// 0058a6d7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058a6db  d9cb                 fxch st(3)
// 0058a6dd  894c2408             mov dword ptr [esp + 8], ecx
// 0058a6e1  d9e0                 fchs 
// 0058a6e3  d954241c             fst dword ptr [esp + 0x1c]
// 0058a6e7  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0058a6eb  d9c9                 fxch st(1)
// 0058a6ed  8954240c             mov dword ptr [esp + 0xc], edx
// 0058a6f1  d9e0                 fchs 
// 0058a6f3  d9542420             fst dword ptr [esp + 0x20]
// 0058a6f7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058a6fb  d94604               fld dword ptr [esi + 4]
// 0058a6fe  89442410             mov dword ptr [esp + 0x10], eax
// 0058a702  decc                 fmulp st(4)
// 0058a704  d94608               fld dword ptr [esi + 8]
// 0058a707  deca                 fmulp st(2)
// 0058a709  d9cb                 fxch st(3)
// 0058a70b  dec1                 faddp st(1)
// 0058a70d  d906                 fld dword ptr [esi]
// 0058a70f  deca                 fmulp st(2)
// 0058a711  dec1                 faddp st(1)
// 0058a713  d9c9                 fxch st(1)
// 0058a715  d84e0c               fmul dword ptr [esi + 0xc]
// 0058a718  dec1                 faddp st(1)
// 0058a71a  eb08                 jmp 0x58a724
// 0058a71c  dddb                 fstp st(3)
// 0058a71e  dddb                 fstp st(3)
// 0058a720  ddd9                 fstp st(1)
// 0058a722  ddd8                 fstp st(0)
// 0058a724  dc1588cf8b00         fcom qword ptr [0x8bcf88]
// 0058a72a  dfe0                 fnstsw ax
// 0058a72c  f6c441               test ah, 0x41
// 0058a72f  7518                 jne 0x58a749
// 0058a731  d9e8                 fld1 
// 0058a733  d8d9                 fcomp st(1)
// 0058a735  dfe0                 fnstsw ax
// 0058a737  f6c441               test ah, 0x41
// 0058a73a  7507                 jne 0x58a743
// 0058a73c  e81bfd1800           call 0x71a45c
// 0058a741  eb0e                 jmp 0x58a751
// 0058a743  ddd8                 fstp st(0)
// 0058a745  d9ee                 fldz 
// 0058a747  eb08                 jmp 0x58a751
// 0058a749  ddd8                 fstp st(0)
// 0058a74b  dd05d0b88c00         fld qword ptr [0x8cb8d0]
// 0058a751  d9442434             fld dword ptr [esp + 0x34]
// 0058a755  d8d9                 fcomp st(1)
// 0058a757  dfe0                 fnstsw ax
// 0058a759  f6c441               test ah, 0x41
// 0058a75c  0f8a8d000000         jp 0x58a7ef
// 0058a762  d9e8                 fld1 
// 0058a764  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058a768  d9c0                 fld st(0)
// 0058a76a  d9442430             fld dword ptr [esp + 0x30]
// 0058a76e  dce9                 fsub st(1), st(0)
// 0058a770  d9c9                 fxch st(1)
// 0058a772  d8cb                 fmul st(3)
// 0058a774  d9fe                 fsin 
// 0058a776  d9c3                 fld st(3)
// 0058a778  deca                 fmulp st(2)
// 0058a77a  d9c9                 fxch st(1)
// 0058a77c  d9fe                 fsin 
// 0058a77e  d9cb                 fxch st(3)
// 0058a780  d9fe                 fsin 
// 0058a782  d9442404             fld dword ptr [esp + 4]
// 0058a786  d8cc                 fmul st(4)
// 0058a788  d9442408             fld dword ptr [esp + 8]
// 0058a78c  d8cd                 fmul st(5)
// 0058a78e  d944240c             fld dword ptr [esp + 0xc]
// 0058a792  d8ce                 fmul st(6)
// 0058a794  d9442410             fld dword ptr [esp + 0x10]
// 0058a798  decf                 fmulp st(7)
// 0058a79a  d906                 fld dword ptr [esi]
// 0058a79c  d8cd                 fmul st(5)
// 0058a79e  d95c2414             fstp dword ptr [esp + 0x14]
// 0058a7a2  d94604               fld dword ptr [esi + 4]
// 0058a7a5  d8cd                 fmul st(5)
// 0058a7a7  d95c2418             fstp dword ptr [esp + 0x18]
// 0058a7ab  d94608               fld dword ptr [esi + 8]
// 0058a7ae  d8cd                 fmul st(5)
// 0058a7b0  d9cd                 fxch st(5)
// 0058a7b2  d84e0c               fmul dword ptr [esi + 0xc]
// 0058a7b5  5e                   pop esi
// 0058a7b6  d95c241c             fstp dword ptr [esp + 0x1c]
// 0058a7ba  d9442410             fld dword ptr [esp + 0x10]
// 0058a7be  dec3                 faddp st(3)
// 0058a7c0  d9442414             fld dword ptr [esp + 0x14]
// 0058a7c4  dec2                 faddp st(2)
// 0058a7c6  dec4                 faddp st(4)
// 0058a7c8  d944241c             fld dword ptr [esp + 0x1c]
// 0058a7cc  dec6                 faddp st(6)
// 0058a7ce  d9cc                 fxch st(4)
// 0058a7d0  def2                 fdivrp st(2)
// 0058a7d2  d8c9                 fmul st(1)
// 0058a7d4  d918                 fstp dword ptr [eax]
// 0058a7d6  d9c0                 fld st(0)
// 0058a7d8  decb                 fmulp st(3)
// 0058a7da  d9ca                 fxch st(2)
// 0058a7dc  d95804               fstp dword ptr [eax + 4]
// 0058a7df  d8c9                 fmul st(1)
// 0058a7e1  d95808               fstp dword ptr [eax + 8]
// 0058a7e4  dec9                 fmulp st(1)
// 0058a7e6  d9580c               fstp dword ptr [eax + 0xc]
// 0058a7e9  83c420               add esp, 0x20
// 0058a7ec  c21000               ret 0x10
// 0058a7ef  8b542428             mov edx, dword ptr [esp + 0x28]
// 0058a7f3  ddd8                 fstp st(0)
// 0058a7f5  d9442430             fld dword ptr [esp + 0x30]
// 0058a7f9  51                   push ecx
// 0058a7fa  d91c24               fstp dword ptr [esp]
// 0058a7fd  8d4c2408             lea ecx, [esp + 8]
// 0058a801  51                   push ecx
// 0058a802  52                   push edx
// 0058a803  8bce                 mov ecx, esi
// 0058a805  e886fdffff           call 0x58a590
// 0058a80a  8bc2                 mov eax, edx
// 0058a80c  5e                   pop esi
// 0058a80d  83c420               add esp, 0x20
// 0058a810  c21000               ret 0x10
// library g3d-6.09-rbx2008/G3Dcpp\Quat.cpp (function ?slerp@Quat@G3D@@QBE?AV12@ABV12@MM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/Quat.cpp
