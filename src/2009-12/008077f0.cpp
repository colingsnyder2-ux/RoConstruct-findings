// roc 2009-12 008077f0  unit: CXTPCommandBar  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008077f0
//
// 008077f0  83ec3c               sub esp, 0x3c
// 008077f3  55                   push ebp
// 008077f4  57                   push edi
// 008077f5  8bf9                 mov edi, ecx
// 008077f7  33ed                 xor ebp, ebp
// 008077f9  3bfd                 cmp edi, ebp
// 008077fb  0f8471010000         je 0x807972
// 00807801  396f20               cmp dword ptr [edi + 0x20], ebp
// 00807804  0f8468010000         je 0x807972
// 0080780a  53                   push ebx
// 0080780b  56                   push esi
// 0080780c  e8dff8ffff           call 0x8070f0
// 00807811  8bf0                 mov esi, eax
// 00807813  8bcf                 mov ecx, edi
// 00807815  89742414             mov dword ptr [esp + 0x14], esi
// 00807819  e8b2ccffff           call 0x8044d0
// 0080781e  8bd8                 mov ebx, eax
// 00807820  3bdd                 cmp ebx, ebp
// 00807822  740f                 je 0x807833
// 00807824  8b4374               mov eax, dword ptr [ebx + 0x74]
// 00807827  8b8884000000         mov ecx, dword ptr [eax + 0x84]
// 0080782d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00807831  eb04                 jmp 0x807837
// 00807833  896c2410             mov dword ptr [esp + 0x10], ebp
// 00807837  3bf5                 cmp esi, ebp
// 00807839  0f8431010000         je 0x807970
// 0080783f  8bcf                 mov ecx, edi
// 00807841  e85accffff           call 0x8044a0
// 00807846  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 0080784c  8d4c241c             lea ecx, [esp + 0x1c]
// 00807850  89542418             mov dword ptr [esp + 0x18], edx
// 00807854  e8a3c9feff           call 0x7f41fc
// 00807859  33d2                 xor edx, edx
// 0080785b  8bcf                 mov ecx, edi
// 0080785d  c744241ce42a9f00     mov dword ptr [esp + 0x1c], 0x9f2ae4
// 00807865  896c2448             mov dword ptr [esp + 0x48], ebp
// 00807869  896c2444             mov dword ptr [esp + 0x44], ebp
// 0080786d  897c2430             mov dword ptr [esp + 0x30], edi
// 00807871  89542424             mov dword ptr [esp + 0x24], edx
// 00807875  e8d6d9ffff           call 0x805250
// 0080787a  85c0                 test eax, eax
// 0080787c  0f8ee1000000         jle 0x807963
// 00807882  3bd5                 cmp edx, ebp
// 00807884  8b87fc000000         mov eax, dword ptr [edi + 0xfc]
// 0080788a  7c0d                 jl 0x807899
// 0080788c  3b502c               cmp edx, dword ptr [eax + 0x2c]
// 0080788f  7d08                 jge 0x807899
// 00807891  8b4028               mov eax, dword ptr [eax + 0x28]
// 00807894  8b3490               mov esi, dword ptr [eax + edx*4]
// 00807897  eb02                 jmp 0x80789b
// 00807899  33f6                 xor esi, esi
// 0080789b  8b16                 mov edx, dword ptr [esi]
// 0080789d  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008078a3  6a29                 push 0x29
// 008078a5  8bce                 mov ecx, esi
// 008078a7  ffd0                 call eax
// 008078a9  85c0                 test eax, eax
// 008078ab  0f8496000000         je 0x807947
// 008078b1  8b16                 mov edx, dword ptr [esi]
// 008078b3  8b8224010000         mov eax, dword ptr [edx + 0x124]
// 008078b9  8bce                 mov ecx, esi
// 008078bb  ffd0                 call eax
// 008078bd  396c2418             cmp dword ptr [esp + 0x18], ebp
// 008078c1  0f8580000000         jne 0x807947
// 008078c7  f686d400000008       test byte ptr [esi + 0xd4], 8
// 008078ce  7577                 jne 0x807947
// 008078d0  55                   push ebp
// 008078d1  8d542420             lea edx, [esp + 0x20]
// 008078d5  52                   push edx
// 008078d6  8974244c             mov dword ptr [esp + 0x4c], esi
// 008078da  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008078e0  68ffff11bd           push 0xbd11ffff
// 008078e5  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008078e9  55                   push ebp
// 008078ea  8bcf                 mov ecx, edi
// 008078ec  896c2458             mov dword ptr [esp + 0x58], ebp
// 008078f0  896c2444             mov dword ptr [esp + 0x44], ebp
// 008078f4  e86bc7feff           call 0x7f4064
// 008078f9  85c0                 test eax, eax
// 008078fb  754a                 jne 0x807947
// 008078fd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00807901  55                   push ebp
// 00807902  8d442420             lea eax, [esp + 0x20]
// 00807906  50                   push eax
// 00807907  6aff                 push -1
// 00807909  51                   push ecx
// 0080790a  8bcf                 mov ecx, edi
// 0080790c  e853c7feff           call 0x7f4064
// 00807911  85c0                 test eax, eax
// 00807913  7532                 jne 0x807947
// 00807915  3bdd                 cmp ebx, ebp
// 00807917  741b                 je 0x807934
// 00807919  396b5c               cmp dword ptr [ebx + 0x5c], ebp
// 0080791c  7416                 je 0x807934
// 0080791e  83be9c000000ff       cmp dword ptr [esi + 0x9c], -1
// 00807925  7420                 je 0x807947
// 00807927  6a01                 push 1
// 00807929  8d4c2420             lea ecx, [esp + 0x20]
// 0080792d  e8bec8ffff           call 0x8041f0
// 00807932  eb13                 jmp 0x807947
// 00807934  8b542410             mov edx, dword ptr [esp + 0x10]
// 00807938  8b442414             mov eax, dword ptr [esp + 0x14]
// 0080793c  52                   push edx
// 0080793d  50                   push eax
// 0080793e  8d4c2424             lea ecx, [esp + 0x24]
// 00807942  e897eb1100           call 0x9264de
// 00807947  8b542424             mov edx, dword ptr [esp + 0x24]
// 0080794b  42                   inc edx
// 0080794c  8bcf                 mov ecx, edi
// 0080794e  89542424             mov dword ptr [esp + 0x24], edx
// 00807952  e8f9d8ffff           call 0x805250
// 00807957  3bd0                 cmp edx, eax
// 00807959  0f8c23ffffff         jl 0x807882
// 0080795f  8b742414             mov esi, dword ptr [esp + 0x14]
// 00807963  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00807967  51                   push ecx
// 00807968  56                   push esi
// 00807969  8bcf                 mov ecx, edi
// 0080796b  e868eb1100           call 0x9264d8
// 00807970  5e                   pop esi
// 00807971  5b                   pop ebx
// 00807972  5f                   pop edi
// 00807973  5d                   pop ebp
// 00807974  83c43c               add esp, 0x3c
// 00807977  c3                   ret 
// copied from an identical function in another client (function ?OnUpdateCmdUI@CXTPCommandBar@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp