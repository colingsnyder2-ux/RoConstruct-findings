// roc 2010-06 005f0420  unit: RBX::ChangeHistoryService  size: 1327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f0420
//
// 005f0420  83ec1c               sub esp, 0x1c
// 005f0423  53                   push ebx
// 005f0424  55                   push ebp
// 005f0425  56                   push esi
// 005f0426  57                   push edi
// 005f0427  33ff                 xor edi, edi
// 005f0429  33ed                 xor ebp, ebp
// 005f042b  eb03                 jmp 0x5f0430
// 005f042d  8d4900               lea ecx, [ecx]
// 005f0430  8a442438             mov al, byte ptr [esp + 0x38]
// 005f0434  84c0                 test al, al
// 005f0436  7523                 jne 0x5f045b
// 005f0438  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f043c  3bcf                 cmp ecx, edi
// 005f043e  7411                 je 0x5f0451
// 005f0440  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f0446  83f8ff               cmp eax, -1
// 005f0449  7406                 je 0x5f0451
// 005f044b  88442439             mov byte ptr [esp + 0x39], al
// 005f044f  eb04                 jmp 0x5f0455
// 005f0451  897c2434             mov dword ptr [esp + 0x34], edi
// 005f0455  b001                 mov al, 1
// 005f0457  88442438             mov byte ptr [esp + 0x38], al
// 005f045b  807c244000           cmp byte ptr [esp + 0x40], 0
// 005f0460  7526                 jne 0x5f0488
// 005f0462  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005f0466  3bcf                 cmp ecx, edi
// 005f0468  7411                 je 0x5f047b
// 005f046a  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f0470  83f8ff               cmp eax, -1
// 005f0473  7406                 je 0x5f047b
// 005f0475  88442441             mov byte ptr [esp + 0x41], al
// 005f0479  eb04                 jmp 0x5f047f
// 005f047b  897c243c             mov dword ptr [esp + 0x3c], edi
// 005f047f  8a442438             mov al, byte ptr [esp + 0x38]
// 005f0483  c644244001           mov byte ptr [esp + 0x40], 1
// 005f0488  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f048c  3bcf                 cmp ecx, edi
// 005f048e  750c                 jne 0x5f049c
// 005f0490  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005f0494  0f84f5020000         je 0x5f078f
// 005f049a  eb0a                 jmp 0x5f04a6
// 005f049c  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005f04a0  0f85e9020000         jne 0x5f078f
// 005f04a6  84c0                 test al, al
// 005f04a8  7523                 jne 0x5f04cd
// 005f04aa  3bcf                 cmp ecx, edi
// 005f04ac  7411                 je 0x5f04bf
// 005f04ae  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f04b4  83f8ff               cmp eax, -1
// 005f04b7  7406                 je 0x5f04bf
// 005f04b9  88442439             mov byte ptr [esp + 0x39], al
// 005f04bd  eb04                 jmp 0x5f04c3
// 005f04bf  897c2434             mov dword ptr [esp + 0x34], edi
// 005f04c3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f04c7  b001                 mov al, 1
// 005f04c9  88442438             mov byte ptr [esp + 0x38], al
// 005f04cd  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 005f04d1  885c2410             mov byte ptr [esp + 0x10], bl
// 005f04d5  84c0                 test al, al
// 005f04d7  7522                 jne 0x5f04fb
// 005f04d9  3bcf                 cmp ecx, edi
// 005f04db  7411                 je 0x5f04ee
// 005f04dd  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f04e3  83f8ff               cmp eax, -1
// 005f04e6  7406                 je 0x5f04ee
// 005f04e8  88442439             mov byte ptr [esp + 0x39], al
// 005f04ec  eb04                 jmp 0x5f04f2
// 005f04ee  897c2434             mov dword ptr [esp + 0x34], edi
// 005f04f2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f04f6  c644243801           mov byte ptr [esp + 0x38], 1
// 005f04fb  3bcf                 cmp ecx, edi
// 005f04fd  7429                 je 0x5f0528
// 005f04ff  ff1570a69e00         call dword ptr [0x9ea670]
// 005f0505  83f8ff               cmp eax, -1
// 005f0508  741e                 je 0x5f0528
// 005f050a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f050e  c644243800           mov byte ptr [esp + 0x38], 0
// 005f0513  3bcf                 cmp ecx, edi
// 005f0515  7419                 je 0x5f0530
// 005f0517  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f051d  83f8ff               cmp eax, -1
// 005f0520  740e                 je 0x5f0530
// 005f0522  88442439             mov byte ptr [esp + 0x39], al
// 005f0526  eb0c                 jmp 0x5f0534
// 005f0528  33c9                 xor ecx, ecx
// 005f052a  894c2434             mov dword ptr [esp + 0x34], ecx
// 005f052e  eb08                 jmp 0x5f0538
// 005f0530  897c2434             mov dword ptr [esp + 0x34], edi
// 005f0534  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f0538  807c244000           cmp byte ptr [esp + 0x40], 0
// 005f053d  b001                 mov al, 1
// 005f053f  88442438             mov byte ptr [esp + 0x38], al
// 005f0543  752a                 jne 0x5f056f
// 005f0545  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005f0549  3bcf                 cmp ecx, edi
// 005f054b  7411                 je 0x5f055e
// 005f054d  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f0553  83f8ff               cmp eax, -1
// 005f0556  7406                 je 0x5f055e
// 005f0558  88442441             mov byte ptr [esp + 0x41], al
// 005f055c  eb04                 jmp 0x5f0562
// 005f055e  897c243c             mov dword ptr [esp + 0x3c], edi
// 005f0562  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f0566  8a442438             mov al, byte ptr [esp + 0x38]
// 005f056a  c644244001           mov byte ptr [esp + 0x40], 1
// 005f056f  3bcf                 cmp ecx, edi
// 005f0571  0f858c000000         jne 0x5f0603
// 005f0577  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005f057b  0f858c000000         jne 0x5f060d
// 005f0581  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f0585  0fb6f3               movzx esi, bl
// 005f0588  8bd6                 mov edx, esi
// 005f058a  c1ea02               shr edx, 2
// 005f058d  8a049568b9ba00       mov al, byte ptr [edx*4 + 0xbab968]
// 005f0594  88442420             mov byte ptr [esp + 0x20], al
// 005f0598  3bcf                 cmp ecx, edi
// 005f059a  7410                 je 0x5f05ac
// 005f059c  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f05a0  52                   push edx
// 005f05a1  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f05a7  83f8ff               cmp eax, -1
// 005f05aa  7505                 jne 0x5f05b1
// 005f05ac  c644244401           mov byte ptr [esp + 0x44], 1
// 005f05b1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f05b5  83e603               and esi, 3
// 005f05b8  c1e606               shl esi, 6
// 005f05bb  8a8668b9ba00         mov al, byte ptr [esi + 0xbab968]
// 005f05c1  88442420             mov byte ptr [esp + 0x20], al
// 005f05c5  3bcf                 cmp ecx, edi
// 005f05c7  7410                 je 0x5f05d9
// 005f05c9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f05cd  52                   push edx
// 005f05ce  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f05d4  83f8ff               cmp eax, -1
// 005f05d7  7505                 jne 0x5f05de
// 005f05d9  c644244401           mov byte ptr [esp + 0x44], 1
// 005f05de  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f05e2  3bcf                 cmp ecx, edi
// 005f05e4  740d                 je 0x5f05f3
// 005f05e6  6a3d                 push 0x3d
// 005f05e8  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f05ee  83f8ff               cmp eax, -1
// 005f05f1  7505                 jne 0x5f05f8
// 005f05f3  c644244401           mov byte ptr [esp + 0x44], 1
// 005f05f8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f05fc  3bcf                 cmp ecx, edi
// 005f05fe  e982010000           jmp 0x5f0785
// 005f0603  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005f0607  0f8574ffffff         jne 0x5f0581
// 005f060d  84c0                 test al, al
// 005f060f  7523                 jne 0x5f0634
// 005f0611  3bcf                 cmp ecx, edi
// 005f0613  7411                 je 0x5f0626
// 005f0615  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f061b  83f8ff               cmp eax, -1
// 005f061e  7406                 je 0x5f0626
// 005f0620  88442439             mov byte ptr [esp + 0x39], al
// 005f0624  eb04                 jmp 0x5f062a
// 005f0626  897c2434             mov dword ptr [esp + 0x34], edi
// 005f062a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f062e  b001                 mov al, 1
// 005f0630  88442438             mov byte ptr [esp + 0x38], al
// 005f0634  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 005f0638  885c2411             mov byte ptr [esp + 0x11], bl
// 005f063c  84c0                 test al, al
// 005f063e  7522                 jne 0x5f0662
// 005f0640  3bcf                 cmp ecx, edi
// 005f0642  7411                 je 0x5f0655
// 005f0644  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f064a  83f8ff               cmp eax, -1
// 005f064d  7406                 je 0x5f0655
// 005f064f  88442439             mov byte ptr [esp + 0x39], al
// 005f0653  eb04                 jmp 0x5f0659
// 005f0655  897c2434             mov dword ptr [esp + 0x34], edi
// 005f0659  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f065d  c644243801           mov byte ptr [esp + 0x38], 1
// 005f0662  3bcf                 cmp ecx, edi
// 005f0664  7429                 je 0x5f068f
// 005f0666  ff1570a69e00         call dword ptr [0x9ea670]
// 005f066c  83f8ff               cmp eax, -1
// 005f066f  741e                 je 0x5f068f
// 005f0671  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f0675  c644243800           mov byte ptr [esp + 0x38], 0
// 005f067a  3bcf                 cmp ecx, edi
// 005f067c  7419                 je 0x5f0697
// 005f067e  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f0684  83f8ff               cmp eax, -1
// 005f0687  740e                 je 0x5f0697
// 005f0689  88442439             mov byte ptr [esp + 0x39], al
// 005f068d  eb0c                 jmp 0x5f069b
// 005f068f  33c9                 xor ecx, ecx
// 005f0691  894c2434             mov dword ptr [esp + 0x34], ecx
// 005f0695  eb08                 jmp 0x5f069f
// 005f0697  897c2434             mov dword ptr [esp + 0x34], edi
// 005f069b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f069f  807c244000           cmp byte ptr [esp + 0x40], 0
// 005f06a4  b001                 mov al, 1
// 005f06a6  88442438             mov byte ptr [esp + 0x38], al
// 005f06aa  752a                 jne 0x5f06d6
// 005f06ac  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005f06b0  3bcf                 cmp ecx, edi
// 005f06b2  7411                 je 0x5f06c5
// 005f06b4  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f06ba  83f8ff               cmp eax, -1
// 005f06bd  7406                 je 0x5f06c5
// 005f06bf  88442441             mov byte ptr [esp + 0x41], al
// 005f06c3  eb04                 jmp 0x5f06c9
// 005f06c5  897c243c             mov dword ptr [esp + 0x3c], edi
// 005f06c9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f06cd  8a442438             mov al, byte ptr [esp + 0x38]
// 005f06d1  c644244001           mov byte ptr [esp + 0x40], 1
// 005f06d6  3bcf                 cmp ecx, edi
// 005f06d8  0f85cc000000         jne 0x5f07aa
// 005f06de  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005f06e2  0f85cc000000         jne 0x5f07b4
// 005f06e8  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 005f06ed  8bc6                 mov eax, esi
// 005f06ef  c1e802               shr eax, 2
// 005f06f2  8a0c8568b9ba00       mov cl, byte ptr [eax*4 + 0xbab968]
// 005f06f9  884c2420             mov byte ptr [esp + 0x20], cl
// 005f06fd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f0701  3bcf                 cmp ecx, edi
// 005f0703  7410                 je 0x5f0715
// 005f0705  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f0709  52                   push edx
// 005f070a  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f0710  83f8ff               cmp eax, -1
// 005f0713  7505                 jne 0x5f071a
// 005f0715  c644244401           mov byte ptr [esp + 0x44], 1
// 005f071a  0fb6fb               movzx edi, bl
// 005f071d  83e603               and esi, 3
// 005f0720  8bc7                 mov eax, edi
// 005f0722  c1e604               shl esi, 4
// 005f0725  c1e804               shr eax, 4
// 005f0728  03f0                 add esi, eax
// 005f072a  8a0cb568b9ba00       mov cl, byte ptr [esi*4 + 0xbab968]
// 005f0731  884c2420             mov byte ptr [esp + 0x20], cl
// 005f0735  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f0739  85c9                 test ecx, ecx
// 005f073b  7410                 je 0x5f074d
// 005f073d  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f0741  52                   push edx
// 005f0742  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f0748  83f8ff               cmp eax, -1
// 005f074b  7505                 jne 0x5f0752
// 005f074d  c644244401           mov byte ptr [esp + 0x44], 1
// 005f0752  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f0756  83e70f               and edi, 0xf
// 005f0759  c1e704               shl edi, 4
// 005f075c  8a8768b9ba00         mov al, byte ptr [edi + 0xbab968]
// 005f0762  88442420             mov byte ptr [esp + 0x20], al
// 005f0766  85c9                 test ecx, ecx
// 005f0768  7410                 je 0x5f077a
// 005f076a  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f076e  52                   push edx
// 005f076f  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f0775  83f8ff               cmp eax, -1
// 005f0778  7505                 jne 0x5f077f
// 005f077a  c644244401           mov byte ptr [esp + 0x44], 1
// 005f077f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f0783  85c9                 test ecx, ecx
// 005f0785  7408                 je 0x5f078f
// 005f0787  6a3d                 push 0x3d
// 005f0789  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f078f  8b442430             mov eax, dword ptr [esp + 0x30]
// 005f0793  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f0797  8b542438             mov edx, dword ptr [esp + 0x38]
// 005f079b  5f                   pop edi
// 005f079c  5e                   pop esi
// 005f079d  5d                   pop ebp
// 005f079e  8908                 mov dword ptr [eax], ecx
// 005f07a0  895004               mov dword ptr [eax + 4], edx
// 005f07a3  5b                   pop ebx
// 005f07a4  83c41c               add esp, 0x1c
// 005f07a7  c22400               ret 0x24
// 005f07aa  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005f07ae  0f8534ffffff         jne 0x5f06e8
// 005f07b4  84c0                 test al, al
// 005f07b6  7523                 jne 0x5f07db
// 005f07b8  3bcf                 cmp ecx, edi
// 005f07ba  7411                 je 0x5f07cd
// 005f07bc  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f07c2  83f8ff               cmp eax, -1
// 005f07c5  7406                 je 0x5f07cd
// 005f07c7  88442439             mov byte ptr [esp + 0x39], al
// 005f07cb  eb04                 jmp 0x5f07d1
// 005f07cd  897c2434             mov dword ptr [esp + 0x34], edi
// 005f07d1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f07d5  b001                 mov al, 1
// 005f07d7  88442438             mov byte ptr [esp + 0x38], al
// 005f07db  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 005f07df  84c0                 test al, al
// 005f07e1  7522                 jne 0x5f0805
// 005f07e3  3bcf                 cmp ecx, edi
// 005f07e5  7411                 je 0x5f07f8
// 005f07e7  ff156ca69e00         call dword ptr [0x9ea66c]
// 005f07ed  83f8ff               cmp eax, -1
// 005f07f0  7406                 je 0x5f07f8
// 005f07f2  88442439             mov byte ptr [esp + 0x39], al
// 005f07f6  eb04                 jmp 0x5f07fc
// 005f07f8  897c2434             mov dword ptr [esp + 0x34], edi
// 005f07fc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005f0800  c644243801           mov byte ptr [esp + 0x38], 1
// 005f0805  3bcf                 cmp ecx, edi
// 005f0807  7412                 je 0x5f081b
// 005f0809  ff1570a69e00         call dword ptr [0x9ea670]
// 005f080f  83f8ff               cmp eax, -1
// 005f0812  7407                 je 0x5f081b
// 005f0814  c644243800           mov byte ptr [esp + 0x38], 0
// 005f0819  eb09                 jmp 0x5f0824
// 005f081b  897c2434             mov dword ptr [esp + 0x34], edi
// 005f081f  c644243801           mov byte ptr [esp + 0x38], 1
// 005f0824  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 005f0829  8bc6                 mov eax, esi
// 005f082b  c1e802               shr eax, 2
// 005f082e  8a0c8568b9ba00       mov cl, byte ptr [eax*4 + 0xbab968]
// 005f0835  884c2414             mov byte ptr [esp + 0x14], cl
// 005f0839  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f083d  3bcf                 cmp ecx, edi
// 005f083f  7410                 je 0x5f0851
// 005f0841  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f0845  52                   push edx
// 005f0846  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f084c  83f8ff               cmp eax, -1
// 005f084f  7505                 jne 0x5f0856
// 005f0851  c644244401           mov byte ptr [esp + 0x44], 1
// 005f0856  0fb67c2411           movzx edi, byte ptr [esp + 0x11]
// 005f085b  83e603               and esi, 3
// 005f085e  8bc7                 mov eax, edi
// 005f0860  c1e604               shl esi, 4
// 005f0863  c1e804               shr eax, 4
// 005f0866  03f0                 add esi, eax
// 005f0868  8a0cb568b9ba00       mov cl, byte ptr [esi*4 + 0xbab968]
// 005f086f  884c2418             mov byte ptr [esp + 0x18], cl
// 005f0873  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f0877  85c9                 test ecx, ecx
// 005f0879  7410                 je 0x5f088b
// 005f087b  8b542418             mov edx, dword ptr [esp + 0x18]
// 005f087f  52                   push edx
// 005f0880  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f0886  83f8ff               cmp eax, -1
// 005f0889  7505                 jne 0x5f0890
// 005f088b  c644244401           mov byte ptr [esp + 0x44], 1
// 005f0890  0fb6f3               movzx esi, bl
// 005f0893  8bc6                 mov eax, esi
// 005f0895  c1e806               shr eax, 6
// 005f0898  83e70f               and edi, 0xf
// 005f089b  8d0cb8               lea ecx, [eax + edi*4]
// 005f089e  8a148d68b9ba00       mov dl, byte ptr [ecx*4 + 0xbab968]
// 005f08a5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f08a9  8854241c             mov byte ptr [esp + 0x1c], dl
// 005f08ad  85c9                 test ecx, ecx
// 005f08af  7410                 je 0x5f08c1
// 005f08b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f08b5  50                   push eax
// 005f08b6  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f08bc  83f8ff               cmp eax, -1
// 005f08bf  7505                 jne 0x5f08c6
// 005f08c1  c644244401           mov byte ptr [esp + 0x44], 1
// 005f08c6  83e63f               and esi, 0x3f
// 005f08c9  8a0cb568b9ba00       mov cl, byte ptr [esi*4 + 0xbab968]
// 005f08d0  884c2420             mov byte ptr [esp + 0x20], cl
// 005f08d4  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f08d8  85c9                 test ecx, ecx
// 005f08da  7410                 je 0x5f08ec
// 005f08dc  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f08e0  52                   push edx
// 005f08e1  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f08e7  83f8ff               cmp eax, -1
// 005f08ea  7505                 jne 0x5f08f1
// 005f08ec  c644244401           mov byte ptr [esp + 0x44], 1
// 005f08f1  83fd11               cmp ebp, 0x11
// 005f08f4  7551                 jne 0x5f0947
// 005f08f6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005f08fa  8b442444             mov eax, dword ptr [esp + 0x44]
// 005f08fe  89442424             mov dword ptr [esp + 0x24], eax
// 005f0902  8bf1                 mov esi, ecx
// 005f0904  85c9                 test ecx, ecx
// 005f0906  740d                 je 0x5f0915
// 005f0908  6a0d                 push 0xd
// 005f090a  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f0910  83f8ff               cmp eax, -1
// 005f0913  7505                 jne 0x5f091a
// 005f0915  c644242401           mov byte ptr [esp + 0x24], 1
// 005f091a  85f6                 test esi, esi
// 005f091c  740f                 je 0x5f092d
// 005f091e  6a0a                 push 0xa
// 005f0920  8bce                 mov ecx, esi
// 005f0922  ff15d8a49e00         call dword ptr [0x9ea4d8]
// 005f0928  83f8ff               cmp eax, -1
// 005f092b  7505                 jne 0x5f0932
// 005f092d  c644242401           mov byte ptr [esp + 0x24], 1
// 005f0932  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f0936  33ed                 xor ebp, ebp
// 005f0938  894c2444             mov dword ptr [esp + 0x44], ecx
// 005f093c  89742448             mov dword ptr [esp + 0x48], esi
// 005f0940  33ff                 xor edi, edi
// 005f0942  e9e9faffff           jmp 0x5f0430
// 005f0947  45                   inc ebp
// 005f0948  33ff                 xor edi, edi
// 005f094a  e9e1faffff           jmp 0x5f0430
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??$put@V?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@HUcrlf@?$base64@DU?$char_traits@D@std@@@@@?$base64@DU?$char_traits@D@std@@@@QBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V12@0V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@AAHUcrlf@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
