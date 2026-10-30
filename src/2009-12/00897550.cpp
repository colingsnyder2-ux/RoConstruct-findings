// roc 2009-12 00897550  unit: CXTPRibbonBar  size: 1372 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897550
//
// 00897550  6aff                 push -1
// 00897552  6885189600           push 0x961885
// 00897557  64a100000000         mov eax, dword ptr fs:[0]
// 0089755d  50                   push eax
// 0089755e  83ec2c               sub esp, 0x2c
// 00897561  53                   push ebx
// 00897562  55                   push ebp
// 00897563  56                   push esi
// 00897564  57                   push edi
// 00897565  a10052b600           mov eax, dword ptr [0xb65200]
// 0089756a  33c4                 xor eax, esp
// 0089756c  50                   push eax
// 0089756d  8d442440             lea eax, [esp + 0x40]
// 00897571  64a300000000         mov dword ptr fs:[0], eax
// 00897577  8be9                 mov ebp, ecx
// 00897579  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 00897580  752f                 jne 0x8975b1
// 00897582  e849cff6ff           call 0x8044d0
// 00897587  8b10                 mov edx, dword ptr [eax]
// 00897589  8bc8                 mov ecx, eax
// 0089758b  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0089758e  ffd0                 call eax
// 00897590  8bcd                 mov ecx, ebp
// 00897592  8bf0                 mov esi, eax
// 00897594  e8f7faf6ff           call 0x807090
// 00897599  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0089759c  56                   push esi
// 0089759d  55                   push ebp
// 0089759e  685c280000           push 0x285c
// 008975a3  51                   push ecx
// 008975a4  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008975aa  8bc6                 mov eax, esi
// 008975ac  e9ba040000           jmp 0x897a6b
// 008975b1  8b5c2450             mov ebx, dword ptr [esp + 0x50]
// 008975b5  85db                 test ebx, ebx
// 008975b7  0f84a2000000         je 0x89765f
// 008975bd  83bbfc0000000a       cmp dword ptr [ebx + 0xfc], 0xa
// 008975c4  753b                 jne 0x897601
// 008975c6  8b13                 mov edx, dword ptr [ebx]
// 008975c8  8b828c000000         mov eax, dword ptr [edx + 0x8c]
// 008975ce  8bcb                 mov ecx, ebx
// 008975d0  ffd0                 call eax
// 008975d2  85c0                 test eax, eax
// 008975d4  752b                 jne 0x897601
// 008975d6  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008975dc  50                   push eax
// 008975dd  e89ea3faff           call 0x841980
// 008975e2  50                   push eax
// 008975e3  e856c6f5ff           call 0x7f3c3e
// 008975e8  83c408               add esp, 8
// 008975eb  85c0                 test eax, eax
// 008975ed  7412                 je 0x897601
// 008975ef  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008975f5  8b8880010000         mov ecx, dword ptr [eax + 0x180]
// 008975fb  894c2450             mov dword ptr [esp + 0x50], ecx
// 008975ff  8bd9                 mov ebx, ecx
// 00897601  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 00897607  33d2                 xor edx, edx
// 00897609  3d83250000           cmp eax, 0x2583
// 0089760e  0f94c2               sete dl
// 00897611  bf64309a00           mov edi, 0x9a3064
// 00897616  33c0                 xor eax, eax
// 00897618  897c2438             mov dword ptr [esp + 0x38], edi
// 0089761c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00897620  8bf2                 mov esi, edx
// 00897622  89442448             mov dword ptr [esp + 0x48], eax
// 00897626  e87572fdff           call 0x86e8a0
// 0089762b  8b10                 mov edx, dword ptr [eax]
// 0089762d  8b520c               mov edx, dword ptr [edx + 0xc]
// 00897630  8bce                 mov ecx, esi
// 00897632  f7d9                 neg ecx
// 00897634  1bc9                 sbb ecx, ecx
// 00897636  81c182250000         add ecx, 0x2582
// 0089763c  51                   push ecx
// 0089763d  8d4c243c             lea ecx, [esp + 0x3c]
// 00897641  51                   push ecx
// 00897642  8bc8                 mov ecx, eax
// 00897644  ffd2                 call edx
// 00897646  85c0                 test eax, eax
// 00897648  751c                 jne 0x897666
// 0089764a  8d4c2438             lea ecx, [esp + 0x38]
// 0089764e  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00897656  897c2438             mov dword ptr [esp + 0x38], edi
// 0089765a  e873cbf5ff           call 0x7f41d2
// 0089765f  33c0                 xor eax, eax
// 00897661  e905040000           jmp 0x897a6b
// 00897666  8bcd                 mov ecx, ebp
// 00897668  e863cef6ff           call 0x8044d0
// 0089766d  50                   push eax
// 0089766e  e81da3faff           call 0x841990
// 00897673  8bf8                 mov edi, eax
// 00897675  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00897678  83c404               add esp, 4
// 0089767b  894738               mov dword ptr [edi + 0x38], eax
// 0089767e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00897682  6a00                 push 0
// 00897684  51                   push ecx
// 00897685  897c2430             mov dword ptr [esp + 0x30], edi
// 00897689  ff1548cc9800         call dword ptr [0x98cc48]
// 0089768f  50                   push eax
// 00897690  e855c8f5ff           call 0x7f3eea
// 00897695  8b17                 mov edx, dword ptr [edi]
// 00897697  6a01                 push 1
// 00897699  50                   push eax
// 0089769a  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008976a0  8bcf                 mov ecx, edi
// 008976a2  ffd0                 call eax
// 008976a4  6874010000           push 0x174
// 008976a9  e8b2c1f5ff           call 0x7f3860
// 008976ae  83c404               add esp, 4
// 008976b1  89442430             mov dword ptr [esp + 0x30], eax
// 008976b5  c644244801           mov byte ptr [esp + 0x48], 1
// 008976ba  85c0                 test eax, eax
// 008976bc  7409                 je 0x8976c7
// 008976be  8bc8                 mov ecx, eax
// 008976c0  e85b10fbff           call 0x848720
// 008976c5  eb02                 jmp 0x8976c9
// 008976c7  33c0                 xor eax, eax
// 008976c9  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008976cf  f7de                 neg esi
// 008976d1  1bf6                 sbb esi, esi
// 008976d3  83e6fe               and esi, 0xfffffffe
// 008976d6  83c602               add esi, 2
// 008976d9  56                   push esi
// 008976da  50                   push eax
// 008976db  c644245000           mov byte ptr [esp + 0x50], 0
// 008976e0  e87bfbfaff           call 0x847260
// 008976e5  8b10                 mov edx, dword ptr [eax]
// 008976e7  8bc8                 mov ecx, eax
// 008976e9  8b4264               mov eax, dword ptr [edx + 0x64]
// 008976ec  6a01                 push 1
// 008976ee  ffd0                 call eax
// 008976f0  53                   push ebx
// 008976f1  8bcd                 mov ecx, ebp
// 008976f3  e848eaffff           call 0x896140
// 008976f8  8b5500               mov edx, dword ptr [ebp]
// 008976fb  89442420             mov dword ptr [esp + 0x20], eax
// 008976ff  8b8234020000         mov eax, dword ptr [edx + 0x234]
// 00897705  53                   push ebx
// 00897706  8bcd                 mov ecx, ebp
// 00897708  ffd0                 call eax
// 0089770a  8bcb                 mov ecx, ebx
// 0089770c  8944242c             mov dword ptr [esp + 0x2c], eax
// 00897710  e8abd1fcff           call 0x8648c0
// 00897715  a810                 test al, 0x10
// 00897717  7511                 jne 0x89772a
// 00897719  83bbac00000000       cmp dword ptr [ebx + 0xac], 0
// 00897720  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00897728  7408                 je 0x897732
// 0089772a  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00897732  33f6                 xor esi, esi
// 00897734  8bcf                 mov ecx, edi
// 00897736  89742414             mov dword ptr [esp + 0x14], esi
// 0089773a  e811dbf6ff           call 0x805250
// 0089773f  85c0                 test eax, eax
// 00897741  0f8ef1020000         jle 0x897a38
// 00897747  56                   push esi
// 00897748  8bcf                 mov ecx, edi
// 0089774a  e811dbf6ff           call 0x805260
// 0089774f  8bd8                 mov ebx, eax
// 00897751  81bb8400000090250000 cmp dword ptr [ebx + 0x84], 0x2590
// 0089775b  750c                 jne 0x897769
// 0089775d  6887250000           push 0x2587
// 00897762  8bcb                 mov ecx, ebx
// 00897764  e887e6f5ff           call 0x7f5df0
// 00897769  81bb8400000091250000 cmp dword ptr [ebx + 0x84], 0x2591
// 00897773  750c                 jne 0x897781
// 00897775  6888250000           push 0x2588
// 0089777a  8bcb                 mov ecx, ebx
// 0089777c  e86fe6f5ff           call 0x7f5df0
// 00897781  81bb8400000092250000 cmp dword ptr [ebx + 0x84], 0x2592
// 0089778b  750c                 jne 0x897799
// 0089778d  688a250000           push 0x258a
// 00897792  8bcb                 mov ecx, ebx
// 00897794  e857e6f5ff           call 0x7f5df0
// 00897799  8b8384000000         mov eax, dword ptr [ebx + 0x84]
// 0089779f  057bdaffff           add eax, 0xffffda7b
// 008977a4  83f809               cmp eax, 9
// 008977a7  0f8777020000         ja 0x897a24
// 008977ad  ff2485847a8900       jmp dword ptr [eax*4 + 0x897a84]
// 008977b4  837c242000           cmp dword ptr [esp + 0x20], 0
// 008977b9  7429                 je 0x8977e4
// 008977bb  837c241800           cmp dword ptr [esp + 0x18], 0
// 008977c0  7522                 jne 0x8977e4
// 008977c2  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 008977c9  7419                 je 0x8977e4
// 008977cb  b801000000           mov eax, 1
// 008977d0  50                   push eax
// 008977d1  8bcb                 mov ecx, ebx
// 008977d3  e8c8ebf5ff           call 0x7f63a0
// 008977d8  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008977dc  894b7c               mov dword ptr [ebx + 0x7c], ecx
// 008977df  e937020000           jmp 0x897a1b
// 008977e4  33c0                 xor eax, eax
// 008977e6  50                   push eax
// 008977e7  8bcb                 mov ecx, ebx
// 008977e9  e8b2ebf5ff           call 0x7f63a0
// 008977ee  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008977f2  894b7c               mov dword ptr [ebx + 0x7c], ecx
// 008977f5  e921020000           jmp 0x897a1b
// 008977fa  837c242000           cmp dword ptr [esp + 0x20], 0
// 008977ff  7517                 jne 0x897818
// 00897801  837c241800           cmp dword ptr [esp + 0x18], 0
// 00897806  7510                 jne 0x897818
// 00897808  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 0089780f  7407                 je 0x897818
// 00897811  b801000000           mov eax, 1
// 00897816  eb02                 jmp 0x89781a
// 00897818  33c0                 xor eax, eax
// 0089781a  50                   push eax
// 0089781b  8bcb                 mov ecx, ebx
// 0089781d  e87eebf5ff           call 0x7f63a0
// 00897822  8b13                 mov edx, dword ptr [ebx]
// 00897824  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00897828  8b5268               mov edx, dword ptr [edx + 0x68]
// 0089782b  50                   push eax
// 0089782c  8bcb                 mov ecx, ebx
// 0089782e  ffd2                 call edx
// 00897830  8b442450             mov eax, dword ptr [esp + 0x50]
// 00897834  89437c               mov dword ptr [ebx + 0x7c], eax
// 00897837  e9df010000           jmp 0x897a1b
// 0089783c  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 00897843  0f85d2010000         jne 0x897a1b
// 00897849  68c9230000           push 0x23c9
// 0089784e  8bcb                 mov ecx, ebx
// 00897850  e88b09f6ff           call 0x7f81e0
// 00897855  e9c1010000           jmp 0x897a1b
// 0089785a  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 00897861  741b                 je 0x89787e
// 00897863  83bd4802000000       cmp dword ptr [ebp + 0x248], 0
// 0089786a  7512                 jne 0x89787e
// 0089786c  b801000000           mov eax, 1
// 00897871  50                   push eax
// 00897872  8bcb                 mov ecx, ebx
// 00897874  e827ebf5ff           call 0x7f63a0
// 00897879  e99d010000           jmp 0x897a1b
// 0089787e  33c0                 xor eax, eax
// 00897880  50                   push eax
// 00897881  8bcb                 mov ecx, ebx
// 00897883  e818ebf5ff           call 0x7f63a0
// 00897888  e98e010000           jmp 0x897a1b
// 0089788d  83bd4c02000000       cmp dword ptr [ebp + 0x24c], 0
// 00897894  74e8                 je 0x89787e
// 00897896  83bd4802000000       cmp dword ptr [ebp + 0x248], 0
// 0089789d  74df                 je 0x89787e
// 0089789f  b801000000           mov eax, 1
// 008978a4  50                   push eax
// 008978a5  8bcb                 mov ecx, ebx
// 008978a7  e8f4eaf5ff           call 0x7f63a0
// 008978ac  e96a010000           jmp 0x897a1b
// 008978b1  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008978b7  6a08                 push 8
// 008978b9  56                   push esi
// 008978ba  e8510cfbff           call 0x848510
// 008978bf  8bd8                 mov ebx, eax
// 008978c1  6a01                 push 1
// 008978c3  8bcb                 mov ecx, ebx
// 008978c5  e876e7f5ff           call 0x7f6040
// 008978ca  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 008978d1  74ab                 je 0x89787e
// 008978d3  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 008978d9  83783c00             cmp dword ptr [eax + 0x3c], 0
// 008978dd  749f                 je 0x89787e
// 008978df  b801000000           mov eax, 1
// 008978e4  50                   push eax
// 008978e5  8bcb                 mov ecx, ebx
// 008978e7  e8b4eaf5ff           call 0x7f63a0
// 008978ec  e92a010000           jmp 0x897a1b
// 008978f1  8b8d60020000         mov ecx, dword ptr [ebp + 0x260]
// 008978f7  51                   push ecx
// 008978f8  8bcb                 mov ecx, ebx
// 008978fa  e8a1eaf5ff           call 0x7f63a0
// 008978ff  8b958c020000         mov edx, dword ptr [ebp + 0x28c]
// 00897905  52                   push edx
// 00897906  8bcb                 mov ecx, ebx
// 00897908  e823c8f6ff           call 0x804130
// 0089790d  e909010000           jmp 0x897a1b
// 00897912  8b03                 mov eax, dword ptr [ebx]
// 00897914  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0089791a  6a01                 push 1
// 0089791c  8bcb                 mov ecx, ebx
// 0089791e  ffd2                 call edx
// 00897920  8b8564020000         mov eax, dword ptr [ebp + 0x264]
// 00897926  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00897929  894c2424             mov dword ptr [esp + 0x24], ecx
// 0089792d  85c9                 test ecx, ecx
// 0089792f  0f84ef000000         je 0x897a24
// 00897935  83bd5402000000       cmp dword ptr [ebp + 0x254], 0
// 0089793c  0f84e2000000         je 0x897a24
// 00897942  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 00897946  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0089794e  0f8ec7000000         jle 0x897a1b
// 00897954  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00897958  50                   push eax
// 00897959  e8f212b9ff           call 0x428c50
// 0089795e  6880010000           push 0x180
// 00897963  8bf0                 mov esi, eax
// 00897965  e8f6bef5ff           call 0x7f3860
// 0089796a  83c404               add esp, 4
// 0089796d  89442434             mov dword ptr [esp + 0x34], eax
// 00897971  c644244802           mov byte ptr [esp + 0x48], 2
// 00897976  85c0                 test eax, eax
// 00897978  7413                 je 0x89798d
// 0089797a  8b8d64020000         mov ecx, dword ptr [ebp + 0x264]
// 00897980  56                   push esi
// 00897981  51                   push ecx
// 00897982  8bc8                 mov ecx, eax
// 00897984  e807d0ffff           call 0x894990
// 00897989  8bf8                 mov edi, eax
// 0089798b  eb02                 jmp 0x89798f
// 0089798d  33ff                 xor edi, edi
// 0089798f  8b542414             mov edx, dword ptr [esp + 0x14]
// 00897993  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00897997  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0089799d  6a01                 push 1
// 0089799f  52                   push edx
// 008979a0  6a00                 push 0
// 008979a2  6a00                 push 0
// 008979a4  57                   push edi
// 008979a5  c644245c00           mov byte ptr [esp + 0x5c], 0
// 008979aa  e84106fbff           call 0x847ff0
// 008979af  8b06                 mov eax, dword ptr [esi]
// 008979b1  8b5058               mov edx, dword ptr [eax + 0x58]
// 008979b4  8d4c2430             lea ecx, [esp + 0x30]
// 008979b8  51                   push ecx
// 008979b9  8bce                 mov ecx, esi
// 008979bb  ffd2                 call edx
// 008979bd  8bc8                 mov ecx, eax
// 008979bf  c644244803           mov byte ptr [esp + 0x48], 3
// 008979c4  ff1580de9800         call dword ptr [0x98de80]
// 008979ca  50                   push eax
// 008979cb  8bcf                 mov ecx, edi
// 008979cd  e85eedf5ff           call 0x7f6730
// 008979d2  8d4c2430             lea ecx, [esp + 0x30]
// 008979d6  c644244800           mov byte ptr [esp + 0x48], 0
// 008979db  ff15c0de9800         call dword ptr [0x98dec0]
// 008979e1  8b8d64020000         mov ecx, dword ptr [ebp + 0x264]
// 008979e7  56                   push esi
// 008979e8  e8d3890500           call 0x8f03c0
// 008979ed  85c0                 test eax, eax
// 008979ef  7408                 je 0x8979f9
// 008979f1  50                   push eax
// 008979f2  8bcf                 mov ecx, edi
// 008979f4  e8d7cfffff           call 0x8949d0
// 008979f9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008979fd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00897a01  ff442414             inc dword ptr [esp + 0x14]
// 00897a05  40                   inc eax
// 00897a06  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 00897a09  8944241c             mov dword ptr [esp + 0x1c], eax
// 00897a0d  0f8c41ffffff         jl 0x897954
// 00897a13  8b742414             mov esi, dword ptr [esp + 0x14]
// 00897a17  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00897a1b  6a08                 push 8
// 00897a1d  8bcb                 mov ecx, ebx
// 00897a1f  e83ce6f5ff           call 0x7f6060
// 00897a24  46                   inc esi
// 00897a25  8bcf                 mov ecx, edi
// 00897a27  89742414             mov dword ptr [esp + 0x14], esi
// 00897a2b  e820d8f6ff           call 0x805250
// 00897a30  3bf0                 cmp esi, eax
// 00897a32  0f8c0ffdffff         jl 0x897747
// 00897a38  8bcd                 mov ecx, ebp
// 00897a3a  e851f6f6ff           call 0x807090
// 00897a3f  8b5020               mov edx, dword ptr [eax + 0x20]
// 00897a42  57                   push edi
// 00897a43  55                   push ebp
// 00897a44  685c280000           push 0x285c
// 00897a49  52                   push edx
// 00897a4a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00897a50  8d4c2438             lea ecx, [esp + 0x38]
// 00897a54  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00897a5c  c744243864309a00     mov dword ptr [esp + 0x38], 0x9a3064
// 00897a64  e869c7f5ff           call 0x7f41d2
// 00897a69  8bc7                 mov eax, edi
// 00897a6b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00897a6f  64890d00000000       mov dword ptr fs:[0], ecx
// 00897a76  59                   pop ecx
// 00897a77  5f                   pop edi
// 00897a78  5e                   pop esi
// 00897a79  5d                   pop ebp
// 00897a7a  5b                   pop ebx
// 00897a7b  83c438               add esp, 0x38
// 00897a7e  c20400               ret 4
// 00897a81  8d4900               lea ecx, [ecx]
// 00897a84  b477                 mov ah, 0x77
// 00897a86  8900                 mov dword ptr [eax], eax
// 00897a88  fa                   cli 
// 00897a89  7789                 ja 0x897a14
// 00897a8b  003c78               add byte ptr [eax + edi*2], bh
// 00897a8e  8900                 mov dword ptr [eax], eax
// 00897a90  5a                   pop edx
// 00897a91  7889                 js 0x897a1c
// 00897a93  00247a               add byte ptr [edx + edi*2], ah
// 00897a96  8900                 mov dword ptr [eax], eax
// 00897a98  8d7889               lea edi, [eax - 0x77]
// 00897a9b  00247a               add byte ptr [edx + edi*2], ah
// 00897a9e  8900                 mov dword ptr [eax], eax
// 00897aa0  f1                   int1 
// 00897aa1  7889                 js 0x897a2c
// 00897aa3  0012                 add byte ptr [edx], dl
// 00897aa5  7989                 jns 0x897a30
// copied from an identical function in another client (function ?CreateContextMenu@CXTPRibbonBar@@MAEPAVCXTPPopupBar@@PAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonBar.cpp