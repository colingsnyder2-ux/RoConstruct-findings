// roc 2012-06 0098d310  unit: CXTPPaintManager  size: 1041 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098d310
//
// 0098d310  6aff                 push -1
// 0098d312  6848c2ad00           push 0xadc248
// 0098d317  64a100000000         mov eax, dword ptr fs:[0]
// 0098d31d  50                   push eax
// 0098d31e  83ec5c               sub esp, 0x5c
// 0098d321  53                   push ebx
// 0098d322  55                   push ebp
// 0098d323  56                   push esi
// 0098d324  57                   push edi
// 0098d325  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098d32a  33c4                 xor eax, esp
// 0098d32c  50                   push eax
// 0098d32d  8d442470             lea eax, [esp + 0x70]
// 0098d331  64a300000000         mov dword ptr fs:[0], eax
// 0098d337  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0098d33b  8b815c010000         mov eax, dword ptr [ecx + 0x15c]
// 0098d341  8bb158010000         mov esi, dword ptr [ecx + 0x158]
// 0098d347  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0098d34e  83e902               sub ecx, 2
// 0098d351  8944241c             mov dword ptr [esp + 0x1c], eax
// 0098d355  0f841a030000         je 0x98d675
// 0098d35b  83e901               sub ecx, 1
// 0098d35e  0f849b020000         je 0x98d5ff
// 0098d364  83e901               sub ecx, 1
// 0098d367  0f859e030000         jne 0x98d70b
// 0098d36d  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 0098d374  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 0098d37b  2bbc2488000000       sub edi, dword ptr [esp + 0x88]
// 0098d382  2b9c248c000000       sub ebx, dword ptr [esp + 0x8c]
// 0098d389  8b2d4c21b200         mov ebp, dword ptr [0xb2214c]
// 0098d38f  33c0                 xor eax, eax
// 0098d391  50                   push eax
// 0098d392  89442458             mov dword ptr [esp + 0x58], eax
// 0098d396  b901000000           mov ecx, 1
// 0098d39b  50                   push eax
// 0098d39c  66894c245c           mov word ptr [esp + 0x5c], cx
// 0098d3a1  8d8c24a0000000       lea ecx, [esp + 0xa0]
// 0098d3a8  51                   push ecx
// 0098d3a9  ba20000000           mov edx, 0x20
// 0098d3ae  6689542462           mov word ptr [esp + 0x62], dx
// 0098d3b3  50                   push eax
// 0098d3b4  8d542458             lea edx, [esp + 0x58]
// 0098d3b8  52                   push edx
// 0098d3b9  8944245c             mov dword ptr [esp + 0x5c], eax
// 0098d3bd  89442460             mov dword ptr [esp + 0x60], eax
// 0098d3c1  89442464             mov dword ptr [esp + 0x64], eax
// 0098d3c5  8944246c             mov dword ptr [esp + 0x6c], eax
// 0098d3c9  50                   push eax
// 0098d3ca  89442474             mov dword ptr [esp + 0x74], eax
// 0098d3ce  89442478             mov dword ptr [esp + 0x78], eax
// 0098d3d2  8944247c             mov dword ptr [esp + 0x7c], eax
// 0098d3d6  89842480000000       mov dword ptr [esp + 0x80], eax
// 0098d3dd  89842484000000       mov dword ptr [esp + 0x84], eax
// 0098d3e4  c744246028000000     mov dword ptr [esp + 0x60], 0x28
// 0098d3ec  897c2464             mov dword ptr [esp + 0x64], edi
// 0098d3f0  895c2468             mov dword ptr [esp + 0x68], ebx
// 0098d3f4  89442470             mov dword ptr [esp + 0x70], eax
// 0098d3f8  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 0098d3ff  ffd5                 call ebp
// 0098d401  6a00                 push 0
// 0098d403  6a00                 push 0
// 0098d405  89442428             mov dword ptr [esp + 0x28], eax
// 0098d409  8d44241c             lea eax, [esp + 0x1c]
// 0098d40d  50                   push eax
// 0098d40e  6a00                 push 0
// 0098d410  8d4c2458             lea ecx, [esp + 0x58]
// 0098d414  51                   push ecx
// 0098d415  6a00                 push 0
// 0098d417  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0098d41f  ffd5                 call ebp
// 0098d421  6a00                 push 0
// 0098d423  6a00                 push 0
// 0098d425  8d542420             lea edx, [esp + 0x20]
// 0098d429  52                   push edx
// 0098d42a  89442430             mov dword ptr [esp + 0x30], eax
// 0098d42e  6a00                 push 0
// 0098d430  8d442458             lea eax, [esp + 0x58]
// 0098d434  50                   push eax
// 0098d435  6a00                 push 0
// 0098d437  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0098d43f  ffd5                 call ebp
// 0098d441  8d4c2438             lea ecx, [esp + 0x38]
// 0098d445  89442428             mov dword ptr [esp + 0x28], eax
// 0098d449  e8425bffff           call 0x982f90
// 0098d44e  6a00                 push 0
// 0098d450  c744247c00000000     mov dword ptr [esp + 0x7c], 0
// 0098d458  ff155821b200         call dword ptr [0xb22158]
// 0098d45e  50                   push eax
// 0098d45f  8d4c243c             lea ecx, [esp + 0x3c]
// 0098d463  e8e65affff           call 0x982f4e
// 0098d468  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0098d46c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0098d470  8b2d6021b200         mov ebp, dword ptr [0xb22160]
// 0098d476  51                   push ecx
// 0098d477  52                   push edx
// 0098d478  ffd5                 call ebp
// 0098d47a  89442434             mov dword ptr [esp + 0x34], eax
// 0098d47e  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0098d485  85c0                 test eax, eax
// 0098d487  7403                 je 0x98d48c
// 0098d489  8b4004               mov eax, dword ptr [eax + 4]
// 0098d48c  682000cc00           push 0xcc0020
// 0098d491  6a00                 push 0
// 0098d493  6a00                 push 0
// 0098d495  50                   push eax
// 0098d496  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0098d49a  53                   push ebx
// 0098d49b  57                   push edi
// 0098d49c  6a00                 push 0
// 0098d49e  6a00                 push 0
// 0098d4a0  50                   push eax
// 0098d4a1  ff156421b200         call dword ptr [0xb22164]
// 0098d4a7  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098d4ab  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0098d4af  51                   push ecx
// 0098d4b0  52                   push edx
// 0098d4b1  ffd5                 call ebp
// 0098d4b3  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 0098d4ba  85c0                 test eax, eax
// 0098d4bc  7403                 je 0x98d4c1
// 0098d4be  8b4004               mov eax, dword ptr [eax + 4]
// 0098d4c1  682000cc00           push 0xcc0020
// 0098d4c6  6a00                 push 0
// 0098d4c8  6a00                 push 0
// 0098d4ca  50                   push eax
// 0098d4cb  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0098d4cf  53                   push ebx
// 0098d4d0  57                   push edi
// 0098d4d1  6a00                 push 0
// 0098d4d3  6a00                 push 0
// 0098d4d5  50                   push eax
// 0098d4d6  ff156421b200         call dword ptr [0xb22164]
// 0098d4dc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0098d4e0  99                   cdq 
// 0098d4e1  f7fe                 idiv esi
// 0098d4e3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098d4e7  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0098d4eb  51                   push ecx
// 0098d4ec  52                   push edx
// 0098d4ed  89442438             mov dword ptr [esp + 0x38], eax
// 0098d4f1  ffd5                 call ebp
// 0098d4f3  83fe01               cmp esi, 1
// 0098d4f6  0f8ec6000000         jle 0x98d5c2
// 0098d4fc  8d46ff               lea eax, [esi - 1]
// 0098d4ff  c7842484000000ff000000 mov dword ptr [esp + 0x84], 0xff
// 0098d50a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0098d50e  8bff                 mov edi, edi
// 0098d510  ff157422b200         call dword ptr [0xb22274]
// 0098d516  8be8                 mov ebp, eax
// 0098d518  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0098d51f  99                   cdq 
// 0098d520  f7fe                 idiv esi
// 0098d522  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 0098d529  8b542414             mov edx, dword ptr [esp + 0x14]
// 0098d52d  50                   push eax
// 0098d52e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0098d532  51                   push ecx
// 0098d533  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098d537  53                   push ebx
// 0098d538  57                   push edi
// 0098d539  52                   push edx
// 0098d53a  50                   push eax
// 0098d53b  e8b0acffff           call 0x9881f0
// 0098d540  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0098d547  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 0098d54e  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0098d552  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0098d559  2b8c2488000000       sub ecx, dword ptr [esp + 0x88]
// 0098d560  682000cc00           push 0xcc0020
// 0098d565  6a00                 push 0
// 0098d567  6a00                 push 0
// 0098d569  52                   push edx
// 0098d56a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0098d571  50                   push eax
// 0098d572  8b8424a0000000       mov eax, dword ptr [esp + 0xa0]
// 0098d579  51                   push ecx
// 0098d57a  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0098d581  50                   push eax
// 0098d582  8b4204               mov eax, dword ptr [edx + 4]
// 0098d585  51                   push ecx
// 0098d586  50                   push eax
// 0098d587  ff156421b200         call dword ptr [0xb22164]
// 0098d58d  ff157422b200         call dword ptr [0xb22274]
// 0098d593  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098d597  2bc5                 sub eax, ebp
// 0098d599  3bc1                 cmp eax, ecx
// 0098d59b  7309                 jae 0x98d5a6
// 0098d59d  2bc8                 sub ecx, eax
// 0098d59f  51                   push ecx
// 0098d5a0  ff157c22b200         call dword ptr [0xb2227c]
// 0098d5a6  81842484000000ff000000 add dword ptr [esp + 0x84], 0xff
// 0098d5b1  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0098d5b6  0f8554ffffff         jne 0x98d510
// 0098d5bc  8b2d6021b200         mov ebp, dword ptr [0xb22160]
// 0098d5c2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098d5c6  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0098d5ca  51                   push ecx
// 0098d5cb  52                   push edx
// 0098d5cc  ffd5                 call ebp
// 0098d5ce  8b442420             mov eax, dword ptr [esp + 0x20]
// 0098d5d2  8b357021b200         mov esi, dword ptr [0xb22170]
// 0098d5d8  50                   push eax
// 0098d5d9  ffd6                 call esi
// 0098d5db  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0098d5df  51                   push ecx
// 0098d5e0  ffd6                 call esi
// 0098d5e2  8b542428             mov edx, dword ptr [esp + 0x28]
// 0098d5e6  52                   push edx
// 0098d5e7  ffd6                 call esi
// 0098d5e9  8d4c2438             lea ecx, [esp + 0x38]
// 0098d5ed  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 0098d5f5  e88459ffff           call 0x982f7e
// 0098d5fa  e90c010000           jmp 0x98d70b
// 0098d5ff  33ff                 xor edi, edi
// 0098d601  85f6                 test esi, esi
// 0098d603  0f8e02010000         jle 0x98d70b
// 0098d609  99                   cdq 
// 0098d60a  f7fe                 idiv esi
// 0098d60c  8be8                 mov ebp, eax
// 0098d60e  8bff                 mov edi, edi
// 0098d610  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0098d617  2b8c248c000000       sub ecx, dword ptr [esp + 0x8c]
// 0098d61e  47                   inc edi
// 0098d61f  8bc7                 mov eax, edi
// 0098d621  0fafc1               imul eax, ecx
// 0098d624  99                   cdq 
// 0098d625  f7fe                 idiv esi
// 0098d627  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 0098d62e  8b9c2484000000       mov ebx, dword ptr [esp + 0x84]
// 0098d635  2b942488000000       sub edx, dword ptr [esp + 0x88]
// 0098d63c  2bc8                 sub ecx, eax
// 0098d63e  85db                 test ebx, ebx
// 0098d640  7403                 je 0x98d645
// 0098d642  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0098d645  682000cc00           push 0xcc0020
// 0098d64a  51                   push ecx
// 0098d64b  6a00                 push 0
// 0098d64d  53                   push ebx
// 0098d64e  50                   push eax
// 0098d64f  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 0098d656  8b4804               mov ecx, dword ptr [eax + 4]
// 0098d659  52                   push edx
// 0098d65a  6a00                 push 0
// 0098d65c  6a00                 push 0
// 0098d65e  51                   push ecx
// 0098d65f  ff156421b200         call dword ptr [0xb22164]
// 0098d665  55                   push ebp
// 0098d666  ff157c22b200         call dword ptr [0xb2227c]
// 0098d66c  3bfe                 cmp edi, esi
// 0098d66e  7ca0                 jl 0x98d610
// 0098d670  e996000000           jmp 0x98d70b
// 0098d675  85f6                 test esi, esi
// 0098d677  0f8e8e000000         jle 0x98d70b
// 0098d67d  99                   cdq 
// 0098d67e  f7fe                 idiv esi
// 0098d680  bd01000000           mov ebp, 1
// 0098d685  89b42498000000       mov dword ptr [esp + 0x98], esi
// 0098d68c  89442434             mov dword ptr [esp + 0x34], eax
// 0098d690  8bbc2490000000       mov edi, dword ptr [esp + 0x90]
// 0098d697  8bc7                 mov eax, edi
// 0098d699  2b842488000000       sub eax, dword ptr [esp + 0x88]
// 0098d6a0  8b9c2494000000       mov ebx, dword ptr [esp + 0x94]
// 0098d6a7  0fafc5               imul eax, ebp
// 0098d6aa  99                   cdq 
// 0098d6ab  f7fe                 idiv esi
// 0098d6ad  8bcf                 mov ecx, edi
// 0098d6af  2bc8                 sub ecx, eax
// 0098d6b1  8bc3                 mov eax, ebx
// 0098d6b3  2b84248c000000       sub eax, dword ptr [esp + 0x8c]
// 0098d6ba  2bf9                 sub edi, ecx
// 0098d6bc  0fafc5               imul eax, ebp
// 0098d6bf  99                   cdq 
// 0098d6c0  f7fe                 idiv esi
// 0098d6c2  8bd3                 mov edx, ebx
// 0098d6c4  2bd0                 sub edx, eax
// 0098d6c6  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0098d6cd  2bda                 sub ebx, edx
// 0098d6cf  85c0                 test eax, eax
// 0098d6d1  7403                 je 0x98d6d6
// 0098d6d3  8b4004               mov eax, dword ptr [eax + 4]
// 0098d6d6  682000cc00           push 0xcc0020
// 0098d6db  52                   push edx
// 0098d6dc  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0098d6e3  51                   push ecx
// 0098d6e4  50                   push eax
// 0098d6e5  8b4204               mov eax, dword ptr [edx + 4]
// 0098d6e8  53                   push ebx
// 0098d6e9  57                   push edi
// 0098d6ea  6a00                 push 0
// 0098d6ec  6a00                 push 0
// 0098d6ee  50                   push eax
// 0098d6ef  ff156421b200         call dword ptr [0xb22164]
// 0098d6f5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0098d6f9  51                   push ecx
// 0098d6fa  ff157c22b200         call dword ptr [0xb2227c]
// 0098d700  45                   inc ebp
// 0098d701  83ac249800000001     sub dword ptr [esp + 0x98], 1
// 0098d709  7585                 jne 0x98d690
// 0098d70b  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0098d70f  64890d00000000       mov dword ptr fs:[0], ecx
// 0098d716  59                   pop ecx
// 0098d717  5f                   pop edi
// 0098d718  5e                   pop esi
// 0098d719  5d                   pop ebp
// 0098d71a  5b                   pop ebx
// 0098d71b  83c468               add esp, 0x68
// 0098d71e  c21c00               ret 0x1c
// copied from an identical function in another client (function ?Animate@CXTPPaintManager@@UAEXPAVCDC@@0VCRect@@W4XTPAnimationType@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp