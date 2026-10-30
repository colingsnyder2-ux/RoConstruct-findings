// roc 2011-06 0088ebc0  unit: CXTPRibbonTheme  size: 634 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0088ebc0
//
// 0088ebc0  6aff                 push -1
// 0088ebc2  687a91a000           push 0xa0917a
// 0088ebc7  64a100000000         mov eax, dword ptr fs:[0]
// 0088ebcd  50                   push eax
// 0088ebce  83ec44               sub esp, 0x44
// 0088ebd1  53                   push ebx
// 0088ebd2  55                   push ebp
// 0088ebd3  56                   push esi
// 0088ebd4  57                   push edi
// 0088ebd5  a12058c900           mov eax, dword ptr [0xc95820]
// 0088ebda  33c4                 xor eax, esp
// 0088ebdc  50                   push eax
// 0088ebdd  8d442458             lea eax, [esp + 0x58]
// 0088ebe1  64a300000000         mov dword ptr fs:[0], eax
// 0088ebe7  8bf9                 mov edi, ecx
// 0088ebe9  897c2414             mov dword ptr [esp + 0x14], edi
// 0088ebed  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0088ebf1  e8ca040500           call 0x8df0c0
// 0088ebf6  8bf0                 mov esi, eax
// 0088ebf8  33db                 xor ebx, ebx
// 0088ebfa  89742420             mov dword ptr [esp + 0x20], esi
// 0088ebfe  3bf3                 cmp esi, ebx
// 0088ec00  0f841e020000         je 0x88ee24
// 0088ec06  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 0088ec0c  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 0088ec10  050c010000           add eax, 0x10c
// 0088ec15  50                   push eax
// 0088ec16  55                   push ebp
// 0088ec17  8d4c2440             lea ecx, [esp + 0x40]
// 0088ec1b  e800e5fcff           call 0x85d120
// 0088ec20  6a01                 push 1
// 0088ec22  8bcd                 mov ecx, ebp
// 0088ec24  895c2464             mov dword ptr [esp + 0x64], ebx
// 0088ec28  e8c1d91300           call 0x9cc5ee
// 0088ec2d  8b8768060000         mov eax, dword ptr [edi + 0x668]
// 0088ec33  8b80e4000000         mov eax, dword ptr [eax + 0xe4]
// 0088ec39  8b88ac000000         mov ecx, dword ptr [eax + 0xac]
// 0088ec3f  83f9ff               cmp ecx, -1
// 0088ec42  7508                 jne 0x88ec4c
// 0088ec44  8b80a8000000         mov eax, dword ptr [eax + 0xa8]
// 0088ec4a  eb02                 jmp 0x88ec4e
// 0088ec4c  8bc1                 mov eax, ecx
// 0088ec4e  8b5500               mov edx, dword ptr [ebp]
// 0088ec51  50                   push eax
// 0088ec52  8b4238               mov eax, dword ptr [edx + 0x38]
// 0088ec55  8bcd                 mov ecx, ebp
// 0088ec57  ffd0                 call eax
// 0088ec59  3bf3                 cmp esi, ebx
// 0088ec5b  895c2468             mov dword ptr [esp + 0x68], ebx
// 0088ec5f  0f8eae010000         jle 0x88ee13
// 0088ec65  eb04                 jmp 0x88ec6b
// 0088ec67  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0088ec6b  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0088ec6f  51                   push ecx
// 0088ec70  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0088ec74  e857930600           call 0x8f7fd0
// 0088ec79  8bf0                 mov esi, eax
// 0088ec7b  8b560c               mov edx, dword ptr [esi + 0xc]
// 0088ec7e  52                   push edx
// 0088ec7f  8d442420             lea eax, [esp + 0x20]
// 0088ec83  50                   push eax
// 0088ec84  e8d7a3ffff           call 0x889060
// 0088ec89  83c408               add esp, 8
// 0088ec8c  8bc8                 mov ecx, eax
// 0088ec8e  c644246001           mov byte ptr [esp + 0x60], 1
// 0088ec93  ff15c82da400         call dword ptr [0xa42dc8]
// 0088ec99  50                   push eax
// 0088ec9a  8d4c241c             lea ecx, [esp + 0x1c]
// 0088ec9e  68d00bad00           push 0xad0bd0
// 0088eca3  51                   push ecx
// 0088eca4  e847a3ffff           call 0x888ff0
// 0088eca9  83c40c               add esp, 0xc
// 0088ecac  8bc8                 mov ecx, eax
// 0088ecae  c644246002           mov byte ptr [esp + 0x60], 2
// 0088ecb3  ff15c82da400         call dword ptr [0xa42dc8]
// 0088ecb9  50                   push eax
// 0088ecba  8bcf                 mov ecx, edi
// 0088ecbc  e8cf050000           call 0x88f290
// 0088ecc1  8d4c2418             lea ecx, [esp + 0x18]
// 0088ecc5  8bf8                 mov edi, eax
// 0088ecc7  ff15082ea400         call dword ptr [0xa42e08]
// 0088eccd  8d4c241c             lea ecx, [esp + 0x1c]
// 0088ecd1  c644246000           mov byte ptr [esp + 0x60], 0
// 0088ecd6  ff15082ea400         call dword ptr [0xa42e08]
// 0088ecdc  85ff                 test edi, edi
// 0088ecde  0f842f010000         je 0x88ee13
// 0088ece4  8b5610               mov edx, dword ptr [esi + 0x10]
// 0088ece7  89542428             mov dword ptr [esp + 0x28], edx
// 0088eceb  8b4614               mov eax, dword ptr [esi + 0x14]
// 0088ecee  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088ecf2  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0088ecf5  bb01000000           mov ebx, 1
// 0088ecfa  53                   push ebx
// 0088ecfb  894c2434             mov dword ptr [esp + 0x34], ecx
// 0088ecff  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0088ed02  6a00                 push 0
// 0088ed04  8d442450             lea eax, [esp + 0x50]
// 0088ed08  50                   push eax
// 0088ed09  8bcf                 mov ecx, edi
// 0088ed0b  89542440             mov dword ptr [esp + 0x40], edx
// 0088ed0f  e8fce90500           call 0x8ed710
// 0088ed14  83ec10               sub esp, 0x10
// 0088ed17  8bcc                 mov ecx, esp
// 0088ed19  8919                 mov dword ptr [ecx], ebx
// 0088ed1b  8bd3                 mov edx, ebx
// 0088ed1d  895104               mov dword ptr [ecx + 4], edx
// 0088ed20  895108               mov dword ptr [ecx + 8], edx
// 0088ed23  89510c               mov dword ptr [ecx + 0xc], edx
// 0088ed26  8b10                 mov edx, dword ptr [eax]
// 0088ed28  83ec10               sub esp, 0x10
// 0088ed2b  8bcc                 mov ecx, esp
// 0088ed2d  8911                 mov dword ptr [ecx], edx
// 0088ed2f  8b5004               mov edx, dword ptr [eax + 4]
// 0088ed32  895104               mov dword ptr [ecx + 4], edx
// 0088ed35  8b5008               mov edx, dword ptr [eax + 8]
// 0088ed38  8b400c               mov eax, dword ptr [eax + 0xc]
// 0088ed3b  895108               mov dword ptr [ecx + 8], edx
// 0088ed3e  89410c               mov dword ptr [ecx + 0xc], eax
// 0088ed41  8d4c2448             lea ecx, [esp + 0x48]
// 0088ed45  51                   push ecx
// 0088ed46  55                   push ebp
// 0088ed47  8bcf                 mov ecx, edi
// 0088ed49  e892e20500           call 0x8ecfe0
// 0088ed4e  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0088ed52  8344242806           add dword ptr [esp + 0x28], 6
// 0088ed57  8bcf                 mov ecx, edi
// 0088ed59  e842720100           call 0x8a5fa0
// 0088ed5e  85c0                 test eax, eax
// 0088ed60  740b                 je 0x88ed6d
// 0088ed62  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0088ed68  8b4040               mov eax, dword ptr [eax + 0x40]
// 0088ed6b  eb02                 jmp 0x88ed6f
// 0088ed6d  33c0                 xor eax, eax
// 0088ed6f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0088ed73  8d4402fe             lea eax, [edx + eax - 2]
// 0088ed77  8bcf                 mov ecx, edi
// 0088ed79  8944242c             mov dword ptr [esp + 0x2c], eax
// 0088ed7d  e80e790100           call 0x8a6690
// 0088ed82  85c0                 test eax, eax
// 0088ed84  744f                 je 0x88edd5
// 0088ed86  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 0088ed8c  8b4018               mov eax, dword ptr [eax + 0x18]
// 0088ed8f  50                   push eax
// 0088ed90  8bcf                 mov ecx, edi
// 0088ed92  e8d9e8f8ff           call 0x81d670
// 0088ed97  50                   push eax
// 0088ed98  51                   push ecx
// 0088ed99  83c608               add esi, 8
// 0088ed9c  8bcc                 mov ecx, esp
// 0088ed9e  89642430             mov dword ptr [esp + 0x30], esp
// 0088eda2  56                   push esi
// 0088eda3  ff15e42da400         call dword ptr [0xa42de4]
// 0088eda9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0088edad  8b542438             mov edx, dword ptr [esp + 0x38]
// 0088edb1  83ec10               sub esp, 0x10
// 0088edb4  8bc4                 mov eax, esp
// 0088edb6  8908                 mov dword ptr [eax], ecx
// 0088edb8  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0088edbc  895004               mov dword ptr [eax + 4], edx
// 0088edbf  8b542450             mov edx, dword ptr [esp + 0x50]
// 0088edc3  894808               mov dword ptr [eax + 8], ecx
// 0088edc6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0088edca  55                   push ebp
// 0088edcb  89500c               mov dword ptr [eax + 0xc], edx
// 0088edce  e8eddcffff           call 0x88cac0
// 0088edd3  eb2b                 jmp 0x88ee00
// 0088edd5  8d7e08               lea edi, [esi + 8]
// 0088edd8  8b7500               mov esi, dword ptr [ebp]
// 0088eddb  6824880000           push 0x8824
// 0088ede0  8d44242c             lea eax, [esp + 0x2c]
// 0088ede4  50                   push eax
// 0088ede5  8bcf                 mov ecx, edi
// 0088ede7  83c670               add esi, 0x70
// 0088edea  ff15a826a400         call dword ptr [0xa426a8]
// 0088edf0  50                   push eax
// 0088edf1  8bcf                 mov ecx, edi
// 0088edf3  ff15c82da400         call dword ptr [0xa42dc8]
// 0088edf9  8b16                 mov edx, dword ptr [esi]
// 0088edfb  50                   push eax
// 0088edfc  8bcd                 mov ecx, ebp
// 0088edfe  ffd2                 call edx
// 0088ee00  8b442468             mov eax, dword ptr [esp + 0x68]
// 0088ee04  40                   inc eax
// 0088ee05  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0088ee09  89442468             mov dword ptr [esp + 0x68], eax
// 0088ee0d  0f8c54feffff         jl 0x88ec67
// 0088ee13  8d4c2438             lea ecx, [esp + 0x38]
// 0088ee17  c7442460ffffffff     mov dword ptr [esp + 0x60], 0xffffffff
// 0088ee1f  e87ce3fcff           call 0x85d1a0
// 0088ee24  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 0088ee28  64890d00000000       mov dword ptr fs:[0], ecx
// 0088ee2f  59                   pop ecx
// 0088ee30  5f                   pop edi
// 0088ee31  5e                   pop esi
// 0088ee32  5d                   pop ebp
// 0088ee33  5b                   pop ebx
// 0088ee34  83c450               add esp, 0x50
// 0088ee37  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameContextHeaders@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@PAVCXTPRibbonTabContextHeaders@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp