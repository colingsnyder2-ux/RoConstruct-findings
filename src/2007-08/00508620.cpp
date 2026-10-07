// roc 2007-08 00508620  unit: G3D::GCamera  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00508620
//
// 00508620  6aff                 push -1
// 00508622  682afa7400           push 0x74fa2a
// 00508627  64a100000000         mov eax, dword ptr fs:[0]
// 0050862d  50                   push eax
// 0050862e  83ec28               sub esp, 0x28
// 00508631  53                   push ebx
// 00508632  55                   push ebp
// 00508633  56                   push esi
// 00508634  57                   push edi
// 00508635  a188518b00           mov eax, dword ptr [0x8b5188]
// 0050863a  33c4                 xor eax, esp
// 0050863c  50                   push eax
// 0050863d  8d44243c             lea eax, [esp + 0x3c]
// 00508641  64a300000000         mov dword ptr fs:[0], eax
// 00508647  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0050864b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0050864f  33ff                 xor edi, edi
// 00508651  50                   push eax
// 00508652  8bce                 mov ecx, esi
// 00508654  897c2448             mov dword ptr [esp + 0x48], edi
// 00508658  89742418             mov dword ptr [esp + 0x18], esi
// 0050865c  897c241c             mov dword ptr [esp + 0x1c], edi
// 00508660  ff159ce67700         call dword ptr [0x77e69c]
// 00508666  8d442424             lea eax, [esp + 0x24]
// 0050866a  50                   push eax
// 0050866b  8bce                 mov ecx, esi
// 0050866d  897c2448             mov dword ptr [esp + 0x48], edi
// 00508671  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00508679  ff15e0e57700         call dword ptr [0x77e5e0]
// 0050867f  8b38                 mov edi, dword ptr [eax]
// 00508681  8b5804               mov ebx, dword ptr [eax + 4]
// 00508684  8d4c242c             lea ecx, [esp + 0x2c]
// 00508688  51                   push ecx
// 00508689  8bce                 mov ecx, esi
// 0050868b  ff15e4e57700         call dword ptr [0x77e5e4]
// 00508691  8b10                 mov edx, dword ptr [eax]
// 00508693  8b6804               mov ebp, dword ptr [eax + 4]
// 00508696  8d442434             lea eax, [esp + 0x34]
// 0050869a  50                   push eax
// 0050869b  8bce                 mov ecx, esi
// 0050869d  89542420             mov dword ptr [esp + 0x20], edx
// 005086a1  ff15e0e57700         call dword ptr [0x77e5e0]
// 005086a7  8b08                 mov ecx, dword ptr [eax]
// 005086a9  8b542414             mov edx, dword ptr [esp + 0x14]
// 005086ad  8b4004               mov eax, dword ptr [eax + 4]
// 005086b0  52                   push edx
// 005086b1  8b1590e97700         mov edx, dword ptr [0x77e990]
// 005086b7  894c2420             mov dword ptr [esp + 0x20], ecx
// 005086bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005086bf  51                   push ecx
// 005086c0  52                   push edx
// 005086c1  53                   push ebx
// 005086c2  57                   push edi
// 005086c3  55                   push ebp
// 005086c4  50                   push eax
// 005086c5  8d442438             lea eax, [esp + 0x38]
// 005086c9  50                   push eax
// 005086ca  e8510ef6ff           call 0x469520
// 005086cf  83c420               add esp, 0x20
// 005086d2  8bc6                 mov eax, esi
// 005086d4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005086d8  64890d00000000       mov dword ptr fs:[0], ecx
// 005086df  59                   pop ecx
// 005086e0  5f                   pop edi
// 005086e1  5e                   pop esi
// 005086e2  5d                   pop ebp
// 005086e3  5b                   pop ebx
// 005086e4  83c434               add esp, 0x34
// 005086e7  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?toUpper@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
