// from server: 100% by auto
// roc 2008-06 0052afa0  unit: seg_00520000  size: 403 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052afa0
//
// 0052afa0  53                   push ebx
// 0052afa1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0052afa5  8b5304               mov edx, dword ptr [ebx + 4]
// 0052afa8  8b4244               mov eax, dword ptr [edx + 0x44]
// 0052afab  55                   push ebp
// 0052afac  56                   push esi
// 0052afad  57                   push edi
// 0052afae  33f6                 xor esi, esi
// 0052afb0  33ff                 xor edi, edi
// 0052afb2  89542414             mov dword ptr [esp + 0x14], edx
// 0052afb6  85c0                 test eax, eax
// 0052afb8  7425                 je 0x52afdf
// 0052afba  8d9b00000000         lea ebx, [ebx]
// 0052afc0  833800               cmp dword ptr [eax], 0
// 0052afc3  7513                 jne 0x52afd8
// 0052afc5  8b4808               mov ecx, dword ptr [eax + 8]
// 0052afc8  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0052afcb  0fafe9               imul ebp, ecx
// 0052afce  03f5                 add esi, ebp
// 0052afd0  8b6804               mov ebp, dword ptr [eax + 4]
// 0052afd3  0fafe9               imul ebp, ecx
// 0052afd6  03fd                 add edi, ebp
// 0052afd8  8b4024               mov eax, dword ptr [eax + 0x24]
// 0052afdb  85c0                 test eax, eax
// 0052afdd  75e1                 jne 0x52afc0
// 0052afdf  8b4248               mov eax, dword ptr [edx + 0x48]
// 0052afe2  85c0                 test eax, eax
// 0052afe4  7425                 je 0x52b00b
// 0052afe6  833800               cmp dword ptr [eax], 0
// 0052afe9  7519                 jne 0x52b004
// 0052afeb  8b4808               mov ecx, dword ptr [eax + 8]
// 0052afee  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0052aff1  0fafe9               imul ebp, ecx
// 0052aff4  c1e507               shl ebp, 7
// 0052aff7  03f5                 add esi, ebp
// 0052aff9  8b6804               mov ebp, dword ptr [eax + 4]
// 0052affc  0fafe9               imul ebp, ecx
// 0052afff  c1e507               shl ebp, 7
// 0052b002  03fd                 add edi, ebp
// 0052b004  8b4024               mov eax, dword ptr [eax + 0x24]
// 0052b007  85c0                 test eax, eax
// 0052b009  75db                 jne 0x52afe6
// 0052b00b  85f6                 test esi, esi
// 0052b00d  0f8e1b010000         jle 0x52b12e
// 0052b013  8b424c               mov eax, dword ptr [edx + 0x4c]
// 0052b016  50                   push eax
// 0052b017  57                   push edi
// 0052b018  56                   push esi
// 0052b019  53                   push ebx
// 0052b01a  e861570000           call 0x530780
// 0052b01f  83c410               add esp, 0x10
// 0052b022  3bc7                 cmp eax, edi
// 0052b024  7c07                 jl 0x52b02d
// 0052b026  bd00ca9a3b           mov ebp, 0x3b9aca00
// 0052b02b  eb0e                 jmp 0x52b03b
// 0052b02d  99                   cdq 
// 0052b02e  f7fe                 idiv esi
// 0052b030  8be8                 mov ebp, eax
// 0052b032  85ed                 test ebp, ebp
// 0052b034  7f05                 jg 0x52b03b
// 0052b036  bd01000000           mov ebp, 1
// 0052b03b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052b03f  8b7144               mov esi, dword ptr [ecx + 0x44]
// 0052b042  85f6                 test esi, esi
// 0052b044  746b                 je 0x52b0b1
// 0052b046  833e00               cmp dword ptr [esi], 0
// 0052b049  755f                 jne 0x52b0aa
// 0052b04b  8b7e04               mov edi, dword ptr [esi + 4]
// 0052b04e  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052b051  33d2                 xor edx, edx
// 0052b053  8d47ff               lea eax, [edi - 1]
// 0052b056  f7f1                 div ecx
// 0052b058  40                   inc eax
// 0052b059  3bc5                 cmp eax, ebp
// 0052b05b  7f05                 jg 0x52b062
// 0052b05d  897e10               mov dword ptr [esi + 0x10], edi
// 0052b060  eb1e                 jmp 0x52b080
// 0052b062  8b5608               mov edx, dword ptr [esi + 8]
// 0052b065  0fafcd               imul ecx, ebp
// 0052b068  0fafd7               imul edx, edi
// 0052b06b  52                   push edx
// 0052b06c  8d4628               lea eax, [esi + 0x28]
// 0052b06f  50                   push eax
// 0052b070  53                   push ebx
// 0052b071  894e10               mov dword ptr [esi + 0x10], ecx
// 0052b074  e807580000           call 0x530880
// 0052b079  83c40c               add esp, 0xc
// 0052b07c  c6462201             mov byte ptr [esi + 0x22], 1
// 0052b080  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0052b083  8b5608               mov edx, dword ptr [esi + 8]
// 0052b086  51                   push ecx
// 0052b087  52                   push edx
// 0052b088  6a01                 push 1
// 0052b08a  53                   push ebx
// 0052b08b  e8d0fcffff           call 0x52ad60
// 0052b090  8906                 mov dword ptr [esi], eax
// 0052b092  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052b096  8b4850               mov ecx, dword ptr [eax + 0x50]
// 0052b099  83c410               add esp, 0x10
// 0052b09c  33c0                 xor eax, eax
// 0052b09e  894e14               mov dword ptr [esi + 0x14], ecx
// 0052b0a1  894618               mov dword ptr [esi + 0x18], eax
// 0052b0a4  89461c               mov dword ptr [esi + 0x1c], eax
// 0052b0a7  884621               mov byte ptr [esi + 0x21], al
// 0052b0aa  8b7624               mov esi, dword ptr [esi + 0x24]
// 0052b0ad  85f6                 test esi, esi
// 0052b0af  7595                 jne 0x52b046
// 0052b0b1  8b542414             mov edx, dword ptr [esp + 0x14]
// 0052b0b5  8b7248               mov esi, dword ptr [edx + 0x48]
// 0052b0b8  85f6                 test esi, esi
// 0052b0ba  7472                 je 0x52b12e
// 0052b0bc  8d642400             lea esp, [esp]
// 0052b0c0  833e00               cmp dword ptr [esi], 0
// 0052b0c3  7562                 jne 0x52b127
// 0052b0c5  8b7e04               mov edi, dword ptr [esi + 4]
// 0052b0c8  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0052b0cb  33d2                 xor edx, edx
// 0052b0cd  8d47ff               lea eax, [edi - 1]
// 0052b0d0  f7f1                 div ecx
// 0052b0d2  40                   inc eax
// 0052b0d3  3bc5                 cmp eax, ebp
// 0052b0d5  7f05                 jg 0x52b0dc
// 0052b0d7  897e10               mov dword ptr [esi + 0x10], edi
// 0052b0da  eb21                 jmp 0x52b0fd
// 0052b0dc  8b4608               mov eax, dword ptr [esi + 8]
// 0052b0df  0fafcd               imul ecx, ebp
// 0052b0e2  0fafc7               imul eax, edi
// 0052b0e5  c1e007               shl eax, 7
// 0052b0e8  894e10               mov dword ptr [esi + 0x10], ecx
// 0052b0eb  50                   push eax
// 0052b0ec  8d4e28               lea ecx, [esi + 0x28]
// 0052b0ef  51                   push ecx
// 0052b0f0  53                   push ebx
// 0052b0f1  e88a570000           call 0x530880
// 0052b0f6  83c40c               add esp, 0xc
// 0052b0f9  c6462201             mov byte ptr [esi + 0x22], 1
// 0052b0fd  8b5610               mov edx, dword ptr [esi + 0x10]
// 0052b100  8b4608               mov eax, dword ptr [esi + 8]
// 0052b103  52                   push edx
// 0052b104  50                   push eax
// 0052b105  6a01                 push 1
// 0052b107  53                   push ebx
// 0052b108  e803fdffff           call 0x52ae10
// 0052b10d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052b111  8906                 mov dword ptr [esi], eax
// 0052b113  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0052b116  83c410               add esp, 0x10
// 0052b119  33c0                 xor eax, eax
// 0052b11b  895614               mov dword ptr [esi + 0x14], edx
// 0052b11e  894618               mov dword ptr [esi + 0x18], eax
// 0052b121  89461c               mov dword ptr [esi + 0x1c], eax
// 0052b124  884621               mov byte ptr [esi + 0x21], al
// 0052b127  8b7624               mov esi, dword ptr [esi + 0x24]
// 0052b12a  85f6                 test esi, esi
// 0052b12c  7592                 jne 0x52b0c0
// 0052b12e  5f                   pop edi
// 0052b12f  5e                   pop esi
// 0052b130  5d                   pop ebp
// 0052b131  5b                   pop ebx
// 0052b132  c3                   ret 
// library jpeg-6b/jmemmgr.c (function _realize_virt_arrays)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jmemmgr.c
