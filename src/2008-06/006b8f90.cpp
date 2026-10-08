// from server: 100% by auto
// roc 2008-06 006b8f90  unit: CXTPCommandBar  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b8f90
//
// 006b8f90  83ec18               sub esp, 0x18
// 006b8f93  53                   push ebx
// 006b8f94  57                   push edi
// 006b8f95  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006b8f99  33db                 xor ebx, ebx
// 006b8f9b  895c2414             mov dword ptr [esp + 0x14], ebx
// 006b8f9f  3bfb                 cmp edi, ebx
// 006b8fa1  0f8470020000         je 0x6b9217
// 006b8fa7  395c2438             cmp dword ptr [esp + 0x38], ebx
// 006b8fab  0f8466020000         je 0x6b9217
// 006b8fb1  55                   push ebp
// 006b8fb2  56                   push esi
// 006b8fb3  68ffffff00           push 0xffffff
// 006b8fb8  57                   push edi
// 006b8fb9  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006b8fbd  895c2418             mov dword ptr [esp + 0x18], ebx
// 006b8fc1  895c2420             mov dword ptr [esp + 0x20], ebx
// 006b8fc5  ff1594208000         call dword ptr [0x802094]
// 006b8fcb  53                   push ebx
// 006b8fcc  57                   push edi
// 006b8fcd  89442428             mov dword ptr [esp + 0x28], eax
// 006b8fd1  ff1598208000         call dword ptr [0x802098]
// 006b8fd7  8b35d0208000         mov esi, dword ptr [0x8020d0]
// 006b8fdd  57                   push edi
// 006b8fde  89442428             mov dword ptr [esp + 0x28], eax
// 006b8fe2  ffd6                 call esi
// 006b8fe4  8be8                 mov ebp, eax
// 006b8fe6  3beb                 cmp ebp, ebx
// 006b8fe8  0f8403020000         je 0x6b91f1
// 006b8fee  8b442440             mov eax, dword ptr [esp + 0x40]
// 006b8ff2  50                   push eax
// 006b8ff3  ffd6                 call esi
// 006b8ff5  8bf0                 mov esi, eax
// 006b8ff7  3bf3                 cmp esi, ebx
// 006b8ff9  0f84b4010000         je 0x6b91b3
// 006b8fff  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 006b9003  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 006b9007  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b900b  53                   push ebx
// 006b900c  57                   push edi
// 006b900d  51                   push ecx
// 006b900e  ff159c208000         call dword ptr [0x80209c]
// 006b9014  89442410             mov dword ptr [esp + 0x10], eax
// 006b9018  85c0                 test eax, eax
// 006b901a  0f848f010000         je 0x6b91af
// 006b9020  8bd0                 mov edx, eax
// 006b9022  52                   push edx
// 006b9023  56                   push esi
// 006b9024  ff15b0208000         call dword ptr [0x8020b0]
// 006b902a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006b902e  8b542440             mov edx, dword ptr [esp + 0x40]
// 006b9032  682000cc00           push 0xcc0020
// 006b9037  8944241c             mov dword ptr [esp + 0x1c], eax
// 006b903b  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006b903f  50                   push eax
// 006b9040  51                   push ecx
// 006b9041  52                   push edx
// 006b9042  53                   push ebx
// 006b9043  57                   push edi
// 006b9044  6a00                 push 0
// 006b9046  6a00                 push 0
// 006b9048  56                   push esi
// 006b9049  ff15c4208000         call dword ptr [0x8020c4]
// 006b904f  85c0                 test eax, eax
// 006b9051  0f8458010000         je 0x6b91af
// 006b9057  6a00                 push 0
// 006b9059  6a01                 push 1
// 006b905b  6a01                 push 1
// 006b905d  53                   push ebx
// 006b905e  57                   push edi
// 006b905f  ff1534218000         call dword ptr [0x802134]
// 006b9065  89442414             mov dword ptr [esp + 0x14], eax
// 006b9069  85c0                 test eax, eax
// 006b906b  0f843e010000         je 0x6b91af
// 006b9071  50                   push eax
// 006b9072  55                   push ebp
// 006b9073  ff15b0208000         call dword ptr [0x8020b0]
// 006b9079  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 006b907d  51                   push ecx
// 006b907e  56                   push esi
// 006b907f  89442448             mov dword ptr [esp + 0x48], eax
// 006b9083  ff1594208000         call dword ptr [0x802094]
// 006b9089  682000cc00           push 0xcc0020
// 006b908e  6a00                 push 0
// 006b9090  6a00                 push 0
// 006b9092  56                   push esi
// 006b9093  53                   push ebx
// 006b9094  57                   push edi
// 006b9095  6a00                 push 0
// 006b9097  6a00                 push 0
// 006b9099  55                   push ebp
// 006b909a  ff15c4208000         call dword ptr [0x8020c4]
// 006b90a0  85c0                 test eax, eax
// 006b90a2  0f84f7000000         je 0x6b919f
// 006b90a8  837c245400           cmp dword ptr [esp + 0x54], 0
// 006b90ad  7434                 je 0x6b90e3
// 006b90af  6a00                 push 0
// 006b90b1  56                   push esi
// 006b90b2  ff1594208000         call dword ptr [0x802094]
// 006b90b8  68ffffff00           push 0xffffff
// 006b90bd  56                   push esi
// 006b90be  ff1598208000         call dword ptr [0x802098]
// 006b90c4  68c6008800           push 0x8800c6
// 006b90c9  6a00                 push 0
// 006b90cb  6a00                 push 0
// 006b90cd  55                   push ebp
// 006b90ce  53                   push ebx
// 006b90cf  57                   push edi
// 006b90d0  6a00                 push 0
// 006b90d2  6a00                 push 0
// 006b90d4  56                   push esi
// 006b90d5  ff15c4208000         call dword ptr [0x8020c4]
// 006b90db  85c0                 test eax, eax
// 006b90dd  0f84bc000000         je 0x6b919f
// 006b90e3  8b442438             mov eax, dword ptr [esp + 0x38]
// 006b90e7  3bc7                 cmp eax, edi
// 006b90e9  7552                 jne 0x6b913d
// 006b90eb  395c243c             cmp dword ptr [esp + 0x3c], ebx
// 006b90ef  754c                 jne 0x6b913d
// 006b90f1  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b90f5  8b442430             mov eax, dword ptr [esp + 0x30]
// 006b90f9  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b90fd  68c6008800           push 0x8800c6
// 006b9102  6a00                 push 0
// 006b9104  6a00                 push 0
// 006b9106  55                   push ebp
// 006b9107  53                   push ebx
// 006b9108  57                   push edi
// 006b9109  52                   push edx
// 006b910a  50                   push eax
// 006b910b  51                   push ecx
// 006b910c  ff15c4208000         call dword ptr [0x8020c4]
// 006b9112  85c0                 test eax, eax
// 006b9114  0f8485000000         je 0x6b919f
// 006b911a  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b911e  8b442430             mov eax, dword ptr [esp + 0x30]
// 006b9122  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006b9126  688600ee00           push 0xee0086
// 006b912b  6a00                 push 0
// 006b912d  6a00                 push 0
// 006b912f  56                   push esi
// 006b9130  53                   push ebx
// 006b9131  57                   push edi
// 006b9132  52                   push edx
// 006b9133  50                   push eax
// 006b9134  51                   push ecx
// 006b9135  ff15c4208000         call dword ptr [0x8020c4]
// 006b913b  eb56                 jmp 0x6b9193
// 006b913d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006b9141  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006b9145  68c6008800           push 0x8800c6
// 006b914a  53                   push ebx
// 006b914b  57                   push edi
// 006b914c  6a00                 push 0
// 006b914e  6a00                 push 0
// 006b9150  55                   push ebp
// 006b9151  52                   push edx
// 006b9152  8b542448             mov edx, dword ptr [esp + 0x48]
// 006b9156  50                   push eax
// 006b9157  8b442454             mov eax, dword ptr [esp + 0x54]
// 006b915b  50                   push eax
// 006b915c  51                   push ecx
// 006b915d  52                   push edx
// 006b915e  ff15c0208000         call dword ptr [0x8020c0]
// 006b9164  85c0                 test eax, eax
// 006b9166  7437                 je 0x6b919f
// 006b9168  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006b916c  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006b9170  8b542434             mov edx, dword ptr [esp + 0x34]
// 006b9174  688600ee00           push 0xee0086
// 006b9179  53                   push ebx
// 006b917a  57                   push edi
// 006b917b  6a00                 push 0
// 006b917d  6a00                 push 0
// 006b917f  56                   push esi
// 006b9180  50                   push eax
// 006b9181  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006b9185  51                   push ecx
// 006b9186  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 006b918a  52                   push edx
// 006b918b  50                   push eax
// 006b918c  51                   push ecx
// 006b918d  ff15c0208000         call dword ptr [0x8020c0]
// 006b9193  85c0                 test eax, eax
// 006b9195  7408                 je 0x6b919f
// 006b9197  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006b919f  8b442440             mov eax, dword ptr [esp + 0x40]
// 006b91a3  85c0                 test eax, eax
// 006b91a5  7408                 je 0x6b91af
// 006b91a7  50                   push eax
// 006b91a8  55                   push ebp
// 006b91a9  ff15b0208000         call dword ptr [0x8020b0]
// 006b91af  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 006b91b3  8b1da0208000         mov ebx, dword ptr [0x8020a0]
// 006b91b9  55                   push ebp
// 006b91ba  ffd3                 call ebx
// 006b91bc  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006b91c0  85ed                 test ebp, ebp
// 006b91c2  7417                 je 0x6b91db
// 006b91c4  8b442418             mov eax, dword ptr [esp + 0x18]
// 006b91c8  85c0                 test eax, eax
// 006b91ca  7408                 je 0x6b91d4
// 006b91cc  50                   push eax
// 006b91cd  56                   push esi
// 006b91ce  ff15b0208000         call dword ptr [0x8020b0]
// 006b91d4  55                   push ebp
// 006b91d5  ff1550218000         call dword ptr [0x802150]
// 006b91db  85f6                 test esi, esi
// 006b91dd  7403                 je 0x6b91e2
// 006b91df  56                   push esi
// 006b91e0  ffd3                 call ebx
// 006b91e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 006b91e6  85c0                 test eax, eax
// 006b91e8  7407                 je 0x6b91f1
// 006b91ea  50                   push eax
// 006b91eb  ff1550218000         call dword ptr [0x802150]
// 006b91f1  8b542420             mov edx, dword ptr [esp + 0x20]
// 006b91f5  52                   push edx
// 006b91f6  57                   push edi
// 006b91f7  ff1594208000         call dword ptr [0x802094]
// 006b91fd  8b442424             mov eax, dword ptr [esp + 0x24]
// 006b9201  50                   push eax
// 006b9202  57                   push edi
// 006b9203  ff1598208000         call dword ptr [0x802098]
// 006b9209  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006b920d  5e                   pop esi
// 006b920e  5d                   pop ebp
// 006b920f  5f                   pop edi
// 006b9210  5b                   pop ebx
// 006b9211  83c418               add esp, 0x18
// 006b9214  c22c00               ret 0x2c
// 006b9217  5f                   pop edi
// 006b9218  33c0                 xor eax, eax
// 006b921a  5b                   pop ebx
// 006b921b  83c418               add esp, 0x18
// 006b921e  c22c00               ret 0x2c
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?McTransparentBlt@CXTPImageManager@@ABEHPAUHDC__@@HHHH0HHHHI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
