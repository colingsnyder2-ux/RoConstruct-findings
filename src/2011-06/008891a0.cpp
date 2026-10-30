// roc 2011-06 008891a0  unit: CXTPRibbonTheme  size: 1133 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008891a0
//
// 008891a0  6aff                 push -1
// 008891a2  68a08ea000           push 0xa08ea0
// 008891a7  64a100000000         mov eax, dword ptr fs:[0]
// 008891ad  50                   push eax
// 008891ae  83ec08               sub esp, 8
// 008891b1  53                   push ebx
// 008891b2  56                   push esi
// 008891b3  57                   push edi
// 008891b4  a12058c900           mov eax, dword ptr [0xc95820]
// 008891b9  33c4                 xor eax, esp
// 008891bb  50                   push eax
// 008891bc  8d442418             lea eax, [esp + 0x18]
// 008891c0  64a300000000         mov dword ptr fs:[0], eax
// 008891c6  8bf1                 mov esi, ecx
// 008891c8  e833640000           call 0x88f600
// 008891cd  8bce                 mov ecx, esi
// 008891cf  e8ac600000           call 0x88f280
// 008891d4  51                   push ecx
// 008891d5  8bcc                 mov ecx, esp
// 008891d7  89642414             mov dword ptr [esp + 0x14], esp
// 008891db  686c02ad00           push 0xad026c
// 008891e0  8bf8                 mov edi, eax
// 008891e2  ff15002ea400         call dword ptr [0xa42e00]
// 008891e8  51                   push ecx
// 008891e9  8bcc                 mov ecx, esp
// 008891eb  8964241c             mov dword ptr [esp + 0x1c], esp
// 008891ef  686402ad00           push 0xad0264
// 008891f4  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 008891fc  ff15002ea400         call dword ptr [0xa42e00]
// 00889202  8bce                 mov ecx, esi
// 00889204  c644242801           mov byte ptr [esp + 0x28], 1
// 00889209  e872600000           call 0x88f280
// 0088920e  83cbff               or ebx, 0xffffffff
// 00889211  8bc8                 mov ecx, eax
// 00889213  895c2428             mov dword ptr [esp + 0x28], ebx
// 00889217  e8344d0600           call 0x8edf50
// 0088921c  51                   push ecx
// 0088921d  8bcc                 mov ecx, esp
// 0088921f  89642418             mov dword ptr [esp + 0x18], esp
// 00889223  685402ad00           push 0xad0254
// 00889228  89866c060000         mov dword ptr [esi + 0x66c], eax
// 0088922e  ff15002ea400         call dword ptr [0xa42e00]
// 00889234  51                   push ecx
// 00889235  8bcc                 mov ecx, esp
// 00889237  89642418             mov dword ptr [esp + 0x18], esp
// 0088923b  686402ad00           push 0xad0264
// 00889240  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 00889248  ff15002ea400         call dword ptr [0xa42e00]
// 0088924e  8bcf                 mov ecx, edi
// 00889250  895c2428             mov dword ptr [esp + 0x28], ebx
// 00889254  e8f74c0600           call 0x8edf50
// 00889259  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 0088925f  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00889265  51                   push ecx
// 00889266  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 0088926c  8bcc                 mov ecx, esp
// 0088926e  89642418             mov dword ptr [esp + 0x18], esp
// 00889272  685402ad00           push 0xad0254
// 00889277  ff15002ea400         call dword ptr [0xa42e00]
// 0088927d  51                   push ecx
// 0088927e  8bcc                 mov ecx, esp
// 00889280  89642418             mov dword ptr [esp + 0x18], esp
// 00889284  686402ad00           push 0xad0264
// 00889289  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 00889291  ff15002ea400         call dword ptr [0xa42e00]
// 00889297  8bcf                 mov ecx, edi
// 00889299  895c2428             mov dword ptr [esp + 0x28], ebx
// 0088929d  e8ae4c0600           call 0x8edf50
// 008892a2  8b9668060000         mov edx, dword ptr [esi + 0x668]
// 008892a8  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008892ae  51                   push ecx
// 008892af  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 008892b5  8bcc                 mov ecx, esp
// 008892b7  89642418             mov dword ptr [esp + 0x18], esp
// 008892bb  684402ad00           push 0xad0244
// 008892c0  ff15002ea400         call dword ptr [0xa42e00]
// 008892c6  51                   push ecx
// 008892c7  8bcc                 mov ecx, esp
// 008892c9  89642418             mov dword ptr [esp + 0x18], esp
// 008892cd  686402ad00           push 0xad0264
// 008892d2  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 008892da  ff15002ea400         call dword ptr [0xa42e00]
// 008892e0  8bcf                 mov ecx, edi
// 008892e2  895c2428             mov dword ptr [esp + 0x28], ebx
// 008892e6  e8654c0600           call 0x8edf50
// 008892eb  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 008892f1  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 008892f7  51                   push ecx
// 008892f8  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 008892fe  8bcc                 mov ecx, esp
// 00889300  89642418             mov dword ptr [esp + 0x18], esp
// 00889304  683002ad00           push 0xad0230
// 00889309  ff15002ea400         call dword ptr [0xa42e00]
// 0088930f  51                   push ecx
// 00889310  8bcc                 mov ecx, esp
// 00889312  89642418             mov dword ptr [esp + 0x18], esp
// 00889316  686402ad00           push 0xad0264
// 0088931b  c744242c05000000     mov dword ptr [esp + 0x2c], 5
// 00889323  ff15002ea400         call dword ptr [0xa42e00]
// 00889329  8bcf                 mov ecx, edi
// 0088932b  895c2428             mov dword ptr [esp + 0x28], ebx
// 0088932f  e81c4c0600           call 0x8edf50
// 00889334  51                   push ecx
// 00889335  8bcc                 mov ecx, esp
// 00889337  89642418             mov dword ptr [esp + 0x18], esp
// 0088933b  682002ad00           push 0xad0220
// 00889340  898674060000         mov dword ptr [esi + 0x674], eax
// 00889346  ff15002ea400         call dword ptr [0xa42e00]
// 0088934c  51                   push ecx
// 0088934d  8bcc                 mov ecx, esp
// 0088934f  89642418             mov dword ptr [esp + 0x18], esp
// 00889353  686402ad00           push 0xad0264
// 00889358  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 00889360  ff15002ea400         call dword ptr [0xa42e00]
// 00889366  8bcf                 mov ecx, edi
// 00889368  895c2428             mov dword ptr [esp + 0x28], ebx
// 0088936c  e8df4b0600           call 0x8edf50
// 00889371  51                   push ecx
// 00889372  8bcc                 mov ecx, esp
// 00889374  89642418             mov dword ptr [esp + 0x18], esp
// 00889378  681402ad00           push 0xad0214
// 0088937d  898690030000         mov dword ptr [esi + 0x390], eax
// 00889383  ff15002ea400         call dword ptr [0xa42e00]
// 00889389  51                   push ecx
// 0088938a  8bcc                 mov ecx, esp
// 0088938c  89642418             mov dword ptr [esp + 0x18], esp
// 00889390  686402ad00           push 0xad0264
// 00889395  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 0088939d  ff15002ea400         call dword ptr [0xa42e00]
// 008893a3  8bcf                 mov ecx, edi
// 008893a5  895c2428             mov dword ptr [esp + 0x28], ebx
// 008893a9  e8a24b0600           call 0x8edf50
// 008893ae  51                   push ecx
// 008893af  8bcc                 mov ecx, esp
// 008893b1  89642418             mov dword ptr [esp + 0x18], esp
// 008893b5  680002ad00           push 0xad0200
// 008893ba  898670060000         mov dword ptr [esi + 0x670], eax
// 008893c0  ff15002ea400         call dword ptr [0xa42e00]
// 008893c6  51                   push ecx
// 008893c7  8bcc                 mov ecx, esp
// 008893c9  89642418             mov dword ptr [esp + 0x18], esp
// 008893cd  686402ad00           push 0xad0264
// 008893d2  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 008893da  ff15002ea400         call dword ptr [0xa42e00]
// 008893e0  8bcf                 mov ecx, edi
// 008893e2  895c2428             mov dword ptr [esp + 0x28], ebx
// 008893e6  e8654b0600           call 0x8edf50
// 008893eb  51                   push ecx
// 008893ec  8bcc                 mov ecx, esp
// 008893ee  89642418             mov dword ptr [esp + 0x18], esp
// 008893f2  68e401ad00           push 0xad01e4
// 008893f7  898678060000         mov dword ptr [esi + 0x678], eax
// 008893fd  ff15002ea400         call dword ptr [0xa42e00]
// 00889403  51                   push ecx
// 00889404  8bcc                 mov ecx, esp
// 00889406  89642418             mov dword ptr [esp + 0x18], esp
// 0088940a  686402ad00           push 0xad0264
// 0088940f  c744242c09000000     mov dword ptr [esp + 0x2c], 9
// 00889417  ff15002ea400         call dword ptr [0xa42e00]
// 0088941d  8bcf                 mov ecx, edi
// 0088941f  895c2428             mov dword ptr [esp + 0x28], ebx
// 00889423  e8284b0600           call 0x8edf50
// 00889428  51                   push ecx
// 00889429  89867c060000         mov dword ptr [esi + 0x67c], eax
// 0088942f  8bcc                 mov ecx, esp
// 00889431  89642418             mov dword ptr [esp + 0x18], esp
// 00889435  68c801ad00           push 0xad01c8
// 0088943a  ff15002ea400         call dword ptr [0xa42e00]
// 00889440  51                   push ecx
// 00889441  8bcc                 mov ecx, esp
// 00889443  89642418             mov dword ptr [esp + 0x18], esp
// 00889447  686402ad00           push 0xad0264
// 0088944c  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 00889454  ff15002ea400         call dword ptr [0xa42e00]
// 0088945a  8bcf                 mov ecx, edi
// 0088945c  895c2428             mov dword ptr [esp + 0x28], ebx
// 00889460  e8eb4a0600           call 0x8edf50
// 00889465  51                   push ecx
// 00889466  8bcc                 mov ecx, esp
// 00889468  89642418             mov dword ptr [esp + 0x18], esp
// 0088946c  68b801ad00           push 0xad01b8
// 00889471  898680060000         mov dword ptr [esi + 0x680], eax
// 00889477  ff15002ea400         call dword ptr [0xa42e00]
// 0088947d  51                   push ecx
// 0088947e  8bcc                 mov ecx, esp
// 00889480  89642418             mov dword ptr [esp + 0x18], esp
// 00889484  686402ad00           push 0xad0264
// 00889489  c744242c0b000000     mov dword ptr [esp + 0x2c], 0xb
// 00889491  ff15002ea400         call dword ptr [0xa42e00]
// 00889497  8bcf                 mov ecx, edi
// 00889499  895c2428             mov dword ptr [esp + 0x28], ebx
// 0088949d  e8ae4a0600           call 0x8edf50
// 008894a2  51                   push ecx
// 008894a3  8bcc                 mov ecx, esp
// 008894a5  89642418             mov dword ptr [esp + 0x18], esp
// 008894a9  68a401ad00           push 0xad01a4
// 008894ae  898678030000         mov dword ptr [esi + 0x378], eax
// 008894b4  ff15002ea400         call dword ptr [0xa42e00]
// 008894ba  51                   push ecx
// 008894bb  8bcc                 mov ecx, esp
// 008894bd  89642418             mov dword ptr [esp + 0x18], esp
// 008894c1  686402ad00           push 0xad0264
// 008894c6  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 008894ce  ff15002ea400         call dword ptr [0xa42e00]
// 008894d4  8bcf                 mov ecx, edi
// 008894d6  895c2428             mov dword ptr [esp + 0x28], ebx
// 008894da  e8714a0600           call 0x8edf50
// 008894df  50                   push eax
// 008894e0  8d8e84060000         lea ecx, [esi + 0x684]
// 008894e6  e845befbff           call 0x845330
// 008894eb  d905685ba700         fld dword ptr [0xa75b68]
// 008894f1  83ec08               sub esp, 8
// 008894f4  d95c2404             fstp dword ptr [esp + 4]
// 008894f8  8bcc                 mov ecx, esp
// 008894fa  8964241c             mov dword ptr [esp + 0x1c], esp
// 008894fe  688401ad00           push 0xad0184
// 00889503  ff15002ea400         call dword ptr [0xa42e00]
// 00889509  51                   push ecx
// 0088950a  8bcc                 mov ecx, esp
// 0088950c  8964241c             mov dword ptr [esp + 0x1c], esp
// 00889510  686402ad00           push 0xad0264
// 00889515  c74424300d000000     mov dword ptr [esp + 0x30], 0xd
// 0088951d  ff15002ea400         call dword ptr [0xa42e00]
// 00889523  8bcf                 mov ecx, edi
// 00889525  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00889529  e8224a0600           call 0x8edf50
// 0088952e  50                   push eax
// 0088952f  51                   push ecx
// 00889530  8bcc                 mov ecx, esp
// 00889532  89642420             mov dword ptr [esp + 0x20], esp
// 00889536  686401ad00           push 0xad0164
// 0088953b  ff15002ea400         call dword ptr [0xa42e00]
// 00889541  51                   push ecx
// 00889542  8bcc                 mov ecx, esp
// 00889544  89642420             mov dword ptr [esp + 0x20], esp
// 00889548  686402ad00           push 0xad0264
// 0088954d  c74424340e000000     mov dword ptr [esp + 0x34], 0xe
// 00889555  ff15002ea400         call dword ptr [0xa42e00]
// 0088955b  8bcf                 mov ecx, edi
// 0088955d  895c2430             mov dword ptr [esp + 0x30], ebx
// 00889561  e8ea490600           call 0x8edf50
// 00889566  50                   push eax
// 00889567  8d8edc040000         lea ecx, [esi + 0x4dc]
// 0088956d  e89eb3fbff           call 0x844910
// 00889572  51                   push ecx
// 00889573  8bcc                 mov ecx, esp
// 00889575  89642418             mov dword ptr [esp + 0x18], esp
// 00889579  684c01ad00           push 0xad014c
// 0088957e  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00889585  c7860c030000a7a7a700 mov dword ptr [esi + 0x30c], 0xa7a7a7
// 0088958f  ff15002ea400         call dword ptr [0xa42e00]
// 00889595  51                   push ecx
// 00889596  8bcc                 mov ecx, esp
// 00889598  89642418             mov dword ptr [esp + 0x18], esp
// 0088959c  686402ad00           push 0xad0264
// 008895a1  c744242c0f000000     mov dword ptr [esp + 0x2c], 0xf
// 008895a9  ff15002ea400         call dword ptr [0xa42e00]
// 008895af  8bcf                 mov ecx, edi
// 008895b1  895c2428             mov dword ptr [esp + 0x28], ebx
// 008895b5  e896490600           call 0x8edf50
// 008895ba  d905685ba700         fld dword ptr [0xa75b68]
// 008895c0  51                   push ecx
// 008895c1  d91c24               fstp dword ptr [esp]
// 008895c4  68e9eeee00           push 0xeeeee9
// 008895c9  68e9eeee00           push 0xeeeee9
// 008895ce  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 008895d4  898684030000         mov dword ptr [esi + 0x384], eax
// 008895da  c7866c03000086868600 mov dword ptr [esi + 0x36c], 0x868686
// 008895e4  c78654030000fafafa00 mov dword ptr [esi + 0x354], 0xfafafa
// 008895ee  e81db3fbff           call 0x844910
// 008895f3  8bce                 mov ecx, esi
// 008895f5  e876bf0000           call 0x895570
// 008895fa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008895fe  64890d00000000       mov dword ptr fs:[0], ecx
// 00889605  59                   pop ecx
// 00889606  5f                   pop edi
// 00889607  5e                   pop esi
// 00889608  5b                   pop ebx
// 00889609  83c414               add esp, 0x14
// 0088960c  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPRibbonTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp