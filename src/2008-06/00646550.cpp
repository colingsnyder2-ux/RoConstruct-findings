// roc 2008-06 00646550  unit: RBX::RotatePJoint  size: 835 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00646550
//
// 00646550  6aff                 push -1
// 00646552  68acad7d00           push 0x7dadac
// 00646557  64a100000000         mov eax, dword ptr fs:[0]
// 0064655d  50                   push eax
// 0064655e  64892500000000       mov dword ptr fs:[0], esp
// 00646565  81ecb8000000         sub esp, 0xb8
// 0064656b  8b8424c8000000       mov eax, dword ptr [esp + 0xc8]
// 00646572  53                   push ebx
// 00646573  55                   push ebp
// 00646574  56                   push esi
// 00646575  57                   push edi
// 00646576  50                   push eax
// 00646577  8bf1                 mov esi, ecx
// 00646579  e8f2030000           call 0x646970
// 0064657e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00646581  8bb8a0000000         mov edi, dword ptr [eax + 0xa0]
// 00646587  8b4610               mov eax, dword ptr [esi + 0x10]
// 0064658a  8b98a0000000         mov ebx, dword ptr [eax + 0xa0]
// 00646590  8bcf                 mov ecx, edi
// 00646592  897c2424             mov dword ptr [esp + 0x24], edi
// 00646596  895c2420             mov dword ptr [esp + 0x20], ebx
// 0064659a  e8c12df5ff           call 0x599360
// 0064659f  8d4e28               lea ecx, [esi + 0x28]
// 006465a2  51                   push ecx
// 006465a3  8d54246c             lea edx, [esp + 0x6c]
// 006465a7  52                   push edx
// 006465a8  8d8f94000000         lea ecx, [edi + 0x94]
// 006465ae  e84d01e3ff           call 0x476700
// 006465b3  8bcb                 mov ecx, ebx
// 006465b5  e8a62df5ff           call 0x599360
// 006465ba  8d4658               lea eax, [esi + 0x58]
// 006465bd  50                   push eax
// 006465be  8d8c249c000000       lea ecx, [esp + 0x9c]
// 006465c5  51                   push ecx
// 006465c6  8d8b94000000         lea ecx, [ebx + 0x94]
// 006465cc  e82f01e3ff           call 0x476700
// 006465d1  6a02                 push 2
// 006465d3  8d542460             lea edx, [esp + 0x60]
// 006465d7  52                   push edx
// 006465d8  8d4c2470             lea ecx, [esp + 0x70]
// 006465dc  e85fccecff           call 0x513240
// 006465e1  6a02                 push 2
// 006465e3  8d442454             lea eax, [esp + 0x54]
// 006465e7  50                   push eax
// 006465e8  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 006465ef  e84cccecff           call 0x513240
// 006465f4  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006465fc  eb0a                 jmp 0x646608
// 006465fe  8bff                 mov edi, edi
// 00646600  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00646604  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00646608  837c241000           cmp dword ptr [esp + 0x10], 0
// 0064660d  7508                 jne 0x646617
// 0064660f  d905b8c38100         fld dword ptr [0x81c3b8]
// 00646615  eb02                 jmp 0x646619
// 00646617  d9e8                 fld1 
// 00646619  d944245c             fld dword ptr [esp + 0x5c]
// 0064661d  8d4c2414             lea ecx, [esp + 0x14]
// 00646621  d8c9                 fmul st(1)
// 00646623  51                   push ecx
// 00646624  d9442464             fld dword ptr [esp + 0x64]
// 00646628  57                   push edi
// 00646629  d8ca                 fmul st(2)
// 0064662b  8bce                 mov ecx, esi
// 0064662d  d944246c             fld dword ptr [esp + 0x6c]
// 00646631  d8cb                 fmul st(3)
// 00646633  d9ca                 fxch st(2)
// 00646635  d8842494000000       fadd dword ptr [esp + 0x94]
// 0064663c  d9842498000000       fld dword ptr [esp + 0x98]
// 00646643  dec2                 faddp st(2)
// 00646645  d984249c000000       fld dword ptr [esp + 0x9c]
// 0064664c  dec3                 faddp st(3)
// 0064664e  d95c241c             fstp dword ptr [esp + 0x1c]
// 00646652  d95c2420             fstp dword ptr [esp + 0x20]
// 00646656  d95c2424             fstp dword ptr [esp + 0x24]
// 0064665a  d9442458             fld dword ptr [esp + 0x58]
// 0064665e  d8c9                 fmul st(1)
// 00646660  d944245c             fld dword ptr [esp + 0x5c]
// 00646664  d8ca                 fmul st(2)
// 00646666  d9442460             fld dword ptr [esp + 0x60]
// 0064666a  decb                 fmulp st(3)
// 0064666c  d9c9                 fxch st(1)
// 0064666e  d88424c4000000       fadd dword ptr [esp + 0xc4]
// 00646675  d98424c8000000       fld dword ptr [esp + 0xc8]
// 0064667c  dec2                 faddp st(2)
// 0064667e  d98424cc000000       fld dword ptr [esp + 0xcc]
// 00646685  dec3                 faddp st(3)
// 00646687  d95c2440             fstp dword ptr [esp + 0x40]
// 0064668b  d95c2444             fstp dword ptr [esp + 0x44]
// 0064668f  d95c2448             fstp dword ptr [esp + 0x48]
// 00646693  e8b8f1ffff           call 0x645850
// 00646698  8bc8                 mov ecx, eax
// 0064669a  e8c14bfbff           call 0x5fb260
// 0064669f  8d542438             lea edx, [esp + 0x38]
// 006466a3  52                   push edx
// 006466a4  53                   push ebx
// 006466a5  8bce                 mov ecx, esi
// 006466a7  8be8                 mov ebp, eax
// 006466a9  e8a2f1ffff           call 0x645850
// 006466ae  8bc8                 mov ecx, eax
// 006466b0  e8ab4bfbff           call 0x5fb260
// 006466b5  6a1c                 push 0x1c
// 006466b7  8bd8                 mov ebx, eax
// 006466b9  e862a20500           call 0x6a0920
// 006466be  8bf8                 mov edi, eax
// 006466c0  83c404               add esp, 4
// 006466c3  897c2428             mov dword ptr [esp + 0x28], edi
// 006466c7  c78424d000000000000000 mov dword ptr [esp + 0xd0], 0
// 006466d2  85ff                 test edi, edi
// 006466d4  744b                 je 0x646721
// 006466d6  f60594b8970001       test byte ptr [0x97b894], 1
// 006466dd  7514                 jne 0x6466f3
// 006466df  a10c258000           mov eax, dword ptr [0x80250c]
// 006466e4  830d94b8970001       or dword ptr [0x97b894], 1
// 006466eb  d900                 fld dword ptr [eax]
// 006466ed  d91d90b89700         fstp dword ptr [0x97b890]
// 006466f3  8bce                 mov ecx, esi
// 006466f5  e8f6030000           call 0x646af0
// 006466fa  d90590b89700         fld dword ptr [0x97b890]
// 00646700  c74704ffffffff       mov dword ptr [edi + 4], 0xffffffff
// 00646707  d9c9                 fxch st(1)
// 00646709  d95f10               fstp dword ptr [edi + 0x10]
// 0064670c  c707a8ad8400         mov dword ptr [edi], 0x84ada8
// 00646712  896f08               mov dword ptr [edi + 8], ebp
// 00646715  d95f14               fstp dword ptr [edi + 0x14]
// 00646718  895f0c               mov dword ptr [edi + 0xc], ebx
// 0064671b  c6471800             mov byte ptr [edi + 0x18], 0
// 0064671f  eb02                 jmp 0x646723
// 00646721  33ff                 xor edi, edi
// 00646723  57                   push edi
// 00646724  53                   push ebx
// 00646725  55                   push ebp
// 00646726  8bce                 mov ecx, esi
// 00646728  c78424dc000000ffffffff mov dword ptr [esp + 0xdc], 0xffffffff
// 00646733  e848020000           call 0x646980
// 00646738  8b442410             mov eax, dword ptr [esp + 0x10]
// 0064673c  40                   inc eax
// 0064673d  83f802               cmp eax, 2
// 00646740  89442410             mov dword ptr [esp + 0x10], eax
// 00646744  0f8cb6feffff         jl 0x646600
// 0064674a  8b16                 mov edx, dword ptr [esi]
// 0064674c  8b4214               mov eax, dword ptr [edx + 0x14]
// 0064674f  8bce                 mov ecx, esi
// 00646751  ffd0                 call eax
// 00646753  83f802               cmp eax, 2
// 00646756  7412                 je 0x64676a
// 00646758  8b16                 mov edx, dword ptr [esi]
// 0064675a  8b4214               mov eax, dword ptr [edx + 0x14]
// 0064675d  8bce                 mov ecx, esi
// 0064675f  ffd0                 call eax
// 00646761  83f803               cmp eax, 3
// 00646764  0f850e010000         jne 0x646878
// 0064676a  d984248c000000       fld dword ptr [esp + 0x8c]
// 00646771  6a00                 push 0
// 00646773  d95c2418             fstp dword ptr [esp + 0x18]
// 00646777  8d4c2448             lea ecx, [esp + 0x48]
// 0064677b  d9842494000000       fld dword ptr [esp + 0x94]
// 00646782  51                   push ecx
// 00646783  d95c2420             fstp dword ptr [esp + 0x20]
// 00646787  8d4c2470             lea ecx, [esp + 0x70]
// 0064678b  d984249c000000       fld dword ptr [esp + 0x9c]
// 00646792  d95c2424             fstp dword ptr [esp + 0x24]
// 00646796  e8a5caecff           call 0x513240
// 0064679b  d9442444             fld dword ptr [esp + 0x44]
// 0064679f  8b442424             mov eax, dword ptr [esp + 0x24]
// 006467a3  d90590748200         fld dword ptr [0x827490]
// 006467a9  8d54242c             lea edx, [esp + 0x2c]
// 006467ad  dcc9                 fmul st(1), st(0)
// 006467af  52                   push edx
// 006467b0  d944244c             fld dword ptr [esp + 0x4c]
// 006467b4  50                   push eax
// 006467b5  8bce                 mov ecx, esi
// 006467b7  d8c9                 fmul st(1)
// 006467b9  d9442454             fld dword ptr [esp + 0x54]
// 006467bd  deca                 fmulp st(2)
// 006467bf  d9ca                 fxch st(2)
// 006467c1  d844241c             fadd dword ptr [esp + 0x1c]
// 006467c5  d9442420             fld dword ptr [esp + 0x20]
// 006467c9  dec3                 faddp st(3)
// 006467cb  d9442424             fld dword ptr [esp + 0x24]
// 006467cf  dec2                 faddp st(2)
// 006467d1  d95c2434             fstp dword ptr [esp + 0x34]
// 006467d5  d9c9                 fxch st(1)
// 006467d7  d95c2438             fstp dword ptr [esp + 0x38]
// 006467db  d95c243c             fstp dword ptr [esp + 0x3c]
// 006467df  e86cf0ffff           call 0x645850
// 006467e4  8bc8                 mov ecx, eax
// 006467e6  e8754afbff           call 0x5fb260
// 006467eb  8b542420             mov edx, dword ptr [esp + 0x20]
// 006467ef  8d4c242c             lea ecx, [esp + 0x2c]
// 006467f3  51                   push ecx
// 006467f4  52                   push edx
// 006467f5  8bce                 mov ecx, esi
// 006467f7  8bd8                 mov ebx, eax
// 006467f9  e852f0ffff           call 0x645850
// 006467fe  8bc8                 mov ecx, eax
// 00646800  e85b4afbff           call 0x5fb260
// 00646805  6a34                 push 0x34
// 00646807  8be8                 mov ebp, eax
// 00646809  e812a10500           call 0x6a0920
// 0064680e  8bf8                 mov edi, eax
// 00646810  83c404               add esp, 4
// 00646813  897c2428             mov dword ptr [esp + 0x28], edi
// 00646817  c78424d000000001000000 mov dword ptr [esp + 0xd0], 1
// 00646822  85ff                 test edi, edi
// 00646824  7435                 je 0x64685b
// 00646826  8bce                 mov ecx, esi
// 00646828  e833fcffff           call 0x646460
// 0064682d  51                   push ecx
// 0064682e  8bce                 mov ecx, esi
// 00646830  d91c24               fstp dword ptr [esp]
// 00646833  e8b8020000           call 0x646af0
// 00646838  51                   push ecx
// 00646839  d91c24               fstp dword ptr [esp]
// 0064683c  55                   push ebp
// 0064683d  53                   push ebx
// 0064683e  6a02                 push 2
// 00646840  8bce                 mov ecx, esi
// 00646842  e889010000           call 0x6469d0
// 00646847  50                   push eax
// 00646848  6a00                 push 0
// 0064684a  8bce                 mov ecx, esi
// 0064684c  e87f010000           call 0x6469d0
// 00646851  50                   push eax
// 00646852  8bcf                 mov ecx, edi
// 00646854  e817f9fbff           call 0x606170
// 00646859  eb02                 jmp 0x64685d
// 0064685b  33c0                 xor eax, eax
// 0064685d  50                   push eax
// 0064685e  55                   push ebp
// 0064685f  53                   push ebx
// 00646860  8bce                 mov ecx, esi
// 00646862  c78424dc000000ffffffff mov dword ptr [esp + 0xdc], 0xffffffff
// 0064686d  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 00646873  e808010000           call 0x646980
// 00646878  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 0064687f  5f                   pop edi
// 00646880  5e                   pop esi
// 00646881  5d                   pop ebp
// 00646882  5b                   pop ebx
// 00646883  64890d00000000       mov dword ptr fs:[0], ecx
// 0064688a  81c4c4000000         add esp, 0xc4
// 00646890  c20400               ret 4
// library rbxgs/roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp (function ?putInKernel@RotateJoint@RBX@@EAEXPAVKernel@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs roc_camera_flight_default_0_5e0bfcd6c544f87f.cpp
