// from server: 100% by auto
// roc 2010-06 0057eb40  unit: seg_00570000  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057eb40
//
// 0057eb40  56                   push esi
// 0057eb41  57                   push edi
// 0057eb42  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057eb46  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0057eb4c  807e3000             cmp byte ptr [esi + 0x30], 0
// 0057eb50  7526                 jne 0x57eb78
// 0057eb52  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0057eb55  8b548e38             mov edx, dword ptr [esi + ecx*4 + 0x38]
// 0057eb59  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0057eb5f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057eb62  52                   push edx
// 0057eb63  57                   push edi
// 0057eb64  ffd0                 call eax
// 0057eb66  83c408               add esp, 8
// 0057eb69  85c0                 test eax, eax
// 0057eb6b  0f8404010000         je 0x57ec75
// 0057eb71  ff464c               inc dword ptr [esi + 0x4c]
// 0057eb74  c6463001             mov byte ptr [esi + 0x30], 1
// 0057eb78  8b4644               mov eax, dword ptr [esi + 0x44]
// 0057eb7b  83e800               sub eax, 0
// 0057eb7e  53                   push ebx
// 0057eb7f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057eb83  55                   push ebp
// 0057eb84  7457                 je 0x57ebdd
// 0057eb86  83e801               sub eax, 1
// 0057eb89  747e                 je 0x57ec09
// 0057eb8b  83e801               sub eax, 1
// 0057eb8e  0f85df000000         jne 0x57ec73
// 0057eb94  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057eb98  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057eb9c  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 0057eba2  53                   push ebx
// 0057eba3  52                   push edx
// 0057eba4  8b5648               mov edx, dword ptr [esi + 0x48]
// 0057eba7  50                   push eax
// 0057eba8  8b4640               mov eax, dword ptr [esi + 0x40]
// 0057ebab  52                   push edx
// 0057ebac  8b548638             mov edx, dword ptr [esi + eax*4 + 0x38]
// 0057ebb0  8b4104               mov eax, dword ptr [ecx + 4]
// 0057ebb3  8d6e34               lea ebp, [esi + 0x34]
// 0057ebb6  55                   push ebp
// 0057ebb7  52                   push edx
// 0057ebb8  57                   push edi
// 0057ebb9  ffd0                 call eax
// 0057ebbb  8b4d00               mov ecx, dword ptr [ebp]
// 0057ebbe  83c41c               add esp, 0x1c
// 0057ebc1  3b4e48               cmp ecx, dword ptr [esi + 0x48]
// 0057ebc4  0f82a9000000         jb 0x57ec73
// 0057ebca  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057ebce  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0057ebd5  391a                 cmp dword ptr [edx], ebx
// 0057ebd7  0f8396000000         jae 0x57ec73
// 0057ebdd  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0057ebe0  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0057ebe7  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0057ebed  48                   dec eax
// 0057ebee  894648               mov dword ptr [esi + 0x48], eax
// 0057ebf1  3b8f1c010000         cmp ecx, dword ptr [edi + 0x11c]
// 0057ebf7  7509                 jne 0x57ec02
// 0057ebf9  57                   push edi
// 0057ebfa  e831feffff           call 0x57ea30
// 0057ebff  83c404               add esp, 4
// 0057ec02  c7464401000000       mov dword ptr [esi + 0x44], 1
// 0057ec09  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057ec0d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057ec11  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0057ec17  53                   push ebx
// 0057ec18  50                   push eax
// 0057ec19  8b4648               mov eax, dword ptr [esi + 0x48]
// 0057ec1c  51                   push ecx
// 0057ec1d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0057ec20  50                   push eax
// 0057ec21  8b448e38             mov eax, dword ptr [esi + ecx*4 + 0x38]
// 0057ec25  8b4a04               mov ecx, dword ptr [edx + 4]
// 0057ec28  8d6e34               lea ebp, [esi + 0x34]
// 0057ec2b  55                   push ebp
// 0057ec2c  50                   push eax
// 0057ec2d  57                   push edi
// 0057ec2e  ffd1                 call ecx
// 0057ec30  8b5500               mov edx, dword ptr [ebp]
// 0057ec33  83c41c               add esp, 0x1c
// 0057ec36  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0057ec39  7238                 jb 0x57ec73
// 0057ec3b  bb01000000           mov ebx, 1
// 0057ec40  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 0057ec43  7509                 jne 0x57ec4e
// 0057ec45  57                   push edi
// 0057ec46  e805fdffff           call 0x57e950
// 0057ec4b  83c404               add esp, 4
// 0057ec4e  315e40               xor dword ptr [esi + 0x40], ebx
// 0057ec51  c6463000             mov byte ptr [esi + 0x30], 0
// 0057ec55  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0057ec5b  03c3                 add eax, ebx
// 0057ec5d  894500               mov dword ptr [ebp], eax
// 0057ec60  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 0057ec66  83c102               add ecx, 2
// 0057ec69  894e48               mov dword ptr [esi + 0x48], ecx
// 0057ec6c  c7464402000000       mov dword ptr [esi + 0x44], 2
// 0057ec73  5d                   pop ebp
// 0057ec74  5b                   pop ebx
// 0057ec75  5f                   pop edi
// 0057ec76  5e                   pop esi
// 0057ec77  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_context_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
