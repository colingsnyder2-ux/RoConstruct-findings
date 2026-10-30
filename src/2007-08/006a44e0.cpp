// from server: 100% by auto
// roc 2007-08 006a44e0  unit: CXTPShortcutManager  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a44e0
//
// 006a44e0  53                   push ebx
// 006a44e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006a44e5  56                   push esi
// 006a44e6  57                   push edi
// 006a44e7  33ff                 xor edi, edi
// 006a44e9  3bdf                 cmp ebx, edi
// 006a44eb  8bf1                 mov esi, ecx
// 006a44ed  7d05                 jge 0x6a44f4
// 006a44ef  e82cbaf8ff           call 0x62ff20
// 006a44f4  8b442414             mov eax, dword ptr [esp + 0x14]
// 006a44f8  3bc7                 cmp eax, edi
// 006a44fa  7c03                 jl 0x6a44ff
// 006a44fc  894610               mov dword ptr [esi + 0x10], eax
// 006a44ff  3bdf                 cmp ebx, edi
// 006a4501  751f                 jne 0x6a4522
// 006a4503  8b4604               mov eax, dword ptr [esi + 4]
// 006a4506  3bc7                 cmp eax, edi
// 006a4508  740c                 je 0x6a4516
// 006a450a  50                   push eax
// 006a450b  e816baf8ff           call 0x62ff26
// 006a4510  83c404               add esp, 4
// 006a4513  897e04               mov dword ptr [esi + 4], edi
// 006a4516  897e0c               mov dword ptr [esi + 0xc], edi
// 006a4519  897e08               mov dword ptr [esi + 8], edi
// 006a451c  5f                   pop edi
// 006a451d  5e                   pop esi
// 006a451e  5b                   pop ebx
// 006a451f  c20800               ret 8
// 006a4522  8b5604               mov edx, dword ptr [esi + 4]
// 006a4525  3bd7                 cmp edx, edi
// 006a4527  55                   push ebp
// 006a4528  7531                 jne 0x6a455b
// 006a452a  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 006a452d  3bdd                 cmp ebx, ebp
// 006a452f  7e02                 jle 0x6a4533
// 006a4531  8beb                 mov ebp, ebx
// 006a4533  8d7c6d00             lea edi, [ebp + ebp*2]
// 006a4537  03ff                 add edi, edi
// 006a4539  57                   push edi
// 006a453a  e8f3b9f8ff           call 0x62ff32
// 006a453f  57                   push edi
// 006a4540  6a00                 push 0
// 006a4542  50                   push eax
// 006a4543  894604               mov dword ptr [esi + 4], eax
// 006a4546  e841c6f8ff           call 0x630b8c
// 006a454b  83c410               add esp, 0x10
// 006a454e  896e0c               mov dword ptr [esi + 0xc], ebp
// 006a4551  5d                   pop ebp
// 006a4552  5f                   pop edi
// 006a4553  895e08               mov dword ptr [esi + 8], ebx
// 006a4556  5e                   pop esi
// 006a4557  5b                   pop ebx
// 006a4558  c20800               ret 8
// 006a455b  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006a455e  3bd9                 cmp ebx, ecx
// 006a4560  7f2f                 jg 0x6a4591
// 006a4562  8b4e08               mov ecx, dword ptr [esi + 8]
// 006a4565  3bd9                 cmp ebx, ecx
// 006a4567  0f8ebe000000         jle 0x6a462b
// 006a456d  8bc3                 mov eax, ebx
// 006a456f  2bc1                 sub eax, ecx
// 006a4571  8d0440               lea eax, [eax + eax*2]
// 006a4574  03c0                 add eax, eax
// 006a4576  50                   push eax
// 006a4577  8d0c49               lea ecx, [ecx + ecx*2]
// 006a457a  8d144a               lea edx, [edx + ecx*2]
// 006a457d  57                   push edi
// 006a457e  52                   push edx
// 006a457f  e808c6f8ff           call 0x630b8c
// 006a4584  83c40c               add esp, 0xc
// 006a4587  5d                   pop ebp
// 006a4588  5f                   pop edi
// 006a4589  895e08               mov dword ptr [esi + 8], ebx
// 006a458c  5e                   pop esi
// 006a458d  5b                   pop ebx
// 006a458e  c20800               ret 8
// 006a4591  8b4610               mov eax, dword ptr [esi + 0x10]
// 006a4594  3bc7                 cmp eax, edi
// 006a4596  7524                 jne 0x6a45bc
// 006a4598  8b4608               mov eax, dword ptr [esi + 8]
// 006a459b  99                   cdq 
// 006a459c  83e207               and edx, 7
// 006a459f  03c2                 add eax, edx
// 006a45a1  c1f803               sar eax, 3
// 006a45a4  83f804               cmp eax, 4
// 006a45a7  7d07                 jge 0x6a45b0
// 006a45a9  b804000000           mov eax, 4
// 006a45ae  eb0c                 jmp 0x6a45bc
// 006a45b0  3d00040000           cmp eax, 0x400
// 006a45b5  7e05                 jle 0x6a45bc
// 006a45b7  b800040000           mov eax, 0x400
// 006a45bc  8d3c01               lea edi, [ecx + eax]
// 006a45bf  3bdf                 cmp ebx, edi
// 006a45c1  7d06                 jge 0x6a45c9
// 006a45c3  897c2414             mov dword ptr [esp + 0x14], edi
// 006a45c7  eb06                 jmp 0x6a45cf
// 006a45c9  895c2414             mov dword ptr [esp + 0x14], ebx
// 006a45cd  8bfb                 mov edi, ebx
// 006a45cf  3bf9                 cmp edi, ecx
// 006a45d1  7d05                 jge 0x6a45d8
// 006a45d3  e848b9f8ff           call 0x62ff20
// 006a45d8  8d3c7f               lea edi, [edi + edi*2]
// 006a45db  03ff                 add edi, edi
// 006a45dd  57                   push edi
// 006a45de  e84fb9f8ff           call 0x62ff32
// 006a45e3  8b4e04               mov ecx, dword ptr [esi + 4]
// 006a45e6  8be8                 mov ebp, eax
// 006a45e8  8b4608               mov eax, dword ptr [esi + 8]
// 006a45eb  8d0440               lea eax, [eax + eax*2]
// 006a45ee  03c0                 add eax, eax
// 006a45f0  50                   push eax
// 006a45f1  51                   push ecx
// 006a45f2  57                   push edi
// 006a45f3  55                   push ebp
// 006a45f4  e887d2d5ff           call 0x401880
// 006a45f9  8b4e08               mov ecx, dword ptr [esi + 8]
// 006a45fc  8bc3                 mov eax, ebx
// 006a45fe  2bc1                 sub eax, ecx
// 006a4600  8d1440               lea edx, [eax + eax*2]
// 006a4603  03d2                 add edx, edx
// 006a4605  52                   push edx
// 006a4606  8d0449               lea eax, [ecx + ecx*2]
// 006a4609  8d4c4500             lea ecx, [ebp + eax*2]
// 006a460d  6a00                 push 0
// 006a460f  51                   push ecx
// 006a4610  e877c5f8ff           call 0x630b8c
// 006a4615  8b5604               mov edx, dword ptr [esi + 4]
// 006a4618  52                   push edx
// 006a4619  e808b9f8ff           call 0x62ff26
// 006a461e  8b442438             mov eax, dword ptr [esp + 0x38]
// 006a4622  83c424               add esp, 0x24
// 006a4625  896e04               mov dword ptr [esi + 4], ebp
// 006a4628  89460c               mov dword ptr [esi + 0xc], eax
// 006a462b  5d                   pop ebp
// 006a462c  5f                   pop edi
// 006a462d  895e08               mov dword ptr [esi + 8], ebx
// 006a4630  5e                   pop esi
// 006a4631  5b                   pop ebx
// 006a4632  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPShortcutManager.cpp (function ?SetSize@?$CArray@UtagACCEL@@AAU1@@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPShortcutManager.cpp
