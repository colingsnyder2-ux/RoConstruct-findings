// roc 2008-06 005cc2d0  unit: RBX::VCamera::?$FactoryProduct  size: 310 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cc2d0
//
// 005cc2d0  83ec20               sub esp, 0x20
// 005cc2d3  56                   push esi
// 005cc2d4  8bf1                 mov esi, ecx
// 005cc2d6  d986c8010000         fld dword ptr [esi + 0x1c8]
// 005cc2dc  d8a698010000         fsub dword ptr [esi + 0x198]
// 005cc2e2  d986cc010000         fld dword ptr [esi + 0x1cc]
// 005cc2e8  d8a69c010000         fsub dword ptr [esi + 0x19c]
// 005cc2ee  d986d0010000         fld dword ptr [esi + 0x1d0]
// 005cc2f4  d8a6a0010000         fsub dword ptr [esi + 0x1a0]
// 005cc2fa  d9c0                 fld st(0)
// 005cc2fc  d8c9                 fmul st(1)
// 005cc2fe  d9c2                 fld st(2)
// 005cc300  d8cb                 fmul st(3)
// 005cc302  dec1                 faddp st(1)
// 005cc304  d9c3                 fld st(3)
// 005cc306  d8cc                 fmul st(4)
// 005cc308  dec1                 faddp st(1)
// 005cc30a  d9fa                 fsqrt 
// 005cc30c  d905ac9b8100         fld dword ptr [0x819bac]
// 005cc312  d9542404             fst dword ptr [esp + 4]
// 005cc316  d905cc9d8100         fld dword ptr [0x819dcc]
// 005cc31c  d9542408             fst dword ptr [esp + 8]
// 005cc320  d9442428             fld dword ptr [esp + 0x28]
// 005cc324  d8d2                 fcom st(2)
// 005cc326  dfe0                 fnstsw ax
// 005cc328  f6c405               test ah, 5
// 005cc32b  7a22                 jp 0x5cc34f
// 005cc32d  d9c2                 fld st(2)
// 005cc32f  ddec                 fucomp st(4)
// 005cc331  dfe0                 fnstsw ax
// 005cc333  f6c444               test ah, 0x44
// 005cc336  7a17                 jp 0x5cc34f
// 005cc338  ddda                 fstp st(2)
// 005cc33a  32c0                 xor al, al
// 005cc33c  dddd                 fstp st(5)
// 005cc33e  5e                   pop esi
// 005cc33f  dddb                 fstp st(3)
// 005cc341  ddd9                 fstp st(1)
// 005cc343  ddd8                 fstp st(0)
// 005cc345  ddd9                 fstp st(1)
// 005cc347  ddd8                 fstp st(0)
// 005cc349  83c420               add esp, 0x20
// 005cc34c  c20400               ret 4
// 005cc34f  d8d1                 fcom st(1)
// 005cc351  dfe0                 fnstsw ax
// 005cc353  f6c441               test ah, 0x41
// 005cc356  750b                 jne 0x5cc363
// 005cc358  d9c1                 fld st(1)
// 005cc35a  ddec                 fucomp st(4)
// 005cc35c  dfe0                 fnstsw ax
// 005cc35e  f6c444               test ah, 0x44
// 005cc361  7bd5                 jnp 0x5cc338
// 005cc363  d8da                 fcomp st(2)
// 005cc365  dfe0                 fnstsw ax
// 005cc367  ddd9                 fstp st(1)
// 005cc369  f6c441               test ah, 0x41
// 005cc36c  8d442428             lea eax, [esp + 0x28]
// 005cc370  7404                 je 0x5cc376
// 005cc372  8d442404             lea eax, [esp + 4]
// 005cc376  d900                 fld dword ptr [eax]
// 005cc378  d9542428             fst dword ptr [esp + 0x28]
// 005cc37c  ded9                 fcompp 
// 005cc37e  dfe0                 fnstsw ax
// 005cc380  f6c405               test ah, 5
// 005cc383  8d442428             lea eax, [esp + 0x28]
// 005cc387  7b04                 jnp 0x5cc38d
// 005cc389  8d442408             lea eax, [esp + 8]
// 005cc38d  d900                 fld dword ptr [eax]
// 005cc38f  51                   push ecx
// 005cc390  d9c0                 fld st(0)
// 005cc392  8d44241c             lea eax, [esp + 0x1c]
// 005cc396  decd                 fmulp st(5)
// 005cc398  8d4c2410             lea ecx, [esp + 0x10]
// 005cc39c  d9cc                 fxch st(4)
// 005cc39e  d95c2410             fstp dword ptr [esp + 0x10]
// 005cc3a2  d9ca                 fxch st(2)
// 005cc3a4  d8cb                 fmul st(3)
// 005cc3a6  d95c2414             fstp dword ptr [esp + 0x14]
// 005cc3aa  deca                 fmulp st(2)
// 005cc3ac  d9c9                 fxch st(1)
// 005cc3ae  d95c2418             fstp dword ptr [esp + 0x18]
// 005cc3b2  d91c24               fstp dword ptr [esp]
// 005cc3b5  50                   push eax
// 005cc3b6  e885c3f4ff           call 0x518740
// 005cc3bb  d986c8010000         fld dword ptr [esi + 0x1c8]
// 005cc3c1  d820                 fsub dword ptr [eax]
// 005cc3c3  8bce                 mov ecx, esi
// 005cc3c5  d986cc010000         fld dword ptr [esi + 0x1cc]
// 005cc3cb  d86004               fsub dword ptr [eax + 4]
// 005cc3ce  d986d0010000         fld dword ptr [esi + 0x1d0]
// 005cc3d4  d86008               fsub dword ptr [eax + 8]
// 005cc3d7  d9ca                 fxch st(2)
// 005cc3d9  d99e98010000         fstp dword ptr [esi + 0x198]
// 005cc3df  d99e9c010000         fstp dword ptr [esi + 0x19c]
// 005cc3e5  d99ea0010000         fstp dword ptr [esi + 0x1a0]
// 005cc3eb  e860fbffff           call 0x5cbf50
// 005cc3f0  85c0                 test eax, eax
// 005cc3f2  7409                 je 0x5cc3fd
// 005cc3f4  8b10                 mov edx, dword ptr [eax]
// 005cc3f6  8bc8                 mov ecx, eax
// 005cc3f8  8b420c               mov eax, dword ptr [edx + 0xc]
// 005cc3fb  ffd0                 call eax
// 005cc3fd  b001                 mov al, 1
// 005cc3ff  5e                   pop esi
// 005cc400  83c420               add esp, 0x20
// 005cc403  c20400               ret 4
// library rbxgs/roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp (function ?setDistanceFromTarget@Camera@RBX@@QAE_NM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_expanded_native_family_2b7088a7dcd2e755.cpp
