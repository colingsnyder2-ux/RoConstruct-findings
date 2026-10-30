// roc 2009-06 00582f90  unit: seg_00580000  size: 1152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00582f90
//
// 00582f90  83ec40               sub esp, 0x40
// 00582f93  55                   push ebp
// 00582f94  56                   push esi
// 00582f95  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00582f99  bdff000000           mov ebp, 0xff
// 00582f9e  57                   push edi
// 00582f9f  bf55000000           mov edi, 0x55
// 00582fa4  c644240c49           mov byte ptr [esp + 0xc], 0x49
// 00582fa9  c644240d44           mov byte ptr [esp + 0xd], 0x44
// 00582fae  c644240e41           mov byte ptr [esp + 0xe], 0x41
// 00582fb3  c644240f54           mov byte ptr [esp + 0xf], 0x54
// 00582fb8  896c2414             mov dword ptr [esp + 0x14], ebp
// 00582fbc  c74424180f000000     mov dword ptr [esp + 0x18], 0xf
// 00582fc4  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00582fc8  c744242033000000     mov dword ptr [esp + 0x20], 0x33
// 00582fd0  896c2424             mov dword ptr [esp + 0x24], ebp
// 00582fd4  897c2428             mov dword ptr [esp + 0x28], edi
// 00582fd8  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00582fdc  c744243080000000     mov dword ptr [esp + 0x30], 0x80
// 00582fe4  c744243408000000     mov dword ptr [esp + 0x34], 8
// 00582fec  c744243888000000     mov dword ptr [esp + 0x38], 0x88
// 00582ff4  c744243c22000000     mov dword ptr [esp + 0x3c], 0x22
// 00582ffc  c7442440aa000000     mov dword ptr [esp + 0x40], 0xaa
// 00583004  897c2444             mov dword ptr [esp + 0x44], edi
// 00583008  896c2448             mov dword ptr [esp + 0x48], ebp
// 0058300c  85f6                 test esi, esi
// 0058300e  0f84d9030000         je 0x5833ed
// 00583014  f6466c40             test byte ptr [esi + 0x6c], 0x40
// 00583018  7509                 jne 0x583023
// 0058301a  56                   push esi
// 0058301b  e810180100           call 0x594830
// 00583020  83c404               add esp, 4
// 00583023  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 0058302a  0f8417010000         je 0x583147
// 00583030  f6467002             test byte ptr [esi + 0x70], 2
// 00583034  0f840d010000         je 0x583147
// 0058303a  0fb68624010000       movzx eax, byte ptr [esi + 0x124]
// 00583041  83f806               cmp eax, 6
// 00583044  0f87fd000000         ja 0x583147
// 0058304a  ff2485f4335800       jmp dword ptr [eax*4 + 0x5833f4]
// 00583051  f686e400000007       test byte ptr [esi + 0xe4], 7
// 00583058  0f84e9000000         je 0x583147
// 0058305e  8b442458             mov eax, dword ptr [esp + 0x58]
// 00583062  85c0                 test eax, eax
// 00583064  740b                 je 0x583071
// 00583066  55                   push ebp
// 00583067  50                   push eax
// 00583068  56                   push esi
// 00583069  e8b20e0100           call 0x593f20
// 0058306e  83c40c               add esp, 0xc
// 00583071  56                   push esi
// 00583072  e8c9400100           call 0x597140
// 00583077  83c404               add esp, 4
// 0058307a  5f                   pop edi
// 0058307b  5e                   pop esi
// 0058307c  5d                   pop ebp
// 0058307d  83c440               add esp, 0x40
// 00583080  c3                   ret 
// 00583081  f686e400000007       test byte ptr [esi + 0xe4], 7
// 00583088  750d                 jne 0x583097
// 0058308a  83bec800000005       cmp dword ptr [esi + 0xc8], 5
// 00583091  0f83b0000000         jae 0x583147
// 00583097  8b442458             mov eax, dword ptr [esp + 0x58]
// 0058309b  85c0                 test eax, eax
// 0058309d  74d2                 je 0x583071
// 0058309f  6a0f                 push 0xf
// 005830a1  ebc4                 jmp 0x583067
// 005830a3  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 005830a9  8bc8                 mov ecx, eax
// 005830ab  80e107               and cl, 7
// 005830ae  80f904               cmp cl, 4
// 005830b1  0f8490000000         je 0x583147
// 005830b7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005830bb  85c9                 test ecx, ecx
// 005830bd  74b2                 je 0x583071
// 005830bf  a804                 test al, 4
// 005830c1  74ae                 je 0x583071
// 005830c3  55                   push ebp
// 005830c4  51                   push ecx
// 005830c5  eba1                 jmp 0x583068
// 005830c7  b803000000           mov eax, 3
// 005830cc  8486e4000000         test byte ptr [esi + 0xe4], al
// 005830d2  7508                 jne 0x5830dc
// 005830d4  3986c8000000         cmp dword ptr [esi + 0xc8], eax
// 005830da  736b                 jae 0x583147
// 005830dc  8b442458             mov eax, dword ptr [esp + 0x58]
// 005830e0  85c0                 test eax, eax
// 005830e2  748d                 je 0x583071
// 005830e4  6a33                 push 0x33
// 005830e6  e97cffffff           jmp 0x583067
// 005830eb  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 005830f1  8bd0                 mov edx, eax
// 005830f3  80e203               and dl, 3
// 005830f6  80fa02               cmp dl, 2
// 005830f9  744c                 je 0x583147
// 005830fb  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005830ff  85c9                 test ecx, ecx
// 00583101  0f846affffff         je 0x583071
// 00583107  a802                 test al, 2
// 00583109  0f8462ffffff         je 0x583071
// 0058310f  55                   push ebp
// 00583110  51                   push ecx
// 00583111  e952ffffff           jmp 0x583068
// 00583116  f686e400000001       test byte ptr [esi + 0xe4], 1
// 0058311d  7509                 jne 0x583128
// 0058311f  83bec800000002       cmp dword ptr [esi + 0xc8], 2
// 00583126  731f                 jae 0x583147
// 00583128  8b442458             mov eax, dword ptr [esp + 0x58]
// 0058312c  85c0                 test eax, eax
// 0058312e  0f843dffffff         je 0x583071
// 00583134  57                   push edi
// 00583135  e92dffffff           jmp 0x583067
// 0058313a  f686e400000001       test byte ptr [esi + 0xe4], 1
// 00583141  0f842affffff         je 0x583071
// 00583147  f6466804             test byte ptr [esi + 0x68], 4
// 0058314b  750e                 jne 0x58315b
// 0058314d  68ecdf8c00           push 0x8cdfec
// 00583152  56                   push esi
// 00583153  e808b00000           call 0x58e160
// 00583158  83c408               add esp, 8
// 0058315b  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 00583161  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00583167  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0058316b  898680000000         mov dword ptr [esi + 0x80], eax
// 00583171  898e84000000         mov dword ptr [esi + 0x84], ecx
// 00583177  8d7e74               lea edi, [esi + 0x74]
// 0058317a  8d9b00000000         lea ebx, [ebx]
// 00583180  837e7800             cmp dword ptr [esi + 0x78], 0
// 00583184  7575                 jne 0x5831fb
// 00583186  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 0058318d  7537                 jne 0x5831c6
// 0058318f  90                   nop 
// 00583190  6a00                 push 0
// 00583192  56                   push esi
// 00583193  e8481a0100           call 0x594be0
// 00583198  56                   push esi
// 00583199  e8b2190100           call 0x594b50
// 0058319e  83c40c               add esp, 0xc
// 005831a1  89860c010000         mov dword ptr [esi + 0x10c], eax
// 005831a7  39ae1c010000         cmp dword ptr [esi + 0x11c], ebp
// 005831ad  740e                 je 0x5831bd
// 005831af  68d4df8c00           push 0x8cdfd4
// 005831b4  56                   push esi
// 005831b5  e8a6af0000           call 0x58e160
// 005831ba  83c408               add esp, 8
// 005831bd  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 005831c4  74ca                 je 0x583190
// 005831c6  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 005831cc  8b8e0c010000         mov ecx, dword ptr [esi + 0x10c]
// 005831d2  8b96ac000000         mov edx, dword ptr [esi + 0xac]
// 005831d8  894678               mov dword ptr [esi + 0x78], eax
// 005831db  8917                 mov dword ptr [edi], edx
// 005831dd  3bc1                 cmp eax, ecx
// 005831df  7603                 jbe 0x5831e4
// 005831e1  894e78               mov dword ptr [esi + 0x78], ecx
// 005831e4  8b4678               mov eax, dword ptr [esi + 0x78]
// 005831e7  50                   push eax
// 005831e8  52                   push edx
// 005831e9  56                   push esi
// 005831ea  e891080100           call 0x593a80
// 005831ef  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 005831f2  83c40c               add esp, 0xc
// 005831f5  298e0c010000         sub dword ptr [esi + 0x10c], ecx
// 005831fb  6a01                 push 1
// 005831fd  57                   push edi
// 005831fe  e8ddd90000           call 0x590be0
// 00583203  83c408               add esp, 8
// 00583206  83f801               cmp eax, 1
// 00583209  742c                 je 0x583237
// 0058320b  85c0                 test eax, eax
// 0058320d  7419                 je 0x583228
// 0058320f  8b868c000000         mov eax, dword ptr [esi + 0x8c]
// 00583215  85c0                 test eax, eax
// 00583217  7505                 jne 0x58321e
// 00583219  b8c0df8c00           mov eax, 0x8cdfc0
// 0058321e  50                   push eax
// 0058321f  56                   push esi
// 00583220  e83baf0000           call 0x58e160
// 00583225  83c408               add esp, 8
// 00583228  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0058322f  0f854bffffff         jne 0x583180
// 00583235  eb2e                 jmp 0x583265
// 00583237  83be8400000000       cmp dword ptr [esi + 0x84], 0
// 0058323e  750f                 jne 0x58324f
// 00583240  837e7800             cmp dword ptr [esi + 0x78], 0
// 00583244  7509                 jne 0x58324f
// 00583246  83be0c01000000       cmp dword ptr [esi + 0x10c], 0
// 0058324d  740e                 je 0x58325d
// 0058324f  68a8df8c00           push 0x8cdfa8
// 00583254  56                   push esi
// 00583255  e806af0000           call 0x58e160
// 0058325a  83c408               add esp, 8
// 0058325d  834e6808             or dword ptr [esi + 0x68], 8
// 00583261  834e6c20             or dword ptr [esi + 0x6c], 0x20
// 00583265  0fb69626010000       movzx edx, byte ptr [esi + 0x126]
// 0058326c  0fb6862a010000       movzx eax, byte ptr [esi + 0x12a]
// 00583273  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 00583279  889608010000         mov byte ptr [esi + 0x108], dl
// 0058327f  0fb69627010000       movzx edx, byte ptr [esi + 0x127]
// 00583286  88860a010000         mov byte ptr [esi + 0x10a], al
// 0058328c  8a8629010000         mov al, byte ptr [esi + 0x129]
// 00583292  8dbe00010000         lea edi, [esi + 0x100]
// 00583298  88860b010000         mov byte ptr [esi + 0x10b], al
// 0058329e  3c08                 cmp al, 8
// 005832a0  890f                 mov dword ptr [edi], ecx
// 005832a2  889609010000         mov byte ptr [esi + 0x109], dl
// 005832a8  0fb6c0               movzx eax, al
// 005832ab  7208                 jb 0x5832b5
// 005832ad  c1e803               shr eax, 3
// 005832b0  0fafc1               imul eax, ecx
// 005832b3  eb09                 jmp 0x5832be
// 005832b5  0fafc1               imul eax, ecx
// 005832b8  83c007               add eax, 7
// 005832bb  c1e803               shr eax, 3
// 005832be  898604010000         mov dword ptr [esi + 0x104], eax
// 005832c4  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 005832ca  8a08                 mov cl, byte ptr [eax]
// 005832cc  84c9                 test cl, cl
// 005832ce  7418                 je 0x5832e8
// 005832d0  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 005832d6  0fb6c9               movzx ecx, cl
// 005832d9  51                   push ecx
// 005832da  42                   inc edx
// 005832db  52                   push edx
// 005832dc  40                   inc eax
// 005832dd  50                   push eax
// 005832de  57                   push edi
// 005832df  56                   push esi
// 005832e0  e87b130100           call 0x594660
// 005832e5  83c414               add esp, 0x14
// 005832e8  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 005832ee  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 005832f4  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 005832fa  40                   inc eax
// 005832fb  50                   push eax
// 005832fc  51                   push ecx
// 005832fd  52                   push edx
// 005832fe  56                   push esi
// 005832ff  e8bcb80000           call 0x58ebc0
// 00583304  83c410               add esp, 0x10
// 00583307  f6863002000004       test byte ptr [esi + 0x230], 4
// 0058330e  741a                 je 0x58332a
// 00583310  80be3802000040       cmp byte ptr [esi + 0x238], 0x40
// 00583317  7511                 jne 0x58332a
// 00583319  8b86ec000000         mov eax, dword ptr [esi + 0xec]
// 0058331f  40                   inc eax
// 00583320  50                   push eax
// 00583321  57                   push edi
// 00583322  e819450000           call 0x587840
// 00583327  83c408               add esp, 8
// 0058332a  837e7000             cmp dword ptr [esi + 0x70], 0
// 0058332e  7509                 jne 0x583339
// 00583330  f7466c00004000       test dword ptr [esi + 0x6c], 0x400000
// 00583337  7409                 je 0x583342
// 00583339  56                   push esi
// 0058333a  e841530000           call 0x588680
// 0058333f  83c404               add esp, 4
// 00583342  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 00583349  744c                 je 0x583397
// 0058334b  f6467002             test byte ptr [esi + 0x70], 2
// 0058334f  7446                 je 0x583397
// 00583351  80be2401000006       cmp byte ptr [esi + 0x124], 6
// 00583358  7309                 jae 0x583363
// 0058335a  56                   push esi
// 0058335b  e8b00e0100           call 0x594210
// 00583360  83c404               add esp, 4
// 00583363  8b442458             mov eax, dword ptr [esp + 0x58]
// 00583367  85c0                 test eax, eax
// 00583369  7416                 je 0x583381
// 0058336b  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 00583372  8b548c14             mov edx, dword ptr [esp + ecx*4 + 0x14]
// 00583376  52                   push edx
// 00583377  50                   push eax
// 00583378  56                   push esi
// 00583379  e8a20b0100           call 0x593f20
// 0058337e  83c40c               add esp, 0xc
// 00583381  8b442454             mov eax, dword ptr [esp + 0x54]
// 00583385  85c0                 test eax, eax
// 00583387  743c                 je 0x5833c5
// 00583389  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 00583390  8b548c30             mov edx, dword ptr [esp + ecx*4 + 0x30]
// 00583394  52                   push edx
// 00583395  eb24                 jmp 0x5833bb
// 00583397  8b442454             mov eax, dword ptr [esp + 0x54]
// 0058339b  85c0                 test eax, eax
// 0058339d  740f                 je 0x5833ae
// 0058339f  68ff000000           push 0xff
// 005833a4  50                   push eax
// 005833a5  56                   push esi
// 005833a6  e8750b0100           call 0x593f20
// 005833ab  83c40c               add esp, 0xc
// 005833ae  8b442458             mov eax, dword ptr [esp + 0x58]
// 005833b2  85c0                 test eax, eax
// 005833b4  740f                 je 0x5833c5
// 005833b6  68ff000000           push 0xff
// 005833bb  50                   push eax
// 005833bc  56                   push esi
// 005833bd  e85e0b0100           call 0x593f20
// 005833c2  83c40c               add esp, 0xc
// 005833c5  56                   push esi
// 005833c6  e8753d0100           call 0x597140
// 005833cb  8b8698010000         mov eax, dword ptr [esi + 0x198]
// 005833d1  83c404               add esp, 4
// 005833d4  85c0                 test eax, eax
// 005833d6  7415                 je 0x5833ed
// 005833d8  0fb68e24010000       movzx ecx, byte ptr [esi + 0x124]
// 005833df  8b96e4000000         mov edx, dword ptr [esi + 0xe4]
// 005833e5  51                   push ecx
// 005833e6  52                   push edx
// 005833e7  56                   push esi
// 005833e8  ffd0                 call eax
// 005833ea  83c40c               add esp, 0xc
// 005833ed  5f                   pop edi
// 005833ee  5e                   pop esi
// 005833ef  5d                   pop ebp
// 005833f0  83c440               add esp, 0x40
// 005833f3  c3                   ret 
// 005833f4  51                   push ecx
// 005833f5  305800               xor byte ptr [eax], bl
// 005833f8  81305800a330         xor dword ptr [eax], 0x30a30058
// 005833fe  58                   pop eax
// 005833ff  00c7                 add bh, al
// 00583401  305800               xor byte ptr [eax], bl
// 00583404  eb30                 jmp 0x583436
// 00583406  58                   pop eax
// 00583407  0016                 add byte ptr [esi], dl
// 00583409  315800               xor dword ptr [eax], ebx
// 0058340c  3a31                 cmp dh, byte ptr [ecx]
// 0058340e  58                   pop eax
// copied from an identical function in another client (function _png_read_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.32 pngread.c