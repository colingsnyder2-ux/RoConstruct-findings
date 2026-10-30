// roc 2012-06 009f4670  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 364 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4670
//
// 009f4670  8b442404             mov eax, dword ptr [esp + 4]
// 009f4674  83ec20               sub esp, 0x20
// 009f4677  56                   push esi
// 009f4678  50                   push eax
// 009f4679  8bf1                 mov esi, ecx
// 009f467b  e860330700           call 0xa679e0
// 009f4680  83f8ff               cmp eax, -1
// 009f4683  7509                 jne 0x9f468e
// 009f4685  0bc0                 or eax, eax
// 009f4687  5e                   pop esi
// 009f4688  83c420               add esp, 0x20
// 009f468b  c20400               ret 4
// 009f468e  8bce                 mov ecx, esi
// 009f4690  e80b240700           call 0xa66aa0
// 009f4695  33c9                 xor ecx, ecx
// 009f4697  394808               cmp dword ptr [eax + 8], ecx
// 009f469a  6a20                 push 0x20
// 009f469c  0f95c1               setne cl
// 009f469f  8bc1                 mov eax, ecx
// 009f46a1  8bce                 mov ecx, esi
// 009f46a3  85c0                 test eax, eax
// 009f46a5  0f84a1000000         je 0x9f474c
// 009f46ab  6a00                 push 0
// 009f46ad  680000c400           push 0xc40000
// 009f46b2  e8a1e1f8ff           call 0x982858
// 009f46b7  6a20                 push 0x20
// 009f46b9  6a00                 push 0
// 009f46bb  6801010200           push 0x20101
// 009f46c0  8bce                 mov ecx, esi
// 009f46c2  e8eddff8ff           call 0x9826b4
// 009f46c7  e8849bffff           call 0x9ee250
// 009f46cc  83b84801000000       cmp dword ptr [eax + 0x148], 0
// 009f46d3  7420                 je 0x9f46f5
// 009f46d5  83be6801000000       cmp dword ptr [esi + 0x168], 0
// 009f46dc  7417                 je 0x9f46f5
// 009f46de  8b4620               mov eax, dword ptr [esi + 0x20]
// 009f46e1  8d966c010000         lea edx, [esi + 0x16c]
// 009f46e7  52                   push edx
// 009f46e8  50                   push eax
// 009f46e9  e8c2430700           call 0xa68ab0
// 009f46ee  8bc8                 mov ecx, eax
// 009f46f0  e8fb4e0700           call 0xa695f0
// 009f46f5  53                   push ebx
// 009f46f6  55                   push ebp
// 009f46f7  57                   push edi
// 009f46f8  56                   push esi
// 009f46f9  8d4c2414             lea ecx, [esp + 0x14]
// 009f46fd  e83e0afeff           call 0x9d5140
// 009f4702  8d4c2410             lea ecx, [esp + 0x10]
// 009f4706  51                   push ecx
// 009f4707  8d542424             lea edx, [esp + 0x24]
// 009f470b  52                   push edx
// 009f470c  e8bf5efdff           call 0x9ca5d0
// 009f4711  8bc8                 mov ecx, eax
// 009f4713  e8185afdff           call 0x9ca130
// 009f4718  8b542418             mov edx, dword ptr [esp + 0x18]
// 009f471c  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 009f4720  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009f4724  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 009f4728  8bc2                 mov eax, edx
// 009f472a  8bfd                 mov edi, ebp
// 009f472c  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 009f4730  2bc1                 sub eax, ecx
// 009f4732  3bcb                 cmp ecx, ebx
// 009f4734  c644243400           mov byte ptr [esp + 0x34], 0
// 009f4739  7d1f                 jge 0x9f475a
// 009f473b  8bcb                 mov ecx, ebx
// 009f473d  8d1418               lea edx, [eax + ebx]
// 009f4740  894c2410             mov dword ptr [esp + 0x10], ecx
// 009f4744  89542418             mov dword ptr [esp + 0x18], edx
// 009f4748  b301                 mov bl, 1
// 009f474a  eb2c                 jmp 0x9f4778
// 009f474c  6800004000           push 0x400000
// 009f4751  6a00                 push 0
// 009f4753  e800e1f8ff           call 0x982858
// 009f4758  eb9b                 jmp 0x9f46f5
// 009f475a  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 009f475e  3bd3                 cmp edx, ebx
// 009f4760  7e12                 jle 0x9f4774
// 009f4762  8bd3                 mov edx, ebx
// 009f4764  2bd8                 sub ebx, eax
// 009f4766  8bcb                 mov ecx, ebx
// 009f4768  89542418             mov dword ptr [esp + 0x18], edx
// 009f476c  894c2410             mov dword ptr [esp + 0x10], ecx
// 009f4770  b301                 mov bl, 1
// 009f4772  eb04                 jmp 0x9f4778
// 009f4774  8a5c2434             mov bl, byte ptr [esp + 0x34]
// 009f4778  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009f477c  3be8                 cmp ebp, eax
// 009f477e  7e0e                 jle 0x9f478e
// 009f4780  8be8                 mov ebp, eax
// 009f4782  2bc7                 sub eax, edi
// 009f4784  896c241c             mov dword ptr [esp + 0x1c], ebp
// 009f4788  89442414             mov dword ptr [esp + 0x14], eax
// 009f478c  eb08                 jmp 0x9f4796
// 009f478e  84db                 test bl, bl
// 009f4790  7415                 je 0x9f47a7
// 009f4792  8b442414             mov eax, dword ptr [esp + 0x14]
// 009f4796  6a01                 push 1
// 009f4798  2be8                 sub ebp, eax
// 009f479a  55                   push ebp
// 009f479b  2bd1                 sub edx, ecx
// 009f479d  52                   push edx
// 009f479e  50                   push eax
// 009f479f  51                   push ecx
// 009f47a0  8bce                 mov ecx, esi
// 009f47a2  e833ddf8ff           call 0x9824da
// 009f47a7  56                   push esi
// 009f47a8  e8e32efeff           call 0x9d7690
// 009f47ad  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 009f47b3  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 009f47b9  8b5678               mov edx, dword ptr [esi + 0x78]
// 009f47bc  83c404               add esp, 4
// 009f47bf  50                   push eax
// 009f47c0  8b4220               mov eax, dword ptr [edx + 0x20]
// 009f47c3  51                   push ecx
// 009f47c4  682a270000           push 0x272a
// 009f47c9  50                   push eax
// 009f47ca  ff15043cb200         call dword ptr [0xb23c04]
// 009f47d0  5f                   pop edi
// 009f47d1  5d                   pop ebp
// 009f47d2  5b                   pop ebx
// 009f47d3  33c0                 xor eax, eax
// 009f47d5  5e                   pop esi
// 009f47d6  83c420               add esp, 0x20
// 009f47d9  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTColorPopup.cpp (function ?OnCreate@CXTColorPopup@@IAEHPAUtagCREATESTRUCTA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPopup.cpp
