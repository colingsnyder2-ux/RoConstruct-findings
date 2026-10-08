// from server: 100% by auto
// roc 2007-08 0050f420  unit: G3D::TextInput::WrongSymbol  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f420
//
// 0050f420  83ec0c               sub esp, 0xc
// 0050f423  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 0050f428  56                   push esi
// 0050f429  57                   push edi
// 0050f42a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0050f42e  7513                 jne 0x50f443
// 0050f430  d90550fe7900         fld dword ptr [0x79fe50]
// 0050f436  51                   push ecx
// 0050f437  8bcf                 mov ecx, edi
// 0050f439  d91c24               fstp dword ptr [esp]
// 0050f43c  e85fffffff           call 0x50f3a0
// 0050f441  ddd8                 fstp st(0)
// 0050f443  d907                 fld dword ptr [edi]
// 0050f445  d9e1                 fabs 
// 0050f447  d94704               fld dword ptr [edi + 4]
// 0050f44a  d9e1                 fabs 
// 0050f44c  d8d9                 fcomp st(1)
// 0050f44e  dfe0                 fnstsw ax
// 0050f450  f6c441               test ah, 0x41
// 0050f453  7a22                 jp 0x50f477
// 0050f455  d94708               fld dword ptr [edi + 8]
// 0050f458  d9e1                 fabs 
// 0050f45a  ded9                 fcompp 
// 0050f45c  dfe0                 fnstsw ax
// 0050f45e  f6c441               test ah, 0x41
// 0050f461  7a16                 jp 0x50f479
// 0050f463  d94704               fld dword ptr [edi + 4]
// 0050f466  8b742418             mov esi, dword ptr [esp + 0x18]
// 0050f46a  d9e0                 fchs 
// 0050f46c  d91e                 fstp dword ptr [esi]
// 0050f46e  d907                 fld dword ptr [edi]
// 0050f470  d95e04               fstp dword ptr [esi + 4]
// 0050f473  d9ee                 fldz 
// 0050f475  eb15                 jmp 0x50f48c
// 0050f477  ddd8                 fstp st(0)
// 0050f479  d9ee                 fldz 
// 0050f47b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0050f47f  d91e                 fstp dword ptr [esi]
// 0050f481  d94708               fld dword ptr [edi + 8]
// 0050f484  d95e04               fstp dword ptr [esi + 4]
// 0050f487  d94704               fld dword ptr [edi + 4]
// 0050f48a  d9e0                 fchs 
// 0050f48c  d95e08               fstp dword ptr [esi + 8]
// 0050f48f  51                   push ecx
// 0050f490  d90550fe7900         fld dword ptr [0x79fe50]
// 0050f496  8bce                 mov ecx, esi
// 0050f498  d91c24               fstp dword ptr [esp]
// 0050f49b  e800ffffff           call 0x50f3a0
// 0050f4a0  ddd8                 fstp st(0)
// 0050f4a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050f4a6  d94608               fld dword ptr [esi + 8]
// 0050f4a9  d84f04               fmul dword ptr [edi + 4]
// 0050f4ac  d94604               fld dword ptr [esi + 4]
// 0050f4af  d84f08               fmul dword ptr [edi + 8]
// 0050f4b2  dee9                 fsubp st(1)
// 0050f4b4  d95c2408             fstp dword ptr [esp + 8]
// 0050f4b8  d906                 fld dword ptr [esi]
// 0050f4ba  d84f08               fmul dword ptr [edi + 8]
// 0050f4bd  d94608               fld dword ptr [esi + 8]
// 0050f4c0  d80f                 fmul dword ptr [edi]
// 0050f4c2  dee9                 fsubp st(1)
// 0050f4c4  d95c240c             fstp dword ptr [esp + 0xc]
// 0050f4c8  d907                 fld dword ptr [edi]
// 0050f4ca  d84e04               fmul dword ptr [esi + 4]
// 0050f4cd  d94704               fld dword ptr [edi + 4]
// 0050f4d0  5f                   pop edi
// 0050f4d1  d80e                 fmul dword ptr [esi]
// 0050f4d3  5e                   pop esi
// 0050f4d4  dee9                 fsubp st(1)
// 0050f4d6  d95c2408             fstp dword ptr [esp + 8]
// 0050f4da  d90424               fld dword ptr [esp]
// 0050f4dd  d918                 fstp dword ptr [eax]
// 0050f4df  d9442404             fld dword ptr [esp + 4]
// 0050f4e3  d95804               fstp dword ptr [eax + 4]
// 0050f4e6  d9442408             fld dword ptr [esp + 8]
// 0050f4ea  d95808               fstp dword ptr [eax + 8]
// 0050f4ed  83c40c               add esp, 0xc
// 0050f4f0  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?generateOrthonormalBasis@Vector3@G3D@@SAXAAV12@00_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
