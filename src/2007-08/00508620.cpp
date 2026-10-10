// from server: 100% by tester
// roc 2007-03 004fd5d0  unit: seg_004f0000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd5d0
//
// 004fd5d0  6aff                 push -1
// 004fd5d2  68ba097500           push 0x7509ba
// 004fd5d7  64a100000000         mov eax, dword ptr fs:[0]
// 004fd5dd  50                   push eax
// 004fd5de  83ec28               sub esp, 0x28
// 004fd5e1  53                   push ebx
// 004fd5e2  55                   push ebp
// 004fd5e3  56                   push esi
// 004fd5e4  57                   push edi
// 004fd5e5  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004fd5ea  33c4                 xor eax, esp
// 004fd5ec  50                   push eax
// 004fd5ed  8d44243c             lea eax, [esp + 0x3c]
// 004fd5f1  64a300000000         mov dword ptr fs:[0], eax
// 004fd5f7  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 004fd5fb  8b442450             mov eax, dword ptr [esp + 0x50]
// 004fd5ff  33ff                 xor edi, edi
// 004fd601  50                   push eax
// 004fd602  8bce                 mov ecx, esi
// 004fd604  897c2448             mov dword ptr [esp + 0x48], edi
// 004fd608  89742418             mov dword ptr [esp + 0x18], esi
// 004fd60c  897c241c             mov dword ptr [esp + 0x1c], edi
// 004fd610  ff157ce77700         call dword ptr [0x77e77c]
// 004fd616  8d442424             lea eax, [esp + 0x24]
// 004fd61a  50                   push eax
// 004fd61b  8bce                 mov ecx, esi
// 004fd61d  897c2448             mov dword ptr [esp + 0x48], edi
// 004fd621  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004fd629  ff15b8e67700         call dword ptr [0x77e6b8]
// 004fd62f  8b38                 mov edi, dword ptr [eax]
// 004fd631  8b5804               mov ebx, dword ptr [eax + 4]
// 004fd634  8d4c242c             lea ecx, [esp + 0x2c]
// 004fd638  51                   push ecx
// 004fd639  8bce                 mov ecx, esi
// 004fd63b  ff15b4e67700         call dword ptr [0x77e6b4]
// 004fd641  8b10                 mov edx, dword ptr [eax]
// 004fd643  8b6804               mov ebp, dword ptr [eax + 4]
// 004fd646  8d442434             lea eax, [esp + 0x34]
// 004fd64a  50                   push eax
// 004fd64b  8bce                 mov ecx, esi
// 004fd64d  89542420             mov dword ptr [esp + 0x20], edx
// 004fd651  ff15b8e67700         call dword ptr [0x77e6b8]
// 004fd657  8b08                 mov ecx, dword ptr [eax]
// 004fd659  8b542414             mov edx, dword ptr [esp + 0x14]
// 004fd65d  8b4004               mov eax, dword ptr [eax + 4]
// 004fd660  52                   push edx
// 004fd661  8b15a8e97700         mov edx, dword ptr [0x77e9a8]
// 004fd667  894c2420             mov dword ptr [esp + 0x20], ecx
// 004fd66b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004fd66f  51                   push ecx
// 004fd670  52                   push edx
// 004fd671  53                   push ebx
// 004fd672  57                   push edi
// 004fd673  55                   push ebp
// 004fd674  50                   push eax
// 004fd675  8d442438             lea eax, [esp + 0x38]
// 004fd679  50                   push eax
// 004fd67a  e831bcf6ff           call 0x4692b0
// 004fd67f  83c420               add esp, 0x20
// 004fd682  8bc6                 mov eax, esi
// 004fd684  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004fd688  64890d00000000       mov dword ptr fs:[0], ecx
// 004fd68f  59                   pop ecx
// 004fd690  5f                   pop edi
// 004fd691  5e                   pop esi
// 004fd692  5d                   pop ebp
// 004fd693  5b                   pop ebx
// 004fd694  83c434               add esp, 0x34
// 004fd697  c3                   ret 
// library g3d-6.09/G3Dcpp\stringutils.cpp (function ?toUpper@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/stringutils.cpp
