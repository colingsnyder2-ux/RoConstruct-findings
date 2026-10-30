// roc 2012-06 00a310d0  unit: CXTRegistryManager  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a310d0
//
// 00a310d0  55                   push ebp
// 00a310d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 00a310d5  56                   push esi
// 00a310d6  8bf1                 mov esi, ecx
// 00a310d8  85ed                 test ebp, ebp
// 00a310da  7507                 jne 0xa310e3
// 00a310dc  5e                   pop esi
// 00a310dd  33c0                 xor eax, eax
// 00a310df  5d                   pop ebp
// 00a310e0  c20c00               ret 0xc
// 00a310e3  b9a8a0e500           mov ecx, 0xe5a0a8
// 00a310e8  ff156046b200         call dword ptr [0xb24660]
// 00a310ee  84c0                 test al, al
// 00a310f0  0f84a8000000         je 0xa3119e
// 00a310f6  8bce                 mov ecx, esi
// 00a310f8  e873feffff           call 0xa30f70
// 00a310fd  85c0                 test eax, eax
// 00a310ff  74db                 je 0xa310dc
// 00a31101  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a31106  53                   push ebx
// 00a31107  57                   push edi
// 00a31108  8bce                 mov ecx, esi
// 00a3110a  752e                 jne 0xa3113a
// 00a3110c  8b06                 mov eax, dword ptr [esi]
// 00a3110e  8b5004               mov edx, dword ptr [eax + 4]
// 00a31111  6a00                 push 0
// 00a31113  ffd2                 call edx
// 00a31115  8bf8                 mov edi, eax
// 00a31117  85ff                 test edi, edi
// 00a31119  7416                 je 0xa31131
// 00a3111b  55                   push ebp
// 00a3111c  57                   push edi
// 00a3111d  ff150020b200         call dword ptr [0xb22000]
// 00a31123  57                   push edi
// 00a31124  894610               mov dword ptr [esi + 0x10], eax
// 00a31127  85c0                 test eax, eax
// 00a31129  7461                 je 0xa3118c
// 00a3112b  ff150420b200         call dword ptr [0xb22004]
// 00a31131  5f                   pop edi
// 00a31132  5b                   pop ebx
// 00a31133  5e                   pop esi
// 00a31134  33c0                 xor eax, eax
// 00a31136  5d                   pop ebp
// 00a31137  c20c00               ret 0xc
// 00a3113a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a3113e  681f000200           push 0x2001f
// 00a31143  55                   push ebp
// 00a31144  85db                 test ebx, ebx
// 00a31146  751b                 jne 0xa31163
// 00a31148  8b06                 mov eax, dword ptr [esi]
// 00a3114a  8b5008               mov edx, dword ptr [eax + 8]
// 00a3114d  ffd2                 call edx
// 00a3114f  8bf8                 mov edi, eax
// 00a31151  85ff                 test edi, edi
// 00a31153  74dc                 je 0xa31131
// 00a31155  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a31159  50                   push eax
// 00a3115a  57                   push edi
// 00a3115b  ff155020b200         call dword ptr [0xb22050]
// 00a31161  ebc0                 jmp 0xa31123
// 00a31163  8b16                 mov edx, dword ptr [esi]
// 00a31165  8b4208               mov eax, dword ptr [edx + 8]
// 00a31168  ffd0                 call eax
// 00a3116a  8bf8                 mov edi, eax
// 00a3116c  85ff                 test edi, edi
// 00a3116e  74c1                 je 0xa31131
// 00a31170  53                   push ebx
// 00a31171  ff15a821b200         call dword ptr [0xb221a8]
// 00a31177  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3117b  40                   inc eax
// 00a3117c  50                   push eax
// 00a3117d  53                   push ebx
// 00a3117e  6a01                 push 1
// 00a31180  6a00                 push 0
// 00a31182  51                   push ecx
// 00a31183  57                   push edi
// 00a31184  ff151020b200         call dword ptr [0xb22010]
// 00a3118a  eb97                 jmp 0xa31123
// 00a3118c  ff150420b200         call dword ptr [0xb22004]
// 00a31192  5f                   pop edi
// 00a31193  5b                   pop ebx
// 00a31194  5e                   pop esi
// 00a31195  b801000000           mov eax, 1
// 00a3119a  5d                   pop ebp
// 00a3119b  c20c00               ret 0xc
// 00a3119e  b9a8a0e500           mov ecx, 0xe5a0a8
// 00a311a3  ff159847b200         call dword ptr [0xb24798]
// 00a311a9  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a311ad  50                   push eax
// 00a311ae  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a311b2  52                   push edx
// 00a311b3  50                   push eax
// 00a311b4  55                   push ebp
// 00a311b5  ff155823b200         call dword ptr [0xb22358]
// 00a311bb  5e                   pop esi
// 00a311bc  5d                   pop ebp
// 00a311bd  c20c00               ret 0xc
// copied from an identical function in another client (function ?WriteProfileStringA@CXTRegistryManager@@QAEHPBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp