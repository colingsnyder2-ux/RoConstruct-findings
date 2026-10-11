// roc 2009-12 006890e0  unit: RBX::ChangeHistoryService  size: 1327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006890e0
//
// 006890e0  83ec1c               sub esp, 0x1c
// 006890e3  53                   push ebx
// 006890e4  55                   push ebp
// 006890e5  56                   push esi
// 006890e6  57                   push edi
// 006890e7  33ff                 xor edi, edi
// 006890e9  33ed                 xor ebp, ebp
// 006890eb  eb03                 jmp 0x6890f0
// 006890ed  8d4900               lea ecx, [ecx]
// 006890f0  8a442438             mov al, byte ptr [esp + 0x38]
// 006890f4  84c0                 test al, al
// 006890f6  7523                 jne 0x68911b
// 006890f8  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006890fc  3bcf                 cmp ecx, edi
// 006890fe  7411                 je 0x689111
// 00689100  ff15c4b49800         call dword ptr [0x98b4c4]
// 00689106  83f8ff               cmp eax, -1
// 00689109  7406                 je 0x689111
// 0068910b  88442439             mov byte ptr [esp + 0x39], al
// 0068910f  eb04                 jmp 0x689115
// 00689111  897c2434             mov dword ptr [esp + 0x34], edi
// 00689115  b001                 mov al, 1
// 00689117  88442438             mov byte ptr [esp + 0x38], al
// 0068911b  807c244000           cmp byte ptr [esp + 0x40], 0
// 00689120  7526                 jne 0x689148
// 00689122  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00689126  3bcf                 cmp ecx, edi
// 00689128  7411                 je 0x68913b
// 0068912a  ff15c4b49800         call dword ptr [0x98b4c4]
// 00689130  83f8ff               cmp eax, -1
// 00689133  7406                 je 0x68913b
// 00689135  88442441             mov byte ptr [esp + 0x41], al
// 00689139  eb04                 jmp 0x68913f
// 0068913b  897c243c             mov dword ptr [esp + 0x3c], edi
// 0068913f  8a442438             mov al, byte ptr [esp + 0x38]
// 00689143  c644244001           mov byte ptr [esp + 0x40], 1
// 00689148  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0068914c  3bcf                 cmp ecx, edi
// 0068914e  750c                 jne 0x68915c
// 00689150  397c243c             cmp dword ptr [esp + 0x3c], edi
// 00689154  0f84f5020000         je 0x68944f
// 0068915a  eb0a                 jmp 0x689166
// 0068915c  397c243c             cmp dword ptr [esp + 0x3c], edi
// 00689160  0f85e9020000         jne 0x68944f
// 00689166  84c0                 test al, al
// 00689168  7523                 jne 0x68918d
// 0068916a  3bcf                 cmp ecx, edi
// 0068916c  7411                 je 0x68917f
// 0068916e  ff15c4b49800         call dword ptr [0x98b4c4]
// 00689174  83f8ff               cmp eax, -1
// 00689177  7406                 je 0x68917f
// 00689179  88442439             mov byte ptr [esp + 0x39], al
// 0068917d  eb04                 jmp 0x689183
// 0068917f  897c2434             mov dword ptr [esp + 0x34], edi
// 00689183  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00689187  b001                 mov al, 1
// 00689189  88442438             mov byte ptr [esp + 0x38], al
// 0068918d  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 00689191  885c2410             mov byte ptr [esp + 0x10], bl
// 00689195  84c0                 test al, al
// 00689197  7522                 jne 0x6891bb
// 00689199  3bcf                 cmp ecx, edi
// 0068919b  7411                 je 0x6891ae
// 0068919d  ff15c4b49800         call dword ptr [0x98b4c4]
// 006891a3  83f8ff               cmp eax, -1
// 006891a6  7406                 je 0x6891ae
// 006891a8  88442439             mov byte ptr [esp + 0x39], al
// 006891ac  eb04                 jmp 0x6891b2
// 006891ae  897c2434             mov dword ptr [esp + 0x34], edi
// 006891b2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006891b6  c644243801           mov byte ptr [esp + 0x38], 1
// 006891bb  3bcf                 cmp ecx, edi
// 006891bd  7429                 je 0x6891e8
// 006891bf  ff15c8b49800         call dword ptr [0x98b4c8]
// 006891c5  83f8ff               cmp eax, -1
// 006891c8  741e                 je 0x6891e8
// 006891ca  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006891ce  c644243800           mov byte ptr [esp + 0x38], 0
// 006891d3  3bcf                 cmp ecx, edi
// 006891d5  7419                 je 0x6891f0
// 006891d7  ff15c4b49800         call dword ptr [0x98b4c4]
// 006891dd  83f8ff               cmp eax, -1
// 006891e0  740e                 je 0x6891f0
// 006891e2  88442439             mov byte ptr [esp + 0x39], al
// 006891e6  eb0c                 jmp 0x6891f4
// 006891e8  33c9                 xor ecx, ecx
// 006891ea  894c2434             mov dword ptr [esp + 0x34], ecx
// 006891ee  eb08                 jmp 0x6891f8
// 006891f0  897c2434             mov dword ptr [esp + 0x34], edi
// 006891f4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006891f8  807c244000           cmp byte ptr [esp + 0x40], 0
// 006891fd  b001                 mov al, 1
// 006891ff  88442438             mov byte ptr [esp + 0x38], al
// 00689203  752a                 jne 0x68922f
// 00689205  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00689209  3bcf                 cmp ecx, edi
// 0068920b  7411                 je 0x68921e
// 0068920d  ff15c4b49800         call dword ptr [0x98b4c4]
// 00689213  83f8ff               cmp eax, -1
// 00689216  7406                 je 0x68921e
// 00689218  88442441             mov byte ptr [esp + 0x41], al
// 0068921c  eb04                 jmp 0x689222
// 0068921e  897c243c             mov dword ptr [esp + 0x3c], edi
// 00689222  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00689226  8a442438             mov al, byte ptr [esp + 0x38]
// 0068922a  c644244001           mov byte ptr [esp + 0x40], 1
// 0068922f  3bcf                 cmp ecx, edi
// 00689231  0f858c000000         jne 0x6892c3
// 00689237  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0068923b  0f858c000000         jne 0x6892cd
// 00689241  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00689245  0fb6f3               movzx esi, bl
// 00689248  8bd6                 mov edx, esi
// 0068924a  c1ea02               shr edx, 2
// 0068924d  8a04955066b300       mov al, byte ptr [edx*4 + 0xb36650]
// 00689254  88442420             mov byte ptr [esp + 0x20], al
// 00689258  3bcf                 cmp ecx, edi
// 0068925a  7410                 je 0x68926c
// 0068925c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00689260  52                   push edx
// 00689261  ff1530b69800         call dword ptr [0x98b630]
// 00689267  83f8ff               cmp eax, -1
// 0068926a  7505                 jne 0x689271
// 0068926c  c644244401           mov byte ptr [esp + 0x44], 1
// 00689271  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00689275  83e603               and esi, 3
// 00689278  c1e606               shl esi, 6
// 0068927b  8a865066b300         mov al, byte ptr [esi + 0xb36650]
// 00689281  88442420             mov byte ptr [esp + 0x20], al
// 00689285  3bcf                 cmp ecx, edi
// 00689287  7410                 je 0x689299
// 00689289  8b542420             mov edx, dword ptr [esp + 0x20]
// 0068928d  52                   push edx
// 0068928e  ff1530b69800         call dword ptr [0x98b630]
// 00689294  83f8ff               cmp eax, -1
// 00689297  7505                 jne 0x68929e
// 00689299  c644244401           mov byte ptr [esp + 0x44], 1
// 0068929e  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006892a2  3bcf                 cmp ecx, edi
// 006892a4  740d                 je 0x6892b3
// 006892a6  6a3d                 push 0x3d
// 006892a8  ff1530b69800         call dword ptr [0x98b630]
// 006892ae  83f8ff               cmp eax, -1
// 006892b1  7505                 jne 0x6892b8
// 006892b3  c644244401           mov byte ptr [esp + 0x44], 1
// 006892b8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006892bc  3bcf                 cmp ecx, edi
// 006892be  e982010000           jmp 0x689445
// 006892c3  397c243c             cmp dword ptr [esp + 0x3c], edi
// 006892c7  0f8574ffffff         jne 0x689241
// 006892cd  84c0                 test al, al
// 006892cf  7523                 jne 0x6892f4
// 006892d1  3bcf                 cmp ecx, edi
// 006892d3  7411                 je 0x6892e6
// 006892d5  ff15c4b49800         call dword ptr [0x98b4c4]
// 006892db  83f8ff               cmp eax, -1
// 006892de  7406                 je 0x6892e6
// 006892e0  88442439             mov byte ptr [esp + 0x39], al
// 006892e4  eb04                 jmp 0x6892ea
// 006892e6  897c2434             mov dword ptr [esp + 0x34], edi
// 006892ea  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006892ee  b001                 mov al, 1
// 006892f0  88442438             mov byte ptr [esp + 0x38], al
// 006892f4  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 006892f8  885c2411             mov byte ptr [esp + 0x11], bl
// 006892fc  84c0                 test al, al
// 006892fe  7522                 jne 0x689322
// 00689300  3bcf                 cmp ecx, edi
// 00689302  7411                 je 0x689315
// 00689304  ff15c4b49800         call dword ptr [0x98b4c4]
// 0068930a  83f8ff               cmp eax, -1
// 0068930d  7406                 je 0x689315
// 0068930f  88442439             mov byte ptr [esp + 0x39], al
// 00689313  eb04                 jmp 0x689319
// 00689315  897c2434             mov dword ptr [esp + 0x34], edi
// 00689319  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0068931d  c644243801           mov byte ptr [esp + 0x38], 1
// 00689322  3bcf                 cmp ecx, edi
// 00689324  7429                 je 0x68934f
// 00689326  ff15c8b49800         call dword ptr [0x98b4c8]
// 0068932c  83f8ff               cmp eax, -1
// 0068932f  741e                 je 0x68934f
// 00689331  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00689335  c644243800           mov byte ptr [esp + 0x38], 0
// 0068933a  3bcf                 cmp ecx, edi
// 0068933c  7419                 je 0x689357
// 0068933e  ff15c4b49800         call dword ptr [0x98b4c4]
// 00689344  83f8ff               cmp eax, -1
// 00689347  740e                 je 0x689357
// 00689349  88442439             mov byte ptr [esp + 0x39], al
// 0068934d  eb0c                 jmp 0x68935b
// 0068934f  33c9                 xor ecx, ecx
// 00689351  894c2434             mov dword ptr [esp + 0x34], ecx
// 00689355  eb08                 jmp 0x68935f
// 00689357  897c2434             mov dword ptr [esp + 0x34], edi
// 0068935b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0068935f  807c244000           cmp byte ptr [esp + 0x40], 0
// 00689364  b001                 mov al, 1
// 00689366  88442438             mov byte ptr [esp + 0x38], al
// 0068936a  752a                 jne 0x689396
// 0068936c  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00689370  3bcf                 cmp ecx, edi
// 00689372  7411                 je 0x689385
// 00689374  ff15c4b49800         call dword ptr [0x98b4c4]
// 0068937a  83f8ff               cmp eax, -1
// 0068937d  7406                 je 0x689385
// 0068937f  88442441             mov byte ptr [esp + 0x41], al
// 00689383  eb04                 jmp 0x689389
// 00689385  897c243c             mov dword ptr [esp + 0x3c], edi
// 00689389  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0068938d  8a442438             mov al, byte ptr [esp + 0x38]
// 00689391  c644244001           mov byte ptr [esp + 0x40], 1
// 00689396  3bcf                 cmp ecx, edi
// 00689398  0f85cc000000         jne 0x68946a
// 0068939e  397c243c             cmp dword ptr [esp + 0x3c], edi
// 006893a2  0f85cc000000         jne 0x689474
// 006893a8  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 006893ad  8bc6                 mov eax, esi
// 006893af  c1e802               shr eax, 2
// 006893b2  8a0c855066b300       mov cl, byte ptr [eax*4 + 0xb36650]
// 006893b9  884c2420             mov byte ptr [esp + 0x20], cl
// 006893bd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006893c1  3bcf                 cmp ecx, edi
// 006893c3  7410                 je 0x6893d5
// 006893c5  8b542420             mov edx, dword ptr [esp + 0x20]
// 006893c9  52                   push edx
// 006893ca  ff1530b69800         call dword ptr [0x98b630]
// 006893d0  83f8ff               cmp eax, -1
// 006893d3  7505                 jne 0x6893da
// 006893d5  c644244401           mov byte ptr [esp + 0x44], 1
// 006893da  0fb6fb               movzx edi, bl
// 006893dd  83e603               and esi, 3
// 006893e0  8bc7                 mov eax, edi
// 006893e2  c1e604               shl esi, 4
// 006893e5  c1e804               shr eax, 4
// 006893e8  03f0                 add esi, eax
// 006893ea  8a0cb55066b300       mov cl, byte ptr [esi*4 + 0xb36650]
// 006893f1  884c2420             mov byte ptr [esp + 0x20], cl
// 006893f5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006893f9  85c9                 test ecx, ecx
// 006893fb  7410                 je 0x68940d
// 006893fd  8b542420             mov edx, dword ptr [esp + 0x20]
// 00689401  52                   push edx
// 00689402  ff1530b69800         call dword ptr [0x98b630]
// 00689408  83f8ff               cmp eax, -1
// 0068940b  7505                 jne 0x689412
// 0068940d  c644244401           mov byte ptr [esp + 0x44], 1
// 00689412  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00689416  83e70f               and edi, 0xf
// 00689419  c1e704               shl edi, 4
// 0068941c  8a875066b300         mov al, byte ptr [edi + 0xb36650]
// 00689422  88442420             mov byte ptr [esp + 0x20], al
// 00689426  85c9                 test ecx, ecx
// 00689428  7410                 je 0x68943a
// 0068942a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0068942e  52                   push edx
// 0068942f  ff1530b69800         call dword ptr [0x98b630]
// 00689435  83f8ff               cmp eax, -1
// 00689438  7505                 jne 0x68943f
// 0068943a  c644244401           mov byte ptr [esp + 0x44], 1
// 0068943f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00689443  85c9                 test ecx, ecx
// 00689445  7408                 je 0x68944f
// 00689447  6a3d                 push 0x3d
// 00689449  ff1530b69800         call dword ptr [0x98b630]
// 0068944f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00689453  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00689457  8b542438             mov edx, dword ptr [esp + 0x38]
// 0068945b  5f                   pop edi
// 0068945c  5e                   pop esi
// 0068945d  5d                   pop ebp
// 0068945e  8908                 mov dword ptr [eax], ecx
// 00689460  895004               mov dword ptr [eax + 4], edx
// 00689463  5b                   pop ebx
// 00689464  83c41c               add esp, 0x1c
// 00689467  c22400               ret 0x24
// 0068946a  397c243c             cmp dword ptr [esp + 0x3c], edi
// 0068946e  0f8534ffffff         jne 0x6893a8
// 00689474  84c0                 test al, al
// 00689476  7523                 jne 0x68949b
// 00689478  3bcf                 cmp ecx, edi
// 0068947a  7411                 je 0x68948d
// 0068947c  ff15c4b49800         call dword ptr [0x98b4c4]
// 00689482  83f8ff               cmp eax, -1
// 00689485  7406                 je 0x68948d
// 00689487  88442439             mov byte ptr [esp + 0x39], al
// 0068948b  eb04                 jmp 0x689491
// 0068948d  897c2434             mov dword ptr [esp + 0x34], edi
// 00689491  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00689495  b001                 mov al, 1
// 00689497  88442438             mov byte ptr [esp + 0x38], al
// 0068949b  8a5c2439             mov bl, byte ptr [esp + 0x39]
// 0068949f  84c0                 test al, al
// 006894a1  7522                 jne 0x6894c5
// 006894a3  3bcf                 cmp ecx, edi
// 006894a5  7411                 je 0x6894b8
// 006894a7  ff15c4b49800         call dword ptr [0x98b4c4]
// 006894ad  83f8ff               cmp eax, -1
// 006894b0  7406                 je 0x6894b8
// 006894b2  88442439             mov byte ptr [esp + 0x39], al
// 006894b6  eb04                 jmp 0x6894bc
// 006894b8  897c2434             mov dword ptr [esp + 0x34], edi
// 006894bc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006894c0  c644243801           mov byte ptr [esp + 0x38], 1
// 006894c5  3bcf                 cmp ecx, edi
// 006894c7  7412                 je 0x6894db
// 006894c9  ff15c8b49800         call dword ptr [0x98b4c8]
// 006894cf  83f8ff               cmp eax, -1
// 006894d2  7407                 je 0x6894db
// 006894d4  c644243800           mov byte ptr [esp + 0x38], 0
// 006894d9  eb09                 jmp 0x6894e4
// 006894db  897c2434             mov dword ptr [esp + 0x34], edi
// 006894df  c644243801           mov byte ptr [esp + 0x38], 1
// 006894e4  0fb6742410           movzx esi, byte ptr [esp + 0x10]
// 006894e9  8bc6                 mov eax, esi
// 006894eb  c1e802               shr eax, 2
// 006894ee  8a0c855066b300       mov cl, byte ptr [eax*4 + 0xb36650]
// 006894f5  884c2414             mov byte ptr [esp + 0x14], cl
// 006894f9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006894fd  3bcf                 cmp ecx, edi
// 006894ff  7410                 je 0x689511
// 00689501  8b542414             mov edx, dword ptr [esp + 0x14]
// 00689505  52                   push edx
// 00689506  ff1530b69800         call dword ptr [0x98b630]
// 0068950c  83f8ff               cmp eax, -1
// 0068950f  7505                 jne 0x689516
// 00689511  c644244401           mov byte ptr [esp + 0x44], 1
// 00689516  0fb67c2411           movzx edi, byte ptr [esp + 0x11]
// 0068951b  83e603               and esi, 3
// 0068951e  8bc7                 mov eax, edi
// 00689520  c1e604               shl esi, 4
// 00689523  c1e804               shr eax, 4
// 00689526  03f0                 add esi, eax
// 00689528  8a0cb55066b300       mov cl, byte ptr [esi*4 + 0xb36650]
// 0068952f  884c2418             mov byte ptr [esp + 0x18], cl
// 00689533  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00689537  85c9                 test ecx, ecx
// 00689539  7410                 je 0x68954b
// 0068953b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0068953f  52                   push edx
// 00689540  ff1530b69800         call dword ptr [0x98b630]
// 00689546  83f8ff               cmp eax, -1
// 00689549  7505                 jne 0x689550
// 0068954b  c644244401           mov byte ptr [esp + 0x44], 1
// 00689550  0fb6f3               movzx esi, bl
// 00689553  8bc6                 mov eax, esi
// 00689555  c1e806               shr eax, 6
// 00689558  83e70f               and edi, 0xf
// 0068955b  8d0cb8               lea ecx, [eax + edi*4]
// 0068955e  8a148d5066b300       mov dl, byte ptr [ecx*4 + 0xb36650]
// 00689565  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00689569  8854241c             mov byte ptr [esp + 0x1c], dl
// 0068956d  85c9                 test ecx, ecx
// 0068956f  7410                 je 0x689581
// 00689571  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00689575  50                   push eax
// 00689576  ff1530b69800         call dword ptr [0x98b630]
// 0068957c  83f8ff               cmp eax, -1
// 0068957f  7505                 jne 0x689586
// 00689581  c644244401           mov byte ptr [esp + 0x44], 1
// 00689586  83e63f               and esi, 0x3f
// 00689589  8a0cb55066b300       mov cl, byte ptr [esi*4 + 0xb36650]
// 00689590  884c2420             mov byte ptr [esp + 0x20], cl
// 00689594  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00689598  85c9                 test ecx, ecx
// 0068959a  7410                 je 0x6895ac
// 0068959c  8b542420             mov edx, dword ptr [esp + 0x20]
// 006895a0  52                   push edx
// 006895a1  ff1530b69800         call dword ptr [0x98b630]
// 006895a7  83f8ff               cmp eax, -1
// 006895aa  7505                 jne 0x6895b1
// 006895ac  c644244401           mov byte ptr [esp + 0x44], 1
// 006895b1  83fd11               cmp ebp, 0x11
// 006895b4  7551                 jne 0x689607
// 006895b6  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 006895ba  8b442444             mov eax, dword ptr [esp + 0x44]
// 006895be  89442424             mov dword ptr [esp + 0x24], eax
// 006895c2  8bf1                 mov esi, ecx
// 006895c4  85c9                 test ecx, ecx
// 006895c6  740d                 je 0x6895d5
// 006895c8  6a0d                 push 0xd
// 006895ca  ff1530b69800         call dword ptr [0x98b630]
// 006895d0  83f8ff               cmp eax, -1
// 006895d3  7505                 jne 0x6895da
// 006895d5  c644242401           mov byte ptr [esp + 0x24], 1
// 006895da  85f6                 test esi, esi
// 006895dc  740f                 je 0x6895ed
// 006895de  6a0a                 push 0xa
// 006895e0  8bce                 mov ecx, esi
// 006895e2  ff1530b69800         call dword ptr [0x98b630]
// 006895e8  83f8ff               cmp eax, -1
// 006895eb  7505                 jne 0x6895f2
// 006895ed  c644242401           mov byte ptr [esp + 0x24], 1
// 006895f2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006895f6  33ed                 xor ebp, ebp
// 006895f8  894c2444             mov dword ptr [esp + 0x44], ecx
// 006895fc  89742448             mov dword ptr [esp + 0x48], esi
// 00689600  33ff                 xor edi, edi
// 00689602  e9e9faffff           jmp 0x6890f0
// 00689607  45                   inc ebp
// 00689608  33ff                 xor edi, edi
// 0068960a  e9e1faffff           jmp 0x6890f0
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ??$put@V?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@HUcrlf@?$base64@DU?$char_traits@D@std@@@@@?$base64@DU?$char_traits@D@std@@@@QBE?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@V12@0V?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@AAHUcrlf@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
