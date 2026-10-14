// roc 2009-06 00577420  unit: G3D::LineSegment  size: 641 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00577420
//
// 00577420  6aff                 push -1
// 00577422  6890078600           push 0x860790
// 00577427  64a100000000         mov eax, dword ptr fs:[0]
// 0057742d  50                   push eax
// 0057742e  64892500000000       mov dword ptr fs:[0], esp
// 00577435  83ec6c               sub esp, 0x6c
// 00577438  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 0057743f  d94108               fld dword ptr [ecx + 8]
// 00577442  d94104               fld dword ptr [ecx + 4]
// 00577445  d901                 fld dword ptr [ecx]
// 00577447  dcc8                 fmul st(0), st(0)
// 00577449  d9c1                 fld st(1)
// 0057744b  deca                 fmulp st(2)
// 0057744d  dec1                 faddp st(1)
// 0057744f  d9c1                 fld st(1)
// 00577451  deca                 fmulp st(2)
// 00577453  dec1                 faddp st(1)
// 00577455  d9fa                 fsqrt 
// 00577457  d9942480000000       fst dword ptr [esp + 0x80]
// 0057745e  d9ee                 fldz 
// 00577460  dde9                 fucomp st(1)
// 00577462  dfe0                 fnstsw ax
// 00577464  f6c444               test ah, 0x44
// 00577467  7a0b                 jp 0x577474
// 00577469  ddd8                 fstp st(0)
// 0057746b  d9e8                 fld1 
// 0057746d  d9942480000000       fst dword ptr [esp + 0x80]
// 00577474  53                   push ebx
// 00577475  56                   push esi
// 00577476  51                   push ecx
// 00577477  8d442420             lea eax, [esp + 0x20]
// 0057747b  d91c24               fstp dword ptr [esp]
// 0057747e  50                   push eax
// 0057747f  e87ce2ffff           call 0x575700
// 00577484  d9ee                 fldz 
// 00577486  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 0057748d  d9542440             fst dword ptr [esp + 0x40]
// 00577491  8d4c241c             lea ecx, [esp + 0x1c]
// 00577495  d9542444             fst dword ptr [esp + 0x44]
// 00577499  51                   push ecx
// 0057749a  d954244c             fst dword ptr [esp + 0x4c]
// 0057749e  8d54245c             lea edx, [esp + 0x5c]
// 005774a2  d9542450             fst dword ptr [esp + 0x50]
// 005774a6  56                   push esi
// 005774a7  d9542458             fst dword ptr [esp + 0x58]
// 005774ab  52                   push edx
// 005774ac  d95c2460             fstp dword ptr [esp + 0x60]
// 005774b0  e8fbf3ffff           call 0x5768b0
// 005774b5  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 005774bc  8d4c244c             lea ecx, [esp + 0x4c]
// 005774c0  51                   push ecx
// 005774c1  8d542418             lea edx, [esp + 0x18]
// 005774c5  52                   push edx
// 005774c6  50                   push eax
// 005774c7  8bc3                 mov eax, ebx
// 005774c9  c784249400000000000000 mov dword ptr [esp + 0x94], 0
// 005774d4  e8b7feffff           call 0x577390
// 005774d9  83c418               add esp, 0x18
// 005774dc  837c240802           cmp dword ptr [esp + 8], 2
// 005774e1  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 005774e9  0f855e010000         jne 0x57764d
// 005774ef  d9442440             fld dword ptr [esp + 0x40]
// 005774f3  57                   push edi
// 005774f4  d826                 fsub dword ptr [esi]
// 005774f6  8bbc2498000000       mov edi, dword ptr [esp + 0x98]
// 005774fd  d9442448             fld dword ptr [esp + 0x48]
// 00577501  d86604               fsub dword ptr [esi + 4]
// 00577504  d944244c             fld dword ptr [esp + 0x4c]
// 00577508  d86608               fsub dword ptr [esi + 8]
// 0057750b  d9c2                 fld st(2)
// 0057750d  decb                 fmulp st(3)
// 0057750f  d9c1                 fld st(1)
// 00577511  deca                 fmulp st(2)
// 00577513  d9ca                 fxch st(2)
// 00577515  dec1                 faddp st(1)
// 00577517  d9c1                 fld st(1)
// 00577519  deca                 fmulp st(2)
// 0057751b  dec1                 faddp st(1)
// 0057751d  d954240c             fst dword ptr [esp + 0xc]
// 00577521  d9442450             fld dword ptr [esp + 0x50]
// 00577525  d826                 fsub dword ptr [esi]
// 00577527  d9442454             fld dword ptr [esp + 0x54]
// 0057752b  d86604               fsub dword ptr [esi + 4]
// 0057752e  d9442458             fld dword ptr [esp + 0x58]
// 00577532  d86608               fsub dword ptr [esi + 8]
// 00577535  d9c2                 fld st(2)
// 00577537  decb                 fmulp st(3)
// 00577539  d9c1                 fld st(1)
// 0057753b  deca                 fmulp st(2)
// 0057753d  d9ca                 fxch st(2)
// 0057753f  dec1                 faddp st(1)
// 00577541  d9c1                 fld st(1)
// 00577543  deca                 fmulp st(2)
// 00577545  dec1                 faddp st(1)
// 00577547  d9542410             fst dword ptr [esp + 0x10]
// 0057754b  81ff942ba400         cmp edi, 0xa42b94
// 00577551  0f8485000000         je 0x5775dc
// 00577557  8d44242c             lea eax, [esp + 0x2c]
// 0057755b  ddd8                 fstp st(0)
// 0057755d  50                   push eax
// 0057755e  ddd8                 fstp st(0)
// 00577560  8bcb                 mov ecx, ebx
// 00577562  e8092c0100           call 0x58a170
// 00577567  50                   push eax
// 00577568  8d4c243c             lea ecx, [esp + 0x3c]
// 0057756c  51                   push ecx
// 0057756d  8bcb                 mov ecx, ebx
// 0057756f  e8dc2b0100           call 0x58a150
// 00577574  50                   push eax
// 00577575  8d542464             lea edx, [esp + 0x64]
// 00577579  52                   push edx
// 0057757a  e871f4ffff           call 0x5769f0
// 0057757f  83c40c               add esp, 0xc
// 00577582  56                   push esi
// 00577583  8d4c2418             lea ecx, [esp + 0x18]
// 00577587  51                   push ecx
// 00577588  8bc8                 mov ecx, eax
// 0057758a  c784248800000001000000 mov dword ptr [esp + 0x88], 1
// 00577595  e8462d0100           call 0x58a2e0
// 0057759a  d906                 fld dword ptr [esi]
// 0057759c  d8642414             fsub dword ptr [esp + 0x14]
// 005775a0  d94604               fld dword ptr [esi + 4]
// 005775a3  d8642418             fsub dword ptr [esp + 0x18]
// 005775a7  d94608               fld dword ptr [esi + 8]
// 005775aa  d864241c             fsub dword ptr [esp + 0x1c]
// 005775ae  d9c0                 fld st(0)
// 005775b0  d8c9                 fmul st(1)
// 005775b2  d9c2                 fld st(2)
// 005775b4  d8cb                 fmul st(3)
// 005775b6  dec1                 faddp st(1)
// 005775b8  d9c3                 fld st(3)
// 005775ba  d8cc                 fmul st(4)
// 005775bc  dec1                 faddp st(1)
// 005775be  d9fa                 fsqrt 
// 005775c0  d9e8                 fld1 
// 005775c2  def1                 fdivrp st(1)
// 005775c4  dccb                 fmul st(3), st(0)
// 005775c6  dcca                 fmul st(2), st(0)
// 005775c8  dec9                 fmulp st(1)
// 005775ca  d9ca                 fxch st(2)
// 005775cc  d91f                 fstp dword ptr [edi]
// 005775ce  d95f04               fstp dword ptr [edi + 4]
// 005775d1  d95f08               fstp dword ptr [edi + 8]
// 005775d4  d944240c             fld dword ptr [esp + 0xc]
// 005775d8  d9442410             fld dword ptr [esp + 0x10]
// 005775dc  d8d1                 fcom st(1)
// 005775de  5f                   pop edi
// 005775df  dfe0                 fnstsw ax
// 005775e1  f6c405               test ah, 5
// 005775e4  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 005775eb  7a30                 jp 0x57761d
// 005775ed  ddd9                 fstp st(1)
// 005775ef  5e                   pop esi
// 005775f0  d9442448             fld dword ptr [esp + 0x48]
// 005775f4  5b                   pop ebx
// 005775f5  d918                 fstp dword ptr [eax]
// 005775f7  d9442448             fld dword ptr [esp + 0x48]
// 005775fb  d95804               fstp dword ptr [eax + 4]
// 005775fe  d944244c             fld dword ptr [esp + 0x4c]
// 00577602  d95808               fstp dword ptr [eax + 8]
// 00577605  d9fa                 fsqrt 
// 00577607  d8b42480000000       fdiv dword ptr [esp + 0x80]
// 0057760e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00577612  64890d00000000       mov dword ptr fs:[0], ecx
// 00577619  83c478               add esp, 0x78
// 0057761c  c3                   ret 
// 0057761d  ddd8                 fstp st(0)
// 0057761f  5e                   pop esi
// 00577620  d944243c             fld dword ptr [esp + 0x3c]
// 00577624  5b                   pop ebx
// 00577625  d918                 fstp dword ptr [eax]
// 00577627  d944243c             fld dword ptr [esp + 0x3c]
// 0057762b  d95804               fstp dword ptr [eax + 4]
// 0057762e  d9442440             fld dword ptr [esp + 0x40]
// 00577632  d95808               fstp dword ptr [eax + 8]
// 00577635  d9fa                 fsqrt 
// 00577637  d8b42480000000       fdiv dword ptr [esp + 0x80]
// 0057763e  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00577642  64890d00000000       mov dword ptr fs:[0], ecx
// 00577649  83c478               add esp, 0x78
// 0057764c  c3                   ret 
// 0057764d  e80ebaffff           call 0x573060
// 00577652  d900                 fld dword ptr [eax]
// 00577654  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0057765b  d919                 fstp dword ptr [ecx]
// 0057765d  d94004               fld dword ptr [eax + 4]
// 00577660  d95904               fstp dword ptr [ecx + 4]
// 00577663  d94008               fld dword ptr [eax + 8]
// 00577666  b801000000           mov eax, 1
// 0057766b  d95908               fstp dword ptr [ecx + 8]
// 0057766e  8405b8c8a300         test byte ptr [0xa3c8b8], al
// 00577674  7514                 jne 0x57768a
// 00577676  8b1544e58900         mov edx, dword ptr [0x89e544]
// 0057767c  0905b8c8a300         or dword ptr [0xa3c8b8], eax
// 00577682  dd02                 fld qword ptr [edx]
// 00577684  dd1db0c8a300         fstp qword ptr [0xa3c8b0]
// 0057768a  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0057768e  dd05b0c8a300         fld qword ptr [0xa3c8b0]
// 00577694  5e                   pop esi
// 00577695  5b                   pop ebx
// 00577696  64890d00000000       mov dword ptr fs:[0], ecx
// 0057769d  83c478               add esp, 0x78
// 005776a0  c3                   ret 
// library g3d-6.09-rbx2008/G3Dcpp\CollisionDetection.cpp (function ?collisionTimeForMovingPointFixedCapsule@CollisionDetection@G3D@@SAMABVVector3@2@0ABVCapsule@2@AAV32@2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/CollisionDetection.cpp
