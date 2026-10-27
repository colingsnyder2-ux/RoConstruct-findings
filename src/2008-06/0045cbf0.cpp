// from server: 33% by coldek
// roc 2008-06 0045cbf0  unit: CRobloxWnd  size: 1674 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045cbf0
//
// 0045cbf0  55                   push ebp
// 0045cbf1  8d6c2494             lea ebp, [esp - 0x6c]
// 0045cbf5  83ec6c               sub esp, 0x6c
// 0045cbf8  6aff                 push -1
// 0045cbfa  68d52d7c00           push 0x7c2dd5
// 0045cbff  64a100000000         mov eax, dword ptr fs:[0]
// 0045cc05  50                   push eax
// 0045cc06  64892500000000       mov dword ptr fs:[0], esp
// 0045cc0d  81ecf8000000         sub esp, 0xf8
// 0045cc13  53                   push ebx
// 0045cc14  56                   push esi
// 0045cc15  57                   push edi
// 0045cc16  8bf9                 mov edi, ecx
// 0045cc18  33f6                 xor esi, esi
// 0045cc1a  8d8d24ffffff         lea ecx, [ebp - 0xdc]
// 0045cc20  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045cc23  897d60               mov dword ptr [ebp + 0x60], edi
// 0045cc26  897564               mov dword ptr [ebp + 0x64], esi
// 0045cc29  e8b2e0ffff           call 0x45ace0
// 0045cc2e  0fb69788000000       movzx edx, byte ptr [edi + 0x88]
// 0045cc35  8b4574               mov eax, dword ptr [ebp + 0x74]
// 0045cc38  8b4d78               mov ecx, dword ptr [ebp + 0x78]
// 0045cc3b  f7da                 neg edx
// 0045cc3d  898524ffffff         mov dword ptr [ebp - 0xdc], eax
// 0045cc43  b808000000           mov eax, 8
// 0045cc48  1bd2                 sbb edx, edx
// 0045cc4a  23d0                 and edx, eax
// 0045cc4c  898544ffffff         mov dword ptr [ebp - 0xbc], eax
// 0045cc52  898538ffffff         mov dword ptr [ebp - 0xc8], eax
// 0045cc58  a168069300           mov eax, dword ptr [0x930668]
// 0045cc5d  898d28ffffff         mov dword ptr [ebp - 0xd8], ecx
// 0045cc63  57                   push edi
// 0045cc64  8d4d84               lea ecx, [ebp - 0x7c]
// 0045cc67  8975fc               mov dword ptr [ebp - 4], esi
// 0045cc6a  c78540ffffff18000000 mov dword ptr [ebp - 0xc0], 0x18
// 0045cc74  89953cffffff         mov dword ptr [ebp - 0xc4], edx
// 0045cc7a  898548ffffff         mov dword ptr [ebp - 0xb8], eax
// 0045cc80  e869472400           call 0x6a13ee
// 0045cc85  8b5720               mov edx, dword ptr [edi + 0x20]
// 0045cc88  8d4dd4               lea ecx, [ebp - 0x2c]
// 0045cc8b  51                   push ecx
// 0045cc8c  52                   push edx
// 0045cc8d  c645fc01             mov byte ptr [ebp - 4], 1
// 0045cc91  ff15842d8000         call dword ptr [0x802d84]
// 0045cc97  e874b82100           call 0x678510
// 0045cc9c  6808080000           push 0x808
// 0045cca1  89455c               mov dword ptr [ebp + 0x5c], eax
// 0045cca4  e8773c2400           call 0x6a0920
// 0045cca9  83c404               add esp, 4
// 0045ccac  894558               mov dword ptr [ebp + 0x58], eax
// 0045ccaf  c645fc02             mov byte ptr [ebp - 4], 2
// 0045ccb3  3bc6                 cmp eax, esi
// 0045ccb5  7409                 je 0x45ccc0
// 0045ccb7  8bc8                 mov ecx, eax
// 0045ccb9  e802ba2100           call 0x6786c0
// 0045ccbe  eb02                 jmp 0x45ccc2
// 0045ccc0  33c0                 xor eax, eax
// 0045ccc2  8987b8000000         mov dword ptr [edi + 0xb8], eax
// 0045ccc8  8d450c               lea eax, [ebp + 0xc]
// 0045cccb  50                   push eax
// 0045cccc  c645fc01             mov byte ptr [ebp - 4], 1
// 0045ccd0  e80baffaff           call 0x407be0
// 0045ccd5  8bc8                 mov ecx, eax
// 0045ccd7  e8d4671000           call 0x5634b0
// 0045ccdc  c645fc03             mov byte ptr [ebp - 4], 3
// 0045cce0  e86b60fbff           call 0x412d50
// 0045cce5  8b883c010000         mov ecx, dword ptr [eax + 0x13c]
// 0045cceb  894d58               mov dword ptr [ebp + 0x58], ecx
// 0045ccee  b900c2eb0b           mov ecx, 0xbebc200
// 0045ccf3  b80084d717           mov eax, 0x17d78400
// 0045ccf8  8945ec               mov dword ptr [ebp - 0x14], eax
// 0045ccfb  894504               mov dword ptr [ebp + 4], eax
// 0045ccfe  b80008af2f           mov eax, 0x2faf0800
// 0045cd03  894de8               mov dword ptr [ebp - 0x18], ecx
// 0045cd06  894d00               mov dword ptr [ebp], ecx
// 0045cd09  894d48               mov dword ptr [ebp + 0x48], ecx
// 0045cd0c  68f49b8100           push 0x819bf4
// 0045cd11  8d4d28               lea ecx, [ebp + 0x28]
// 0045cd14  c6456a00             mov byte ptr [ebp + 0x6a], 0
// 0045cd18  c745e400e1f505       mov dword ptr [ebp - 0x1c], 0x5f5e100
// 0045cd1f  894508               mov dword ptr [ebp + 8], eax
// 0045cd22  89454c               mov dword ptr [ebp + 0x4c], eax
// 0045cd25  c7455000105e5f       mov dword ptr [ebp + 0x50], 0x5f5e1000
// 0045cd2c  8d7de4               lea edi, [ebp - 0x1c]
// 0045cd2f  ff1558248000         call dword ptr [0x802458]
// 0045cd35  56                   push esi
// 0045cd36  8b35944e8000         mov esi, dword ptr [0x804e94]
// 0045cd3c  8d5528               lea edx, [ebp + 0x28]
// 0045cd3f  52                   push edx
// 0045cd40  8d450c               lea eax, [ebp + 0xc]
// 0045cd43  bb01000000           mov ebx, 1
// 0045cd48  50                   push eax
// 0045cd49  c645fc04             mov byte ptr [ebp - 4], 4
// 0045cd4d  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045cd50  ffd6                 call esi
// 0045cd52  83c40c               add esp, 0xc
// 0045cd55  84c0                 test al, al
// 0045cd57  7564                 jne 0x45cdbd
// 0045cd59  68e89b8100           push 0x819be8
// 0045cd5e  8d4d98               lea ecx, [ebp - 0x68]
// 0045cd61  ff1558248000         call dword ptr [0x802458]
// 0045cd67  6a00                 push 0
// 0045cd69  8d4d98               lea ecx, [ebp - 0x68]
// 0045cd6c  51                   push ecx
// 0045cd6d  8d550c               lea edx, [ebp + 0xc]
// 0045cd70  bb03000000           mov ebx, 3
// 0045cd75  52                   push edx
// 0045cd76  c745fc05000000       mov dword ptr [ebp - 4], 5
// 0045cd7d  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045cd80  ffd6                 call esi
// 0045cd82  83c40c               add esp, 0xc
// 0045cd85  84c0                 test al, al
// 0045cd87  7534                 jne 0x45cdbd
// 0045cd89  68d89b8100           push 0x819bd8
// 0045cd8e  8d4db4               lea ecx, [ebp - 0x4c]
// 0045cd91  ff1558248000         call dword ptr [0x802458]
// 0045cd97  6a00                 push 0
// 0045cd99  8d45b4               lea eax, [ebp - 0x4c]
// 0045cd9c  50                   push eax
// 0045cd9d  8d4d0c               lea ecx, [ebp + 0xc]
// 0045cda0  bb07000000           mov ebx, 7
// 0045cda5  51                   push ecx
// 0045cda6  c745fc06000000       mov dword ptr [ebp - 4], 6
// 0045cdad  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045cdb0  ffd6                 call esi
// 0045cdb2  83c40c               add esp, 0xc
// 0045cdb5  c6456b00             mov byte ptr [ebp + 0x6b], 0
// 0045cdb9  84c0                 test al, al
// 0045cdbb  7404                 je 0x45cdc1
// 0045cdbd  c6456b01             mov byte ptr [ebp + 0x6b], 1
// 0045cdc1  c745fc05000000       mov dword ptr [ebp - 4], 5
// 0045cdc8  f6c304               test bl, 4
// 0045cdcb  740f                 je 0x45cddc
// 0045cdcd  83e3fb               and ebx, 0xfffffffb
// 0045cdd0  8d4db4               lea ecx, [ebp - 0x4c]
// 0045cdd3  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045cdd6  ff1568248000         call dword ptr [0x802468]
// 0045cddc  c745fc04000000       mov dword ptr [ebp - 4], 4
// 0045cde3  f6c302               test bl, 2
// 0045cde6  740f                 je 0x45cdf7
// 0045cde8  83e3fd               and ebx, 0xfffffffd
// 0045cdeb  8d4d98               lea ecx, [ebp - 0x68]
// 0045cdee  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045cdf1  ff1568248000         call dword ptr [0x802468]
// 0045cdf7  c745fc03000000       mov dword ptr [ebp - 4], 3
// 0045cdfe  f6c301               test bl, 1
// 0045ce01  740c                 je 0x45ce0f
// 0045ce03  8d4d28               lea ecx, [ebp + 0x28]
// 0045ce06  83e3fe               and ebx, 0xfffffffe
// 0045ce09  ff1568248000         call dword ptr [0x802468]
// 0045ce0f  807d6b00             cmp byte ptr [ebp + 0x6b], 0
// 0045ce13  7405                 je 0x45ce1a
// 0045ce15  8d7d00               lea edi, [ebp]
// 0045ce18  eb3a                 jmp 0x45ce54
// 0045ce1a  68d09b8100           push 0x819bd0
// 0045ce1f  8d4d28               lea ecx, [ebp + 0x28]
// 0045ce22  ff1558248000         call dword ptr [0x802458]
// 0045ce28  6a00                 push 0
// 0045ce2a  8d5528               lea edx, [ebp + 0x28]
// 0045ce2d  52                   push edx
// 0045ce2e  8d450c               lea eax, [ebp + 0xc]
// 0045ce31  50                   push eax
// 0045ce32  c645fc07             mov byte ptr [ebp - 4], 7
// 0045ce36  ffd6                 call esi
// 0045ce38  83c40c               add esp, 0xc
// 0045ce3b  8d4d28               lea ecx, [ebp + 0x28]
// 0045ce3e  88456b               mov byte ptr [ebp + 0x6b], al
// 0045ce41  c645fc03             mov byte ptr [ebp - 4], 3
// 0045ce45  ff1568248000         call dword ptr [0x802468]
// 0045ce4b  807d6b00             cmp byte ptr [ebp + 0x6b], 0
// 0045ce4f  7403                 je 0x45ce54
// 0045ce51  8d7d48               lea edi, [ebp + 0x48]
// 0045ce54  8b4558               mov eax, dword ptr [ebp + 0x58]
// 0045ce57  33c9                 xor ecx, ecx
// 0045ce59  3bc1                 cmp eax, ecx
// 0045ce5b  7547                 jne 0x45cea4
// 0045ce5d  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 0045ce60  3b07                 cmp eax, dword ptr [edi]
// 0045ce62  7c11                 jl 0x45ce75
// 0045ce64  3b4704               cmp eax, dword ptr [edi + 4]
// 0045ce67  7d11                 jge 0x45ce7a
// 0045ce69  c6456a01             mov byte ptr [ebp + 0x6a], 1
// 0045ce6d  890d682f9600         mov dword ptr [0x962f68], ecx
// 0045ce73  eb36                 jmp 0x45ceab
// 0045ce75  3b4704               cmp eax, dword ptr [edi + 4]
// 0045ce78  7c15                 jl 0x45ce8f
// 0045ce7a  3b4708               cmp eax, dword ptr [edi + 8]
// 0045ce7d  7d13                 jge 0x45ce92
// 0045ce7f  c6456a01             mov byte ptr [ebp + 0x6a], 1
// 0045ce83  c705682f960001000000 mov dword ptr [0x962f68], 1
// 0045ce8d  eb1c                 jmp 0x45ceab
// 0045ce8f  3b4708               cmp eax, dword ptr [edi + 8]
// 0045ce92  7e17                 jle 0x45ceab
// 0045ce94  c6456a01             mov byte ptr [ebp + 0x6a], 1
// 0045ce98  c705682f960002000000 mov dword ptr [0x962f68], 2
// 0045cea2  eb07                 jmp 0x45ceab
// 0045cea4  83f802               cmp eax, 2
// 0045cea7  0f95456a             setne byte ptr [ebp + 0x6a]
// 0045ceab  a064de9600           mov al, byte ptr [0x96de64]
// 0045ceb0  8a556a               mov dl, byte ptr [ebp + 0x6a]
// 0045ceb3  3ad0                 cmp dl, al
// 0045ceb5  7407                 je 0x45cebe
// 0045ceb7  8ac2                 mov al, dl
// 0045ceb9  a264de9600           mov byte ptr [0x96de64], al
// 0045cebe  84c0                 test al, al
// 0045cec0  740f                 je 0x45ced1
// 0045cec2  8b5560               mov edx, dword ptr [ebp + 0x60]
// 0045cec5  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0045cecb  8988f8070000         mov dword ptr [eax + 0x7f8], ecx
// 0045ced1  c645fc08             mov byte ptr [ebp - 4], 8
// 0045ced5  e8765efbff           call 0x412d50
// 0045ceda  8b8038010000         mov eax, dword ptr [eax + 0x138]
// 0045cee0  83e800               sub eax, 0
// 0045cee3  747d                 je 0x45cf62
// 0045cee5  83e801               sub eax, 1
// 0045cee8  7471                 je 0x45cf5b
// 0045ceea  83e801               sub eax, 1
// 0045ceed  0f8461010000         je 0x45d054
// 0045cef3  8d4554               lea eax, [ebp + 0x54]
// 0045cef6  50                   push eax
// 0045cef7  e824c71000           call 0x569620
// 0045cefc  83c404               add esp, 4
// 0045ceff  8b00                 mov eax, dword ptr [eax]
// 0045cf01  68b49b8100           push 0x819bb4
// 0045cf06  6a01                 push 1
// 0045cf08  50                   push eax
// 0045cf09  c645fc0c             mov byte ptr [ebp - 4], 0xc
// 0045cf0d  e88ec41000           call 0x5693a0
// 0045cf12  8b7558               mov esi, dword ptr [ebp + 0x58]
// 0045cf15  83c40c               add esp, 0xc
// 0045cf18  c645fc08             mov byte ptr [ebp - 4], 8
// 0045cf1c  85f6                 test esi, esi
// 0045cf1e  0f8430010000         je 0x45d054
// 0045cf24  8d4e04               lea ecx, [esi + 4]
// 0045cf27  83caff               or edx, 0xffffffff
// 0045cf2a  f00fc111             lock xadd dword ptr [ecx], edx
// 0045cf2e  0f8520010000         jne 0x45d054
// 0045cf34  8b06                 mov eax, dword ptr [esi]
// 0045cf36  8b5004               mov edx, dword ptr [eax + 4]
// 0045cf39  8bce                 mov ecx, esi
// 0045cf3b  ffd2                 call edx
// 0045cf3d  8d4608               lea eax, [esi + 8]
// 0045cf40  83c9ff               or ecx, 0xffffffff
// 0045cf43  f00fc108             lock xadd dword ptr [eax], ecx
// 0045cf47  0f8507010000         jne 0x45d054
// 0045cf4d  8b16                 mov edx, dword ptr [esi]
// 0045cf4f  8b4208               mov eax, dword ptr [edx + 8]
// 0045cf52  8bce                 mov ecx, esi
// 0045cf54  ffd0                 call eax
// 0045cf56  e9f9000000           jmp 0x45d054
// 0045cf5b  33ff                 xor edi, edi
// 0045cf5d  e9f7000000           jmp 0x45d059
// 0045cf62  33c9                 xor ecx, ecx
// 0045cf64  817d5c00c2eb0b       cmp dword ptr [ebp + 0x5c], 0xbebc200
// 0045cf6b  68e89b8100           push 0x819be8
// 0045cf70  0f9dc1               setge cl
// 0045cf73  49                   dec ecx
// 0045cf74  83e102               and ecx, 2
// 0045cf77  8bf9                 mov edi, ecx
// 0045cf79  8d4db4               lea ecx, [ebp - 0x4c]
// 0045cf7c  ff1558248000         call dword ptr [0x802458]
// 0045cf82  6a00                 push 0
// 0045cf84  8d55b4               lea edx, [ebp - 0x4c]
// 0045cf87  52                   push edx
// 0045cf88  8d450c               lea eax, [ebp + 0xc]
// 0045cf8b  83cb08               or ebx, 8
// 0045cf8e  50                   push eax
// 0045cf8f  c645fc09             mov byte ptr [ebp - 4], 9
// 0045cf93  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045cf96  ffd6                 call esi
// 0045cf98  83c40c               add esp, 0xc
// 0045cf9b  84c0                 test al, al
// 0045cf9d  7560                 jne 0x45cfff
// 0045cf9f  68d89b8100           push 0x819bd8
// 0045cfa4  8d4d98               lea ecx, [ebp - 0x68]
// 0045cfa7  ff1558248000         call dword ptr [0x802458]
// 0045cfad  6a00                 push 0
// 0045cfaf  8d4d98               lea ecx, [ebp - 0x68]
// 0045cfb2  51                   push ecx
// 0045cfb3  8d550c               lea edx, [ebp + 0xc]
// 0045cfb6  83cb10               or ebx, 0x10
// 0045cfb9  52                   push edx
// 0045cfba  c745fc0a000000       mov dword ptr [ebp - 4], 0xa
// 0045cfc1  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045cfc4  ffd6                 call esi
// 0045cfc6  83c40c               add esp, 0xc
// 0045cfc9  84c0                 test al, al
// 0045cfcb  7532                 jne 0x45cfff
// 0045cfcd  68d09b8100           push 0x819bd0
// 0045cfd2  8d4d28               lea ecx, [ebp + 0x28]
// 0045cfd5  ff1558248000         call dword ptr [0x802458]
// 0045cfdb  6a00                 push 0
// 0045cfdd  8d4528               lea eax, [ebp + 0x28]
// 0045cfe0  50                   push eax
// 0045cfe1  8d4d0c               lea ecx, [ebp + 0xc]
// 0045cfe4  83cb20               or ebx, 0x20
// 0045cfe7  51                   push ecx
// 0045cfe8  c745fc0b000000       mov dword ptr [ebp - 4], 0xb
// 0045cfef  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045cff2  ffd6                 call esi
// 0045cff4  83c40c               add esp, 0xc
// 0045cff7  c6456b00             mov byte ptr [ebp + 0x6b], 0
// 0045cffb  84c0                 test al, al
// 0045cffd  7404                 je 0x45d003
// 0045cfff  c6456b01             mov byte ptr [ebp + 0x6b], 1
// 0045d003  c745fc0a000000       mov dword ptr [ebp - 4], 0xa
// 0045d00a  f6c320               test bl, 0x20
// 0045d00d  740f                 je 0x45d01e
// 0045d00f  83e3df               and ebx, 0xffffffdf
// 0045d012  8d4d28               lea ecx, [ebp + 0x28]
// 0045d015  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045d018  ff1568248000         call dword ptr [0x802468]
// 0045d01e  c745fc09000000       mov dword ptr [ebp - 4], 9
// 0045d025  f6c310               test bl, 0x10
// 0045d028  740f                 je 0x45d039
// 0045d02a  83e3ef               and ebx, 0xffffffef
// 0045d02d  8d4d98               lea ecx, [ebp - 0x68]
// 0045d030  895d64               mov dword ptr [ebp + 0x64], ebx
// 0045d033  ff1568248000         call dword ptr [0x802468]
// 0045d039  c745fc08000000       mov dword ptr [ebp - 4], 8
// 0045d040  f6c308               test bl, 8
// 0045d043  7409                 je 0x45d04e
// 0045d045  8d4db4               lea ecx, [ebp - 0x4c]
// 0045d048  ff1568248000         call dword ptr [0x802468]
// 0045d04e  807d6b00             cmp byte ptr [ebp + 0x6b], 0
// 0045d052  7405                 je 0x45d059
// 0045d054  bf02000000           mov edi, 2
// 0045d059  e802abfcff           call 0x427b60
// 0045d05e  83ec1c               sub esp, 0x1c
// 0045d061  8bd4                 mov edx, esp
// 0045d063  896558               mov dword ptr [ebp + 0x58], esp
// 0045d066  68b09b8100           push 0x819bb0
// 0045d06b  52                   push edx
// 0045d06c  8bc8                 mov ecx, eax
// 0045d06e  e8ddaffcff           call 0x428050
// 0045d073  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 0045d076  2b45d8               sub eax, dword ptr [ebp - 0x28]
// 0045d079  8b4ddc               mov ecx, dword ptr [ebp - 0x24]
// 0045d07c  2b4dd4               sub ecx, dword ptr [ebp - 0x2c]
// 0045d07f  57                   push edi
// 0045d080  8b7d60               mov edi, dword ptr [ebp + 0x60]
// 0045d083  50                   push eax
// 0045d084  8b4720               mov eax, dword ptr [edi + 0x20]
// 0045d087  51                   push ecx
// 0045d088  33c9                 xor ecx, ecx
// 0045d08a  be03000000           mov esi, 3
// 0045d08f  39775c               cmp dword ptr [edi + 0x5c], esi
// 0045d092  50                   push eax
// 0045d093  0f95c1               setne cl
// 0045d096  51                   push ecx
// 0045d097  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 0045d09d  e83ed72100           call 0x67a7e0
// 0045d0a2  8975fc               mov dword ptr [ebp - 4], esi
// 0045d0a5  e8a65cfbff           call 0x412d50
// 0045d0aa  83b84001000002       cmp dword ptr [eax + 0x140], 2
// 0045d0b1  0f95c2               setne dl
// 0045d0b4  8815642f9600         mov byte ptr [0x962f64], dl
// 0045d0ba  e8915cfbff           call 0x412d50
// 0045d0bf  8b8034010000         mov eax, dword ptr [eax + 0x134]
// 0045d0c5  83e800               sub eax, 0
// 0045d0c8  740b                 je 0x45d0d5
// 0045d0ca  83e801               sub eax, 1
// 0045d0cd  7522                 jne 0x45d0f1
// 0045d0cf  c6457801             mov byte ptr [ebp + 0x78], 1
// 0045d0d3  eb20                 jmp 0x45d0f5
// 0045d0d5  817d5c00e1f505       cmp dword ptr [ebp + 0x5c], 0x5f5e100
// 0045d0dc  7c13                 jl 0x45d0f1
// 0045d0de  8b87b8000000         mov eax, dword ptr [edi + 0xb8]
// 0045d0e4  80b80408000000       cmp byte ptr [eax + 0x804], 0
// 0045d0eb  c6457801             mov byte ptr [ebp + 0x78], 1
// 0045d0ef  7404                 je 0x45d0f5
// 0045d0f1  c6457800             mov byte ptr [ebp + 0x78], 0
// 0045d0f5  8b4d78               mov ecx, dword ptr [ebp + 0x78]
// 0045d0f8  51                   push ecx
// 0045d0f9  e8a2a00700           call 0x4d71a0
// 0045d0fe  6a00                 push 0
// 0045d100  ff15984e8000         call dword ptr [0x804e98]
// 0045d106  6a00                 push 0
// 0045d108  ff159c4e8000         call dword ptr [0x804e9c]
// 0045d10e  d905ac9b8100         fld dword ptr [0x819bac]
// 0045d114  8b97b8000000         mov edx, dword ptr [edi + 0xb8]
// 0045d11a  d95544               fst dword ptr [ebp + 0x44]
// 0045d11d  8b4a04               mov ecx, dword ptr [edx + 4]
// 0045d120  d95548               fst dword ptr [ebp + 0x48]
// 0045d123  d95d4c               fstp dword ptr [ebp + 0x4c]
// 0045d126  83c40c               add esp, 0xc
// 0045d129  d9e8                 fld1 
// 0045d12b  8d4544               lea eax, [ebp + 0x44]
// 0045d12e  50                   push eax
// 0045d12f  d95d50               fstp dword ptr [ebp + 0x50]
// 0045d132  ff15a04e8000         call dword ptr [0x804ea0]
// 0045d138  d905a89b8100         fld dword ptr [0x819ba8]
// 0045d13e  8b8fb8000000         mov ecx, dword ptr [edi + 0xb8]
// 0045d144  8b4908               mov ecx, dword ptr [ecx + 8]
// 0045d147  83ec0c               sub esp, 0xc
// 0045d14a  d95c2408             fstp dword ptr [esp + 8]
// 0045d14e  d905a49b8100         fld dword ptr [0x819ba4]
// 0045d154  d95c2404             fstp dword ptr [esp + 4]
// 0045d158  d9ee                 fldz 
// 0045d15a  d91c24               fstp dword ptr [esp]
// 0045d15d  ff15a44e8000         call dword ptr [0x804ea4]
// 0045d163  d9ee                 fldz 
// 0045d165  8b97b8000000         mov edx, dword ptr [edi + 0xb8]
// 0045d16b  8b4a08               mov ecx, dword ptr [edx + 8]
// 0045d16e  83ec0c               sub esp, 0xc
// 0045d171  d9542408             fst dword ptr [esp + 8]
// 0045d175  d905a49b8100         fld dword ptr [0x819ba4]
// 0045d17b  d95c2404             fstp dword ptr [esp + 4]
// 0045d17f  d91c24               fstp dword ptr [esp]
// 0045d182  ff15a84e8000         call dword ptr [0x804ea8]
// 0045d188  8d4d0c               lea ecx, [ebp + 0xc]
// 0045d18b  c645fc01             mov byte ptr [ebp - 4], 1
// 0045d18f  ff1568248000         call dword ptr [0x802468]
// 0045d195  8d4d84               lea ecx, [ebp - 0x7c]
// 0045d198  c645fc00             mov byte ptr [ebp - 4], 0
// 0045d19c  e847422400           call 0x6a13e8
// 0045d1a1  8d8d64ffffff         lea ecx, [ebp - 0x9c]
// 0045d1a7  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0045d1ae  ff1568248000         call dword ptr [0x802468]
// 0045d1b4  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0045d1b7  5f                   pop edi
// 0045d1b8  5e                   pop esi
// 0045d1b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0045d1c0  5b                   pop ebx
// 0045d1c1  83c56c               add ebp, 0x6c
// 0045d1c4  8be5                 mov esp, ebp
// 0045d1c6  5d                   pop ebp
// 0045d1c7  c20800               ret 8
// 0045d1ca  8b7560               mov esi, dword ptr [ebp + 0x60]
// 0045d1cd  837e6000             cmp dword ptr [esi + 0x60], 0
// 0045d1d1  7570                 jne 0x45d243
// 0045d1d3  e8785bfbff           call 0x412d50
// 0045d1d8  8bc8                 mov ecx, eax
// 0045d1da  e861c2feff           call 0x449440
// 0045d1df  83f801               cmp eax, 1
// 0045d1e2  755f                 jne 0x45d243
// 0045d1e4  ff4660               inc dword ptr [esi + 0x60]
// 0045d1e7  8d4554               lea eax, [ebp + 0x54]
// 0045d1ea  50                   push eax
// 0045d1eb  e830c41000           call 0x569620
// 0045d1f0  83c404               add esp, 4
// 0045d1f3  8b4dd0               mov ecx, dword ptr [ebp - 0x30]
// 0045d1f6  8b11                 mov edx, dword ptr [ecx]
// 0045d1f8  8b38                 mov edi, dword ptr [eax]
// 0045d1fa  8b4204               mov eax, dword ptr [edx + 4]
// 0045d1fd  c645fc0e             mov byte ptr [ebp - 4], 0xe
// 0045d201  ffd0                 call eax
// 0045d203  50                   push eax
// 0045d204  68789b8100           push 0x819b78
// 0045d209  6a02                 push 2
// 0045d20b  57                   push edi
// 0045d20c  e88fc11000           call 0x5693a0
// 0045d211  83c410               add esp, 0x10
// 0045d214  8d4d54               lea ecx, [ebp + 0x54]
// 0045d217  c645fc0d             mov byte ptr [ebp - 4], 0xd
// 0045d21b  e840341a00           call 0x600660
// 0045d220  8b4d78               mov ecx, dword ptr [ebp + 0x78]
// 0045d223  8b5574               mov edx, dword ptr [ebp + 0x74]
// 0045d226  51                   push ecx
// 0045d227  52                   push edx
// 0045d228  8bce                 mov ecx, esi
// 0045d22a  c7465c02000000       mov dword ptr [esi + 0x5c], 2
// 0045d231  e88a020000           call 0x45d4c0
// 0045d236  c745fc03000000       mov dword ptr [ebp - 4], 3
// 0045d23d  b888d14500           mov eax, 0x45d188
// 0045d242  c3                   ret 
// 0045d243  e888deffff           call 0x45b0d0
// 0045d248  68589b8100           push 0x819b58
// 0045d24d  8d4d28               lea ecx, [ebp + 0x28]
// 0045d250  ff1558248000         call dword ptr [0x802458]
// 0045d256  8d4528               lea eax, [ebp + 0x28]
// 0045d259  50                   push eax
// 0045d25a  8d8dfcfeffff         lea ecx, [ebp - 0x104]
// 0045d260  c645fc0f             mov byte ptr [ebp - 4], 0xf
// 0045d264  e8e7cafaff           call 0x409d50
// 0045d269  68c81b8d00           push 0x8d1bc8
// 0045d26e  8d8dfcfeffff         lea ecx, [ebp - 0x104]
// 0045d274  51                   push ecx
// 0045d275  e812432400           call 0x6a158c

// from server: 35% by colin
// roc-cl: 50727
// roc-flags: /GS- /EHsc /MD /O2 /Ob0 /Oy-
// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Ctl {
    virtual ~Ctl();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct CRobloxWnd {
    char pad0[0x20];
    void* hwnd;
    char pad1[0x38];
    int mode;
    char pad2[0x58];
    void* gfx;
    char pad3[0x88];
    char flag88;
    char pad4[0x2f];
    void* obj_b8;
    void update();
};

extern "C" void __cdecl sub_45ace0(void*);
extern "C" void __cdecl sub_6a13ee(void*, void*);
extern "C" void* __cdecl sub_678510();
extern "C" void* __cdecl sub_6a0920(unsigned);
extern "C" void __cdecl sub_6786c0(void*);
extern "C" void* __cdecl sub_407be0(void*);
extern "C" void __cdecl sub_5634b0(void*, void*);
extern "C" void* __cdecl sub_412d50();
extern "C" void __cdecl sub_427b60();
extern "C" void __cdecl sub_428050(void*, void*, const char*);
extern "C" void __cdecl sub_4d71a0(int);
extern "C" void* __cdecl sub_569620(void*);
extern "C" void __cdecl sub_5693a0(void*, int, const char*);
extern "C" void __cdecl sub_67a7e0(void*, int, int, int, int, int);

