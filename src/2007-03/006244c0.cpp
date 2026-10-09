// roc 2007-03 006244c0  unit: seg_00620000  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006244c0
//
// 006244c0  83ec18               sub esp, 0x18
// 006244c3  53                   push ebx
// 006244c4  57                   push edi
// 006244c5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006244c9  33db                 xor ebx, ebx
// 006244cb  3bfb                 cmp edi, ebx
// 006244cd  895c2414             mov dword ptr [esp + 0x14], ebx
// 006244d1  0f8470020000         je 0x624747
// 006244d7  395c2438             cmp dword ptr [esp + 0x38], ebx
// 006244db  0f8466020000         je 0x624747
// 006244e1  55                   push ebp
// 006244e2  56                   push esi
// 006244e3  68ffffff00           push 0xffffff
// 006244e8  57                   push edi
// 006244e9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006244ed  895c2418             mov dword ptr [esp + 0x18], ebx
// 006244f1  895c2420             mov dword ptr [esp + 0x20], ebx
// 006244f5  ff15f8d07700         call dword ptr [0x77d0f8]
// 006244fb  53                   push ebx
// 006244fc  57                   push edi
// 006244fd  89442428             mov dword ptr [esp + 0x28], eax
// 00624501  ff15f4d07700         call dword ptr [0x77d0f4]
// 00624507  8b35f0d07700         mov esi, dword ptr [0x77d0f0]
// 0062450d  57                   push edi
// 0062450e  89442428             mov dword ptr [esp + 0x28], eax
// 00624512  ffd6                 call esi
// 00624514  8be8                 mov ebp, eax
// 00624516  3beb                 cmp ebp, ebx
// 00624518  0f8403020000         je 0x624721
// 0062451e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00624522  50                   push eax
// 00624523  ffd6                 call esi
// 00624525  8bf0                 mov esi, eax
// 00624527  3bf3                 cmp esi, ebx
// 00624529  0f84b4010000         je 0x6246e3
// 0062452f  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00624533  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00624537  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062453b  53                   push ebx
// 0062453c  57                   push edi
// 0062453d  51                   push ecx
// 0062453e  ff15ecd07700         call dword ptr [0x77d0ec]
// 00624544  85c0                 test eax, eax
// 00624546  89442410             mov dword ptr [esp + 0x10], eax
// 0062454a  0f848f010000         je 0x6246df
// 00624550  8bd0                 mov edx, eax
// 00624552  52                   push edx
// 00624553  56                   push esi
// 00624554  ff15e8d07700         call dword ptr [0x77d0e8]
// 0062455a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0062455e  8b542440             mov edx, dword ptr [esp + 0x40]
// 00624562  682000cc00           push 0xcc0020
// 00624567  8944241c             mov dword ptr [esp + 0x1c], eax
// 0062456b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0062456f  50                   push eax
// 00624570  51                   push ecx
// 00624571  52                   push edx
// 00624572  53                   push ebx
// 00624573  57                   push edi
// 00624574  6a00                 push 0
// 00624576  6a00                 push 0
// 00624578  56                   push esi
// 00624579  ff15e4d07700         call dword ptr [0x77d0e4]
// 0062457f  85c0                 test eax, eax
// 00624581  0f8458010000         je 0x6246df
// 00624587  6a00                 push 0
// 00624589  6a01                 push 1
// 0062458b  6a01                 push 1
// 0062458d  53                   push ebx
// 0062458e  57                   push edi
// 0062458f  ff15b0d07700         call dword ptr [0x77d0b0]
// 00624595  85c0                 test eax, eax
// 00624597  89442414             mov dword ptr [esp + 0x14], eax
// 0062459b  0f843e010000         je 0x6246df
// 006245a1  50                   push eax
// 006245a2  55                   push ebp
// 006245a3  ff15e8d07700         call dword ptr [0x77d0e8]
// 006245a9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 006245ad  51                   push ecx
// 006245ae  56                   push esi
// 006245af  89442448             mov dword ptr [esp + 0x48], eax
// 006245b3  ff15f8d07700         call dword ptr [0x77d0f8]
// 006245b9  682000cc00           push 0xcc0020
// 006245be  6a00                 push 0
// 006245c0  6a00                 push 0
// 006245c2  56                   push esi
// 006245c3  53                   push ebx
// 006245c4  57                   push edi
// 006245c5  6a00                 push 0
// 006245c7  6a00                 push 0
// 006245c9  55                   push ebp
// 006245ca  ff15e4d07700         call dword ptr [0x77d0e4]
// 006245d0  85c0                 test eax, eax
// 006245d2  0f84f7000000         je 0x6246cf
// 006245d8  837c245400           cmp dword ptr [esp + 0x54], 0
// 006245dd  7434                 je 0x624613
// 006245df  6a00                 push 0
// 006245e1  56                   push esi
// 006245e2  ff15f8d07700         call dword ptr [0x77d0f8]
// 006245e8  68ffffff00           push 0xffffff
// 006245ed  56                   push esi
// 006245ee  ff15f4d07700         call dword ptr [0x77d0f4]
// 006245f4  68c6008800           push 0x8800c6
// 006245f9  6a00                 push 0
// 006245fb  6a00                 push 0
// 006245fd  55                   push ebp
// 006245fe  53                   push ebx
// 006245ff  57                   push edi
// 00624600  6a00                 push 0
// 00624602  6a00                 push 0
// 00624604  56                   push esi
// 00624605  ff15e4d07700         call dword ptr [0x77d0e4]
// 0062460b  85c0                 test eax, eax
// 0062460d  0f84bc000000         je 0x6246cf
// 00624613  8b442438             mov eax, dword ptr [esp + 0x38]
// 00624617  3bc7                 cmp eax, edi
// 00624619  7552                 jne 0x62466d
// 0062461b  395c243c             cmp dword ptr [esp + 0x3c], ebx
// 0062461f  754c                 jne 0x62466d
// 00624621  8b542434             mov edx, dword ptr [esp + 0x34]
// 00624625  8b442430             mov eax, dword ptr [esp + 0x30]
// 00624629  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0062462d  68c6008800           push 0x8800c6
// 00624632  6a00                 push 0
// 00624634  6a00                 push 0
// 00624636  55                   push ebp
// 00624637  53                   push ebx
// 00624638  57                   push edi
// 00624639  52                   push edx
// 0062463a  50                   push eax
// 0062463b  51                   push ecx
// 0062463c  ff15e4d07700         call dword ptr [0x77d0e4]
// 00624642  85c0                 test eax, eax
// 00624644  0f8485000000         je 0x6246cf
// 0062464a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0062464e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00624652  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00624656  688600ee00           push 0xee0086
// 0062465b  6a00                 push 0
// 0062465d  6a00                 push 0
// 0062465f  56                   push esi
// 00624660  53                   push ebx
// 00624661  57                   push edi
// 00624662  52                   push edx
// 00624663  50                   push eax
// 00624664  51                   push ecx
// 00624665  ff15e4d07700         call dword ptr [0x77d0e4]
// 0062466b  eb56                 jmp 0x6246c3
// 0062466d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00624671  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00624675  68c6008800           push 0x8800c6
// 0062467a  53                   push ebx
// 0062467b  57                   push edi
// 0062467c  6a00                 push 0
// 0062467e  6a00                 push 0
// 00624680  55                   push ebp
// 00624681  52                   push edx
// 00624682  8b542448             mov edx, dword ptr [esp + 0x48]
// 00624686  50                   push eax
// 00624687  8b442454             mov eax, dword ptr [esp + 0x54]
// 0062468b  50                   push eax
// 0062468c  51                   push ecx
// 0062468d  52                   push edx
// 0062468e  ff15e0d07700         call dword ptr [0x77d0e0]
// 00624694  85c0                 test eax, eax
// 00624696  7437                 je 0x6246cf
// 00624698  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0062469c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006246a0  8b542434             mov edx, dword ptr [esp + 0x34]
// 006246a4  688600ee00           push 0xee0086
// 006246a9  53                   push ebx
// 006246aa  57                   push edi
// 006246ab  6a00                 push 0
// 006246ad  6a00                 push 0
// 006246af  56                   push esi
// 006246b0  50                   push eax
// 006246b1  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006246b5  51                   push ecx
// 006246b6  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 006246ba  52                   push edx
// 006246bb  50                   push eax
// 006246bc  51                   push ecx
// 006246bd  ff15e0d07700         call dword ptr [0x77d0e0]
// 006246c3  85c0                 test eax, eax
// 006246c5  7408                 je 0x6246cf
// 006246c7  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006246cf  8b442440             mov eax, dword ptr [esp + 0x40]
// 006246d3  85c0                 test eax, eax
// 006246d5  7408                 je 0x6246df
// 006246d7  50                   push eax
// 006246d8  55                   push ebp
// 006246d9  ff15e8d07700         call dword ptr [0x77d0e8]
// 006246df  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006246e3  8b1ddcd07700         mov ebx, dword ptr [0x77d0dc]
// 006246e9  55                   push ebp
// 006246ea  ffd3                 call ebx
// 006246ec  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006246f0  85ed                 test ebp, ebp
// 006246f2  7417                 je 0x62470b
// 006246f4  8b442418             mov eax, dword ptr [esp + 0x18]
// 006246f8  85c0                 test eax, eax
// 006246fa  7408                 je 0x624704
// 006246fc  50                   push eax
// 006246fd  56                   push esi
// 006246fe  ff15e8d07700         call dword ptr [0x77d0e8]
// 00624704  55                   push ebp
// 00624705  ff15ccd07700         call dword ptr [0x77d0cc]
// 0062470b  85f6                 test esi, esi
// 0062470d  7403                 je 0x624712
// 0062470f  56                   push esi
// 00624710  ffd3                 call ebx
// 00624712  8b442414             mov eax, dword ptr [esp + 0x14]
// 00624716  85c0                 test eax, eax
// 00624718  7407                 je 0x624721
// 0062471a  50                   push eax
// 0062471b  ff15ccd07700         call dword ptr [0x77d0cc]
// 00624721  8b542420             mov edx, dword ptr [esp + 0x20]
// 00624725  52                   push edx
// 00624726  57                   push edi
// 00624727  ff15f8d07700         call dword ptr [0x77d0f8]
// 0062472d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00624731  50                   push eax
// 00624732  57                   push edi
// 00624733  ff15f4d07700         call dword ptr [0x77d0f4]
// 00624739  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062473d  5e                   pop esi
// 0062473e  5d                   pop ebp
// 0062473f  5f                   pop edi
// 00624740  5b                   pop ebx
// 00624741  83c418               add esp, 0x18
// 00624744  c22c00               ret 0x2c
// 00624747  5f                   pop edi
// 00624748  33c0                 xor eax, eax
// 0062474a  5b                   pop ebx
// 0062474b  83c418               add esp, 0x18
// 0062474e  c22c00               ret 0x2c
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?McTransparentBlt@CXTPImageManager@@ABEHPAUHDC__@@HHHH0HHHHI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
