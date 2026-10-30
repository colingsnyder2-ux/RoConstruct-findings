// roc 2009-12 0061cfe0  unit: seg_00610000  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061cfe0
//
// 0061cfe0  56                   push esi
// 0061cfe1  57                   push edi
// 0061cfe2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0061cfe6  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0061cfec  807e3000             cmp byte ptr [esi + 0x30], 0
// 0061cff0  7526                 jne 0x61d018
// 0061cff2  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0061cff5  8b548e38             mov edx, dword ptr [esi + ecx*4 + 0x38]
// 0061cff9  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0061cfff  8b400c               mov eax, dword ptr [eax + 0xc]
// 0061d002  52                   push edx
// 0061d003  57                   push edi
// 0061d004  ffd0                 call eax
// 0061d006  83c408               add esp, 8
// 0061d009  85c0                 test eax, eax
// 0061d00b  0f8404010000         je 0x61d115
// 0061d011  ff464c               inc dword ptr [esi + 0x4c]
// 0061d014  c6463001             mov byte ptr [esi + 0x30], 1
// 0061d018  8b4644               mov eax, dword ptr [esi + 0x44]
// 0061d01b  83e800               sub eax, 0
// 0061d01e  53                   push ebx
// 0061d01f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0061d023  55                   push ebp
// 0061d024  7457                 je 0x61d07d
// 0061d026  83e801               sub eax, 1
// 0061d029  747e                 je 0x61d0a9
// 0061d02b  83e801               sub eax, 1
// 0061d02e  0f85df000000         jne 0x61d113
// 0061d034  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061d038  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061d03c  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 0061d042  53                   push ebx
// 0061d043  52                   push edx
// 0061d044  8b5648               mov edx, dword ptr [esi + 0x48]
// 0061d047  50                   push eax
// 0061d048  8b4640               mov eax, dword ptr [esi + 0x40]
// 0061d04b  52                   push edx
// 0061d04c  8b548638             mov edx, dword ptr [esi + eax*4 + 0x38]
// 0061d050  8b4104               mov eax, dword ptr [ecx + 4]
// 0061d053  8d6e34               lea ebp, [esi + 0x34]
// 0061d056  55                   push ebp
// 0061d057  52                   push edx
// 0061d058  57                   push edi
// 0061d059  ffd0                 call eax
// 0061d05b  8b4d00               mov ecx, dword ptr [ebp]
// 0061d05e  83c41c               add esp, 0x1c
// 0061d061  3b4e48               cmp ecx, dword ptr [esi + 0x48]
// 0061d064  0f82a9000000         jb 0x61d113
// 0061d06a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0061d06e  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0061d075  391a                 cmp dword ptr [edx], ebx
// 0061d077  0f8396000000         jae 0x61d113
// 0061d07d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0061d080  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0061d087  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0061d08d  48                   dec eax
// 0061d08e  894648               mov dword ptr [esi + 0x48], eax
// 0061d091  3b8f1c010000         cmp ecx, dword ptr [edi + 0x11c]
// 0061d097  7509                 jne 0x61d0a2
// 0061d099  57                   push edi
// 0061d09a  e831feffff           call 0x61ced0
// 0061d09f  83c404               add esp, 4
// 0061d0a2  c7464401000000       mov dword ptr [esi + 0x44], 1
// 0061d0a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061d0ad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061d0b1  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0061d0b7  53                   push ebx
// 0061d0b8  50                   push eax
// 0061d0b9  8b4648               mov eax, dword ptr [esi + 0x48]
// 0061d0bc  51                   push ecx
// 0061d0bd  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0061d0c0  50                   push eax
// 0061d0c1  8b448e38             mov eax, dword ptr [esi + ecx*4 + 0x38]
// 0061d0c5  8b4a04               mov ecx, dword ptr [edx + 4]
// 0061d0c8  8d6e34               lea ebp, [esi + 0x34]
// 0061d0cb  55                   push ebp
// 0061d0cc  50                   push eax
// 0061d0cd  57                   push edi
// 0061d0ce  ffd1                 call ecx
// 0061d0d0  8b5500               mov edx, dword ptr [ebp]
// 0061d0d3  83c41c               add esp, 0x1c
// 0061d0d6  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0061d0d9  7238                 jb 0x61d113
// 0061d0db  bb01000000           mov ebx, 1
// 0061d0e0  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 0061d0e3  7509                 jne 0x61d0ee
// 0061d0e5  57                   push edi
// 0061d0e6  e805fdffff           call 0x61cdf0
// 0061d0eb  83c404               add esp, 4
// 0061d0ee  315e40               xor dword ptr [esi + 0x40], ebx
// 0061d0f1  c6463000             mov byte ptr [esi + 0x30], 0
// 0061d0f5  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0061d0fb  03c3                 add eax, ebx
// 0061d0fd  894500               mov dword ptr [ebp], eax
// 0061d100  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 0061d106  83c102               add ecx, 2
// 0061d109  894e48               mov dword ptr [esi + 0x48], ecx
// 0061d10c  c7464402000000       mov dword ptr [esi + 0x44], 2
// 0061d113  5d                   pop ebp
// 0061d114  5b                   pop ebx
// 0061d115  5f                   pop edi
// 0061d116  5e                   pop esi
// 0061d117  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_context_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
