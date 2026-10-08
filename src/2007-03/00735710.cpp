// roc 2007-03 00735710  unit: seg_00730000  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00735710
//
// 00735710  83ec54               sub esp, 0x54
// 00735713  56                   push esi
// 00735714  8b742460             mov esi, dword ptr [esp + 0x60]
// 00735718  807e4c00             cmp byte ptr [esi + 0x4c], 0
// 0073571c  57                   push edi
// 0073571d  8bf9                 mov edi, ecx
// 0073571f  8d4650               lea eax, [esi + 0x50]
// 00735722  7503                 jne 0x735727
// 00735724  8d465c               lea eax, [esi + 0x5c]
// 00735727  d900                 fld dword ptr [eax]
// 00735729  d95c2414             fstp dword ptr [esp + 0x14]
// 0073572d  d94004               fld dword ptr [eax + 4]
// 00735730  d95c2418             fstp dword ptr [esp + 0x18]
// 00735734  d94008               fld dword ptr [eax + 8]
// 00735737  b801000000           mov eax, 1
// 0073573c  840554778b00         test byte ptr [0x8b7754], al
// 00735742  d95c241c             fstp dword ptr [esp + 0x1c]
// 00735746  d9442414             fld dword ptr [esp + 0x14]
// 0073574a  d954242c             fst dword ptr [esp + 0x2c]
// 0073574e  d9442418             fld dword ptr [esp + 0x18]
// 00735752  d9542430             fst dword ptr [esp + 0x30]
// 00735756  d944241c             fld dword ptr [esp + 0x1c]
// 0073575a  d9542434             fst dword ptr [esp + 0x34]
// 0073575e  d9ee                 fldz 
// 00735760  d9542438             fst dword ptr [esp + 0x38]
// 00735764  751c                 jne 0x735782
// 00735766  090554778b00         or dword ptr [0x8b7754], eax
// 0073576c  d91548778b00         fst dword ptr [0x8b7748]
// 00735772  d91d4c778b00         fstp dword ptr [0x8b774c]
// 00735778  d9e8                 fld1 
// 0073577a  d91d50778b00         fstp dword ptr [0x8b7750]
// 00735780  eb02                 jmp 0x735784
// 00735782  ddd8                 fstp st(0)
// 00735784  d90550778b00         fld dword ptr [0x8b7750]
// 0073578a  d9c0                 fld st(0)
// 0073578c  d8cb                 fmul st(3)
// 0073578e  d9c2                 fld st(2)
// 00735790  d9054c778b00         fld dword ptr [0x8b774c]
// 00735796  d9c0                 fld st(0)
// 00735798  deca                 fmulp st(2)
// 0073579a  d9ca                 fxch st(2)
// 0073579c  dee1                 fsubrp st(1)
// 0073579e  d95c2408             fstp dword ptr [esp + 8]
// 007357a2  d90548778b00         fld dword ptr [0x8b7748]
// 007357a8  d9c0                 fld st(0)
// 007357aa  decc                 fmulp st(4)
// 007357ac  d9c5                 fld st(5)
// 007357ae  decb                 fmulp st(3)
// 007357b0  d9cb                 fxch st(3)
// 007357b2  dee2                 fsubrp st(2)
// 007357b4  d9c9                 fxch st(1)
// 007357b6  d95c240c             fstp dword ptr [esp + 0xc]
// 007357ba  decb                 fmulp st(3)
// 007357bc  dec9                 fmulp st(1)
// 007357be  dee9                 fsubp st(1)
// 007357c0  d95c2410             fstp dword ptr [esp + 0x10]
// 007357c4  d944240c             fld dword ptr [esp + 0xc]
// 007357c8  d9442408             fld dword ptr [esp + 8]
// 007357cc  d9442410             fld dword ptr [esp + 0x10]
// 007357d0  d9c1                 fld st(1)
// 007357d2  deca                 fmulp st(2)
// 007357d4  d9c2                 fld st(2)
// 007357d6  decb                 fmulp st(3)
// 007357d8  d9c9                 fxch st(1)
// 007357da  dec2                 faddp st(2)
// 007357dc  dcc8                 fmul st(0), st(0)
// 007357de  dec1                 faddp st(1)
// 007357e0  d95c2464             fstp dword ptr [esp + 0x64]
// 007357e4  d9442464             fld dword ptr [esp + 0x64]
// 007357e8  e8bf9aeeff           call 0x61f2ac
// 007357ed  d95c2464             fstp dword ptr [esp + 0x64]
// 007357f1  d9442464             fld dword ptr [esp + 0x64]
// 007357f5  d9e8                 fld1 
// 007357f7  def1                 fdivrp st(1)
// 007357f9  d95c2464             fstp dword ptr [esp + 0x64]
// 007357fd  d9442408             fld dword ptr [esp + 8]
// 00735801  d9442464             fld dword ptr [esp + 0x64]
// 00735805  d9c0                 fld st(0)
// 00735807  deca                 fmulp st(2)
// 00735809  d9c9                 fxch st(1)
// 0073580b  d95c2420             fstp dword ptr [esp + 0x20]
// 0073580f  d944240c             fld dword ptr [esp + 0xc]
// 00735813  d8c9                 fmul st(1)
// 00735815  d95c2424             fstp dword ptr [esp + 0x24]
// 00735819  d84c2410             fmul dword ptr [esp + 0x10]
// 0073581d  d95c2428             fstp dword ptr [esp + 0x28]
// 00735821  d9442420             fld dword ptr [esp + 0x20]
// 00735825  d954244c             fst dword ptr [esp + 0x4c]
// 00735829  d9442424             fld dword ptr [esp + 0x24]
// 0073582d  d9542450             fst dword ptr [esp + 0x50]
// 00735831  d9442428             fld dword ptr [esp + 0x28]
// 00735835  d9542454             fst dword ptr [esp + 0x54]
// 00735839  d9ee                 fldz 
// 0073583b  d95c2458             fstp dword ptr [esp + 0x58]
// 0073583f  d9c0                 fld st(0)
// 00735841  d9442418             fld dword ptr [esp + 0x18]
// 00735845  d9c0                 fld st(0)
// 00735847  deca                 fmulp st(2)
// 00735849  d9c3                 fld st(3)
// 0073584b  d944241c             fld dword ptr [esp + 0x1c]
// 0073584f  d9c0                 fld st(0)
// 00735851  deca                 fmulp st(2)
// 00735853  d9cb                 fxch st(3)
// 00735855  dee1                 fsubrp st(1)
// 00735857  d95c2420             fstp dword ptr [esp + 0x20]
// 0073585b  d9c4                 fld st(4)
// 0073585d  deca                 fmulp st(2)
// 0073585f  d9442414             fld dword ptr [esp + 0x14]
// 00735863  d9c0                 fld st(0)
// 00735865  decc                 fmulp st(4)
// 00735867  d9ca                 fxch st(2)
// 00735869  dee3                 fsubrp st(3)
// 0073586b  d9ca                 fxch st(2)
// 0073586d  d95c2424             fstp dword ptr [esp + 0x24]
// 00735871  deca                 fmulp st(2)
// 00735873  51                   push ecx
// 00735874  8bcc                 mov ecx, esp
// 00735876  c70100000000         mov dword ptr [ecx], 0
// 0073587c  8b4728               mov eax, dword ptr [edi + 0x28]
// 0073587f  deca                 fmulp st(2)
// 00735881  89642468             mov dword ptr [esp + 0x68], esp
// 00735885  50                   push eax
// 00735886  dee1                 fsubrp st(1)
// 00735888  d95c2430             fstp dword ptr [esp + 0x30]
// 0073588c  d9442428             fld dword ptr [esp + 0x28]
// 00735890  d95c2444             fstp dword ptr [esp + 0x44]
// 00735894  d944242c             fld dword ptr [esp + 0x2c]
// 00735898  d95c2448             fstp dword ptr [esp + 0x48]
// 0073589c  d9442430             fld dword ptr [esp + 0x30]
// 007358a0  d95c244c             fstp dword ptr [esp + 0x4c]
// 007358a4  d9ee                 fldz 
// 007358a6  d95c2450             fstp dword ptr [esp + 0x50]
// 007358aa  e8e1f7d3ff           call 0x475090
// 007358af  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 007358b3  6a00                 push 0
// 007358b5  8bcf                 mov ecx, edi
// 007358b7  e8f40ad4ff           call 0x4763b0
// 007358bc  6a02                 push 2
// 007358be  6a02                 push 2
// 007358c0  6a02                 push 2
// 007358c2  8bcf                 mov ecx, edi
// 007358c4  e8a7e9d3ff           call 0x474270
// 007358c9  d906                 fld dword ptr [esi]
// 007358cb  dd05c8237900         fld qword ptr [0x7923c8]
// 007358d1  dcc9                 fmul st(1), st(0)
// 007358d3  d9c9                 fxch st(1)
// 007358d5  d95c2408             fstp dword ptr [esp + 8]
// 007358d9  d94604               fld dword ptr [esi + 4]
// 007358dc  d8c9                 fmul st(1)
// 007358de  d95c240c             fstp dword ptr [esp + 0xc]
// 007358e2  d84e08               fmul dword ptr [esi + 8]
// 007358e5  d95c2410             fstp dword ptr [esp + 0x10]
// 007358e9  d9ee                 fldz 
// 007358eb  d9442418             fld dword ptr [esp + 0x18]
// 007358ef  d8d1                 fcom st(1)
// 007358f1  dfe0                 fnstsw ax
// 007358f3  f6c405               test ah, 5
// 007358f6  7a59                 jp 0x735951
// 007358f8  dc0520e67900         fadd qword ptr [0x79e620]
// 007358fe  dc0d784f7900         fmul qword ptr [0x794f78]
// 00735904  d95c2464             fstp dword ptr [esp + 0x64]
// 00735908  d95c2460             fstp dword ptr [esp + 0x60]
// 0073590c  d9442464             fld dword ptr [esp + 0x64]
// 00735910  dc1d60ef7800         fcomp qword ptr [0x78ef60]
// 00735916  dfe0                 fnstsw ax
// 00735918  f6c441               test ah, 0x41
// 0073591b  8d442464             lea eax, [esp + 0x64]
// 0073591f  7404                 je 0x735925
// 00735921  8d442460             lea eax, [esp + 0x60]
// 00735925  d900                 fld dword ptr [eax]
// 00735927  d95c2464             fstp dword ptr [esp + 0x64]
// 0073592b  d9442408             fld dword ptr [esp + 8]
// 0073592f  d9442464             fld dword ptr [esp + 0x64]
// 00735933  d9c0                 fld st(0)
// 00735935  deca                 fmulp st(2)
// 00735937  d9c9                 fxch st(1)
// 00735939  d95c2408             fstp dword ptr [esp + 8]
// 0073593d  d944240c             fld dword ptr [esp + 0xc]
// 00735941  d8c9                 fmul st(1)
// 00735943  d95c240c             fstp dword ptr [esp + 0xc]
// 00735947  d84c2410             fmul dword ptr [esp + 0x10]
// 0073594b  d95c2410             fstp dword ptr [esp + 0x10]
// 0073594f  eb04                 jmp 0x735955
// 00735951  ddd8                 fstp st(0)
// 00735953  ddd8                 fstp st(0)
// 00735955  d9442408             fld dword ptr [esp + 8]
// 00735959  83ec10               sub esp, 0x10
// 0073595c  8bc4                 mov eax, esp
// 0073595e  d918                 fstp dword ptr [eax]
// 00735960  89642474             mov dword ptr [esp + 0x74], esp
// 00735964  d944241c             fld dword ptr [esp + 0x1c]
// 00735968  83ec08               sub esp, 8
// 0073596b  d95804               fstp dword ptr [eax + 4]
// 0073596e  8d4c2444             lea ecx, [esp + 0x44]
// 00735972  d9442428             fld dword ptr [esp + 0x28]
// 00735976  8d742454             lea esi, [esp + 0x54]
// 0073597a  d95808               fstp dword ptr [eax + 8]
// 0073597d  d9e8                 fld1 
// 0073597f  d9580c               fstp dword ptr [eax + 0xc]
// 00735982  dd0528a87e00         fld qword ptr [0x7ea828]
// 00735988  dd1c24               fstp qword ptr [esp]
// 0073598b  51                   push ecx
// 0073598c  57                   push edi
// 0073598d  8d7c246c             lea edi, [esp + 0x6c]
// 00735991  e8aaecffff           call 0x734640
// 00735996  83c420               add esp, 0x20
// 00735999  5f                   pop edi
// 0073599a  5e                   pop esi
// 0073599b  83c454               add esp, 0x54
// 0073599e  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Sky.cpp (function ?drawSun@Sky@G3D@@AAEXPAVRenderDevice@2@ABVLightingParameters@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-g3d GLG3Dcpp/Sky.cpp
