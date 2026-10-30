// roc 2009-12 00848160  unit: CXTPControls  size: 812 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00848160
//
// 00848160  6aff                 push -1
// 00848162  68abd19500           push 0x95d1ab
// 00848167  64a100000000         mov eax, dword ptr fs:[0]
// 0084816d  50                   push eax
// 0084816e  83ec2c               sub esp, 0x2c
// 00848171  53                   push ebx
// 00848172  55                   push ebp
// 00848173  56                   push esi
// 00848174  57                   push edi
// 00848175  a10052b600           mov eax, dword ptr [0xb65200]
// 0084817a  33c4                 xor eax, esp
// 0084817c  50                   push eax
// 0084817d  8d442440             lea eax, [esp + 0x40]
// 00848181  64a300000000         mov dword ptr fs:[0], eax
// 00848187  8bf9                 mov edi, ecx
// 00848189  897c2414             mov dword ptr [esp + 0x14], edi
// 0084818d  e85ecfffff           call 0x8450f0
// 00848192  89442418             mov dword ptr [esp + 0x18], eax
// 00848196  8b442450             mov eax, dword ptr [esp + 0x50]
// 0084819a  48                   dec eax
// 0084819b  83f80a               cmp eax, 0xa
// 0084819e  0f877d020000         ja 0x848421
// 008481a4  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 008481a8  ff248560848400       jmp dword ptr [eax*4 + 0x848460]
// 008481af  68a4010000           push 0x1a4
// 008481b4  e8a7b6faff           call 0x7f3860
// 008481b9  83c404               add esp, 4
// 008481bc  89442450             mov dword ptr [esp + 0x50], eax
// 008481c0  c744244800000000     mov dword ptr [esp + 0x48], 0
// 008481c8  85c0                 test eax, eax
// 008481ca  7409                 je 0x8481d5
// 008481cc  8bc8                 mov ecx, eax
// 008481ce  e85dda0700           call 0x8c5c30
// 008481d3  eb02                 jmp 0x8481d7
// 008481d5  33c0                 xor eax, eax
// 008481d7  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008481db  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008481df  51                   push ecx
// 008481e0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008481e4  52                   push edx
// 008481e5  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008481e9  51                   push ecx
// 008481ea  52                   push edx
// 008481eb  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 008481f3  50                   push eax
// 008481f4  e947020000           jmp 0x848440
// 008481f9  81fbb8880000         cmp ebx, 0x88b8
// 008481ff  750c                 jne 0x84820d
// 00848201  e84a070000           call 0x848950
// 00848206  8bf0                 mov esi, eax
// 00848208  e910020000           jmp 0x84841d
// 0084820d  81fbba880000         cmp ebx, 0x88ba
// 00848213  750c                 jne 0x848221
// 00848215  e8e6180000           call 0x849b00
// 0084821a  8bf0                 mov esi, eax
// 0084821c  e9fc010000           jmp 0x84841d
// 00848221  81fb00e80000         cmp ebx, 0xe800
// 00848227  750c                 jne 0x848235
// 00848229  e8f20a0000           call 0x848d20
// 0084822e  8bf0                 mov esi, eax
// 00848230  e9e8010000           jmp 0x84841d
// 00848235  81fbbb880000         cmp ebx, 0x88bb
// 0084823b  750c                 jne 0x848249
// 0084823d  e88e110000           call 0x8493d0
// 00848242  8bf0                 mov esi, eax
// 00848244  e9d4010000           jmp 0x84841d
// 00848249  e802800400           call 0x890250
// 0084824e  8bf0                 mov esi, eax
// 00848250  e9c8010000           jmp 0x84841d
// 00848255  e8663bfbff           call 0x7fbdc0
// 0084825a  8bf0                 mov esi, eax
// 0084825c  e9bc010000           jmp 0x84841d
// 00848261  e8aa1a0000           call 0x849d10
// 00848266  8bf0                 mov esi, eax
// 00848268  e9b0010000           jmp 0x84841d
// 0084826d  e84e1b0000           call 0x849dc0
// 00848272  8bf0                 mov esi, eax
// 00848274  e9a4010000           jmp 0x84841d
// 00848279  e8e21b0000           call 0x849e60
// 0084827e  8bf0                 mov esi, eax
// 00848280  e998010000           jmp 0x84841d
// 00848285  e8b6200300           call 0x87a340
// 0084828a  8bf0                 mov esi, eax
// 0084828c  e98c010000           jmp 0x84841d
// 00848291  e8ea310400           call 0x88b480
// 00848296  8bf0                 mov esi, eax
// 00848298  e980010000           jmp 0x84841d
// 0084829d  e8ee2effff           call 0x83b190
// 008482a2  33ed                 xor ebp, ebp
// 008482a4  8bf0                 mov esi, eax
// 008482a6  c744241c64309a00     mov dword ptr [esp + 0x1c], 0x9a3064
// 008482ae  896c2420             mov dword ptr [esp + 0x20], ebp
// 008482b2  3bdd                 cmp ebx, ebp
// 008482b4  c744244801000000     mov dword ptr [esp + 0x48], 1
// 008482bc  0f8e29010000         jle 0x8483eb
// 008482c2  8d4c2454             lea ecx, [esp + 0x54]
// 008482c6  ff1574de9800         call dword ptr [0x98de74]
// 008482cc  53                   push ebx
// 008482cd  8d4c2420             lea ecx, [esp + 0x20]
// 008482d1  c644244c02           mov byte ptr [esp + 0x4c], 2
// 008482d6  e8e54dbdff           call 0x41d0c0
// 008482db  85c0                 test eax, eax
// 008482dd  7431                 je 0x848310
// 008482df  8b442420             mov eax, dword ptr [esp + 0x20]
// 008482e3  55                   push ebp
// 008482e4  50                   push eax
// 008482e5  ff1548cc9800         call dword ptr [0x98cc48]
// 008482eb  50                   push eax
// 008482ec  e8f9bbfaff           call 0x7f3eea
// 008482f1  6800040000           push 0x400
// 008482f6  8d4c2458             lea ecx, [esp + 0x58]
// 008482fa  51                   push ecx
// 008482fb  8d542424             lea edx, [esp + 0x24]
// 008482ff  6a00                 push 0
// 00848301  52                   push edx
// 00848302  8be8                 mov ebp, eax
// 00848304  e897650200           call 0x86e8a0
// 00848309  8bc8                 mov ecx, eax
// 0084830b  e8d0600200           call 0x86e3e0
// 00848310  8b4738               mov eax, dword ptr [edi + 0x38]
// 00848313  85c0                 test eax, eax
// 00848315  7408                 je 0x84831f
// 00848317  8bb8a0000000         mov edi, dword ptr [eax + 0xa0]
// 0084831d  eb12                 jmp 0x848331
// 0084831f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00848322  85c9                 test ecx, ecx
// 00848324  7409                 je 0x84832f
// 00848326  e8c5edfbff           call 0x8070f0
// 0084832b  8bf8                 mov edi, eax
// 0084832d  eb02                 jmp 0x848331
// 0084832f  33ff                 xor edi, edi
// 00848331  85ff                 test edi, edi
// 00848333  746b                 je 0x8483a0
// 00848335  33c0                 xor eax, eax
// 00848337  89442428             mov dword ptr [esp + 0x28], eax
// 0084833b  8d4c2454             lea ecx, [esp + 0x54]
// 0084833f  89442424             mov dword ptr [esp + 0x24], eax
// 00848343  8944242c             mov dword ptr [esp + 0x2c], eax
// 00848347  89442430             mov dword ptr [esp + 0x30], eax
// 0084834b  89442434             mov dword ptr [esp + 0x34], eax
// 0084834f  89442438             mov dword ptr [esp + 0x38], eax
// 00848353  8944243c             mov dword ptr [esp + 0x3c], eax
// 00848357  c744242801000000     mov dword ptr [esp + 0x28], 1
// 0084835f  ff1580de9800         call dword ptr [0x98de80]
// 00848365  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00848368  89442438             mov dword ptr [esp + 0x38], eax
// 0084836c  8d442424             lea eax, [esp + 0x24]
// 00848370  50                   push eax
// 00848371  6a00                 push 0
// 00848373  6861280000           push 0x2861
// 00848378  51                   push ecx
// 00848379  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0084837d  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00848383  85c0                 test eax, eax
// 00848385  7419                 je 0x8483a0
// 00848387  8b542424             mov edx, dword ptr [esp + 0x24]
// 0084838b  52                   push edx
// 0084838c  e8ef95ffff           call 0x841980
// 00848391  50                   push eax
// 00848392  e8a7b8faff           call 0x7f3c3e
// 00848397  8bf8                 mov edi, eax
// 00848399  83c408               add esp, 8
// 0084839c  85ff                 test edi, edi
// 0084839e  7514                 jne 0x8483b4
// 008483a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008483a4  e847cdffff           call 0x8450f0
// 008483a9  50                   push eax
// 008483aa  e8e195ffff           call 0x841990
// 008483af  83c404               add esp, 4
// 008483b2  8bf8                 mov edi, eax
// 008483b4  8d442454             lea eax, [esp + 0x54]
// 008483b8  50                   push eax
// 008483b9  8d8ed8000000         lea ecx, [esi + 0xd8]
// 008483bf  ff1538d59800         call dword ptr [0x98d538]
// 008483c5  85ed                 test ebp, ebp
// 008483c7  740f                 je 0x8483d8
// 008483c9  8b17                 mov edx, dword ptr [edi]
// 008483cb  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008483d1  6a01                 push 1
// 008483d3  55                   push ebp
// 008483d4  8bcf                 mov ecx, edi
// 008483d6  ffd0                 call eax
// 008483d8  8d4c2454             lea ecx, [esp + 0x54]
// 008483dc  c644244801           mov byte ptr [esp + 0x48], 1
// 008483e1  ff15c0de9800         call dword ptr [0x98dec0]
// 008483e7  85ff                 test edi, edi
// 008483e9  750f                 jne 0x8483fa
// 008483eb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008483ef  51                   push ecx
// 008483f0  e89b95ffff           call 0x841990
// 008483f5  83c404               add esp, 4
// 008483f8  8bf8                 mov edi, eax
// 008483fa  89be78010000         mov dword ptr [esi + 0x178], edi
// 00848400  8d4c241c             lea ecx, [esp + 0x1c]
// 00848404  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 0084840c  c744241c64309a00     mov dword ptr [esp + 0x1c], 0x9a3064
// 00848414  e8b9bdfaff           call 0x7f41d2
// 00848419  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0084841d  85f6                 test esi, esi
// 0084841f  7504                 jne 0x848425
// 00848421  33c0                 xor eax, eax
// 00848423  eb22                 jmp 0x848447
// 00848425  8b542450             mov edx, dword ptr [esp + 0x50]
// 00848429  8b442460             mov eax, dword ptr [esp + 0x60]
// 0084842d  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00848431  50                   push eax
// 00848432  51                   push ecx
// 00848433  8996fc000000         mov dword ptr [esi + 0xfc], edx
// 00848439  8b542460             mov edx, dword ptr [esp + 0x60]
// 0084843d  52                   push edx
// 0084843e  53                   push ebx
// 0084843f  56                   push esi
// 00848440  8bcf                 mov ecx, edi
// 00848442  e8a9fbffff           call 0x847ff0
// 00848447  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0084844b  64890d00000000       mov dword ptr fs:[0], ecx
// 00848452  59                   pop ecx
// 00848453  5f                   pop edi
// 00848454  5e                   pop esi
// 00848455  5d                   pop ebp
// 00848456  5b                   pop ebx
// 00848457  83c438               add esp, 0x38
// 0084845a  c21400               ret 0x14
// 0084845d  8d4900               lea ecx, [ecx]
// 00848460  f9                   stc 
// 00848461  8184009d8284009d828400 add dword ptr [eax + eax + 0x84829d], 0x84829d
// 0084846c  9d                   popfd 
// 0084846d  8284005582840091     add byte ptr [eax + eax + 0x848255], 0x91
// 00848475  828400af81840061     add byte ptr [eax + eax + 0x8481af], 0x61
// 0084847d  8284006d82840085     add byte ptr [eax + eax + 0x84826d], 0x85
// copied from an identical function in another client (function ?Add@CXTPControls@@QAEPAVCXTPControl@@W4XTPControlType@@HPBDHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControls.cpp