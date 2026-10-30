// roc 2009-12 00894240  unit: CXTPMenuBar  size: 685 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894240
//
// 00894240  6aff                 push -1
// 00894242  685e169600           push 0x96165e
// 00894247  64a100000000         mov eax, dword ptr fs:[0]
// 0089424d  50                   push eax
// 0089424e  51                   push ecx
// 0089424f  53                   push ebx
// 00894250  56                   push esi
// 00894251  57                   push edi
// 00894252  a10052b600           mov eax, dword ptr [0xb65200]
// 00894257  33c4                 xor eax, esp
// 00894259  50                   push eax
// 0089425a  8d442414             lea eax, [esp + 0x14]
// 0089425e  64a300000000         mov dword ptr fs:[0], eax
// 00894264  8bf1                 mov esi, ecx
// 00894266  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0089426a  85ff                 test edi, edi
// 0089426c  0f8466020000         je 0x8944d8
// 00894272  8b86b8010000         mov eax, dword ptr [esi + 0x1b8]
// 00894278  85c0                 test eax, eax
// 0089427a  0f8458020000         je 0x8944d8
// 00894280  3bc7                 cmp eax, edi
// 00894282  0f8450020000         je 0x8944d8
// 00894288  e84302f7ff           call 0x8044d0
// 0089428d  83786000             cmp dword ptr [eax + 0x60], 0
// 00894291  7530                 jne 0x8942c3
// 00894293  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 00894299  57                   push edi
// 0089429a  e8f1fdffff           call 0x894090
// 0089429f  85c0                 test eax, eax
// 008942a1  7520                 jne 0x8942c3
// 008942a3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008942a7  85c0                 test eax, eax
// 008942a9  0f8417020000         je 0x8944c6
// 008942af  8b16                 mov edx, dword ptr [esi]
// 008942b1  6a01                 push 1
// 008942b3  50                   push eax
// 008942b4  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008942ba  8bce                 mov ecx, esi
// 008942bc  ffd0                 call eax
// 008942be  e903020000           jmp 0x8944c6
// 008942c3  837c242800           cmp dword ptr [esp + 0x28], 0
// 008942c8  7514                 jne 0x8942de
// 008942ca  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008942d0  57                   push edi
// 008942d1  e8bafdffff           call 0x894090
// 008942d6  85c0                 test eax, eax
// 008942d8  0f84fa010000         je 0x8944d8
// 008942de  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 008942e4  51                   push ecx
// 008942e5  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008942eb  e8a0fdffff           call 0x894090
// 008942f0  8b1d0cb29800         mov ebx, dword ptr [0x98b20c]
// 008942f6  85c0                 test eax, eax
// 008942f8  7574                 jne 0x89436e
// 008942fa  6a38                 push 0x38
// 008942fc  e85ff5f5ff           call 0x7f3860
// 00894301  8bf8                 mov edi, eax
// 00894303  83c404               add esp, 4
// 00894306  897c2410             mov dword ptr [esp + 0x10], edi
// 0089430a  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00894312  85ff                 test edi, edi
// 00894314  741a                 je 0x894330
// 00894316  8b96b8010000         mov edx, dword ptr [esi + 0x1b8]
// 0089431c  52                   push edx
// 0089431d  8bce                 mov ecx, esi
// 0089431f  e8ac01f7ff           call 0x8044d0
// 00894324  50                   push eax
// 00894325  8bcf                 mov ecx, edi
// 00894327  e8c4e9ffff           call 0x892cf0
// 0089432c  8bf8                 mov edi, eax
// 0089432e  eb02                 jmp 0x894332
// 00894330  33ff                 xor edi, edi
// 00894332  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00894335  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0089433d  e89afaf5ff           call 0x7f3ddc
// 00894342  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00894348  894720               mov dword ptr [edi + 0x20], eax
// 0089434b  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 00894351  83c004               add eax, 4
// 00894354  50                   push eax
// 00894355  ffd3                 call ebx
// 00894357  8b8eb8010000         mov ecx, dword ptr [esi + 0x1b8]
// 0089435d  57                   push edi
// 0089435e  51                   push ecx
// 0089435f  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 00894365  e8b6feffff           call 0x894220
// 0089436a  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0089436e  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00894374  6a00                 push 0
// 00894376  e8450ffbff           call 0x8452c0
// 0089437b  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00894381  e856faf5ff           call 0x7f3ddc
// 00894386  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0089438c  57                   push edi
// 0089438d  c786fc00000000000000 mov dword ptr [esi + 0xfc], 0
// 00894397  e8f4fcffff           call 0x894090
// 0089439c  85c0                 test eax, eax
// 0089439e  0f8595000000         jne 0x894439
// 008943a4  6a38                 push 0x38
// 008943a6  e8b5f4f5ff           call 0x7f3860
// 008943ab  8bf8                 mov edi, eax
// 008943ad  83c404               add esp, 4
// 008943b0  897c2410             mov dword ptr [esp + 0x10], edi
// 008943b4  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 008943bc  85ff                 test edi, edi
// 008943be  7418                 je 0x8943d8
// 008943c0  8b542424             mov edx, dword ptr [esp + 0x24]
// 008943c4  52                   push edx
// 008943c5  8bce                 mov ecx, esi
// 008943c7  e80401f7ff           call 0x8044d0
// 008943cc  50                   push eax
// 008943cd  8bcf                 mov ecx, edi
// 008943cf  e81ce9ffff           call 0x892cf0
// 008943d4  8bf8                 mov edi, eax
// 008943d6  eb02                 jmp 0x8943da
// 008943d8  33ff                 xor edi, edi
// 008943da  8b4720               mov eax, dword ptr [edi + 0x20]
// 008943dd  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 008943e3  83c004               add eax, 4
// 008943e6  50                   push eax
// 008943e7  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008943ef  ffd3                 call ebx
// 008943f1  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008943f7  56                   push esi
// 008943f8  e8c30efbff           call 0x8452c0
// 008943fd  8b442428             mov eax, dword ptr [esp + 0x28]
// 00894401  85c0                 test eax, eax
// 00894403  740f                 je 0x894414
// 00894405  8b16                 mov edx, dword ptr [esi]
// 00894407  6a01                 push 1
// 00894409  50                   push eax
// 0089440a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 00894410  8bce                 mov ecx, esi
// 00894412  ffd0                 call eax
// 00894414  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0089441a  e8213afbff           call 0x847e40
// 0089441f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00894423  57                   push edi
// 00894424  51                   push ecx
// 00894425  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 0089442b  e8f0fdffff           call 0x894220
// 00894430  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00894434  e98d000000           jmp 0x8944c6
// 00894439  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0089443c  56                   push esi
// 0089443d  898efc000000         mov dword ptr [esi + 0xfc], ecx
// 00894443  e8780efbff           call 0x8452c0
// 00894448  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0089444e  83c004               add eax, 4
// 00894451  50                   push eax
// 00894452  ffd3                 call ebx
// 00894454  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0089445a  837a3c00             cmp dword ptr [edx + 0x3c], 0
// 0089445e  7552                 jne 0x8944b2
// 00894460  837c242800           cmp dword ptr [esp + 0x28], 0
// 00894465  744b                 je 0x8944b2
// 00894467  6a44                 push 0x44
// 00894469  e8f2f3f5ff           call 0x7f3860
// 0089446e  83c404               add esp, 4
// 00894471  89442410             mov dword ptr [esp + 0x10], eax
// 00894475  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 0089447d  85c0                 test eax, eax
// 0089447f  740b                 je 0x89448c
// 00894481  8bc8                 mov ecx, eax
// 00894483  e8d827fbff           call 0x846c60
// 00894488  8bf8                 mov edi, eax
// 0089448a  eb02                 jmp 0x89448e
// 0089448c  33ff                 xor edi, edi
// 0089448e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00894492  50                   push eax
// 00894493  8bcf                 mov ecx, edi
// 00894495  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0089449d  e87e0bf7ff           call 0x805020
// 008944a2  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008944a8  57                   push edi
// 008944a9  e8820dfbff           call 0x845230
// 008944ae  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008944b2  3bbeb4010000         cmp edi, dword ptr [esi + 0x1b4]
// 008944b8  750c                 jne 0x8944c6
// 008944ba  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008944c0  57                   push edi
// 008944c1  e82afdffff           call 0x8941f0
// 008944c6  8b16                 mov edx, dword ptr [esi]
// 008944c8  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 008944ce  8bce                 mov ecx, esi
// 008944d0  ffd0                 call eax
// 008944d2  89beb8010000         mov dword ptr [esi + 0x1b8], edi
// 008944d8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008944dc  64890d00000000       mov dword ptr fs:[0], ecx
// 008944e3  59                   pop ecx
// 008944e4  5f                   pop edi
// 008944e5  5e                   pop esi
// 008944e6  5b                   pop ebx
// 008944e7  83c410               add esp, 0x10
// 008944ea  c20800               ret 8
// copied from an identical function in another client (function ?SwitchMDIMenu@CXTPMenuBar@@QAEXIPAVCMenu@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp