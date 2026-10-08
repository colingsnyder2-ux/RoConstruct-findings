// roc 2009-06 007fa430  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 956 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fa430
//
// 007fa430  83ec20               sub esp, 0x20
// 007fa433  53                   push ebx
// 007fa434  55                   push ebp
// 007fa435  56                   push esi
// 007fa436  57                   push edi
// 007fa437  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007fa43b  8bf1                 mov esi, ecx
// 007fa43d  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007fa441  8b16                 mov edx, dword ptr [esi]
// 007fa443  8b5208               mov edx, dword ptr [edx + 8]
// 007fa446  57                   push edi
// 007fa447  83ec10               sub esp, 0x10
// 007fa44a  8bc4                 mov eax, esp
// 007fa44c  8908                 mov dword ptr [eax], ecx
// 007fa44e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007fa452  894804               mov dword ptr [eax + 4], ecx
// 007fa455  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007fa459  894808               mov dword ptr [eax + 8], ecx
// 007fa45c  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007fa460  89480c               mov dword ptr [eax + 0xc], ecx
// 007fa463  8b442448             mov eax, dword ptr [esp + 0x48]
// 007fa467  50                   push eax
// 007fa468  8bce                 mov ecx, esi
// 007fa46a  ffd2                 call edx
// 007fa46c  8b07                 mov eax, dword ptr [edi]
// 007fa46e  8b5048               mov edx, dword ptr [eax + 0x48]
// 007fa471  8bcf                 mov ecx, edi
// 007fa473  33db                 xor ebx, ebx
// 007fa475  33ed                 xor ebp, ebp
// 007fa477  ffd2                 call edx
// 007fa479  50                   push eax
// 007fa47a  83ec10               sub esp, 0x10
// 007fa47d  8bc4                 mov eax, esp
// 007fa47f  8918                 mov dword ptr [eax], ebx
// 007fa481  896804               mov dword ptr [eax + 4], ebp
// 007fa484  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 007fa488  33c9                 xor ecx, ecx
// 007fa48a  894808               mov dword ptr [eax + 8], ecx
// 007fa48d  b901000000           mov ecx, 1
// 007fa492  55                   push ebp
// 007fa493  89480c               mov dword ptr [eax + 0xc], ecx
// 007fa496  e875eeffff           call 0x7f9310
// 007fa49b  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fa49e  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fa4a4  8b5d00               mov ebx, dword ptr [ebp]
// 007fa4a7  8b11                 mov edx, dword ptr [ecx]
// 007fa4a9  83c418               add esp, 0x18
// 007fa4ac  57                   push edi
// 007fa4ad  83ec10               sub esp, 0x10
// 007fa4b0  8bc4                 mov eax, esp
// 007fa4b2  8918                 mov dword ptr [eax], ebx
// 007fa4b4  8b5d04               mov ebx, dword ptr [ebp + 4]
// 007fa4b7  895804               mov dword ptr [eax + 4], ebx
// 007fa4ba  8b5d08               mov ebx, dword ptr [ebp + 8]
// 007fa4bd  895808               mov dword ptr [eax + 8], ebx
// 007fa4c0  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 007fa4c3  89580c               mov dword ptr [eax + 0xc], ebx
// 007fa4c6  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 007fa4ca  8b420c               mov eax, dword ptr [edx + 0xc]
// 007fa4cd  53                   push ebx
// 007fa4ce  ffd0                 call eax
// 007fa4d0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007fa4d4  8b16                 mov edx, dword ptr [esi]
// 007fa4d6  8b520c               mov edx, dword ptr [edx + 0xc]
// 007fa4d9  57                   push edi
// 007fa4da  83ec10               sub esp, 0x10
// 007fa4dd  8bc4                 mov eax, esp
// 007fa4df  8908                 mov dword ptr [eax], ecx
// 007fa4e1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007fa4e5  894804               mov dword ptr [eax + 4], ecx
// 007fa4e8  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007fa4ec  894808               mov dword ptr [eax + 8], ecx
// 007fa4ef  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007fa4f3  89480c               mov dword ptr [eax + 0xc], ecx
// 007fa4f6  8d442424             lea eax, [esp + 0x24]
// 007fa4fa  50                   push eax
// 007fa4fb  8bce                 mov ecx, esi
// 007fa4fd  ffd2                 call edx
// 007fa4ff  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fa502  83783800             cmp dword ptr [eax + 0x38], 0
// 007fa506  0f8526010000         jne 0x7fa632
// 007fa50c  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007fa512  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fa516  8b11                 mov edx, dword ptr [ecx]
// 007fa518  57                   push edi
// 007fa519  83ec10               sub esp, 0x10
// 007fa51c  8bc4                 mov eax, esp
// 007fa51e  8928                 mov dword ptr [eax], ebp
// 007fa520  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007fa524  896804               mov dword ptr [eax + 4], ebp
// 007fa527  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007fa52b  896808               mov dword ptr [eax + 8], ebp
// 007fa52e  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 007fa532  89680c               mov dword ptr [eax + 0xc], ebp
// 007fa535  8b4210               mov eax, dword ptr [edx + 0x10]
// 007fa538  53                   push ebx
// 007fa539  ffd0                 call eax
// 007fa53b  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007fa53e  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007fa544  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 007fa54a  83f9ff               cmp ecx, -1
// 007fa54d  7506                 jne 0x7fa555
// 007fa54f  8b883c010000         mov ecx, dword ptr [eax + 0x13c]
// 007fa555  8b9028010000         mov edx, dword ptr [eax + 0x128]
// 007fa55b  83faff               cmp edx, -1
// 007fa55e  7506                 jne 0x7fa566
// 007fa560  8b9024010000         mov edx, dword ptr [eax + 0x124]
// 007fa566  8b442414             mov eax, dword ptr [esp + 0x14]
// 007fa56a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fa56e  89442424             mov dword ptr [esp + 0x24], eax
// 007fa572  8b442418             mov eax, dword ptr [esp + 0x18]
// 007fa576  89442428             mov dword ptr [esp + 0x28], eax
// 007fa57a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fa57e  896c2420             mov dword ptr [esp + 0x20], ebp
// 007fa582  8944242c             mov dword ptr [esp + 0x2c], eax
// 007fa586  83faff               cmp edx, -1
// 007fa589  741b                 je 0x7fa5a6
// 007fa58b  83f9ff               cmp ecx, -1
// 007fa58e  7416                 je 0x7fa5a6
// 007fa590  51                   push ecx
// 007fa591  52                   push edx
// 007fa592  8d4c2428             lea ecx, [esp + 0x28]
// 007fa596  51                   push ecx
// 007fa597  8bcb                 mov ecx, ebx
// 007fa599  e82cf2f1ff           call 0x7197ca
// 007fa59e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fa5a2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007fa5a6  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007fa5a9  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 007fa5af  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 007fa5b5  81c12c010000         add ecx, 0x12c
// 007fa5bb  83faff               cmp edx, -1
// 007fa5be  7505                 jne 0x7fa5c5
// 007fa5c0  8b4904               mov ecx, dword ptr [ecx + 4]
// 007fa5c3  eb02                 jmp 0x7fa5c7
// 007fa5c5  8bca                 mov ecx, edx
// 007fa5c7  83f9ff               cmp ecx, -1
// 007fa5ca  741e                 je 0x7fa5ea
// 007fa5cc  51                   push ecx
// 007fa5cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fa5d1  2bcd                 sub ecx, ebp
// 007fa5d3  6a01                 push 1
// 007fa5d5  83e902               sub ecx, 2
// 007fa5d8  51                   push ecx
// 007fa5d9  83c0fe               add eax, -2
// 007fa5dc  50                   push eax
// 007fa5dd  45                   inc ebp
// 007fa5de  55                   push ebp
// 007fa5df  8bcb                 mov ecx, ebx
// 007fa5e1  e84a190500           call 0x84bf30
// 007fa5e6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fa5ea  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007fa5ed  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 007fa5f3  8b9134010000         mov edx, dword ptr [ecx + 0x134]
// 007fa5f9  81c12c010000         add ecx, 0x12c
// 007fa5ff  83faff               cmp edx, -1
// 007fa602  7505                 jne 0x7fa609
// 007fa604  8b4904               mov ecx, dword ptr [ecx + 4]
// 007fa607  eb02                 jmp 0x7fa60b
// 007fa609  8bca                 mov ecx, edx
// 007fa60b  83f9ff               cmp ecx, -1
// 007fa60e  741e                 je 0x7fa62e
// 007fa610  51                   push ecx
// 007fa611  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fa615  2bc1                 sub eax, ecx
// 007fa617  83e802               sub eax, 2
// 007fa61a  50                   push eax
// 007fa61b  8b442420             mov eax, dword ptr [esp + 0x20]
// 007fa61f  6a01                 push 1
// 007fa621  41                   inc ecx
// 007fa622  51                   push ecx
// 007fa623  83c0fe               add eax, -2
// 007fa626  50                   push eax
// 007fa627  8bcb                 mov ecx, ebx
// 007fa629  e802190500           call 0x84bf30
// 007fa62e  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 007fa632  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007fa635  83793801             cmp dword ptr [ecx + 0x38], 1
// 007fa639  0f8590010000         jne 0x7fa7cf
// 007fa63f  8b17                 mov edx, dword ptr [edi]
// 007fa641  8b4248               mov eax, dword ptr [edx + 0x48]
// 007fa644  8bcf                 mov ecx, edi
// 007fa646  ffd0                 call eax
// 007fa648  83f803               cmp eax, 3
// 007fa64b  0f877e010000         ja 0x7fa7cf
// 007fa651  ff2485dca77f00       jmp dword ptr [eax*4 + 0x7fa7dc]
// 007fa658  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 007fa65b  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 007fa661  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 007fa667  0520010000           add eax, 0x120
// 007fa66c  83f9ff               cmp ecx, -1
// 007fa66f  7505                 jne 0x7fa676
// 007fa671  8b4004               mov eax, dword ptr [eax + 4]
// 007fa674  eb02                 jmp 0x7fa678
// 007fa676  8bc1                 mov eax, ecx
// 007fa678  8b542418             mov edx, dword ptr [esp + 0x18]
// 007fa67c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fa680  50                   push eax
// 007fa681  8b442414             mov eax, dword ptr [esp + 0x14]
// 007fa685  2bd0                 sub edx, eax
// 007fa687  52                   push edx
// 007fa688  51                   push ecx
// 007fa689  50                   push eax
// 007fa68a  53                   push ebx
// 007fa68b  e840ecffff           call 0x7f92d0
// 007fa690  83c414               add esp, 0x14
// 007fa693  8bc5                 mov eax, ebp
// 007fa695  5f                   pop edi
// 007fa696  5e                   pop esi
// 007fa697  5d                   pop ebp
// 007fa698  5b                   pop ebx
// 007fa699  83c420               add esp, 0x20
// 007fa69c  c21c00               ret 0x1c
// 007fa69f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 007fa6a2  8b82e4000000         mov eax, dword ptr [edx + 0xe4]
// 007fa6a8  8b8828010000         mov ecx, dword ptr [eax + 0x128]
// 007fa6ae  0520010000           add eax, 0x120
// 007fa6b3  83f9ff               cmp ecx, -1
// 007fa6b6  750c                 jne 0x7fa6c4
// 007fa6b8  8b4004               mov eax, dword ptr [eax + 4]
// 007fa6bb  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fa6bf  e9f4000000           jmp 0x7fa7b8
// 007fa6c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fa6c8  8bc1                 mov eax, ecx
// 007fa6ca  e9e9000000           jmp 0x7fa7b8
// 007fa6cf  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fa6d2  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007fa6d8  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 007fa6de  0538010000           add eax, 0x138
// 007fa6e3  83f9ff               cmp ecx, -1
// 007fa6e6  7505                 jne 0x7fa6ed
// 007fa6e8  8b4004               mov eax, dword ptr [eax + 4]
// 007fa6eb  eb02                 jmp 0x7fa6ef
// 007fa6ed  8bc1                 mov eax, ecx
// 007fa6ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fa6f3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fa6f7  50                   push eax
// 007fa6f8  8b442414             mov eax, dword ptr [esp + 0x14]
// 007fa6fc  2bc8                 sub ecx, eax
// 007fa6fe  51                   push ecx
// 007fa6ff  4a                   dec edx
// 007fa700  52                   push edx
// 007fa701  50                   push eax
// 007fa702  53                   push ebx
// 007fa703  e8c8ebffff           call 0x7f92d0
// 007fa708  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fa70b  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007fa711  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 007fa717  052c010000           add eax, 0x12c
// 007fa71c  83c414               add esp, 0x14
// 007fa71f  83f9ff               cmp ecx, -1
// 007fa722  7505                 jne 0x7fa729
// 007fa724  8b4004               mov eax, dword ptr [eax + 4]
// 007fa727  eb02                 jmp 0x7fa72b
// 007fa729  8bc1                 mov eax, ecx
// 007fa72b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007fa72f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fa733  50                   push eax
// 007fa734  8b442414             mov eax, dword ptr [esp + 0x14]
// 007fa738  2bc8                 sub ecx, eax
// 007fa73a  51                   push ecx
// 007fa73b  83c2fe               add edx, -2
// 007fa73e  52                   push edx
// 007fa73f  50                   push eax
// 007fa740  53                   push ebx
// 007fa741  e88aebffff           call 0x7f92d0
// 007fa746  83c414               add esp, 0x14
// 007fa749  8bc5                 mov eax, ebp
// 007fa74b  5f                   pop edi
// 007fa74c  5e                   pop esi
// 007fa74d  5d                   pop ebp
// 007fa74e  5b                   pop ebx
// 007fa74f  83c420               add esp, 0x20
// 007fa752  c21c00               ret 0x1c
// 007fa755  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fa758  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007fa75e  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 007fa764  0538010000           add eax, 0x138
// 007fa769  83f9ff               cmp ecx, -1
// 007fa76c  7505                 jne 0x7fa773
// 007fa76e  8b4004               mov eax, dword ptr [eax + 4]
// 007fa771  eb02                 jmp 0x7fa775
// 007fa773  8bc1                 mov eax, ecx
// 007fa775  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fa779  8b542418             mov edx, dword ptr [esp + 0x18]
// 007fa77d  50                   push eax
// 007fa77e  8b442418             mov eax, dword ptr [esp + 0x18]
// 007fa782  2bc8                 sub ecx, eax
// 007fa784  51                   push ecx
// 007fa785  50                   push eax
// 007fa786  4a                   dec edx
// 007fa787  52                   push edx
// 007fa788  53                   push ebx
// 007fa789  e812ebffff           call 0x7f92a0
// 007fa78e  8b461c               mov eax, dword ptr [esi + 0x1c]
// 007fa791  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 007fa797  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 007fa79d  052c010000           add eax, 0x12c
// 007fa7a2  83c414               add esp, 0x14
// 007fa7a5  83f9ff               cmp ecx, -1
// 007fa7a8  7505                 jne 0x7fa7af
// 007fa7aa  8b4004               mov eax, dword ptr [eax + 4]
// 007fa7ad  eb02                 jmp 0x7fa7b1
// 007fa7af  8bc1                 mov eax, ecx
// 007fa7b1  8b542418             mov edx, dword ptr [esp + 0x18]
// 007fa7b5  83c2fe               add edx, -2
// 007fa7b8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fa7bc  50                   push eax
// 007fa7bd  8b442418             mov eax, dword ptr [esp + 0x18]
// 007fa7c1  2bc8                 sub ecx, eax
// 007fa7c3  51                   push ecx
// 007fa7c4  50                   push eax
// 007fa7c5  52                   push edx
// 007fa7c6  53                   push ebx
// 007fa7c7  e8d4eaffff           call 0x7f92a0
// 007fa7cc  83c414               add esp, 0x14
// 007fa7cf  5f                   pop edi
// 007fa7d0  5e                   pop esi
// 007fa7d1  8bc5                 mov eax, ebp
// 007fa7d3  5d                   pop ebp
// 007fa7d4  5b                   pop ebx
// 007fa7d5  83c420               add esp, 0x20
// 007fa7d8  c21c00               ret 0x1c
// 007fa7db  90                   nop 
// 007fa7dc  58                   pop eax
// 007fa7dd  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 007fa7de  7f00                 jg 0x7fa7e0
// 007fa7e0  9f                   lahf 
// 007fa7e1  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 007fa7e2  7f00                 jg 0x7fa7e4
// 007fa7e4  cf                   iretd 
// 007fa7e5  a6                   cmpsb byte ptr [esi], byte ptr es:[edi]
// 007fa7e6  7f00                 jg 0x7fa7e8
// 007fa7e8  55                   push ebp
// 007fa7e9  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 007fa7ea  7f00                 jg 0x7fa7ec
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?FillTabControl@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAE?AVCRect@@PAVCXTPTabManager@@PAVCDC@@V3@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
