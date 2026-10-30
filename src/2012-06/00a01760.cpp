// roc 2012-06 00a01760  unit: CXTPRibbonTheme  size: 1133 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a01760
//
// 00a01760  6aff                 push -1
// 00a01762  68c02aae00           push 0xae2ac0
// 00a01767  64a100000000         mov eax, dword ptr fs:[0]
// 00a0176d  50                   push eax
// 00a0176e  83ec08               sub esp, 8
// 00a01771  53                   push ebx
// 00a01772  56                   push esi
// 00a01773  57                   push edi
// 00a01774  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a01779  33c4                 xor eax, esp
// 00a0177b  50                   push eax
// 00a0177c  8d442418             lea eax, [esp + 0x18]
// 00a01780  64a300000000         mov dword ptr fs:[0], eax
// 00a01786  8bf1                 mov esi, ecx
// 00a01788  e853640000           call 0xa07be0
// 00a0178d  8bce                 mov ecx, esi
// 00a0178f  e8cc600000           call 0xa07860
// 00a01794  51                   push ecx
// 00a01795  8bcc                 mov ecx, esp
// 00a01797  89642414             mov dword ptr [esp + 0x14], esp
// 00a0179b  6824b9c100           push 0xc1b924
// 00a017a0  8bf8                 mov edi, eax
// 00a017a2  ff15c847b200         call dword ptr [0xb247c8]
// 00a017a8  51                   push ecx
// 00a017a9  8bcc                 mov ecx, esp
// 00a017ab  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a017af  681cb9c100           push 0xc1b91c
// 00a017b4  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 00a017bc  ff15c847b200         call dword ptr [0xb247c8]
// 00a017c2  8bce                 mov ecx, esi
// 00a017c4  c644242801           mov byte ptr [esp + 0x28], 1
// 00a017c9  e892600000           call 0xa07860
// 00a017ce  83cbff               or ebx, 0xffffffff
// 00a017d1  8bc8                 mov ecx, eax
// 00a017d3  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a017d7  e8544b0600           call 0xa66330
// 00a017dc  51                   push ecx
// 00a017dd  8bcc                 mov ecx, esp
// 00a017df  89642418             mov dword ptr [esp + 0x18], esp
// 00a017e3  680cb9c100           push 0xc1b90c
// 00a017e8  89866c060000         mov dword ptr [esi + 0x66c], eax
// 00a017ee  ff15c847b200         call dword ptr [0xb247c8]
// 00a017f4  51                   push ecx
// 00a017f5  8bcc                 mov ecx, esp
// 00a017f7  89642418             mov dword ptr [esp + 0x18], esp
// 00a017fb  681cb9c100           push 0xc1b91c
// 00a01800  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 00a01808  ff15c847b200         call dword ptr [0xb247c8]
// 00a0180e  8bcf                 mov ecx, edi
// 00a01810  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a01814  e8174b0600           call 0xa66330
// 00a01819  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 00a0181f  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00a01825  51                   push ecx
// 00a01826  8981cc000000         mov dword ptr [ecx + 0xcc], eax
// 00a0182c  8bcc                 mov ecx, esp
// 00a0182e  89642418             mov dword ptr [esp + 0x18], esp
// 00a01832  680cb9c100           push 0xc1b90c
// 00a01837  ff15c847b200         call dword ptr [0xb247c8]
// 00a0183d  51                   push ecx
// 00a0183e  8bcc                 mov ecx, esp
// 00a01840  89642418             mov dword ptr [esp + 0x18], esp
// 00a01844  681cb9c100           push 0xc1b91c
// 00a01849  c744242c03000000     mov dword ptr [esp + 0x2c], 3
// 00a01851  ff15c847b200         call dword ptr [0xb247c8]
// 00a01857  8bcf                 mov ecx, edi
// 00a01859  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a0185d  e8ce4a0600           call 0xa66330
// 00a01862  8b9668060000         mov edx, dword ptr [esi + 0x668]
// 00a01868  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 00a0186e  51                   push ecx
// 00a0186f  8981a8000000         mov dword ptr [ecx + 0xa8], eax
// 00a01875  8bcc                 mov ecx, esp
// 00a01877  89642418             mov dword ptr [esp + 0x18], esp
// 00a0187b  68fcb8c100           push 0xc1b8fc
// 00a01880  ff15c847b200         call dword ptr [0xb247c8]
// 00a01886  51                   push ecx
// 00a01887  8bcc                 mov ecx, esp
// 00a01889  89642418             mov dword ptr [esp + 0x18], esp
// 00a0188d  681cb9c100           push 0xc1b91c
// 00a01892  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 00a0189a  ff15c847b200         call dword ptr [0xb247c8]
// 00a018a0  8bcf                 mov ecx, edi
// 00a018a2  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a018a6  e8854a0600           call 0xa66330
// 00a018ab  8b8e68060000         mov ecx, dword ptr [esi + 0x668]
// 00a018b1  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00a018b7  51                   push ecx
// 00a018b8  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 00a018be  8bcc                 mov ecx, esp
// 00a018c0  89642418             mov dword ptr [esp + 0x18], esp
// 00a018c4  68e8b8c100           push 0xc1b8e8
// 00a018c9  ff15c847b200         call dword ptr [0xb247c8]
// 00a018cf  51                   push ecx
// 00a018d0  8bcc                 mov ecx, esp
// 00a018d2  89642418             mov dword ptr [esp + 0x18], esp
// 00a018d6  681cb9c100           push 0xc1b91c
// 00a018db  c744242c05000000     mov dword ptr [esp + 0x2c], 5
// 00a018e3  ff15c847b200         call dword ptr [0xb247c8]
// 00a018e9  8bcf                 mov ecx, edi
// 00a018eb  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a018ef  e83c4a0600           call 0xa66330
// 00a018f4  51                   push ecx
// 00a018f5  8bcc                 mov ecx, esp
// 00a018f7  89642418             mov dword ptr [esp + 0x18], esp
// 00a018fb  68d8b8c100           push 0xc1b8d8
// 00a01900  898674060000         mov dword ptr [esi + 0x674], eax
// 00a01906  ff15c847b200         call dword ptr [0xb247c8]
// 00a0190c  51                   push ecx
// 00a0190d  8bcc                 mov ecx, esp
// 00a0190f  89642418             mov dword ptr [esp + 0x18], esp
// 00a01913  681cb9c100           push 0xc1b91c
// 00a01918  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 00a01920  ff15c847b200         call dword ptr [0xb247c8]
// 00a01926  8bcf                 mov ecx, edi
// 00a01928  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a0192c  e8ff490600           call 0xa66330
// 00a01931  51                   push ecx
// 00a01932  8bcc                 mov ecx, esp
// 00a01934  89642418             mov dword ptr [esp + 0x18], esp
// 00a01938  68ccb8c100           push 0xc1b8cc
// 00a0193d  898690030000         mov dword ptr [esi + 0x390], eax
// 00a01943  ff15c847b200         call dword ptr [0xb247c8]
// 00a01949  51                   push ecx
// 00a0194a  8bcc                 mov ecx, esp
// 00a0194c  89642418             mov dword ptr [esp + 0x18], esp
// 00a01950  681cb9c100           push 0xc1b91c
// 00a01955  c744242c07000000     mov dword ptr [esp + 0x2c], 7
// 00a0195d  ff15c847b200         call dword ptr [0xb247c8]
// 00a01963  8bcf                 mov ecx, edi
// 00a01965  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a01969  e8c2490600           call 0xa66330
// 00a0196e  51                   push ecx
// 00a0196f  8bcc                 mov ecx, esp
// 00a01971  89642418             mov dword ptr [esp + 0x18], esp
// 00a01975  68b8b8c100           push 0xc1b8b8
// 00a0197a  898670060000         mov dword ptr [esi + 0x670], eax
// 00a01980  ff15c847b200         call dword ptr [0xb247c8]
// 00a01986  51                   push ecx
// 00a01987  8bcc                 mov ecx, esp
// 00a01989  89642418             mov dword ptr [esp + 0x18], esp
// 00a0198d  681cb9c100           push 0xc1b91c
// 00a01992  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 00a0199a  ff15c847b200         call dword ptr [0xb247c8]
// 00a019a0  8bcf                 mov ecx, edi
// 00a019a2  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a019a6  e885490600           call 0xa66330
// 00a019ab  51                   push ecx
// 00a019ac  8bcc                 mov ecx, esp
// 00a019ae  89642418             mov dword ptr [esp + 0x18], esp
// 00a019b2  689cb8c100           push 0xc1b89c
// 00a019b7  898678060000         mov dword ptr [esi + 0x678], eax
// 00a019bd  ff15c847b200         call dword ptr [0xb247c8]
// 00a019c3  51                   push ecx
// 00a019c4  8bcc                 mov ecx, esp
// 00a019c6  89642418             mov dword ptr [esp + 0x18], esp
// 00a019ca  681cb9c100           push 0xc1b91c
// 00a019cf  c744242c09000000     mov dword ptr [esp + 0x2c], 9
// 00a019d7  ff15c847b200         call dword ptr [0xb247c8]
// 00a019dd  8bcf                 mov ecx, edi
// 00a019df  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a019e3  e848490600           call 0xa66330
// 00a019e8  51                   push ecx
// 00a019e9  89867c060000         mov dword ptr [esi + 0x67c], eax
// 00a019ef  8bcc                 mov ecx, esp
// 00a019f1  89642418             mov dword ptr [esp + 0x18], esp
// 00a019f5  6880b8c100           push 0xc1b880
// 00a019fa  ff15c847b200         call dword ptr [0xb247c8]
// 00a01a00  51                   push ecx
// 00a01a01  8bcc                 mov ecx, esp
// 00a01a03  89642418             mov dword ptr [esp + 0x18], esp
// 00a01a07  681cb9c100           push 0xc1b91c
// 00a01a0c  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 00a01a14  ff15c847b200         call dword ptr [0xb247c8]
// 00a01a1a  8bcf                 mov ecx, edi
// 00a01a1c  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a01a20  e80b490600           call 0xa66330
// 00a01a25  51                   push ecx
// 00a01a26  8bcc                 mov ecx, esp
// 00a01a28  89642418             mov dword ptr [esp + 0x18], esp
// 00a01a2c  6870b8c100           push 0xc1b870
// 00a01a31  898680060000         mov dword ptr [esi + 0x680], eax
// 00a01a37  ff15c847b200         call dword ptr [0xb247c8]
// 00a01a3d  51                   push ecx
// 00a01a3e  8bcc                 mov ecx, esp
// 00a01a40  89642418             mov dword ptr [esp + 0x18], esp
// 00a01a44  681cb9c100           push 0xc1b91c
// 00a01a49  c744242c0b000000     mov dword ptr [esp + 0x2c], 0xb
// 00a01a51  ff15c847b200         call dword ptr [0xb247c8]
// 00a01a57  8bcf                 mov ecx, edi
// 00a01a59  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a01a5d  e8ce480600           call 0xa66330
// 00a01a62  51                   push ecx
// 00a01a63  8bcc                 mov ecx, esp
// 00a01a65  89642418             mov dword ptr [esp + 0x18], esp
// 00a01a69  685cb8c100           push 0xc1b85c
// 00a01a6e  898678030000         mov dword ptr [esi + 0x378], eax
// 00a01a74  ff15c847b200         call dword ptr [0xb247c8]
// 00a01a7a  51                   push ecx
// 00a01a7b  8bcc                 mov ecx, esp
// 00a01a7d  89642418             mov dword ptr [esp + 0x18], esp
// 00a01a81  681cb9c100           push 0xc1b91c
// 00a01a86  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 00a01a8e  ff15c847b200         call dword ptr [0xb247c8]
// 00a01a94  8bcf                 mov ecx, edi
// 00a01a96  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a01a9a  e891480600           call 0xa66330
// 00a01a9f  50                   push eax
// 00a01aa0  8d8e84060000         lea ecx, [esi + 0x684]
// 00a01aa6  e805bdfbff           call 0x9bd7b0
// 00a01aab  d9057027b600         fld dword ptr [0xb62770]
// 00a01ab1  83ec08               sub esp, 8
// 00a01ab4  d95c2404             fstp dword ptr [esp + 4]
// 00a01ab8  8bcc                 mov ecx, esp
// 00a01aba  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a01abe  683cb8c100           push 0xc1b83c
// 00a01ac3  ff15c847b200         call dword ptr [0xb247c8]
// 00a01ac9  51                   push ecx
// 00a01aca  8bcc                 mov ecx, esp
// 00a01acc  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a01ad0  681cb9c100           push 0xc1b91c
// 00a01ad5  c74424300d000000     mov dword ptr [esp + 0x30], 0xd
// 00a01add  ff15c847b200         call dword ptr [0xb247c8]
// 00a01ae3  8bcf                 mov ecx, edi
// 00a01ae5  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00a01ae9  e842480600           call 0xa66330
// 00a01aee  50                   push eax
// 00a01aef  51                   push ecx
// 00a01af0  8bcc                 mov ecx, esp
// 00a01af2  89642420             mov dword ptr [esp + 0x20], esp
// 00a01af6  681cb8c100           push 0xc1b81c
// 00a01afb  ff15c847b200         call dword ptr [0xb247c8]
// 00a01b01  51                   push ecx
// 00a01b02  8bcc                 mov ecx, esp
// 00a01b04  89642420             mov dword ptr [esp + 0x20], esp
// 00a01b08  681cb9c100           push 0xc1b91c
// 00a01b0d  c74424340e000000     mov dword ptr [esp + 0x34], 0xe
// 00a01b15  ff15c847b200         call dword ptr [0xb247c8]
// 00a01b1b  8bcf                 mov ecx, edi
// 00a01b1d  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a01b21  e80a480600           call 0xa66330
// 00a01b26  50                   push eax
// 00a01b27  8d8edc040000         lea ecx, [esi + 0x4dc]
// 00a01b2d  e80eb2fbff           call 0x9bcd40
// 00a01b32  51                   push ecx
// 00a01b33  8bcc                 mov ecx, esp
// 00a01b35  89642418             mov dword ptr [esp + 0x18], esp
// 00a01b39  6804b8c100           push 0xc1b804
// 00a01b3e  c7462000000000       mov dword ptr [esi + 0x20], 0
// 00a01b45  c7860c030000a7a7a700 mov dword ptr [esi + 0x30c], 0xa7a7a7
// 00a01b4f  ff15c847b200         call dword ptr [0xb247c8]
// 00a01b55  51                   push ecx
// 00a01b56  8bcc                 mov ecx, esp
// 00a01b58  89642418             mov dword ptr [esp + 0x18], esp
// 00a01b5c  681cb9c100           push 0xc1b91c
// 00a01b61  c744242c0f000000     mov dword ptr [esp + 0x2c], 0xf
// 00a01b69  ff15c847b200         call dword ptr [0xb247c8]
// 00a01b6f  8bcf                 mov ecx, edi
// 00a01b71  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a01b75  e8b6470600           call 0xa66330
// 00a01b7a  d9057027b600         fld dword ptr [0xb62770]
// 00a01b80  51                   push ecx
// 00a01b81  d91c24               fstp dword ptr [esp]
// 00a01b84  68e9eeee00           push 0xeeeee9
// 00a01b89  68e9eeee00           push 0xeeeee9
// 00a01b8e  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 00a01b94  898684030000         mov dword ptr [esi + 0x384], eax
// 00a01b9a  c7866c03000086868600 mov dword ptr [esi + 0x36c], 0x868686
// 00a01ba4  c78654030000fafafa00 mov dword ptr [esi + 0x354], 0xfafafa
// 00a01bae  e88db1fbff           call 0x9bcd40
// 00a01bb3  8bce                 mov ecx, esi
// 00a01bb5  e896bf0000           call 0xa0db50
// 00a01bba  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a01bbe  64890d00000000       mov dword ptr fs:[0], ecx
// 00a01bc5  59                   pop ecx
// 00a01bc6  5f                   pop edi
// 00a01bc7  5e                   pop esi
// 00a01bc8  5b                   pop ebx
// 00a01bc9  83c414               add esp, 0x14
// 00a01bcc  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPRibbonTheme@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonTheme.cpp