extern "C" void __stdcall GetClientRect(void*, void*);

extern int g_962f68;
extern char g_96de64;
extern char g_962f64;
extern float g_819ba4;
extern float g_819ba8;
extern float g_819bac;
extern void* g_819bb0;
extern void* g_819bb4;
extern void* g_819bd0;
extern void* g_819bd8;
extern void* g_819be8;
extern void* g_819bf4;
extern void* g_930668;
extern void* g_804e94;
extern void* g_804e98;
extern void* g_804e9c;
extern void* g_804ea0;
extern void* g_804ea4;
extern void* g_804ea8;
extern void* g_802458;
extern void* g_802468;
extern void* g_802d84;

void CRobloxWnd::update()
{
    char buf[0x100];
    void* dc;
    void* ctl;
    void* obj;
    int w, h;
    int mode;
    int flag;
    int idx;
    int* ranges;
    int r0, r1, r2;
    int sel;
    char changed;
    char matched;

    sub_45ace0(buf);

    flag = (this->flag88 != 0) ? 0 : 8;

    w = *(int*)((char*)&buf + 0x74);
    h = *(int*)((char*)&buf + 0x78);

    *(int*)((char*)&buf + 0x00) = w;
    *(int*)((char*)&buf + 0x04) = h;
    *(int*)((char*)&buf + 0x08) = 8;
    *(int*)((char*)&buf + 0x0c) = 8;
    *(int*)((char*)&buf + 0x10) = 0x18;
    *(int*)((char*)&buf + 0x14) = flag;
    *(int*)((char*)&buf + 0x18) = (int)g_930668;

    sub_6a13ee((char*)&buf + 0x28, this);

    GetClientRect(this->hwnd, (char*)&buf + 0x54);

    dc = sub_678510();
    *(int*)((char*)&buf + 0x5c) = (int)dc;

    obj = sub_6a0920(0x808);
    *(int*)((char*)&buf + 0x58) = (int)obj;
    if (obj != 0) {
        sub_6786c0(obj);
    } else {
        obj = 0;
    }
    this->obj_b8 = obj;

    ctl = sub_407be0((char*)&buf + 0x0c);
    sub_5634b0(ctl, 0);

    {
        void* app = sub_412d50();
        *(int*)((char*)&buf + 0x58) = *(int*)((char*)app + 0x13c);
    }

    *(int*)((char*)&buf + 0x00) = 0xbebc200;
    *(int*)((char*)&buf + 0x04) = 0x17d78400;
    *(int*)((char*)&buf + 0x08) = 0x2faf0800;
    *(int*)((char*)&buf + 0x0c) = 0x5f5e100;
    *(int*)((char*)&buf + 0x10) = 0x17d78400;
    *(int*)((char*)&buf + 0x14) = 0x2faf0800;
    *(int*)((char*)&buf + 0x18) = 0x5f5e1000;
    *(int*)((char*)&buf + 0x1c) = 0xbebc200;

    *(char*)((char*)&buf + 0x6a) = 0;

    ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x28);

    matched = 0;
    if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x28, (char*)&buf + 0x0c)) {
        matched = 1;
    } else {
        ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x98);
        if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x98, (char*)&buf + 0x0c)) {
            matched = 1;
        } else {
            ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0xb4);
            ((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0xb4, (char*)&buf + 0x0c);
            *(char*)((char*)&buf + 0x6b) = 0;
        }
        ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0x98);
    }
    ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0x28);

    if (matched) {
        ranges = (int*)((char*)&buf + 0x00);
    } else {
        ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x28);
        if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x28, (char*)&buf + 0x0c)) {
            ranges = (int*)((char*)&buf + 0x48);
        } else {
            ranges = (int*)((char*)&buf + 0x00);
        }
        ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0x28);
    }

    sel = *(int*)((char*)&buf + 0x58);
    if (sel == 0) {
        mode = *(int*)((char*)&buf + 0x5c);
        r0 = ranges[0];
        r1 = ranges[1];
        r2 = ranges[2];
        if (mode >= r0) {
            if (mode < r1) {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 0;
            } else if (mode < r2) {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 1;
            } else {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 2;
            }
        } else {
            if (mode < r1) {
                if (mode > r2) {
                    *(char*)((char*)&buf + 0x6a) = 1;
                    g_962f68 = 2;
                }
            } else if (mode < r2) {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 1;
            } else {
                *(char*)((char*)&buf + 0x6a) = 1;
                g_962f68 = 2;
            }
        }
    } else {
        *(char*)((char*)&buf + 0x6a) = (sel != 2);
    }

    changed = *(char*)((char*)&buf + 0x6a);
    if (changed != g_96de64) {
        g_96de64 = changed;
    }
    if (changed) {
        *(int*)((char*)this->obj_b8 + 0x7f8) = 0;
    }

    {
        void* app = sub_412d50();
        int m = *(int*)((char*)app + 0x138);
        if (m == 0) {
            int v = *(int*)((char*)&buf + 0x5c);
            idx = (v >= 0xbebc200) ? 2 : 0;
            ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0xb4);
            if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0xb4, (char*)&buf + 0x0c)) {
                idx = 2;
            } else {
                ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x98);
                if (((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x98, (char*)&buf + 0x0c)) {
                    idx = 2;
                } else {
                    ((void(__stdcall*)(void*))g_802458)((char*)&buf + 0x28);
                    ((int(__stdcall*)(void*, void*, void*))g_804e94)(0, (char*)&buf + 0x28, (char*)&buf + 0x0c);
                    *(char*)((char*)&buf + 0x6b) = 0;
                }
                ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0x98);
            }
            ((void(__stdcall*)(void*))g_802468)((char*)&buf + 0xb4);
            if (*(char*)((char*)&buf + 0x6b) != 0) {
                idx = 2;
            }
        } else if (m == 1) {
            idx = 0;
        } else if (m == 2) {
            idx = 2;
        } else {
            void* s = sub_569620((char*)&buf + 0x54);
            sub_5693a0(*(void**)s, 1, (const char*)g_819bb4);
            if (*(int*)((char*)&buf + 0x58) != 0) {
                Ctl* c = (Ctl*)*(int*)((char*)&buf + 0x58);
                if (_InterlockedExchangeAdd(&c->strong, -1) == 1) {
                    c->dispose();
                    if (_InterlockedExchangeAdd(&c->weak, -1) == 1) {
                        c->destroy();
                    }
                }
            }
            idx = 2;
        }
    }

    sub_427b60();
    {
        char tmpbuf[0x1c];
        sub_428050(tmpbuf, (char*)&buf + 0x58, (const char*)g_819bb0);
    }

    {
        int dx = *(int*)((char*)&buf + 0x58) - *(int*)((char*)&buf + 0x50);
        int dy = *(int*)((char*)&buf + 0x5c) - *(int*)((char*)&buf + 0x54);
        int ne = (this->mode != 3) ? 1 : 0;
        sub_67a7e0(this->obj_b8, ne, (int)this->hwnd, dy, dx, idx);
    }

    {
        void* app = sub_412d50();
        g_962f64 = (*(int*)((char*)app + 0x140) != 2);
    }

    {
        void* app = sub_412d50();
        int m = *(int*)((char*)app + 0x134);
        if (m == 0) {
            if (*(int*)((char*)&buf + 0x5c) >= 0x5f5e100) {
                if (*(char*)((char*)this->obj_b8 + 0x804) == 0) {
                    *(char*)((char*)&buf + 0x78) = 1;
                } else {
                    *(char*)((char*)&buf + 0x78) = 0;
                }
            } else {
                *(char*)((char*)&buf + 0x78) = 0;
            }
        } else if (m == 1) {
            *(char*)((char*)&buf + 0x78) = 1;
        } else {
            *(char*)((char*)&buf + 0x78) = 0;
        }
    }

    sub_4d71a0(*(int*)((char*)&buf + 0x78));

    ((void(__stdcall*)(int))g_804e98)(0);
    ((void(__stdcall*)(int))g_804e9c)(0);

    {
        float f = g_819bac;
        *(float*)((char*)&buf + 0x44) = f;
        *(float*)((char*)&buf + 0x48) = f;
        *(float*)((char*)&buf + 0x4c) = f;
        *(float*)((char*)&buf + 0x50) = 1.0f;
        ((void(__stdcall*)(void*))g_804ea0)((char*)&buf + 0x44);
    }

    {
        void* g = this->obj_b8;
        void* cam = *(void**)((char*)g + 4);
        float a = g_819ba8;
        float b = g_819ba4;
        ((void(__stdcall*)(void*, float, float, float))g_804ea4)(cam, 0.0f, b, a);
    }

    {
        void* g = this->obj_b8;
        void* cam = *(void**)((char*)g + 8);
        float b = g_819ba4;
        ((void(__stdcall*)(void*, float, float, float))g_804ea8)(cam, 0.0f, b, 0.0f);
    }
}
