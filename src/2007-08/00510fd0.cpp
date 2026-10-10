// from server: 100% by tester
// roc 2007-03 00505700  unit: seg_00500000  size: 1089 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00505700
//
// 00505700  55                   push ebp
// 00505701  8bec                 mov ebp, esp
// 00505703  83e4f8               and esp, 0xfffffff8
// 00505706  6aff                 push -1
// 00505708  6828117500           push 0x751128
// 0050570d  64a100000000         mov eax, dword ptr fs:[0]
// 00505713  50                   push eax
// 00505714  81ec80000000         sub esp, 0x80
// 0050571a  53                   push ebx
// 0050571b  56                   push esi
// 0050571c  57                   push edi
// 0050571d  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00505722  33c4                 xor eax, esp
// 00505724  50                   push eax
// 00505725  8d842490000000       lea eax, [esp + 0x90]
// 0050572c  64a300000000         mov dword ptr fs:[0], eax
// 00505732  8bf9                 mov edi, ecx
// 00505734  f605d0778b0001       test byte ptr [0x8b77d0], 1
// 0050573b  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00505743  7514                 jne 0x505759
// 00505745  a128e67700           mov eax, dword ptr [0x77e628]
// 0050574a  830dd0778b0001       or dword ptr [0x8b77d0], 1
// 00505751  dd00                 fld qword ptr [eax]
// 00505753  dd1dc8778b00         fstp qword ptr [0x8b77c8]
// 00505759  dd05c8778b00         fld qword ptr [0x8b77c8]
// 0050575f  8b7508               mov esi, dword ptr [ebp + 8]
// 00505762  8d4c2414             lea ecx, [esp + 0x14]
// 00505766  dd5c243c             fstp qword ptr [esp + 0x3c]
// 0050576a  d906                 fld dword ptr [esi]
// 0050576c  51                   push ecx
// 0050576d  8d54241c             lea edx, [esp + 0x1c]
// 00505771  52                   push edx
// 00505772  8d442428             lea eax, [esp + 0x28]
// 00505776  50                   push eax
// 00505777  83ec0c               sub esp, 0xc
// 0050577a  8bc4                 mov eax, esp
// 0050577c  d918                 fstp dword ptr [eax]
// 0050577e  8bcf                 mov ecx, edi
// 00505780  d94604               fld dword ptr [esi + 4]
// 00505783  89642450             mov dword ptr [esp + 0x50], esp
// 00505787  d95804               fstp dword ptr [eax + 4]
// 0050578a  d94608               fld dword ptr [esi + 8]
// 0050578d  d95808               fstp dword ptr [eax + 8]
// 00505790  e89bf8ffff           call 0x505030
// 00505795  8b442420             mov eax, dword ptr [esp + 0x20]
// 00505799  dd44243c             fld qword ptr [esp + 0x3c]
// 0050579d  c1e005               shl eax, 5
// 005057a0  03442418             add eax, dword ptr [esp + 0x18]
// 005057a4  33db                 xor ebx, ebx
// 005057a6  c1e005               shl eax, 5
// 005057a9  03442414             add eax, dword ptr [esp + 0x14]
// 005057ad  895c2420             mov dword ptr [esp + 0x20], ebx
// 005057b1  8d0c40               lea ecx, [eax + eax*2]
// 005057b4  8d048f               lea eax, [edi + ecx*4]
// 005057b7  8b4804               mov ecx, dword ptr [eax + 4]
// 005057ba  3bcb                 cmp ecx, ebx
// 005057bc  894c2428             mov dword ptr [esp + 0x28], ecx
// 005057c0  7e7c                 jle 0x50583e
// 005057c2  8b8f04000600         mov ecx, dword ptr [edi + 0x60004]
// 005057c8  8b19                 mov ebx, dword ptr [ecx]
// 005057ca  8b10                 mov edx, dword ptr [eax]
// 005057cc  8b0a                 mov ecx, dword ptr [edx]
// 005057ce  8d0449               lea eax, [ecx + ecx*2]
// 005057d1  d90483               fld dword ptr [ebx + eax*4]
// 005057d4  8d0483               lea eax, [ebx + eax*4]
// 005057d7  d826                 fsub dword ptr [esi]
// 005057d9  d95c2414             fstp dword ptr [esp + 0x14]
// 005057dd  d94004               fld dword ptr [eax + 4]
// 005057e0  d86604               fsub dword ptr [esi + 4]
// 005057e3  d95c2418             fstp dword ptr [esp + 0x18]
// 005057e7  d94008               fld dword ptr [eax + 8]
// 005057ea  d86608               fsub dword ptr [esi + 8]
// 005057ed  d95c2424             fstp dword ptr [esp + 0x24]
// 005057f1  d9442418             fld dword ptr [esp + 0x18]
// 005057f5  d9442414             fld dword ptr [esp + 0x14]
// 005057f9  d9442424             fld dword ptr [esp + 0x24]
// 005057fd  d9c1                 fld st(1)
// 005057ff  deca                 fmulp st(2)
// 00505801  d9c2                 fld st(2)
// 00505803  decb                 fmulp st(3)
// 00505805  d9c9                 fxch st(1)
// 00505807  dec2                 faddp st(2)
// 00505809  dcc8                 fmul st(0), st(0)
// 0050580b  dec1                 faddp st(1)
// 0050580d  d95c2424             fstp dword ptr [esp + 0x24]
// 00505811  d9442424             fld dword ptr [esp + 0x24]
// 00505815  d8d1                 fcom st(1)
// 00505817  dfe0                 fnstsw ax
// 00505819  f6c405               test ah, 5
// 0050581c  7a08                 jp 0x505826
// 0050581e  ddd9                 fstp st(1)
// 00505820  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00505824  eb02                 jmp 0x505828
// 00505826  ddd8                 fstp st(0)
// 00505828  8b442420             mov eax, dword ptr [esp + 0x20]
// 0050582c  83c001               add eax, 1
// 0050582f  83c204               add edx, 4
// 00505832  3b442428             cmp eax, dword ptr [esp + 0x28]
// 00505836  89442420             mov dword ptr [esp + 0x20], eax
// 0050583a  7c90                 jl 0x5057cc
// 0050583c  33db                 xor ebx, ebx
// 0050583e  dd8710000600         fld qword ptr [edi + 0x60010]
// 00505844  dcc8                 fmul st(0), st(0)
// 00505846  ded9                 fcompp 
// 00505848  dfe0                 fnstsw ax
// 0050584a  f6c401               test ah, 1
// 0050584d  751c                 jne 0x50586b
// 0050584f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00505853  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0050585a  64890d00000000       mov dword ptr fs:[0], ecx
// 00505861  59                   pop ecx
// 00505862  5f                   pop edi
// 00505863  5e                   pop esi
// 00505864  5b                   pop ebx
// 00505865  8be5                 mov esp, ebp
// 00505867  5d                   pop ebp
// 00505868  c20400               ret 4
// 0050586b  8b8f04000600         mov ecx, dword ptr [edi + 0x60004]
// 00505871  8b5104               mov edx, dword ptr [ecx + 4]
// 00505874  56                   push esi
// 00505875  89542418             mov dword ptr [esp + 0x18], edx
// 00505879  e8022bfeff           call 0x4e8380
// 0050587e  6a10                 push 0x10
// 00505880  6a28                 push 0x28
// 00505882  c74424509c067a00     mov dword ptr [esp + 0x50], 0x7a069c
// 0050588a  c744245494067a00     mov dword ptr [esp + 0x54], 0x7a0694
// 00505892  c74424600a000000     mov dword ptr [esp + 0x60], 0xa
// 0050589a  895c2458             mov dword ptr [esp + 0x58], ebx
// 0050589e  e82de3feff           call 0x4f3bd0
// 005058a3  6a28                 push 0x28
// 005058a5  53                   push ebx
// 005058a6  50                   push eax
// 005058a7  89442468             mov dword ptr [esp + 0x68], eax
// 005058ab  e840e8feff           call 0x4f40f0
// 005058b0  83c414               add esp, 0x14
// 005058b3  d90578587900         fld dword ptr [0x795878]
// 005058b9  d95c2420             fstp dword ptr [esp + 0x20]
// 005058bd  899c2498000000       mov dword ptr [esp + 0x98], ebx
// 005058c4  c644241301           mov byte ptr [esp + 0x13], 1
// 005058c9  d90578587900         fld dword ptr [0x795878]
// 005058cf  d95c241c             fstp dword ptr [esp + 0x1c]
// 005058d3  d90578587900         fld dword ptr [0x795878]
// 005058d9  d95c2418             fstp dword ptr [esp + 0x18]
// 005058dd  d9442418             fld dword ptr [esp + 0x18]
// 005058e1  eb21                 jmp 0x505904
// 005058e3  ddd9                 fstp st(1)
// 005058e5  ddd8                 fstp st(0)
// 005058e7  d90578587900         fld dword ptr [0x795878]
// 005058ed  d95c2418             fstp dword ptr [esp + 0x18]
// 005058f1  d9442418             fld dword ptr [esp + 0x18]
// 005058f5  eb0d                 jmp 0x505904
// 005058f7  eb07                 jmp 0x505900
// 005058f9  8da42400000000       lea esp, [esp]
// 00505900  ddda                 fstp st(2)
// 00505902  ddd8                 fstp st(0)
// 00505904  dd8710000600         fld qword ptr [edi + 0x60010]
// 0050590a  8d442438             lea eax, [esp + 0x38]
// 0050590e  d95c2428             fstp dword ptr [esp + 0x28]
// 00505912  50                   push eax
// 00505913  d944242c             fld dword ptr [esp + 0x2c]
// 00505917  8d4c2438             lea ecx, [esp + 0x38]
// 0050591b  d9c0                 fld st(0)
// 0050591d  51                   push ecx
// 0050591e  d84c2428             fmul dword ptr [esp + 0x28]
// 00505922  8d542438             lea edx, [esp + 0x38]
// 00505926  52                   push edx
// 00505927  83ec0c               sub esp, 0xc
// 0050592a  d95c2440             fstp dword ptr [esp + 0x40]
// 0050592e  8bc4                 mov eax, esp
// 00505930  8bcf                 mov ecx, edi
// 00505932  d9c0                 fld st(0)
// 00505934  89642454             mov dword ptr [esp + 0x54], esp
// 00505938  d84c2434             fmul dword ptr [esp + 0x34]
// 0050593c  d95c243c             fstp dword ptr [esp + 0x3c]
// 00505940  dec9                 fmulp st(1)
// 00505942  d95c2444             fstp dword ptr [esp + 0x44]
// 00505946  d906                 fld dword ptr [esi]
// 00505948  d8442440             fadd dword ptr [esp + 0x40]
// 0050594c  d95c2440             fstp dword ptr [esp + 0x40]
// 00505950  d944243c             fld dword ptr [esp + 0x3c]
// 00505954  d84604               fadd dword ptr [esi + 4]
// 00505957  d95c243c             fstp dword ptr [esp + 0x3c]
// 0050595b  d94608               fld dword ptr [esi + 8]
// 0050595e  d8442444             fadd dword ptr [esp + 0x44]
// 00505962  d95c2444             fstp dword ptr [esp + 0x44]
// 00505966  d9442440             fld dword ptr [esp + 0x40]
// 0050596a  d918                 fstp dword ptr [eax]
// 0050596c  d944243c             fld dword ptr [esp + 0x3c]
// 00505970  d95804               fstp dword ptr [eax + 4]
// 00505973  d9442444             fld dword ptr [esp + 0x44]
// 00505977  d95808               fstp dword ptr [eax + 8]
// 0050597a  e8b1f6ffff           call 0x505030
// 0050597f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00505983  c1e005               shl eax, 5
// 00505986  03442434             add eax, dword ptr [esp + 0x34]
// 0050598a  8d542413             lea edx, [esp + 0x13]
// 0050598e  c1e005               shl eax, 5
// 00505991  03442438             add eax, dword ptr [esp + 0x38]
// 00505995  52                   push edx
// 00505996  8d0440               lea eax, [eax + eax*2]
// 00505999  8d0c87               lea ecx, [edi + eax*4]
// 0050599c  8d442430             lea eax, [esp + 0x30]
// 005059a0  894c2430             mov dword ptr [esp + 0x30], ecx
// 005059a4  50                   push eax
// 005059a5  8d4c2454             lea ecx, [esp + 0x54]
// 005059a9  e832f8ffff           call 0x5051e0
// 005059ae  d9442418             fld dword ptr [esp + 0x18]
// 005059b2  d9e8                 fld1 
// 005059b4  dcc1                 fadd st(1), st(0)
// 005059b6  d9c9                 fxch st(1)
// 005059b8  d95c2418             fstp dword ptr [esp + 0x18]
// 005059bc  d9e8                 fld1 
// 005059be  d9442418             fld dword ptr [esp + 0x18]
// 005059c2  d8d1                 fcom st(1)
// 005059c4  dfe0                 fnstsw ax
// 005059c6  f6c441               test ah, 0x41
// 005059c9  0f8b31ffffff         jnp 0x505900
// 005059cf  ddd8                 fstp st(0)
// 005059d1  d944241c             fld dword ptr [esp + 0x1c]
// 005059d5  d8c2                 fadd st(2)
// 005059d7  d95c241c             fstp dword ptr [esp + 0x1c]
// 005059db  d854241c             fcom dword ptr [esp + 0x1c]
// 005059df  dfe0                 fnstsw ax
// 005059e1  f6c401               test ah, 1
// 005059e4  0f84f9feffff         je 0x5058e3
// 005059ea  d9442420             fld dword ptr [esp + 0x20]
// 005059ee  dec2                 faddp st(2)
// 005059f0  d9c9                 fxch st(1)
// 005059f2  d95c2420             fstp dword ptr [esp + 0x20]
// 005059f6  d85c2420             fcomp dword ptr [esp + 0x20]
// 005059fa  dfe0                 fnstsw ax
// 005059fc  f6c401               test ah, 1
// 005059ff  0f84c4feffff         je 0x5058c9
// 00505a05  8b542458             mov edx, dword ptr [esp + 0x58]
// 00505a09  3bd3                 cmp edx, ebx
// 00505a0b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00505a0f  8d74244c             lea esi, [esp + 0x4c]
// 00505a13  755e                 jne 0x505a73
// 00505a15  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 00505a19  8b442474             mov eax, dword ptr [esp + 0x74]
// 00505a1d  c684248800000001     mov byte ptr [esp + 0x88], 1
// 00505a25  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00505a29  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00505a30  8bd8                 mov ebx, eax
// 00505a32  89742464             mov dword ptr [esp + 0x64], esi
// 00505a36  89542468             mov dword ptr [esp + 0x68], edx
// 00505a3a  894c2470             mov dword ptr [esp + 0x70], ecx
// 00505a3e  807c247001           cmp byte ptr [esp + 0x70], 1
// 00505a43  750e                 jne 0x505a53
// 00505a45  8d54244c             lea edx, [esp + 0x4c]
// 00505a49  3b542464             cmp edx, dword ptr [esp + 0x64]
// 00505a4d  0f84ae000000         je 0x505b01
// 00505a53  8b7704               mov esi, dword ptr [edi + 4]
// 00505a56  8b4604               mov eax, dword ptr [esi + 4]
// 00505a59  3b4608               cmp eax, dword ptr [esi + 8]
// 00505a5c  8b0e                 mov ecx, dword ptr [esi]
// 00505a5e  7d32                 jge 0x505a92
// 00505a60  8d0481               lea eax, [ecx + eax*4]
// 00505a63  85c0                 test eax, eax
// 00505a65  7406                 je 0x505a6d
// 00505a67  8b542414             mov edx, dword ptr [esp + 0x14]
// 00505a6b  8910                 mov dword ptr [eax], edx
// 00505a6d  83460401             add dword ptr [esi + 4], 1
// 00505a71  eb5e                 jmp 0x505ad1
// 00505a73  8b39                 mov edi, dword ptr [ecx]
// 00505a75  33c0                 xor eax, eax
// 00505a77  3bfb                 cmp edi, ebx
// 00505a79  88842488000000       mov byte ptr [esp + 0x88], al
// 00505a80  75a3                 jne 0x505a25
// 00505a82  83c001               add eax, 1
// 00505a85  3bc2                 cmp eax, edx
// 00505a87  7d94                 jge 0x505a1d
// 00505a89  8b3c81               mov edi, dword ptr [ecx + eax*4]
// 00505a8c  3bfb                 cmp edi, ebx
// 00505a8e  74f2                 je 0x505a82
// 00505a90  eb93                 jmp 0x505a25
// 00505a92  8d542414             lea edx, [esp + 0x14]
// 00505a96  3bd1                 cmp edx, ecx
// 00505a98  721d                 jb 0x505ab7
// 00505a9a  8d0c81               lea ecx, [ecx + eax*4]
// 00505a9d  3bd1                 cmp edx, ecx
// 00505a9f  7316                 jae 0x505ab7
// 00505aa1  8b442414             mov eax, dword ptr [esp + 0x14]
// 00505aa5  8d4c2438             lea ecx, [esp + 0x38]
// 00505aa9  51                   push ecx
// 00505aaa  8bce                 mov ecx, esi
// 00505aac  8944243c             mov dword ptr [esp + 0x3c], eax
// 00505ab0  e85b28feff           call 0x4e8310
// 00505ab5  eb1a                 jmp 0x505ad1
// 00505ab7  6a00                 push 0
// 00505ab9  83c001               add eax, 1
// 00505abc  50                   push eax
// 00505abd  8bce                 mov ecx, esi
// 00505abf  e85c55f7ff           call 0x47b020
// 00505ac4  8b5604               mov edx, dword ptr [esi + 4]
// 00505ac7  8b06                 mov eax, dword ptr [esi]
// 00505ac9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00505acd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00505ad1  8b7f0c               mov edi, dword ptr [edi + 0xc]
// 00505ad4  85ff                 test edi, edi
// 00505ad6  0f8562ffffff         jne 0x505a3e
// 00505adc  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00505ae0  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00505ae4  83c301               add ebx, 1
// 00505ae7  3bd9                 cmp ebx, ecx
// 00505ae9  7d0c                 jge 0x505af7
// 00505aeb  8b3c98               mov edi, dword ptr [eax + ebx*4]
// 00505aee  85ff                 test edi, edi
// 00505af0  74f2                 je 0x505ae4
// 00505af2  e947ffffff           jmp 0x505a3e
// 00505af7  c644247001           mov byte ptr [esp + 0x70], 1
// 00505afc  e93dffffff           jmp 0x505a3e
// 00505b01  8d4c244c             lea ecx, [esp + 0x4c]
// 00505b05  c7842498000000ffffffff mov dword ptr [esp + 0x98], 0xffffffff
// 00505b10  c74424489c067a00     mov dword ptr [esp + 0x48], 0x7a069c
// 00505b18  c744244c94067a00     mov dword ptr [esp + 0x4c], 0x7a0694
// 00505b20  e80b56f7ff           call 0x47b130
// 00505b25  8b442414             mov eax, dword ptr [esp + 0x14]
// 00505b29  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00505b30  64890d00000000       mov dword ptr fs:[0], ecx
// 00505b37  59                   pop ecx
// 00505b38  5f                   pop edi
// 00505b39  5e                   pop esi
// 00505b3a  5b                   pop ebx
// 00505b3b  8be5                 mov esp, ebp
// 00505b3d  5d                   pop ebp
// 00505b3e  c20400               ret 4
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?getIndex@Welder@_internal@G3D@@QAEHABVVector3@3@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
