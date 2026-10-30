// roc 2009-06 0076d3a0  unit: CXTPControls  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076d3a0
//
// 0076d3a0  6aff                 push -1
// 0076d3a2  688b8e8700           push 0x878e8b
// 0076d3a7  64a100000000         mov eax, dword ptr fs:[0]
// 0076d3ad  50                   push eax
// 0076d3ae  83ec2c               sub esp, 0x2c
// 0076d3b1  53                   push ebx
// 0076d3b2  55                   push ebp
// 0076d3b3  56                   push esi
// 0076d3b4  57                   push edi
// 0076d3b5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0076d3ba  33c4                 xor eax, esp
// 0076d3bc  50                   push eax
// 0076d3bd  8d442440             lea eax, [esp + 0x40]
// 0076d3c1  64a300000000         mov dword ptr fs:[0], eax
// 0076d3c7  8bf9                 mov edi, ecx
// 0076d3c9  897c2414             mov dword ptr [esp + 0x14], edi
// 0076d3cd  e84ecfffff           call 0x76a320
// 0076d3d2  89442418             mov dword ptr [esp + 0x18], eax
// 0076d3d6  8b442450             mov eax, dword ptr [esp + 0x50]
// 0076d3da  48                   dec eax
// 0076d3db  83f80a               cmp eax, 0xa
// 0076d3de  0f877d020000         ja 0x76d661
// 0076d3e4  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 0076d3e8  ff2485a0d67600       jmp dword ptr [eax*4 + 0x76d6a0]
// 0076d3ef  68a4010000           push 0x1a4
// 0076d3f4  e83fb6faff           call 0x718a38
// 0076d3f9  83c404               add esp, 4
// 0076d3fc  89442450             mov dword ptr [esp + 0x50], eax
// 0076d400  c744244800000000     mov dword ptr [esp + 0x48], 0
// 0076d408  85c0                 test eax, eax
// 0076d40a  7409                 je 0x76d415
// 0076d40c  8bc8                 mov ecx, eax
// 0076d40e  e88ddc0700           call 0x7eb0a0
// 0076d413  eb02                 jmp 0x76d417
// 0076d415  33c0                 xor eax, eax
// 0076d417  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0076d41b  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0076d41f  51                   push ecx
// 0076d420  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0076d424  52                   push edx
// 0076d425  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0076d429  51                   push ecx
// 0076d42a  52                   push edx
// 0076d42b  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0076d433  50                   push eax
// 0076d434  e947020000           jmp 0x76d680
// 0076d439  81fbb8880000         cmp ebx, 0x88b8
// 0076d43f  750c                 jne 0x76d44d
// 0076d441  e85a070000           call 0x76dba0
// 0076d446  8bf0                 mov esi, eax
// 0076d448  e910020000           jmp 0x76d65d
// 0076d44d  81fbba880000         cmp ebx, 0x88ba
// 0076d453  750c                 jne 0x76d461
// 0076d455  e816190000           call 0x76ed70
// 0076d45a  8bf0                 mov esi, eax
// 0076d45c  e9fc010000           jmp 0x76d65d
// 0076d461  81fb00e80000         cmp ebx, 0xe800
// 0076d467  750c                 jne 0x76d475
// 0076d469  e8020b0000           call 0x76df70
// 0076d46e  8bf0                 mov esi, eax
// 0076d470  e9e8010000           jmp 0x76d65d
// 0076d475  81fbbb880000         cmp ebx, 0x88bb
// 0076d47b  750c                 jne 0x76d489
// 0076d47d  e89e110000           call 0x76e620
// 0076d482  8bf0                 mov esi, eax
// 0076d484  e9d4010000           jmp 0x76d65d
// 0076d489  e802160500           call 0x7bea90
// 0076d48e  8bf0                 mov esi, eax
// 0076d490  e9c8010000           jmp 0x76d65d
// 0076d495  e8e607fbff           call 0x71dc80
// 0076d49a  8bf0                 mov esi, eax
// 0076d49c  e9bc010000           jmp 0x76d65d
// 0076d4a1  e8da1a0000           call 0x76ef80
// 0076d4a6  8bf0                 mov esi, eax
// 0076d4a8  e9b0010000           jmp 0x76d65d
// 0076d4ad  e87e1b0000           call 0x76f030
// 0076d4b2  8bf0                 mov esi, eax
// 0076d4b4  e9a4010000           jmp 0x76d65d
// 0076d4b9  e8121c0000           call 0x76f0d0
// 0076d4be  8bf0                 mov esi, eax
// 0076d4c0  e998010000           jmp 0x76d65d
// 0076d4c5  e8361f0300           call 0x79f400
// 0076d4ca  8bf0                 mov esi, eax
// 0076d4cc  e98c010000           jmp 0x76d65d
// 0076d4d1  e82a310400           call 0x7b0600
// 0076d4d6  8bf0                 mov esi, eax
// 0076d4d8  e980010000           jmp 0x76d65d
// 0076d4dd  e8de2effff           call 0x7603c0
// 0076d4e2  33ed                 xor ebp, ebp
// 0076d4e4  8bf0                 mov esi, eax
// 0076d4e6  c744241c94038b00     mov dword ptr [esp + 0x1c], 0x8b0394
// 0076d4ee  896c2420             mov dword ptr [esp + 0x20], ebp
// 0076d4f2  3bdd                 cmp ebx, ebp
// 0076d4f4  c744244801000000     mov dword ptr [esp + 0x48], 1
// 0076d4fc  0f8e29010000         jle 0x76d62b
// 0076d502  8d4c2454             lea ecx, [esp + 0x54]
// 0076d506  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0076d50c  53                   push ebx
// 0076d50d  8d4c2420             lea ecx, [esp + 0x20]
// 0076d511  c644244c02           mov byte ptr [esp + 0x4c], 2
// 0076d516  e835f5caff           call 0x41ca50
// 0076d51b  85c0                 test eax, eax
// 0076d51d  7431                 je 0x76d550
// 0076d51f  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076d523  55                   push ebp
// 0076d524  50                   push eax
// 0076d525  ff151cee8900         call dword ptr [0x89ee1c]
// 0076d52b  50                   push eax
// 0076d52c  e891bbfaff           call 0x7190c2
// 0076d531  6800040000           push 0x400
// 0076d536  8d4c2458             lea ecx, [esp + 0x58]
// 0076d53a  51                   push ecx
// 0076d53b  8d542424             lea edx, [esp + 0x24]
// 0076d53f  6a00                 push 0
// 0076d541  52                   push edx
// 0076d542  8be8                 mov ebp, eax
// 0076d544  e8f7db0200           call 0x79b140
// 0076d549  8bc8                 mov ecx, eax
// 0076d54b  e830d70200           call 0x79ac80
// 0076d550  8b4738               mov eax, dword ptr [edi + 0x38]
// 0076d553  85c0                 test eax, eax
// 0076d555  7408                 je 0x76d55f
// 0076d557  8bb8a0000000         mov edi, dword ptr [eax + 0xa0]
// 0076d55d  eb12                 jmp 0x76d571
// 0076d55f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0076d562  85c9                 test ecx, ecx
// 0076d564  7409                 je 0x76d56f
// 0076d566  e8252afcff           call 0x72ff90
// 0076d56b  8bf8                 mov edi, eax
// 0076d56d  eb02                 jmp 0x76d571
// 0076d56f  33ff                 xor edi, edi
// 0076d571  85ff                 test edi, edi
// 0076d573  746b                 je 0x76d5e0
// 0076d575  33c0                 xor eax, eax
// 0076d577  89442428             mov dword ptr [esp + 0x28], eax
// 0076d57b  8d4c2454             lea ecx, [esp + 0x54]
// 0076d57f  89442424             mov dword ptr [esp + 0x24], eax
// 0076d583  8944242c             mov dword ptr [esp + 0x2c], eax
// 0076d587  89442430             mov dword ptr [esp + 0x30], eax
// 0076d58b  89442434             mov dword ptr [esp + 0x34], eax
// 0076d58f  89442438             mov dword ptr [esp + 0x38], eax
// 0076d593  8944243c             mov dword ptr [esp + 0x3c], eax
// 0076d597  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0076d59f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0076d5a5  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0076d5a8  89442438             mov dword ptr [esp + 0x38], eax
// 0076d5ac  8d442424             lea eax, [esp + 0x24]
// 0076d5b0  50                   push eax
// 0076d5b1  6a00                 push 0
// 0076d5b3  6861280000           push 0x2861
// 0076d5b8  51                   push ecx
// 0076d5b9  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0076d5bd  ff1590ee8900         call dword ptr [0x89ee90]
// 0076d5c3  85c0                 test eax, eax
// 0076d5c5  7419                 je 0x76d5e0
// 0076d5c7  8b542424             mov edx, dword ptr [esp + 0x24]
// 0076d5cb  52                   push edx
// 0076d5cc  e8cf95ffff           call 0x766ba0
// 0076d5d1  50                   push eax
// 0076d5d2  e8efb9faff           call 0x718fc6
// 0076d5d7  8bf8                 mov edi, eax
// 0076d5d9  83c408               add esp, 8
// 0076d5dc  85ff                 test edi, edi
// 0076d5de  7514                 jne 0x76d5f4
// 0076d5e0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076d5e4  e837cdffff           call 0x76a320
// 0076d5e9  50                   push eax
// 0076d5ea  e8c195ffff           call 0x766bb0
// 0076d5ef  83c404               add esp, 4
// 0076d5f2  8bf8                 mov edi, eax
// 0076d5f4  8d442454             lea eax, [esp + 0x54]
// 0076d5f8  50                   push eax
// 0076d5f9  8d8ed8000000         lea ecx, [esi + 0xd8]
// 0076d5ff  ff1508fa8900         call dword ptr [0x89fa08]
// 0076d605  85ed                 test ebp, ebp
// 0076d607  740f                 je 0x76d618
// 0076d609  8b17                 mov edx, dword ptr [edi]
// 0076d60b  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0076d611  6a01                 push 1
// 0076d613  55                   push ebp
// 0076d614  8bcf                 mov ecx, edi
// 0076d616  ffd0                 call eax
// 0076d618  8d4c2454             lea ecx, [esp + 0x54]
// 0076d61c  c644244801           mov byte ptr [esp + 0x48], 1
// 0076d621  ff1510fd8900         call dword ptr [0x89fd10]
// 0076d627  85ff                 test edi, edi
// 0076d629  750f                 jne 0x76d63a
// 0076d62b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076d62f  51                   push ecx
// 0076d630  e87b95ffff           call 0x766bb0
// 0076d635  83c404               add esp, 4
// 0076d638  8bf8                 mov edi, eax
// 0076d63a  89be78010000         mov dword ptr [esi + 0x178], edi
// 0076d640  8d4c241c             lea ecx, [esp + 0x1c]
// 0076d644  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0076d64c  c744241c94038b00     mov dword ptr [esp + 0x1c], 0x8b0394
// 0076d654  e851bdfaff           call 0x7193aa
// 0076d659  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0076d65d  85f6                 test esi, esi
// 0076d65f  7504                 jne 0x76d665
// 0076d661  33c0                 xor eax, eax
// 0076d663  eb22                 jmp 0x76d687
// 0076d665  8b542450             mov edx, dword ptr [esp + 0x50]
// 0076d669  8b442460             mov eax, dword ptr [esp + 0x60]
// 0076d66d  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0076d671  50                   push eax
// 0076d672  51                   push ecx
// 0076d673  8996fc000000         mov dword ptr [esi + 0xfc], edx
// 0076d679  8b542460             mov edx, dword ptr [esp + 0x60]
// 0076d67d  52                   push edx
// 0076d67e  53                   push ebx
// 0076d67f  56                   push esi
// 0076d680  8bcf                 mov ecx, edi
// 0076d682  e8a9fbffff           call 0x76d230
// 0076d687  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0076d68b  64890d00000000       mov dword ptr fs:[0], ecx
// 0076d692  59                   pop ecx
// 0076d693  5f                   pop edi
// 0076d694  5e                   pop esi
// 0076d695  5d                   pop ebp
// 0076d696  5b                   pop ebx
// 0076d697  83c438               add esp, 0x38
// 0076d69a  c21400               ret 0x14
// 0076d69d  8d4900               lea ecx, [ecx]
// 0076d6a0  39d4                 cmp esp, edx
// 0076d6a2  7600                 jbe 0x76d6a4
// 0076d6a4  ddd4                 fst st(4)
// 0076d6a6  7600                 jbe 0x76d6a8
// 0076d6a8  ddd4                 fst st(4)
// 0076d6aa  7600                 jbe 0x76d6ac
// 0076d6ac  ddd4                 fst st(4)
// 0076d6ae  7600                 jbe 0x76d6b0
// 0076d6b0  95                   xchg ebp, eax
// 0076d6b1  d476                 aam 0x76
// 0076d6b3  00d1                 add cl, dl
// 0076d6b5  d476                 aam 0x76
// 0076d6b7  00ef                 add bh, ch
// 0076d6b9  d37600               sal dword ptr [esi], cl
// 0076d6bc  a1d47600ad           mov eax, dword ptr [0xad0076d4]
// 0076d6c1  d476                 aam 0x76
// 0076d6c3  00c5                 add ch, al
// 0076d6c5  d476                 aam 0x76
// copied from an identical function in another client (function ?Add@CXTPControls@@QAEPAVCXTPControl@@W4XTPControlType@@HPBDHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControls.cpp