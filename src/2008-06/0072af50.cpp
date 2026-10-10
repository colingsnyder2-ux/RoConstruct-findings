// roc 2008-06 0072af50  unit: CXTPRibbonTheme  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072af50
//
// 0072af50  83ec24               sub esp, 0x24
// 0072af53  8b442430             mov eax, dword ptr [esp + 0x30]
// 0072af57  53                   push ebx
// 0072af58  55                   push ebp
// 0072af59  56                   push esi
// 0072af5a  8bd9                 mov ebx, ecx
// 0072af5c  57                   push edi
// 0072af5d  895c2410             mov dword ptr [esp + 0x10], ebx
// 0072af61  85c0                 test eax, eax
// 0072af63  0f859e020000         jne 0x72b207
// 0072af69  8b742448             mov esi, dword ptr [esp + 0x48]
// 0072af6d  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0072af73  83f802               cmp eax, 2
// 0072af76  7439                 je 0x72afb1
// 0072af78  83f803               cmp eax, 3
// 0072af7b  7434                 je 0x72afb1
// 0072af7d  83f805               cmp eax, 5
// 0072af80  742f                 je 0x72afb1
// 0072af82  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0072af8a  b8c01e8600           mov eax, 0x861ec0
// 0072af8f  50                   push eax
// 0072af90  e85ba70000           call 0x7356f0
// 0072af95  8bf8                 mov edi, eax
// 0072af97  85ff                 test edi, edi
// 0072af99  7525                 jne 0x72afc0
// 0072af9b  8b442450             mov eax, dword ptr [esp + 0x50]
// 0072af9f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072afa3  8b542444             mov edx, dword ptr [esp + 0x44]
// 0072afa7  50                   push eax
// 0072afa8  51                   push ecx
// 0072afa9  56                   push esi
// 0072afaa  52                   push edx
// 0072afab  57                   push edi
// 0072afac  e96b020000           jmp 0x72b21c
// 0072afb1  c744244001000000     mov dword ptr [esp + 0x40], 1
// 0072afb9  b8a41e8600           mov eax, 0x861ea4
// 0072afbe  ebcf                 jmp 0x72af8f
// 0072afc0  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0072afc5  754f                 jne 0x72b016
// 0072afc7  8b442450             mov eax, dword ptr [esp + 0x50]
// 0072afcb  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0072afcf  8b10                 mov edx, dword ptr [eax]
// 0072afd1  8b7004               mov esi, dword ptr [eax + 4]
// 0072afd4  8b29                 mov ebp, dword ptr [ecx]
// 0072afd6  83ec10               sub esp, 0x10
// 0072afd9  837c245000           cmp dword ptr [esp + 0x50], 0
// 0072afde  8bc4                 mov eax, esp
// 0072afe0  751a                 jne 0x72affc
// 0072afe2  8d7af4               lea edi, [edx - 0xc]
// 0072afe5  8938                 mov dword ptr [eax], edi
// 0072afe7  33db                 xor ebx, ebx
// 0072afe9  895804               mov dword ptr [eax + 4], ebx
// 0072afec  895008               mov dword ptr [eax + 8], edx
// 0072afef  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 0072aff2  89700c               mov dword ptr [eax + 0xc], esi
// 0072aff5  ffd2                 call edx
// 0072aff7  e9f0010000           jmp 0x72b1ec
// 0072affc  33ff                 xor edi, edi
// 0072affe  8938                 mov dword ptr [eax], edi
// 0072b000  8d5ef4               lea ebx, [esi - 0xc]
// 0072b003  895804               mov dword ptr [eax + 4], ebx
// 0072b006  895008               mov dword ptr [eax + 8], edx
// 0072b009  89700c               mov dword ptr [eax + 0xc], esi
// 0072b00c  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 0072b00f  ffd0                 call eax
// 0072b011  e9d6010000           jmp 0x72b1ec
// 0072b016  8b742444             mov esi, dword ptr [esp + 0x44]
// 0072b01a  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0072b020  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0072b026  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0072b02c  894c2414             mov dword ptr [esp + 0x14], ecx
// 0072b030  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0072b036  89542418             mov dword ptr [esp + 0x18], edx
// 0072b03a  8b16                 mov edx, dword ptr [esi]
// 0072b03c  8944241c             mov dword ptr [esp + 0x1c], eax
// 0072b040  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 0072b046  894c2420             mov dword ptr [esp + 0x20], ecx
// 0072b04a  8bce                 mov ecx, esi
// 0072b04c  ffd0                 call eax
// 0072b04e  85c0                 test eax, eax
// 0072b050  7407                 je 0x72b059
// 0072b052  b802000000           mov eax, 2
// 0072b057  eb0f                 jmp 0x72b068
// 0072b059  8b16                 mov edx, dword ptr [esi]
// 0072b05b  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0072b05e  8bce                 mov ecx, esi
// 0072b060  ffd0                 call eax
// 0072b062  f7d8                 neg eax
// 0072b064  1bc0                 sbb eax, eax
// 0072b066  f7d8                 neg eax
// 0072b068  bb03000000           mov ebx, 3
// 0072b06d  53                   push ebx
// 0072b06e  50                   push eax
// 0072b06f  8d4c242c             lea ecx, [esp + 0x2c]
// 0072b073  51                   push ecx
// 0072b074  8bcf                 mov ecx, edi
// 0072b076  8beb                 mov ebp, ebx
// 0072b078  e8b3260600           call 0x78d730
// 0072b07d  83ec10               sub esp, 0x10
// 0072b080  8bcc                 mov ecx, esp
// 0072b082  8919                 mov dword ptr [ecx], ebx
// 0072b084  896904               mov dword ptr [ecx + 4], ebp
// 0072b087  8bd3                 mov edx, ebx
// 0072b089  895108               mov dword ptr [ecx + 8], edx
// 0072b08c  89510c               mov dword ptr [ecx + 0xc], edx
// 0072b08f  8b10                 mov edx, dword ptr [eax]
// 0072b091  83ec10               sub esp, 0x10
// 0072b094  8bcc                 mov ecx, esp
// 0072b096  8911                 mov dword ptr [ecx], edx
// 0072b098  8b5004               mov edx, dword ptr [eax + 4]
// 0072b09b  895104               mov dword ptr [ecx + 4], edx
// 0072b09e  8b5008               mov edx, dword ptr [eax + 8]
// 0072b0a1  8b400c               mov eax, dword ptr [eax + 0xc]
// 0072b0a4  895108               mov dword ptr [ecx + 8], edx
// 0072b0a7  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0072b0ab  89410c               mov dword ptr [ecx + 0xc], eax
// 0072b0ae  8d4c2434             lea ecx, [esp + 0x34]
// 0072b0b2  51                   push ecx
// 0072b0b3  52                   push edx
// 0072b0b4  8bcf                 mov ecx, edi
// 0072b0b6  e8451f0600           call 0x78d000
// 0072b0bb  8b06                 mov eax, dword ptr [esi]
// 0072b0bd  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 0072b0c3  8bce                 mov ecx, esi
// 0072b0c5  ffd2                 call edx
// 0072b0c7  85c0                 test eax, eax
// 0072b0c9  7405                 je 0x72b0d0
// 0072b0cb  8d432b               lea eax, [ebx + 0x2b]
// 0072b0ce  eb10                 jmp 0x72b0e0
// 0072b0d0  8b06                 mov eax, dword ptr [esi]
// 0072b0d2  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0072b0d5  8bce                 mov ecx, esi
// 0072b0d7  ffd2                 call edx
// 0072b0d9  f7d8                 neg eax
// 0072b0db  1bc0                 sbb eax, eax
// 0072b0dd  83c02e               add eax, 0x2e
// 0072b0e0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0072b0e4  50                   push eax
// 0072b0e5  8bcb                 mov ecx, ebx
// 0072b0e7  e8842ff8ff           call 0x6ae070
// 0072b0ec  837c244000           cmp dword ptr [esp + 0x40], 0
// 0072b0f1  8944244c             mov dword ptr [esp + 0x4c], eax
// 0072b0f5  8b442450             mov eax, dword ptr [esp + 0x50]
// 0072b0f9  8b08                 mov ecx, dword ptr [eax]
// 0072b0fb  894c2450             mov dword ptr [esp + 0x50], ecx
// 0072b0ff  750b                 jne 0x72b10c
// 0072b101  6a00                 push 0
// 0072b103  6aff                 push -1
// 0072b105  8d54241c             lea edx, [esp + 0x1c]
// 0072b109  52                   push edx
// 0072b10a  eb09                 jmp 0x72b115
// 0072b10c  6aff                 push -1
// 0072b10e  6a00                 push 0
// 0072b110  8d44241c             lea eax, [esp + 0x1c]
// 0072b114  50                   push eax
// 0072b115  ff15682d8000         call dword ptr [0x802d68]
// 0072b11b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0072b11f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0072b123  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072b127  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0072b12b  8b542448             mov edx, dword ptr [esp + 0x48]
// 0072b12f  2bc6                 sub eax, esi
// 0072b131  2bcf                 sub ecx, edi
// 0072b133  46                   inc esi
// 0072b134  47                   inc edi
// 0072b135  8d2c06               lea ebp, [esi + eax]
// 0072b138  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 0072b13e  03cf                 add ecx, edi
// 0072b140  894c2430             mov dword ptr [esp + 0x30], ecx
// 0072b144  83f802               cmp eax, 2
// 0072b147  7412                 je 0x72b15b
// 0072b149  83f803               cmp eax, 3
// 0072b14c  740d                 je 0x72b15b
// 0072b14e  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0072b156  83f805               cmp eax, 5
// 0072b159  7508                 jne 0x72b163
// 0072b15b  c744244401000000     mov dword ptr [esp + 0x44], 1
// 0072b163  6a14                 push 0x14
// 0072b165  8bcb                 mov ecx, ebx
// 0072b167  e8042ff8ff           call 0x6ae070
// 0072b16c  8b542444             mov edx, dword ptr [esp + 0x44]
// 0072b170  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072b174  50                   push eax
// 0072b175  8b442454             mov eax, dword ptr [esp + 0x54]
// 0072b179  50                   push eax
// 0072b17a  83ec10               sub esp, 0x10
// 0072b17d  8bc4                 mov eax, esp
// 0072b17f  8930                 mov dword ptr [eax], esi
// 0072b181  8b742454             mov esi, dword ptr [esp + 0x54]
// 0072b185  897804               mov dword ptr [eax + 4], edi
// 0072b188  896808               mov dword ptr [eax + 8], ebp
// 0072b18b  52                   push edx
// 0072b18c  89480c               mov dword ptr [eax + 0xc], ecx
// 0072b18f  56                   push esi
// 0072b190  8bcb                 mov ecx, ebx
// 0072b192  e859010100           call 0x73b2f0
// 0072b197  8b442448             mov eax, dword ptr [esp + 0x48]
// 0072b19b  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 0072b1a1  83f802               cmp eax, 2
// 0072b1a4  740e                 je 0x72b1b4
// 0072b1a6  83f803               cmp eax, 3
// 0072b1a9  7409                 je 0x72b1b4
// 0072b1ab  83f805               cmp eax, 5
// 0072b1ae  7404                 je 0x72b1b4
// 0072b1b0  33c9                 xor ecx, ecx
// 0072b1b2  eb05                 jmp 0x72b1b9
// 0072b1b4  b901000000           mov ecx, 1
// 0072b1b9  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0072b1bd  8b442450             mov eax, dword ptr [esp + 0x50]
// 0072b1c1  52                   push edx
// 0072b1c2  8b542418             mov edx, dword ptr [esp + 0x18]
// 0072b1c6  50                   push eax
// 0072b1c7  83ec10               sub esp, 0x10
// 0072b1ca  8bc4                 mov eax, esp
// 0072b1cc  8910                 mov dword ptr [eax], edx
// 0072b1ce  8b542430             mov edx, dword ptr [esp + 0x30]
// 0072b1d2  895004               mov dword ptr [eax + 4], edx
// 0072b1d5  8b542434             mov edx, dword ptr [esp + 0x34]
// 0072b1d9  895008               mov dword ptr [eax + 8], edx
// 0072b1dc  8b542438             mov edx, dword ptr [esp + 0x38]
// 0072b1e0  51                   push ecx
// 0072b1e1  56                   push esi
// 0072b1e2  8bcb                 mov ecx, ebx
// 0072b1e4  89500c               mov dword ptr [eax + 0xc], edx
// 0072b1e7  e804010100           call 0x73b2f0
// 0072b1ec  8b442438             mov eax, dword ptr [esp + 0x38]
// 0072b1f0  c70000000000         mov dword ptr [eax], 0
// 0072b1f6  c7400400000000       mov dword ptr [eax + 4], 0
// 0072b1fd  5f                   pop edi
// 0072b1fe  5e                   pop esi
// 0072b1ff  5d                   pop ebp
// 0072b200  5b                   pop ebx
// 0072b201  83c424               add esp, 0x24
// 0072b204  c21c00               ret 0x1c
// 0072b207  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0072b20b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0072b20f  51                   push ecx
// 0072b210  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0072b214  52                   push edx
// 0072b215  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0072b219  51                   push ecx
// 0072b21a  52                   push edx
// 0072b21b  50                   push eax
// 0072b21c  8b442450             mov eax, dword ptr [esp + 0x50]
// 0072b220  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 0072b224  50                   push eax
// 0072b225  56                   push esi
// 0072b226  8bcb                 mov ecx, ebx
// 0072b228  e8b3020100           call 0x73b4e0
// 0072b22d  5f                   pop edi
// 0072b22e  8bc6                 mov eax, esi
// 0072b230  5e                   pop esi
// 0072b231  5d                   pop ebp
// 0072b232  5b                   pop ebx
// 0072b233  83c424               add esp, 0x24
// 0072b236  c21c00               ret 0x1c
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonTheme.cpp (function ?DrawSpecialControl@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp
