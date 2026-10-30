// from server: 100% by auto
// roc 2007-03 004b03d0  unit: seg_004b0000  size: 807 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b03d0
//
// 004b03d0  55                   push ebp
// 004b03d1  8bec                 mov ebp, esp
// 004b03d3  83ec24               sub esp, 0x24
// 004b03d6  53                   push ebx
// 004b03d7  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004b03da  56                   push esi
// 004b03db  8b750c               mov esi, dword ptr [ebp + 0xc]
// 004b03de  57                   push edi
// 004b03df  b908000000           mov ecx, 8
// 004b03e4  8d7ddc               lea edi, [ebp - 0x24]
// 004b03e7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b03e9  8b7508               mov esi, dword ptr [ebp + 8]
// 004b03ec  b908000000           mov ecx, 8
// 004b03f1  8bfb                 mov edi, ebx
// 004b03f3  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b03f5  bf00000080           mov edi, 0x80000000
// 004b03fa  857df8               test dword ptr [ebp - 8], edi
// 004b03fd  c745fc01000000       mov dword ptr [ebp - 4], 1
// 004b0404  0f85c6010000         jne 0x4b05d0
// 004b040a  8d45dc               lea eax, [ebp - 0x24]
// 004b040d  50                   push eax
// 004b040e  53                   push ebx
// 004b040f  e8cce7ffff           call 0x4aebe0
// 004b0414  83c408               add esp, 8
// 004b0417  84c0                 test al, al
// 004b0419  0f84b1010000         je 0x4b05d0
// 004b041f  b807000000           mov eax, 7
// 004b0424  833c8300             cmp dword ptr [ebx + eax*4], 0
// 004b0428  7505                 jne 0x4b042f
// 004b042a  83e801               sub eax, 1
// 004b042d  79f5                 jns 0x4b0424
// 004b042f  85c0                 test eax, eax
// 004b0431  8bc8                 mov ecx, eax
// 004b0433  7c2a                 jl 0x4b045f
// 004b0435  837c8ddc00           cmp dword ptr [ebp + ecx*4 - 0x24], 0
// 004b043a  7505                 jne 0x4b0441
// 004b043c  83e901               sub ecx, 1
// 004b043f  79f4                 jns 0x4b0435
// 004b0441  3bc1                 cmp eax, ecx
// 004b0443  741a                 je 0x4b045f
// 004b0445  2bc1                 sub eax, ecx
// 004b0447  c1e005               shl eax, 5
// 004b044a  8bf0                 mov esi, eax
// 004b044c  8d4ddc               lea ecx, [ebp - 0x24]
// 004b044f  56                   push esi
// 004b0450  51                   push ecx
// 004b0451  e8aae6ffff           call 0x4aeb00
// 004b0456  83c408               add esp, 8
// 004b0459  83c601               add esi, 1
// 004b045c  8975fc               mov dword ptr [ebp - 4], esi
// 004b045f  857df8               test dword ptr [ebp - 8], edi
// 004b0462  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 004b0465  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004b0468  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004b046b  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004b046e  0f85ac000000         jne 0x4b0520
// 004b0474  bb07000000           mov ebx, 7
// 004b0479  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004b047c  8d642400             lea esp, [esp]
// 004b0480  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004b0483  8b3c9f               mov edi, dword ptr [edi + ebx*4]
// 004b0486  8b5c9ddc             mov ebx, dword ptr [ebp + ebx*4 - 0x24]
// 004b048a  3bfb                 cmp edi, ebx
// 004b048c  7716                 ja 0x4b04a4
// 004b048e  0f828c000000         jb 0x4b0520
// 004b0494  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 004b0497  83eb01               sub ebx, 1
// 004b049a  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004b049d  79e1                 jns 0x4b0480
// 004b049f  e97c000000           jmp 0x4b0520
// 004b04a4  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004b04a7  8bfb                 mov edi, ebx
// 004b04a9  03db                 add ebx, ebx
// 004b04ab  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004b04ae  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004b04b1  c1ef1f               shr edi, 0x1f
// 004b04b4  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004b04b7  03db                 add ebx, ebx
// 004b04b9  0bdf                 or ebx, edi
// 004b04bb  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b04be  895de0               mov dword ptr [ebp - 0x20], ebx
// 004b04c1  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004b04c4  c1ef1f               shr edi, 0x1f
// 004b04c7  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004b04ca  03db                 add ebx, ebx
// 004b04cc  0bdf                 or ebx, edi
// 004b04ce  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b04d1  c1ef1f               shr edi, 0x1f
// 004b04d4  8345fc01             add dword ptr [ebp - 4], 1
// 004b04d8  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004b04db  8bdf                 mov ebx, edi
// 004b04dd  8bfe                 mov edi, esi
// 004b04df  c1ef1f               shr edi, 0x1f
// 004b04e2  03f6                 add esi, esi
// 004b04e4  0bf3                 or esi, ebx
// 004b04e6  8bda                 mov ebx, edx
// 004b04e8  03d2                 add edx, edx
// 004b04ea  0bd7                 or edx, edi
// 004b04ec  c1eb1f               shr ebx, 0x1f
// 004b04ef  8bf9                 mov edi, ecx
// 004b04f1  03c9                 add ecx, ecx
// 004b04f3  0bcb                 or ecx, ebx
// 004b04f5  c1ef1f               shr edi, 0x1f
// 004b04f8  8bd8                 mov ebx, eax
// 004b04fa  03c0                 add eax, eax
// 004b04fc  0bc7                 or eax, edi
// 004b04fe  8b7df8               mov edi, dword ptr [ebp - 8]
// 004b0501  c1eb1f               shr ebx, 0x1f
// 004b0504  03ff                 add edi, edi
// 004b0506  0bfb                 or edi, ebx
// 004b0508  85ff                 test edi, edi
// 004b050a  8975e8               mov dword ptr [ebp - 0x18], esi
// 004b050d  8955ec               mov dword ptr [ebp - 0x14], edx
// 004b0510  894df0               mov dword ptr [ebp - 0x10], ecx
// 004b0513  8945f4               mov dword ptr [ebp - 0xc], eax
// 004b0516  897df8               mov dword ptr [ebp - 8], edi
// 004b0519  0f8955ffffff         jns 0x4b0474
// 004b051f  90                   nop 
// 004b0520  bf07000000           mov edi, 7
// 004b0525  897d0c               mov dword ptr [ebp + 0xc], edi
// 004b0528  eb06                 jmp 0x4b0530
// 004b052a  8d9b00000000         lea ebx, [ebx]
// 004b0530  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004b0533  8b1cbb               mov ebx, dword ptr [ebx + edi*4]
// 004b0536  8b7cbddc             mov edi, dword ptr [ebp + edi*4 - 0x24]
// 004b053a  3bfb                 cmp edi, ebx
// 004b053c  771c                 ja 0x4b055a
// 004b053e  720b                 jb 0x4b054b
// 004b0540  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b0543  83ef01               sub edi, 1
// 004b0546  897d0c               mov dword ptr [ebp + 0xc], edi
// 004b0549  79e5                 jns 0x4b0530
// 004b054b  837dfc00             cmp dword ptr [ebp - 4], 0
// 004b054f  0f849b010000         je 0x4b06f0
// 004b0555  e997000000           jmp 0x4b05f1
// 004b055a  8b5df8               mov ebx, dword ptr [ebp - 8]
// 004b055d  8bfb                 mov edi, ebx
// 004b055f  d1eb                 shr ebx, 1
// 004b0561  895df8               mov dword ptr [ebp - 8], ebx
// 004b0564  c1e71f               shl edi, 0x1f
// 004b0567  8bd8                 mov ebx, eax
// 004b0569  c1e31f               shl ebx, 0x1f
// 004b056c  d1e8                 shr eax, 1
// 004b056e  0bc7                 or eax, edi
// 004b0570  8bf9                 mov edi, ecx
// 004b0572  c1e71f               shl edi, 0x1f
// 004b0575  d1e9                 shr ecx, 1
// 004b0577  0bcb                 or ecx, ebx
// 004b0579  8bda                 mov ebx, edx
// 004b057b  c1e31f               shl ebx, 0x1f
// 004b057e  d1ea                 shr edx, 1
// 004b0580  0bd7                 or edx, edi
// 004b0582  8bfe                 mov edi, esi
// 004b0584  d1ee                 shr esi, 1
// 004b0586  0bf3                 or esi, ebx
// 004b0588  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004b058b  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004b058e  d1eb                 shr ebx, 1
// 004b0590  c1e71f               shl edi, 0x1f
// 004b0593  0bdf                 or ebx, edi
// 004b0595  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b0598  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004b059b  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004b059e  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004b05a1  d1eb                 shr ebx, 1
// 004b05a3  c1e71f               shl edi, 0x1f
// 004b05a6  0bdf                 or ebx, edi
// 004b05a8  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b05ab  895de0               mov dword ptr [ebp - 0x20], ebx
// 004b05ae  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004b05b1  c1e71f               shl edi, 0x1f
// 004b05b4  d1eb                 shr ebx, 1
// 004b05b6  0bdf                 or ebx, edi
// 004b05b8  836dfc01             sub dword ptr [ebp - 4], 1
// 004b05bc  8945f4               mov dword ptr [ebp - 0xc], eax
// 004b05bf  894df0               mov dword ptr [ebp - 0x10], ecx
// 004b05c2  8955ec               mov dword ptr [ebp - 0x14], edx
// 004b05c5  8975e8               mov dword ptr [ebp - 0x18], esi
// 004b05c8  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004b05cb  e950ffffff           jmp 0x4b0520
// 004b05d0  8d55dc               lea edx, [ebp - 0x24]
// 004b05d3  53                   push ebx
// 004b05d4  52                   push edx
// 004b05d5  e806e6ffff           call 0x4aebe0
// 004b05da  83c408               add esp, 8
// 004b05dd  84c0                 test al, al
// 004b05df  0f850b010000         jne 0x4b06f0
// 004b05e5  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 004b05e8  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004b05eb  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004b05ee  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004b05f1  836dfc01             sub dword ptr [ebp - 4], 1
// 004b05f5  bf07000000           mov edi, 7
// 004b05fa  897d0c               mov dword ptr [ebp + 0xc], edi
// 004b05fd  8d4900               lea ecx, [ecx]
// 004b0600  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 004b0603  8b1cbb               mov ebx, dword ptr [ebx + edi*4]
// 004b0606  8b7cbddc             mov edi, dword ptr [ebp + edi*4 - 0x24]
// 004b060a  3bfb                 cmp edi, ebx
// 004b060c  776b                 ja 0x4b0679
// 004b060e  720b                 jb 0x4b061b
// 004b0610  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b0613  83ef01               sub edi, 1
// 004b0616  897d0c               mov dword ptr [ebp + 0xc], edi
// 004b0619  79e5                 jns 0x4b0600
// 004b061b  8d45dc               lea eax, [ebp - 0x24]
// 004b061e  894508               mov dword ptr [ebp + 8], eax
// 004b0621  c7450c01000000       mov dword ptr [ebp + 0xc], 1
// 004b0628  8b7508               mov esi, dword ptr [ebp + 8]
// 004b062b  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 004b062e  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 004b0631  8b06                 mov eax, dword ptr [esi]
// 004b0633  33d2                 xor edx, edx
// 004b0635  2907                 sub dword ptr [edi], eax
// 004b0637  8b4604               mov eax, dword ptr [esi + 4]
// 004b063a  194704               sbb dword ptr [edi + 4], eax
// 004b063d  8b4608               mov eax, dword ptr [esi + 8]
// 004b0640  194708               sbb dword ptr [edi + 8], eax
// 004b0643  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b0646  19470c               sbb dword ptr [edi + 0xc], eax
// 004b0649  e322                 jecxz 0x4b066d
// 004b064b  42                   inc edx
// 004b064c  42                   inc edx
// 004b064d  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b0650  1904d7               sbb dword ptr [edi + edx*8], eax
// 004b0653  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b0657  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004b065b  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b065f  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004b0663  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b0667  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004b066b  e2de                 loop 0x4b064b
// 004b066d  8b45f4               mov eax, dword ptr [ebp - 0xc]
// 004b0670  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 004b0673  8b55ec               mov edx, dword ptr [ebp - 0x14]
// 004b0676  8b75e8               mov esi, dword ptr [ebp - 0x18]
// 004b0679  8b5df8               mov ebx, dword ptr [ebp - 8]
// 004b067c  8bfb                 mov edi, ebx
// 004b067e  d1eb                 shr ebx, 1
// 004b0680  895df8               mov dword ptr [ebp - 8], ebx
// 004b0683  c1e71f               shl edi, 0x1f
// 004b0686  8bd8                 mov ebx, eax
// 004b0688  c1e31f               shl ebx, 0x1f
// 004b068b  d1e8                 shr eax, 1
// 004b068d  0bc7                 or eax, edi
// 004b068f  8bf9                 mov edi, ecx
// 004b0691  c1e71f               shl edi, 0x1f
// 004b0694  d1e9                 shr ecx, 1
// 004b0696  0bcb                 or ecx, ebx
// 004b0698  8bda                 mov ebx, edx
// 004b069a  c1e31f               shl ebx, 0x1f
// 004b069d  d1ea                 shr edx, 1
// 004b069f  0bd7                 or edx, edi
// 004b06a1  8bfe                 mov edi, esi
// 004b06a3  d1ee                 shr esi, 1
// 004b06a5  0bf3                 or esi, ebx
// 004b06a7  8b5de4               mov ebx, dword ptr [ebp - 0x1c]
// 004b06aa  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004b06ad  d1eb                 shr ebx, 1
// 004b06af  c1e71f               shl edi, 0x1f
// 004b06b2  0bdf                 or ebx, edi
// 004b06b4  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b06b7  895de4               mov dword ptr [ebp - 0x1c], ebx
// 004b06ba  8b5de0               mov ebx, dword ptr [ebp - 0x20]
// 004b06bd  895d0c               mov dword ptr [ebp + 0xc], ebx
// 004b06c0  d1eb                 shr ebx, 1
// 004b06c2  c1e71f               shl edi, 0x1f
// 004b06c5  0bdf                 or ebx, edi
// 004b06c7  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 004b06ca  895de0               mov dword ptr [ebp - 0x20], ebx
// 004b06cd  8b5ddc               mov ebx, dword ptr [ebp - 0x24]
// 004b06d0  c1e71f               shl edi, 0x1f
// 004b06d3  d1eb                 shr ebx, 1
// 004b06d5  0bdf                 or ebx, edi
// 004b06d7  837dfc00             cmp dword ptr [ebp - 4], 0
// 004b06db  8945f4               mov dword ptr [ebp - 0xc], eax
// 004b06de  894df0               mov dword ptr [ebp - 0x10], ecx
// 004b06e1  8955ec               mov dword ptr [ebp - 0x14], edx
// 004b06e4  8975e8               mov dword ptr [ebp - 0x18], esi
// 004b06e7  895ddc               mov dword ptr [ebp - 0x24], ebx
// 004b06ea  0f8501ffffff         jne 0x4b05f1
// 004b06f0  5f                   pop edi
// 004b06f1  5e                   pop esi
// 004b06f2  5b                   pop ebx
// 004b06f3  8be5                 mov esp, ebp
// 004b06f5  5d                   pop ebp
// 004b06f6  c3                   ret 

// from server: 18% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp