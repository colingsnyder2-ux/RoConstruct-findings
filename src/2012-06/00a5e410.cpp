// roc 2012-06 00a5e410  unit: CXTColorHex  size: 3251 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a5e410
//
// 00a5e410  81ecbc000000         sub esp, 0xbc
// 00a5e416  53                   push ebx
// 00a5e417  8b5968               mov ebx, dword ptr [ecx + 0x68]
// 00a5e41a  55                   push ebp
// 00a5e41b  8b696c               mov ebp, dword ptr [ecx + 0x6c]
// 00a5e41e  56                   push esi
// 00a5e41f  8b35c020b200         mov esi, dword ptr [0xb220c0]
// 00a5e425  57                   push edi
// 00a5e426  8bbc24d0000000       mov edi, dword ptr [esp + 0xd0]
// 00a5e42d  83eb02               sub ebx, 2
// 00a5e430  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5e438  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00a5e43c  8d642400             lea esp, [esp]
// 00a5e440  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a5e444  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5e448  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e44b  6a00                 push 0
// 00a5e44d  50                   push eax
// 00a5e44e  03cb                 add ecx, ebx
// 00a5e450  51                   push ecx
// 00a5e451  52                   push edx
// 00a5e452  ffd6                 call esi
// 00a5e454  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5e458  ff4c242c             dec dword ptr [esp + 0x2c]
// 00a5e45c  40                   inc eax
// 00a5e45d  83f803               cmp eax, 3
// 00a5e460  89442410             mov dword ptr [esp + 0x10], eax
// 00a5e464  7cda                 jl 0xa5e440
// 00a5e466  6a00                 push 0
// 00a5e468  8d45fe               lea eax, [ebp - 2]
// 00a5e46b  50                   push eax
// 00a5e46c  8d4b03               lea ecx, [ebx + 3]
// 00a5e46f  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00a5e476  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e479  51                   push ecx
// 00a5e47a  50                   push eax
// 00a5e47b  894c2458             mov dword ptr [esp + 0x58], ecx
// 00a5e47f  ffd6                 call esi
// 00a5e481  6a00                 push 0
// 00a5e483  8d45fd               lea eax, [ebp - 3]
// 00a5e486  8d4b04               lea ecx, [ebx + 4]
// 00a5e489  50                   push eax
// 00a5e48a  51                   push ecx
// 00a5e48b  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00a5e48f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e492  51                   push ecx
// 00a5e493  89442434             mov dword ptr [esp + 0x34], eax
// 00a5e497  ffd6                 call esi
// 00a5e499  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a5e49d  6a00                 push 0
// 00a5e49f  8d4305               lea eax, [ebx + 5]
// 00a5e4a2  52                   push edx
// 00a5e4a3  50                   push eax
// 00a5e4a4  89442444             mov dword ptr [esp + 0x44], eax
// 00a5e4a8  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e4ab  50                   push eax
// 00a5e4ac  ffd6                 call esi
// 00a5e4ae  6a00                 push 0
// 00a5e4b0  8d45fc               lea eax, [ebp - 4]
// 00a5e4b3  8d4b06               lea ecx, [ebx + 6]
// 00a5e4b6  50                   push eax
// 00a5e4b7  51                   push ecx
// 00a5e4b8  898c248c000000       mov dword ptr [esp + 0x8c], ecx
// 00a5e4bf  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e4c2  51                   push ecx
// 00a5e4c3  89442430             mov dword ptr [esp + 0x30], eax
// 00a5e4c7  ffd6                 call esi
// 00a5e4c9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a5e4cd  6a00                 push 0
// 00a5e4cf  8d4307               lea eax, [ebx + 7]
// 00a5e4d2  52                   push edx
// 00a5e4d3  50                   push eax
// 00a5e4d4  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a5e4db  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e4de  50                   push eax
// 00a5e4df  ffd6                 call esi
// 00a5e4e1  6a00                 push 0
// 00a5e4e3  8d45fb               lea eax, [ebp - 5]
// 00a5e4e6  8d4b08               lea ecx, [ebx + 8]
// 00a5e4e9  50                   push eax
// 00a5e4ea  51                   push ecx
// 00a5e4eb  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00a5e4ef  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e4f2  51                   push ecx
// 00a5e4f3  89442438             mov dword ptr [esp + 0x38], eax
// 00a5e4f7  ffd6                 call esi
// 00a5e4f9  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5e4fd  6a00                 push 0
// 00a5e4ff  8d4309               lea eax, [ebx + 9]
// 00a5e502  52                   push edx
// 00a5e503  50                   push eax
// 00a5e504  89442474             mov dword ptr [esp + 0x74], eax
// 00a5e508  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e50b  50                   push eax
// 00a5e50c  ffd6                 call esi
// 00a5e50e  6a00                 push 0
// 00a5e510  8d45fa               lea eax, [ebp - 6]
// 00a5e513  8d4b0a               lea ecx, [ebx + 0xa]
// 00a5e516  50                   push eax
// 00a5e517  51                   push ecx
// 00a5e518  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00a5e51c  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e51f  51                   push ecx
// 00a5e520  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a5e524  ffd6                 call esi
// 00a5e526  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a5e52a  8d430b               lea eax, [ebx + 0xb]
// 00a5e52d  89842494000000       mov dword ptr [esp + 0x94], eax
// 00a5e534  6a00                 push 0
// 00a5e536  52                   push edx
// 00a5e537  50                   push eax
// 00a5e538  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e53b  50                   push eax
// 00a5e53c  ffd6                 call esi
// 00a5e53e  6a00                 push 0
// 00a5e540  8d45f9               lea eax, [ebp - 7]
// 00a5e543  8d4b0c               lea ecx, [ebx + 0xc]
// 00a5e546  50                   push eax
// 00a5e547  51                   push ecx
// 00a5e548  898c24ac000000       mov dword ptr [esp + 0xac], ecx
// 00a5e54f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e552  51                   push ecx
// 00a5e553  89442468             mov dword ptr [esp + 0x68], eax
// 00a5e557  ffd6                 call esi
// 00a5e559  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a5e55d  6a00                 push 0
// 00a5e55f  8d430d               lea eax, [ebx + 0xd]
// 00a5e562  52                   push edx
// 00a5e563  50                   push eax
// 00a5e564  89842498000000       mov dword ptr [esp + 0x98], eax
// 00a5e56b  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e56e  50                   push eax
// 00a5e56f  ffd6                 call esi
// 00a5e571  6a00                 push 0
// 00a5e573  8d45f8               lea eax, [ebp - 8]
// 00a5e576  8d4b0e               lea ecx, [ebx + 0xe]
// 00a5e579  50                   push eax
// 00a5e57a  51                   push ecx
// 00a5e57b  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 00a5e582  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e585  51                   push ecx
// 00a5e586  ffd6                 call esi
// 00a5e588  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e58b  6a00                 push 0
// 00a5e58d  8d45f8               lea eax, [ebp - 8]
// 00a5e590  8d4b0f               lea ecx, [ebx + 0xf]
// 00a5e593  50                   push eax
// 00a5e594  51                   push ecx
// 00a5e595  52                   push edx
// 00a5e596  898c2494000000       mov dword ptr [esp + 0x94], ecx
// 00a5e59d  ffd6                 call esi
// 00a5e59f  6a00                 push 0
// 00a5e5a1  8d45f8               lea eax, [ebp - 8]
// 00a5e5a4  50                   push eax
// 00a5e5a5  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e5a8  8d4b10               lea ecx, [ebx + 0x10]
// 00a5e5ab  51                   push ecx
// 00a5e5ac  50                   push eax
// 00a5e5ad  898c24c4000000       mov dword ptr [esp + 0xc4], ecx
// 00a5e5b4  ffd6                 call esi
// 00a5e5b6  6a00                 push 0
// 00a5e5b8  8d45f8               lea eax, [ebp - 8]
// 00a5e5bb  8d4b11               lea ecx, [ebx + 0x11]
// 00a5e5be  50                   push eax
// 00a5e5bf  51                   push ecx
// 00a5e5c0  898c2488000000       mov dword ptr [esp + 0x88], ecx
// 00a5e5c7  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e5ca  51                   push ecx
// 00a5e5cb  ffd6                 call esi
// 00a5e5cd  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e5d0  6a00                 push 0
// 00a5e5d2  8d45f8               lea eax, [ebp - 8]
// 00a5e5d5  8d4b12               lea ecx, [ebx + 0x12]
// 00a5e5d8  50                   push eax
// 00a5e5d9  51                   push ecx
// 00a5e5da  52                   push edx
// 00a5e5db  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 00a5e5e2  ffd6                 call esi
// 00a5e5e4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a5e5e8  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e5eb  6a00                 push 0
// 00a5e5ed  8d4313               lea eax, [ebx + 0x13]
// 00a5e5f0  51                   push ecx
// 00a5e5f1  50                   push eax
// 00a5e5f2  52                   push edx
// 00a5e5f3  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a5e5fa  ffd6                 call esi
// 00a5e5fc  8d4314               lea eax, [ebx + 0x14]
// 00a5e5ff  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a5e603  6a00                 push 0
// 00a5e605  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a5e609  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e60c  51                   push ecx
// 00a5e60d  50                   push eax
// 00a5e60e  52                   push edx
// 00a5e60f  ffd6                 call esi
// 00a5e611  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a5e615  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e618  6a00                 push 0
// 00a5e61a  8d4315               lea eax, [ebx + 0x15]
// 00a5e61d  51                   push ecx
// 00a5e61e  50                   push eax
// 00a5e61f  52                   push edx
// 00a5e620  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a5e624  ffd6                 call esi
// 00a5e626  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a5e62a  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e62d  6a00                 push 0
// 00a5e62f  8d4316               lea eax, [ebx + 0x16]
// 00a5e632  51                   push ecx
// 00a5e633  50                   push eax
// 00a5e634  52                   push edx
// 00a5e635  898424b4000000       mov dword ptr [esp + 0xb4], eax
// 00a5e63c  ffd6                 call esi
// 00a5e63e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5e642  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e645  6a00                 push 0
// 00a5e647  8d4317               lea eax, [ebx + 0x17]
// 00a5e64a  51                   push ecx
// 00a5e64b  50                   push eax
// 00a5e64c  52                   push edx
// 00a5e64d  89442474             mov dword ptr [esp + 0x74], eax
// 00a5e651  ffd6                 call esi
// 00a5e653  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5e657  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e65a  6a00                 push 0
// 00a5e65c  8d4318               lea eax, [ebx + 0x18]
// 00a5e65f  51                   push ecx
// 00a5e660  50                   push eax
// 00a5e661  52                   push edx
// 00a5e662  89442464             mov dword ptr [esp + 0x64], eax
// 00a5e666  ffd6                 call esi
// 00a5e668  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5e66c  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e66f  6a00                 push 0
// 00a5e671  8d4319               lea eax, [ebx + 0x19]
// 00a5e674  51                   push ecx
// 00a5e675  50                   push eax
// 00a5e676  52                   push edx
// 00a5e677  898424a8000000       mov dword ptr [esp + 0xa8], eax
// 00a5e67e  ffd6                 call esi
// 00a5e680  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5e684  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e687  6a00                 push 0
// 00a5e689  8d431a               lea eax, [ebx + 0x1a]
// 00a5e68c  51                   push ecx
// 00a5e68d  50                   push eax
// 00a5e68e  52                   push edx
// 00a5e68f  89842498000000       mov dword ptr [esp + 0x98], eax
// 00a5e696  ffd6                 call esi
// 00a5e698  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5e69c  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e69f  6a00                 push 0
// 00a5e6a1  8d431b               lea eax, [ebx + 0x1b]
// 00a5e6a4  51                   push ecx
// 00a5e6a5  50                   push eax
// 00a5e6a6  52                   push edx
// 00a5e6a7  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00a5e6ae  ffd6                 call esi
// 00a5e6b0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5e6b4  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e6b7  6a00                 push 0
// 00a5e6b9  8d431c               lea eax, [ebx + 0x1c]
// 00a5e6bc  51                   push ecx
// 00a5e6bd  50                   push eax
// 00a5e6be  52                   push edx
// 00a5e6bf  898424a0000000       mov dword ptr [esp + 0xa0], eax
// 00a5e6c6  ffd6                 call esi
// 00a5e6c8  8d431d               lea eax, [ebx + 0x1d]
// 00a5e6cb  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00a5e6d2  6a00                 push 0
// 00a5e6d4  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a5e6db  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e6de  51                   push ecx
// 00a5e6df  50                   push eax
// 00a5e6e0  52                   push edx
// 00a5e6e1  ffd6                 call esi
// 00a5e6e3  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00a5e6ea  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e6ed  6a00                 push 0
// 00a5e6ef  8d431e               lea eax, [ebx + 0x1e]
// 00a5e6f2  51                   push ecx
// 00a5e6f3  50                   push eax
// 00a5e6f4  52                   push edx
// 00a5e6f5  898424cc000000       mov dword ptr [esp + 0xcc], eax
// 00a5e6fc  ffd6                 call esi
// 00a5e6fe  6a00                 push 0
// 00a5e700  8d45ff               lea eax, [ebp - 1]
// 00a5e703  50                   push eax
// 00a5e704  8d4b1f               lea ecx, [ebx + 0x1f]
// 00a5e707  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a5e70b  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e70e  51                   push ecx
// 00a5e70f  50                   push eax
// 00a5e710  898c24d0000000       mov dword ptr [esp + 0xd0], ecx
// 00a5e717  ffd6                 call esi
// 00a5e719  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5e721  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5e725  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e728  6a00                 push 0
// 00a5e72a  03cd                 add ecx, ebp
// 00a5e72c  51                   push ecx
// 00a5e72d  8d4320               lea eax, [ebx + 0x20]
// 00a5e730  50                   push eax
// 00a5e731  52                   push edx
// 00a5e732  ffd6                 call esi
// 00a5e734  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5e738  40                   inc eax
// 00a5e739  83f811               cmp eax, 0x11
// 00a5e73c  89442410             mov dword ptr [esp + 0x10], eax
// 00a5e740  7cdf                 jl 0xa5e721
// 00a5e742  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e745  6a00                 push 0
// 00a5e747  8d4511               lea eax, [ebp + 0x11]
// 00a5e74a  50                   push eax
// 00a5e74b  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a5e74f  8b8424c8000000       mov eax, dword ptr [esp + 0xc8]
// 00a5e756  50                   push eax
// 00a5e757  51                   push ecx
// 00a5e758  ffd6                 call esi
// 00a5e75a  8b9424bc000000       mov edx, dword ptr [esp + 0xbc]
// 00a5e761  6a00                 push 0
// 00a5e763  8d4512               lea eax, [ebp + 0x12]
// 00a5e766  50                   push eax
// 00a5e767  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a5e76b  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e76e  52                   push edx
// 00a5e76f  50                   push eax
// 00a5e770  ffd6                 call esi
// 00a5e772  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5e776  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 00a5e77d  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e780  6a00                 push 0
// 00a5e782  51                   push ecx
// 00a5e783  52                   push edx
// 00a5e784  50                   push eax
// 00a5e785  ffd6                 call esi
// 00a5e787  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a5e78e  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e791  6a00                 push 0
// 00a5e793  8d4513               lea eax, [ebp + 0x13]
// 00a5e796  50                   push eax
// 00a5e797  51                   push ecx
// 00a5e798  52                   push edx
// 00a5e799  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a5e79d  ffd6                 call esi
// 00a5e79f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5e7a3  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a5e7aa  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e7ad  6a00                 push 0
// 00a5e7af  50                   push eax
// 00a5e7b0  51                   push ecx
// 00a5e7b1  52                   push edx
// 00a5e7b2  ffd6                 call esi
// 00a5e7b4  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e7b7  6a00                 push 0
// 00a5e7b9  8d4514               lea eax, [ebp + 0x14]
// 00a5e7bc  50                   push eax
// 00a5e7bd  89442420             mov dword ptr [esp + 0x20], eax
// 00a5e7c1  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00a5e7c8  50                   push eax
// 00a5e7c9  51                   push ecx
// 00a5e7ca  ffd6                 call esi
// 00a5e7cc  8b542418             mov edx, dword ptr [esp + 0x18]
// 00a5e7d0  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00a5e7d7  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e7da  6a00                 push 0
// 00a5e7dc  52                   push edx
// 00a5e7dd  50                   push eax
// 00a5e7de  51                   push ecx
// 00a5e7df  ffd6                 call esi
// 00a5e7e1  8b542454             mov edx, dword ptr [esp + 0x54]
// 00a5e7e5  6a00                 push 0
// 00a5e7e7  8d4515               lea eax, [ebp + 0x15]
// 00a5e7ea  50                   push eax
// 00a5e7eb  89442438             mov dword ptr [esp + 0x38], eax
// 00a5e7ef  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e7f2  52                   push edx
// 00a5e7f3  50                   push eax
// 00a5e7f4  ffd6                 call esi
// 00a5e7f6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a5e7fa  8b542464             mov edx, dword ptr [esp + 0x64]
// 00a5e7fe  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e801  6a00                 push 0
// 00a5e803  51                   push ecx
// 00a5e804  52                   push edx
// 00a5e805  50                   push eax
// 00a5e806  ffd6                 call esi
// 00a5e808  8d4516               lea eax, [ebp + 0x16]
// 00a5e80b  6a00                 push 0
// 00a5e80d  89442450             mov dword ptr [esp + 0x50], eax
// 00a5e811  50                   push eax
// 00a5e812  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00a5e819  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e81c  51                   push ecx
// 00a5e81d  52                   push edx
// 00a5e81e  ffd6                 call esi
// 00a5e820  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a5e824  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a5e828  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e82b  6a00                 push 0
// 00a5e82d  50                   push eax
// 00a5e82e  51                   push ecx
// 00a5e82f  52                   push edx
// 00a5e830  ffd6                 call esi
// 00a5e832  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e835  6a00                 push 0
// 00a5e837  8d4517               lea eax, [ebp + 0x17]
// 00a5e83a  50                   push eax
// 00a5e83b  89442434             mov dword ptr [esp + 0x34], eax
// 00a5e83f  8b442464             mov eax, dword ptr [esp + 0x64]
// 00a5e843  50                   push eax
// 00a5e844  51                   push ecx
// 00a5e845  ffd6                 call esi
// 00a5e847  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a5e84b  8b442474             mov eax, dword ptr [esp + 0x74]
// 00a5e84f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e852  6a00                 push 0
// 00a5e854  52                   push edx
// 00a5e855  50                   push eax
// 00a5e856  51                   push ecx
// 00a5e857  ffd6                 call esi
// 00a5e859  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00a5e860  6a00                 push 0
// 00a5e862  8d4518               lea eax, [ebp + 0x18]
// 00a5e865  50                   push eax
// 00a5e866  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e869  52                   push edx
// 00a5e86a  50                   push eax
// 00a5e86b  ffd6                 call esi
// 00a5e86d  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a5e871  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e874  6a00                 push 0
// 00a5e876  8d4518               lea eax, [ebp + 0x18]
// 00a5e879  50                   push eax
// 00a5e87a  51                   push ecx
// 00a5e87b  52                   push edx
// 00a5e87c  ffd6                 call esi
// 00a5e87e  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e881  6a00                 push 0
// 00a5e883  8d4518               lea eax, [ebp + 0x18]
// 00a5e886  50                   push eax
// 00a5e887  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00a5e88e  50                   push eax
// 00a5e88f  51                   push ecx
// 00a5e890  ffd6                 call esi
// 00a5e892  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00a5e899  6a00                 push 0
// 00a5e89b  8d4518               lea eax, [ebp + 0x18]
// 00a5e89e  50                   push eax
// 00a5e89f  8b4704               mov eax, dword ptr [edi + 4]
// 00a5e8a2  52                   push edx
// 00a5e8a3  50                   push eax
// 00a5e8a4  ffd6                 call esi
// 00a5e8a6  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00a5e8ad  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e8b0  6a00                 push 0
// 00a5e8b2  8d4518               lea eax, [ebp + 0x18]
// 00a5e8b5  50                   push eax
// 00a5e8b6  51                   push ecx
// 00a5e8b7  52                   push edx
// 00a5e8b8  ffd6                 call esi
// 00a5e8ba  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a5e8be  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a5e8c5  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e8c8  6a00                 push 0
// 00a5e8ca  50                   push eax
// 00a5e8cb  51                   push ecx
// 00a5e8cc  52                   push edx
// 00a5e8cd  ffd6                 call esi
// 00a5e8cf  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a5e8d3  6a00                 push 0
// 00a5e8d5  50                   push eax
// 00a5e8d6  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00a5e8dd  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e8e0  51                   push ecx
// 00a5e8e1  52                   push edx
// 00a5e8e2  ffd6                 call esi
// 00a5e8e4  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a5e8e8  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a5e8ef  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e8f2  6a00                 push 0
// 00a5e8f4  50                   push eax
// 00a5e8f5  51                   push ecx
// 00a5e8f6  52                   push edx
// 00a5e8f7  ffd6                 call esi
// 00a5e8f9  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a5e8fd  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a5e901  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e904  6a00                 push 0
// 00a5e906  50                   push eax
// 00a5e907  51                   push ecx
// 00a5e908  52                   push edx
// 00a5e909  ffd6                 call esi
// 00a5e90b  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5e90f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a5e913  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e916  6a00                 push 0
// 00a5e918  50                   push eax
// 00a5e919  51                   push ecx
// 00a5e91a  52                   push edx
// 00a5e91b  ffd6                 call esi
// 00a5e91d  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5e921  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a5e925  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e928  6a00                 push 0
// 00a5e92a  50                   push eax
// 00a5e92b  51                   push ecx
// 00a5e92c  52                   push edx
// 00a5e92d  ffd6                 call esi
// 00a5e92f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5e933  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a5e937  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e93a  6a00                 push 0
// 00a5e93c  50                   push eax
// 00a5e93d  51                   push ecx
// 00a5e93e  52                   push edx
// 00a5e93f  ffd6                 call esi
// 00a5e941  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5e945  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00a5e94c  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e94f  6a00                 push 0
// 00a5e951  50                   push eax
// 00a5e952  51                   push ecx
// 00a5e953  52                   push edx
// 00a5e954  ffd6                 call esi
// 00a5e956  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5e95a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a5e95e  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e961  6a00                 push 0
// 00a5e963  50                   push eax
// 00a5e964  51                   push ecx
// 00a5e965  52                   push edx
// 00a5e966  ffd6                 call esi
// 00a5e968  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5e96c  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a5e970  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e973  6a00                 push 0
// 00a5e975  50                   push eax
// 00a5e976  51                   push ecx
// 00a5e977  52                   push edx
// 00a5e978  ffd6                 call esi
// 00a5e97a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5e97e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a5e982  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e985  6a00                 push 0
// 00a5e987  50                   push eax
// 00a5e988  51                   push ecx
// 00a5e989  52                   push edx
// 00a5e98a  ffd6                 call esi
// 00a5e98c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5e990  8d4302               lea eax, [ebx + 2]
// 00a5e993  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 00a5e99a  6a00                 push 0
// 00a5e99c  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e99f  51                   push ecx
// 00a5e9a0  50                   push eax
// 00a5e9a1  52                   push edx
// 00a5e9a2  ffd6                 call esi
// 00a5e9a4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a5e9a8  8b5704               mov edx, dword ptr [edi + 4]
// 00a5e9ab  6a00                 push 0
// 00a5e9ad  8d4301               lea eax, [ebx + 1]
// 00a5e9b0  51                   push ecx
// 00a5e9b1  50                   push eax
// 00a5e9b2  52                   push edx
// 00a5e9b3  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 00a5e9ba  ffd6                 call esi
// 00a5e9bc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00a5e9c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5e9c8  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e9cb  6a00                 push 0
// 00a5e9cd  03c5                 add eax, ebp
// 00a5e9cf  50                   push eax
// 00a5e9d0  53                   push ebx
// 00a5e9d1  51                   push ecx
// 00a5e9d2  ffd6                 call esi
// 00a5e9d4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5e9d8  40                   inc eax
// 00a5e9d9  83f811               cmp eax, 0x11
// 00a5e9dc  89442410             mov dword ptr [esp + 0x10], eax
// 00a5e9e0  7ce2                 jl 0xa5e9c4
// 00a5e9e2  33db                 xor ebx, ebx
// 00a5e9e4  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a5e9e8  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5e9eb  6a00                 push 0
// 00a5e9ed  8d542b01             lea edx, [ebx + ebp + 1]
// 00a5e9f1  52                   push edx
// 00a5e9f2  50                   push eax
// 00a5e9f3  51                   push ecx
// 00a5e9f4  ffd6                 call esi
// 00a5e9f6  43                   inc ebx
// 00a5e9f7  83fb0f               cmp ebx, 0xf
// 00a5e9fa  7ce8                 jl 0xa5e9e4
// 00a5e9fc  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a5ea00  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ea03  6a00                 push 0
// 00a5ea05  8d5d10               lea ebx, [ebp + 0x10]
// 00a5ea08  53                   push ebx
// 00a5ea09  52                   push edx
// 00a5ea0a  50                   push eax
// 00a5ea0b  895c2450             mov dword ptr [esp + 0x50], ebx
// 00a5ea0f  ffd6                 call esi
// 00a5ea11  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00a5ea18  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ea1b  6a00                 push 0
// 00a5ea1d  53                   push ebx
// 00a5ea1e  51                   push ecx
// 00a5ea1f  52                   push edx
// 00a5ea20  ffd6                 call esi
// 00a5ea22  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5ea26  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00a5ea2a  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ea2d  6a00                 push 0
// 00a5ea2f  50                   push eax
// 00a5ea30  51                   push ecx
// 00a5ea31  52                   push edx
// 00a5ea32  ffd6                 call esi
// 00a5ea34  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5ea38  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a5ea3c  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ea3f  6a00                 push 0
// 00a5ea41  50                   push eax
// 00a5ea42  51                   push ecx
// 00a5ea43  52                   push edx
// 00a5ea44  ffd6                 call esi
// 00a5ea46  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5ea4a  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a5ea4e  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ea51  6a00                 push 0
// 00a5ea53  50                   push eax
// 00a5ea54  51                   push ecx
// 00a5ea55  52                   push edx
// 00a5ea56  ffd6                 call esi
// 00a5ea58  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5ea5c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a5ea60  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ea63  6a00                 push 0
// 00a5ea65  50                   push eax
// 00a5ea66  51                   push ecx
// 00a5ea67  52                   push edx
// 00a5ea68  ffd6                 call esi
// 00a5ea6a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5ea6e  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a5ea75  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ea78  6a00                 push 0
// 00a5ea7a  50                   push eax
// 00a5ea7b  51                   push ecx
// 00a5ea7c  52                   push edx
// 00a5ea7d  ffd6                 call esi
// 00a5ea7f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5ea83  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00a5ea8a  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ea8d  6a00                 push 0
// 00a5ea8f  50                   push eax
// 00a5ea90  51                   push ecx
// 00a5ea91  52                   push edx
// 00a5ea92  ffd6                 call esi
// 00a5ea94  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5ea98  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a5ea9f  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eaa2  6a00                 push 0
// 00a5eaa4  50                   push eax
// 00a5eaa5  51                   push ecx
// 00a5eaa6  52                   push edx
// 00a5eaa7  ffd6                 call esi
// 00a5eaa9  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5eaad  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00a5eab4  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eab7  6a00                 push 0
// 00a5eab9  50                   push eax
// 00a5eaba  51                   push ecx
// 00a5eabb  52                   push edx
// 00a5eabc  ffd6                 call esi
// 00a5eabe  6a00                 push 0
// 00a5eac0  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5eac4  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00a5eacb  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eace  50                   push eax
// 00a5eacf  51                   push ecx
// 00a5ead0  52                   push edx
// 00a5ead1  ffd6                 call esi
// 00a5ead3  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5ead7  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00a5eade  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eae1  6a00                 push 0
// 00a5eae3  50                   push eax
// 00a5eae4  51                   push ecx
// 00a5eae5  52                   push edx
// 00a5eae6  ffd6                 call esi
// 00a5eae8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5eaec  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 00a5eaf0  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eaf3  6a00                 push 0
// 00a5eaf5  50                   push eax
// 00a5eaf6  51                   push ecx
// 00a5eaf7  52                   push edx
// 00a5eaf8  ffd6                 call esi
// 00a5eafa  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5eafe  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00a5eb05  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eb08  6a00                 push 0
// 00a5eb0a  50                   push eax
// 00a5eb0b  51                   push ecx
// 00a5eb0c  52                   push edx
// 00a5eb0d  ffd6                 call esi
// 00a5eb0f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5eb13  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a5eb17  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eb1a  6a00                 push 0
// 00a5eb1c  50                   push eax
// 00a5eb1d  51                   push ecx
// 00a5eb1e  52                   push edx
// 00a5eb1f  ffd6                 call esi
// 00a5eb21  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5eb25  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a5eb29  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eb2c  6a00                 push 0
// 00a5eb2e  50                   push eax
// 00a5eb2f  51                   push ecx
// 00a5eb30  52                   push edx
// 00a5eb31  ffd6                 call esi
// 00a5eb33  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5eb37  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a5eb3b  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eb3e  6a00                 push 0
// 00a5eb40  50                   push eax
// 00a5eb41  51                   push ecx
// 00a5eb42  52                   push edx
// 00a5eb43  ffd6                 call esi
// 00a5eb45  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5eb49  8b8c24a4000000       mov ecx, dword ptr [esp + 0xa4]
// 00a5eb50  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eb53  6a00                 push 0
// 00a5eb55  50                   push eax
// 00a5eb56  51                   push ecx
// 00a5eb57  52                   push edx
// 00a5eb58  ffd6                 call esi
// 00a5eb5a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a5eb5e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00a5eb62  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eb65  6a00                 push 0
// 00a5eb67  50                   push eax
// 00a5eb68  51                   push ecx
// 00a5eb69  52                   push edx
// 00a5eb6a  ffd6                 call esi
// 00a5eb6c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5eb70  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a5eb74  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eb77  6a00                 push 0
// 00a5eb79  50                   push eax
// 00a5eb7a  51                   push ecx
// 00a5eb7b  52                   push edx
// 00a5eb7c  ffd6                 call esi
// 00a5eb7e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5eb82  6a00                 push 0
// 00a5eb84  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a5eb8b  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eb8e  50                   push eax
// 00a5eb8f  51                   push ecx
// 00a5eb90  52                   push edx
// 00a5eb91  ffd6                 call esi
// 00a5eb93  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a5eb9a  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5eb9d  6a00                 push 0
// 00a5eb9f  53                   push ebx
// 00a5eba0  50                   push eax
// 00a5eba1  51                   push ecx
// 00a5eba2  ffd6                 call esi
// 00a5eba4  8b94249c000000       mov edx, dword ptr [esp + 0x9c]
// 00a5ebab  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ebae  6a00                 push 0
// 00a5ebb0  53                   push ebx
// 00a5ebb1  52                   push edx
// 00a5ebb2  50                   push eax
// 00a5ebb3  ffd6                 call esi
// 00a5ebb5  33db                 xor ebx, ebx
// 00a5ebb7  eb07                 jmp 0xa5ebc0
// 00a5ebb9  8da42400000000       lea esp, [esp]
// 00a5ebc0  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00a5ebc7  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ebca  6a00                 push 0
// 00a5ebcc  8d4c2b01             lea ecx, [ebx + ebp + 1]
// 00a5ebd0  51                   push ecx
// 00a5ebd1  52                   push edx
// 00a5ebd2  50                   push eax
// 00a5ebd3  ffd6                 call esi
// 00a5ebd5  43                   inc ebx
// 00a5ebd6  83fb0f               cmp ebx, 0xf
// 00a5ebd9  7ce5                 jl 0xa5ebc0
// 00a5ebdb  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 00a5ebe2  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ebe5  6a00                 push 0
// 00a5ebe7  55                   push ebp
// 00a5ebe8  51                   push ecx
// 00a5ebe9  52                   push edx
// 00a5ebea  ffd6                 call esi
// 00a5ebec  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00a5ebf3  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ebf6  6a00                 push 0
// 00a5ebf8  55                   push ebp
// 00a5ebf9  50                   push eax
// 00a5ebfa  51                   push ecx
// 00a5ebfb  ffd6                 call esi
// 00a5ebfd  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00a5ec01  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00a5ec08  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ec0b  6a00                 push 0
// 00a5ec0d  53                   push ebx
// 00a5ec0e  52                   push edx
// 00a5ec0f  50                   push eax
// 00a5ec10  ffd6                 call esi
// 00a5ec12  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a5ec16  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ec19  6a00                 push 0
// 00a5ec1b  53                   push ebx
// 00a5ec1c  51                   push ecx
// 00a5ec1d  52                   push edx
// 00a5ec1e  ffd6                 call esi
// 00a5ec20  8b9c24b0000000       mov ebx, dword ptr [esp + 0xb0]
// 00a5ec27  8b442464             mov eax, dword ptr [esp + 0x64]
// 00a5ec2b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ec2e  6a00                 push 0
// 00a5ec30  53                   push ebx
// 00a5ec31  50                   push eax
// 00a5ec32  51                   push ecx
// 00a5ec33  ffd6                 call esi
// 00a5ec35  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 00a5ec3c  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ec3f  6a00                 push 0
// 00a5ec41  53                   push ebx
// 00a5ec42  52                   push edx
// 00a5ec43  50                   push eax
// 00a5ec44  ffd6                 call esi
// 00a5ec46  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5ec4a  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00a5ec4e  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ec51  6a00                 push 0
// 00a5ec53  51                   push ecx
// 00a5ec54  52                   push edx
// 00a5ec55  50                   push eax
// 00a5ec56  ffd6                 call esi
// 00a5ec58  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5ec5c  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a5ec60  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ec63  6a00                 push 0
// 00a5ec65  51                   push ecx
// 00a5ec66  52                   push edx
// 00a5ec67  50                   push eax
// 00a5ec68  ffd6                 call esi
// 00a5ec6a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5ec6e  8b542474             mov edx, dword ptr [esp + 0x74]
// 00a5ec72  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ec75  6a00                 push 0
// 00a5ec77  51                   push ecx
// 00a5ec78  52                   push edx
// 00a5ec79  50                   push eax
// 00a5ec7a  ffd6                 call esi
// 00a5ec7c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5ec80  8b9424ac000000       mov edx, dword ptr [esp + 0xac]
// 00a5ec87  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ec8a  6a00                 push 0
// 00a5ec8c  51                   push ecx
// 00a5ec8d  52                   push edx
// 00a5ec8e  50                   push eax
// 00a5ec8f  ffd6                 call esi
// 00a5ec91  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5ec95  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00a5ec99  6a00                 push 0
// 00a5ec9b  51                   push ecx
// 00a5ec9c  52                   push edx
// 00a5ec9d  8b4704               mov eax, dword ptr [edi + 4]
// 00a5eca0  50                   push eax
// 00a5eca1  ffd6                 call esi
// 00a5eca3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5eca7  8b9424b4000000       mov edx, dword ptr [esp + 0xb4]
// 00a5ecae  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ecb1  6a00                 push 0
// 00a5ecb3  51                   push ecx
// 00a5ecb4  52                   push edx
// 00a5ecb5  50                   push eax
// 00a5ecb6  ffd6                 call esi
// 00a5ecb8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5ecbc  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00a5ecc3  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ecc6  6a00                 push 0
// 00a5ecc8  51                   push ecx
// 00a5ecc9  52                   push edx
// 00a5ecca  50                   push eax
// 00a5eccb  ffd6                 call esi
// 00a5eccd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5ecd1  8b9424a8000000       mov edx, dword ptr [esp + 0xa8]
// 00a5ecd8  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ecdb  6a00                 push 0
// 00a5ecdd  51                   push ecx
// 00a5ecde  52                   push edx
// 00a5ecdf  50                   push eax
// 00a5ece0  ffd6                 call esi
// 00a5ece2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5ece6  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00a5eced  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ecf0  6a00                 push 0
// 00a5ecf2  51                   push ecx
// 00a5ecf3  52                   push edx
// 00a5ecf4  50                   push eax
// 00a5ecf5  ffd6                 call esi
// 00a5ecf7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5ecfb  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00a5ed02  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ed05  6a00                 push 0
// 00a5ed07  51                   push ecx
// 00a5ed08  52                   push edx
// 00a5ed09  50                   push eax
// 00a5ed0a  ffd6                 call esi
// 00a5ed0c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a5ed10  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a5ed17  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ed1a  6a00                 push 0
// 00a5ed1c  51                   push ecx
// 00a5ed1d  52                   push edx
// 00a5ed1e  50                   push eax
// 00a5ed1f  ffd6                 call esi
// 00a5ed21  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00a5ed25  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ed28  6a00                 push 0
// 00a5ed2a  53                   push ebx
// 00a5ed2b  51                   push ecx
// 00a5ed2c  52                   push edx
// 00a5ed2d  ffd6                 call esi
// 00a5ed2f  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a5ed33  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ed36  6a00                 push 0
// 00a5ed38  53                   push ebx
// 00a5ed39  50                   push eax
// 00a5ed3a  51                   push ecx
// 00a5ed3b  ffd6                 call esi
// 00a5ed3d  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a5ed41  8b442470             mov eax, dword ptr [esp + 0x70]
// 00a5ed45  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ed48  6a00                 push 0
// 00a5ed4a  52                   push edx
// 00a5ed4b  50                   push eax
// 00a5ed4c  51                   push ecx
// 00a5ed4d  ffd6                 call esi
// 00a5ed4f  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a5ed53  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a5ed57  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ed5a  6a00                 push 0
// 00a5ed5c  52                   push edx
// 00a5ed5d  50                   push eax
// 00a5ed5e  51                   push ecx
// 00a5ed5f  ffd6                 call esi
// 00a5ed61  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00a5ed68  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ed6b  6a00                 push 0
// 00a5ed6d  55                   push ebp
// 00a5ed6e  52                   push edx
// 00a5ed6f  50                   push eax
// 00a5ed70  ffd6                 call esi
// 00a5ed72  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a5ed76  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ed79  6a00                 push 0
// 00a5ed7b  55                   push ebp
// 00a5ed7c  51                   push ecx
// 00a5ed7d  52                   push edx
// 00a5ed7e  ffd6                 call esi
// 00a5ed80  896c2410             mov dword ptr [esp + 0x10], ebp
// 00a5ed84  c744243811000000     mov dword ptr [esp + 0x38], 0x11
// 00a5ed8c  8d642400             lea esp, [esp]
// 00a5ed90  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5ed94  8b8c24c4000000       mov ecx, dword ptr [esp + 0xc4]
// 00a5ed9b  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ed9e  68ffffff00           push 0xffffff
// 00a5eda3  50                   push eax
// 00a5eda4  51                   push ecx
// 00a5eda5  52                   push edx
// 00a5eda6  ffd6                 call esi
// 00a5eda8  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5edac  8b8c24c8000000       mov ecx, dword ptr [esp + 0xc8]
// 00a5edb3  8b5704               mov edx, dword ptr [edi + 4]
// 00a5edb6  68ffffff00           push 0xffffff
// 00a5edbb  50                   push eax
// 00a5edbc  51                   push ecx
// 00a5edbd  52                   push edx
// 00a5edbe  ffd6                 call esi
// 00a5edc0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a5edc4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a5edc8  8b5704               mov edx, dword ptr [edi + 4]
// 00a5edcb  68ffffff00           push 0xffffff
// 00a5edd0  50                   push eax
// 00a5edd1  51                   push ecx
// 00a5edd2  52                   push edx
// 00a5edd3  ffd6                 call esi
// 00a5edd5  b801000000           mov eax, 1
// 00a5edda  01442410             add dword ptr [esp + 0x10], eax
// 00a5edde  29442438             sub dword ptr [esp + 0x38], eax
// 00a5ede2  75ac                 jne 0xa5ed90
// 00a5ede4  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a5ede8  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5edeb  68ffffff00           push 0xffffff
// 00a5edf0  55                   push ebp
// 00a5edf1  50                   push eax
// 00a5edf2  51                   push ecx
// 00a5edf3  ffd6                 call esi
// 00a5edf5  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a5edf9  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a5edfd  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ee00  68ffffff00           push 0xffffff
// 00a5ee05  52                   push edx
// 00a5ee06  50                   push eax
// 00a5ee07  51                   push ecx
// 00a5ee08  ffd6                 call esi
// 00a5ee0a  896c2410             mov dword ptr [esp + 0x10], ebp
// 00a5ee0e  c744244811000000     mov dword ptr [esp + 0x48], 0x11
// 00a5ee16  eb08                 jmp 0xa5ee20
// 00a5ee18  8da42400000000       lea esp, [esp]
// 00a5ee1f  90                   nop 
// 00a5ee20  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5ee24  8b8424b8000000       mov eax, dword ptr [esp + 0xb8]
// 00a5ee2b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ee2e  68ffffff00           push 0xffffff
// 00a5ee33  52                   push edx
// 00a5ee34  50                   push eax
// 00a5ee35  51                   push ecx
// 00a5ee36  ffd6                 call esi
// 00a5ee38  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5ee3c  8b8424bc000000       mov eax, dword ptr [esp + 0xbc]
// 00a5ee43  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ee46  68ffffff00           push 0xffffff
// 00a5ee4b  52                   push edx
// 00a5ee4c  50                   push eax
// 00a5ee4d  51                   push ecx
// 00a5ee4e  ffd6                 call esi
// 00a5ee50  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a5ee54  8b8424c0000000       mov eax, dword ptr [esp + 0xc0]
// 00a5ee5b  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ee5e  68ffffff00           push 0xffffff
// 00a5ee63  52                   push edx
// 00a5ee64  50                   push eax
// 00a5ee65  51                   push ecx
// 00a5ee66  ffd6                 call esi
// 00a5ee68  b801000000           mov eax, 1
// 00a5ee6d  01442410             add dword ptr [esp + 0x10], eax
// 00a5ee71  29442448             sub dword ptr [esp + 0x48], eax
// 00a5ee75  75a9                 jne 0xa5ee20
// 00a5ee77  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ee7a  68ffffff00           push 0xffffff
// 00a5ee7f  55                   push ebp
// 00a5ee80  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00a5ee87  55                   push ebp
// 00a5ee88  52                   push edx
// 00a5ee89  ffd6                 call esi
// 00a5ee8b  8b442440             mov eax, dword ptr [esp + 0x40]
// 00a5ee8f  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5ee92  68ffffff00           push 0xffffff
// 00a5ee97  50                   push eax
// 00a5ee98  55                   push ebp
// 00a5ee99  51                   push ecx
// 00a5ee9a  ffd6                 call esi
// 00a5ee9c  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00a5eea0  c744244005000000     mov dword ptr [esp + 0x40], 5
// 00a5eea8  eb06                 jmp 0xa5eeb0
// 00a5eeaa  8d9b00000000         lea ebx, [ebx]
// 00a5eeb0  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a5eeb4  68ffffff00           push 0xffffff
// 00a5eeb9  52                   push edx
// 00a5eeba  8d45ea               lea eax, [ebp - 0x16]
// 00a5eebd  50                   push eax
// 00a5eebe  8b4704               mov eax, dword ptr [edi + 4]
// 00a5eec1  50                   push eax
// 00a5eec2  ffd6                 call esi
// 00a5eec4  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5eec7  68ffffff00           push 0xffffff
// 00a5eecc  53                   push ebx
// 00a5eecd  8d45ec               lea eax, [ebp - 0x14]
// 00a5eed0  50                   push eax
// 00a5eed1  51                   push ecx
// 00a5eed2  ffd6                 call esi
// 00a5eed4  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a5eed8  68ffffff00           push 0xffffff
// 00a5eedd  52                   push edx
// 00a5eede  8d45ee               lea eax, [ebp - 0x12]
// 00a5eee1  50                   push eax
// 00a5eee2  8b4704               mov eax, dword ptr [edi + 4]
// 00a5eee5  50                   push eax
// 00a5eee6  ffd6                 call esi
// 00a5eee8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5eeec  8b5704               mov edx, dword ptr [edi + 4]
// 00a5eeef  68ffffff00           push 0xffffff
// 00a5eef4  51                   push ecx
// 00a5eef5  8d45f0               lea eax, [ebp - 0x10]
// 00a5eef8  50                   push eax
// 00a5eef9  52                   push edx
// 00a5eefa  ffd6                 call esi
// 00a5eefc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5ef00  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ef03  68ffffff00           push 0xffffff
// 00a5ef08  51                   push ecx
// 00a5ef09  8d45f2               lea eax, [ebp - 0xe]
// 00a5ef0c  50                   push eax
// 00a5ef0d  52                   push edx
// 00a5ef0e  ffd6                 call esi
// 00a5ef10  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a5ef14  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ef17  68ffffff00           push 0xffffff
// 00a5ef1c  51                   push ecx
// 00a5ef1d  8d45f4               lea eax, [ebp - 0xc]
// 00a5ef20  50                   push eax
// 00a5ef21  52                   push edx
// 00a5ef22  ffd6                 call esi
// 00a5ef24  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a5ef28  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ef2b  68ffffff00           push 0xffffff
// 00a5ef30  51                   push ecx
// 00a5ef31  8d45f8               lea eax, [ebp - 8]
// 00a5ef34  50                   push eax
// 00a5ef35  52                   push edx
// 00a5ef36  ffd6                 call esi
// 00a5ef38  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a5ef3c  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ef3f  68ffffff00           push 0xffffff
// 00a5ef44  51                   push ecx
// 00a5ef45  8d45f6               lea eax, [ebp - 0xa]
// 00a5ef48  50                   push eax
// 00a5ef49  52                   push edx
// 00a5ef4a  ffd6                 call esi
// 00a5ef4c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5ef50  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ef53  68ffffff00           push 0xffffff
// 00a5ef58  51                   push ecx
// 00a5ef59  8d45fa               lea eax, [ebp - 6]
// 00a5ef5c  50                   push eax
// 00a5ef5d  52                   push edx
// 00a5ef5e  ffd6                 call esi
// 00a5ef60  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a5ef64  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ef67  68ffffff00           push 0xffffff
// 00a5ef6c  51                   push ecx
// 00a5ef6d  8d45fc               lea eax, [ebp - 4]
// 00a5ef70  50                   push eax
// 00a5ef71  52                   push edx
// 00a5ef72  ffd6                 call esi
// 00a5ef74  8d45fe               lea eax, [ebp - 2]
// 00a5ef77  68ffffff00           push 0xffffff
// 00a5ef7c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a5ef80  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ef83  51                   push ecx
// 00a5ef84  50                   push eax
// 00a5ef85  52                   push edx
// 00a5ef86  ffd6                 call esi
// 00a5ef88  8b4704               mov eax, dword ptr [edi + 4]
// 00a5ef8b  68ffffff00           push 0xffffff
// 00a5ef90  53                   push ebx
// 00a5ef91  55                   push ebp
// 00a5ef92  50                   push eax
// 00a5ef93  ffd6                 call esi
// 00a5ef95  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a5ef99  8b5704               mov edx, dword ptr [edi + 4]
// 00a5ef9c  68ffffff00           push 0xffffff
// 00a5efa1  51                   push ecx
// 00a5efa2  8d4502               lea eax, [ebp + 2]
// 00a5efa5  50                   push eax
// 00a5efa6  52                   push edx
// 00a5efa7  ffd6                 call esi
// 00a5efa9  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5efad  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5efb0  68ffffff00           push 0xffffff
// 00a5efb5  50                   push eax
// 00a5efb6  8d4502               lea eax, [ebp + 2]
// 00a5efb9  50                   push eax
// 00a5efba  51                   push ecx
// 00a5efbb  ffd6                 call esi
// 00a5efbd  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a5efc1  8b4704               mov eax, dword ptr [edi + 4]
// 00a5efc4  68ffffff00           push 0xffffff
// 00a5efc9  52                   push edx
// 00a5efca  55                   push ebp
// 00a5efcb  50                   push eax
// 00a5efcc  ffd6                 call esi
// 00a5efce  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a5efd2  8b5704               mov edx, dword ptr [edi + 4]
// 00a5efd5  68ffffff00           push 0xffffff
// 00a5efda  51                   push ecx
// 00a5efdb  8d45fe               lea eax, [ebp - 2]
// 00a5efde  50                   push eax
// 00a5efdf  52                   push edx
// 00a5efe0  ffd6                 call esi
// 00a5efe2  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5efe6  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5efe9  68ffffff00           push 0xffffff
// 00a5efee  50                   push eax
// 00a5efef  8d45fc               lea eax, [ebp - 4]
// 00a5eff2  50                   push eax
// 00a5eff3  51                   push ecx
// 00a5eff4  ffd6                 call esi
// 00a5eff6  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a5effa  68ffffff00           push 0xffffff
// 00a5efff  52                   push edx
// 00a5f000  8d45fa               lea eax, [ebp - 6]
// 00a5f003  50                   push eax
// 00a5f004  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f007  50                   push eax
// 00a5f008  ffd6                 call esi
// 00a5f00a  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5f00e  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f011  68ffffff00           push 0xffffff
// 00a5f016  51                   push ecx
// 00a5f017  8d45f6               lea eax, [ebp - 0xa]
// 00a5f01a  50                   push eax
// 00a5f01b  52                   push edx
// 00a5f01c  ffd6                 call esi
// 00a5f01e  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00a5f022  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f025  68ffffff00           push 0xffffff
// 00a5f02a  50                   push eax
// 00a5f02b  8d45f8               lea eax, [ebp - 8]
// 00a5f02e  50                   push eax
// 00a5f02f  51                   push ecx
// 00a5f030  ffd6                 call esi
// 00a5f032  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a5f036  68ffffff00           push 0xffffff
// 00a5f03b  8d45f4               lea eax, [ebp - 0xc]
// 00a5f03e  52                   push edx
// 00a5f03f  50                   push eax
// 00a5f040  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f043  50                   push eax
// 00a5f044  ffd6                 call esi
// 00a5f046  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a5f04a  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f04d  68ffffff00           push 0xffffff
// 00a5f052  51                   push ecx
// 00a5f053  8d45f2               lea eax, [ebp - 0xe]
// 00a5f056  50                   push eax
// 00a5f057  52                   push edx
// 00a5f058  ffd6                 call esi
// 00a5f05a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a5f05e  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f061  68ffffff00           push 0xffffff
// 00a5f066  50                   push eax
// 00a5f067  8d45f0               lea eax, [ebp - 0x10]
// 00a5f06a  50                   push eax
// 00a5f06b  51                   push ecx
// 00a5f06c  ffd6                 call esi
// 00a5f06e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a5f072  68ffffff00           push 0xffffff
// 00a5f077  52                   push edx
// 00a5f078  8d45ee               lea eax, [ebp - 0x12]
// 00a5f07b  50                   push eax
// 00a5f07c  8b4704               mov eax, dword ptr [edi + 4]
// 00a5f07f  50                   push eax
// 00a5f080  ffd6                 call esi
// 00a5f082  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a5f086  8b5704               mov edx, dword ptr [edi + 4]
// 00a5f089  68ffffff00           push 0xffffff
// 00a5f08e  51                   push ecx
// 00a5f08f  8d45ec               lea eax, [ebp - 0x14]
// 00a5f092  50                   push eax
// 00a5f093  52                   push edx
// 00a5f094  ffd6                 call esi
// 00a5f096  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a5f09a  8b4f04               mov ecx, dword ptr [edi + 4]
// 00a5f09d  68ffffff00           push 0xffffff
// 00a5f0a2  50                   push eax
// 00a5f0a3  8d45ea               lea eax, [ebp - 0x16]
// 00a5f0a6  50                   push eax
// 00a5f0a7  51                   push ecx
// 00a5f0a8  ffd6                 call esi
// 00a5f0aa  45                   inc ebp
// 00a5f0ab  836c244001           sub dword ptr [esp + 0x40], 1
// 00a5f0b0  0f85fafdffff         jne 0xa5eeb0
// 00a5f0b6  5f                   pop edi
// 00a5f0b7  5e                   pop esi
// 00a5f0b8  5d                   pop ebp
// 00a5f0b9  5b                   pop ebx
// 00a5f0ba  81c4bc000000         add esp, 0xbc
// 00a5f0c0  c20400               ret 4
// library xtp-13.2.1/Source\Controls\XTColorPageStandard.cpp (function ?DrawLargeSelectCell@CXTColorHex@@IAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTColorPageStandard.cpp
