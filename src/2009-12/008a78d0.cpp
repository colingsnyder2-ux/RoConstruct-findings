// roc 2009-12 008a78d0  unit: CXTRegistryManager  size: 240 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a78d0
//
// 008a78d0  55                   push ebp
// 008a78d1  8b6c2408             mov ebp, dword ptr [esp + 8]
// 008a78d5  56                   push esi
// 008a78d6  8bf1                 mov esi, ecx
// 008a78d8  85ed                 test ebp, ebp
// 008a78da  7507                 jne 0x8a78e3
// 008a78dc  5e                   pop esi
// 008a78dd  33c0                 xor eax, eax
// 008a78df  5d                   pop ebp
// 008a78e0  c20c00               ret 0xc
// 008a78e3  b91cbbb900           mov ecx, 0xb9bb1c
// 008a78e8  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008a78ee  84c0                 test al, al
// 008a78f0  0f84a8000000         je 0x8a799e
// 008a78f6  8bce                 mov ecx, esi
// 008a78f8  e873feffff           call 0x8a7770
// 008a78fd  85c0                 test eax, eax
// 008a78ff  74db                 je 0x8a78dc
// 008a7901  837c241000           cmp dword ptr [esp + 0x10], 0
// 008a7906  53                   push ebx
// 008a7907  57                   push edi
// 008a7908  8bce                 mov ecx, esi
// 008a790a  752e                 jne 0x8a793a
// 008a790c  8b06                 mov eax, dword ptr [esi]
// 008a790e  8b5004               mov edx, dword ptr [eax + 4]
// 008a7911  6a00                 push 0
// 008a7913  ffd2                 call edx
// 008a7915  8bf8                 mov edi, eax
// 008a7917  85ff                 test edi, edi
// 008a7919  7416                 je 0x8a7931
// 008a791b  55                   push ebp
// 008a791c  57                   push edi
// 008a791d  ff1500b09800         call dword ptr [0x98b000]
// 008a7923  57                   push edi
// 008a7924  894610               mov dword ptr [esi + 0x10], eax
// 008a7927  85c0                 test eax, eax
// 008a7929  7461                 je 0x8a798c
// 008a792b  ff1508b09800         call dword ptr [0x98b008]
// 008a7931  5f                   pop edi
// 008a7932  5b                   pop ebx
// 008a7933  5e                   pop esi
// 008a7934  33c0                 xor eax, eax
// 008a7936  5d                   pop ebp
// 008a7937  c20c00               ret 0xc
// 008a793a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008a793e  681f000200           push 0x2001f
// 008a7943  55                   push ebp
// 008a7944  85db                 test ebx, ebx
// 008a7946  751b                 jne 0x8a7963
// 008a7948  8b06                 mov eax, dword ptr [esi]
// 008a794a  8b5008               mov edx, dword ptr [eax + 8]
// 008a794d  ffd2                 call edx
// 008a794f  8bf8                 mov edi, eax
// 008a7951  85ff                 test edi, edi
// 008a7953  74dc                 je 0x8a7931
// 008a7955  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a7959  50                   push eax
// 008a795a  57                   push edi
// 008a795b  ff1504b09800         call dword ptr [0x98b004]
// 008a7961  ebc0                 jmp 0x8a7923
// 008a7963  8b16                 mov edx, dword ptr [esi]
// 008a7965  8b4208               mov eax, dword ptr [edx + 8]
// 008a7968  ffd0                 call eax
// 008a796a  8bf8                 mov edi, eax
// 008a796c  85ff                 test edi, edi
// 008a796e  74c1                 je 0x8a7931
// 008a7970  53                   push ebx
// 008a7971  ff1518b29800         call dword ptr [0x98b218]
// 008a7977  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008a797b  40                   inc eax
// 008a797c  50                   push eax
// 008a797d  53                   push ebx
// 008a797e  6a01                 push 1
// 008a7980  6a00                 push 0
// 008a7982  51                   push ecx
// 008a7983  57                   push edi
// 008a7984  ff1514b09800         call dword ptr [0x98b014]
// 008a798a  eb97                 jmp 0x8a7923
// 008a798c  ff1508b09800         call dword ptr [0x98b008]
// 008a7992  5f                   pop edi
// 008a7993  5b                   pop ebx
// 008a7994  5e                   pop esi
// 008a7995  b801000000           mov eax, 1
// 008a799a  5d                   pop ebp
// 008a799b  c20c00               ret 0xc
// 008a799e  b91cbbb900           mov ecx, 0xb9bb1c
// 008a79a3  ff1580de9800         call dword ptr [0x98de80]
// 008a79a9  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a79ad  50                   push eax
// 008a79ae  8b442414             mov eax, dword ptr [esp + 0x14]
// 008a79b2  52                   push edx
// 008a79b3  50                   push eax
// 008a79b4  55                   push ebp
// 008a79b5  ff152cb39800         call dword ptr [0x98b32c]
// 008a79bb  5e                   pop esi
// 008a79bc  5d                   pop ebp
// 008a79bd  c20c00               ret 0xc
// copied from an identical function in another client (function ?WriteProfileStringA@CXTRegistryManager@@QAEHPBD00@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTRegistryManager.cpp