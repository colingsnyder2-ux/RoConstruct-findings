// roc 2007-03 0051f720  unit: seg_00510000  size: 319 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f720
//
// 0051f720  56                   push esi
// 0051f721  57                   push edi
// 0051f722  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0051f726  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0051f72c  807e3000             cmp byte ptr [esi + 0x30], 0
// 0051f730  7527                 jne 0x51f759
// 0051f732  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0051f735  8b548e38             mov edx, dword ptr [esi + ecx*4 + 0x38]
// 0051f739  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0051f73f  8b400c               mov eax, dword ptr [eax + 0xc]
// 0051f742  52                   push edx
// 0051f743  57                   push edi
// 0051f744  ffd0                 call eax
// 0051f746  83c408               add esp, 8
// 0051f749  85c0                 test eax, eax
// 0051f74b  0f840b010000         je 0x51f85c
// 0051f751  83464c01             add dword ptr [esi + 0x4c], 1
// 0051f755  c6463001             mov byte ptr [esi + 0x30], 1
// 0051f759  8b4644               mov eax, dword ptr [esi + 0x44]
// 0051f75c  83e800               sub eax, 0
// 0051f75f  53                   push ebx
// 0051f760  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0051f764  55                   push ebp
// 0051f765  745b                 je 0x51f7c2
// 0051f767  83e801               sub eax, 1
// 0051f76a  0f8480000000         je 0x51f7f0
// 0051f770  83e801               sub eax, 1
// 0051f773  0f85e1000000         jne 0x51f85a
// 0051f779  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051f77d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051f781  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 0051f787  53                   push ebx
// 0051f788  52                   push edx
// 0051f789  8b5648               mov edx, dword ptr [esi + 0x48]
// 0051f78c  50                   push eax
// 0051f78d  8b4640               mov eax, dword ptr [esi + 0x40]
// 0051f790  52                   push edx
// 0051f791  8b548638             mov edx, dword ptr [esi + eax*4 + 0x38]
// 0051f795  8b4104               mov eax, dword ptr [ecx + 4]
// 0051f798  8d6e34               lea ebp, [esi + 0x34]
// 0051f79b  55                   push ebp
// 0051f79c  52                   push edx
// 0051f79d  57                   push edi
// 0051f79e  ffd0                 call eax
// 0051f7a0  8b4d00               mov ecx, dword ptr [ebp]
// 0051f7a3  83c41c               add esp, 0x1c
// 0051f7a6  3b4e48               cmp ecx, dword ptr [esi + 0x48]
// 0051f7a9  0f82ab000000         jb 0x51f85a
// 0051f7af  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0051f7b3  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0051f7ba  391a                 cmp dword ptr [edx], ebx
// 0051f7bc  0f8398000000         jae 0x51f85a
// 0051f7c2  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0051f7c5  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0051f7cc  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0051f7d2  83e801               sub eax, 1
// 0051f7d5  894648               mov dword ptr [esi + 0x48], eax
// 0051f7d8  3b8f1c010000         cmp ecx, dword ptr [edi + 0x11c]
// 0051f7de  7509                 jne 0x51f7e9
// 0051f7e0  57                   push edi
// 0051f7e1  e81afeffff           call 0x51f600
// 0051f7e6  83c404               add esp, 4
// 0051f7e9  c7464401000000       mov dword ptr [esi + 0x44], 1
// 0051f7f0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051f7f4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051f7f8  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0051f7fe  53                   push ebx
// 0051f7ff  50                   push eax
// 0051f800  8b4648               mov eax, dword ptr [esi + 0x48]
// 0051f803  51                   push ecx
// 0051f804  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0051f807  50                   push eax
// 0051f808  8b448e38             mov eax, dword ptr [esi + ecx*4 + 0x38]
// 0051f80c  8b4a04               mov ecx, dword ptr [edx + 4]
// 0051f80f  8d6e34               lea ebp, [esi + 0x34]
// 0051f812  55                   push ebp
// 0051f813  50                   push eax
// 0051f814  57                   push edi
// 0051f815  ffd1                 call ecx
// 0051f817  8b5500               mov edx, dword ptr [ebp]
// 0051f81a  83c41c               add esp, 0x1c
// 0051f81d  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0051f820  7238                 jb 0x51f85a
// 0051f822  bb01000000           mov ebx, 1
// 0051f827  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 0051f82a  7509                 jne 0x51f835
// 0051f82c  57                   push edi
// 0051f82d  e8eefcffff           call 0x51f520
// 0051f832  83c404               add esp, 4
// 0051f835  315e40               xor dword ptr [esi + 0x40], ebx
// 0051f838  c6463000             mov byte ptr [esi + 0x30], 0
// 0051f83c  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0051f842  03c3                 add eax, ebx
// 0051f844  894500               mov dword ptr [ebp], eax
// 0051f847  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 0051f84d  83c102               add ecx, 2
// 0051f850  894e48               mov dword ptr [esi + 0x48], ecx
// 0051f853  c7464402000000       mov dword ptr [esi + 0x44], 2
// 0051f85a  5d                   pop ebp
// 0051f85b  5b                   pop ebx
// 0051f85c  5f                   pop edi
// 0051f85d  5e                   pop esi
// 0051f85e  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_context_main)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
