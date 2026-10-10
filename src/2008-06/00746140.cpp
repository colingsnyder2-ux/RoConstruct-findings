// roc 2008-06 00746140  unit: CXTPDockContext  size: 408 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00746140
//
// 00746140  83ec20               sub esp, 0x20
// 00746143  53                   push ebx
// 00746144  55                   push ebp
// 00746145  56                   push esi
// 00746146  57                   push edi
// 00746147  8b3dac2d8000         mov edi, dword ptr [0x802dac]
// 0074614d  8bf1                 mov esi, ecx
// 0074614f  ffd7                 call edi
// 00746151  85c0                 test eax, eax
// 00746153  0f8577010000         jne 0x7462d0
// 00746159  8b4604               mov eax, dword ptr [esi + 4]
// 0074615c  8b4020               mov eax, dword ptr [eax + 0x20]
// 0074615f  50                   push eax
// 00746160  ff15a82d8000         call dword ptr [0x802da8]
// 00746166  50                   push eax
// 00746167  e872aaf5ff           call 0x6a0bde
// 0074616c  8b4e04               mov ecx, dword ptr [esi + 4]
// 0074616f  e89cecf6ff           call 0x6b4e10
// 00746174  89442410             mov dword ptr [esp + 0x10], eax
// 00746178  85c0                 test eax, eax
// 0074617a  0f8450010000         je 0x7462d0
// 00746180  33db                 xor ebx, ebx
// 00746182  33ed                 xor ebp, ebp
// 00746184  ffd7                 call edi
// 00746186  50                   push eax
// 00746187  e852aaf5ff           call 0x6a0bde
// 0074618c  3b4604               cmp eax, dword ptr [esi + 4]
// 0074618f  0f8527010000         jne 0x7462bc
// 00746195  8b3db02d8000         mov edi, dword ptr [0x802db0]
// 0074619b  eb03                 jmp 0x7461a0
// 0074619d  8d4900               lea ecx, [ecx]
// 007461a0  6a00                 push 0
// 007461a2  6a0f                 push 0xf
// 007461a4  6a0f                 push 0xf
// 007461a6  6a00                 push 0
// 007461a8  8d4c2424             lea ecx, [esp + 0x24]
// 007461ac  51                   push ecx
// 007461ad  ffd7                 call edi
// 007461af  85c0                 test eax, eax
// 007461b1  7433                 je 0x7461e6
// 007461b3  6a0f                 push 0xf
// 007461b5  6a0f                 push 0xf
// 007461b7  6a00                 push 0
// 007461b9  8d542420             lea edx, [esp + 0x20]
// 007461bd  52                   push edx
// 007461be  ff15782c8000         call dword ptr [0x802c78]
// 007461c4  85c0                 test eax, eax
// 007461c6  741e                 je 0x7461e6
// 007461c8  8d442414             lea eax, [esp + 0x14]
// 007461cc  50                   push eax
// 007461cd  ff15c82c8000         call dword ptr [0x802cc8]
// 007461d3  6a00                 push 0
// 007461d5  6a0f                 push 0xf
// 007461d7  6a0f                 push 0xf
// 007461d9  6a00                 push 0
// 007461db  8d4c2424             lea ecx, [esp + 0x24]
// 007461df  51                   push ecx
// 007461e0  ffd7                 call edi
// 007461e2  85c0                 test eax, eax
// 007461e4  75cd                 jne 0x7461b3
// 007461e6  6a00                 push 0
// 007461e8  6a00                 push 0
// 007461ea  6a00                 push 0
// 007461ec  8d542420             lea edx, [esp + 0x20]
// 007461f0  52                   push edx
// 007461f1  ff15782c8000         call dword ptr [0x802c78]
// 007461f7  85c0                 test eax, eax
// 007461f9  0f84b3000000         je 0x7462b2
// 007461ff  8b442418             mov eax, dword ptr [esp + 0x18]
// 00746203  3d02020000           cmp eax, 0x202
// 00746208  0f84ae000000         je 0x7462bc
// 0074620e  3d00020000           cmp eax, 0x200
// 00746213  7562                 jne 0x746277
// 00746215  8b442428             mov eax, dword ptr [esp + 0x28]
// 00746219  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0074621d  3bd8                 cmp ebx, eax
// 0074621f  7504                 jne 0x746225
// 00746221  3be9                 cmp ebp, ecx
// 00746223  7462                 je 0x746287
// 00746225  837e0801             cmp dword ptr [esi + 8], 1
// 00746229  8bd8                 mov ebx, eax
// 0074622b  8be9                 mov ebp, ecx
// 0074622d  7515                 jne 0x746244
// 0074622f  8bd0                 mov edx, eax
// 00746231  83ec08               sub esp, 8
// 00746234  8bc4                 mov eax, esp
// 00746236  894804               mov dword ptr [eax + 4], ecx
// 00746239  8bce                 mov ecx, esi
// 0074623b  8910                 mov dword ptr [eax], edx
// 0074623d  e8def7ffff           call 0x745a20
// 00746242  eb4e                 jmp 0x746292
// 00746244  8b4e04               mov ecx, dword ptr [esi + 4]
// 00746247  8b01                 mov eax, dword ptr [ecx]
// 00746249  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 0074624f  ffd2                 call edx
// 00746251  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00746255  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00746259  83ec08               sub esp, 8
// 0074625c  85c0                 test eax, eax
// 0074625e  8bc4                 mov eax, esp
// 00746260  8908                 mov dword ptr [eax], ecx
// 00746262  895004               mov dword ptr [eax + 4], edx
// 00746265  8bce                 mov ecx, esi
// 00746267  7407                 je 0x746270
// 00746269  e862f9ffff           call 0x745bd0
// 0074626e  eb22                 jmp 0x746292
// 00746270  e87bfaffff           call 0x745cf0
// 00746275  eb1b                 jmp 0x746292
// 00746277  3d00010000           cmp eax, 0x100
// 0074627c  7509                 jne 0x746287
// 0074627e  837c241c1b           cmp dword ptr [esp + 0x1c], 0x1b
// 00746283  7437                 je 0x7462bc
// 00746285  eb0b                 jmp 0x746292
// 00746287  8d442414             lea eax, [esp + 0x14]
// 0074628b  50                   push eax
// 0074628c  ff15c82c8000         call dword ptr [0x802cc8]
// 00746292  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00746296  e865c6f5ff           call 0x6a2900
// 0074629b  ff15ac2d8000         call dword ptr [0x802dac]
// 007462a1  50                   push eax
// 007462a2  e837a9f5ff           call 0x6a0bde
// 007462a7  3b4604               cmp eax, dword ptr [esi + 4]
// 007462aa  0f84f0feffff         je 0x7461a0
// 007462b0  eb0a                 jmp 0x7462bc
// 007462b2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007462b6  51                   push ecx
// 007462b7  e89eaef5ff           call 0x6a115a
// 007462bc  ff15b42d8000         call dword ptr [0x802db4]
// 007462c2  8b542410             mov edx, dword ptr [esp + 0x10]
// 007462c6  8b4274               mov eax, dword ptr [edx + 0x74]
// 007462c9  c7404c01000000       mov dword ptr [eax + 0x4c], 1
// 007462d0  5f                   pop edi
// 007462d1  5e                   pop esi
// 007462d2  5d                   pop ebp
// 007462d3  5b                   pop ebx
// 007462d4  83c420               add esp, 0x20
// 007462d7  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDockContext.cpp (function ?Track@CXTPDockContext@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDockContext.cpp
