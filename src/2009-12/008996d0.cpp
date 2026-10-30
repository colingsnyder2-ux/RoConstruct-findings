// roc 2009-12 008996d0  unit: CXTPRibbonBar  size: 2987 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008996d0
//
// 008996d0  6aff                 push -1
// 008996d2  68181a9600           push 0x961a18
// 008996d7  64a100000000         mov eax, dword ptr fs:[0]
// 008996dd  50                   push eax
// 008996de  81ecac000000         sub esp, 0xac
// 008996e4  53                   push ebx
// 008996e5  55                   push ebp
// 008996e6  56                   push esi
// 008996e7  57                   push edi
// 008996e8  a10052b600           mov eax, dword ptr [0xb65200]
// 008996ed  33c4                 xor eax, esp
// 008996ef  50                   push eax
// 008996f0  8d8424c0000000       lea eax, [esp + 0xc0]
// 008996f7  64a300000000         mov dword ptr fs:[0], eax
// 008996fd  8bf9                 mov edi, ecx
// 008996ff  57                   push edi
// 00899700  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00899707  e8caaff5ff           call 0x7f46d6
// 0089970c  8b07                 mov eax, dword ptr [edi]
// 0089970e  8b9028020000         mov edx, dword ptr [eax + 0x228]
// 00899714  33ed                 xor ebp, ebp
// 00899716  8bcf                 mov ecx, edi
// 00899718  89ac24c8000000       mov dword ptr [esp + 0xc8], ebp
// 0089971f  ffd2                 call edx
// 00899721  8bf0                 mov esi, eax
// 00899723  8b07                 mov eax, dword ptr [edi]
// 00899725  8b902c020000         mov edx, dword ptr [eax + 0x22c]
// 0089972b  8bcf                 mov ecx, edi
// 0089972d  8974242c             mov dword ptr [esp + 0x2c], esi
// 00899731  ffd2                 call edx
// 00899733  8bcf                 mov ecx, edi
// 00899735  8bd0                 mov edx, eax
// 00899737  e894b5ffff           call 0x894cd0
// 0089973c  3bc5                 cmp eax, ebp
// 0089973e  750c                 jne 0x89974c
// 00899740  39af90020000         cmp dword ptr [edi + 0x290], ebp
// 00899746  7504                 jne 0x89974c
// 00899748  33c9                 xor ecx, ecx
// 0089974a  eb05                 jmp 0x899751
// 0089974c  b901000000           mov ecx, 1
// 00899751  8b875c020000         mov eax, dword ptr [edi + 0x25c]
// 00899757  8944241c             mov dword ptr [esp + 0x1c], eax
// 0089975b  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00899762  8d58fe               lea ebx, [eax - 2]
// 00899765  03d6                 add edx, esi
// 00899767  895c2438             mov dword ptr [esp + 0x38], ebx
// 0089976b  bb04000000           mov ebx, 4
// 00899770  8974243c             mov dword ptr [esp + 0x3c], esi
// 00899774  89742454             mov dword ptr [esp + 0x54], esi
// 00899778  8b359cca9800         mov esi, dword ptr [0x98ca9c]
// 0089977e  894c2428             mov dword ptr [esp + 0x28], ecx
// 00899782  c744243002000000     mov dword ptr [esp + 0x30], 2
// 0089978a  896c2434             mov dword ptr [esp + 0x34], ebp
// 0089978e  896c2450             mov dword ptr [esp + 0x50], ebp
// 00899792  89442458             mov dword ptr [esp + 0x58], eax
// 00899796  8954245c             mov dword ptr [esp + 0x5c], edx
// 0089979a  895c2420             mov dword ptr [esp + 0x20], ebx
// 0089979e  3bcd                 cmp ecx, ebp
// 008997a0  0f84ad000000         je 0x899853
// 008997a6  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 008997ac  3bc5                 cmp eax, ebp
// 008997ae  7405                 je 0x8997b5
// 008997b0  8b5840               mov ebx, dword ptr [eax + 0x40]
// 008997b3  eb02                 jmp 0x8997b7
// 008997b5  33db                 xor ebx, ebx
// 008997b7  8bcf                 mov ecx, edi
// 008997b9  895c2420             mov dword ptr [esp + 0x20], ebx
// 008997bd  e8eec9ffff           call 0x8961b0
// 008997c2  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 008997c9  50                   push eax
// 008997ca  8d140b               lea edx, [ebx + ecx]
// 008997cd  52                   push edx
// 008997ce  6a00                 push 0
// 008997d0  8bc3                 mov eax, ebx
// 008997d2  f7d8                 neg eax
// 008997d4  50                   push eax
// 008997d5  8db7fc010000         lea esi, [edi + 0x1fc]
// 008997db  56                   push esi
// 008997dc  ff1538ca9800         call dword ptr [0x98ca38]
// 008997e2  8b460c               mov eax, dword ptr [esi + 0xc]
// 008997e5  2b4604               sub eax, dword ptr [esi + 4]
// 008997e8  8b2d6ccc9800         mov ebp, dword ptr [0x98cc6c]
// 008997ee  50                   push eax
// 008997ef  6a00                 push 0
// 008997f1  8d4c2438             lea ecx, [esp + 0x38]
// 008997f5  51                   push ecx
// 008997f6  ffd5                 call ebp
// 008997f8  8b460c               mov eax, dword ptr [esi + 0xc]
// 008997fb  2b4604               sub eax, dword ptr [esi + 4]
// 008997fe  8d542450             lea edx, [esp + 0x50]
// 00899802  50                   push eax
// 00899803  6a00                 push 0
// 00899805  52                   push edx
// 00899806  ffd5                 call ebp
// 00899808  8b8708020000         mov eax, dword ptr [edi + 0x208]
// 0089980e  8bac24d0000000       mov ebp, dword ptr [esp + 0xd0]
// 00899815  50                   push eax
// 00899816  55                   push ebp
// 00899817  6a00                 push 0
// 00899819  6a00                 push 0
// 0089981b  8db70c020000         lea esi, [edi + 0x20c]
// 00899821  56                   push esi
// 00899822  ff1538ca9800         call dword ptr [0x98ca38]
// 00899828  8b8708020000         mov eax, dword ptr [edi + 0x208]
// 0089982e  50                   push eax
// 0089982f  55                   push ebp
// 00899830  6a00                 push 0
// 00899832  6a00                 push 0
// 00899834  8d871c020000         lea eax, [edi + 0x21c]
// 0089983a  50                   push eax
// 0089983b  ff1538ca9800         call dword ptr [0x98ca38]
// 00899841  83bf8002000000       cmp dword ptr [edi + 0x280], 0
// 00899848  7524                 jne 0x89986e
// 0089984a  56                   push esi
// 0089984b  ff159cca9800         call dword ptr [0x98ca9c]
// 00899851  eb1b                 jmp 0x89986e
// 00899853  8d87fc010000         lea eax, [edi + 0x1fc]
// 00899859  50                   push eax
// 0089985a  ffd6                 call esi
// 0089985c  8d8f0c020000         lea ecx, [edi + 0x20c]
// 00899862  51                   push ecx
// 00899863  ffd6                 call esi
// 00899865  8d971c020000         lea edx, [edi + 0x21c]
// 0089986b  52                   push edx
// 0089986c  ffd6                 call esi
// 0089986e  8d4c2470             lea ecx, [esp + 0x70]
// 00899872  e809e0f5ff           call 0x7f7880
// 00899877  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0089987e  e8fddff5ff           call 0x7f7880
// 00899883  8bcf                 mov ecx, edi
// 00899885  c68424c800000002     mov byte ptr [esp + 0xc8], 2
// 0089988d  33ed                 xor ebp, ebp
// 0089988f  e8bcb9f6ff           call 0x805250
// 00899894  85c0                 test eax, eax
// 00899896  0f8e9a000000         jle 0x899936
// 0089989c  8d642400             lea esp, [esp]
// 008998a0  55                   push ebp
// 008998a1  8bcf                 mov ecx, edi
// 008998a3  e8b8b9f6ff           call 0x805260
// 008998a8  8bf0                 mov esi, eax
// 008998aa  56                   push esi
// 008998ab  8bcf                 mov ecx, edi
// 008998ad  e88ec8ffff           call 0x896140
// 008998b2  85c0                 test eax, eax
// 008998b4  7412                 je 0x8998c8
// 008998b6  8b8424a4000000       mov eax, dword ptr [esp + 0xa4]
// 008998bd  56                   push esi
// 008998be  50                   push eax
// 008998bf  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 008998c6  eb59                 jmp 0x899921
// 008998c8  8b16                 mov edx, dword ptr [esi]
// 008998ca  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008998d0  6a00                 push 0
// 008998d2  8bce                 mov ecx, esi
// 008998d4  ffd0                 call eax
// 008998d6  85c0                 test eax, eax
// 008998d8  744c                 je 0x899926
// 008998da  83be5801000000       cmp dword ptr [esi + 0x158], 0
// 008998e1  7543                 jne 0x899926
// 008998e3  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 008998e9  3d20f00000           cmp eax, 0xf020
// 008998ee  7c07                 jl 0x8998f7
// 008998f0  3d20f10000           cmp eax, 0xf120
// 008998f5  7e2f                 jle 0x899926
// 008998f7  3bb774020000         cmp esi, dword ptr [edi + 0x274]
// 008998fd  7427                 je 0x899926
// 008998ff  3bb7d0010000         cmp esi, dword ptr [edi + 0x1d0]
// 00899905  741f                 je 0x899926
// 00899907  3bb7d4010000         cmp esi, dword ptr [edi + 0x1d4]
// 0089990d  7417                 je 0x899926
// 0089990f  3bb768020000         cmp esi, dword ptr [edi + 0x268]
// 00899915  740f                 je 0x899926
// 00899917  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 0089991b  56                   push esi
// 0089991c  51                   push ecx
// 0089991d  8d4c2478             lea ecx, [esp + 0x78]
// 00899921  e84a13fdff           call 0x86ac70
// 00899926  8bcf                 mov ecx, edi
// 00899928  45                   inc ebp
// 00899929  e822b9f6ff           call 0x805250
// 0089992e  3be8                 cmp ebp, eax
// 00899930  0f8c6affffff         jl 0x8998a0
// 00899936  83bf4c02000000       cmp dword ptr [edi + 0x24c], 0
// 0089993d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00899941  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00899945  8d7410fd             lea esi, [eax + edx - 3]
// 00899949  7425                 je 0x899970
// 0089994b  83bf4802000000       cmp dword ptr [edi + 0x248], 0
// 00899952  741c                 je 0x899970
// 00899954  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00899958  8d1401               lea edx, [ecx + eax]
// 0089995b  52                   push edx
// 0089995c  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 00899963  52                   push edx
// 00899964  51                   push ecx
// 00899965  8d872c020000         lea eax, [edi + 0x22c]
// 0089996b  6a00                 push 0
// 0089996d  50                   push eax
// 0089996e  eb1b                 jmp 0x89998b
// 00899970  8b8f04020000         mov ecx, dword ptr [edi + 0x204]
// 00899976  8d4403fd             lea eax, [ebx + eax - 3]
// 0089997a  50                   push eax
// 0089997b  51                   push ecx
// 0089997c  83c3fe               add ebx, -2
// 0089997f  53                   push ebx
// 00899980  8d4e03               lea ecx, [esi + 3]
// 00899983  8d972c020000         lea edx, [edi + 0x22c]
// 00899989  51                   push ecx
// 0089998a  52                   push edx
// 0089998b  ff1538ca9800         call dword ptr [0x98ca38]
// 00899991  8b8f74020000         mov ecx, dword ptr [edi + 0x274]
// 00899997  bd02000000           mov ebp, 2
// 0089999c  896c2414             mov dword ptr [esp + 0x14], ebp
// 008999a0  85c9                 test ecx, ecx
// 008999a2  0f841c010000         je 0x899ac4
// 008999a8  837c242800           cmp dword ptr [esp + 0x28], 0
// 008999ad  8b9700020000         mov edx, dword ptr [edi + 0x200]
// 008999b3  8b442420             mov eax, dword ptr [esp + 0x20]
// 008999b7  8bee                 mov ebp, esi
// 008999b9  8d5eff               lea ebx, [esi - 1]
// 008999bc  8d7402ff             lea esi, [edx + eax - 1]
// 008999c0  752f                 jne 0x8999f1
// 008999c2  8b11                 mov edx, dword ptr [ecx]
// 008999c4  8b929c000000         mov edx, dword ptr [edx + 0x9c]
// 008999ca  8d842488000000       lea eax, [esp + 0x88]
// 008999d1  50                   push eax
// 008999d2  8d442464             lea eax, [esp + 0x64]
// 008999d6  50                   push eax
// 008999d7  ffd2                 call edx
// 008999d9  8b28                 mov ebp, dword ptr [eax]
// 008999db  8b5804               mov ebx, dword ptr [eax + 4]
// 008999de  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008999e2  2bc3                 sub eax, ebx
// 008999e4  99                   cdq 
// 008999e5  2bc2                 sub eax, edx
// 008999e7  8bf0                 mov esi, eax
// 008999e9  d1fe                 sar esi, 1
// 008999eb  03742434             add esi, dword ptr [esp + 0x34]
// 008999ef  eb49                 jmp 0x899a3a
// 008999f1  83bf4402000000       cmp dword ptr [edi + 0x244], 0
// 008999f8  7540                 jne 0x899a3a
// 008999fa  8b01                 mov eax, dword ptr [ecx]
// 008999fc  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 00899a02  8d942488000000       lea edx, [esp + 0x88]
// 00899a09  52                   push edx
// 00899a0a  8d542464             lea edx, [esp + 0x64]
// 00899a0e  52                   push edx
// 00899a0f  ffd0                 call eax
// 00899a11  8b28                 mov ebp, dword ptr [eax]
// 00899a13  8b5804               mov ebx, dword ptr [eax + 4]
// 00899a16  8b8708020000         mov eax, dword ptr [edi + 0x208]
// 00899a1c  2b8700020000         sub eax, dword ptr [edi + 0x200]
// 00899a22  8d4d0f               lea ecx, [ebp + 0xf]
// 00899a25  2bc3                 sub eax, ebx
// 00899a27  99                   cdq 
// 00899a28  2bc2                 sub eax, edx
// 00899a2a  8bf0                 mov esi, eax
// 00899a2c  d1fe                 sar esi, 1
// 00899a2e  03b700020000         add esi, dword ptr [edi + 0x200]
// 00899a34  898f2c020000         mov dword ptr [edi + 0x22c], ecx
// 00899a3a  03de                 add ebx, esi
// 00899a3c  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00899a40  33db                 xor ebx, ebx
// 00899a42  896c2414             mov dword ptr [esp + 0x14], ebp
// 00899a46  395c2428             cmp dword ptr [esp + 0x28], ebx
// 00899a4a  750d                 jne 0x899a59
// 00899a4c  399f44020000         cmp dword ptr [edi + 0x244], ebx
// 00899a52  7505                 jne 0x899a59
// 00899a54  8d4301               lea eax, [ebx + 1]
// 00899a57  eb02                 jmp 0x899a5b
// 00899a59  33c0                 xor eax, eax
// 00899a5b  8b8f74020000         mov ecx, dword ptr [edi + 0x274]
// 00899a61  85c0                 test eax, eax
// 00899a63  7416                 je 0x899a7b
// 00899a65  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00899a6b  8b11                 mov edx, dword ptr [ecx]
// 00899a6d  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00899a73  83c802               or eax, 2
// 00899a76  50                   push eax
// 00899a77  ffd2                 call edx
// 00899a79  eb14                 jmp 0x899a8f
// 00899a7b  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 00899a81  8b01                 mov eax, dword ptr [ecx]
// 00899a83  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00899a89  83e2fd               and edx, 0xfffffffd
// 00899a8c  52                   push edx
// 00899a8d  ffd0                 call eax
// 00899a8f  8b8f74020000         mov ecx, dword ptr [edi + 0x274]
// 00899a95  8b11                 mov edx, dword ptr [ecx]
// 00899a97  83ec10               sub esp, 0x10
// 00899a9a  8bc4                 mov eax, esp
// 00899a9c  8918                 mov dword ptr [eax], ebx
// 00899a9e  897004               mov dword ptr [eax + 4], esi
// 00899aa1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00899aa5  896808               mov dword ptr [eax + 8], ebp
// 00899aa8  89700c               mov dword ptr [eax + 0xc], esi
// 00899aab  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00899aae  ffd0                 call eax
// 00899ab0  8b8774020000         mov eax, dword ptr [edi + 0x274]
// 00899ab6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00899aba  c7809400000001000000 mov dword ptr [eax + 0x94], 1
// 00899ac4  8b542478             mov edx, dword ptr [esp + 0x78]
// 00899ac8  33db                 xor ebx, ebx
// 00899aca  895c2418             mov dword ptr [esp + 0x18], ebx
// 00899ace  85d2                 test edx, edx
// 00899ad0  0f8e51010000         jle 0x899c27
// 00899ad6  85db                 test ebx, ebx
// 00899ad8  0f8c8e010000         jl 0x899c6c
// 00899ade  3bda                 cmp ebx, edx
// 00899ae0  0f8d86010000         jge 0x899c6c
// 00899ae6  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00899aea  8b3499               mov esi, dword ptr [ecx + ebx*4]
// 00899aed  8bce                 mov ecx, esi
// 00899aef  e8ccadfcff           call 0x8648c0
// 00899af4  a801                 test al, 1
// 00899af6  0f851a010000         jne 0x899c16
// 00899afc  33c0                 xor eax, eax
// 00899afe  398744020000         cmp dword ptr [edi + 0x244], eax
// 00899b04  0f94c0               sete al
// 00899b07  85c0                 test eax, eax
// 00899b09  7414                 je 0x899b1f
// 00899b0b  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00899b11  8b16                 mov edx, dword ptr [esi]
// 00899b13  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00899b19  83c804               or eax, 4
// 00899b1c  50                   push eax
// 00899b1d  eb12                 jmp 0x899b31
// 00899b1f  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00899b25  8b06                 mov eax, dword ptr [esi]
// 00899b27  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00899b2d  83e1fb               and ecx, 0xfffffffb
// 00899b30  51                   push ecx
// 00899b31  8bce                 mov ecx, esi
// 00899b33  ffd2                 call edx
// 00899b35  8b06                 mov eax, dword ptr [esi]
// 00899b37  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00899b3d  6a00                 push 0
// 00899b3f  8bce                 mov ecx, esi
// 00899b41  ffd2                 call edx
// 00899b43  85c0                 test eax, eax
// 00899b45  0f84cb000000         je 0x899c16
// 00899b4b  8b06                 mov eax, dword ptr [esi]
// 00899b4d  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 00899b53  8d8c2488000000       lea ecx, [esp + 0x88]
// 00899b5a  51                   push ecx
// 00899b5b  8d542444             lea edx, [esp + 0x44]
// 00899b5f  52                   push edx
// 00899b60  8bce                 mov ecx, esi
// 00899b62  ffd0                 call eax
// 00899b64  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00899b68  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00899b6c  2bc1                 sub eax, ecx
// 00899b6e  99                   cdq 
// 00899b6f  2bc2                 sub eax, edx
// 00899b71  8bd8                 mov ebx, eax
// 00899b73  d1fb                 sar ebx, 1
// 00899b75  035c2434             add ebx, dword ptr [esp + 0x34]
// 00899b79  83be9800000000       cmp dword ptr [esi + 0x98], 0
// 00899b80  7407                 je 0x899b89
// 00899b82  83c506               add ebp, 6
// 00899b85  896c2414             mov dword ptr [esp + 0x14], ebp
// 00899b89  8b442414             mov eax, dword ptr [esp + 0x14]
// 00899b8d  8b16                 mov edx, dword ptr [esi]
// 00899b8f  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00899b95  03cb                 add ecx, ebx
// 00899b97  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00899b9b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00899b9f  8d2c01               lea ebp, [ecx + eax]
// 00899ba2  89442460             mov dword ptr [esp + 0x60], eax
// 00899ba6  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00899bac  83e0fd               and eax, 0xfffffffd
// 00899baf  50                   push eax
// 00899bb0  8bce                 mov ecx, esi
// 00899bb2  896c2418             mov dword ptr [esp + 0x18], ebp
// 00899bb6  ffd2                 call edx
// 00899bb8  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00899bbc  8b16                 mov edx, dword ptr [esi]
// 00899bbe  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00899bc1  83ec10               sub esp, 0x10
// 00899bc4  8bc4                 mov eax, esp
// 00899bc6  8908                 mov dword ptr [eax], ecx
// 00899bc8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00899bcc  895804               mov dword ptr [eax + 4], ebx
// 00899bcf  896808               mov dword ptr [eax + 8], ebp
// 00899bd2  89480c               mov dword ptr [eax + 0xc], ecx
// 00899bd5  8bce                 mov ecx, esi
// 00899bd7  ffd2                 call edx
// 00899bd9  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00899bdd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00899be1  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 00899be8  b802000000           mov eax, 2
// 00899bed  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00899bf3  83c2fe               add edx, -2
// 00899bf6  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 00899bfc  8996b8000000         mov dword ptr [esi + 0xb8], edx
// 00899c02  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 00899c08  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00899c0c  c7869400000000000000 mov dword ptr [esi + 0x94], 0
// 00899c16  8b542478             mov edx, dword ptr [esp + 0x78]
// 00899c1a  43                   inc ebx
// 00899c1b  3bda                 cmp ebx, edx
// 00899c1d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00899c21  0f8caffeffff         jl 0x899ad6
// 00899c27  8b8f4c020000         mov ecx, dword ptr [edi + 0x24c]
// 00899c2d  896c2440             mov dword ptr [esp + 0x40], ebp
// 00899c31  85c9                 test ecx, ecx
// 00899c33  743c                 je 0x899c71
// 00899c35  8b8748020000         mov eax, dword ptr [edi + 0x248]
// 00899c3b  85c0                 test eax, eax
// 00899c3d  7532                 jne 0x899c71
// 00899c3f  39442428             cmp dword ptr [esp + 0x28], eax
// 00899c43  752c                 jne 0x899c71
// 00899c45  8b742434             mov esi, dword ptr [esp + 0x34]
// 00899c49  89b730020000         mov dword ptr [edi + 0x230], esi
// 00899c4f  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 00899c53  83c505               add ebp, 5
// 00899c56  c744242001000000     mov dword ptr [esp + 0x20], 1
// 00899c5e  89af2c020000         mov dword ptr [edi + 0x22c], ebp
// 00899c64  89b738020000         mov dword ptr [edi + 0x238], esi
// 00899c6a  eb22                 jmp 0x899c8e
// 00899c6c  e89b9ef5ff           call 0x7f3b0c
// 00899c71  8b8748020000         mov eax, dword ptr [edi + 0x248]
// 00899c77  8be8                 mov ebp, eax
// 00899c79  f7dd                 neg ebp
// 00899c7b  1bed                 sbb ebp, ebp
// 00899c7d  83e502               and ebp, 2
// 00899c80  03af2c020000         add ebp, dword ptr [edi + 0x22c]
// 00899c86  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00899c8e  896c2414             mov dword ptr [esp + 0x14], ebp
// 00899c92  85c9                 test ecx, ecx
// 00899c94  7414                 je 0x899caa
// 00899c96  85c0                 test eax, eax
// 00899c98  7410                 je 0x899caa
// 00899c9a  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00899ca1  83c0f1               add eax, -0xf
// 00899ca4  89442424             mov dword ptr [esp + 0x24], eax
// 00899ca8  eb2c                 jmp 0x899cd6
// 00899caa  8bcf                 mov ecx, edi
// 00899cac  e80fb7ffff           call 0x8953c0
// 00899cb1  8b8c24d0000000       mov ecx, dword ptr [esp + 0xd0]
// 00899cb8  85c0                 test eax, eax
// 00899cba  7405                 je 0x899cc1
// 00899cbc  83c18d               add ecx, -0x73
// 00899cbf  eb11                 jmp 0x899cd2
// 00899cc1  8b8700020000         mov eax, dword ptr [edi + 0x200]
// 00899cc7  2b8708020000         sub eax, dword ptr [edi + 0x208]
// 00899ccd  8d0c41               lea ecx, [ecx + eax*2]
// 00899cd0  03c8                 add ecx, eax
// 00899cd2  894c2424             mov dword ptr [esp + 0x24], ecx
// 00899cd6  8b8f70020000         mov ecx, dword ptr [edi + 0x270]
// 00899cdc  85c9                 test ecx, ecx
// 00899cde  7418                 je 0x899cf8
// 00899ce0  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00899ce6  8b11                 mov edx, dword ptr [ecx]
// 00899ce8  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00899cee  83c801               or eax, 1
// 00899cf1  50                   push eax
// 00899cf2  ffd2                 call edx
// 00899cf4  8b542478             mov edx, dword ptr [esp + 0x78]
// 00899cf8  33c0                 xor eax, eax
// 00899cfa  398424a4000000       cmp dword ptr [esp + 0xa4], eax
// 00899d01  8944244c             mov dword ptr [esp + 0x4c], eax
// 00899d05  89442448             mov dword ptr [esp + 0x48], eax
// 00899d09  89442418             mov dword ptr [esp + 0x18], eax
// 00899d0d  0f8e46020000         jle 0x899f59
// 00899d13  8b442418             mov eax, dword ptr [esp + 0x18]
// 00899d17  85c0                 test eax, eax
// 00899d19  0f8c4dffffff         jl 0x899c6c
// 00899d1f  3b8424a4000000       cmp eax, dword ptr [esp + 0xa4]
// 00899d26  0f8d40ffffff         jge 0x899c6c
// 00899d2c  83bf4c02000000       cmp dword ptr [edi + 0x24c], 0
// 00899d33  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00899d3a  8b3481               mov esi, dword ptr [ecx + eax*4]
// 00899d3d  7514                 jne 0x899d53
// 00899d3f  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00899d45  8b16                 mov edx, dword ptr [esi]
// 00899d47  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00899d4d  83c802               or eax, 2
// 00899d50  50                   push eax
// 00899d51  eb26                 jmp 0x899d79
// 00899d53  3bb770020000         cmp esi, dword ptr [edi + 0x270]
// 00899d59  7422                 je 0x899d7d
// 00899d5b  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00899d60  8b06                 mov eax, dword ptr [esi]
// 00899d62  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00899d68  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00899d6e  7405                 je 0x899d75
// 00899d70  83c902               or ecx, 2
// 00899d73  eb03                 jmp 0x899d78
// 00899d75  83e1fd               and ecx, 0xfffffffd
// 00899d78  51                   push ecx
// 00899d79  8bce                 mov ecx, esi
// 00899d7b  ffd2                 call edx
// 00899d7d  837c242800           cmp dword ptr [esp + 0x28], 0
// 00899d82  751f                 jne 0x899da3
// 00899d84  83bf4402000000       cmp dword ptr [edi + 0x244], 0
// 00899d8b  7516                 jne 0x899da3
// 00899d8d  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00899d93  8b06                 mov eax, dword ptr [esi]
// 00899d95  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00899d9b  83c902               or ecx, 2
// 00899d9e  51                   push ecx
// 00899d9f  8bce                 mov ecx, esi
// 00899da1  ffd2                 call edx
// 00899da3  3bb76c020000         cmp esi, dword ptr [edi + 0x26c]
// 00899da9  751c                 jne 0x899dc7
// 00899dab  837c244800           cmp dword ptr [esp + 0x48], 0
// 00899db0  7415                 je 0x899dc7
// 00899db2  837c242000           cmp dword ptr [esp + 0x20], 0
// 00899db7  750e                 jne 0x899dc7
// 00899db9  83bf4802000000       cmp dword ptr [edi + 0x248], 0
// 00899dc0  7505                 jne 0x899dc7
// 00899dc2  834424140c           add dword ptr [esp + 0x14], 0xc
// 00899dc7  8b06                 mov eax, dword ptr [esi]
// 00899dc9  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00899dcf  6a00                 push 0
// 00899dd1  8bce                 mov ecx, esi
// 00899dd3  ffd2                 call edx
// 00899dd5  85c0                 test eax, eax
// 00899dd7  0f845e010000         je 0x899f3b
// 00899ddd  3bb770020000         cmp esi, dword ptr [edi + 0x270]
// 00899de3  740c                 je 0x899df1
// 00899de5  3bb76c020000         cmp esi, dword ptr [edi + 0x26c]
// 00899deb  7404                 je 0x899df1
// 00899ded  33ed                 xor ebp, ebp
// 00899def  eb05                 jmp 0x899df6
// 00899df1  bd01000000           mov ebp, 1
// 00899df6  8b06                 mov eax, dword ptr [esi]
// 00899df8  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 00899dfe  8d8c2488000000       lea ecx, [esp + 0x88]
// 00899e05  51                   push ecx
// 00899e06  8d542464             lea edx, [esp + 0x64]
// 00899e0a  52                   push edx
// 00899e0b  8bce                 mov ecx, esi
// 00899e0d  896c2424             mov dword ptr [esp + 0x24], ebp
// 00899e11  ffd0                 call eax
// 00899e13  8b8738020000         mov eax, dword ptr [edi + 0x238]
// 00899e19  2b8730020000         sub eax, dword ptr [edi + 0x230]
// 00899e1f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00899e23  2bc1                 sub eax, ecx
// 00899e25  40                   inc eax
// 00899e26  99                   cdq 
// 00899e27  2bc2                 sub eax, edx
// 00899e29  8bd8                 mov ebx, eax
// 00899e2b  d1fb                 sar ebx, 1
// 00899e2d  039f30020000         add ebx, dword ptr [edi + 0x230]
// 00899e33  85ed                 test ebp, ebp
// 00899e35  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00899e39  7561                 jne 0x899e9c
// 00899e3b  83bf4802000000       cmp dword ptr [edi + 0x248], 0
// 00899e42  750a                 jne 0x899e4e
// 00899e44  837c242000           cmp dword ptr [esp + 0x20], 0
// 00899e49  7503                 jne 0x899e4e
// 00899e4b  83c302               add ebx, 2
// 00899e4e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00899e52  03d5                 add edx, ebp
// 00899e54  3b542424             cmp edx, dword ptr [esp + 0x24]
// 00899e58  b801000000           mov eax, 1
// 00899e5d  89442448             mov dword ptr [esp + 0x48], eax
// 00899e61  7e39                 jle 0x899e9c
// 00899e63  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00899e69  83c902               or ecx, 2
// 00899e6c  8944244c             mov dword ptr [esp + 0x4c], eax
// 00899e70  8b06                 mov eax, dword ptr [esi]
// 00899e72  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00899e78  51                   push ecx
// 00899e79  8bce                 mov ecx, esi
// 00899e7b  ffd2                 call edx
// 00899e7d  8b8f70020000         mov ecx, dword ptr [edi + 0x270]
// 00899e83  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 00899e89  8b01                 mov eax, dword ptr [ecx]
// 00899e8b  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00899e91  83e2fe               and edx, 0xfffffffe
// 00899e94  52                   push edx
// 00899e95  ffd0                 call eax
// 00899e97  e99f000000           jmp 0x899f3b
// 00899e9c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00899ea0  03cb                 add ecx, ebx
// 00899ea2  03e8                 add ebp, eax
// 00899ea4  837c242000           cmp dword ptr [esp + 0x20], 0
// 00899ea9  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00899eb0  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 00899eb7  7507                 jne 0x899ec0
// 00899eb9  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00899ebe  7504                 jne 0x899ec4
// 00899ec0  896c2414             mov dword ptr [esp + 0x14], ebp
// 00899ec4  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00899eca  8b16                 mov edx, dword ptr [esi]
// 00899ecc  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00899ed2  83e0fd               and eax, 0xfffffffd
// 00899ed5  50                   push eax
// 00899ed6  8bce                 mov ecx, esi
// 00899ed8  ffd2                 call edx
// 00899eda  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00899ee1  8b16                 mov edx, dword ptr [esi]
// 00899ee3  8b527c               mov edx, dword ptr [edx + 0x7c]
// 00899ee6  83ec10               sub esp, 0x10
// 00899ee9  8bc4                 mov eax, esp
// 00899eeb  8908                 mov dword ptr [eax], ecx
// 00899eed  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00899ef4  895804               mov dword ptr [eax + 4], ebx
// 00899ef7  896808               mov dword ptr [eax + 8], ebp
// 00899efa  89480c               mov dword ptr [eax + 0xc], ecx
// 00899efd  8bce                 mov ecx, esi
// 00899eff  ffd2                 call edx
// 00899f01  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 00899f07  8b8f30020000         mov ecx, dword ptr [edi + 0x230]
// 00899f0d  8b9734020000         mov edx, dword ptr [edi + 0x234]
// 00899f13  8b9f38020000         mov ebx, dword ptr [edi + 0x238]
// 00899f19  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 00899f1f  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 00899f25  8996b8000000         mov dword ptr [esi + 0xb8], edx
// 00899f2b  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 00899f31  c7869400000000000000 mov dword ptr [esi + 0x94], 0
// 00899f3b  8b442418             mov eax, dword ptr [esp + 0x18]
// 00899f3f  40                   inc eax
// 00899f40  3b8424a4000000       cmp eax, dword ptr [esp + 0xa4]
// 00899f47  89442418             mov dword ptr [esp + 0x18], eax
// 00899f4b  0f8cc2fdffff         jl 0x899d13
// 00899f51  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00899f55  8b542478             mov edx, dword ptr [esp + 0x78]
// 00899f59  83bf4802000000       cmp dword ptr [edi + 0x248], 0
// 00899f60  7506                 jne 0x899f68
// 00899f62  89af34020000         mov dword ptr [edi + 0x234], ebp
// 00899f68  837c242000           cmp dword ptr [esp + 0x20], 0
// 00899f6d  7508                 jne 0x899f77
// 00899f6f  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00899f73  896c2414             mov dword ptr [esp + 0x14], ebp
// 00899f77  8b8424d0000000       mov eax, dword ptr [esp + 0xd0]
// 00899f7e  8d5aff               lea ebx, [edx - 1]
// 00899f81  89442424             mov dword ptr [esp + 0x24], eax
// 00899f85  895c2418             mov dword ptr [esp + 0x18], ebx
// 00899f89  85db                 test ebx, ebx
// 00899f8b  0f8c5d010000         jl 0x89a0ee
// 00899f91  eb04                 jmp 0x899f97
// 00899f93  8b542478             mov edx, dword ptr [esp + 0x78]
// 00899f97  85db                 test ebx, ebx
// 00899f99  0f8ccdfcffff         jl 0x899c6c
// 00899f9f  3bda                 cmp ebx, edx
// 00899fa1  0f8dc5fcffff         jge 0x899c6c
// 00899fa7  8b442474             mov eax, dword ptr [esp + 0x74]
// 00899fab  8b3498               mov esi, dword ptr [eax + ebx*4]
// 00899fae  8bce                 mov ecx, esi
// 00899fb0  e80ba9fcff           call 0x8648c0
// 00899fb5  a801                 test al, 1
// 00899fb7  0f8420010000         je 0x89a0dd
// 00899fbd  33c0                 xor eax, eax
// 00899fbf  398744020000         cmp dword ptr [edi + 0x244], eax
// 00899fc5  0f94c0               sete al
// 00899fc8  85c0                 test eax, eax
// 00899fca  7414                 je 0x899fe0
// 00899fcc  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00899fd2  8b16                 mov edx, dword ptr [esi]
// 00899fd4  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00899fda  83c804               or eax, 4
// 00899fdd  50                   push eax
// 00899fde  eb12                 jmp 0x899ff2
// 00899fe0  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00899fe6  8b06                 mov eax, dword ptr [esi]
// 00899fe8  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00899fee  83e1fb               and ecx, 0xfffffffb
// 00899ff1  51                   push ecx
// 00899ff2  8bce                 mov ecx, esi
// 00899ff4  ffd2                 call edx
// 00899ff6  8b06                 mov eax, dword ptr [esi]
// 00899ff8  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00899ffe  6a00                 push 0
// 0089a000  8bce                 mov ecx, esi
// 0089a002  ffd2                 call edx
// 0089a004  85c0                 test eax, eax
// 0089a006  0f84d1000000         je 0x89a0dd
// 0089a00c  8b06                 mov eax, dword ptr [esi]
// 0089a00e  8b809c000000         mov eax, dword ptr [eax + 0x9c]
// 0089a014  8d8c2488000000       lea ecx, [esp + 0x88]
// 0089a01b  51                   push ecx
// 0089a01c  8d542464             lea edx, [esp + 0x64]
// 0089a020  52                   push edx
// 0089a021  8bce                 mov ecx, esi
// 0089a023  ffd0                 call eax
// 0089a025  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0089a029  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0089a02d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0089a031  2b5c2460             sub ebx, dword ptr [esp + 0x60]
// 0089a035  2bc1                 sub eax, ecx
// 0089a037  99                   cdq 
// 0089a038  2bc2                 sub eax, edx
// 0089a03a  8b16                 mov edx, dword ptr [esi]
// 0089a03c  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0089a042  8be8                 mov ebp, eax
// 0089a044  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0089a04a  d1fd                 sar ebp, 1
// 0089a04c  036c2434             add ebp, dword ptr [esp + 0x34]
// 0089a050  83e0fd               and eax, 0xfffffffd
// 0089a053  03cd                 add ecx, ebp
// 0089a055  894c2440             mov dword ptr [esp + 0x40], ecx
// 0089a059  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089a05d  898c24b8000000       mov dword ptr [esp + 0xb8], ecx
// 0089a064  50                   push eax
// 0089a065  8bce                 mov ecx, esi
// 0089a067  895c2428             mov dword ptr [esp + 0x28], ebx
// 0089a06b  ffd2                 call edx
// 0089a06d  8b8c24b8000000       mov ecx, dword ptr [esp + 0xb8]
// 0089a074  8b16                 mov edx, dword ptr [esi]
// 0089a076  8b527c               mov edx, dword ptr [edx + 0x7c]
// 0089a079  83ec10               sub esp, 0x10
// 0089a07c  8bc4                 mov eax, esp
// 0089a07e  8918                 mov dword ptr [eax], ebx
// 0089a080  896804               mov dword ptr [eax + 4], ebp
// 0089a083  894808               mov dword ptr [eax + 8], ecx
// 0089a086  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0089a08a  89480c               mov dword ptr [eax + 0xc], ecx
// 0089a08d  8bce                 mov ecx, esi
// 0089a08f  ffd2                 call edx
// 0089a091  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089a095  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0089a099  8b9424d4000000       mov edx, dword ptr [esp + 0xd4]
// 0089a0a0  b802000000           mov eax, 2
// 0089a0a5  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 0089a0ab  8b06                 mov eax, dword ptr [esi]
// 0089a0ad  83c2fe               add edx, -2
// 0089a0b0  898eb4000000         mov dword ptr [esi + 0xb4], ecx
// 0089a0b6  8996b8000000         mov dword ptr [esi + 0xb8], edx
// 0089a0bc  8b5064               mov edx, dword ptr [eax + 0x64]
// 0089a0bf  6a00                 push 0
// 0089a0c1  8bce                 mov ecx, esi
// 0089a0c3  899ebc000000         mov dword ptr [esi + 0xbc], ebx
// 0089a0c9  c7869400000001000000 mov dword ptr [esi + 0x94], 1
// 0089a0d3  ffd2                 call edx
// 0089a0d5  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0089a0d9  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0089a0dd  83eb01               sub ebx, 1
// 0089a0e0  895c2418             mov dword ptr [esp + 0x18], ebx
// 0089a0e4  0f89a9feffff         jns 0x899f93
// 0089a0ea  8b442424             mov eax, dword ptr [esp + 0x24]
// 0089a0ee  83bf4402000000       cmp dword ptr [edi + 0x244], 0
// 0089a0f5  7508                 jne 0x89a0ff
// 0089a0f7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089a0fb  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0089a0ff  8d5506               lea edx, [ebp + 6]
// 0089a102  3bd0                 cmp edx, eax
// 0089a104  8db7dc010000         lea esi, [edi + 0x1dc]
// 0089a10a  7e09                 jle 0x89a115
// 0089a10c  56                   push esi
// 0089a10d  ff159cca9800         call dword ptr [0x98ca9c]
// 0089a113  eb13                 jmp 0x89a128
// 0089a115  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089a119  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0089a11d  892e                 mov dword ptr [esi], ebp
// 0089a11f  894e04               mov dword ptr [esi + 4], ecx
// 0089a122  894608               mov dword ptr [esi + 8], eax
// 0089a125  89560c               mov dword ptr [esi + 0xc], edx
// 0089a128  8b8f68020000         mov ecx, dword ptr [edi + 0x268]
// 0089a12e  85c9                 test ecx, ecx
// 0089a130  0f84a9000000         je 0x89a1df
// 0089a136  33c0                 xor eax, eax
// 0089a138  398744020000         cmp dword ptr [edi + 0x244], eax
// 0089a13e  0f94c0               sete al
// 0089a141  85c0                 test eax, eax
// 0089a143  7416                 je 0x89a15b
// 0089a145  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0089a14b  8b01                 mov eax, dword ptr [ecx]
// 0089a14d  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0089a153  83ca01               or edx, 1
// 0089a156  52                   push edx
// 0089a157  ffd0                 call eax
// 0089a159  eb14                 jmp 0x89a16f
// 0089a15b  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0089a161  8b11                 mov edx, dword ptr [ecx]
// 0089a163  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0089a169  83e0fe               and eax, 0xfffffffe
// 0089a16c  50                   push eax
// 0089a16d  ffd2                 call edx
// 0089a16f  8b1e                 mov ebx, dword ptr [esi]
// 0089a171  8b8f68020000         mov ecx, dword ptr [edi + 0x268]
// 0089a177  8b11                 mov edx, dword ptr [ecx]
// 0089a179  83ec10               sub esp, 0x10
// 0089a17c  8bc4                 mov eax, esp
// 0089a17e  8918                 mov dword ptr [eax], ebx
// 0089a180  8b5e04               mov ebx, dword ptr [esi + 4]
// 0089a183  895804               mov dword ptr [eax + 4], ebx
// 0089a186  8b5e08               mov ebx, dword ptr [esi + 8]
// 0089a189  895808               mov dword ptr [eax + 8], ebx
// 0089a18c  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0089a18f  89580c               mov dword ptr [eax + 0xc], ebx
// 0089a192  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0089a195  ffd0                 call eax
// 0089a197  8b8768020000         mov eax, dword ptr [edi + 0x268]
// 0089a19d  85c0                 test eax, eax
// 0089a19f  7408                 je 0x89a1a9
// 0089a1a1  8d9884010000         lea ebx, [eax + 0x184]
// 0089a1a7  eb02                 jmp 0x89a1ab
// 0089a1a9  33db                 xor ebx, ebx
// 0089a1ab  8bcf                 mov ecx, edi
// 0089a1ad  e86eafffff           call 0x895120
// 0089a1b2  8b0e                 mov ecx, dword ptr [esi]
// 0089a1b4  8b28                 mov ebp, dword ptr [eax]
// 0089a1b6  83ec10               sub esp, 0x10
// 0089a1b9  8bd4                 mov edx, esp
// 0089a1bb  890a                 mov dword ptr [edx], ecx
// 0089a1bd  8b4e04               mov ecx, dword ptr [esi + 4]
// 0089a1c0  894a04               mov dword ptr [edx + 4], ecx
// 0089a1c3  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089a1c6  894a08               mov dword ptr [edx + 8], ecx
// 0089a1c9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0089a1cc  894a0c               mov dword ptr [edx + 0xc], ecx
// 0089a1cf  8d942498000000       lea edx, [esp + 0x98]
// 0089a1d6  52                   push edx
// 0089a1d7  8bc8                 mov ecx, eax
// 0089a1d9  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0089a1dc  53                   push ebx
// 0089a1dd  ffd0                 call eax
// 0089a1df  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0089a1e3  8b542454             mov edx, dword ptr [esp + 0x54]
// 0089a1e7  83ec10               sub esp, 0x10
// 0089a1ea  8bc4                 mov eax, esp
// 0089a1ec  8908                 mov dword ptr [eax], ecx
// 0089a1ee  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0089a1f2  895004               mov dword ptr [eax + 4], edx
// 0089a1f5  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0089a1f9  894808               mov dword ptr [eax + 8], ecx
// 0089a1fc  89500c               mov dword ptr [eax + 0xc], edx
// 0089a1ff  8d842498000000       lea eax, [esp + 0x98]
// 0089a206  50                   push eax
// 0089a207  8bcf                 mov ecx, edi
// 0089a209  e862adffff           call 0x894f70
// 0089a20e  8bcf                 mov ecx, edi
// 0089a210  e81bc2ffff           call 0x896430
// 0089a215  837c242800           cmp dword ptr [esp + 0x28], 0
// 0089a21a  7407                 je 0x89a223
// 0089a21c  8bcf                 mov ecx, edi
// 0089a21e  e8cdf0ffff           call 0x8992f0
// 0089a223  8d8c249c000000       lea ecx, [esp + 0x9c]
// 0089a22a  c68424c800000001     mov byte ptr [esp + 0xc8], 1
// 0089a232  e869d6f5ff           call 0x7f78a0
// 0089a237  8d4c2470             lea ecx, [esp + 0x70]
// 0089a23b  c68424c800000000     mov byte ptr [esp + 0xc8], 0
// 0089a243  e858d6f5ff           call 0x7f78a0
// 0089a248  8d8c2488000000       lea ecx, [esp + 0x88]
// 0089a24f  c78424c8000000ffffffff mov dword ptr [esp + 0xc8], 0xffffffff
// 0089a25a  e871a4f5ff           call 0x7f46d0
// 0089a25f  8b8c24c0000000       mov ecx, dword ptr [esp + 0xc0]
// 0089a266  64890d00000000       mov dword ptr fs:[0], ecx
// 0089a26d  59                   pop ecx
// 0089a26e  5f                   pop edi
// 0089a26f  5e                   pop esi
// 0089a270  5d                   pop ebp
// 0089a271  5b                   pop ebx
// 0089a272  81c4b8000000         add esp, 0xb8
// 0089a278  c20800               ret 8
// copied from an identical function in another client (function ?Reposition@CXTPRibbonBar@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp