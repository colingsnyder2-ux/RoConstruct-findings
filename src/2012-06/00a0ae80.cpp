// roc 2012-06 00a0ae80  unit: CXTPControlGalleryOffice2007Theme  size: 3974 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a0ae80
//
// 00a0ae80  81ecec000000         sub esp, 0xec
// 00a0ae86  53                   push ebx
// 00a0ae87  55                   push ebp
// 00a0ae88  56                   push esi
// 00a0ae89  8bb42400010000       mov esi, dword ptr [esp + 0x100]
// 00a0ae90  57                   push edi
// 00a0ae91  8bf9                 mov edi, ecx
// 00a0ae93  8bce                 mov ecx, esi
// 00a0ae95  897c241c             mov dword ptr [esp + 0x1c], edi
// 00a0ae99  e842160600           call 0xa6c4e0
// 00a0ae9e  83f805               cmp eax, 5
// 00a0aea1  7422                 je 0xa0aec5
// 00a0aea3  83f806               cmp eax, 6
// 00a0aea6  741d                 je 0xa0aec5
// 00a0aea8  8b842400010000       mov eax, dword ptr [esp + 0x100]
// 00a0aeaf  56                   push esi
// 00a0aeb0  50                   push eax
// 00a0aeb1  8bcf                 mov ecx, edi
// 00a0aeb3  e8f80affff           call 0x9fb9b0
// 00a0aeb8  5f                   pop edi
// 00a0aeb9  5e                   pop esi
// 00a0aeba  5d                   pop ebp
// 00a0aebb  5b                   pop ebx
// 00a0aebc  81c4ec000000         add esp, 0xec
// 00a0aec2  c20800               ret 8
// 00a0aec5  33c9                 xor ecx, ecx
// 00a0aec7  83f805               cmp eax, 5
// 00a0aeca  8b4660               mov eax, dword ptr [esi + 0x60]
// 00a0aecd  0f94c1               sete cl
// 00a0aed0  33db                 xor ebx, ebx
// 00a0aed2  8be9                 mov ebp, ecx
// 00a0aed4  896c2410             mov dword ptr [esp + 0x10], ebp
// 00a0aed8  3bc3                 cmp eax, ebx
// 00a0aeda  7411                 je 0xa0aeed
// 00a0aedc  8b5658               mov edx, dword ptr [esi + 0x58]
// 00a0aedf  89542420             mov dword ptr [esp + 0x20], edx
// 00a0aee3  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 00a0aeeb  eb0f                 jmp 0xa0aefc
// 00a0aeed  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a0aef0  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00a0aef8  89442434             mov dword ptr [esp + 0x34], eax
// 00a0aefc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a0aeff  2b4e1c               sub ecx, dword ptr [esi + 0x1c]
// 00a0af02  85c9                 test ecx, ecx
// 00a0af04  0f8eef0e0000         jle 0xa0bdf9
// 00a0af0a  8b5608               mov edx, dword ptr [esi + 8]
// 00a0af0d  2b560c               sub edx, dword ptr [esi + 0xc]
// 00a0af10  2b5604               sub edx, dword ptr [esi + 4]
// 00a0af13  42                   inc edx
// 00a0af14  85d2                 test edx, edx
// 00a0af16  7e14                 jle 0xa0af2c
// 00a0af18  8b06                 mov eax, dword ptr [esi]
// 00a0af1a  8b5004               mov edx, dword ptr [eax + 4]
// 00a0af1d  8bce                 mov ecx, esi
// 00a0af1f  ffd2                 call edx
// 00a0af21  85c0                 test eax, eax
// 00a0af23  7407                 je 0xa0af2c
// 00a0af25  bf01000000           mov edi, 1
// 00a0af2a  eb02                 jmp 0xa0af2e
// 00a0af2c  33ff                 xor edi, edi
// 00a0af2e  8b5634               mov edx, dword ptr [esi + 0x34]
// 00a0af31  8b4638               mov eax, dword ptr [esi + 0x38]
// 00a0af34  8bca                 mov ecx, edx
// 00a0af36  2bc8                 sub ecx, eax
// 00a0af38  2b4628               sub eax, dword ptr [esi + 0x28]
// 00a0af3b  897c2414             mov dword ptr [esp + 0x14], edi
// 00a0af3f  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 00a0af46  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 00a0af4d  3bfb                 cmp edi, ebx
// 00a0af4f  7405                 je 0xa0af56
// 00a0af51  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 00a0af54  7e0e                 jle 0xa0af64
// 00a0af56  899c249c000000       mov dword ptr [esp + 0x9c], ebx
// 00a0af5d  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 00a0af64  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a0af68  8b782c               mov edi, dword ptr [eax + 0x2c]
// 00a0af6b  6864cbc100           push 0xc1cb64
// 00a0af70  8bcf                 mov ecx, edi
// 00a0af72  897c243c             mov dword ptr [esp + 0x3c], edi
// 00a0af76  e8f5c8ffff           call 0xa07870
// 00a0af7b  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 00a0af82  3bc3                 cmp eax, ebx
// 00a0af84  0f846f0e0000         je 0xa0bdf9
// 00a0af8a  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 00a0af8d  0f842c070000         je 0xa0b6bf
// 00a0af93  b840cbc100           mov eax, 0xc1cb40
// 00a0af98  3beb                 cmp ebp, ebx
// 00a0af9a  7505                 jne 0xa0afa1
// 00a0af9c  b81ccbc100           mov eax, 0xc1cb1c
// 00a0afa1  50                   push eax
// 00a0afa2  8bcf                 mov ecx, edi
// 00a0afa4  e8c7c8ffff           call 0xa07870
// 00a0afa9  89442418             mov dword ptr [esp + 0x18], eax
// 00a0afad  3bc3                 cmp eax, ebx
// 00a0afaf  0f84440e0000         je 0xa0bdf9
// 00a0afb5  8b2dec3ab200         mov ebp, dword ptr [0xb23aec]
// 00a0afbb  8d5e48               lea ebx, [esi + 0x48]
// 00a0afbe  53                   push ebx
// 00a0afbf  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00a0afc6  51                   push ecx
// 00a0afc7  ffd5                 call ebp
// 00a0afc9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0afcd  6a02                 push 2
// 00a0afcf  6a00                 push 0
// 00a0afd1  8d9424d4000000       lea edx, [esp + 0xd4]
// 00a0afd8  bf01000000           mov edi, 1
// 00a0afdd  52                   push edx
// 00a0afde  897c2438             mov dword ptr [esp + 0x38], edi
// 00a0afe2  e809ab0500           call 0xa65af0
// 00a0afe7  83ec10               sub esp, 0x10
// 00a0afea  8bcc                 mov ecx, esp
// 00a0afec  8939                 mov dword ptr [ecx], edi
// 00a0afee  33d2                 xor edx, edx
// 00a0aff0  895104               mov dword ptr [ecx + 4], edx
// 00a0aff3  8bd7                 mov edx, edi
// 00a0aff5  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 00a0affc  895108               mov dword ptr [ecx + 8], edx
// 00a0afff  33d2                 xor edx, edx
// 00a0b001  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b004  8b10                 mov edx, dword ptr [eax]
// 00a0b006  83ec10               sub esp, 0x10
// 00a0b009  8bcc                 mov ecx, esp
// 00a0b00b  8911                 mov dword ptr [ecx], edx
// 00a0b00d  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b010  895104               mov dword ptr [ecx + 4], edx
// 00a0b013  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b016  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b019  895108               mov dword ptr [ecx + 8], edx
// 00a0b01c  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b01f  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00a0b026  51                   push ecx
// 00a0b027  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0b02b  57                   push edi
// 00a0b02c  e88fa30500           call 0xa653c0
// 00a0b031  53                   push ebx
// 00a0b032  8d942490000000       lea edx, [esp + 0x90]
// 00a0b039  52                   push edx
// 00a0b03a  ffd5                 call ebp
// 00a0b03c  6a00                 push 0
// 00a0b03e  6aff                 push -1
// 00a0b040  8d842494000000       lea eax, [esp + 0x94]
// 00a0b047  50                   push eax
// 00a0b048  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a0b04e  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a0b053  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a0b05a  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00a0b061  8b5628               mov edx, dword ptr [esi + 0x28]
// 00a0b064  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a0b068  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a0b06f  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a0b073  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a0b077  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00a0b07a  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a0b07e  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a0b082  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a0b089  89442460             mov dword ptr [esp + 0x60], eax
// 00a0b08d  89542458             mov dword ptr [esp + 0x58], edx
// 00a0b091  894c2468             mov dword ptr [esp + 0x68], ecx
// 00a0b095  b8f4cac100           mov eax, 0xc1caf4
// 00a0b09a  7505                 jne 0xa0b0a1
// 00a0b09c  b8cccac100           mov eax, 0xc1cacc
// 00a0b0a1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0b0a5  50                   push eax
// 00a0b0a6  e8c5c7ffff           call 0xa07870
// 00a0b0ab  33db                 xor ebx, ebx
// 00a0b0ad  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a0b0b1  3bc3                 cmp eax, ebx
// 00a0b0b3  0f84400d0000         je 0xa0bdf9
// 00a0b0b9  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00a0b0bd  7509                 jne 0xa0b0c8
// 00a0b0bf  895c2410             mov dword ptr [esp + 0x10], ebx
// 00a0b0c3  e997000000           jmp 0xa0b15f
// 00a0b0c8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0b0cc  83f93c               cmp ecx, 0x3c
// 00a0b0cf  750a                 jne 0xa0b0db
// 00a0b0d1  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00a0b0d9  eb29                 jmp 0xa0b104
// 00a0b0db  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a0b0df  83f83c               cmp eax, 0x3c
// 00a0b0e2  750a                 jne 0xa0b0ee
// 00a0b0e4  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00a0b0ec  eb16                 jmp 0xa0b104
// 00a0b0ee  3bc3                 cmp eax, ebx
// 00a0b0f0  7f0a                 jg 0xa0b0fc
// 00a0b0f2  3bcb                 cmp ecx, ebx
// 00a0b0f4  7f06                 jg 0xa0b0fc
// 00a0b0f6  895c2410             mov dword ptr [esp + 0x10], ebx
// 00a0b0fa  eb63                 jmp 0xa0b15f
// 00a0b0fc  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00a0b104  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a0b108  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0b10c  6a04                 push 4
// 00a0b10e  52                   push edx
// 00a0b10f  8d8424d4000000       lea eax, [esp + 0xd4]
// 00a0b116  be03000000           mov esi, 3
// 00a0b11b  50                   push eax
// 00a0b11c  8bee                 mov ebp, esi
// 00a0b11e  e8cda90500           call 0xa65af0
// 00a0b123  83ec10               sub esp, 0x10
// 00a0b126  8bcc                 mov ecx, esp
// 00a0b128  8931                 mov dword ptr [ecx], esi
// 00a0b12a  896904               mov dword ptr [ecx + 4], ebp
// 00a0b12d  8bd6                 mov edx, esi
// 00a0b12f  895108               mov dword ptr [ecx + 8], edx
// 00a0b132  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b135  8b10                 mov edx, dword ptr [eax]
// 00a0b137  83ec10               sub esp, 0x10
// 00a0b13a  8bcc                 mov ecx, esp
// 00a0b13c  8911                 mov dword ptr [ecx], edx
// 00a0b13e  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b141  895104               mov dword ptr [ecx + 4], edx
// 00a0b144  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b147  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b14a  895108               mov dword ptr [ecx + 8], edx
// 00a0b14d  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b150  8d4c246c             lea ecx, [esp + 0x6c]
// 00a0b154  51                   push ecx
// 00a0b155  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a0b159  57                   push edi
// 00a0b15a  e861a20500           call 0xa653c0
// 00a0b15f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a0b163  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a0b167  8d4410f7             lea eax, [eax + edx - 9]
// 00a0b16b  99                   cdq 
// 00a0b16c  2bc2                 sub eax, edx
// 00a0b16e  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a0b172  8bc8                 mov ecx, eax
// 00a0b174  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a0b178  8d4410f7             lea eax, [eax + edx - 9]
// 00a0b17c  be09000000           mov esi, 9
// 00a0b181  99                   cdq 
// 00a0b182  8bee                 mov ebp, esi
// 00a0b184  55                   push ebp
// 00a0b185  2bc2                 sub eax, edx
// 00a0b187  56                   push esi
// 00a0b188  d1f8                 sar eax, 1
// 00a0b18a  d1f9                 sar ecx, 1
// 00a0b18c  50                   push eax
// 00a0b18d  51                   push ecx
// 00a0b18e  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00a0b195  e8d6cba6ff           call 0x477d70
// 00a0b19a  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00a0b19e  7505                 jne 0xa0b1a5
// 00a0b1a0  8d46fb               lea eax, [esi - 5]
// 00a0b1a3  eb0a                 jmp 0xa0b1af
// 00a0b1a5  33c0                 xor eax, eax
// 00a0b1a7  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00a0b1ab  0f95c0               setne al
// 00a0b1ae  40                   inc eax
// 00a0b1af  50                   push eax
// 00a0b1b0  33c9                 xor ecx, ecx
// 00a0b1b2  83ec10               sub esp, 0x10
// 00a0b1b5  8bc4                 mov eax, esp
// 00a0b1b7  8908                 mov dword ptr [eax], ecx
// 00a0b1b9  894804               mov dword ptr [eax + 4], ecx
// 00a0b1bc  8bce                 mov ecx, esi
// 00a0b1be  894808               mov dword ptr [eax + 8], ecx
// 00a0b1c1  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0b1c4  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00a0b1cb  51                   push ecx
// 00a0b1cc  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00a0b1d0  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a0b1d4  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a0b1d8  895c2448             mov dword ptr [esp + 0x48], ebx
// 00a0b1dc  e85ffcffff           call 0xa0ae40
// 00a0b1e1  83c418               add esp, 0x18
// 00a0b1e4  68ff00ff00           push 0xff00ff
// 00a0b1e9  8d542428             lea edx, [esp + 0x28]
// 00a0b1ed  52                   push edx
// 00a0b1ee  8b10                 mov edx, dword ptr [eax]
// 00a0b1f0  83ec10               sub esp, 0x10
// 00a0b1f3  8bcc                 mov ecx, esp
// 00a0b1f5  8911                 mov dword ptr [ecx], edx
// 00a0b1f7  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b1fa  895104               mov dword ptr [ecx + 4], edx
// 00a0b1fd  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b200  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b203  895108               mov dword ptr [ecx + 8], edx
// 00a0b206  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b209  8d8c2404010000       lea ecx, [esp + 0x104]
// 00a0b210  51                   push ecx
// 00a0b211  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00a0b218  57                   push edi
// 00a0b219  e812ae0500           call 0xa66030
// 00a0b21e  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00a0b222  7509                 jne 0xa0b22d
// 00a0b224  895c2410             mov dword ptr [esp + 0x10], ebx
// 00a0b228  e99f000000           jmp 0xa0b2cc
// 00a0b22d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0b231  83f93d               cmp ecx, 0x3d
// 00a0b234  750a                 jne 0xa0b240
// 00a0b236  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00a0b23e  eb29                 jmp 0xa0b269
// 00a0b240  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a0b244  83f83d               cmp eax, 0x3d
// 00a0b247  750a                 jne 0xa0b253
// 00a0b249  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00a0b251  eb16                 jmp 0xa0b269
// 00a0b253  3bc3                 cmp eax, ebx
// 00a0b255  7f0a                 jg 0xa0b261
// 00a0b257  3bcb                 cmp ecx, ebx
// 00a0b259  7f06                 jg 0xa0b261
// 00a0b25b  895c2410             mov dword ptr [esp + 0x10], ebx
// 00a0b25f  eb6b                 jmp 0xa0b2cc
// 00a0b261  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00a0b269  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a0b26d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0b271  6a04                 push 4
// 00a0b273  bb03000000           mov ebx, 3
// 00a0b278  52                   push edx
// 00a0b279  8d8424d4000000       lea eax, [esp + 0xd4]
// 00a0b280  50                   push eax
// 00a0b281  8bf3                 mov esi, ebx
// 00a0b283  8beb                 mov ebp, ebx
// 00a0b285  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00a0b289  e862a80500           call 0xa65af0
// 00a0b28e  83ec10               sub esp, 0x10
// 00a0b291  8bcc                 mov ecx, esp
// 00a0b293  8931                 mov dword ptr [ecx], esi
// 00a0b295  896904               mov dword ptr [ecx + 4], ebp
// 00a0b298  895908               mov dword ptr [ecx + 8], ebx
// 00a0b29b  83ec10               sub esp, 0x10
// 00a0b29e  8bd3                 mov edx, ebx
// 00a0b2a0  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b2a3  8b10                 mov edx, dword ptr [eax]
// 00a0b2a5  8bcc                 mov ecx, esp
// 00a0b2a7  8911                 mov dword ptr [ecx], edx
// 00a0b2a9  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b2ac  895104               mov dword ptr [ecx + 4], edx
// 00a0b2af  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b2b2  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b2b5  895108               mov dword ptr [ecx + 8], edx
// 00a0b2b8  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b2bb  8d4c247c             lea ecx, [esp + 0x7c]
// 00a0b2bf  51                   push ecx
// 00a0b2c0  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a0b2c4  57                   push edi
// 00a0b2c5  e8f6a00500           call 0xa653c0
// 00a0b2ca  33db                 xor ebx, ebx
// 00a0b2cc  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a0b2d0  8b442464             mov eax, dword ptr [esp + 0x64]
// 00a0b2d4  8d4410f7             lea eax, [eax + edx - 9]
// 00a0b2d8  99                   cdq 
// 00a0b2d9  2bc2                 sub eax, edx
// 00a0b2db  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a0b2df  8bc8                 mov ecx, eax
// 00a0b2e1  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a0b2e5  8d4410f7             lea eax, [eax + edx - 9]
// 00a0b2e9  be09000000           mov esi, 9
// 00a0b2ee  99                   cdq 
// 00a0b2ef  8bee                 mov ebp, esi
// 00a0b2f1  55                   push ebp
// 00a0b2f2  2bc2                 sub eax, edx
// 00a0b2f4  56                   push esi
// 00a0b2f5  d1f8                 sar eax, 1
// 00a0b2f7  d1f9                 sar ecx, 1
// 00a0b2f9  50                   push eax
// 00a0b2fa  51                   push ecx
// 00a0b2fb  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00a0b302  e869caa6ff           call 0x477d70
// 00a0b307  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00a0b30b  7505                 jne 0xa0b312
// 00a0b30d  8d46ff               lea eax, [esi - 1]
// 00a0b310  eb0c                 jmp 0xa0b31e
// 00a0b312  33c0                 xor eax, eax
// 00a0b314  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00a0b318  0f95c0               setne al
// 00a0b31b  83c005               add eax, 5
// 00a0b31e  50                   push eax
// 00a0b31f  33c9                 xor ecx, ecx
// 00a0b321  83ec10               sub esp, 0x10
// 00a0b324  8bc4                 mov eax, esp
// 00a0b326  8908                 mov dword ptr [eax], ecx
// 00a0b328  894804               mov dword ptr [eax + 4], ecx
// 00a0b32b  8bce                 mov ecx, esi
// 00a0b32d  894808               mov dword ptr [eax + 8], ecx
// 00a0b330  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0b333  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 00a0b33a  51                   push ecx
// 00a0b33b  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00a0b33f  895c2440             mov dword ptr [esp + 0x40], ebx
// 00a0b343  895c2444             mov dword ptr [esp + 0x44], ebx
// 00a0b347  895c2448             mov dword ptr [esp + 0x48], ebx
// 00a0b34b  e8f0faffff           call 0xa0ae40
// 00a0b350  83c418               add esp, 0x18
// 00a0b353  68ff00ff00           push 0xff00ff
// 00a0b358  8d542428             lea edx, [esp + 0x28]
// 00a0b35c  52                   push edx
// 00a0b35d  8b10                 mov edx, dword ptr [eax]
// 00a0b35f  83ec10               sub esp, 0x10
// 00a0b362  8bcc                 mov ecx, esp
// 00a0b364  8911                 mov dword ptr [ecx], edx
// 00a0b366  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b369  895104               mov dword ptr [ecx + 4], edx
// 00a0b36c  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b36f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b372  895108               mov dword ptr [ecx + 8], edx
// 00a0b375  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b378  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 00a0b37f  51                   push ecx
// 00a0b380  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00a0b387  57                   push edi
// 00a0b388  e8a3ac0500           call 0xa66030
// 00a0b38d  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a0b391  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 00a0b398  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00a0b39f  8b35f03ab200         mov esi, dword ptr [0xb23af0]
// 00a0b3a5  89442440             mov dword ptr [esp + 0x40], eax
// 00a0b3a9  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a0b3ad  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a0b3b1  8d44243c             lea eax, [esp + 0x3c]
// 00a0b3b5  50                   push eax
// 00a0b3b6  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a0b3ba  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a0b3be  ffd6                 call esi
// 00a0b3c0  85c0                 test eax, eax
// 00a0b3c2  0f85310a0000         jne 0xa0bdf9
// 00a0b3c8  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a0b3cc  8bac24c4000000       mov ebp, dword ptr [esp + 0xc4]
// 00a0b3d3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a0b3d7  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a0b3db  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 00a0b3e2  03d5                 add edx, ebp
// 00a0b3e4  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00a0b3e8  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00a0b3ec  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00a0b3f0  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a0b3f4  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 00a0b3fb  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 00a0b402  89542470             mov dword ptr [esp + 0x70], edx
// 00a0b406  03d5                 add edx, ebp
// 00a0b408  41                   inc ecx
// 00a0b409  89542478             mov dword ptr [esp + 0x78], edx
// 00a0b40d  89542428             mov dword ptr [esp + 0x28], edx
// 00a0b411  48                   dec eax
// 00a0b412  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 00a0b419  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a0b41d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a0b421  8d9424ac000000       lea edx, [esp + 0xac]
// 00a0b428  52                   push edx
// 00a0b429  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00a0b430  89442428             mov dword ptr [esp + 0x28], eax
// 00a0b434  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a0b438  ffd6                 call esi
// 00a0b43a  85c0                 test eax, eax
// 00a0b43c  7576                 jne 0xa0b4b4
// 00a0b43e  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00a0b442  7470                 je 0xa0b4b4
// 00a0b444  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 00a0b449  7569                 jne 0xa0b4b4
// 00a0b44b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0b44f  6a02                 push 2
// 00a0b451  be01000000           mov esi, 1
// 00a0b456  56                   push esi
// 00a0b457  8d8424d4000000       lea eax, [esp + 0xd4]
// 00a0b45e  33db                 xor ebx, ebx
// 00a0b460  50                   push eax
// 00a0b461  8bee                 mov ebp, esi
// 00a0b463  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 00a0b46a  e881a60500           call 0xa65af0
// 00a0b46f  83ec10               sub esp, 0x10
// 00a0b472  8bcc                 mov ecx, esp
// 00a0b474  8931                 mov dword ptr [ecx], esi
// 00a0b476  895904               mov dword ptr [ecx + 4], ebx
// 00a0b479  896908               mov dword ptr [ecx + 8], ebp
// 00a0b47c  83ec10               sub esp, 0x10
// 00a0b47f  8bd3                 mov edx, ebx
// 00a0b481  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b484  8b10                 mov edx, dword ptr [eax]
// 00a0b486  8bcc                 mov ecx, esp
// 00a0b488  8911                 mov dword ptr [ecx], edx
// 00a0b48a  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b48d  895104               mov dword ptr [ecx + 4], edx
// 00a0b490  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b493  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b496  895108               mov dword ptr [ecx + 8], edx
// 00a0b499  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b49c  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00a0b4a3  51                   push ecx
// 00a0b4a4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0b4a8  57                   push edi
// 00a0b4a9  e8129f0500           call 0xa653c0
// 00a0b4ae  8b35f03ab200         mov esi, dword ptr [0xb23af0]
// 00a0b4b4  8d54246c             lea edx, [esp + 0x6c]
// 00a0b4b8  52                   push edx
// 00a0b4b9  ffd6                 call esi
// 00a0b4bb  85c0                 test eax, eax
// 00a0b4bd  0f857a010000         jne 0xa0b63d
// 00a0b4c3  39442414             cmp dword ptr [esp + 0x14], eax
// 00a0b4c7  7504                 jne 0xa0b4cd
// 00a0b4c9  33ed                 xor ebp, ebp
// 00a0b4cb  eb2e                 jmp 0xa0b4fb
// 00a0b4cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0b4d1  83f940               cmp ecx, 0x40
// 00a0b4d4  7505                 jne 0xa0b4db
// 00a0b4d6  8d69c3               lea ebp, [ecx - 0x3d]
// 00a0b4d9  eb1f                 jmp 0xa0b4fa
// 00a0b4db  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a0b4df  83f840               cmp eax, 0x40
// 00a0b4e2  7505                 jne 0xa0b4e9
// 00a0b4e4  8d68c2               lea ebp, [eax - 0x3e]
// 00a0b4e7  eb11                 jmp 0xa0b4fa
// 00a0b4e9  85c0                 test eax, eax
// 00a0b4eb  7f08                 jg 0xa0b4f5
// 00a0b4ed  85c9                 test ecx, ecx
// 00a0b4ef  7f04                 jg 0xa0b4f5
// 00a0b4f1  33ed                 xor ebp, ebp
// 00a0b4f3  eb06                 jmp 0xa0b4fb
// 00a0b4f5  bd01000000           mov ebp, 1
// 00a0b4fa  4d                   dec ebp
// 00a0b4fb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0b4ff  68a8cac100           push 0xc1caa8
// 00a0b504  e867c3ffff           call 0xa07870
// 00a0b509  8bf0                 mov esi, eax
// 00a0b50b  85f6                 test esi, esi
// 00a0b50d  0f84e6080000         je 0xa0bdf9
// 00a0b513  6a03                 push 3
// 00a0b515  55                   push ebp
// 00a0b516  8d8424d4000000       lea eax, [esp + 0xd4]
// 00a0b51d  bb05000000           mov ebx, 5
// 00a0b522  50                   push eax
// 00a0b523  8bce                 mov ecx, esi
// 00a0b525  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 00a0b52c  e8bfa50500           call 0xa65af0
// 00a0b531  83ec10               sub esp, 0x10
// 00a0b534  8bcc                 mov ecx, esp
// 00a0b536  8919                 mov dword ptr [ecx], ebx
// 00a0b538  8bd3                 mov edx, ebx
// 00a0b53a  895104               mov dword ptr [ecx + 4], edx
// 00a0b53d  895108               mov dword ptr [ecx + 8], edx
// 00a0b540  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b543  8b10                 mov edx, dword ptr [eax]
// 00a0b545  83ec10               sub esp, 0x10
// 00a0b548  8bcc                 mov ecx, esp
// 00a0b54a  8911                 mov dword ptr [ecx], edx
// 00a0b54c  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b54f  895104               mov dword ptr [ecx + 4], edx
// 00a0b552  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b555  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b558  895108               mov dword ptr [ecx + 8], edx
// 00a0b55b  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b55e  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00a0b565  51                   push ecx
// 00a0b566  57                   push edi
// 00a0b567  8bce                 mov ecx, esi
// 00a0b569  e8529e0500           call 0xa653c0
// 00a0b56e  8b542478             mov edx, dword ptr [esp + 0x78]
// 00a0b572  2b542470             sub edx, dword ptr [esp + 0x70]
// 00a0b576  83fa0a               cmp edx, 0xa
// 00a0b579  0f8ebe000000         jle 0xa0b63d
// 00a0b57f  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0b583  687ccac100           push 0xc1ca7c
// 00a0b588  e8e3c2ffff           call 0xa07870
// 00a0b58d  8bd8                 mov ebx, eax
// 00a0b58f  8d8424c4000000       lea eax, [esp + 0xc4]
// 00a0b596  50                   push eax
// 00a0b597  8d4c2470             lea ecx, [esp + 0x70]
// 00a0b59b  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 00a0b5a6  e835e8a1ff           call 0x429de0
// 00a0b5ab  8b7004               mov esi, dword ptr [eax + 4]
// 00a0b5ae  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00a0b5b5  51                   push ecx
// 00a0b5b6  8d4c2470             lea ecx, [esp + 0x70]
// 00a0b5ba  83ee04               sub esi, 4
// 00a0b5bd  e81ee8a1ff           call 0x429de0
// 00a0b5c2  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00a0b5c9  8b00                 mov eax, dword ptr [eax]
// 00a0b5cb  52                   push edx
// 00a0b5cc  b908000000           mov ecx, 8
// 00a0b5d1  51                   push ecx
// 00a0b5d2  83e803               sub eax, 3
// 00a0b5d5  56                   push esi
// 00a0b5d6  50                   push eax
// 00a0b5d7  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00a0b5de  e88dc7a6ff           call 0x477d70
// 00a0b5e3  6a03                 push 3
// 00a0b5e5  55                   push ebp
// 00a0b5e6  8d8424d4000000       lea eax, [esp + 0xd4]
// 00a0b5ed  33f6                 xor esi, esi
// 00a0b5ef  50                   push eax
// 00a0b5f0  8bcb                 mov ecx, ebx
// 00a0b5f2  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 00a0b5f9  e8f2a40500           call 0xa65af0
// 00a0b5fe  83ec10               sub esp, 0x10
// 00a0b601  8bcc                 mov ecx, esp
// 00a0b603  8931                 mov dword ptr [ecx], esi
// 00a0b605  33d2                 xor edx, edx
// 00a0b607  895104               mov dword ptr [ecx + 4], edx
// 00a0b60a  895108               mov dword ptr [ecx + 8], edx
// 00a0b60d  83ec10               sub esp, 0x10
// 00a0b610  8bd6                 mov edx, esi
// 00a0b612  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b615  8b10                 mov edx, dword ptr [eax]
// 00a0b617  8bcc                 mov ecx, esp
// 00a0b619  8911                 mov dword ptr [ecx], edx
// 00a0b61b  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b61e  895104               mov dword ptr [ecx + 4], edx
// 00a0b621  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b624  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b627  895108               mov dword ptr [ecx + 8], edx
// 00a0b62a  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b62d  8d8c249c000000       lea ecx, [esp + 0x9c]
// 00a0b634  51                   push ecx
// 00a0b635  57                   push edi
// 00a0b636  8bcb                 mov ecx, ebx
// 00a0b638  e8839d0500           call 0xa653c0
// 00a0b63d  8d542424             lea edx, [esp + 0x24]
// 00a0b641  52                   push edx
// 00a0b642  ff15f03ab200         call dword ptr [0xb23af0]
// 00a0b648  85c0                 test eax, eax
// 00a0b64a  0f85a9070000         jne 0xa0bdf9
// 00a0b650  33db                 xor ebx, ebx
// 00a0b652  395c2414             cmp dword ptr [esp + 0x14], ebx
// 00a0b656  0f849d070000         je 0xa0bdf9
// 00a0b65c  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 00a0b661  0f8592070000         jne 0xa0bdf9
// 00a0b667  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0b66b  6a02                 push 2
// 00a0b66d  be01000000           mov esi, 1
// 00a0b672  56                   push esi
// 00a0b673  8d8424d4000000       lea eax, [esp + 0xd4]
// 00a0b67a  50                   push eax
// 00a0b67b  8bee                 mov ebp, esi
// 00a0b67d  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 00a0b684  e867a40500           call 0xa65af0
// 00a0b689  83ec10               sub esp, 0x10
// 00a0b68c  8bcc                 mov ecx, esp
// 00a0b68e  8931                 mov dword ptr [ecx], esi
// 00a0b690  895904               mov dword ptr [ecx + 4], ebx
// 00a0b693  896908               mov dword ptr [ecx + 8], ebp
// 00a0b696  8bd3                 mov edx, ebx
// 00a0b698  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b69b  8b10                 mov edx, dword ptr [eax]
// 00a0b69d  83ec10               sub esp, 0x10
// 00a0b6a0  8bcc                 mov ecx, esp
// 00a0b6a2  8911                 mov dword ptr [ecx], edx
// 00a0b6a4  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b6a7  895104               mov dword ptr [ecx + 4], edx
// 00a0b6aa  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b6ad  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b6b0  895108               mov dword ptr [ecx + 8], edx
// 00a0b6b3  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b6b6  8d4c2444             lea ecx, [esp + 0x44]
// 00a0b6ba  e92f070000           jmp 0xa0bdee
// 00a0b6bf  b858cac100           mov eax, 0xc1ca58
// 00a0b6c4  3beb                 cmp ebp, ebx
// 00a0b6c6  7505                 jne 0xa0b6cd
// 00a0b6c8  b834cac100           mov eax, 0xc1ca34
// 00a0b6cd  50                   push eax
// 00a0b6ce  8bcf                 mov ecx, edi
// 00a0b6d0  e89bc1ffff           call 0xa07870
// 00a0b6d5  89442418             mov dword ptr [esp + 0x18], eax
// 00a0b6d9  3bc3                 cmp eax, ebx
// 00a0b6db  751f                 jne 0xa0b6fc
// 00a0b6dd  8b942400010000       mov edx, dword ptr [esp + 0x100]
// 00a0b6e4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0b6e8  56                   push esi
// 00a0b6e9  52                   push edx
// 00a0b6ea  e8c102ffff           call 0x9fb9b0
// 00a0b6ef  5f                   pop edi
// 00a0b6f0  5e                   pop esi
// 00a0b6f1  5d                   pop ebp
// 00a0b6f2  5b                   pop ebx
// 00a0b6f3  81c4ec000000         add esp, 0xec
// 00a0b6f9  c20800               ret 8
// 00a0b6fc  8b2dec3ab200         mov ebp, dword ptr [0xb23aec]
// 00a0b702  8d5e48               lea ebx, [esi + 0x48]
// 00a0b705  53                   push ebx
// 00a0b706  8d8424e0000000       lea eax, [esp + 0xe0]
// 00a0b70d  50                   push eax
// 00a0b70e  ffd5                 call ebp
// 00a0b710  6a02                 push 2
// 00a0b712  33ff                 xor edi, edi
// 00a0b714  57                   push edi
// 00a0b715  8d4c242c             lea ecx, [esp + 0x2c]
// 00a0b719  51                   push ecx
// 00a0b71a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a0b71e  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 00a0b729  e8c2a30500           call 0xa65af0
// 00a0b72e  83ec10               sub esp, 0x10
// 00a0b731  8bcc                 mov ecx, esp
// 00a0b733  8939                 mov dword ptr [ecx], edi
// 00a0b735  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 00a0b73c  ba01000000           mov edx, 1
// 00a0b741  895104               mov dword ptr [ecx + 4], edx
// 00a0b744  33d2                 xor edx, edx
// 00a0b746  895108               mov dword ptr [ecx + 8], edx
// 00a0b749  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00a0b750  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b753  8b10                 mov edx, dword ptr [eax]
// 00a0b755  83ec10               sub esp, 0x10
// 00a0b758  8bcc                 mov ecx, esp
// 00a0b75a  8911                 mov dword ptr [ecx], edx
// 00a0b75c  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b75f  895104               mov dword ptr [ecx + 4], edx
// 00a0b762  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b765  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b768  895108               mov dword ptr [ecx + 8], edx
// 00a0b76b  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b76e  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00a0b775  51                   push ecx
// 00a0b776  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0b77a  57                   push edi
// 00a0b77b  e8409c0500           call 0xa653c0
// 00a0b780  53                   push ebx
// 00a0b781  8d942490000000       lea edx, [esp + 0x90]
// 00a0b788  52                   push edx
// 00a0b789  ffd5                 call ebp
// 00a0b78b  6aff                 push -1
// 00a0b78d  6a00                 push 0
// 00a0b78f  8d842494000000       lea eax, [esp + 0x94]
// 00a0b796  50                   push eax
// 00a0b797  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a0b79d  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a0b7a2  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00a0b7a9  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00a0b7b0  8b5628               mov edx, dword ptr [esi + 0x28]
// 00a0b7b3  89442470             mov dword ptr [esp + 0x70], eax
// 00a0b7b7  89442460             mov dword ptr [esp + 0x60], eax
// 00a0b7bb  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 00a0b7c2  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00a0b7c6  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a0b7cd  89542474             mov dword ptr [esp + 0x74], edx
// 00a0b7d1  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00a0b7d4  89442464             mov dword ptr [esp + 0x64], eax
// 00a0b7d8  894c2478             mov dword ptr [esp + 0x78], ecx
// 00a0b7dc  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a0b7e0  894c2468             mov dword ptr [esp + 0x68], ecx
// 00a0b7e4  b808cac100           mov eax, 0xc1ca08
// 00a0b7e9  7505                 jne 0xa0b7f0
// 00a0b7eb  b8dcc9c100           mov eax, 0xc1c9dc
// 00a0b7f0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0b7f4  50                   push eax
// 00a0b7f5  e876c0ffff           call 0xa07870
// 00a0b7fa  33f6                 xor esi, esi
// 00a0b7fc  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a0b800  3bc6                 cmp eax, esi
// 00a0b802  0f84f1050000         je 0xa0bdf9
// 00a0b808  39742414             cmp dword ptr [esp + 0x14], esi
// 00a0b80c  7509                 jne 0xa0b817
// 00a0b80e  89742410             mov dword ptr [esp + 0x10], esi
// 00a0b812  e99a000000           jmp 0xa0b8b1
// 00a0b817  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0b81b  83f93c               cmp ecx, 0x3c
// 00a0b81e  750a                 jne 0xa0b82a
// 00a0b820  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00a0b828  eb29                 jmp 0xa0b853
// 00a0b82a  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a0b82e  83f83c               cmp eax, 0x3c
// 00a0b831  750a                 jne 0xa0b83d
// 00a0b833  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00a0b83b  eb16                 jmp 0xa0b853
// 00a0b83d  3bc6                 cmp eax, esi
// 00a0b83f  7f0a                 jg 0xa0b84b
// 00a0b841  3bce                 cmp ecx, esi
// 00a0b843  7f06                 jg 0xa0b84b
// 00a0b845  89742410             mov dword ptr [esp + 0x10], esi
// 00a0b849  eb66                 jmp 0xa0b8b1
// 00a0b84b  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00a0b853  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a0b857  6a04                 push 4
// 00a0b859  51                   push ecx
// 00a0b85a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a0b85e  8d942484000000       lea edx, [esp + 0x84]
// 00a0b865  bb03000000           mov ebx, 3
// 00a0b86a  52                   push edx
// 00a0b86b  8beb                 mov ebp, ebx
// 00a0b86d  e87ea20500           call 0xa65af0
// 00a0b872  83ec10               sub esp, 0x10
// 00a0b875  8bcc                 mov ecx, esp
// 00a0b877  8919                 mov dword ptr [ecx], ebx
// 00a0b879  896904               mov dword ptr [ecx + 4], ebp
// 00a0b87c  8bd3                 mov edx, ebx
// 00a0b87e  895108               mov dword ptr [ecx + 8], edx
// 00a0b881  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b884  8b10                 mov edx, dword ptr [eax]
// 00a0b886  83ec10               sub esp, 0x10
// 00a0b889  8bcc                 mov ecx, esp
// 00a0b88b  8911                 mov dword ptr [ecx], edx
// 00a0b88d  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b890  895104               mov dword ptr [ecx + 4], edx
// 00a0b893  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b896  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b899  895108               mov dword ptr [ecx + 8], edx
// 00a0b89c  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b89f  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00a0b8a6  51                   push ecx
// 00a0b8a7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a0b8ab  57                   push edi
// 00a0b8ac  e80f9b0500           call 0xa653c0
// 00a0b8b1  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00a0b8b5  8b442474             mov eax, dword ptr [esp + 0x74]
// 00a0b8b9  8d4410f7             lea eax, [eax + edx - 9]
// 00a0b8bd  99                   cdq 
// 00a0b8be  2bc2                 sub eax, edx
// 00a0b8c0  8b542470             mov edx, dword ptr [esp + 0x70]
// 00a0b8c4  8bc8                 mov ecx, eax
// 00a0b8c6  8b442478             mov eax, dword ptr [esp + 0x78]
// 00a0b8ca  8d4410f7             lea eax, [eax + edx - 9]
// 00a0b8ce  bb09000000           mov ebx, 9
// 00a0b8d3  99                   cdq 
// 00a0b8d4  8beb                 mov ebp, ebx
// 00a0b8d6  55                   push ebp
// 00a0b8d7  2bc2                 sub eax, edx
// 00a0b8d9  53                   push ebx
// 00a0b8da  d1f8                 sar eax, 1
// 00a0b8dc  d1f9                 sar ecx, 1
// 00a0b8de  50                   push eax
// 00a0b8df  51                   push ecx
// 00a0b8e0  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00a0b8e7  e884c4a6ff           call 0x477d70
// 00a0b8ec  39742414             cmp dword ptr [esp + 0x14], esi
// 00a0b8f0  7505                 jne 0xa0b8f7
// 00a0b8f2  8d4303               lea eax, [ebx + 3]
// 00a0b8f5  eb0c                 jmp 0xa0b903
// 00a0b8f7  33c0                 xor eax, eax
// 00a0b8f9  39742410             cmp dword ptr [esp + 0x10], esi
// 00a0b8fd  0f95c0               setne al
// 00a0b900  83c009               add eax, 9
// 00a0b903  50                   push eax
// 00a0b904  33c9                 xor ecx, ecx
// 00a0b906  83ec10               sub esp, 0x10
// 00a0b909  8bc4                 mov eax, esp
// 00a0b90b  8908                 mov dword ptr [eax], ecx
// 00a0b90d  894804               mov dword ptr [eax + 4], ecx
// 00a0b910  8bcb                 mov ecx, ebx
// 00a0b912  894808               mov dword ptr [eax + 8], ecx
// 00a0b915  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0b918  8d8c2490000000       lea ecx, [esp + 0x90]
// 00a0b91f  51                   push ecx
// 00a0b920  8974243c             mov dword ptr [esp + 0x3c], esi
// 00a0b924  89742440             mov dword ptr [esp + 0x40], esi
// 00a0b928  89742444             mov dword ptr [esp + 0x44], esi
// 00a0b92c  89742448             mov dword ptr [esp + 0x48], esi
// 00a0b930  e80bf5ffff           call 0xa0ae40
// 00a0b935  83c418               add esp, 0x18
// 00a0b938  68ff00ff00           push 0xff00ff
// 00a0b93d  8d542428             lea edx, [esp + 0x28]
// 00a0b941  52                   push edx
// 00a0b942  8b10                 mov edx, dword ptr [eax]
// 00a0b944  83ec10               sub esp, 0x10
// 00a0b947  8bcc                 mov ecx, esp
// 00a0b949  8911                 mov dword ptr [ecx], edx
// 00a0b94b  8b5004               mov edx, dword ptr [eax + 4]
// 00a0b94e  895104               mov dword ptr [ecx + 4], edx
// 00a0b951  8b5008               mov edx, dword ptr [eax + 8]
// 00a0b954  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0b957  895108               mov dword ptr [ecx + 8], edx
// 00a0b95a  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0b95d  8d8c2404010000       lea ecx, [esp + 0x104]
// 00a0b964  51                   push ecx
// 00a0b965  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00a0b96c  57                   push edi
// 00a0b96d  e8bea60500           call 0xa66030
// 00a0b972  39742414             cmp dword ptr [esp + 0x14], esi
// 00a0b976  7509                 jne 0xa0b981
// 00a0b978  89742410             mov dword ptr [esp + 0x10], esi
// 00a0b97c  e9a2000000           jmp 0xa0ba23
// 00a0b981  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0b985  83f93d               cmp ecx, 0x3d
// 00a0b988  750a                 jne 0xa0b994
// 00a0b98a  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00a0b992  eb29                 jmp 0xa0b9bd
// 00a0b994  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a0b998  83f83d               cmp eax, 0x3d
// 00a0b99b  750a                 jne 0xa0b9a7
// 00a0b99d  c744241002000000     mov dword ptr [esp + 0x10], 2
// 00a0b9a5  eb16                 jmp 0xa0b9bd
// 00a0b9a7  3bc6                 cmp eax, esi
// 00a0b9a9  7f0a                 jg 0xa0b9b5
// 00a0b9ab  3bce                 cmp ecx, esi
// 00a0b9ad  7f06                 jg 0xa0b9b5
// 00a0b9af  89742410             mov dword ptr [esp + 0x10], esi
// 00a0b9b3  eb6e                 jmp 0xa0ba23
// 00a0b9b5  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00a0b9bd  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a0b9c1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a0b9c5  6a04                 push 4
// 00a0b9c7  bd03000000           mov ebp, 3
// 00a0b9cc  52                   push edx
// 00a0b9cd  8d8424e4000000       lea eax, [esp + 0xe4]
// 00a0b9d4  50                   push eax
// 00a0b9d5  8bdd                 mov ebx, ebp
// 00a0b9d7  8bf5                 mov esi, ebp
// 00a0b9d9  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 00a0b9e0  e80ba10500           call 0xa65af0
// 00a0b9e5  83ec10               sub esp, 0x10
// 00a0b9e8  8bcc                 mov ecx, esp
// 00a0b9ea  8919                 mov dword ptr [ecx], ebx
// 00a0b9ec  897104               mov dword ptr [ecx + 4], esi
// 00a0b9ef  896908               mov dword ptr [ecx + 8], ebp
// 00a0b9f2  83ec10               sub esp, 0x10
// 00a0b9f5  8bd5                 mov edx, ebp
// 00a0b9f7  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0b9fa  8b10                 mov edx, dword ptr [eax]
// 00a0b9fc  8bcc                 mov ecx, esp
// 00a0b9fe  8911                 mov dword ptr [ecx], edx
// 00a0ba00  8b5004               mov edx, dword ptr [eax + 4]
// 00a0ba03  895104               mov dword ptr [ecx + 4], edx
// 00a0ba06  8b5008               mov edx, dword ptr [eax + 8]
// 00a0ba09  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0ba0c  895108               mov dword ptr [ecx + 8], edx
// 00a0ba0f  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0ba12  8d4c247c             lea ecx, [esp + 0x7c]
// 00a0ba16  51                   push ecx
// 00a0ba17  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a0ba1b  57                   push edi
// 00a0ba1c  e89f990500           call 0xa653c0
// 00a0ba21  33f6                 xor esi, esi
// 00a0ba23  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a0ba27  8b442464             mov eax, dword ptr [esp + 0x64]
// 00a0ba2b  8d4410f7             lea eax, [eax + edx - 9]
// 00a0ba2f  99                   cdq 
// 00a0ba30  2bc2                 sub eax, edx
// 00a0ba32  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a0ba36  8bc8                 mov ecx, eax
// 00a0ba38  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a0ba3c  8d4410f7             lea eax, [eax + edx - 9]
// 00a0ba40  bb09000000           mov ebx, 9
// 00a0ba45  99                   cdq 
// 00a0ba46  8beb                 mov ebp, ebx
// 00a0ba48  55                   push ebp
// 00a0ba49  2bc2                 sub eax, edx
// 00a0ba4b  53                   push ebx
// 00a0ba4c  d1f8                 sar eax, 1
// 00a0ba4e  d1f9                 sar ecx, 1
// 00a0ba50  50                   push eax
// 00a0ba51  51                   push ecx
// 00a0ba52  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 00a0ba59  e812c3a6ff           call 0x477d70
// 00a0ba5e  39742414             cmp dword ptr [esp + 0x14], esi
// 00a0ba62  7505                 jne 0xa0ba69
// 00a0ba64  8d4307               lea eax, [ebx + 7]
// 00a0ba67  eb0c                 jmp 0xa0ba75
// 00a0ba69  33c0                 xor eax, eax
// 00a0ba6b  39742410             cmp dword ptr [esp + 0x10], esi
// 00a0ba6f  0f95c0               setne al
// 00a0ba72  83c00d               add eax, 0xd
// 00a0ba75  50                   push eax
// 00a0ba76  33c9                 xor ecx, ecx
// 00a0ba78  83ec10               sub esp, 0x10
// 00a0ba7b  8bc4                 mov eax, esp
// 00a0ba7d  8908                 mov dword ptr [eax], ecx
// 00a0ba7f  894804               mov dword ptr [eax + 4], ecx
// 00a0ba82  8bcb                 mov ecx, ebx
// 00a0ba84  894808               mov dword ptr [eax + 8], ecx
// 00a0ba87  89480c               mov dword ptr [eax + 0xc], ecx
// 00a0ba8a  8d8c2490000000       lea ecx, [esp + 0x90]
// 00a0ba91  51                   push ecx
// 00a0ba92  8974243c             mov dword ptr [esp + 0x3c], esi
// 00a0ba96  89742440             mov dword ptr [esp + 0x40], esi
// 00a0ba9a  89742444             mov dword ptr [esp + 0x44], esi
// 00a0ba9e  89742448             mov dword ptr [esp + 0x48], esi
// 00a0baa2  e899f3ffff           call 0xa0ae40
// 00a0baa7  83c418               add esp, 0x18
// 00a0baaa  68ff00ff00           push 0xff00ff
// 00a0baaf  8d542428             lea edx, [esp + 0x28]
// 00a0bab3  52                   push edx
// 00a0bab4  8b10                 mov edx, dword ptr [eax]
// 00a0bab6  83ec10               sub esp, 0x10
// 00a0bab9  8bcc                 mov ecx, esp
// 00a0babb  8911                 mov dword ptr [ecx], edx
// 00a0babd  8b5004               mov edx, dword ptr [eax + 4]
// 00a0bac0  895104               mov dword ptr [ecx + 4], edx
// 00a0bac3  8b5008               mov edx, dword ptr [eax + 8]
// 00a0bac6  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0bac9  895108               mov dword ptr [ecx + 8], edx
// 00a0bacc  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0bacf  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 00a0bad6  51                   push ecx
// 00a0bad7  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 00a0bade  57                   push edi
// 00a0badf  e84ca50500           call 0xa66030
// 00a0bae4  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00a0baeb  8b542474             mov edx, dword ptr [esp + 0x74]
// 00a0baef  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a0baf3  8b1df03ab200         mov ebx, dword ptr [0xb23af0]
// 00a0baf9  89442450             mov dword ptr [esp + 0x50], eax
// 00a0bafd  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a0bb01  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 00a0bb08  8d44244c             lea eax, [esp + 0x4c]
// 00a0bb0c  50                   push eax
// 00a0bb0d  894c2458             mov dword ptr [esp + 0x58], ecx
// 00a0bb11  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a0bb15  ffd3                 call ebx
// 00a0bb17  85c0                 test eax, eax
// 00a0bb19  0f85da020000         jne 0xa0bdf9
// 00a0bb1f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a0bb23  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00a0bb27  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 00a0bb2e  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a0bb32  03ca                 add ecx, edx
// 00a0bb34  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a0bb38  8d45ff               lea eax, [ebp - 1]
// 00a0bb3b  896c2440             mov dword ptr [esp + 0x40], ebp
// 00a0bb3f  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 00a0bb46  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00a0bb4a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a0bb4e  03cd                 add ecx, ebp
// 00a0bb50  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00a0bb54  894c2444             mov dword ptr [esp + 0x44], ecx
// 00a0bb58  898c24ac000000       mov dword ptr [esp + 0xac], ecx
// 00a0bb5f  89442428             mov dword ptr [esp + 0x28], eax
// 00a0bb63  42                   inc edx
// 00a0bb64  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00a0bb6b  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a0bb6f  8d4c2424             lea ecx, [esp + 0x24]
// 00a0bb73  51                   push ecx
// 00a0bb74  89542434             mov dword ptr [esp + 0x34], edx
// 00a0bb78  896c244c             mov dword ptr [esp + 0x4c], ebp
// 00a0bb7c  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 00a0bb83  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 00a0bb8a  ffd3                 call ebx
// 00a0bb8c  85c0                 test eax, eax
// 00a0bb8e  756a                 jne 0xa0bbfa
// 00a0bb90  39742414             cmp dword ptr [esp + 0x14], esi
// 00a0bb94  7464                 je 0xa0bbfa
// 00a0bb96  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 00a0bb9b  755d                 jne 0xa0bbfa
// 00a0bb9d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0bba1  6a02                 push 2
// 00a0bba3  8d5801               lea ebx, [eax + 1]
// 00a0bba6  53                   push ebx
// 00a0bba7  8d942484000000       lea edx, [esp + 0x84]
// 00a0bbae  52                   push edx
// 00a0bbaf  33f6                 xor esi, esi
// 00a0bbb1  33ed                 xor ebp, ebp
// 00a0bbb3  e8389f0500           call 0xa65af0
// 00a0bbb8  83ec10               sub esp, 0x10
// 00a0bbbb  8bcc                 mov ecx, esp
// 00a0bbbd  8931                 mov dword ptr [ecx], esi
// 00a0bbbf  895904               mov dword ptr [ecx + 4], ebx
// 00a0bbc2  896908               mov dword ptr [ecx + 8], ebp
// 00a0bbc5  83ec10               sub esp, 0x10
// 00a0bbc8  8bd3                 mov edx, ebx
// 00a0bbca  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0bbcd  8b10                 mov edx, dword ptr [eax]
// 00a0bbcf  8bcc                 mov ecx, esp
// 00a0bbd1  8911                 mov dword ptr [ecx], edx
// 00a0bbd3  8b5004               mov edx, dword ptr [eax + 4]
// 00a0bbd6  895104               mov dword ptr [ecx + 4], edx
// 00a0bbd9  8b5008               mov edx, dword ptr [eax + 8]
// 00a0bbdc  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0bbdf  895108               mov dword ptr [ecx + 8], edx
// 00a0bbe2  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0bbe5  8d4c2444             lea ecx, [esp + 0x44]
// 00a0bbe9  51                   push ecx
// 00a0bbea  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0bbee  57                   push edi
// 00a0bbef  e8cc970500           call 0xa653c0
// 00a0bbf4  8b1df03ab200         mov ebx, dword ptr [0xb23af0]
// 00a0bbfa  8d54243c             lea edx, [esp + 0x3c]
// 00a0bbfe  52                   push edx
// 00a0bbff  ffd3                 call ebx
// 00a0bc01  85c0                 test eax, eax
// 00a0bc03  0f8577010000         jne 0xa0bd80
// 00a0bc09  39442414             cmp dword ptr [esp + 0x14], eax
// 00a0bc0d  7504                 jne 0xa0bc13
// 00a0bc0f  33ed                 xor ebp, ebp
// 00a0bc11  eb2e                 jmp 0xa0bc41
// 00a0bc13  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a0bc17  83f940               cmp ecx, 0x40
// 00a0bc1a  7505                 jne 0xa0bc21
// 00a0bc1c  8d69c3               lea ebp, [ecx - 0x3d]
// 00a0bc1f  eb1f                 jmp 0xa0bc40
// 00a0bc21  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a0bc25  83f840               cmp eax, 0x40
// 00a0bc28  7505                 jne 0xa0bc2f
// 00a0bc2a  8d68c2               lea ebp, [eax - 0x3e]
// 00a0bc2d  eb11                 jmp 0xa0bc40
// 00a0bc2f  85c0                 test eax, eax
// 00a0bc31  7f08                 jg 0xa0bc3b
// 00a0bc33  85c9                 test ecx, ecx
// 00a0bc35  7f04                 jg 0xa0bc3b
// 00a0bc37  33ed                 xor ebp, ebp
// 00a0bc39  eb06                 jmp 0xa0bc41
// 00a0bc3b  bd01000000           mov ebp, 1
// 00a0bc40  4d                   dec ebp
// 00a0bc41  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0bc45  68b8c9c100           push 0xc1c9b8
// 00a0bc4a  e821bcffff           call 0xa07870
// 00a0bc4f  8bf0                 mov esi, eax
// 00a0bc51  85f6                 test esi, esi
// 00a0bc53  0f84a0010000         je 0xa0bdf9
// 00a0bc59  6a03                 push 3
// 00a0bc5b  55                   push ebp
// 00a0bc5c  8d8424e4000000       lea eax, [esp + 0xe4]
// 00a0bc63  bb05000000           mov ebx, 5
// 00a0bc68  50                   push eax
// 00a0bc69  8bce                 mov ecx, esi
// 00a0bc6b  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 00a0bc72  e8799e0500           call 0xa65af0
// 00a0bc77  83ec10               sub esp, 0x10
// 00a0bc7a  8bcc                 mov ecx, esp
// 00a0bc7c  8919                 mov dword ptr [ecx], ebx
// 00a0bc7e  8bd3                 mov edx, ebx
// 00a0bc80  895104               mov dword ptr [ecx + 4], edx
// 00a0bc83  895108               mov dword ptr [ecx + 8], edx
// 00a0bc86  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0bc89  8b10                 mov edx, dword ptr [eax]
// 00a0bc8b  83ec10               sub esp, 0x10
// 00a0bc8e  8bcc                 mov ecx, esp
// 00a0bc90  8911                 mov dword ptr [ecx], edx
// 00a0bc92  8b5004               mov edx, dword ptr [eax + 4]
// 00a0bc95  895104               mov dword ptr [ecx + 4], edx
// 00a0bc98  8b5008               mov edx, dword ptr [eax + 8]
// 00a0bc9b  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0bc9e  895108               mov dword ptr [ecx + 8], edx
// 00a0bca1  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0bca4  8d4c245c             lea ecx, [esp + 0x5c]
// 00a0bca8  51                   push ecx
// 00a0bca9  57                   push edi
// 00a0bcaa  8bce                 mov ecx, esi
// 00a0bcac  e80f970500           call 0xa653c0
// 00a0bcb1  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a0bcb5  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 00a0bcb9  83fa0a               cmp edx, 0xa
// 00a0bcbc  0f8ebe000000         jle 0xa0bd80
// 00a0bcc2  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0bcc6  688cc9c100           push 0xc1c98c
// 00a0bccb  e8a0bbffff           call 0xa07870
// 00a0bcd0  8bd8                 mov ebx, eax
// 00a0bcd2  8d8424c4000000       lea eax, [esp + 0xc4]
// 00a0bcd9  50                   push eax
// 00a0bcda  8d4c2440             lea ecx, [esp + 0x40]
// 00a0bcde  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 00a0bce9  e8f2e0a1ff           call 0x429de0
// 00a0bcee  8b7004               mov esi, dword ptr [eax + 4]
// 00a0bcf1  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 00a0bcf8  51                   push ecx
// 00a0bcf9  8d4c2440             lea ecx, [esp + 0x40]
// 00a0bcfd  83ee04               sub esi, 4
// 00a0bd00  e8dbe0a1ff           call 0x429de0
// 00a0bd05  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 00a0bd0c  8b00                 mov eax, dword ptr [eax]
// 00a0bd0e  52                   push edx
// 00a0bd0f  b908000000           mov ecx, 8
// 00a0bd14  51                   push ecx
// 00a0bd15  83e803               sub eax, 3
// 00a0bd18  56                   push esi
// 00a0bd19  50                   push eax
// 00a0bd1a  8d8c24ec000000       lea ecx, [esp + 0xec]
// 00a0bd21  e84ac0a6ff           call 0x477d70
// 00a0bd26  6a03                 push 3
// 00a0bd28  55                   push ebp
// 00a0bd29  8d8424a4000000       lea eax, [esp + 0xa4]
// 00a0bd30  33f6                 xor esi, esi
// 00a0bd32  50                   push eax
// 00a0bd33  8bcb                 mov ecx, ebx
// 00a0bd35  89b42494000000       mov dword ptr [esp + 0x94], esi
// 00a0bd3c  e8af9d0500           call 0xa65af0
// 00a0bd41  83ec10               sub esp, 0x10
// 00a0bd44  8bcc                 mov ecx, esp
// 00a0bd46  8931                 mov dword ptr [ecx], esi
// 00a0bd48  33d2                 xor edx, edx
// 00a0bd4a  895104               mov dword ptr [ecx + 4], edx
// 00a0bd4d  895108               mov dword ptr [ecx + 8], edx
// 00a0bd50  83ec10               sub esp, 0x10
// 00a0bd53  8bd6                 mov edx, esi
// 00a0bd55  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0bd58  8b10                 mov edx, dword ptr [eax]
// 00a0bd5a  8bcc                 mov ecx, esp
// 00a0bd5c  8911                 mov dword ptr [ecx], edx
// 00a0bd5e  8b5004               mov edx, dword ptr [eax + 4]
// 00a0bd61  895104               mov dword ptr [ecx + 4], edx
// 00a0bd64  8b5008               mov edx, dword ptr [eax + 8]
// 00a0bd67  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0bd6a  895108               mov dword ptr [ecx + 8], edx
// 00a0bd6d  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0bd70  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 00a0bd77  51                   push ecx
// 00a0bd78  57                   push edi
// 00a0bd79  8bcb                 mov ecx, ebx
// 00a0bd7b  e840960500           call 0xa653c0
// 00a0bd80  8d9424ac000000       lea edx, [esp + 0xac]
// 00a0bd87  52                   push edx
// 00a0bd88  ff15f03ab200         call dword ptr [0xb23af0]
// 00a0bd8e  85c0                 test eax, eax
// 00a0bd90  7567                 jne 0xa0bdf9
// 00a0bd92  39442414             cmp dword ptr [esp + 0x14], eax
// 00a0bd96  7461                 je 0xa0bdf9
// 00a0bd98  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 00a0bd9d  755a                 jne 0xa0bdf9
// 00a0bd9f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a0bda3  8d5801               lea ebx, [eax + 1]
// 00a0bda6  6a02                 push 2
// 00a0bda8  53                   push ebx
// 00a0bda9  8d842484000000       lea eax, [esp + 0x84]
// 00a0bdb0  50                   push eax
// 00a0bdb1  33f6                 xor esi, esi
// 00a0bdb3  33ed                 xor ebp, ebp
// 00a0bdb5  e8369d0500           call 0xa65af0
// 00a0bdba  83ec10               sub esp, 0x10
// 00a0bdbd  8bcc                 mov ecx, esp
// 00a0bdbf  8931                 mov dword ptr [ecx], esi
// 00a0bdc1  895904               mov dword ptr [ecx + 4], ebx
// 00a0bdc4  896908               mov dword ptr [ecx + 8], ebp
// 00a0bdc7  8bd3                 mov edx, ebx
// 00a0bdc9  89510c               mov dword ptr [ecx + 0xc], edx
// 00a0bdcc  8b10                 mov edx, dword ptr [eax]
// 00a0bdce  83ec10               sub esp, 0x10
// 00a0bdd1  8bcc                 mov ecx, esp
// 00a0bdd3  8911                 mov dword ptr [ecx], edx
// 00a0bdd5  8b5004               mov edx, dword ptr [eax + 4]
// 00a0bdd8  895104               mov dword ptr [ecx + 4], edx
// 00a0bddb  8b5008               mov edx, dword ptr [eax + 8]
// 00a0bdde  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a0bde1  895108               mov dword ptr [ecx + 8], edx
// 00a0bde4  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0bde7  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00a0bdee  51                   push ecx
// 00a0bdef  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a0bdf3  57                   push edi
// 00a0bdf4  e8c7950500           call 0xa653c0
// 00a0bdf9  5f                   pop edi
// 00a0bdfa  5e                   pop esi
// 00a0bdfb  5d                   pop ebp
// 00a0bdfc  5b                   pop ebx
// 00a0bdfd  81c4ec000000         add esp, 0xec
// 00a0be03  c20800               ret 8
// copied from an identical function in another client (function ?DrawScrollBar@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp