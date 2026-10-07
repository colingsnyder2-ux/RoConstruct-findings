// roc 2007-08 00510fd0  unit: G3D::H::PAV?$Array::?$Table  size: 1089 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00510fd0
//
// 00510fd0  55                   push ebp
// 00510fd1  8bec                 mov ebp, esp
// 00510fd3  83e4f8               and esp, 0xfffffff8
// 00510fd6  6aff                 push -1
// 00510fd8  68b8017500           push 0x7501b8
// 00510fdd  64a100000000         mov eax, dword ptr fs:[0]
// 00510fe3  50                   push eax
// 00510fe4  81ec80000000         sub esp, 0x80
// 00510fea  53                   push ebx
// 00510feb  56                   push esi
// 00510fec  57                   push edi
// 00510fed  a188518b00           mov eax, dword ptr [0x8b5188]
// 00510ff2  33c4                 xor eax, esp
// 00510ff4  50                   push eax
// 00510ff5  8d842490000000       lea eax, [esp + 0x90]
// 00510ffc  64a300000000         mov dword ptr fs:[0], eax
// 00511002  8bf9                 mov edi, ecx
// 00511004  f60508d18b0001       test byte ptr [0x8bd108], 1
// 0051100b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00511013  7514                 jne 0x511029
// 00511015  a164e57700           mov eax, dword ptr [0x77e564]
// 0051101a  830d08d18b0001       or dword ptr [0x8bd108], 1
// 00511021  dd00                 fld qword ptr [eax]
// 00511023  dd1d00d18b00         fstp qword ptr [0x8bd100]
// 00511029  dd0500d18b00         fld qword ptr [0x8bd100]
// 0051102f  8b7508               mov esi, dword ptr [ebp + 8]
// 00511032  8d4c2414             lea ecx, [esp + 0x14]
// 00511036  dd5c243c             fstp qword ptr [esp + 0x3c]
// 0051103a  d906                 fld dword ptr [esi]
// 0051103c  51                   push ecx
// 0051103d  8d54241c             lea edx, [esp + 0x1c]
// 00511041  52                   push edx
// 00511042  8d442428             lea eax, [esp + 0x28]
// 00511046  50                   push eax
// 00511047  83ec0c               sub esp, 0xc
// 0051104a  8bc4                 mov eax, esp
// 0051104c  d918                 fstp dword ptr [eax]
// 0051104e  8bcf                 mov ecx, edi
// 00511050  d94604               fld dword ptr [esi + 4]
// 00511053  89642450             mov dword ptr [esp + 0x50], esp
// 00511057  d95804               fstp dword ptr [eax + 4]
// 0051105a  d94608               fld dword ptr [esi + 8]
// 0051105d  d95808               fstp dword ptr [eax + 8]
// 00511060  e8bbf8ffff           call 0x510920
// 00511065  8b442420             mov eax, dword ptr [esp + 0x20]
// 00511069  dd44243c             fld qword ptr [esp + 0x3c]
// 0051106d  c1e005               shl eax, 5
// 00511070  03442418             add eax, dword ptr [esp + 0x18]
// 00511074  33db                 xor ebx, ebx
// 00511076  c1e005               shl eax, 5
// 00511079  03442414             add eax, dword ptr [esp + 0x14]
// 0051107d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00511081  8d0c40               lea ecx, [eax + eax*2]
// 00511084  8d048f               lea eax, [edi + ecx*4]
// 00511087  8b4804               mov ecx, dword ptr [eax + 4]
// 0051108a  3bcb                 cmp ecx, ebx
// 0051108c  894c2428             mov dword ptr [esp + 0x28], ecx
// 00511090  7e7c                 jle 0x51110e
// 00511092  8b8f04000600         mov ecx, dword ptr [edi + 0x60004]
// 00511098  8b19                 mov ebx, dword ptr [ecx]
// 0051109a  8b10                 mov edx, dword ptr [eax]
// 0051109c  8b0a                 mov ecx, dword ptr [edx]
// 0051109e  8d0449               lea eax, [ecx + ecx*2]
// 005110a1  d90483               fld dword ptr [ebx + eax*4]
// 005110a4  8d0483               lea eax, [ebx + eax*4]
// 005110a7  d826                 fsub dword ptr [esi]
// 005110a9  d95c2414             fstp dword ptr [esp + 0x14]
// 005110ad  d94004               fld dword ptr [eax + 4]
// 005110b0  d86604               fsub dword ptr [esi + 4]
// 005110b3  d95c2418             fstp dword ptr [esp + 0x18]
// 005110b7  d94008               fld dword ptr [eax + 8]
// 005110ba  d86608               fsub dword ptr [esi + 8]
// 005110bd  d95c2424             fstp dword ptr [esp + 0x24]
// 005110c1  d9442418             fld dword ptr [esp + 0x18]
// 005110c5  d9442414             fld dword ptr [esp + 0x14]
// 005110c9  d9442424             fld dword ptr [esp + 0x24]
// 005110cd  d9c1                 fld st(1)
// 005110cf  deca                 fmulp st(2)
// 005110d1  d9c2                 fld st(2)
// 005110d3  decb                 fmulp st(3)
// 005110d5  d9c9                 fxch st(1)
// 005110d7  dec2                 faddp st(2)
// 005110d9  dcc8                 fmul st(0), st(0)
// 005110db  dec1                 faddp st(1)
// 005110dd  d95c2424             fstp dword ptr [esp + 0x24]
// 005110e1  d9442424             fld dword ptr [esp + 0x24]
// 005110e5  d8d1                 fcom st(1)
// 005110e7  dfe0                 fnstsw ax
// 005110e9  f6c405               test ah, 5
// 005110ec  7a08                 jp 0x5110f6
// 005110ee  ddd9                 fstp st(1)
// 005110f0  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005110f4  eb02                 jmp 0x5110f8
// 005110f6  ddd8                 fstp st(0)
// 005110f8  8b442420             mov eax, dword ptr [esp + 0x20]
// 005110fc  83c001               add eax, 1
// 005110ff  83c204               add edx, 4
// 00511102  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00511106  89442420             mov dword ptr [esp + 0x20], eax
// 0051110a  7c90                 jl 0x51109c
// 0051110c  33db                 xor ebx, ebx
// 0051110e  dd8710000600         fld qword ptr [edi + 0x60010]
// 00511114  dcc8                 fmul st(0), st(0)
// 00511116  ded9                 fcompp 
// 00511118  dfe0                 fnstsw ax
// 0051111a  f6c401               test ah, 1
// 0051111d  751c                 jne 0x51113b
// 0051111f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00511123  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0051112a  64890d00000000       mov dword ptr fs:[0], ecx
// 00511131  59                   pop ecx
// 00511132  5f                   pop edi
// 00511133  5e                   pop esi
// 00511134  5b                   pop ebx
// 00511135  8be5                 mov esp, ebp
// 00511137  5d                   pop ebp
// 00511138  c20400               ret 4
// 0051113b  8b8f04000600         mov ecx, dword ptr [edi + 0x60004]
// 00511141  8b5104               mov edx, dword ptr [ecx + 4]
// 00511144  56                   push esi
// 00511145  89542418             mov dword ptr [esp + 0x18], edx
// 00511149  e8d237feff           call 0x4f4920
// 0051114e  6a10                 push 0x10
// 00511150  6a28                 push 0x28
// 00511152  c7442450d40e7a00     mov dword ptr [esp + 0x50], 0x7a0ed4
// 0051115a  c7442454cc0e7a00     mov dword ptr [esp + 0x54], 0x7a0ecc
// 00511162  c74424600a000000     mov dword ptr [esp + 0x60], 0xa
// 0051116a  895c2458             mov dword ptr [esp + 0x58], ebx
// 0051116e  e8edeefeff           call 0x500060
// 00511173  6a28                 push 0x28
// 00511175  53                   push ebx
// 00511176  50                   push eax
// 00511177  89442468             mov dword ptr [esp + 0x68], eax
// 0051117b  e800f4feff           call 0x500580
// 00511180  83c414               add esp, 0x14
// 00511183  d9056c647900         fld dword ptr [0x79646c]
// 00511189  d95c2420             fstp dword ptr [esp + 0x20]
// 0051118d  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 00511194  c644241301           mov byte ptr [esp + 0x13], 1
// 00511199  d9056c647900         fld dword ptr [0x79646c]
// 0051119f  d95c241c             fstp dword ptr [esp + 0x1c]
// 005111a3  d9056c647900         fld dword ptr [0x79646c]
// 005111a9  d95c2418             fstp dword ptr [esp + 0x18]
// 005111ad  d9442418             fld dword ptr [esp + 0x18]
// 005111b1  eb21                 jmp 0x5111d4
// 005111b3  ddd9                 fstp st(1)
// 005111b5  ddd8                 fstp st(0)
// 005111b7  d9056c647900         fld dword ptr [0x79646c]
// 005111bd  d95c2418             fstp dword ptr [esp + 0x18]
// 005111c1  d9442418             fld dword ptr [esp + 0x18]
// 005111c5  eb0d                 jmp 0x5111d4
// 005111c7  eb07                 jmp 0x5111d0
// 005111c9  8da42400000000       lea esp, [esp]
// 005111d0  ddda                 fstp st(2)
// 005111d2  ddd8                 fstp st(0)
// 005111d4  dd8710000600         fld qword ptr [edi + 0x60010]
// 005111da  8d442438             lea eax, [esp + 0x38]
// 005111de  d95c2428             fstp dword ptr [esp + 0x28]
// 005111e2  50                   push eax
// 005111e3  d944242c             fld dword ptr [esp + 0x2c]
// 005111e7  8d4c2438             lea ecx, [esp + 0x38]
// 005111eb  d9c0                 fld st(0)
// 005111ed  51                   push ecx
// 005111ee  d84c2428             fmul dword ptr [esp + 0x28]
// 005111f2  8d542438             lea edx, [esp + 0x38]
// 005111f6  52                   push edx
// 005111f7  83ec0c               sub esp, 0xc
// 005111fa  d95c2440             fstp dword ptr [esp + 0x40]
// 005111fe  8bc4                 mov eax, esp
// 00511200  8bcf                 mov ecx, edi
// 00511202  d9c0                 fld st(0)
// 00511204  89642454             mov dword ptr [esp + 0x54], esp
// 00511208  d84c2434             fmul dword ptr [esp + 0x34]
// 0051120c  d95c243c             fstp dword ptr [esp + 0x3c]
// 00511210  dec9                 fmulp st(1)
// 00511212  d95c2444             fstp dword ptr [esp + 0x44]
// 00511216  d906                 fld dword ptr [esi]
// 00511218  d8442440             fadd dword ptr [esp + 0x40]
// 0051121c  d95c2440             fstp dword ptr [esp + 0x40]
// 00511220  d944243c             fld dword ptr [esp + 0x3c]
// 00511224  d84604               fadd dword ptr [esi + 4]
// 00511227  d95c243c             fstp dword ptr [esp + 0x3c]
// 0051122b  d94608               fld dword ptr [esi + 8]
// 0051122e  d8442444             fadd dword ptr [esp + 0x44]
// 00511232  d95c2444             fstp dword ptr [esp + 0x44]
// 00511236  d9442440             fld dword ptr [esp + 0x40]
// 0051123a  d918                 fstp dword ptr [eax]
// 0051123c  d944243c             fld dword ptr [esp + 0x3c]
// 00511240  d95804               fstp dword ptr [eax + 4]
// 00511243  d9442444             fld dword ptr [esp + 0x44]
// 00511247  d95808               fstp dword ptr [eax + 8]
// 0051124a  e8d1f6ffff           call 0x510920
// 0051124f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00511253  c1e005               shl eax, 5
// 00511256  03442434             add eax, dword ptr [esp + 0x34]
// 0051125a  8d542413             lea edx, [esp + 0x13]
// 0051125e  c1e005               shl eax, 5
// 00511261  03442438             add eax, dword ptr [esp + 0x38]
// 00511265  52                   push edx
// 00511266  8d0440               lea eax, [eax + eax*2]
// 00511269  8d0c87               lea ecx, [edi + eax*4]
// 0051126c  8d442430             lea eax, [esp + 0x30]
// 00511270  894c2430             mov dword ptr [esp + 0x30], ecx
// 00511274  50                   push eax
// 00511275  8d4c2454             lea ecx, [esp + 0x54]
// 00511279  e832f8ffff           call 0x510ab0
// 0051127e  d9442418             fld dword ptr [esp + 0x18]
// 00511282  d9e8                 fld1 
// 00511284  dcc1                 fadd st(1), st(0)
// 00511286  d9c9                 fxch st(1)
// 00511288  d95c2418             fstp dword ptr [esp + 0x18]
// 0051128c  d9e8                 fld1 
// 0051128e  d9442418             fld dword ptr [esp + 0x18]
// 00511292  d8d1                 fcom st(1)
// 00511294  dfe0                 fnstsw ax
// 00511296  f6c441               test ah, 0x41
// 00511299  0f8b31ffffff         jnp 0x5111d0
// 0051129f  ddd8                 fstp st(0)
// 005112a1  d944241c             fld dword ptr [esp + 0x1c]
// 005112a5  d8c2                 fadd st(2)
// 005112a7  d95c241c             fstp dword ptr [esp + 0x1c]
// 005112ab  d854241c             fcom dword ptr [esp + 0x1c]
// 005112af  dfe0                 fnstsw ax
// 005112b1  f6c401               test ah, 1
// 005112b4  0f84f9feffff         je 0x5111b3
// 005112ba  d9442420             fld dword ptr [esp + 0x20]
// 005112be  dec2                 faddp st(2)
// 005112c0  d9c9                 fxch st(1)
// 005112c2  d95c2420             fstp dword ptr [esp + 0x20]
// 005112c6  d85c2420             fcomp dword ptr [esp + 0x20]
// 005112ca  dfe0                 fnstsw ax
// 005112cc  f6c401               test ah, 1
// 005112cf  0f84c4feffff         je 0x511199
// 005112d5  8b542458             mov edx, dword ptr [esp + 0x58]
// 005112d9  3bd3                 cmp edx, ebx
// 005112db  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005112df  8d74244c             lea esi, [esp + 0x4c]
// 005112e3  755e                 jne 0x511343
// 005112e5  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 005112e9  8b442474             mov eax, dword ptr [esp + 0x74]
// 005112ed  c684248800000001     mov byte ptr [esp + 0x88], 1
// 005112f5  894c246c             mov dword ptr [esp + 0x6c], ecx
// 005112f9  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00511300  8bd8                 mov ebx, eax
// 00511302  89742464             mov dword ptr [esp + 0x64], esi
// 00511306  89542468             mov dword ptr [esp + 0x68], edx
// 0051130a  894c2470             mov dword ptr [esp + 0x70], ecx
// 0051130e  807c247001           cmp byte ptr [esp + 0x70], 1
// 00511313  750e                 jne 0x511323
// 00511315  8d54244c             lea edx, [esp + 0x4c]
// 00511319  3b542464             cmp edx, dword ptr [esp + 0x64]
// 0051131d  0f84ae000000         je 0x5113d1
// 00511323  8b7704               mov esi, dword ptr [edi + 4]
// 00511326  8b4604               mov eax, dword ptr [esi + 4]
// 00511329  3b4608               cmp eax, dword ptr [esi + 8]
// 0051132c  8b0e                 mov ecx, dword ptr [esi]
// 0051132e  7d32                 jge 0x511362
// 00511330  8d0481               lea eax, [ecx + eax*4]
// 00511333  85c0                 test eax, eax
// 00511335  7406                 je 0x51133d
// 00511337  8b542414             mov edx, dword ptr [esp + 0x14]
// 0051133b  8910                 mov dword ptr [eax], edx
// 0051133d  83460401             add dword ptr [esi + 4], 1
// 00511341  eb5e                 jmp 0x5113a1
// 00511343  8b39                 mov edi, dword ptr [ecx]
// 00511345  33c0                 xor eax, eax
// 00511347  3bfb                 cmp edi, ebx
// 00511349  88842488000000       mov byte ptr [esp + 0x88], al
// 00511350  75a3                 jne 0x5112f5
// 00511352  83c001               add eax, 1
// 00511355  3bc2                 cmp eax, edx
// 00511357  7d94                 jge 0x5112ed
// 00511359  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 0051135c  3bfb                 cmp edi, ebx
// 0051135e  74f2                 je 0x511352
// 00511360  eb93                 jmp 0x5112f5
// 00511362  8d542414             lea edx, [esp + 0x14]
// 00511366  3bd1                 cmp edx, ecx
// 00511368  721d                 jb 0x511387
// 0051136a  8d0c81               lea ecx, [ecx + eax*4]
// 0051136d  3bd1                 cmp edx, ecx
// 0051136f  7316                 jae 0x511387
// 00511371  8b442414             mov eax, dword ptr [esp + 0x14]
// 00511375  8d4c2438             lea ecx, [esp + 0x38]
// 00511379  51                   push ecx
// 0051137a  8bce                 mov ecx, esi
// 0051137c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00511380  e82b35feff           call 0x4f48b0
// 00511385  eb1a                 jmp 0x5113a1
// 00511387  6a00                 push 0
// 00511389  83c001               add eax, 1
// 0051138c  50                   push eax
// 0051138d  8bce                 mov ecx, esi
// 0051138f  e80cb7f6ff           call 0x47caa0
// 00511394  8b5604               mov edx, dword ptr [esi + 4]
// 00511397  8b06                 mov eax, dword ptr [esi]
// 00511399  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0051139d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005113a1  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 005113a4  85ff                 test edi, edi
// 005113a6  0f8562ffffff         jne 0x51130e
// 005113ac  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 005113b0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 005113b4  83c301               add ebx, 1
// 005113b7  3bd9                 cmp ebx, ecx
// 005113b9  7d0c                 jge 0x5113c7
// 005113bb  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 005113be  85ff                 test edi, edi
// 005113c0  74f2                 je 0x5113b4
// 005113c2  e947ffffff           jmp 0x51130e
// 005113c7  c644247001           mov byte ptr [esp + 0x70], 1
// 005113cc  e93dffffff           jmp 0x51130e
// 005113d1  8d4c244c             lea ecx, [esp + 0x4c]
// 005113d5  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 005113e0  c7442448d40e7a00     mov dword ptr [esp + 0x48], 0x7a0ed4
// 005113e8  c744244ccc0e7a00     mov dword ptr [esp + 0x4c], 0x7a0ecc
// 005113f0  e85bf6ffff           call 0x510a50
// 005113f5  8b442414             mov eax, dword ptr [esp + 0x14]
// 005113f9  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00511400  64890d00000000       mov dword ptr fs:[0], ecx
// 00511407  59                   pop ecx
// 00511408  5f                   pop edi
// 00511409  5e                   pop esi
// 0051140a  5b                   pop ebx
// 0051140b  8be5                 mov esp, ebp
// 0051140d  5d                   pop ebp
// 0051140e  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?getIndex@Welder@_internal@G3D@@QAEHABVVector3@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
