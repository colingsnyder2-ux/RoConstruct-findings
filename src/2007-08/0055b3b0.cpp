// roc 2007-08 0055b3b0  unit: RBX::VTool::?$FactoryProduct::Creator  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055b3b0
//
// 0055b3b0  6aff                 push -1
// 0055b3b2  68a4377500           push 0x7537a4
// 0055b3b7  64a100000000         mov eax, dword ptr fs:[0]
// 0055b3bd  50                   push eax
// 0055b3be  64892500000000       mov dword ptr fs:[0], esp
// 0055b3c5  83ec3c               sub esp, 0x3c
// 0055b3c8  53                   push ebx
// 0055b3c9  55                   push ebp
// 0055b3ca  56                   push esi
// 0055b3cb  33db                 xor ebx, ebx
// 0055b3cd  57                   push edi
// 0055b3ce  895c2418             mov dword ptr [esp + 0x18], ebx
// 0055b3d2  83ec20               sub esp, 0x20
// 0055b3d5  8bf4                 mov esi, esp
// 0055b3d7  8d842480000000       lea eax, [esp + 0x80]
// 0055b3de  8964243c             mov dword ptr [esp + 0x3c], esp
// 0055b3e2  50                   push eax
// 0055b3e3  8bce                 mov ecx, esi
// 0055b3e5  c744247801000000     mov dword ptr [esp + 0x78], 1
// 0055b3ed  ff159ce67700         call dword ptr [0x77e69c]
// 0055b3f3  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0055b3fa  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0055b3fd  8d542434             lea edx, [esp + 0x34]
// 0055b401  52                   push edx
// 0055b402  c644247802           mov byte ptr [esp + 0x78], 2
// 0055b407  e834d3eaff           call 0x408740
// 0055b40c  8bc8                 mov ecx, eax
// 0055b40e  c644247801           mov byte ptr [esp + 0x78], 1
// 0055b413  e878dafeff           call 0x548e90
// 0055b418  8b08                 mov ecx, dword ptr [eax]
// 0055b41a  8bf9                 mov edi, ecx
// 0055b41c  8918                 mov dword ptr [eax], ebx
// 0055b41e  897c241c             mov dword ptr [esp + 0x1c], edi
// 0055b422  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055b426  3bc3                 cmp eax, ebx
// 0055b428  c644245403           mov byte ptr [esp + 0x54], 3
// 0055b42d  7412                 je 0x55b441
// 0055b42f  8b10                 mov edx, dword ptr [eax]
// 0055b431  8b4a04               mov ecx, dword ptr [edx + 4]
// 0055b434  8b1408               mov edx, dword ptr [eax + ecx]
// 0055b437  03c1                 add eax, ecx
// 0055b439  8bc8                 mov ecx, eax
// 0055b43b  8b02                 mov eax, dword ptr [edx]
// 0055b43d  6a01                 push 1
// 0055b43f  ffd0                 call eax
// 0055b441  8b0f                 mov ecx, dword ptr [edi]
// 0055b443  8b5104               mov edx, dword ptr [ecx + 4]
// 0055b446  8b443a28             mov eax, dword ptr [edx + edi + 0x28]
// 0055b44a  50                   push eax
// 0055b44b  8d4c2434             lea ecx, [esp + 0x34]
// 0055b44f  e8acb70000           call 0x566c00
// 0055b454  c7442430cc6d7800     mov dword ptr [esp + 0x30], 0x786dcc
// 0055b45c  8d442414             lea eax, [esp + 0x14]
// 0055b460  50                   push eax
// 0055b461  8d4c2434             lea ecx, [esp + 0x34]
// 0055b465  c644245804           mov byte ptr [esp + 0x58], 4
// 0055b46a  e891bc0000           call 0x567100
// 0055b46f  8b08                 mov ecx, dword ptr [eax]
// 0055b471  8be9                 mov ebp, ecx
// 0055b473  8918                 mov dword ptr [eax], ebx
// 0055b475  896c2420             mov dword ptr [esp + 0x20], ebp
// 0055b479  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055b47d  3bcb                 cmp ecx, ebx
// 0055b47f  c644245405           mov byte ptr [esp + 0x54], 5
// 0055b484  8bf1                 mov esi, ecx
// 0055b486  740e                 je 0x55b496
// 0055b488  e87343ebff           call 0x40f800
// 0055b48d  56                   push esi
// 0055b48e  e8cf470d00           call 0x62fc62
// 0055b493  83c404               add esp, 4
// 0055b496  6a10                 push 0x10
// 0055b498  e8594a0d00           call 0x62fef6
// 0055b49d  83c404               add esp, 4
// 0055b4a0  3bc3                 cmp eax, ebx
// 0055b4a2  740d                 je 0x55b4b1
// 0055b4a4  895804               mov dword ptr [eax + 4], ebx
// 0055b4a7  895808               mov dword ptr [eax + 8], ebx
// 0055b4aa  89580c               mov dword ptr [eax + 0xc], ebx
// 0055b4ad  8bf0                 mov esi, eax
// 0055b4af  eb02                 jmp 0x55b4b3
// 0055b4b1  33f6                 xor esi, esi
// 0055b4b3  56                   push esi
// 0055b4b4  8d4c2430             lea ecx, [esp + 0x30]
// 0055b4b8  c644245805           mov byte ptr [esp + 0x58], 5
// 0055b4bd  8974242c             mov dword ptr [esp + 0x2c], esi
// 0055b4c1  e89a96f3ff           call 0x494b60
// 0055b4c6  56                   push esi
// 0055b4c7  8d542430             lea edx, [esp + 0x30]
// 0055b4cb  56                   push esi
// 0055b4cc  52                   push edx
// 0055b4cd  e84e17ebff           call 0x40cc20
// 0055b4d2  83c40c               add esp, 0xc
// 0055b4d5  8b742428             mov esi, dword ptr [esp + 0x28]
// 0055b4d9  56                   push esi
// 0055b4da  55                   push ebp
// 0055b4db  8d4c242c             lea ecx, [esp + 0x2c]
// 0055b4df  c644245c07           mov byte ptr [esp + 0x5c], 7
// 0055b4e4  e877000100           call 0x56b560
// 0055b4e9  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0055b4ed  8933                 mov dword ptr [ebx], esi
// 0055b4ef  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0055b4f3  85f6                 test esi, esi
// 0055b4f5  897304               mov dword ptr [ebx + 4], esi
// 0055b4f8  740c                 je 0x55b506
// 0055b4fa  8d4604               lea eax, [esi + 4]
// 0055b4fd  b901000000           mov ecx, 1
// 0055b502  f00fc108             lock xadd dword ptr [eax], ecx
// 0055b506  85f6                 test esi, esi
// 0055b508  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0055b510  c644245405           mov byte ptr [esp + 0x54], 5
// 0055b515  742a                 je 0x55b541
// 0055b517  8d5604               lea edx, [esi + 4]
// 0055b51a  83c8ff               or eax, 0xffffffff
// 0055b51d  f00fc102             lock xadd dword ptr [edx], eax
// 0055b521  751e                 jne 0x55b541
// 0055b523  8b16                 mov edx, dword ptr [esi]
// 0055b525  8b4204               mov eax, dword ptr [edx + 4]
// 0055b528  8bce                 mov ecx, esi
// 0055b52a  ffd0                 call eax
// 0055b52c  8d4e08               lea ecx, [esi + 8]
// 0055b52f  83caff               or edx, 0xffffffff
// 0055b532  f00fc111             lock xadd dword ptr [ecx], edx
// 0055b536  7509                 jne 0x55b541
// 0055b538  8b06                 mov eax, dword ptr [esi]
// 0055b53a  8b5008               mov edx, dword ptr [eax + 8]
// 0055b53d  8bce                 mov ecx, esi
// 0055b53f  ffd2                 call edx
// 0055b541  85ed                 test ebp, ebp
// 0055b543  c644245404           mov byte ptr [esp + 0x54], 4
// 0055b548  7410                 je 0x55b55a
// 0055b54a  8bcd                 mov ecx, ebp
// 0055b54c  e8af42ebff           call 0x40f800
// 0055b551  55                   push ebp
// 0055b552  e80b470d00           call 0x62fc62
// 0055b557  83c404               add esp, 4
// 0055b55a  8d4c2438             lea ecx, [esp + 0x38]
// 0055b55e  e8dd45ebff           call 0x40fb40
// 0055b563  8b07                 mov eax, dword ptr [edi]
// 0055b565  8b4804               mov ecx, dword ptr [eax + 4]
// 0055b568  8b1439               mov edx, dword ptr [ecx + edi]
// 0055b56b  8b02                 mov eax, dword ptr [edx]
// 0055b56d  03cf                 add ecx, edi
// 0055b56f  6a01                 push 1
// 0055b571  c644245801           mov byte ptr [esp + 0x58], 1
// 0055b576  ffd0                 call eax
// 0055b578  8d4c2460             lea ecx, [esp + 0x60]
// 0055b57c  c644245400           mov byte ptr [esp + 0x54], 0
// 0055b581  ff15ace67700         call dword ptr [0x77e6ac]
// 0055b587  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0055b58b  5f                   pop edi
// 0055b58c  5e                   pop esi
// 0055b58d  5d                   pop ebp
// 0055b58e  8bc3                 mov eax, ebx
// 0055b590  64890d00000000       mov dword ptr fs:[0], ecx
// 0055b597  5b                   pop ebx
// 0055b598  83c448               add esp, 0x48
// 0055b59b  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ?get@DataModel@RBX@@QAE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
