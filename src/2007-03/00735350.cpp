// roc 2007-03 00735350  unit: seg_00730000  size: 956 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00735350
//
// 00735350  83ec54               sub esp, 0x54
// 00735353  53                   push ebx
// 00735354  55                   push ebp
// 00735355  56                   push esi
// 00735356  57                   push edi
// 00735357  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0073535b  807f4c00             cmp byte ptr [edi + 0x4c], 0
// 0073535f  8be9                 mov ebp, ecx
// 00735361  8d4768               lea eax, [edi + 0x68]
// 00735364  7503                 jne 0x735369
// 00735366  8d4774               lea eax, [edi + 0x74]
// 00735369  f60554778b0001       test byte ptr [0x8b7754], 1
// 00735370  d900                 fld dword ptr [eax]
// 00735372  d95c241c             fstp dword ptr [esp + 0x1c]
// 00735376  d94004               fld dword ptr [eax + 4]
// 00735379  d95c2420             fstp dword ptr [esp + 0x20]
// 0073537d  d94008               fld dword ptr [eax + 8]
// 00735380  d95c2424             fstp dword ptr [esp + 0x24]
// 00735384  d944241c             fld dword ptr [esp + 0x1c]
// 00735388  d9542444             fst dword ptr [esp + 0x44]
// 0073538c  d9442420             fld dword ptr [esp + 0x20]
// 00735390  d9542448             fst dword ptr [esp + 0x48]
// 00735394  d9442424             fld dword ptr [esp + 0x24]
// 00735398  d954244c             fst dword ptr [esp + 0x4c]
// 0073539c  d9ee                 fldz 
// 0073539e  d9542450             fst dword ptr [esp + 0x50]
// 007353a2  751d                 jne 0x7353c1
// 007353a4  830d54778b0001       or dword ptr [0x8b7754], 1
// 007353ab  d91548778b00         fst dword ptr [0x8b7748]
// 007353b1  d91d4c778b00         fstp dword ptr [0x8b774c]
// 007353b7  d9e8                 fld1 
// 007353b9  d91d50778b00         fstp dword ptr [0x8b7750]
// 007353bf  eb02                 jmp 0x7353c3
// 007353c1  ddd8                 fstp st(0)
// 007353c3  d90550778b00         fld dword ptr [0x8b7750]
// 007353c9  d9c0                 fld st(0)
// 007353cb  d8cb                 fmul st(3)
// 007353cd  d9c2                 fld st(2)
// 007353cf  d9054c778b00         fld dword ptr [0x8b774c]
// 007353d5  d9c0                 fld st(0)
// 007353d7  deca                 fmulp st(2)
// 007353d9  d9ca                 fxch st(2)
// 007353db  dee1                 fsubrp st(1)
// 007353dd  d95c2428             fstp dword ptr [esp + 0x28]
// 007353e1  d90548778b00         fld dword ptr [0x8b7748]
// 007353e7  d9c0                 fld st(0)
// 007353e9  decc                 fmulp st(4)
// 007353eb  d9c5                 fld st(5)
// 007353ed  decb                 fmulp st(3)
// 007353ef  d9cb                 fxch st(3)
// 007353f1  dee2                 fsubrp st(2)
// 007353f3  d9c9                 fxch st(1)
// 007353f5  d95c242c             fstp dword ptr [esp + 0x2c]
// 007353f9  decb                 fmulp st(3)
// 007353fb  dec9                 fmulp st(1)
// 007353fd  dee9                 fsubp st(1)
// 007353ff  d95c2430             fstp dword ptr [esp + 0x30]
// 00735403  d944242c             fld dword ptr [esp + 0x2c]
// 00735407  d9442428             fld dword ptr [esp + 0x28]
// 0073540b  d9442430             fld dword ptr [esp + 0x30]
// 0073540f  d9c1                 fld st(1)
// 00735411  deca                 fmulp st(2)
// 00735413  d9c2                 fld st(2)
// 00735415  decb                 fmulp st(3)
// 00735417  d9c9                 fxch st(1)
// 00735419  dec2                 faddp st(2)
// 0073541b  dcc8                 fmul st(0), st(0)
// 0073541d  dec1                 faddp st(1)
// 0073541f  d95c246c             fstp dword ptr [esp + 0x6c]
// 00735423  d944246c             fld dword ptr [esp + 0x6c]
// 00735427  e8809eeeff           call 0x61f2ac
// 0073542c  d95c246c             fstp dword ptr [esp + 0x6c]
// 00735430  d944246c             fld dword ptr [esp + 0x6c]
// 00735434  d9e8                 fld1 
// 00735436  def1                 fdivrp st(1)
// 00735438  d95c246c             fstp dword ptr [esp + 0x6c]
// 0073543c  d9442428             fld dword ptr [esp + 0x28]
// 00735440  d944246c             fld dword ptr [esp + 0x6c]
// 00735444  d9c0                 fld st(0)
// 00735446  deca                 fmulp st(2)
// 00735448  d9c9                 fxch st(1)
// 0073544a  d95c2438             fstp dword ptr [esp + 0x38]
// 0073544e  d944242c             fld dword ptr [esp + 0x2c]
// 00735452  d8c9                 fmul st(1)
// 00735454  d95c243c             fstp dword ptr [esp + 0x3c]
// 00735458  d84c2430             fmul dword ptr [esp + 0x30]
// 0073545c  d95c2440             fstp dword ptr [esp + 0x40]
// 00735460  d9442438             fld dword ptr [esp + 0x38]
// 00735464  d9542454             fst dword ptr [esp + 0x54]
// 00735468  d944243c             fld dword ptr [esp + 0x3c]
// 0073546c  d9542458             fst dword ptr [esp + 0x58]
// 00735470  d9442440             fld dword ptr [esp + 0x40]
// 00735474  d954245c             fst dword ptr [esp + 0x5c]
// 00735478  d9ee                 fldz 
// 0073547a  d95c2460             fstp dword ptr [esp + 0x60]
// 0073547e  d9c0                 fld st(0)
// 00735480  d9442420             fld dword ptr [esp + 0x20]
// 00735484  d9c0                 fld st(0)
// 00735486  deca                 fmulp st(2)
// 00735488  d9c3                 fld st(3)
// 0073548a  d9442424             fld dword ptr [esp + 0x24]
// 0073548e  d9c0                 fld st(0)
// 00735490  deca                 fmulp st(2)
// 00735492  d9cb                 fxch st(3)
// 00735494  dee1                 fsubrp st(1)
// 00735496  d95c2438             fstp dword ptr [esp + 0x38]
// 0073549a  d9c4                 fld st(4)
// 0073549c  deca                 fmulp st(2)
// 0073549e  d944241c             fld dword ptr [esp + 0x1c]
// 007354a2  d9c0                 fld st(0)
// 007354a4  decc                 fmulp st(4)
// 007354a6  d9ca                 fxch st(2)
// 007354a8  dee3                 fsubrp st(3)
// 007354aa  d9ca                 fxch st(2)
// 007354ac  d95c243c             fstp dword ptr [esp + 0x3c]
// 007354b0  deca                 fmulp st(2)
// 007354b2  deca                 fmulp st(2)
// 007354b4  dee1                 fsubrp st(1)
// 007354b6  d95c2440             fstp dword ptr [esp + 0x40]
// 007354ba  d9442438             fld dword ptr [esp + 0x38]
// 007354be  d95c2428             fstp dword ptr [esp + 0x28]
// 007354c2  d944243c             fld dword ptr [esp + 0x3c]
// 007354c6  d95c242c             fstp dword ptr [esp + 0x2c]
// 007354ca  d9442440             fld dword ptr [esp + 0x40]
// 007354ce  d95c2430             fstp dword ptr [esp + 0x30]
// 007354d2  d9ee                 fldz 
// 007354d4  d95c2434             fstp dword ptr [esp + 0x34]
// 007354d8  d90520a87e00         fld dword ptr [0x7ea820]
// 007354de  d85f78               fcomp dword ptr [edi + 0x78]
// 007354e1  dfe0                 fnstsw ax
// 007354e3  f6c405               test ah, 5
// 007354e6  0f8a3b010000         jp 0x735627
// 007354ec  d94710               fld dword ptr [edi + 0x10]
// 007354ef  d9470c               fld dword ptr [edi + 0xc]
// 007354f2  d94714               fld dword ptr [edi + 0x14]
// 007354f5  d9c1                 fld st(1)
// 007354f7  deca                 fmulp st(2)
// 007354f9  d9c2                 fld st(2)
// 007354fb  decb                 fmulp st(3)
// 007354fd  d9c9                 fxch st(1)
// 007354ff  dec2                 faddp st(2)
// 00735501  dcc8                 fmul st(0), st(0)
// 00735503  dec1                 faddp st(1)
// 00735505  d95c246c             fstp dword ptr [esp + 0x6c]
// 00735509  d944246c             fld dword ptr [esp + 0x6c]
// 0073550d  e89a9deeff           call 0x61f2ac
// 00735512  d95c246c             fstp dword ptr [esp + 0x6c]
// 00735516  d944246c             fld dword ptr [esp + 0x6c]
// 0073551a  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0073551e  dcc8                 fmul st(0), st(0)
// 00735520  8bcb                 mov ecx, ebx
// 00735522  dc2d18a87e00         fsubr qword ptr [0x7ea818]
// 00735528  d95c246c             fstp dword ptr [esp + 0x6c]
// 0073552c  d944246c             fld dword ptr [esp + 0x6c]
// 00735530  d9542410             fst dword ptr [esp + 0x10]
// 00735534  dc8b90080000         fmul qword ptr [ebx + 0x890]
// 0073553a  d95c246c             fstp dword ptr [esp + 0x6c]
// 0073553e  e89d42d4ff           call 0x4797e0
// 00735543  807f4c00             cmp byte ptr [edi + 0x4c], 0
// 00735547  8d87b8000000         lea eax, [edi + 0xb8]
// 0073554d  7506                 jne 0x735555
// 0073554f  8d8788000000         lea eax, [edi + 0x88]
// 00735555  50                   push eax
// 00735556  8bcb                 mov ecx, ebx
// 00735558  e883f0d3ff           call 0x4745e0
// 0073555d  6a02                 push 2
// 0073555f  6a02                 push 2
// 00735561  6a00                 push 0
// 00735563  8bcb                 mov ecx, ebx
// 00735565  e806edd3ff           call 0x474270
// 0073556a  6a03                 push 3
// 0073556c  ff1580eb7700         call dword ptr [0x77eb80]
// 00735572  8b753c               mov esi, dword ptr [ebp + 0x3c]
// 00735575  83ee01               sub esi, 1
// 00735578  0f889a000000         js 0x735618
// 0073557e  8bde                 mov ebx, esi
// 00735580  c1e304               shl ebx, 4
// 00735583  8b4544               mov eax, dword ptr [ebp + 0x44]
// 00735586  d904b0               fld dword ptr [eax + esi*4]
// 00735589  8d04b0               lea eax, [eax + esi*4]
// 0073558c  d84c246c             fmul dword ptr [esp + 0x6c]
// 00735590  51                   push ecx
// 00735591  d95c241c             fstp dword ptr [esp + 0x1c]
// 00735595  d900                 fld dword ptr [eax]
// 00735597  d84c2414             fmul dword ptr [esp + 0x14]
// 0073559b  d95c2418             fstp dword ptr [esp + 0x18]
// 0073559f  d9442418             fld dword ptr [esp + 0x18]
// 007355a3  d91c24               fstp dword ptr [esp]
// 007355a6  ff15f8eb7700         call dword ptr [0x77ebf8]
// 007355ac  6a00                 push 0
// 007355ae  ff1548eb7700         call dword ptr [0x77eb48]
// 007355b4  d94708               fld dword ptr [edi + 8]
// 007355b7  d9442418             fld dword ptr [esp + 0x18]
// 007355bb  83ec0c               sub esp, 0xc
// 007355be  d9c0                 fld st(0)
// 007355c0  deca                 fmulp st(2)
// 007355c2  d9c9                 fxch st(1)
// 007355c4  d95c2424             fstp dword ptr [esp + 0x24]
// 007355c8  d9442424             fld dword ptr [esp + 0x24]
// 007355cc  d95c2408             fstp dword ptr [esp + 8]
// 007355d0  d94704               fld dword ptr [edi + 4]
// 007355d3  d8c9                 fmul st(1)
// 007355d5  d95c2424             fstp dword ptr [esp + 0x24]
// 007355d9  d9442424             fld dword ptr [esp + 0x24]
// 007355dd  d95c2404             fstp dword ptr [esp + 4]
// 007355e1  d80f                 fmul dword ptr [edi]
// 007355e3  d95c2424             fstp dword ptr [esp + 0x24]
// 007355e7  d9442424             fld dword ptr [esp + 0x24]
// 007355eb  d91c24               fstp dword ptr [esp]
// 007355ee  ff1554eb7700         call dword ptr [0x77eb54]
// 007355f4  8b4d38               mov ecx, dword ptr [ebp + 0x38]
// 007355f7  03cb                 add ecx, ebx
// 007355f9  51                   push ecx
// 007355fa  ff1510ec7700         call dword ptr [0x77ec10]
// 00735600  ff1540eb7700         call dword ptr [0x77eb40]
// 00735606  83ee01               sub esi, 1
// 00735609  83eb10               sub ebx, 0x10
// 0073560c  85f6                 test esi, esi
// 0073560e  0f8d6fffffff         jge 0x735583
// 00735614  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00735618  ff1538eb7700         call dword ptr [0x77eb38]
// 0073561e  8bcb                 mov ecx, ebx
// 00735620  e8fb41d4ff           call 0x479820
// 00735625  eb04                 jmp 0x73562b
// 00735627  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0073562b  51                   push ecx
// 0073562c  8bc4                 mov eax, esp
// 0073562e  c70000000000         mov dword ptr [eax], 0
// 00735634  8b6d2c               mov ebp, dword ptr [ebp + 0x2c]
// 00735637  85ed                 test ebp, ebp
// 00735639  8964246c             mov dword ptr [esp + 0x6c], esp
// 0073563d  740c                 je 0x73564b
// 0073563f  8928                 mov dword ptr [eax], ebp
// 00735641  83c504               add ebp, 4
// 00735644  55                   push ebp
// 00735645  ff15acd27700         call dword ptr [0x77d2ac]
// 0073564b  6a00                 push 0
// 0073564d  8bcb                 mov ecx, ebx
// 0073564f  e85c0dd4ff           call 0x4763b0
// 00735654  6a02                 push 2
// 00735656  6a01                 push 1
// 00735658  6a00                 push 0
// 0073565a  8bcb                 mov ecx, ebx
// 0073565c  e80fecd3ff           call 0x474270
// 00735661  dd0518fe7900         fld qword ptr [0x79fe18]
// 00735667  83ec08               sub esp, 8
// 0073566a  dd1c24               fstp qword ptr [esp]
// 0073566d  6a02                 push 2
// 0073566f  8bcb                 mov ecx, ebx
// 00735671  e85ae7d3ff           call 0x473dd0
// 00735676  d9442420             fld dword ptr [esp + 0x20]
// 0073567a  dc0d88e97900         fmul qword ptr [0x79e988]
// 00735680  d95c2468             fstp dword ptr [esp + 0x68]
// 00735684  d9ee                 fldz 
// 00735686  d95c246c             fstp dword ptr [esp + 0x6c]
// 0073568a  d9442468             fld dword ptr [esp + 0x68]
// 0073568e  dc1d60ef7800         fcomp qword ptr [0x78ef60]
// 00735694  dfe0                 fnstsw ax
// 00735696  f6c441               test ah, 0x41
// 00735699  8d442468             lea eax, [esp + 0x68]
// 0073569d  7404                 je 0x7356a3
// 0073569f  8d44246c             lea eax, [esp + 0x6c]
// 007356a3  d900                 fld dword ptr [eax]
// 007356a5  8d4c2468             lea ecx, [esp + 0x68]
// 007356a9  d95c2468             fstp dword ptr [esp + 0x68]
// 007356ad  d9e8                 fld1 
// 007356af  d954246c             fst dword ptr [esp + 0x6c]
// 007356b3  d85c2468             fcomp dword ptr [esp + 0x68]
// 007356b7  dfe0                 fnstsw ax
// 007356b9  f6c441               test ah, 0x41
// 007356bc  7404                 je 0x7356c2
// 007356be  8d4c246c             lea ecx, [esp + 0x6c]
// 007356c2  d907                 fld dword ptr [edi]
// 007356c4  83ec10               sub esp, 0x10
// 007356c7  8bc4                 mov eax, esp
// 007356c9  d918                 fstp dword ptr [eax]
// 007356cb  89642428             mov dword ptr [esp + 0x28], esp
// 007356cf  d94704               fld dword ptr [edi + 4]
// 007356d2  83ec08               sub esp, 8
// 007356d5  d95804               fstp dword ptr [eax + 4]
// 007356d8  8d54245c             lea edx, [esp + 0x5c]
// 007356dc  d94708               fld dword ptr [edi + 8]
// 007356df  8d742440             lea esi, [esp + 0x40]
// 007356e3  d95808               fstp dword ptr [eax + 8]
// 007356e6  8d7c246c             lea edi, [esp + 0x6c]
// 007356ea  d901                 fld dword ptr [ecx]
// 007356ec  d9580c               fstp dword ptr [eax + 0xc]
// 007356ef  dd0510a87e00         fld qword ptr [0x7ea810]
// 007356f5  dd1c24               fstp qword ptr [esp]
// 007356f8  52                   push edx
// 007356f9  53                   push ebx
// 007356fa  e841efffff           call 0x734640
// 007356ff  83c420               add esp, 0x20
// 00735702  5f                   pop edi
// 00735703  5e                   pop esi
// 00735704  5d                   pop ebp
// 00735705  5b                   pop ebx
// 00735706  83c454               add esp, 0x54
// 00735709  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Sky.cpp (function ?drawMoonAndStars@Sky@G3D@@AAEXPAVRenderDevice@2@ABVLightingParameters@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Sky.cpp
