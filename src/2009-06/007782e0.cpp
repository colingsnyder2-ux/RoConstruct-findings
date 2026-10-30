// roc 2009-06 007782e0  unit: CXTPPropExchangeXMLNode  size: 1752 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007782e0
//
// 007782e0  55                   push ebp
// 007782e1  8bec                 mov ebp, esp
// 007782e3  83e4c0               and esp, 0xffffffc0
// 007782e6  6aff                 push -1
// 007782e8  6899998700           push 0x879999
// 007782ed  64a100000000         mov eax, dword ptr fs:[0]
// 007782f3  50                   push eax
// 007782f4  81eca8000000         sub esp, 0xa8
// 007782fa  53                   push ebx
// 007782fb  56                   push esi
// 007782fc  57                   push edi
// 007782fd  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00778302  33c4                 xor eax, esp
// 00778304  50                   push eax
// 00778305  8d8424b8000000       lea eax, [esp + 0xb8]
// 0077830c  64a300000000         mov dword ptr fs:[0], eax
// 00778312  8bf1                 mov esi, ecx
// 00778314  33db                 xor ebx, ebx
// 00778316  395e28               cmp dword ptr [esi + 0x28], ebx
// 00778319  0f843e030000         je 0x77865d
// 0077831f  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00778322  0fb7c7               movzx eax, di
// 00778325  83c0fe               add eax, -2
// 00778328  83f863               cmp eax, 0x63
// 0077832b  0f875d050000         ja 0x77888e
// 00778331  0fb680c8887700       movzx eax, byte ptr [eax + 0x7788c8]
// 00778338  ff2485a8887700       jmp dword ptr [eax*4 + 0x7788a8]
// 0077833f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00778342  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00778348  50                   push eax
// 00778349  ff1574e98900         call dword ptr [0x89e974]
// 0077834f  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00778352  83c404               add esp, 4
// 00778355  8d4c244c             lea ecx, [esp + 0x4c]
// 00778359  51                   push ecx
// 0077835a  52                   push edx
// 0077835b  57                   push edi
// 0077835c  8bce                 mov ecx, esi
// 0077835e  89442458             mov dword ptr [esp + 0x58], eax
// 00778362  e869e4ffff           call 0x7767d0
// 00778367  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0077836e  64890d00000000       mov dword ptr fs:[0], ecx
// 00778375  59                   pop ecx
// 00778376  5f                   pop edi
// 00778377  5e                   pop esi
// 00778378  5b                   pop ebx
// 00778379  8be5                 mov esp, ebp
// 0077837b  5d                   pop ebp
// 0077837c  c21000               ret 0x10
// 0077837f  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00778382  8d44244c             lea eax, [esp + 0x4c]
// 00778386  50                   push eax
// 00778387  895c2450             mov dword ptr [esp + 0x50], ebx
// 0077838b  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00778391  50                   push eax
// 00778392  ff1528e88900         call dword ptr [0x89e828]
// 00778398  d95c2468             fstp dword ptr [esp + 0x68]
// 0077839c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0077839f  83c408               add esp, 8
// 007783a2  8d4c2460             lea ecx, [esp + 0x60]
// 007783a6  51                   push ecx
// 007783a7  52                   push edx
// 007783a8  57                   push edi
// 007783a9  8bce                 mov ecx, esi
// 007783ab  e820e4ffff           call 0x7767d0
// 007783b0  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007783b7  64890d00000000       mov dword ptr fs:[0], ecx
// 007783be  59                   pop ecx
// 007783bf  5f                   pop edi
// 007783c0  5e                   pop esi
// 007783c1  5b                   pop ebx
// 007783c2  8be5                 mov esp, ebp
// 007783c4  5d                   pop ebp
// 007783c5  c21000               ret 0x10
// 007783c8  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007783cb  8d442460             lea eax, [esp + 0x60]
// 007783cf  50                   push eax
// 007783d0  895c2464             mov dword ptr [esp + 0x64], ebx
// 007783d4  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007783da  50                   push eax
// 007783db  ff1528e88900         call dword ptr [0x89e828]
// 007783e1  dd5c2454             fstp qword ptr [esp + 0x54]
// 007783e5  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007783e8  83c408               add esp, 8
// 007783eb  8d4c244c             lea ecx, [esp + 0x4c]
// 007783ef  51                   push ecx
// 007783f0  52                   push edx
// 007783f1  57                   push edi
// 007783f2  8bce                 mov ecx, esi
// 007783f4  e8d7e3ffff           call 0x7767d0
// 007783f9  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00778400  64890d00000000       mov dword ptr fs:[0], ecx
// 00778407  59                   pop ecx
// 00778408  5f                   pop edi
// 00778409  5e                   pop esi
// 0077840a  5b                   pop ebx
// 0077840b  8be5                 mov esp, ebp
// 0077840d  5d                   pop ebp
// 0077840e  c21000               ret 0x10
// 00778411  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00778414  d9ee                 fldz 
// 00778416  8d442460             lea eax, [esp + 0x60]
// 0077841a  dd5c2460             fstp qword ptr [esp + 0x60]
// 0077841e  50                   push eax
// 0077841f  51                   push ecx
// 00778420  8bce                 mov ecx, esi
// 00778422  895c2470             mov dword ptr [esp + 0x70], ebx
// 00778426  e865fdffff           call 0x778190
// 0077842b  85c0                 test eax, eax
// 0077842d  0f845b040000         je 0x77888e
// 00778433  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00778436  8b542460             mov edx, dword ptr [esp + 0x60]
// 0077843a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0077843e  8910                 mov dword ptr [eax], edx
// 00778440  8b542468             mov edx, dword ptr [esp + 0x68]
// 00778444  894804               mov dword ptr [eax + 4], ecx
// 00778447  895008               mov dword ptr [eax + 8], edx
// 0077844a  b801000000           mov eax, 1
// 0077844f  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00778456  64890d00000000       mov dword ptr fs:[0], ecx
// 0077845d  59                   pop ecx
// 0077845e  5f                   pop edi
// 0077845f  5e                   pop esi
// 00778460  5b                   pop ebx
// 00778461  8be5                 mov esp, ebp
// 00778463  5d                   pop ebp
// 00778464  c21000               ret 0x10
// 00778467  6683ff65             cmp di, 0x65
// 0077846b  0f8582000000         jne 0x7784f3
// 00778471  8d442464             lea eax, [esp + 0x64]
// 00778475  50                   push eax
// 00778476  8d4c2464             lea ecx, [esp + 0x64]
// 0077847a  51                   push ecx
// 0077847b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0077847e  6890c08f00           push 0x8fc090
// 00778483  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00778487  895c2470             mov dword ptr [esp + 0x70], ebx
// 0077848b  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00778491  50                   push eax
// 00778492  ff15e4e68900         call dword ptr [0x89e6e4]
// 00778498  83c410               add esp, 0x10
// 0077849b  83f802               cmp eax, 2
// 0077849e  8b4510               mov eax, dword ptr [ebp + 0x10]
// 007784a1  7426                 je 0x7784c9
// 007784a3  8b5514               mov edx, dword ptr [ebp + 0x14]
// 007784a6  52                   push edx
// 007784a7  50                   push eax
// 007784a8  6a65                 push 0x65
// 007784aa  8bce                 mov ecx, esi
// 007784ac  e81fe3ffff           call 0x7767d0
// 007784b1  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007784b8  64890d00000000       mov dword ptr fs:[0], ecx
// 007784bf  59                   pop ecx
// 007784c0  5f                   pop edi
// 007784c1  5e                   pop esi
// 007784c2  5b                   pop ebx
// 007784c3  8be5                 mov esp, ebp
// 007784c5  5d                   pop ebp
// 007784c6  c21000               ret 0x10
// 007784c9  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007784cd  8b542464             mov edx, dword ptr [esp + 0x64]
// 007784d1  8908                 mov dword ptr [eax], ecx
// 007784d3  895004               mov dword ptr [eax + 4], edx
// 007784d6  b801000000           mov eax, 1
// 007784db  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007784e2  64890d00000000       mov dword ptr fs:[0], ecx
// 007784e9  59                   pop ecx
// 007784ea  5f                   pop edi
// 007784eb  5e                   pop esi
// 007784ec  5b                   pop ebx
// 007784ed  8be5                 mov esp, ebp
// 007784ef  5d                   pop ebp
// 007784f0  c21000               ret 0x10
// 007784f3  6683ff64             cmp di, 0x64
// 007784f7  0f85a8000000         jne 0x7785a5
// 007784fd  8d44246c             lea eax, [esp + 0x6c]
// 00778501  50                   push eax
// 00778502  8d4c246c             lea ecx, [esp + 0x6c]
// 00778506  51                   push ecx
// 00778507  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0077850a  8d54246c             lea edx, [esp + 0x6c]
// 0077850e  52                   push edx
// 0077850f  8d44246c             lea eax, [esp + 0x6c]
// 00778513  50                   push eax
// 00778514  6880c08f00           push 0x8fc080
// 00778519  895c2474             mov dword ptr [esp + 0x74], ebx
// 0077851d  895c2478             mov dword ptr [esp + 0x78], ebx
// 00778521  895c247c             mov dword ptr [esp + 0x7c], ebx
// 00778525  899c2480000000       mov dword ptr [esp + 0x80], ebx
// 0077852c  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00778532  50                   push eax
// 00778533  ff15e4e68900         call dword ptr [0x89e6e4]
// 00778539  83c418               add esp, 0x18
// 0077853c  83f804               cmp eax, 4
// 0077853f  7429                 je 0x77856a
// 00778541  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00778544  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00778547  51                   push ecx
// 00778548  52                   push edx
// 00778549  6a64                 push 0x64
// 0077854b  8bce                 mov ecx, esi
// 0077854d  e87ee2ffff           call 0x7767d0
// 00778552  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00778559  64890d00000000       mov dword ptr fs:[0], ecx
// 00778560  59                   pop ecx
// 00778561  5f                   pop edi
// 00778562  5e                   pop esi
// 00778563  5b                   pop ebx
// 00778564  8be5                 mov esp, ebp
// 00778566  5d                   pop ebp
// 00778567  c21000               ret 0x10
// 0077856a  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0077856d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00778571  8b542464             mov edx, dword ptr [esp + 0x64]
// 00778575  8908                 mov dword ptr [eax], ecx
// 00778577  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0077857b  895004               mov dword ptr [eax + 4], edx
// 0077857e  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00778582  894808               mov dword ptr [eax + 8], ecx
// 00778585  89500c               mov dword ptr [eax + 0xc], edx
// 00778588  b801000000           mov eax, 1
// 0077858d  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00778594  64890d00000000       mov dword ptr fs:[0], ecx
// 0077859b  59                   pop ecx
// 0077859c  5f                   pop edi
// 0077859d  5e                   pop esi
// 0077859e  5b                   pop ebx
// 0077859f  8be5                 mov esp, ebp
// 007785a1  5d                   pop ebp
// 007785a2  c21000               ret 0x10
// 007785a5  8b7d08               mov edi, dword ptr [ebp + 8]
// 007785a8  57                   push edi
// 007785a9  e882d1ffff           call 0x775730
// 007785ae  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 007785b1  57                   push edi
// 007785b2  ff1508fa8900         call dword ptr [0x89fa08]
// 007785b8  b801000000           mov eax, 1
// 007785bd  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007785c4  64890d00000000       mov dword ptr fs:[0], ecx
// 007785cb  59                   pop ecx
// 007785cc  5f                   pop edi
// 007785cd  5e                   pop esi
// 007785ce  5b                   pop ebx
// 007785cf  8be5                 mov esp, ebp
// 007785d1  5d                   pop ebp
// 007785d2  c21000               ret 0x10
// 007785d5  8b4508               mov eax, dword ptr [ebp + 8]
// 007785d8  50                   push eax
// 007785d9  8d4c2450             lea ecx, [esp + 0x50]
// 007785dd  e85edcffff           call 0x776240
// 007785e2  833d946ea200ff       cmp dword ptr [0xa26e94], -1
// 007785e9  899c24c0000000       mov dword ptr [esp + 0xc0], ebx
// 007785f0  7533                 jne 0x778625
// 007785f2  d9ee                 fldz 
// 007785f4  8b4d08               mov ecx, dword ptr [ebp + 8]
// 007785f7  dd5c2460             fstp qword ptr [esp + 0x60]
// 007785fb  895c2468             mov dword ptr [esp + 0x68], ebx
// 007785ff  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00778605  50                   push eax
// 00778606  8d4c2464             lea ecx, [esp + 0x64]
// 0077860a  51                   push ecx
// 0077860b  e850faffff           call 0x778060
// 00778610  83c408               add esp, 8
// 00778613  85c0                 test eax, eax
// 00778615  740e                 je 0x778625
// 00778617  8d542460             lea edx, [esp + 0x60]
// 0077861b  52                   push edx
// 0077861c  8d4c2450             lea ecx, [esp + 0x50]
// 00778620  e8f33e0d00           call 0x84c518
// 00778625  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00778628  8d44244c             lea eax, [esp + 0x4c]
// 0077862c  50                   push eax
// 0077862d  51                   push ecx
// 0077862e  57                   push edi
// 0077862f  8bce                 mov ecx, esi
// 00778631  e89ae1ffff           call 0x7767d0
// 00778636  8d54244c             lea edx, [esp + 0x4c]
// 0077863a  52                   push edx
// 0077863b  8bf0                 mov esi, eax
// 0077863d  ff1528ea8900         call dword ptr [0x89ea28]
// 00778643  8bc6                 mov eax, esi
// 00778645  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0077864c  64890d00000000       mov dword ptr fs:[0], ecx
// 00778653  59                   pop ecx
// 00778654  5f                   pop edi
// 00778655  5e                   pop esi
// 00778656  5b                   pop ebx
// 00778657  8be5                 mov esp, ebp
// 00778659  5d                   pop ebp
// 0077865a  c21000               ret 0x10
// 0077865d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00778660  0fb7c1               movzx eax, cx
// 00778663  83c0fe               add eax, -2
// 00778666  83f863               cmp eax, 0x63
// 00778669  0f871f020000         ja 0x77888e
// 0077866f  0fb68054897700       movzx eax, byte ptr [eax + 0x778954]
// 00778676  ff24852c897700       jmp dword ptr [eax*4 + 0x77892c]
// 0077867d  51                   push ecx
// 0077867e  8bce                 mov ecx, esi
// 00778680  895c2450             mov dword ptr [esp + 0x50], ebx
// 00778684  e8d7ccffff           call 0x775360
// 00778689  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0077868c  50                   push eax
// 0077868d  51                   push ecx
// 0077868e  8d542454             lea edx, [esp + 0x54]
// 00778692  52                   push edx
// 00778693  e81e18faff           call 0x719eb6
// 00778698  8b442458             mov eax, dword ptr [esp + 0x58]
// 0077869c  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0077869f  50                   push eax
// 007786a0  68b0298f00           push 0x8f29b0
// 007786a5  51                   push ecx
// 007786a6  ff15c4fc8900         call dword ptr [0x89fcc4]
// 007786ac  83c418               add esp, 0x18
// 007786af  b801000000           mov eax, 1
// 007786b4  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007786bb  64890d00000000       mov dword ptr fs:[0], ecx
// 007786c2  59                   pop ecx
// 007786c3  5f                   pop edi
// 007786c4  5e                   pop esi
// 007786c5  5b                   pop ebx
// 007786c6  8be5                 mov esp, ebp
// 007786c8  5d                   pop ebp
// 007786c9  c21000               ret 0x10
// 007786cc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007786cf  8b7d08               mov edi, dword ptr [ebp + 8]
// 007786d2  52                   push edx
// 007786d3  8bcf                 mov ecx, edi
// 007786d5  ff1508fa8900         call dword ptr [0x89fa08]
// 007786db  57                   push edi
// 007786dc  8bce                 mov ecx, esi
// 007786de  e84dd0ffff           call 0x775730
// 007786e3  b801000000           mov eax, 1
// 007786e8  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 007786ef  64890d00000000       mov dword ptr fs:[0], ecx
// 007786f6  59                   pop ecx
// 007786f7  5f                   pop edi
// 007786f8  5e                   pop esi
// 007786f9  5b                   pop ebx
// 007786fa  8be5                 mov esp, ebp
// 007786fc  5d                   pop ebp
// 007786fd  c21000               ret 0x10
// 00778700  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00778703  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00778706  50                   push eax
// 00778707  51                   push ecx
// 00778708  8bce                 mov ecx, esi
// 0077870a  e881faffff           call 0x778190
// 0077870f  b801000000           mov eax, 1
// 00778714  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0077871b  64890d00000000       mov dword ptr fs:[0], ecx
// 00778722  59                   pop ecx
// 00778723  5f                   pop edi
// 00778724  5e                   pop esi
// 00778725  5b                   pop ebx
// 00778726  8be5                 mov esp, ebp
// 00778728  5d                   pop ebp
// 00778729  c21000               ret 0x10
// 0077872c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0077872f  d902                 fld dword ptr [edx]
// 00778731  83ec08               sub esp, 8
// 00778734  dd1c24               fstp qword ptr [esp]
// 00778737  6814c18f00           push 0x8fc114
// 0077873c  8b4508               mov eax, dword ptr [ebp + 8]
// 0077873f  50                   push eax
// 00778740  ff15c4fc8900         call dword ptr [0x89fcc4]
// 00778746  83c410               add esp, 0x10
// 00778749  b801000000           mov eax, 1
// 0077874e  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00778755  64890d00000000       mov dword ptr fs:[0], ecx
// 0077875c  59                   pop ecx
// 0077875d  5f                   pop edi
// 0077875e  5e                   pop esi
// 0077875f  5b                   pop ebx
// 00778760  8be5                 mov esp, ebp
// 00778762  5d                   pop ebp
// 00778763  c21000               ret 0x10
// 00778766  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 00778769  dd01                 fld qword ptr [ecx]
// 0077876b  8b5508               mov edx, dword ptr [ebp + 8]
// 0077876e  83ec08               sub esp, 8
// 00778771  dd1c24               fstp qword ptr [esp]
// 00778774  6814c18f00           push 0x8fc114
// 00778779  52                   push edx
// 0077877a  ff15c4fc8900         call dword ptr [0x89fcc4]
// 00778780  83c410               add esp, 0x10
// 00778783  b801000000           mov eax, 1
// 00778788  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0077878f  64890d00000000       mov dword ptr fs:[0], ecx
// 00778796  59                   pop ecx
// 00778797  5f                   pop edi
// 00778798  5e                   pop esi
// 00778799  5b                   pop ebx
// 0077879a  8be5                 mov esp, ebp
// 0077879c  5d                   pop ebp
// 0077879d  c21000               ret 0x10
// 007787a0  8b4510               mov eax, dword ptr [ebp + 0x10]
// 007787a3  8b4804               mov ecx, dword ptr [eax + 4]
// 007787a6  8b10                 mov edx, dword ptr [eax]
// 007787a8  51                   push ecx
// 007787a9  52                   push edx
// 007787aa  6890c08f00           push 0x8fc090
// 007787af  eb8b                 jmp 0x77873c
// 007787b1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 007787b4  8b480c               mov ecx, dword ptr [eax + 0xc]
// 007787b7  8b5008               mov edx, dword ptr [eax + 8]
// 007787ba  51                   push ecx
// 007787bb  8b4804               mov ecx, dword ptr [eax + 4]
// 007787be  52                   push edx
// 007787bf  8b10                 mov edx, dword ptr [eax]
// 007787c1  8b4508               mov eax, dword ptr [ebp + 8]
// 007787c4  51                   push ecx
// 007787c5  52                   push edx
// 007787c6  6880c08f00           push 0x8fc080
// 007787cb  50                   push eax
// 007787cc  ff15c4fc8900         call dword ptr [0x89fcc4]
// 007787d2  83c418               add esp, 0x18
// 007787d5  e96fffffff           jmp 0x778749
// 007787da  8b35946ea200         mov esi, dword ptr [0xa26e94]
// 007787e0  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 007787e3  83feff               cmp esi, -1
// 007787e6  7549                 jne 0x778831
// 007787e8  66833f07             cmp word ptr [edi], 7
// 007787ec  7541                 jne 0x77882f
// 007787ee  dd4708               fld qword ptr [edi + 8]
// 007787f1  8d4c2460             lea ecx, [esp + 0x60]
// 007787f5  51                   push ecx
// 007787f6  dd5c2464             fstp qword ptr [esp + 0x64]
// 007787fa  8d542474             lea edx, [esp + 0x74]
// 007787fe  52                   push edx
// 007787ff  895c2470             mov dword ptr [esp + 0x70], ebx
// 00778803  e858daffff           call 0x776260
// 00778808  83c408               add esp, 8
// 0077880b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0077880e  50                   push eax
// 0077880f  c78424c400000001000000 mov dword ptr [esp + 0xc4], 1
// 0077881a  ff1508fa8900         call dword ptr [0x89fa08]
// 00778820  8d4c2470             lea ecx, [esp + 0x70]
// 00778824  ff1510fd8900         call dword ptr [0x89fd10]
// 0077882a  e91affffff           jmp 0x778749
// 0077882f  33f6                 xor esi, esi
// 00778831  8d442474             lea eax, [esp + 0x74]
// 00778835  50                   push eax
// 00778836  e841390d00           call 0x84c17c
// 0077883b  6a08                 push 8
// 0077883d  53                   push ebx
// 0077883e  56                   push esi
// 0077883f  57                   push edi
// 00778840  8d8c2484000000       lea ecx, [esp + 0x84]
// 00778847  51                   push ecx
// 00778848  c78424d400000002000000 mov dword ptr [esp + 0xd4], 2
// 00778853  ff15f8e98900         call dword ptr [0x89e9f8]
// 00778859  85c0                 test eax, eax
// 0077885b  7c26                 jl 0x778883
// 0077885d  66837c247408         cmp word ptr [esp + 0x74], 8
// 00778863  751e                 jne 0x778883
// 00778865  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00778869  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0077886c  52                   push edx
// 0077886d  ff15d8f88900         call dword ptr [0x89f8d8]
// 00778873  8d442474             lea eax, [esp + 0x74]
// 00778877  50                   push eax
// 00778878  ff1528ea8900         call dword ptr [0x89ea28]
// 0077887e  e9c6feffff           jmp 0x778749
// 00778883  8d4c2474             lea ecx, [esp + 0x74]
// 00778887  51                   push ecx
// 00778888  ff1528ea8900         call dword ptr [0x89ea28]
// 0077888e  33c0                 xor eax, eax
// 00778890  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 00778897  64890d00000000       mov dword ptr fs:[0], ecx
// 0077889e  59                   pop ecx
// 0077889f  5f                   pop edi
// 007788a0  5e                   pop esi
// 007788a1  5b                   pop ebx
// 007788a2  8be5                 mov esp, ebp
// 007788a4  5d                   pop ebp
// 007788a5  c21000               ret 0x10
// 007788a8  3f                   aas 
// 007788a9  8377007f             xor dword ptr [edi], 0x7f
// 007788ad  837700c8             xor dword ptr [edi], 0xffffffc8
// 007788b1  83770011             xor dword ptr [edi], 0x11
// 007788b5  847700               test byte ptr [edi], dh
// 007788b8  8e887700d585         mov cs, word ptr [eax - 0x7a2aff89]
// 007788be  7700                 ja 0x7788c0
// 007788c0  67847700             test byte ptr [bx], dh
// 007788c4  8e8877000000         mov cs, word ptr [eax + 0x77]
// 007788ca  0102                 add dword ptr [edx], eax
// 007788cc  07                   pop es
// 007788cd  030407               add eax, dword ptr [edi + eax]
// 007788d0  07                   pop es
// 007788d1  000507070707         add byte ptr [0x7070707], al
// 007788d7  0007                 add byte ptr [edi], al
// 007788d9  07                   pop es
// 007788da  07                   pop es
// 007788db  07                   pop es
// 007788dc  07                   pop es
// 007788dd  07                   pop es
// 007788de  07                   pop es
// 007788df  07                   pop es
// 007788e0  07                   pop es
// 007788e1  07                   pop es
// 007788e2  07                   pop es
// 007788e3  07                   pop es
// 007788e4  06                   push es
// 007788e5  07                   pop es
// 007788e6  07                   pop es
// 007788e7  07                   pop es
// 007788e8  07                   pop es
// 007788e9  07                   pop es
// 007788ea  07                   pop es
// 007788eb  07                   pop es
// 007788ec  07                   pop es
// 007788ed  07                   pop es
// 007788ee  07                   pop es
// 007788ef  07                   pop es
// 007788f0  07                   pop es
// 007788f1  07                   pop es
// 007788f2  07                   pop es
// 007788f3  07                   pop es
// 007788f4  07                   pop es
// 007788f5  07                   pop es
// 007788f6  07                   pop es
// 007788f7  07                   pop es
// 007788f8  07                   pop es
// 007788f9  07                   pop es
// 007788fa  07                   pop es
// 007788fb  07                   pop es
// 007788fc  07                   pop es
// 007788fd  07                   pop es
// 007788fe  07                   pop es
// 007788ff  07                   pop es
// 00778900  07                   pop es
// 00778901  07                   pop es
// 00778902  07                   pop es
// 00778903  07                   pop es
// 00778904  07                   pop es
// 00778905  07                   pop es
// 00778906  07                   pop es
// 00778907  07                   pop es
// 00778908  07                   pop es
// 00778909  07                   pop es
// 0077890a  07                   pop es
// 0077890b  07                   pop es
// 0077890c  07                   pop es
// 0077890d  07                   pop es
// 0077890e  07                   pop es
// 0077890f  07                   pop es
// 00778910  07                   pop es
// 00778911  07                   pop es
// 00778912  07                   pop es
// 00778913  07                   pop es
// 00778914  07                   pop es
// 00778915  07                   pop es
// 00778916  07                   pop es
// 00778917  07                   pop es
// 00778918  07                   pop es
// 00778919  07                   pop es
// 0077891a  07                   pop es
// 0077891b  07                   pop es
// 0077891c  07                   pop es
// 0077891d  07                   pop es
// 0077891e  07                   pop es
// 0077891f  07                   pop es
// 00778920  07                   pop es
// 00778921  07                   pop es
// 00778922  07                   pop es
// 00778923  07                   pop es
// 00778924  07                   pop es
// 00778925  07                   pop es
// 00778926  07                   pop es
// 00778927  07                   pop es
// 00778928  07                   pop es
// 00778929  07                   pop es
// 0077892a  06                   push es
// 0077892b  06                   push es
// 0077892c  7d86                 jge 0x7788b4
// 0077892e  7700                 ja 0x778930
// 00778930  2c87                 sub al, 0x87
// 00778932  7700                 ja 0x778934
// 00778934  66877700             xchg word ptr [edi], si
// 00778938  008777008e88         add byte ptr [edi - 0x7771ff89], al
// 0077893e  7700                 ja 0x778940
// 00778940  da877700cc86         fiadd dword ptr [edi - 0x7933ff89]
// 00778946  7700                 ja 0x778948
// 00778948  b187                 mov cl, 0x87
// 0077894a  7700                 ja 0x77894c
// 0077894c  a08777008e           mov al, byte ptr [0x8e007787]
// 00778951  887700               mov byte ptr [edi], dh
// 00778954  0000                 add byte ptr [eax], al
// 00778956  0102                 add dword ptr [edx], eax
// 00778958  0903                 or dword ptr [ebx], eax
// 0077895a  0409                 add al, 9
// 0077895c  0900                 or dword ptr [eax], eax
// 0077895e  0509090909           add eax, 0x9090909
// 00778963  0009                 add byte ptr [ecx], cl
// 00778965  0909                 or dword ptr [ecx], ecx
// 00778967  0909                 or dword ptr [ecx], ecx
// 00778969  0909                 or dword ptr [ecx], ecx
// 0077896b  0909                 or dword ptr [ecx], ecx
// 0077896d  0909                 or dword ptr [ecx], ecx
// 0077896f  0906                 or dword ptr [esi], eax
// 00778971  0909                 or dword ptr [ecx], ecx
// 00778973  0909                 or dword ptr [ecx], ecx
// 00778975  0909                 or dword ptr [ecx], ecx
// 00778977  0909                 or dword ptr [ecx], ecx
// 00778979  0909                 or dword ptr [ecx], ecx
// 0077897b  0909                 or dword ptr [ecx], ecx
// 0077897d  0909                 or dword ptr [ecx], ecx
// 0077897f  0909                 or dword ptr [ecx], ecx
// 00778981  0909                 or dword ptr [ecx], ecx
// 00778983  0909                 or dword ptr [ecx], ecx
// 00778985  0909                 or dword ptr [ecx], ecx
// 00778987  0909                 or dword ptr [ecx], ecx
// 00778989  0909                 or dword ptr [ecx], ecx
// 0077898b  0909                 or dword ptr [ecx], ecx
// 0077898d  0909                 or dword ptr [ecx], ecx
// 0077898f  0909                 or dword ptr [ecx], ecx
// 00778991  0909                 or dword ptr [ecx], ecx
// 00778993  0909                 or dword ptr [ecx], ecx
// 00778995  0909                 or dword ptr [ecx], ecx
// 00778997  0909                 or dword ptr [ecx], ecx
// 00778999  0909                 or dword ptr [ecx], ecx
// 0077899b  0909                 or dword ptr [ecx], ecx
// 0077899d  0909                 or dword ptr [ecx], ecx
// 0077899f  0909                 or dword ptr [ecx], ecx
// 007789a1  0909                 or dword ptr [ecx], ecx
// 007789a3  0909                 or dword ptr [ecx], ecx
// 007789a5  0909                 or dword ptr [ecx], ecx
// 007789a7  0909                 or dword ptr [ecx], ecx
// 007789a9  0909                 or dword ptr [ecx], ecx
// 007789ab  0909                 or dword ptr [ecx], ecx
// 007789ad  0909                 or dword ptr [ecx], ecx
// 007789af  0909                 or dword ptr [ecx], ecx
// 007789b1  0909                 or dword ptr [ecx], ecx
// 007789b3  0909                 or dword ptr [ecx], ecx
// 007789b5  0907                 or dword ptr [edi], eax
// copied from an identical function in another client (function ?ExchangePropStringHelper@CXTPPropExchange@@IAEHAAV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@GPAXPBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPPropExchange.cpp