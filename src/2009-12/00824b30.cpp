// roc 2009-12 00824b30  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 464 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824b30
//
// 00824b30  83ec1c               sub esp, 0x1c
// 00824b33  53                   push ebx
// 00824b34  55                   push ebp
// 00824b35  56                   push esi
// 00824b36  57                   push edi
// 00824b37  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00824b3b  33db                 xor ebx, ebx
// 00824b3d  8bf1                 mov esi, ecx
// 00824b3f  3bfb                 cmp edi, ebx
// 00824b41  7409                 je 0x824b4c
// 00824b43  8b4710               mov eax, dword ptr [edi + 0x10]
// 00824b46  89442410             mov dword ptr [esp + 0x10], eax
// 00824b4a  eb04                 jmp 0x824b50
// 00824b4c  895c2410             mov dword ptr [esp + 0x10], ebx
// 00824b50  8b8e20020000         mov ecx, dword ptr [esi + 0x220]
// 00824b56  3bcb                 cmp ecx, ebx
// 00824b58  7423                 je 0x824b7d
// 00824b5a  8b11                 mov edx, dword ptr [ecx]
// 00824b5c  8b821c010000         mov eax, dword ptr [edx + 0x11c]
// 00824b62  6a01                 push 1
// 00824b64  56                   push esi
// 00824b65  ffd0                 call eax
// 00824b67  899e20020000         mov dword ptr [esi + 0x220], ebx
// 00824b6d  399ed8010000         cmp dword ptr [esi + 0x1d8], ebx
// 00824b73  7508                 jne 0x824b7d
// 00824b75  53                   push ebx
// 00824b76  8bce                 mov ecx, esi
// 00824b78  e8a3aeffff           call 0x81fa20
// 00824b7d  8b8eb4020000         mov ecx, dword ptr [esi + 0x2b4]
// 00824b83  3bcb                 cmp ecx, ebx
// 00824b85  740b                 je 0x824b92
// 00824b87  e850f2fcff           call 0x7f3ddc
// 00824b8c  899eb4020000         mov dword ptr [esi + 0x2b4], ebx
// 00824b92  395c2410             cmp dword ptr [esp + 0x10], ebx
// 00824b96  0f8453010000         je 0x824cef
// 00824b9c  3bfb                 cmp edi, ebx
// 00824b9e  0f844b010000         je 0x824cef
// 00824ba4  395f08               cmp dword ptr [edi + 8], ebx
// 00824ba7  0f8442010000         je 0x824cef
// 00824bad  8bce                 mov ecx, esi
// 00824baf  e88ce8ffff           call 0x823440
// 00824bb4  85c0                 test eax, eax
// 00824bb6  7507                 jne 0x824bbf
// 00824bb8  8bce                 mov ecx, esi
// 00824bba  e843f0fcff           call 0x7f3c02
// 00824bbf  8b16                 mov edx, dword ptr [esi]
// 00824bc1  8b8264010000         mov eax, dword ptr [edx + 0x164]
// 00824bc7  8bce                 mov ecx, esi
// 00824bc9  ffd0                 call eax
// 00824bcb  8bce                 mov ecx, esi
// 00824bcd  e8aea8ffff           call 0x81f480
// 00824bd2  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00824bd5  8b2da4ca9800         mov ebp, dword ptr [0x98caa4]
// 00824bdb  51                   push ecx
// 00824bdc  ffd5                 call ebp
// 00824bde  8bce                 mov ecx, esi
// 00824be0  e85b99ffff           call 0x81e540
// 00824be5  85c0                 test eax, eax
// 00824be7  0f8494000000         je 0x824c81
// 00824bed  8b4f08               mov ecx, dword ptr [edi + 8]
// 00824bf0  8b11                 mov edx, dword ptr [ecx]
// 00824bf2  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00824bf5  ffd0                 call eax
// 00824bf7  8b4f08               mov ecx, dword ptr [edi + 8]
// 00824bfa  51                   push ecx
// 00824bfb  8bce                 mov ecx, esi
// 00824bfd  89442418             mov dword ptr [esp + 0x18], eax
// 00824c01  e88aafffff           call 0x81fb90
// 00824c06  8bce                 mov ecx, esi
// 00824c08  e873a8ffff           call 0x81f480
// 00824c0d  8b5620               mov edx, dword ptr [esi + 0x20]
// 00824c10  52                   push edx
// 00824c11  ffd5                 call ebp
// 00824c13  8dae44020000         lea ebp, [esi + 0x244]
// 00824c19  8bcd                 mov ecx, ebp
// 00824c1b  895f08               mov dword ptr [edi + 8], ebx
// 00824c1e  e8fd7f0000           call 0x82cc20
// 00824c23  3bc3                 cmp eax, ebx
// 00824c25  89442418             mov dword ptr [esp + 0x18], eax
// 00824c29  895c2430             mov dword ptr [esp + 0x30], ebx
// 00824c2d  0f8ec3000000         jle 0x824cf6
// 00824c33  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00824c37  8b4500               mov eax, dword ptr [ebp]
// 00824c3a  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00824c3d  51                   push ecx
// 00824c3e  8bcd                 mov ecx, ebp
// 00824c40  ffd2                 call edx
// 00824c42  8bd8                 mov ebx, eax
// 00824c44  8b03                 mov eax, dword ptr [ebx]
// 00824c46  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00824c49  8bcb                 mov ecx, ebx
// 00824c4b  ffd2                 call edx
// 00824c4d  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00824c51  7419                 je 0x824c6c
// 00824c53  8b442430             mov eax, dword ptr [esp + 0x30]
// 00824c57  40                   inc eax
// 00824c58  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00824c5c  89442430             mov dword ptr [esp + 0x30], eax
// 00824c60  7cd1                 jl 0x824c33
// 00824c62  5f                   pop edi
// 00824c63  5e                   pop esi
// 00824c64  5d                   pop ebp
// 00824c65  5b                   pop ebx
// 00824c66  83c41c               add esp, 0x1c
// 00824c69  c20400               ret 4
// 00824c6c  895f08               mov dword ptr [edi + 8], ebx
// 00824c6f  899eb4020000         mov dword ptr [esi + 0x2b4], ebx
// 00824c75  83c304               add ebx, 4
// 00824c78  53                   push ebx
// 00824c79  ff150cb29800         call dword ptr [0x98b20c]
// 00824c7f  eb1e                 jmp 0x824c9f
// 00824c81  8b5f08               mov ebx, dword ptr [edi + 8]
// 00824c84  8bce                 mov ecx, esi
// 00824c86  e8d598ffff           call 0x81e560
// 00824c8b  3bc3                 cmp eax, ebx
// 00824c8d  7410                 je 0x824c9f
// 00824c8f  6a00                 push 0
// 00824c91  53                   push ebx
// 00824c92  8bce                 mov ecx, esi
// 00824c94  e8070d0000           call 0x8259a0
// 00824c99  8b4620               mov eax, dword ptr [esi + 0x20]
// 00824c9c  50                   push eax
// 00824c9d  ffd5                 call ebp
// 00824c9f  8b4f08               mov ecx, dword ptr [edi + 8]
// 00824ca2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00824ca6  8b11                 mov edx, dword ptr [ecx]
// 00824ca8  8b92e0000000         mov edx, dword ptr [edx + 0xe0]
// 00824cae  53                   push ebx
// 00824caf  8d442420             lea eax, [esp + 0x20]
// 00824cb3  50                   push eax
// 00824cb4  ffd2                 call edx
// 00824cb6  8b08                 mov ecx, dword ptr [eax]
// 00824cb8  894f14               mov dword ptr [edi + 0x14], ecx
// 00824cbb  8b5004               mov edx, dword ptr [eax + 4]
// 00824cbe  895718               mov dword ptr [edi + 0x18], edx
// 00824cc1  8b4808               mov ecx, dword ptr [eax + 8]
// 00824cc4  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00824cc7  8b500c               mov edx, dword ptr [eax + 0xc]
// 00824cca  8b470c               mov eax, dword ptr [edi + 0xc]
// 00824ccd  50                   push eax
// 00824cce  8bce                 mov ecx, esi
// 00824cd0  895720               mov dword ptr [edi + 0x20], edx
// 00824cd3  e848adffff           call 0x81fa20
// 00824cd8  85c0                 test eax, eax
// 00824cda  7413                 je 0x824cef
// 00824cdc  899e20020000         mov dword ptr [esi + 0x220], ebx
// 00824ce2  8b13                 mov edx, dword ptr [ebx]
// 00824ce4  8b8218010000         mov eax, dword ptr [edx + 0x118]
// 00824cea  57                   push edi
// 00824ceb  8bcb                 mov ecx, ebx
// 00824ced  ffd0                 call eax
// 00824cef  8bce                 mov ecx, esi
// 00824cf1  e88aa7ffff           call 0x81f480
// 00824cf6  5f                   pop edi
// 00824cf7  5e                   pop esi
// 00824cf8  5d                   pop ebp
// 00824cf9  5b                   pop ebx
// 00824cfa  83c41c               add esp, 0x1c
// 00824cfd  c20400               ret 4
// copied from an identical function in another client (function ?EditItem@CXTPReportControl@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp