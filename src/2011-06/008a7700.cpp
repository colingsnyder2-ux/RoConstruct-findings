// roc 2011-06 008a7700  unit: CXTPRibbonBar  size: 992 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a7700
//
// 008a7700  6aff                 push -1
// 008a7702  6830a9a000           push 0xa0a930
// 008a7707  64a100000000         mov eax, dword ptr fs:[0]
// 008a770d  50                   push eax
// 008a770e  83ec68               sub esp, 0x68
// 008a7711  53                   push ebx
// 008a7712  55                   push ebp
// 008a7713  56                   push esi
// 008a7714  57                   push edi
// 008a7715  a12058c900           mov eax, dword ptr [0xc95820]
// 008a771a  33c4                 xor eax, esp
// 008a771c  50                   push eax
// 008a771d  8d44247c             lea eax, [esp + 0x7c]
// 008a7721  64a300000000         mov dword ptr fs:[0], eax
// 008a7727  8bf1                 mov esi, ecx
// 008a7729  e872e8ffff           call 0x8a5fa0
// 008a772e  85c0                 test eax, eax
// 008a7730  0f8496030000         je 0x8a7acc
// 008a7736  83be4802000000       cmp dword ptr [esi + 0x248], 0
// 008a773d  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 008a7743  8b8e30020000         mov ecx, dword ptr [esi + 0x230]
// 008a7749  8b9e34020000         mov ebx, dword ptr [esi + 0x234]
// 008a774f  8b9638020000         mov edx, dword ptr [esi + 0x238]
// 008a7755  89442448             mov dword ptr [esp + 0x48], eax
// 008a7759  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008a775d  895c2450             mov dword ptr [esp + 0x50], ebx
// 008a7761  89542454             mov dword ptr [esp + 0x54], edx
// 008a7765  754a                 jne 0x8a77b1
// 008a7767  83be4c02000000       cmp dword ptr [esi + 0x24c], 0
// 008a776e  7441                 je 0x8a77b1
// 008a7770  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 008a7776  85c9                 test ecx, ecx
// 008a7778  7422                 je 0x8a779c
// 008a777a  8d442428             lea eax, [esp + 0x28]
// 008a777e  50                   push eax
// 008a777f  e85c4cf6ff           call 0x80c3e0
// 008a7784  8b4808               mov ecx, dword ptr [eax + 8]
// 008a7787  2b08                 sub ecx, dword ptr [eax]
// 008a7789  8dbe1c020000         lea edi, [esi + 0x21c]
// 008a778f  83c102               add ecx, 2
// 008a7792  03d9                 add ebx, ecx
// 008a7794  895c2450             mov dword ptr [esp + 0x50], ebx
// 008a7798  891f                 mov dword ptr [edi], ebx
// 008a779a  eb22                 jmp 0x8a77be
// 008a779c  b90c000000           mov ecx, 0xc
// 008a77a1  03d9                 add ebx, ecx
// 008a77a3  8dbe1c020000         lea edi, [esi + 0x21c]
// 008a77a9  895c2450             mov dword ptr [esp + 0x50], ebx
// 008a77ad  891f                 mov dword ptr [edi], ebx
// 008a77af  eb0d                 jmp 0x8a77be
// 008a77b1  83861c02000046       add dword ptr [esi + 0x21c], 0x46
// 008a77b8  8dbe1c020000         lea edi, [esi + 0x21c]
// 008a77be  8bce                 mov ecx, esi
// 008a77c0  e8ab5ef7ff           call 0x81d670
// 008a77c5  8bd8                 mov ebx, eax
// 008a77c7  8bcb                 mov ecx, ebx
// 008a77c9  e84a4e1200           call 0x9cc618
// 008a77ce  8bcb                 mov ecx, ebx
// 008a77d0  8be8                 mov ebp, eax
// 008a77d2  e8474e1200           call 0x9cc61e
// 008a77d7  8b9680020000         mov edx, dword ptr [esi + 0x280]
// 008a77dd  2480                 and al, 0x80
// 008a77df  33c9                 xor ecx, ecx
// 008a77e1  3c80                 cmp al, 0x80
// 008a77e3  8b4240               mov eax, dword ptr [edx + 0x40]
// 008a77e6  0f94c1               sete cl
// 008a77e9  014704               add dword ptr [edi + 4], eax
// 008a77ec  83470cfd             add dword ptr [edi + 0xc], -3
// 008a77f0  8b8680020000         mov eax, dword ptr [esi + 0x280]
// 008a77f6  8b5044               mov edx, dword ptr [eax + 0x44]
// 008a77f9  89542424             mov dword ptr [esp + 0x24], edx
// 008a77fd  33d2                 xor edx, edx
// 008a77ff  8bc5                 mov eax, ebp
// 008a7801  2500000001           and eax, 0x1000000
// 008a7806  3d00000001           cmp eax, 0x1000000
// 008a780b  0f94c2               sete dl
// 008a780e  33db                 xor ebx, ebx
// 008a7810  8bc5                 mov eax, ebp
// 008a7812  2500000800           and eax, 0x80000
// 008a7817  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008a781f  89542418             mov dword ptr [esp + 0x18], edx
// 008a7823  8bd5                 mov edx, ebp
// 008a7825  81e200000100         and edx, 0x10000
// 008a782b  81fa00000100         cmp edx, 0x10000
// 008a7831  0f94c3               sete bl
// 008a7834  8bd5                 mov edx, ebp
// 008a7836  81e200000200         and edx, 0x20000
// 008a783c  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008a7840  33db                 xor ebx, ebx
// 008a7842  81fa00000200         cmp edx, 0x20000
// 008a7848  0f94c3               sete bl
// 008a784b  8bd3                 mov edx, ebx
// 008a784d  89542428             mov dword ptr [esp + 0x28], edx
// 008a7851  85c9                 test ecx, ecx
// 008a7853  7518                 jne 0x8a786d
// 008a7855  85c0                 test eax, eax
// 008a7857  7414                 je 0x8a786d
// 008a7859  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 008a785d  7504                 jne 0x8a7863
// 008a785f  85d2                 test edx, edx
// 008a7861  740a                 je 0x8a786d
// 008a7863  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008a786b  eb08                 jmp 0x8a7875
// 008a786d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008a7875  8bd8                 mov ebx, eax
// 008a7877  85c0                 test eax, eax
// 008a7879  743a                 je 0x8a78b5
// 008a787b  85c9                 test ecx, ecx
// 008a787d  7536                 jne 0x8a78b5
// 008a787f  8bce                 mov ecx, esi
// 008a7881  e8ea5df7ff           call 0x81d670
// 008a7886  8b4020               mov eax, dword ptr [eax + 0x20]
// 008a7889  6a00                 push 0
// 008a788b  50                   push eax
// 008a788c  ff15101aa400         call dword ptr [0xa41a10]
// 008a7892  50                   push eax
// 008a7893  e8502ef6ff           call 0x80a6e8
// 008a7898  85c0                 test eax, eax
// 008a789a  7419                 je 0x8a78b5
// 008a789c  8b4804               mov ecx, dword ptr [eax + 4]
// 008a789f  6a00                 push 0
// 008a78a1  6860f00000           push 0xf060
// 008a78a6  51                   push ecx
// 008a78a7  ff152c1aa400         call dword ptr [0xa41a2c]
// 008a78ad  a803                 test al, 3
// 008a78af  7404                 je 0x8a78b5
// 008a78b1  33c9                 xor ecx, ecx
// 008a78b3  eb04                 jmp 0x8a78b9
// 008a78b5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a78b9  33c0                 xor eax, eax
// 008a78bb  39442418             cmp dword ptr [esp + 0x18], eax
// 008a78bf  740e                 je 0x8a78cf
// 008a78c1  f7c500000040         test ebp, 0x40000000
// 008a78c7  7406                 je 0x8a78cf
// 008a78c9  33db                 xor ebx, ebx
// 008a78cb  89442414             mov dword ptr [esp + 0x14], eax
// 008a78cf  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008a78d3  3be8                 cmp ebp, eax
// 008a78d5  7509                 jne 0x8a78e0
// 008a78d7  3bd8                 cmp ebx, eax
// 008a78d9  7405                 je 0x8a78e0
// 008a78db  b801000000           mov eax, 1
// 008a78e0  57                   push edi
// 008a78e1  51                   push ecx
// 008a78e2  50                   push eax
// 008a78e3  6860f00000           push 0xf060
// 008a78e8  8bce                 mov ecx, esi
// 008a78ea  e821fcffff           call 0x8a7510
// 008a78ef  85ed                 test ebp, ebp
// 008a78f1  7511                 jne 0x8a7904
// 008a78f3  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008a78f7  740b                 je 0x8a7904
// 008a78f9  396c2418             cmp dword ptr [esp + 0x18], ebp
// 008a78fd  7405                 je 0x8a7904
// 008a78ff  8d4501               lea eax, [ebp + 1]
// 008a7902  eb02                 jmp 0x8a7906
// 008a7904  33c0                 xor eax, eax
// 008a7906  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008a790a  57                   push edi
// 008a790b  53                   push ebx
// 008a790c  50                   push eax
// 008a790d  6820f10000           push 0xf120
// 008a7912  8bce                 mov ecx, esi
// 008a7914  e8f7fbffff           call 0x8a7510
// 008a7919  85ed                 test ebp, ebp
// 008a791b  7511                 jne 0x8a792e
// 008a791d  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008a7921  740b                 je 0x8a792e
// 008a7923  396c2418             cmp dword ptr [esp + 0x18], ebp
// 008a7927  7505                 jne 0x8a792e
// 008a7929  8d4501               lea eax, [ebp + 1]
// 008a792c  eb02                 jmp 0x8a7930
// 008a792e  33c0                 xor eax, eax
// 008a7930  57                   push edi
// 008a7931  53                   push ebx
// 008a7932  50                   push eax
// 008a7933  6830f00000           push 0xf030
// 008a7938  8bce                 mov ecx, esi
// 008a793a  e8d1fbffff           call 0x8a7510
// 008a793f  85ed                 test ebp, ebp
// 008a7941  750b                 jne 0x8a794e
// 008a7943  396c2414             cmp dword ptr [esp + 0x14], ebp
// 008a7947  7405                 je 0x8a794e
// 008a7949  8d4501               lea eax, [ebp + 1]
// 008a794c  eb02                 jmp 0x8a7950
// 008a794e  33c0                 xor eax, eax
// 008a7950  8b542428             mov edx, dword ptr [esp + 0x28]
// 008a7954  57                   push edi
// 008a7955  52                   push edx
// 008a7956  50                   push eax
// 008a7957  6820f00000           push 0xf020
// 008a795c  8bce                 mov ecx, esi
// 008a795e  e8adfbffff           call 0x8a7510
// 008a7963  85ed                 test ebp, ebp
// 008a7965  7407                 je 0x8a796e
// 008a7967  8386240200009c       add dword ptr [esi + 0x224], -0x64
// 008a796e  8b8e28020000         mov ecx, dword ptr [esi + 0x228]
// 008a7974  8b9624020000         mov edx, dword ptr [esi + 0x224]
// 008a797a  8b9e20020000         mov ebx, dword ptr [esi + 0x220]
// 008a7980  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 008a7986  51                   push ecx
// 008a7987  8dae0c020000         lea ebp, [esi + 0x20c]
// 008a798d  52                   push edx
// 008a798e  53                   push ebx
// 008a798f  83c046               add eax, 0x46
// 008a7992  50                   push eax
// 008a7993  55                   push ebp
// 008a7994  ff15c81ba400         call dword ptr [0xa41bc8]
// 008a799a  56                   push esi
// 008a799b  8d4c246c             lea ecx, [esp + 0x6c]
// 008a799f  e88435f6ff           call 0x80af28
// 008a79a4  8bce                 mov ecx, esi
// 008a79a6  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 008a79b1  e88ae5ffff           call 0x8a5f40
// 008a79b6  05b4050000           add eax, 0x5b4
// 008a79bb  50                   push eax
// 008a79bc  8d44246c             lea eax, [esp + 0x6c]
// 008a79c0  50                   push eax
// 008a79c1  8d4c2460             lea ecx, [esp + 0x60]
// 008a79c5  e85657fbff           call 0x85d120
// 008a79ca  8d9e94020000         lea ebx, [esi + 0x294]
// 008a79d0  53                   push ebx
// 008a79d1  8bce                 mov ecx, esi
// 008a79d3  c684248800000001     mov byte ptr [esp + 0x88], 1
// 008a79db  e8905cf7ff           call 0x81d670
// 008a79e0  8bc8                 mov ecx, eax
// 008a79e2  e85f2cf6ff           call 0x80a646
// 008a79e7  8d4c2428             lea ecx, [esp + 0x28]
// 008a79eb  51                   push ecx
// 008a79ec  8bcb                 mov ecx, ebx
// 008a79ee  ff15a826a400         call dword ptr [0xa426a8]
// 008a79f4  50                   push eax
// 008a79f5  8bcb                 mov ecx, ebx
// 008a79f7  ff15c82da400         call dword ptr [0xa42dc8]
// 008a79fd  8b542478             mov edx, dword ptr [esp + 0x78]
// 008a7a01  50                   push eax
// 008a7a02  52                   push edx
// 008a7a03  ff153801a400         call dword ptr [0xa40138]
// 008a7a09  8b4508               mov eax, dword ptr [ebp + 8]
// 008a7a0c  8b742428             mov esi, dword ptr [esp + 0x28]
// 008a7a10  2b4500               sub eax, dword ptr [ebp]
// 008a7a13  83c614               add esi, 0x14
// 008a7a16  3bc6                 cmp eax, esi
// 008a7a18  7d06                 jge 0x8a7a20
// 008a7a1a  8b7508               mov esi, dword ptr [ebp + 8]
// 008a7a1d  2b7500               sub esi, dword ptr [ebp]
// 008a7a20  8b4d00               mov ecx, dword ptr [ebp]
// 008a7a23  8b5504               mov edx, dword ptr [ebp + 4]
// 008a7a26  8b4508               mov eax, dword ptr [ebp + 8]
// 008a7a29  2bc1                 sub eax, ecx
// 008a7a2b  8954243c             mov dword ptr [esp + 0x3c], edx
// 008a7a2f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 008a7a32  2bc6                 sub eax, esi
// 008a7a34  89542444             mov dword ptr [esp + 0x44], edx
// 008a7a38  99                   cdq 
// 008a7a39  2bc2                 sub eax, edx
// 008a7a3b  d1f8                 sar eax, 1
// 008a7a3d  03c8                 add ecx, eax
// 008a7a3f  894c2438             mov dword ptr [esp + 0x38], ecx
// 008a7a43  03ce                 add ecx, esi
// 008a7a45  8d442438             lea eax, [esp + 0x38]
// 008a7a49  894c2440             mov dword ptr [esp + 0x40], ecx
// 008a7a4d  50                   push eax
// 008a7a4e  8d4c244c             lea ecx, [esp + 0x4c]
// 008a7a52  51                   push ecx
// 008a7a53  8d542430             lea edx, [esp + 0x30]
// 008a7a57  52                   push edx
// 008a7a58  ff15fc1ba400         call dword ptr [0xa41bfc]
// 008a7a5e  85c0                 test eax, eax
// 008a7a60  7429                 je 0x8a7a8b
// 008a7a62  8b4708               mov eax, dword ptr [edi + 8]
// 008a7a65  2b07                 sub eax, dword ptr [edi]
// 008a7a67  3bc6                 cmp eax, esi
// 008a7a69  7d05                 jge 0x8a7a70
// 008a7a6b  8b7708               mov esi, dword ptr [edi + 8]
// 008a7a6e  2b37                 sub esi, dword ptr [edi]
// 008a7a70  8b4708               mov eax, dword ptr [edi + 8]
// 008a7a73  2b07                 sub eax, dword ptr [edi]
// 008a7a75  2bc6                 sub eax, esi
// 008a7a77  99                   cdq 
// 008a7a78  2bc2                 sub eax, edx
// 008a7a7a  d1f8                 sar eax, 1
// 008a7a7c  0307                 add eax, dword ptr [edi]
// 008a7a7e  8d0c30               lea ecx, [eax + esi]
// 008a7a81  89442438             mov dword ptr [esp + 0x38], eax
// 008a7a85  894c2440             mov dword ptr [esp + 0x40], ecx
// 008a7a89  eb04                 jmp 0x8a7a8f
// 008a7a8b  8b442438             mov eax, dword ptr [esp + 0x38]
// 008a7a8f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008a7a93  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008a7a97  894500               mov dword ptr [ebp], eax
// 008a7a9a  8b442440             mov eax, dword ptr [esp + 0x40]
// 008a7a9e  895504               mov dword ptr [ebp + 4], edx
// 008a7aa1  894508               mov dword ptr [ebp + 8], eax
// 008a7aa4  894d0c               mov dword ptr [ebp + 0xc], ecx
// 008a7aa7  8d4c2458             lea ecx, [esp + 0x58]
// 008a7aab  c684248400000000     mov byte ptr [esp + 0x84], 0
// 008a7ab3  e8e856fbff           call 0x85d1a0
// 008a7ab8  8d4c2468             lea ecx, [esp + 0x68]
// 008a7abc  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 008a7ac7  e85634f6ff           call 0x80af22
// 008a7acc  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008a7ad0  64890d00000000       mov dword ptr fs:[0], ecx
// 008a7ad7  59                   pop ecx
// 008a7ad8  5f                   pop edi
// 008a7ad9  5e                   pop esi
// 008a7ada  5d                   pop ebp
// 008a7adb  5b                   pop ebx
// 008a7adc  83c474               add esp, 0x74
// 008a7adf  c3                   ret 
// copied from an identical function in another client (function ?RepositionCaptionButtons@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp