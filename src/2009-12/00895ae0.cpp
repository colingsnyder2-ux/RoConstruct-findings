// roc 2009-12 00895ae0  unit: CXTPRibbonBar::CControlQuickAccessMorePopup  size: 742 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895ae0
//
// 00895ae0  6aff                 push -1
// 00895ae2  6804179600           push 0x961704
// 00895ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00895aed  50                   push eax
// 00895aee  83ec08               sub esp, 8
// 00895af1  53                   push ebx
// 00895af2  55                   push ebp
// 00895af3  56                   push esi
// 00895af4  57                   push edi
// 00895af5  a10052b600           mov eax, dword ptr [0xb65200]
// 00895afa  33c4                 xor eax, esp
// 00895afc  50                   push eax
// 00895afd  8d44241c             lea eax, [esp + 0x1c]
// 00895b01  64a300000000         mov dword ptr fs:[0], eax
// 00895b07  8bf1                 mov esi, ecx
// 00895b09  89742414             mov dword ptr [esp + 0x14], esi
// 00895b0d  e85ee0ffff           call 0x893b70
// 00895b12  8d9ec4010000         lea ebx, [esi + 0x1c4]
// 00895b18  33ff                 xor edi, edi
// 00895b1a  8bcb                 mov ecx, ebx
// 00895b1c  897c2424             mov dword ptr [esp + 0x24], edi
// 00895b20  e8fb8e0500           call 0x8eea20
// 00895b25  8d8e94020000         lea ecx, [esi + 0x294]
// 00895b2b  c7063c4ea000         mov dword ptr [esi], 0xa04e3c
// 00895b31  c746542c4ea000       mov dword ptr [esi + 0x54], 0xa04e2c
// 00895b38  c7465ccc4da000       mov dword ptr [esi + 0x5c], 0xa04dcc
// 00895b3f  c703b84da000         mov dword ptr [ebx], 0xa04db8
// 00895b45  ff1574de9800         call dword ptr [0x98de74]
// 00895b4b  bb01000000           mov ebx, 1
// 00895b50  6a44                 push 0x44
// 00895b52  885c2428             mov byte ptr [esp + 0x28], bl
// 00895b56  e805ddf5ff           call 0x7f3860
// 00895b5b  83c404               add esp, 4
// 00895b5e  89442418             mov dword ptr [esp + 0x18], eax
// 00895b62  c644242402           mov byte ptr [esp + 0x24], 2
// 00895b67  3bc7                 cmp eax, edi
// 00895b69  7409                 je 0x895b74
// 00895b6b  8bc8                 mov ecx, eax
// 00895b6d  e85ea60500           call 0x8f01d0
// 00895b72  eb02                 jmp 0x895b76
// 00895b74  33c0                 xor eax, eax
// 00895b76  56                   push esi
// 00895b77  8bc8                 mov ecx, eax
// 00895b79  885c2428             mov byte ptr [esp + 0x28], bl
// 00895b7d  898664020000         mov dword ptr [esi + 0x264], eax
// 00895b83  e838f7faff           call 0x8452c0
// 00895b88  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00895b8e  e849e2f5ff           call 0x7f3ddc
// 00895b93  6a44                 push 0x44
// 00895b95  e8c6dcf5ff           call 0x7f3860
// 00895b9a  83c404               add esp, 4
// 00895b9d  89442418             mov dword ptr [esp + 0x18], eax
// 00895ba1  c644242403           mov byte ptr [esp + 0x24], 3
// 00895ba6  3bc7                 cmp eax, edi
// 00895ba8  7409                 je 0x895bb3
// 00895baa  8bc8                 mov ecx, eax
// 00895bac  e8dfa40500           call 0x8f0090
// 00895bb1  eb02                 jmp 0x895bb5
// 00895bb3  33c0                 xor eax, eax
// 00895bb5  56                   push esi
// 00895bb6  8bc8                 mov ecx, eax
// 00895bb8  885c2428             mov byte ptr [esp + 0x28], bl
// 00895bbc  8986fc000000         mov dword ptr [esi + 0xfc], eax
// 00895bc2  e8f9f6faff           call 0x8452c0
// 00895bc7  8b2d9cca9800         mov ebp, dword ptr [0x98ca9c]
// 00895bcd  8d86dc010000         lea eax, [esi + 0x1dc]
// 00895bd3  50                   push eax
// 00895bd4  899e90020000         mov dword ptr [esi + 0x290], ebx
// 00895bda  89bed8010000         mov dword ptr [esi + 0x1d8], edi
// 00895be0  89bef0000000         mov dword ptr [esi + 0xf0], edi
// 00895be6  ffd5                 call ebp
// 00895be8  8d8eec010000         lea ecx, [esi + 0x1ec]
// 00895bee  51                   push ecx
// 00895bef  ffd5                 call ebp
// 00895bf1  8d96fc010000         lea edx, [esi + 0x1fc]
// 00895bf7  52                   push edx
// 00895bf8  ffd5                 call ebp
// 00895bfa  8d860c020000         lea eax, [esi + 0x20c]
// 00895c00  50                   push eax
// 00895c01  ffd5                 call ebp
// 00895c03  8d8e1c020000         lea ecx, [esi + 0x21c]
// 00895c09  51                   push ecx
// 00895c0a  ffd5                 call ebp
// 00895c0c  56                   push esi
// 00895c0d  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00895c13  89be78020000         mov dword ptr [esi + 0x278], edi
// 00895c19  e802930500           call 0x8eef20
// 00895c1e  6884010000           push 0x184
// 00895c23  e838dcf5ff           call 0x7f3860
// 00895c28  83c404               add esp, 4
// 00895c2b  89442418             mov dword ptr [esp + 0x18], eax
// 00895c2f  c644242404           mov byte ptr [esp + 0x24], 4
// 00895c34  3bc7                 cmp eax, edi
// 00895c36  7409                 je 0x895c41
// 00895c38  8bc8                 mov ecx, eax
// 00895c3a  e8b1eeffff           call 0x894af0
// 00895c3f  eb02                 jmp 0x895c43
// 00895c41  33c0                 xor eax, eax
// 00895c43  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00895c49  53                   push ebx
// 00895c4a  6aff                 push -1
// 00895c4c  57                   push edi
// 00895c4d  6883250000           push 0x2583
// 00895c52  50                   push eax
// 00895c53  885c2438             mov byte ptr [esp + 0x38], bl
// 00895c57  e89423fbff           call 0x847ff0
// 00895c5c  6884010000           push 0x184
// 00895c61  89866c020000         mov dword ptr [esi + 0x26c], eax
// 00895c67  e8f4dbf5ff           call 0x7f3860
// 00895c6c  83c404               add esp, 4
// 00895c6f  89442418             mov dword ptr [esp + 0x18], eax
// 00895c73  c644242405           mov byte ptr [esp + 0x24], 5
// 00895c78  3bc7                 cmp eax, edi
// 00895c7a  7409                 je 0x895c85
// 00895c7c  8bc8                 mov ecx, eax
// 00895c7e  e83defffff           call 0x894bc0
// 00895c83  eb02                 jmp 0x895c87
// 00895c85  33c0                 xor eax, eax
// 00895c87  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00895c8d  53                   push ebx
// 00895c8e  6aff                 push -1
// 00895c90  57                   push edi
// 00895c91  688b250000           push 0x258b
// 00895c96  50                   push eax
// 00895c97  885c2438             mov byte ptr [esp + 0x38], bl
// 00895c9b  e85023fbff           call 0x847ff0
// 00895ca0  6818020000           push 0x218
// 00895ca5  898670020000         mov dword ptr [esi + 0x270], eax
// 00895cab  e8b0dbf5ff           call 0x7f3860
// 00895cb0  83c404               add esp, 4
// 00895cb3  89442418             mov dword ptr [esp + 0x18], eax
// 00895cb7  c644242406           mov byte ptr [esp + 0x24], 6
// 00895cbc  3bc7                 cmp eax, edi
// 00895cbe  7409                 je 0x895cc9
// 00895cc0  8bc8                 mov ecx, eax
// 00895cc2  e8d9a70500           call 0x8f04a0
// 00895cc7  eb02                 jmp 0x895ccb
// 00895cc9  33c0                 xor eax, eax
// 00895ccb  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00895cd1  53                   push ebx
// 00895cd2  6aff                 push -1
// 00895cd4  57                   push edi
// 00895cd5  6884250000           push 0x2584
// 00895cda  50                   push eax
// 00895cdb  885c2438             mov byte ptr [esp + 0x38], bl
// 00895cdf  e80c23fbff           call 0x847ff0
// 00895ce4  6a14                 push 0x14
// 00895ce6  898668020000         mov dword ptr [esi + 0x268], eax
// 00895cec  c786f800000003000000 mov dword ptr [esi + 0xf8], 3
// 00895cf6  c786ec00000040040000 mov dword ptr [esi + 0xec], 0x440
// 00895d00  89be38010000         mov dword ptr [esi + 0x138], edi
// 00895d06  899e40020000         mov dword ptr [esi + 0x240], ebx
// 00895d0c  899e44020000         mov dword ptr [esi + 0x244], ebx
// 00895d12  c7867c020000fa000000 mov dword ptr [esi + 0x27c], 0xfa
// 00895d1c  89bec0000000         mov dword ptr [esi + 0xc0], edi
// 00895d22  89be8c020000         mov dword ptr [esi + 0x28c], edi
// 00895d28  89be80020000         mov dword ptr [esi + 0x280], edi
// 00895d2e  89be74020000         mov dword ptr [esi + 0x274], edi
// 00895d34  899e3c020000         mov dword ptr [esi + 0x23c], ebx
// 00895d3a  89be58020000         mov dword ptr [esi + 0x258], edi
// 00895d40  89be48020000         mov dword ptr [esi + 0x248], edi
// 00895d46  899e4c020000         mov dword ptr [esi + 0x24c], ebx
// 00895d4c  e80fdbf5ff           call 0x7f3860
// 00895d51  83c404               add esp, 4
// 00895d54  89442418             mov dword ptr [esp + 0x18], eax
// 00895d58  c644242407           mov byte ptr [esp + 0x24], 7
// 00895d5d  3bc7                 cmp eax, edi
// 00895d5f  7409                 je 0x895d6a
// 00895d61  8bc8                 mov ecx, eax
// 00895d63  e8e84c0500           call 0x8eaa50
// 00895d68  eb02                 jmp 0x895d6c
// 00895d6a  33c0                 xor eax, eax
// 00895d6c  53                   push ebx
// 00895d6d  8bce                 mov ecx, esi
// 00895d6f  885c2428             mov byte ptr [esp + 0x28], bl
// 00895d73  898684020000         mov dword ptr [esi + 0x284], eax
// 00895d79  899e6c010000         mov dword ptr [esi + 0x16c], ebx
// 00895d7f  89be50020000         mov dword ptr [esi + 0x250], edi
// 00895d85  899e54020000         mov dword ptr [esi + 0x254], ebx
// 00895d8b  89be88020000         mov dword ptr [esi + 0x288], edi
// 00895d91  89be5c020000         mov dword ptr [esi + 0x25c], edi
// 00895d97  89bec8010000         mov dword ptr [esi + 0x1c8], edi
// 00895d9d  899e60020000         mov dword ptr [esi + 0x260], ebx
// 00895da3  e8c8e5f6ff           call 0x804370
// 00895da8  53                   push ebx
// 00895da9  8bce                 mov ecx, esi
// 00895dab  e890e5f6ff           call 0x804340
// 00895db0  8bc6                 mov eax, esi
// 00895db2  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00895db6  64890d00000000       mov dword ptr fs:[0], ecx
// 00895dbd  59                   pop ecx
// 00895dbe  5f                   pop edi
// 00895dbf  5e                   pop esi
// 00895dc0  5d                   pop ebp
// 00895dc1  5b                   pop ebx
// 00895dc2  83c414               add esp, 0x14
// 00895dc5  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonBar@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp