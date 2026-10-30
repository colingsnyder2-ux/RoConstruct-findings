// roc 2009-12 00876c20  unit: CXTPRibbonTheme  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00876c20
//
// 00876c20  6aff                 push -1
// 00876c22  682a019600           push 0x96012a
// 00876c27  64a100000000         mov eax, dword ptr fs:[0]
// 00876c2d  50                   push eax
// 00876c2e  83ec44               sub esp, 0x44
// 00876c31  53                   push ebx
// 00876c32  55                   push ebp
// 00876c33  56                   push esi
// 00876c34  57                   push edi
// 00876c35  a10052b600           mov eax, dword ptr [0xb65200]
// 00876c3a  33c4                 xor eax, esp
// 00876c3c  50                   push eax
// 00876c3d  8d442458             lea eax, [esp + 0x58]
// 00876c41  64a300000000         mov dword ptr fs:[0], eax
// 00876c47  8bf9                 mov edi, ecx
// 00876c49  897c2414             mov dword ptr [esp + 0x14], edi
// 00876c4d  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00876c51  e8da45f3ff           call 0x7ab230
// 00876c56  8bf0                 mov esi, eax
// 00876c58  33db                 xor ebx, ebx
// 00876c5a  89742420             mov dword ptr [esp + 0x20], esi
// 00876c5e  3bf3                 cmp esi, ebx
// 00876c60  0f841e020000         je 0x876e84
// 00876c66  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 00876c6c  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 00876c70  050c010000           add eax, 0x10c
// 00876c75  50                   push eax
// 00876c76  55                   push ebp
// 00876c77  8d4c2440             lea ecx, [esp + 0x40]
// 00876c7b  e8e049fdff           call 0x84b660
// 00876c80  6a01                 push 1
// 00876c82  8bcd                 mov ecx, ebp
// 00876c84  895c2464             mov dword ptr [esp + 0x64], ebx
// 00876c88  e803f80a00           call 0x926490
// 00876c8d  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 00876c93  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 00876c99  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 00876c9f  83f9ff               cmp ecx, -1
// 00876ca2  7508                 jne 0x876cac
// 00876ca4  8b80a8000000         mov eax, dword ptr [eax + 0xa8]
// 00876caa  eb02                 jmp 0x876cae
// 00876cac  8bc1                 mov eax, ecx
// 00876cae  8b5500               mov edx, dword ptr [ebp]
// 00876cb1  50                   push eax
// 00876cb2  8b4238               mov eax, dword ptr [edx + 0x38]
// 00876cb5  8bcd                 mov ecx, ebp
// 00876cb7  ffd0                 call eax
// 00876cb9  3bf3                 cmp esi, ebx
// 00876cbb  895c2468             mov dword ptr [esp + 0x68], ebx
// 00876cbf  0f8eae010000         jle 0x876e73
// 00876cc5  eb04                 jmp 0x876ccb
// 00876cc7  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00876ccb  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00876ccf  51                   push ecx
// 00876cd0  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00876cd4  e8770d0500           call 0x8c7a50
// 00876cd9  8bf0                 mov esi, eax
// 00876cdb  8b560c               mov edx, dword ptr [esi + 0xc]
// 00876cde  52                   push edx
// 00876cdf  8d442420             lea eax, [esp + 0x20]
// 00876ce3  50                   push eax
// 00876ce4  e8b7a3ffff           call 0x8710a0
// 00876ce9  83c408               add esp, 8
// 00876cec  8bc8                 mov ecx, eax
// 00876cee  c644246001           mov byte ptr [esp + 0x60], 1
// 00876cf3  ff1580de9800         call dword ptr [0x98de80]
// 00876cf9  50                   push eax
// 00876cfa  8d4c241c             lea ecx, [esp + 0x1c]
// 00876cfe  687018a000           push 0xa01870
// 00876d03  51                   push ecx
// 00876d04  e827a3ffff           call 0x871030
// 00876d09  83c40c               add esp, 0xc
// 00876d0c  8bc8                 mov ecx, eax
// 00876d0e  c644246002           mov byte ptr [esp + 0x60], 2
// 00876d13  ff1580de9800         call dword ptr [0x98de80]
// 00876d19  50                   push eax
// 00876d1a  8bcf                 mov ecx, edi
// 00876d1c  e8df7f0000           call 0x87ed00
// 00876d21  8d4c2418             lea ecx, [esp + 0x18]
// 00876d25  8bf8                 mov edi, eax
// 00876d27  ff15c0de9800         call dword ptr [0x98dec0]
// 00876d2d  8d4c241c             lea ecx, [esp + 0x1c]
// 00876d31  c644246000           mov byte ptr [esp + 0x60], 0
// 00876d36  ff15c0de9800         call dword ptr [0x98dec0]
// 00876d3c  85ff                 test edi, edi
// 00876d3e  0f842f010000         je 0x876e73
// 00876d44  8b5610               mov edx, dword ptr [esi + 0x10]
// 00876d47  89542428             mov dword ptr [esp + 0x28], edx
// 00876d4b  8b4614               mov eax, dword ptr [esi + 0x14]
// 00876d4e  8944242c             mov dword ptr [esp + 0x2c], eax
// 00876d52  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 00876d55  bb01000000           mov ebx, 1
// 00876d5a  53                   push ebx
// 00876d5b  894c2434             mov dword ptr [esp + 0x34], ecx
// 00876d5f  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00876d62  6a00                 push 0
// 00876d64  8d442450             lea eax, [esp + 0x50]
// 00876d68  50                   push eax
// 00876d69  8bcf                 mov ecx, edi
// 00876d6b  89542440             mov dword ptr [esp + 0x40], edx
// 00876d6f  e84c9b0600           call 0x8e08c0
// 00876d74  83ec10               sub esp, 0x10
// 00876d77  8bcc                 mov ecx, esp
// 00876d79  8919                 mov dword ptr [ecx], ebx
// 00876d7b  8bd3                 mov edx, ebx
// 00876d7d  895104               mov dword ptr [ecx + 4], edx
// 00876d80  895108               mov dword ptr [ecx + 8], edx
// 00876d83  89510c               mov dword ptr [ecx + 0xc], edx
// 00876d86  8b10                 mov edx, dword ptr [eax]
// 00876d88  83ec10               sub esp, 0x10
// 00876d8b  8bcc                 mov ecx, esp
// 00876d8d  8911                 mov dword ptr [ecx], edx
// 00876d8f  8b5004               mov edx, dword ptr [eax + 4]
// 00876d92  895104               mov dword ptr [ecx + 4], edx
// 00876d95  8b5008               mov edx, dword ptr [eax + 8]
// 00876d98  8b400c               mov eax, dword ptr [eax + 0xc]
// 00876d9b  895108               mov dword ptr [ecx + 8], edx
// 00876d9e  89410c               mov dword ptr [ecx + 0xc], eax
// 00876da1  8d4c2448             lea ecx, [esp + 0x48]
// 00876da5  51                   push ecx
// 00876da6  55                   push ebp
// 00876da7  8bcf                 mov ecx, edi
// 00876da9  e8e2930600           call 0x8e0190
// 00876dae  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00876db2  8344242806           add dword ptr [esp + 0x28], 6
// 00876db7  8bcf                 mov ecx, edi
// 00876db9  e812df0100           call 0x894cd0
// 00876dbe  85c0                 test eax, eax
// 00876dc0  740b                 je 0x876dcd
// 00876dc2  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00876dc8  8b4040               mov eax, dword ptr [eax + 0x40]
// 00876dcb  eb02                 jmp 0x876dcf
// 00876dcd  33c0                 xor eax, eax
// 00876dcf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00876dd3  8d4402fe             lea eax, [edx + eax - 2]
// 00876dd7  8bcf                 mov ecx, edi
// 00876dd9  8944242c             mov dword ptr [esp + 0x2c], eax
// 00876ddd  e8dee50100           call 0x8953c0
// 00876de2  85c0                 test eax, eax
// 00876de4  744f                 je 0x876e35
// 00876de6  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00876dec  8b4018               mov eax, dword ptr [eax + 0x18]
// 00876def  50                   push eax
// 00876df0  8bcf                 mov ecx, edi
// 00876df2  e89902f9ff           call 0x807090
// 00876df7  50                   push eax
// 00876df8  51                   push ecx
// 00876df9  83c608               add esi, 8
// 00876dfc  8bcc                 mov ecx, esp
// 00876dfe  89642430             mov dword ptr [esp + 0x30], esp
// 00876e02  56                   push esi
// 00876e03  ff1594de9800         call dword ptr [0x98de94]
// 00876e09  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00876e0d  8b542438             mov edx, dword ptr [esp + 0x38]
// 00876e11  83ec10               sub esp, 0x10
// 00876e14  8bc4                 mov eax, esp
// 00876e16  8908                 mov dword ptr [eax], ecx
// 00876e18  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00876e1c  895004               mov dword ptr [eax + 4], edx
// 00876e1f  8b542450             mov edx, dword ptr [esp + 0x50]
// 00876e23  894808               mov dword ptr [eax + 8], ecx
// 00876e26  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00876e2a  55                   push ebp
// 00876e2b  89500c               mov dword ptr [eax + 0xc], edx
// 00876e2e  e8cddcffff           call 0x874b00
// 00876e33  eb2b                 jmp 0x876e60
// 00876e35  8d7e08               lea edi, [esi + 8]
// 00876e38  8b7500               mov esi, dword ptr [ebp]
// 00876e3b  6824880000           push 0x8824
// 00876e40  8d44242c             lea eax, [esp + 0x2c]
// 00876e44  50                   push eax
// 00876e45  8bcf                 mov ecx, edi
// 00876e47  83c670               add esi, 0x70
// 00876e4a  ff15b4dd9800         call dword ptr [0x98ddb4]
// 00876e50  50                   push eax
// 00876e51  8bcf                 mov ecx, edi
// 00876e53  ff1580de9800         call dword ptr [0x98de80]
// 00876e59  8b16                 mov edx, dword ptr [esi]
// 00876e5b  50                   push eax
// 00876e5c  8bcd                 mov ecx, ebp
// 00876e5e  ffd2                 call edx
// 00876e60  8b442468             mov eax, dword ptr [esp + 0x68]
// 00876e64  40                   inc eax
// 00876e65  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00876e69  89442468             mov dword ptr [esp + 0x68], eax
// 00876e6d  0f8c54feffff         jl 0x876cc7
// 00876e73  8d4c2438             lea ecx, [esp + 0x38]
// 00876e77  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 00876e7f  e85c48fdff           call 0x84b6e0
// 00876e84  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00876e88  64890d00000000       mov dword ptr fs:[0], ecx
// 00876e8f  59                   pop ecx
// 00876e90  5f                   pop edi
// 00876e91  5e                   pop esi
// 00876e92  5d                   pop ebp
// 00876e93  5b                   pop ebx
// 00876e94  83c450               add esp, 0x50
// 00876e97  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameContextHeaders@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@PAVCXTPRibbonTabContextHeaders@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp