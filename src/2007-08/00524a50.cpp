// roc 2007-08 00524a50  unit: G3D::Line  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524a50
//
// 00524a50  56                   push esi
// 00524a51  57                   push edi
// 00524a52  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00524a56  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 00524a5c  807e3000             cmp byte ptr [esi + 0x30], 0
// 00524a60  7527                 jne 0x524a89
// 00524a62  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00524a65  8b548e38             mov edx, dword ptr [esi + ecx*4 + 0x38]
// 00524a69  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 00524a6f  8b400c               mov eax, dword ptr [eax + 0xc]
// 00524a72  52                   push edx
// 00524a73  57                   push edi
// 00524a74  ffd0                 call eax
// 00524a76  83c408               add esp, 8
// 00524a79  85c0                 test eax, eax
// 00524a7b  0f840b010000         je 0x524b8c
// 00524a81  83464c01             add dword ptr [esi + 0x4c], 1
// 00524a85  c6463001             mov byte ptr [esi + 0x30], 1
// 00524a89  8b4644               mov eax, dword ptr [esi + 0x44]
// 00524a8c  83e800               sub eax, 0
// 00524a8f  53                   push ebx
// 00524a90  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00524a94  55                   push ebp
// 00524a95  745b                 je 0x524af2
// 00524a97  83e801               sub eax, 1
// 00524a9a  0f8480000000         je 0x524b20
// 00524aa0  83e801               sub eax, 1
// 00524aa3  0f85e1000000         jne 0x524b8a
// 00524aa9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00524aad  8b442418             mov eax, dword ptr [esp + 0x18]
// 00524ab1  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 00524ab7  53                   push ebx
// 00524ab8  52                   push edx
// 00524ab9  8b5648               mov edx, dword ptr [esi + 0x48]
// 00524abc  50                   push eax
// 00524abd  8b4640               mov eax, dword ptr [esi + 0x40]
// 00524ac0  52                   push edx
// 00524ac1  8b548638             mov edx, dword ptr [esi + eax*4 + 0x38]
// 00524ac5  8b4104               mov eax, dword ptr [ecx + 4]
// 00524ac8  8d6e34               lea ebp, [esi + 0x34]
// 00524acb  55                   push ebp
// 00524acc  52                   push edx
// 00524acd  57                   push edi
// 00524ace  ffd0                 call eax
// 00524ad0  8b4d00               mov ecx, dword ptr [ebp]
// 00524ad3  83c41c               add esp, 0x1c
// 00524ad6  3b4e48               cmp ecx, dword ptr [esi + 0x48]
// 00524ad9  0f82ab000000         jb 0x524b8a
// 00524adf  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00524ae3  c7464400000000       mov dword ptr [esi + 0x44], 0
// 00524aea  391a                 cmp dword ptr [edx], ebx
// 00524aec  0f8398000000         jae 0x524b8a
// 00524af2  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00524af5  c7463400000000       mov dword ptr [esi + 0x34], 0
// 00524afc  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 00524b02  83e801               sub eax, 1
// 00524b05  894648               mov dword ptr [esi + 0x48], eax
// 00524b08  3b8f1c010000         cmp ecx, dword ptr [edi + 0x11c]
// 00524b0e  7509                 jne 0x524b19
// 00524b10  57                   push edi
// 00524b11  e81afeffff           call 0x524930
// 00524b16  83c404               add esp, 4
// 00524b19  c7464401000000       mov dword ptr [esi + 0x44], 1
// 00524b20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00524b24  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00524b28  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 00524b2e  53                   push ebx
// 00524b2f  50                   push eax
// 00524b30  8b4648               mov eax, dword ptr [esi + 0x48]
// 00524b33  51                   push ecx
// 00524b34  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 00524b37  50                   push eax
// 00524b38  8b448e38             mov eax, dword ptr [esi + ecx*4 + 0x38]
// 00524b3c  8b4a04               mov ecx, dword ptr [edx + 4]
// 00524b3f  8d6e34               lea ebp, [esi + 0x34]
// 00524b42  55                   push ebp
// 00524b43  50                   push eax
// 00524b44  57                   push edi
// 00524b45  ffd1                 call ecx
// 00524b47  8b5500               mov edx, dword ptr [ebp]
// 00524b4a  83c41c               add esp, 0x1c
// 00524b4d  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00524b50  7238                 jb 0x524b8a
// 00524b52  bb01000000           mov ebx, 1
// 00524b57  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 00524b5a  7509                 jne 0x524b65
// 00524b5c  57                   push edi
// 00524b5d  e8eefcffff           call 0x524850
// 00524b62  83c404               add esp, 4
// 00524b65  315e40               xor dword ptr [esi + 0x40], ebx
// 00524b68  c6463000             mov byte ptr [esi + 0x30], 0
// 00524b6c  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 00524b72  03c3                 add eax, ebx
// 00524b74  894500               mov dword ptr [ebp], eax
// 00524b77  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 00524b7d  83c102               add ecx, 2
// 00524b80  894e48               mov dword ptr [esi + 0x48], ecx
// 00524b83  c7464402000000       mov dword ptr [esi + 0x44], 2
// 00524b8a  5d                   pop ebp
// 00524b8b  5b                   pop ebx
// 00524b8c  5f                   pop edi
// 00524b8d  5e                   pop esi
// 00524b8e  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_context_main)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
