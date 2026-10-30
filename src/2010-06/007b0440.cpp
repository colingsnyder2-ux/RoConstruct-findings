// roc 2010-06 007b0440  unit: CXTPPaintManager  size: 1809 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b0440
//
// 007b0440  6aff                 push -1
// 007b0442  6840ec9a00           push 0x9aec40
// 007b0447  64a100000000         mov eax, dword ptr fs:[0]
// 007b044d  50                   push eax
// 007b044e  83ec4c               sub esp, 0x4c
// 007b0451  53                   push ebx
// 007b0452  55                   push ebp
// 007b0453  56                   push esi
// 007b0454  57                   push edi
// 007b0455  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b045a  33c4                 xor eax, esp
// 007b045c  50                   push eax
// 007b045d  8d442460             lea eax, [esp + 0x60]
// 007b0461  64a300000000         mov dword ptr fs:[0], eax
// 007b0467  8bf9                 mov edi, ecx
// 007b0469  8b442478             mov eax, dword ptr [esp + 0x78]
// 007b046d  85c0                 test eax, eax
// 007b046f  0f85a8030000         jne 0x7b081d
// 007b0475  39842484000000       cmp dword ptr [esp + 0x84], eax
// 007b047c  0f8588000000         jne 0x7b050a
// 007b0482  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 007b0489  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007b0490  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 007b0496  8b01                 mov eax, dword ptr [ecx]
// 007b0498  8b4904               mov ecx, dword ptr [ecx + 4]
// 007b049b  83fa02               cmp edx, 2
// 007b049e  743a                 je 0x7b04da
// 007b04a0  83fa03               cmp edx, 3
// 007b04a3  7435                 je 0x7b04da
// 007b04a5  83fa05               cmp edx, 5
// 007b04a8  7430                 je 0x7b04da
// 007b04aa  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 007b04ae  8b2b                 mov ebp, dword ptr [ebx]
// 007b04b0  8d50f3               lea edx, [eax - 0xd]
// 007b04b3  8d78fe               lea edi, [eax - 2]
// 007b04b6  83ec10               sub esp, 0x10
// 007b04b9  8bc4                 mov eax, esp
// 007b04bb  8910                 mov dword ptr [eax], edx
// 007b04bd  be02000000           mov esi, 2
// 007b04c2  897004               mov dword ptr [eax + 4], esi
// 007b04c5  83c1fe               add ecx, -2
// 007b04c8  897808               mov dword ptr [eax + 8], edi
// 007b04cb  89480c               mov dword ptr [eax + 0xc], ecx
// 007b04ce  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 007b04d1  8bcb                 mov ecx, ebx
// 007b04d3  ffd0                 call eax
// 007b04d5  e9e3010000           jmp 0x7b06bd
// 007b04da  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 007b04de  8b2b                 mov ebp, dword ptr [ebx]
// 007b04e0  8d78fe               lea edi, [eax - 2]
// 007b04e3  83ec10               sub esp, 0x10
// 007b04e6  8bc4                 mov eax, esp
// 007b04e8  8d71f3               lea esi, [ecx - 0xd]
// 007b04eb  ba02000000           mov edx, 2
// 007b04f0  8910                 mov dword ptr [eax], edx
// 007b04f2  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 007b04f5  83c1fe               add ecx, -2
// 007b04f8  897004               mov dword ptr [eax + 4], esi
// 007b04fb  897808               mov dword ptr [eax + 8], edi
// 007b04fe  89480c               mov dword ptr [eax + 0xc], ecx
// 007b0501  8bcb                 mov ecx, ebx
// 007b0503  ffd2                 call edx
// 007b0505  e9b3010000           jmp 0x7b06bd
// 007b050a  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 007b050e  8b07                 mov eax, dword ptr [edi]
// 007b0510  8b742474             mov esi, dword ptr [esp + 0x74]
// 007b0514  8b5078               mov edx, dword ptr [eax + 0x78]
// 007b0517  55                   push ebp
// 007b0518  56                   push esi
// 007b0519  ffd2                 call edx
// 007b051b  8b07                 mov eax, dword ptr [edi]
// 007b051d  8b507c               mov edx, dword ptr [eax + 0x7c]
// 007b0520  55                   push ebp
// 007b0521  8bcf                 mov ecx, edi
// 007b0523  ffd2                 call edx
// 007b0525  8bbdc0000000         mov edi, dword ptr [ebp + 0xc0]
// 007b052b  8b9dc4000000         mov ebx, dword ptr [ebp + 0xc4]
// 007b0531  8bc8                 mov ecx, eax
// 007b0533  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007b053a  8b10                 mov edx, dword ptr [eax]
// 007b053c  8b85c8000000         mov eax, dword ptr [ebp + 0xc8]
// 007b0542  8badcc000000         mov ebp, dword ptr [ebp + 0xcc]
// 007b0548  8954247c             mov dword ptr [esp + 0x7c], edx
// 007b054c  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 007b0553  8b9200010000         mov edx, dword ptr [edx + 0x100]
// 007b0559  894c2474             mov dword ptr [esp + 0x74], ecx
// 007b055d  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b0561  83fa02               cmp edx, 2
// 007b0564  0f847a010000         je 0x7b06e4
// 007b056a  83fa03               cmp edx, 3
// 007b056d  0f8471010000         je 0x7b06e4
// 007b0573  83fa05               cmp edx, 5
// 007b0576  0f8468010000         je 0x7b06e4
// 007b057c  2bc7                 sub eax, edi
// 007b057e  99                   cdq 
// 007b057f  2bc2                 sub eax, edx
// 007b0581  51                   push ecx
// 007b0582  8d55fb               lea edx, [ebp - 5]
// 007b0585  d1f8                 sar eax, 1
// 007b0587  03c7                 add eax, edi
// 007b0589  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 007b0590  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007b0597  51                   push ecx
// 007b0598  8d55f9               lea edx, [ebp - 7]
// 007b059b  50                   push eax
// 007b059c  8d6802               lea ebp, [eax + 2]
// 007b059f  52                   push edx
// 007b05a0  896c2424             mov dword ptr [esp + 0x24], ebp
// 007b05a4  8d68fe               lea ebp, [eax - 2]
// 007b05a7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007b05ab  50                   push eax
// 007b05ac  52                   push edx
// 007b05ad  55                   push ebp
// 007b05ae  56                   push esi
// 007b05af  e8ecdbffff           call 0x7ae1a0
// 007b05b4  83c420               add esp, 0x20
// 007b05b7  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 007b05bc  0f84fb000000         je 0x7b06bd
// 007b05c2  85f6                 test esi, esi
// 007b05c4  7504                 jne 0x7b05ca
// 007b05c6  33c0                 xor eax, eax
// 007b05c8  eb03                 jmp 0x7b05cd
// 007b05ca  8b4604               mov eax, dword ptr [esi + 4]
// 007b05cd  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007b05d1  51                   push ecx
// 007b05d2  50                   push eax
// 007b05d3  8d4c242c             lea ecx, [esp + 0x2c]
// 007b05d7  e864f10400           call 0x7ff740
// 007b05dc  8d6b04               lea ebp, [ebx + 4]
// 007b05df  55                   push ebp
// 007b05e0  8d4702               lea eax, [edi + 2]
// 007b05e3  50                   push eax
// 007b05e4  8d54241c             lea edx, [esp + 0x1c]
// 007b05e8  52                   push edx
// 007b05e9  8bce                 mov ecx, esi
// 007b05eb  c744247400000000     mov dword ptr [esp + 0x74], 0
// 007b05f3  e88482ffff           call 0x7a887c
// 007b05f8  8d4306               lea eax, [ebx + 6]
// 007b05fb  50                   push eax
// 007b05fc  89842480000000       mov dword ptr [esp + 0x80], eax
// 007b0603  8d4704               lea eax, [edi + 4]
// 007b0606  50                   push eax
// 007b0607  8bce                 mov ecx, esi
// 007b0609  e86882ffff           call 0x7a8876
// 007b060e  83c309               add ebx, 9
// 007b0611  53                   push ebx
// 007b0612  8d4f01               lea ecx, [edi + 1]
// 007b0615  51                   push ecx
// 007b0616  8bce                 mov ecx, esi
// 007b0618  e85982ffff           call 0x7a8876
// 007b061d  55                   push ebp
// 007b061e  8d5703               lea edx, [edi + 3]
// 007b0621  52                   push edx
// 007b0622  8d44241c             lea eax, [esp + 0x1c]
// 007b0626  50                   push eax
// 007b0627  8bce                 mov ecx, esi
// 007b0629  e84e82ffff           call 0x7a887c
// 007b062e  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007b0632  51                   push ecx
// 007b0633  8d4705               lea eax, [edi + 5]
// 007b0636  50                   push eax
// 007b0637  8bce                 mov ecx, esi
// 007b0639  e83882ffff           call 0x7a8876
// 007b063e  53                   push ebx
// 007b063f  8d4702               lea eax, [edi + 2]
// 007b0642  50                   push eax
// 007b0643  8bce                 mov ecx, esi
// 007b0645  e82c82ffff           call 0x7a8876
// 007b064a  8d4706               lea eax, [edi + 6]
// 007b064d  55                   push ebp
// 007b064e  50                   push eax
// 007b064f  8d54241c             lea edx, [esp + 0x1c]
// 007b0653  52                   push edx
// 007b0654  8bce                 mov ecx, esi
// 007b0656  89842480000000       mov dword ptr [esp + 0x80], eax
// 007b065d  e81a82ffff           call 0x7a887c
// 007b0662  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 007b0666  50                   push eax
// 007b0667  8d4f08               lea ecx, [edi + 8]
// 007b066a  51                   push ecx
// 007b066b  8bce                 mov ecx, esi
// 007b066d  e80482ffff           call 0x7a8876
// 007b0672  53                   push ebx
// 007b0673  8d4705               lea eax, [edi + 5]
// 007b0676  50                   push eax
// 007b0677  8bce                 mov ecx, esi
// 007b0679  e8f881ffff           call 0x7a8876
// 007b067e  55                   push ebp
// 007b067f  8d5707               lea edx, [edi + 7]
// 007b0682  52                   push edx
// 007b0683  8d44241c             lea eax, [esp + 0x1c]
// 007b0687  50                   push eax
// 007b0688  8bce                 mov ecx, esi
// 007b068a  e8ed81ffff           call 0x7a887c
// 007b068f  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007b0693  51                   push ecx
// 007b0694  83c709               add edi, 9
// 007b0697  57                   push edi
// 007b0698  8bce                 mov ecx, esi
// 007b069a  e8d781ffff           call 0x7a8876
// 007b069f  8b542474             mov edx, dword ptr [esp + 0x74]
// 007b06a3  53                   push ebx
// 007b06a4  52                   push edx
// 007b06a5  8bce                 mov ecx, esi
// 007b06a7  e8ca81ffff           call 0x7a8876
// 007b06ac  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 007b06b4  8d4c2424             lea ecx, [esp + 0x24]
// 007b06b8  e813f10400           call 0x7ff7d0
// 007b06bd  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b06c1  c7400400000000       mov dword ptr [eax + 4], 0
// 007b06c8  c70000000000         mov dword ptr [eax], 0
// 007b06ce  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b06d2  64890d00000000       mov dword ptr fs:[0], ecx
// 007b06d9  59                   pop ecx
// 007b06da  5f                   pop edi
// 007b06db  5e                   pop esi
// 007b06dc  5d                   pop ebp
// 007b06dd  5b                   pop ebx
// 007b06de  83c458               add esp, 0x58
// 007b06e1  c21c00               ret 0x1c
// 007b06e4  51                   push ecx
// 007b06e5  8d6b05               lea ebp, [ebx + 5]
// 007b06e8  55                   push ebp
// 007b06e9  83c704               add edi, 4
// 007b06ec  57                   push edi
// 007b06ed  8d4d02               lea ecx, [ebp + 2]
// 007b06f0  51                   push ecx
// 007b06f1  8d4702               lea eax, [edi + 2]
// 007b06f4  50                   push eax
// 007b06f5  8d55fe               lea edx, [ebp - 2]
// 007b06f8  52                   push edx
// 007b06f9  50                   push eax
// 007b06fa  56                   push esi
// 007b06fb  e8a0daffff           call 0x7ae1a0
// 007b0700  83c420               add esp, 0x20
// 007b0703  837c247c00           cmp dword ptr [esp + 0x7c], 0
// 007b0708  74b3                 je 0x7b06bd
// 007b070a  85f6                 test esi, esi
// 007b070c  7504                 jne 0x7b0712
// 007b070e  33c0                 xor eax, eax
// 007b0710  eb03                 jmp 0x7b0715
// 007b0712  8b4604               mov eax, dword ptr [esi + 4]
// 007b0715  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007b0719  51                   push ecx
// 007b071a  50                   push eax
// 007b071b  8d4c2440             lea ecx, [esp + 0x40]
// 007b071f  e81cf00400           call 0x7ff740
// 007b0724  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007b0728  8d4302               lea eax, [ebx + 2]
// 007b072b  50                   push eax
// 007b072c  83c7f8               add edi, -8
// 007b072f  57                   push edi
// 007b0730  8d54241c             lea edx, [esp + 0x1c]
// 007b0734  52                   push edx
// 007b0735  8bce                 mov ecx, esi
// 007b0737  c744247401000000     mov dword ptr [esp + 0x74], 1
// 007b073f  e83881ffff           call 0x7a887c
// 007b0744  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b0748  8d4b04               lea ecx, [ebx + 4]
// 007b074b  83c0fa               add eax, -6
// 007b074e  51                   push ecx
// 007b074f  50                   push eax
// 007b0750  8bce                 mov ecx, esi
// 007b0752  8944247c             mov dword ptr [esp + 0x7c], eax
// 007b0756  e81b81ffff           call 0x7a8876
// 007b075b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b075f  8d5301               lea edx, [ebx + 1]
// 007b0762  83c0fd               add eax, -3
// 007b0765  52                   push edx
// 007b0766  50                   push eax
// 007b0767  8bce                 mov ecx, esi
// 007b0769  89842490000000       mov dword ptr [esp + 0x90], eax
// 007b0770  e80181ffff           call 0x7a8876
// 007b0775  8d4303               lea eax, [ebx + 3]
// 007b0778  50                   push eax
// 007b0779  57                   push edi
// 007b077a  8d4c241c             lea ecx, [esp + 0x1c]
// 007b077e  51                   push ecx
// 007b077f  8bce                 mov ecx, esi
// 007b0781  e8f680ffff           call 0x7a887c
// 007b0786  8b542474             mov edx, dword ptr [esp + 0x74]
// 007b078a  55                   push ebp
// 007b078b  52                   push edx
// 007b078c  8bce                 mov ecx, esi
// 007b078e  e8e380ffff           call 0x7a8876
// 007b0793  8d4302               lea eax, [ebx + 2]
// 007b0796  50                   push eax
// 007b0797  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007b079e  50                   push eax
// 007b079f  8bce                 mov ecx, esi
// 007b07a1  e8d080ffff           call 0x7a8876
// 007b07a6  8d4306               lea eax, [ebx + 6]
// 007b07a9  50                   push eax
// 007b07aa  57                   push edi
// 007b07ab  8d4c241c             lea ecx, [esp + 0x1c]
// 007b07af  51                   push ecx
// 007b07b0  8bce                 mov ecx, esi
// 007b07b2  89842488000000       mov dword ptr [esp + 0x88], eax
// 007b07b9  e8be80ffff           call 0x7a887c
// 007b07be  8b442474             mov eax, dword ptr [esp + 0x74]
// 007b07c2  8d5308               lea edx, [ebx + 8]
// 007b07c5  52                   push edx
// 007b07c6  50                   push eax
// 007b07c7  8bce                 mov ecx, esi
// 007b07c9  e8a880ffff           call 0x7a8876
// 007b07ce  55                   push ebp
// 007b07cf  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 007b07d6  55                   push ebp
// 007b07d7  8bce                 mov ecx, esi
// 007b07d9  e89880ffff           call 0x7a8876
// 007b07de  8d4b07               lea ecx, [ebx + 7]
// 007b07e1  51                   push ecx
// 007b07e2  57                   push edi
// 007b07e3  8d54241c             lea edx, [esp + 0x1c]
// 007b07e7  52                   push edx
// 007b07e8  8bce                 mov ecx, esi
// 007b07ea  e88d80ffff           call 0x7a887c
// 007b07ef  8b442474             mov eax, dword ptr [esp + 0x74]
// 007b07f3  83c309               add ebx, 9
// 007b07f6  53                   push ebx
// 007b07f7  50                   push eax
// 007b07f8  8bce                 mov ecx, esi
// 007b07fa  e87780ffff           call 0x7a8876
// 007b07ff  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007b0803  51                   push ecx
// 007b0804  55                   push ebp
// 007b0805  8bce                 mov ecx, esi
// 007b0807  e86a80ffff           call 0x7a8876
// 007b080c  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 007b0814  8d4c2438             lea ecx, [esp + 0x38]
// 007b0818  e99bfeffff           jmp 0x7b06b8
// 007b081d  83f803               cmp eax, 3
// 007b0820  0f85b6000000         jne 0x7b08dc
// 007b0826  8b74247c             mov esi, dword ptr [esp + 0x7c]
// 007b082a  8b17                 mov edx, dword ptr [edi]
// 007b082c  8b442474             mov eax, dword ptr [esp + 0x74]
// 007b0830  8b5278               mov edx, dword ptr [edx + 0x78]
// 007b0833  56                   push esi
// 007b0834  50                   push eax
// 007b0835  ffd2                 call edx
// 007b0837  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007b083d  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007b0843  8b17                 mov edx, dword ptr [edi]
// 007b0845  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 007b084b  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 007b0851  8944242c             mov dword ptr [esp + 0x2c], eax
// 007b0855  8b427c               mov eax, dword ptr [edx + 0x7c]
// 007b0858  894c2430             mov dword ptr [esp + 0x30], ecx
// 007b085c  56                   push esi
// 007b085d  8bcf                 mov ecx, edi
// 007b085f  ffd0                 call eax
// 007b0861  8b16                 mov edx, dword ptr [esi]
// 007b0863  8944247c             mov dword ptr [esp + 0x7c], eax
// 007b0867  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007b086a  8bce                 mov ecx, esi
// 007b086c  ffd0                 call eax
// 007b086e  85c0                 test eax, eax
// 007b0870  7525                 jne 0x7b0897
// 007b0872  8b16                 mov edx, dword ptr [esi]
// 007b0874  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007b087a  8bce                 mov ecx, esi
// 007b087c  ffd0                 call eax
// 007b087e  85c0                 test eax, eax
// 007b0880  7515                 jne 0x7b0897
// 007b0882  8b475c               mov eax, dword ptr [edi + 0x5c]
// 007b0885  83f8ff               cmp eax, -1
// 007b0888  7509                 jne 0x7b0893
// 007b088a  8b4f58               mov ecx, dword ptr [edi + 0x58]
// 007b088d  894c247c             mov dword ptr [esp + 0x7c], ecx
// 007b0891  eb04                 jmp 0x7b0897
// 007b0893  8944247c             mov dword ptr [esp + 0x7c], eax
// 007b0897  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007b089b  2bc3                 sub eax, ebx
// 007b089d  99                   cdq 
// 007b089e  2bc2                 sub eax, edx
// 007b08a0  8bc8                 mov ecx, eax
// 007b08a2  8b442430             mov eax, dword ptr [esp + 0x30]
// 007b08a6  2bc5                 sub eax, ebp
// 007b08a8  99                   cdq 
// 007b08a9  2bc2                 sub eax, edx
// 007b08ab  d1f9                 sar ecx, 1
// 007b08ad  03cb                 add ecx, ebx
// 007b08af  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 007b08b3  d1f8                 sar eax, 1
// 007b08b5  53                   push ebx
// 007b08b6  03c5                 add eax, ebp
// 007b08b8  8d5001               lea edx, [eax + 1]
// 007b08bb  52                   push edx
// 007b08bc  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007b08c0  51                   push ecx
// 007b08c1  83c0fe               add eax, -2
// 007b08c4  50                   push eax
// 007b08c5  8d7103               lea esi, [ecx + 3]
// 007b08c8  56                   push esi
// 007b08c9  50                   push eax
// 007b08ca  8d79fd               lea edi, [ecx - 3]
// 007b08cd  57                   push edi
// 007b08ce  52                   push edx
// 007b08cf  e8ccd8ffff           call 0x7ae1a0
// 007b08d4  83c420               add esp, 0x20
// 007b08d7  e9e1fdffff           jmp 0x7b06bd
// 007b08dc  83f802               cmp eax, 2
// 007b08df  0f851f010000         jne 0x7b0a04
// 007b08e5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007b08ed  c7442414080ea100     mov dword ptr [esp + 0x14], 0xa10e08
// 007b08f5  8b742474             mov esi, dword ptr [esp + 0x74]
// 007b08f9  89442468             mov dword ptr [esp + 0x68], eax
// 007b08fd  8b4608               mov eax, dword ptr [esi + 8]
// 007b0900  6a58                 push 0x58
// 007b0902  50                   push eax
// 007b0903  ff15b4a09e00         call dword ptr [0x9ea0b4]
// 007b0909  6a00                 push 0
// 007b090b  680c5fa500           push 0xa55f0c
// 007b0910  50                   push eax
// 007b0911  6a60                 push 0x60
// 007b0913  6a50                 push 0x50
// 007b0915  ff15c8a29e00         call dword ptr [0x9ea2c8]
// 007b091b  50                   push eax
// 007b091c  8d4c2420             lea ecx, [esp + 0x20]
// 007b0920  e87dc41c00           call 0x97cda2
// 007b0925  8b16                 mov edx, dword ptr [esi]
// 007b0927  8b5230               mov edx, dword ptr [edx + 0x30]
// 007b092a  8d442414             lea eax, [esp + 0x14]
// 007b092e  50                   push eax
// 007b092f  8bce                 mov ecx, esi
// 007b0931  ffd2                 call edx
// 007b0933  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 007b0937  89442474             mov dword ptr [esp + 0x74], eax
// 007b093b  8b07                 mov eax, dword ptr [edi]
// 007b093d  8b5078               mov edx, dword ptr [eax + 0x78]
// 007b0940  53                   push ebx
// 007b0941  56                   push esi
// 007b0942  8bcf                 mov ecx, edi
// 007b0944  ffd2                 call edx
// 007b0946  8b03                 mov eax, dword ptr [ebx]
// 007b0948  8b5078               mov edx, dword ptr [eax + 0x78]
// 007b094b  8bcb                 mov ecx, ebx
// 007b094d  ffd2                 call edx
// 007b094f  85c0                 test eax, eax
// 007b0951  7532                 jne 0x7b0985
// 007b0953  8b03                 mov eax, dword ptr [ebx]
// 007b0955  8b506c               mov edx, dword ptr [eax + 0x6c]
// 007b0958  8bcb                 mov ecx, ebx
// 007b095a  ffd2                 call edx
// 007b095c  85c0                 test eax, eax
// 007b095e  7525                 jne 0x7b0985
// 007b0960  8b475c               mov eax, dword ptr [edi + 0x5c]
// 007b0963  83f8ff               cmp eax, -1
// 007b0966  750f                 jne 0x7b0977
// 007b0968  8b7f58               mov edi, dword ptr [edi + 0x58]
// 007b096b  8b06                 mov eax, dword ptr [esi]
// 007b096d  8b5038               mov edx, dword ptr [eax + 0x38]
// 007b0970  57                   push edi
// 007b0971  8bce                 mov ecx, esi
// 007b0973  ffd2                 call edx
// 007b0975  eb22                 jmp 0x7b0999
// 007b0977  8bf8                 mov edi, eax
// 007b0979  8b06                 mov eax, dword ptr [esi]
// 007b097b  8b5038               mov edx, dword ptr [eax + 0x38]
// 007b097e  57                   push edi
// 007b097f  8bce                 mov ecx, esi
// 007b0981  ffd2                 call edx
// 007b0983  eb14                 jmp 0x7b0999
// 007b0985  8b07                 mov eax, dword ptr [edi]
// 007b0987  8b507c               mov edx, dword ptr [eax + 0x7c]
// 007b098a  8b2e                 mov ebp, dword ptr [esi]
// 007b098c  53                   push ebx
// 007b098d  8bcf                 mov ecx, edi
// 007b098f  ffd2                 call edx
// 007b0991  50                   push eax
// 007b0992  8b4538               mov eax, dword ptr [ebp + 0x38]
// 007b0995  8bce                 mov ecx, esi
// 007b0997  ffd0                 call eax
// 007b0999  8b83c8000000         mov eax, dword ptr [ebx + 0xc8]
// 007b099f  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 007b09a5  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 007b09ab  6a25                 push 0x25
// 007b09ad  89442430             mov dword ptr [esp + 0x30], eax
// 007b09b1  8d442428             lea eax, [esp + 0x28]
// 007b09b5  894c2428             mov dword ptr [esp + 0x28], ecx
// 007b09b9  8b8bcc000000         mov ecx, dword ptr [ebx + 0xcc]
// 007b09bf  50                   push eax
// 007b09c0  89542430             mov dword ptr [esp + 0x30], edx
// 007b09c4  8b16                 mov edx, dword ptr [esi]
// 007b09c6  8b5270               mov edx, dword ptr [edx + 0x70]
// 007b09c9  6a01                 push 1
// 007b09cb  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007b09cf  6808c7a300           push 0xa3c708
// 007b09d4  8bce                 mov ecx, esi
// 007b09d6  ffd2                 call edx
// 007b09d8  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007b09dc  8b06                 mov eax, dword ptr [esi]
// 007b09de  8b5030               mov edx, dword ptr [eax + 0x30]
// 007b09e1  51                   push ecx
// 007b09e2  8bce                 mov ecx, esi
// 007b09e4  ffd2                 call edx
// 007b09e6  8d4c2414             lea ecx, [esp + 0x14]
// 007b09ea  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 007b09f2  c7442414080ea100     mov dword ptr [esp + 0x14], 0xa10e08
// 007b09fa  e861ecc5ff           call 0x40f660
// 007b09ff  e9b9fcffff           jmp 0x7b06bd
// 007b0a04  83f801               cmp eax, 1
// 007b0a07  0f85b0fcffff         jne 0x7b06bd
// 007b0a0d  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 007b0a15  0f8426010000         je 0x7b0b41
// 007b0a1b  8b5c247c             mov ebx, dword ptr [esp + 0x7c]
// 007b0a1f  8b07                 mov eax, dword ptr [edi]
// 007b0a21  8b742474             mov esi, dword ptr [esp + 0x74]
// 007b0a25  8b5078               mov edx, dword ptr [eax + 0x78]
// 007b0a28  53                   push ebx
// 007b0a29  56                   push esi
// 007b0a2a  ffd2                 call edx
// 007b0a2c  8d442424             lea eax, [esp + 0x24]
// 007b0a30  50                   push eax
// 007b0a31  8bcb                 mov ecx, ebx
// 007b0a33  e8b892ffff           call 0x7a9cf0
// 007b0a38  8d4c2414             lea ecx, [esp + 0x14]
// 007b0a3c  51                   push ecx
// 007b0a3d  8d4c2428             lea ecx, [esp + 0x28]
// 007b0a41  e89abec6ff           call 0x41c8e0
// 007b0a46  8b18                 mov ebx, dword ptr [eax]
// 007b0a48  85f6                 test esi, esi
// 007b0a4a  7504                 jne 0x7b0a50
// 007b0a4c  33c0                 xor eax, eax
// 007b0a4e  eb03                 jmp 0x7b0a53
// 007b0a50  8b4604               mov eax, dword ptr [esi + 4]
// 007b0a53  6a00                 push 0
// 007b0a55  50                   push eax
// 007b0a56  8d4c2454             lea ecx, [esp + 0x54]
// 007b0a5a  e8e1ec0400           call 0x7ff740
// 007b0a5f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007b0a63  8d4702               lea eax, [edi + 2]
// 007b0a66  50                   push eax
// 007b0a67  8d6bfe               lea ebp, [ebx - 2]
// 007b0a6a  55                   push ebp
// 007b0a6b  8d54241c             lea edx, [esp + 0x1c]
// 007b0a6f  52                   push edx
// 007b0a70  8bce                 mov ecx, esi
// 007b0a72  c744247403000000     mov dword ptr [esp + 0x74], 3
// 007b0a7a  e8fd7dffff           call 0x7a887c
// 007b0a7f  8d4704               lea eax, [edi + 4]
// 007b0a82  50                   push eax
// 007b0a83  53                   push ebx
// 007b0a84  8bce                 mov ecx, esi
// 007b0a86  e8eb7dffff           call 0x7a8876
// 007b0a8b  8d4f01               lea ecx, [edi + 1]
// 007b0a8e  8d4303               lea eax, [ebx + 3]
// 007b0a91  51                   push ecx
// 007b0a92  50                   push eax
// 007b0a93  8bce                 mov ecx, esi
// 007b0a95  89842484000000       mov dword ptr [esp + 0x84], eax
// 007b0a9c  e8d57dffff           call 0x7a8876
// 007b0aa1  8d5703               lea edx, [edi + 3]
// 007b0aa4  52                   push edx
// 007b0aa5  55                   push ebp
// 007b0aa6  8d44241c             lea eax, [esp + 0x1c]
// 007b0aaa  50                   push eax
// 007b0aab  8bce                 mov ecx, esi
// 007b0aad  e8ca7dffff           call 0x7a887c
// 007b0ab2  8d4705               lea eax, [edi + 5]
// 007b0ab5  50                   push eax
// 007b0ab6  53                   push ebx
// 007b0ab7  8bce                 mov ecx, esi
// 007b0ab9  e8b87dffff           call 0x7a8876
// 007b0abe  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007b0ac2  8d4702               lea eax, [edi + 2]
// 007b0ac5  50                   push eax
// 007b0ac6  51                   push ecx
// 007b0ac7  8bce                 mov ecx, esi
// 007b0ac9  e8a87dffff           call 0x7a8876
// 007b0ace  8d4706               lea eax, [edi + 6]
// 007b0ad1  50                   push eax
// 007b0ad2  55                   push ebp
// 007b0ad3  8d54241c             lea edx, [esp + 0x1c]
// 007b0ad7  52                   push edx
// 007b0ad8  8bce                 mov ecx, esi
// 007b0ada  89842480000000       mov dword ptr [esp + 0x80], eax
// 007b0ae1  e8967dffff           call 0x7a887c
// 007b0ae6  8d4708               lea eax, [edi + 8]
// 007b0ae9  50                   push eax
// 007b0aea  53                   push ebx
// 007b0aeb  8bce                 mov ecx, esi
// 007b0aed  e8847dffff           call 0x7a8876
// 007b0af2  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007b0af6  8d4705               lea eax, [edi + 5]
// 007b0af9  50                   push eax
// 007b0afa  51                   push ecx
// 007b0afb  8bce                 mov ecx, esi
// 007b0afd  e8747dffff           call 0x7a8876
// 007b0b02  8d5707               lea edx, [edi + 7]
// 007b0b05  52                   push edx
// 007b0b06  55                   push ebp
// 007b0b07  8d442424             lea eax, [esp + 0x24]
// 007b0b0b  50                   push eax
// 007b0b0c  8bce                 mov ecx, esi
// 007b0b0e  e8697dffff           call 0x7a887c
// 007b0b13  83c709               add edi, 9
// 007b0b16  57                   push edi
// 007b0b17  53                   push ebx
// 007b0b18  8bce                 mov ecx, esi
// 007b0b1a  e8577dffff           call 0x7a8876
// 007b0b1f  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007b0b23  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 007b0b27  51                   push ecx
// 007b0b28  52                   push edx
// 007b0b29  8bce                 mov ecx, esi
// 007b0b2b  e8467dffff           call 0x7a8876
// 007b0b30  8d4c244c             lea ecx, [esp + 0x4c]
// 007b0b34  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 007b0b3c  e88fec0400           call 0x7ff7d0
// 007b0b41  8b442470             mov eax, dword ptr [esp + 0x70]
// 007b0b45  c740040c000000       mov dword ptr [eax + 4], 0xc
// 007b0b4c  e977fbffff           jmp 0x7b06c8
// copied from an identical function in another client (function ?DrawSpecialControl@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp