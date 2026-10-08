// roc 2007-03 0055c370  unit: seg_00550000  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055c370
//
// 0055c370  6aff                 push -1
// 0055c372  68b4457500           push 0x7545b4
// 0055c377  64a100000000         mov eax, dword ptr fs:[0]
// 0055c37d  50                   push eax
// 0055c37e  64892500000000       mov dword ptr fs:[0], esp
// 0055c385  83ec3c               sub esp, 0x3c
// 0055c388  53                   push ebx
// 0055c389  55                   push ebp
// 0055c38a  56                   push esi
// 0055c38b  33db                 xor ebx, ebx
// 0055c38d  57                   push edi
// 0055c38e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0055c392  83ec20               sub esp, 0x20
// 0055c395  8bf4                 mov esi, esp
// 0055c397  8d842480000000       lea eax, [esp + 0x80]
// 0055c39e  8964243c             mov dword ptr [esp + 0x3c], esp
// 0055c3a2  50                   push eax
// 0055c3a3  8bce                 mov ecx, esi
// 0055c3a5  c744247801000000     mov dword ptr [esp + 0x78], 1
// 0055c3ad  ff157ce77700         call dword ptr [0x77e77c]
// 0055c3b3  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0055c3ba  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0055c3bd  8d542434             lea edx, [esp + 0x34]
// 0055c3c1  52                   push edx
// 0055c3c2  c644247802           mov byte ptr [esp + 0x78], 2
// 0055c3c7  e884c2eaff           call 0x408650
// 0055c3cc  8bc8                 mov ecx, eax
// 0055c3ce  c644247801           mov byte ptr [esp + 0x78], 1
// 0055c3d3  e8f8b7feff           call 0x547bd0
// 0055c3d8  8b08                 mov ecx, dword ptr [eax]
// 0055c3da  8bf9                 mov edi, ecx
// 0055c3dc  8918                 mov dword ptr [eax], ebx
// 0055c3de  897c241c             mov dword ptr [esp + 0x1c], edi
// 0055c3e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0055c3e6  3bc3                 cmp eax, ebx
// 0055c3e8  c644245403           mov byte ptr [esp + 0x54], 3
// 0055c3ed  7412                 je 0x55c401
// 0055c3ef  8b10                 mov edx, dword ptr [eax]
// 0055c3f1  8b4a04               mov ecx, dword ptr [edx + 4]
// 0055c3f4  8b1408               mov edx, dword ptr [eax + ecx]
// 0055c3f7  03c1                 add eax, ecx
// 0055c3f9  8bc8                 mov ecx, eax
// 0055c3fb  8b02                 mov eax, dword ptr [edx]
// 0055c3fd  6a01                 push 1
// 0055c3ff  ffd0                 call eax
// 0055c401  8b0f                 mov ecx, dword ptr [edi]
// 0055c403  8b5104               mov edx, dword ptr [ecx + 4]
// 0055c406  8b443a28             mov eax, dword ptr [edx + edi + 0x28]
// 0055c40a  50                   push eax
// 0055c40b  8d4c2434             lea ecx, [esp + 0x34]
// 0055c40f  e8bcbd0000           call 0x5681d0
// 0055c414  c7442430745e7800     mov dword ptr [esp + 0x30], 0x785e74
// 0055c41c  8d442414             lea eax, [esp + 0x14]
// 0055c420  50                   push eax
// 0055c421  8d4c2434             lea ecx, [esp + 0x34]
// 0055c425  c644245804           mov byte ptr [esp + 0x58], 4
// 0055c42a  e881c40000           call 0x5688b0
// 0055c42f  8b08                 mov ecx, dword ptr [eax]
// 0055c431  8be9                 mov ebp, ecx
// 0055c433  8918                 mov dword ptr [eax], ebx
// 0055c435  896c2420             mov dword ptr [esp + 0x20], ebp
// 0055c439  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0055c43d  3bcb                 cmp ecx, ebx
// 0055c43f  c644245405           mov byte ptr [esp + 0x54], 5
// 0055c444  8bf1                 mov esi, ecx
// 0055c446  740e                 je 0x55c456
// 0055c448  e86341ebff           call 0x4105b0
// 0055c44d  56                   push esi
// 0055c44e  e89d1c0c00           call 0x61e0f0
// 0055c453  83c404               add esp, 4
// 0055c456  6a10                 push 0x10
// 0055c458  e8ab1c0c00           call 0x61e108
// 0055c45d  83c404               add esp, 4
// 0055c460  3bc3                 cmp eax, ebx
// 0055c462  740d                 je 0x55c471
// 0055c464  895804               mov dword ptr [eax + 4], ebx
// 0055c467  895808               mov dword ptr [eax + 8], ebx
// 0055c46a  89580c               mov dword ptr [eax + 0xc], ebx
// 0055c46d  8bf0                 mov esi, eax
// 0055c46f  eb02                 jmp 0x55c473
// 0055c471  33f6                 xor esi, esi
// 0055c473  56                   push esi
// 0055c474  8d4c2430             lea ecx, [esp + 0x30]
// 0055c478  c644245805           mov byte ptr [esp + 0x58], 5
// 0055c47d  8974242c             mov dword ptr [esp + 0x2c], esi
// 0055c481  e89a25f3ff           call 0x48ea20
// 0055c486  56                   push esi
// 0055c487  8d542430             lea edx, [esp + 0x30]
// 0055c48b  56                   push esi
// 0055c48c  52                   push edx
// 0055c48d  e82eb91300           call 0x697dc0
// 0055c492  83c40c               add esp, 0xc
// 0055c495  8b742428             mov esi, dword ptr [esp + 0x28]
// 0055c499  56                   push esi
// 0055c49a  55                   push ebp
// 0055c49b  8d4c242c             lea ecx, [esp + 0x2c]
// 0055c49f  c644245c07           mov byte ptr [esp + 0x5c], 7
// 0055c4a4  e8d7ed0000           call 0x56b280
// 0055c4a9  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 0055c4ad  8933                 mov dword ptr [ebx], esi
// 0055c4af  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0055c4b3  85f6                 test esi, esi
// 0055c4b5  897304               mov dword ptr [ebx + 4], esi
// 0055c4b8  740c                 je 0x55c4c6
// 0055c4ba  8d4604               lea eax, [esi + 4]
// 0055c4bd  b901000000           mov ecx, 1
// 0055c4c2  f00fc108             lock xadd dword ptr [eax], ecx
// 0055c4c6  85f6                 test esi, esi
// 0055c4c8  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0055c4d0  c644245405           mov byte ptr [esp + 0x54], 5
// 0055c4d5  742a                 je 0x55c501
// 0055c4d7  8d5604               lea edx, [esi + 4]
// 0055c4da  83c8ff               or eax, 0xffffffff
// 0055c4dd  f00fc102             lock xadd dword ptr [edx], eax
// 0055c4e1  751e                 jne 0x55c501
// 0055c4e3  8b16                 mov edx, dword ptr [esi]
// 0055c4e5  8b4204               mov eax, dword ptr [edx + 4]
// 0055c4e8  8bce                 mov ecx, esi
// 0055c4ea  ffd0                 call eax
// 0055c4ec  8d4e08               lea ecx, [esi + 8]
// 0055c4ef  83caff               or edx, 0xffffffff
// 0055c4f2  f00fc111             lock xadd dword ptr [ecx], edx
// 0055c4f6  7509                 jne 0x55c501
// 0055c4f8  8b06                 mov eax, dword ptr [esi]
// 0055c4fa  8b5008               mov edx, dword ptr [eax + 8]
// 0055c4fd  8bce                 mov ecx, esi
// 0055c4ff  ffd2                 call edx
// 0055c501  85ed                 test ebp, ebp
// 0055c503  c644245404           mov byte ptr [esp + 0x54], 4
// 0055c508  7410                 je 0x55c51a
// 0055c50a  8bcd                 mov ecx, ebp
// 0055c50c  e89f40ebff           call 0x4105b0
// 0055c511  55                   push ebp
// 0055c512  e8d91b0c00           call 0x61e0f0
// 0055c517  83c404               add esp, 4
// 0055c51a  8d4c2438             lea ecx, [esp + 0x38]
// 0055c51e  e89d45ebff           call 0x410ac0
// 0055c523  8b07                 mov eax, dword ptr [edi]
// 0055c525  8b4804               mov ecx, dword ptr [eax + 4]
// 0055c528  8b1439               mov edx, dword ptr [ecx + edi]
// 0055c52b  8b02                 mov eax, dword ptr [edx]
// 0055c52d  03cf                 add ecx, edi
// 0055c52f  6a01                 push 1
// 0055c531  c644245801           mov byte ptr [esp + 0x58], 1
// 0055c536  ffd0                 call eax
// 0055c538  8d4c2460             lea ecx, [esp + 0x60]
// 0055c53c  c644245400           mov byte ptr [esp + 0x54], 0
// 0055c541  ff158ce77700         call dword ptr [0x77e78c]
// 0055c547  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0055c54b  5f                   pop edi
// 0055c54c  5e                   pop esi
// 0055c54d  5d                   pop ebp
// 0055c54e  8bc3                 mov eax, ebx
// 0055c550  64890d00000000       mov dword ptr fs:[0], ecx
// 0055c557  5b                   pop ebx
// 0055c558  83c448               add esp, 0x48
// 0055c55b  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ?get@DataModel@RBX@@QAE?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@VContentId@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
