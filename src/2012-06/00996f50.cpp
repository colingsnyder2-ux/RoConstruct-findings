// roc 2012-06 00996f50  unit: CXTPCommandBar  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00996f50
//
// 00996f50  83ec18               sub esp, 0x18
// 00996f53  53                   push ebx
// 00996f54  57                   push edi
// 00996f55  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00996f59  33db                 xor ebx, ebx
// 00996f5b  895c2414             mov dword ptr [esp + 0x14], ebx
// 00996f5f  3bfb                 cmp edi, ebx
// 00996f61  0f8470020000         je 0x9971d7
// 00996f67  395c2438             cmp dword ptr [esp + 0x38], ebx
// 00996f6b  0f8466020000         je 0x9971d7
// 00996f71  55                   push ebp
// 00996f72  56                   push esi
// 00996f73  68ffffff00           push 0xffffff
// 00996f78  57                   push edi
// 00996f79  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00996f7d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00996f81  895c2420             mov dword ptr [esp + 0x20], ebx
// 00996f85  ff15d420b200         call dword ptr [0xb220d4]
// 00996f8b  53                   push ebx
// 00996f8c  57                   push edi
// 00996f8d  89442428             mov dword ptr [esp + 0x28], eax
// 00996f91  ff15d020b200         call dword ptr [0xb220d0]
// 00996f97  8b355821b200         mov esi, dword ptr [0xb22158]
// 00996f9d  57                   push edi
// 00996f9e  89442428             mov dword ptr [esp + 0x28], eax
// 00996fa2  ffd6                 call esi
// 00996fa4  8be8                 mov ebp, eax
// 00996fa6  3beb                 cmp ebp, ebx
// 00996fa8  0f8403020000         je 0x9971b1
// 00996fae  8b442440             mov eax, dword ptr [esp + 0x40]
// 00996fb2  50                   push eax
// 00996fb3  ffd6                 call esi
// 00996fb5  8bf0                 mov esi, eax
// 00996fb7  3bf3                 cmp esi, ebx
// 00996fb9  0f84b4010000         je 0x997173
// 00996fbf  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 00996fc3  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 00996fc7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00996fcb  53                   push ebx
// 00996fcc  57                   push edi
// 00996fcd  51                   push ecx
// 00996fce  ff155c21b200         call dword ptr [0xb2215c]
// 00996fd4  89442410             mov dword ptr [esp + 0x10], eax
// 00996fd8  85c0                 test eax, eax
// 00996fda  0f848f010000         je 0x99716f
// 00996fe0  8bd0                 mov edx, eax
// 00996fe2  52                   push edx
// 00996fe3  56                   push esi
// 00996fe4  ff156021b200         call dword ptr [0xb22160]
// 00996fea  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00996fee  8b542440             mov edx, dword ptr [esp + 0x40]
// 00996ff2  682000cc00           push 0xcc0020
// 00996ff7  8944241c             mov dword ptr [esp + 0x1c], eax
// 00996ffb  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00996fff  50                   push eax
// 00997000  51                   push ecx
// 00997001  52                   push edx
// 00997002  53                   push ebx
// 00997003  57                   push edi
// 00997004  6a00                 push 0
// 00997006  6a00                 push 0
// 00997008  56                   push esi
// 00997009  ff156421b200         call dword ptr [0xb22164]
// 0099700f  85c0                 test eax, eax
// 00997011  0f8458010000         je 0x99716f
// 00997017  6a00                 push 0
// 00997019  6a01                 push 1
// 0099701b  6a01                 push 1
// 0099701d  53                   push ebx
// 0099701e  57                   push edi
// 0099701f  ff153c21b200         call dword ptr [0xb2213c]
// 00997025  89442414             mov dword ptr [esp + 0x14], eax
// 00997029  85c0                 test eax, eax
// 0099702b  0f843e010000         je 0x99716f
// 00997031  50                   push eax
// 00997032  55                   push ebp
// 00997033  ff156021b200         call dword ptr [0xb22160]
// 00997039  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0099703d  51                   push ecx
// 0099703e  56                   push esi
// 0099703f  89442448             mov dword ptr [esp + 0x48], eax
// 00997043  ff15d420b200         call dword ptr [0xb220d4]
// 00997049  682000cc00           push 0xcc0020
// 0099704e  6a00                 push 0
// 00997050  6a00                 push 0
// 00997052  56                   push esi
// 00997053  53                   push ebx
// 00997054  57                   push edi
// 00997055  6a00                 push 0
// 00997057  6a00                 push 0
// 00997059  55                   push ebp
// 0099705a  ff156421b200         call dword ptr [0xb22164]
// 00997060  85c0                 test eax, eax
// 00997062  0f84f7000000         je 0x99715f
// 00997068  837c245400           cmp dword ptr [esp + 0x54], 0
// 0099706d  7434                 je 0x9970a3
// 0099706f  6a00                 push 0
// 00997071  56                   push esi
// 00997072  ff15d420b200         call dword ptr [0xb220d4]
// 00997078  68ffffff00           push 0xffffff
// 0099707d  56                   push esi
// 0099707e  ff15d020b200         call dword ptr [0xb220d0]
// 00997084  68c6008800           push 0x8800c6
// 00997089  6a00                 push 0
// 0099708b  6a00                 push 0
// 0099708d  55                   push ebp
// 0099708e  53                   push ebx
// 0099708f  57                   push edi
// 00997090  6a00                 push 0
// 00997092  6a00                 push 0
// 00997094  56                   push esi
// 00997095  ff156421b200         call dword ptr [0xb22164]
// 0099709b  85c0                 test eax, eax
// 0099709d  0f84bc000000         je 0x99715f
// 009970a3  8b442438             mov eax, dword ptr [esp + 0x38]
// 009970a7  3bc7                 cmp eax, edi
// 009970a9  7552                 jne 0x9970fd
// 009970ab  395c243c             cmp dword ptr [esp + 0x3c], ebx
// 009970af  754c                 jne 0x9970fd
// 009970b1  8b542434             mov edx, dword ptr [esp + 0x34]
// 009970b5  8b442430             mov eax, dword ptr [esp + 0x30]
// 009970b9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009970bd  68c6008800           push 0x8800c6
// 009970c2  6a00                 push 0
// 009970c4  6a00                 push 0
// 009970c6  55                   push ebp
// 009970c7  53                   push ebx
// 009970c8  57                   push edi
// 009970c9  52                   push edx
// 009970ca  50                   push eax
// 009970cb  51                   push ecx
// 009970cc  ff156421b200         call dword ptr [0xb22164]
// 009970d2  85c0                 test eax, eax
// 009970d4  0f8485000000         je 0x99715f
// 009970da  8b542434             mov edx, dword ptr [esp + 0x34]
// 009970de  8b442430             mov eax, dword ptr [esp + 0x30]
// 009970e2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009970e6  688600ee00           push 0xee0086
// 009970eb  6a00                 push 0
// 009970ed  6a00                 push 0
// 009970ef  56                   push esi
// 009970f0  53                   push ebx
// 009970f1  57                   push edi
// 009970f2  52                   push edx
// 009970f3  50                   push eax
// 009970f4  51                   push ecx
// 009970f5  ff156421b200         call dword ptr [0xb22164]
// 009970fb  eb56                 jmp 0x997153
// 009970fd  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00997101  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00997105  68c6008800           push 0x8800c6
// 0099710a  53                   push ebx
// 0099710b  57                   push edi
// 0099710c  6a00                 push 0
// 0099710e  6a00                 push 0
// 00997110  55                   push ebp
// 00997111  52                   push edx
// 00997112  8b542448             mov edx, dword ptr [esp + 0x48]
// 00997116  50                   push eax
// 00997117  8b442454             mov eax, dword ptr [esp + 0x54]
// 0099711b  50                   push eax
// 0099711c  51                   push ecx
// 0099711d  52                   push edx
// 0099711e  ff15b420b200         call dword ptr [0xb220b4]
// 00997124  85c0                 test eax, eax
// 00997126  7437                 je 0x99715f
// 00997128  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0099712c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00997130  8b542434             mov edx, dword ptr [esp + 0x34]
// 00997134  688600ee00           push 0xee0086
// 00997139  53                   push ebx
// 0099713a  57                   push edi
// 0099713b  6a00                 push 0
// 0099713d  6a00                 push 0
// 0099713f  56                   push esi
// 00997140  50                   push eax
// 00997141  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00997145  51                   push ecx
// 00997146  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0099714a  52                   push edx
// 0099714b  50                   push eax
// 0099714c  51                   push ecx
// 0099714d  ff15b420b200         call dword ptr [0xb220b4]
// 00997153  85c0                 test eax, eax
// 00997155  7408                 je 0x99715f
// 00997157  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 0099715f  8b442440             mov eax, dword ptr [esp + 0x40]
// 00997163  85c0                 test eax, eax
// 00997165  7408                 je 0x99716f
// 00997167  50                   push eax
// 00997168  55                   push ebp
// 00997169  ff156021b200         call dword ptr [0xb22160]
// 0099716f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00997173  8b1d6c21b200         mov ebx, dword ptr [0xb2216c]
// 00997179  55                   push ebp
// 0099717a  ffd3                 call ebx
// 0099717c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00997180  85ed                 test ebp, ebp
// 00997182  7417                 je 0x99719b
// 00997184  8b442418             mov eax, dword ptr [esp + 0x18]
// 00997188  85c0                 test eax, eax
// 0099718a  7408                 je 0x997194
// 0099718c  50                   push eax
// 0099718d  56                   push esi
// 0099718e  ff156021b200         call dword ptr [0xb22160]
// 00997194  55                   push ebp
// 00997195  ff157021b200         call dword ptr [0xb22170]
// 0099719b  85f6                 test esi, esi
// 0099719d  7403                 je 0x9971a2
// 0099719f  56                   push esi
// 009971a0  ffd3                 call ebx
// 009971a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 009971a6  85c0                 test eax, eax
// 009971a8  7407                 je 0x9971b1
// 009971aa  50                   push eax
// 009971ab  ff157021b200         call dword ptr [0xb22170]
// 009971b1  8b542420             mov edx, dword ptr [esp + 0x20]
// 009971b5  52                   push edx
// 009971b6  57                   push edi
// 009971b7  ff15d420b200         call dword ptr [0xb220d4]
// 009971bd  8b442424             mov eax, dword ptr [esp + 0x24]
// 009971c1  50                   push eax
// 009971c2  57                   push edi
// 009971c3  ff15d020b200         call dword ptr [0xb220d0]
// 009971c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009971cd  5e                   pop esi
// 009971ce  5d                   pop ebp
// 009971cf  5f                   pop edi
// 009971d0  5b                   pop ebx
// 009971d1  83c418               add esp, 0x18
// 009971d4  c22c00               ret 0x2c
// 009971d7  5f                   pop edi
// 009971d8  33c0                 xor eax, eax
// 009971da  5b                   pop ebx
// 009971db  83c418               add esp, 0x18
// 009971de  c22c00               ret 0x2c
// library xtp-13.2.1/Source\Common\XTPImageManager.cpp (function ?McTransparentBlt@CXTPImageManager@@ABEHPAUHDC__@@HHHH0HHHHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Common/XTPImageManager.cpp
