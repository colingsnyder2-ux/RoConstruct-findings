// roc 2012-06 009cc0f0  unit: CXTPPopupBar  size: 1063 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cc0f0
//
// 009cc0f0  6aff                 push -1
// 009cc0f2  6886fcad00           push 0xadfc86
// 009cc0f7  64a100000000         mov eax, dword ptr fs:[0]
// 009cc0fd  50                   push eax
// 009cc0fe  81ec9c000000         sub esp, 0x9c
// 009cc104  53                   push ebx
// 009cc105  55                   push ebp
// 009cc106  56                   push esi
// 009cc107  57                   push edi
// 009cc108  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009cc10d  33c4                 xor eax, esp
// 009cc10f  50                   push eax
// 009cc110  8d8424b0000000       lea eax, [esp + 0xb0]
// 009cc117  64a300000000         mov dword ptr fs:[0], eax
// 009cc11d  8bf1                 mov esi, ecx
// 009cc11f  33db                 xor ebx, ebx
// 009cc121  399ea0010000         cmp dword ptr [esi + 0x1a0], ebx
// 009cc127  0f85d0030000         jne 0x9cc4fd
// 009cc12d  395e20               cmp dword ptr [esi + 0x20], ebx
// 009cc130  0f84c7030000         je 0x9cc4fd
// 009cc136  399ee0000000         cmp dword ptr [esi + 0xe0], ebx
// 009cc13c  0f84bb030000         je 0x9cc4fd
// 009cc142  8b06                 mov eax, dword ptr [esi]
// 009cc144  8b90e4010000         mov edx, dword ptr [eax + 0x1e4]
// 009cc14a  ffd2                 call edx
// 009cc14c  8b06                 mov eax, dword ptr [esi]
// 009cc14e  8b9008020000         mov edx, dword ptr [eax + 0x208]
// 009cc154  8bce                 mov ecx, esi
// 009cc156  ffd2                 call edx
// 009cc158  8b3e                 mov edi, dword ptr [esi]
// 009cc15a  8b97d0010000         mov edx, dword ptr [edi + 0x1d0]
// 009cc160  53                   push ebx
// 009cc161  53                   push ebx
// 009cc162  8d44245c             lea eax, [esp + 0x5c]
// 009cc166  50                   push eax
// 009cc167  8bce                 mov ecx, esi
// 009cc169  ffd2                 call edx
// 009cc16b  8b4804               mov ecx, dword ptr [eax + 4]
// 009cc16e  8b10                 mov edx, dword ptr [eax]
// 009cc170  51                   push ecx
// 009cc171  52                   push edx
// 009cc172  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 009cc178  8d44241c             lea eax, [esp + 0x1c]
// 009cc17c  50                   push eax
// 009cc17d  8bce                 mov ecx, esi
// 009cc17f  ffd2                 call edx
// 009cc181  56                   push esi
// 009cc182  8d4c2474             lea ecx, [esp + 0x74]
// 009cc186  e8b58f0000           call 0x9d5140
// 009cc18b  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 009cc191  7528                 jne 0x9cc1bb
// 009cc193  8d442470             lea eax, [esp + 0x70]
// 009cc197  50                   push eax
// 009cc198  8d4c2418             lea ecx, [esp + 0x18]
// 009cc19c  51                   push ecx
// 009cc19d  ff15e03cb200         call dword ptr [0xb23ce0]
// 009cc1a3  85c0                 test eax, eax
// 009cc1a5  7414                 je 0x9cc1bb
// 009cc1a7  8b16                 mov edx, dword ptr [esi]
// 009cc1a9  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 009cc1af  6a01                 push 1
// 009cc1b1  53                   push ebx
// 009cc1b2  8bce                 mov ecx, esi
// 009cc1b4  ffd0                 call eax
// 009cc1b6  e942030000           jmp 0x9cc4fd
// 009cc1bb  8bce                 mov ecx, esi
// 009cc1bd  e82e6bfcff           call 0x992cf0
// 009cc1c2  8bce                 mov ecx, esi
// 009cc1c4  8be8                 mov ebp, eax
// 009cc1c6  e83563fdff           call 0x9a2500
// 009cc1cb  8bf8                 mov edi, eax
// 009cc1cd  897c2454             mov dword ptr [esp + 0x54], edi
// 009cc1d1  3bfb                 cmp edi, ebx
// 009cc1d3  740b                 je 0x9cc1e0
// 009cc1d5  3beb                 cmp ebp, ebx
// 009cc1d7  7407                 je 0x9cc1e0
// 009cc1d9  8bcd                 mov ecx, ebp
// 009cc1db  e8407afdff           call 0x9a3c20
// 009cc1e0  56                   push esi
// 009cc1e1  e83add0700           call 0xa49f20
// 009cc1e6  8bc8                 mov ecx, eax
// 009cc1e8  e8e3dc0700           call 0xa49ed0
// 009cc1ed  33ed                 xor ebp, ebp
// 009cc1ef  399eac010000         cmp dword ptr [esi + 0x1ac], ebx
// 009cc1f5  0f8462020000         je 0x9cc45d
// 009cc1fb  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 009cc1ff  33c9                 xor ecx, ecx
// 009cc201  3b542420             cmp edx, dword ptr [esp + 0x20]
// 009cc205  0f9cc1               setl cl
// 009cc208  894c242c             mov dword ptr [esp + 0x2c], ecx
// 009cc20c  8bce                 mov ecx, esi
// 009cc20e  e8bdfcffff           call 0x9cbed0
// 009cc213  50                   push eax
// 009cc214  e8c7f4ffff           call 0x9cb6e0
// 009cc219  83c404               add esp, 4
// 009cc21c  85c0                 test eax, eax
// 009cc21e  0f8427020000         je 0x9cc44b
// 009cc224  8b2df43bb200         mov ebp, dword ptr [0xb23bf4]
// 009cc22a  ffd5                 call ebp
// 009cc22c  50                   push eax
// 009cc22d  e83464fbff           call 0x982666
// 009cc232  8bc8                 mov ecx, eax
// 009cc234  e8d79cfdff           call 0x9a5f10
// 009cc239  8bf8                 mov edi, eax
// 009cc23b  895c2428             mov dword ptr [esp + 0x28], ebx
// 009cc23f  c7442424506cb400     mov dword ptr [esp + 0x24], 0xb46c50
// 009cc247  8b442420             mov eax, dword ptr [esp + 0x20]
// 009cc24b  2b442418             sub eax, dword ptr [esp + 0x18]
// 009cc24f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009cc253  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 009cc257  50                   push eax
// 009cc258  51                   push ecx
// 009cc259  57                   push edi
// 009cc25a  8d4c2430             lea ecx, [esp + 0x30]
// 009cc25e  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 009cc265  e85695acff           call 0x4957c0
// 009cc26a  8d542424             lea edx, [esp + 0x24]
// 009cc26e  52                   push edx
// 009cc26f  57                   push edi
// 009cc270  8d4c2464             lea ecx, [esp + 0x64]
// 009cc274  e8d7940000           call 0x9d5750
// 009cc279  8b442418             mov eax, dword ptr [esp + 0x18]
// 009cc27d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009cc281  8b542420             mov edx, dword ptr [esp + 0x20]
// 009cc285  682000cc00           push 0xcc0020
// 009cc28a  50                   push eax
// 009cc28b  51                   push ecx
// 009cc28c  57                   push edi
// 009cc28d  2bd0                 sub edx, eax
// 009cc28f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 009cc293  52                   push edx
// 009cc294  2bc1                 sub eax, ecx
// 009cc296  50                   push eax
// 009cc297  53                   push ebx
// 009cc298  53                   push ebx
// 009cc299  8d4c247c             lea ecx, [esp + 0x7c]
// 009cc29d  c68424d800000001     mov byte ptr [esp + 0xd8], 1
// 009cc2a5  e88695acff           call 0x495830
// 009cc2aa  57                   push edi
// 009cc2ab  ffd5                 call ebp
// 009cc2ad  50                   push eax
// 009cc2ae  e8b363fbff           call 0x982666
// 009cc2b3  8bc8                 mov ecx, eax
// 009cc2b5  e8468cfbff           call 0x984f00
// 009cc2ba  53                   push ebx
// 009cc2bb  8bce                 mov ecx, esi
// 009cc2bd  e8e267fbff           call 0x982aa4
// 009cc2c2  8bce                 mov ecx, esi
// 009cc2c4  e87796fcff           call 0x995940
// 009cc2c9  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009cc2cc  51                   push ecx
// 009cc2cd  ff15c43cb200         call dword ptr [0xb23cc4]
// 009cc2d3  8b442418             mov eax, dword ptr [esp + 0x18]
// 009cc2d7  8b542420             mov edx, dword ptr [esp + 0x20]
// 009cc2db  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 009cc2df  685c020000           push 0x25c
// 009cc2e4  2bd0                 sub edx, eax
// 009cc2e6  52                   push edx
// 009cc2e7  8b542424             mov edx, dword ptr [esp + 0x24]
// 009cc2eb  2bd1                 sub edx, ecx
// 009cc2ed  52                   push edx
// 009cc2ee  50                   push eax
// 009cc2ef  51                   push ecx
// 009cc2f0  53                   push ebx
// 009cc2f1  8bce                 mov ecx, esi
// 009cc2f3  e8dc61fbff           call 0x9824d4
// 009cc2f8  8bce                 mov ecx, esi
// 009cc2fa  e8b16afcff           call 0x992db0
// 009cc2ff  8b10                 mov edx, dword ptr [eax]
// 009cc301  8bc8                 mov ecx, eax
// 009cc303  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 009cc309  56                   push esi
// 009cc30a  ffd0                 call eax
// 009cc30c  bd01000000           mov ebp, 1
// 009cc311  56                   push esi
// 009cc312  8d4c2434             lea ecx, [esp + 0x34]
// 009cc316  e881d20c00           call 0xa9959c
// 009cc31b  56                   push esi
// 009cc31c  8d4c2448             lea ecx, [esp + 0x48]
// 009cc320  c68424bc00000002     mov byte ptr [esp + 0xbc], 2
// 009cc328  e8738e0000           call 0x9d51a0
// 009cc32d  8d4c2430             lea ecx, [esp + 0x30]
// 009cc331  51                   push ecx
// 009cc332  e8a99c0000           call 0x9d5fe0
// 009cc337  8d542434             lea edx, [esp + 0x34]
// 009cc33b  53                   push ebx
// 009cc33c  52                   push edx
// 009cc33d  8bf8                 mov edi, eax
// 009cc33f  e8cc9c0000           call 0x9d6010
// 009cc344  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009cc348  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 009cc34c  8b542428             mov edx, dword ptr [esp + 0x28]
// 009cc350  2b542420             sub edx, dword ptr [esp + 0x20]
// 009cc354  83c40c               add esp, 0xc
// 009cc357  682000cc00           push 0xcc0020
// 009cc35c  53                   push ebx
// 009cc35d  53                   push ebx
// 009cc35e  8d442468             lea eax, [esp + 0x68]
// 009cc362  50                   push eax
// 009cc363  51                   push ecx
// 009cc364  52                   push edx
// 009cc365  53                   push ebx
// 009cc366  53                   push ebx
// 009cc367  8d4c2450             lea ecx, [esp + 0x50]
// 009cc36b  e8c094acff           call 0x495830
// 009cc370  8d442430             lea eax, [esp + 0x30]
// 009cc374  57                   push edi
// 009cc375  50                   push eax
// 009cc376  e8959c0000           call 0x9d6010
// 009cc37b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009cc37f  83c408               add esp, 8
// 009cc382  8d4c2444             lea ecx, [esp + 0x44]
// 009cc386  51                   push ecx
// 009cc387  52                   push edx
// 009cc388  8d8c2488000000       lea ecx, [esp + 0x88]
// 009cc38f  e86c8e0000           call 0x9d5200
// 009cc394  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009cc398  8b16                 mov edx, dword ptr [esi]
// 009cc39a  8b92b0010000         mov edx, dword ptr [edx + 0x1b0]
// 009cc3a0  83ec10               sub esp, 0x10
// 009cc3a3  8bc4                 mov eax, esp
// 009cc3a5  8908                 mov dword ptr [eax], ecx
// 009cc3a7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009cc3ab  894804               mov dword ptr [eax + 4], ecx
// 009cc3ae  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 009cc3b2  894808               mov dword ptr [eax + 8], ecx
// 009cc3b5  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 009cc3b9  89480c               mov dword ptr [eax + 0xc], ecx
// 009cc3bc  8d842490000000       lea eax, [esp + 0x90]
// 009cc3c3  50                   push eax
// 009cc3c4  8bce                 mov ecx, esi
// 009cc3c6  c68424cc00000003     mov byte ptr [esp + 0xcc], 3
// 009cc3ce  ffd2                 call edx
// 009cc3d0  8bce                 mov ecx, esi
// 009cc3d2  e8d969fcff           call 0x992db0
// 009cc3d7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009cc3db  8b10                 mov edx, dword ptr [eax]
// 009cc3dd  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 009cc3e3  51                   push ecx
// 009cc3e4  8d8c2484000000       lea ecx, [esp + 0x84]
// 009cc3eb  51                   push ecx
// 009cc3ec  8d4c2438             lea ecx, [esp + 0x38]
// 009cc3f0  51                   push ecx
// 009cc3f1  56                   push esi
// 009cc3f2  8bc8                 mov ecx, eax
// 009cc3f4  ffd2                 call edx
// 009cc3f6  8d8c2480000000       lea ecx, [esp + 0x80]
// 009cc3fd  c68424b800000002     mov byte ptr [esp + 0xb8], 2
// 009cc405  e806900000           call 0x9d5410
// 009cc40a  8d4c2430             lea ecx, [esp + 0x30]
// 009cc40e  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 009cc416  e87bd10c00           call 0xa99596
// 009cc41b  8d4c245c             lea ecx, [esp + 0x5c]
// 009cc41f  889c24b8000000       mov byte ptr [esp + 0xb8], bl
// 009cc426  e835940000           call 0x9d5860
// 009cc42b  8d4c2424             lea ecx, [esp + 0x24]
// 009cc42f  c78424b8000000ffffffff mov dword ptr [esp + 0xb8], 0xffffffff
// 009cc43a  c7442424506cb400     mov dword ptr [esp + 0x24], 0xb46c50
// 009cc442  e8b9a7a4ff           call 0x416c00
// 009cc447  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 009cc44b  6a02                 push 2
// 009cc44d  e81ed60200           call 0x9f9a70
// 009cc452  8bc8                 mov ecx, eax
// 009cc454  e807d70200           call 0x9f9b60
// 009cc459  3beb                 cmp ebp, ebx
// 009cc45b  7539                 jne 0x9cc496
// 009cc45d  8b442418             mov eax, dword ptr [esp + 0x18]
// 009cc461  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009cc465  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009cc469  6854020000           push 0x254
// 009cc46e  2bc8                 sub ecx, eax
// 009cc470  51                   push ecx
// 009cc471  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 009cc475  2bd1                 sub edx, ecx
// 009cc477  52                   push edx
// 009cc478  50                   push eax
// 009cc479  51                   push ecx
// 009cc47a  53                   push ebx
// 009cc47b  8bce                 mov ecx, esi
// 009cc47d  e85260fbff           call 0x9824d4
// 009cc482  8bce                 mov ecx, esi
// 009cc484  e82769fcff           call 0x992db0
// 009cc489  8b10                 mov edx, dword ptr [eax]
// 009cc48b  8bc8                 mov ecx, eax
// 009cc48d  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 009cc493  56                   push esi
// 009cc494  ffd0                 call eax
// 009cc496  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 009cc49d  751c                 jne 0x9cc4bb
// 009cc49f  399efc010000         cmp dword ptr [esi + 0x1fc], ebx
// 009cc4a5  7414                 je 0x9cc4bb
// 009cc4a7  8d8e8c010000         lea ecx, [esi + 0x18c]
// 009cc4ad  51                   push ecx
// 009cc4ae  56                   push esi
// 009cc4af  e86cda0700           call 0xa49f20
// 009cc4b4  8bc8                 mov ecx, eax
// 009cc4b6  e865e40700           call 0xa4a920
// 009cc4bb  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 009cc4c1  3bcb                 cmp ecx, ebx
// 009cc4c3  740a                 je 0x9cc4cf
// 009cc4c5  8b11                 mov edx, dword ptr [ecx]
// 009cc4c7  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 009cc4cd  ffd0                 call eax
// 009cc4cf  8b16                 mov edx, dword ptr [esi]
// 009cc4d1  8b82ac010000         mov eax, dword ptr [edx + 0x1ac]
// 009cc4d7  6a01                 push 1
// 009cc4d9  53                   push ebx
// 009cc4da  8bce                 mov ecx, esi
// 009cc4dc  ffd0                 call eax
// 009cc4de  3bfb                 cmp edi, ebx
// 009cc4e0  7415                 je 0x9cc4f7
// 009cc4e2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009cc4e5  53                   push ebx
// 009cc4e6  68cacc0000           push 0xccca
// 009cc4eb  6813010000           push 0x113
// 009cc4f0  51                   push ecx
// 009cc4f1  ff15243cb200         call dword ptr [0xb23c24]
// 009cc4f7  899eac010000         mov dword ptr [esi + 0x1ac], ebx
// 009cc4fd  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 009cc504  64890d00000000       mov dword ptr fs:[0], ecx
// 009cc50b  59                   pop ecx
// 009cc50c  5f                   pop edi
// 009cc50d  5e                   pop esi
// 009cc50e  5d                   pop ebp
// 009cc50f  5b                   pop ebx
// 009cc510  81c4a8000000         add esp, 0xa8
// 009cc516  c3                   ret 
// copied from an identical function in another client (function ?OnRecalcLayout@CXTPPopupBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp