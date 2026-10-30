// from server: 100% by auto
// roc 2009-06 0059afb0  unit: seg_00590000  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059afb0
//
// 0059afb0  56                   push esi
// 0059afb1  57                   push edi
// 0059afb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059afb6  8bb784010000         mov esi, dword ptr [edi + 0x184]
// 0059afbc  807e3000             cmp byte ptr [esi + 0x30], 0
// 0059afc0  7526                 jne 0x59afe8
// 0059afc2  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0059afc5  8b548e38             mov edx, dword ptr [esi + ecx*4 + 0x38]
// 0059afc9  8b8788010000         mov eax, dword ptr [edi + 0x188]
// 0059afcf  8b400c               mov eax, dword ptr [eax + 0xc]
// 0059afd2  52                   push edx
// 0059afd3  57                   push edi
// 0059afd4  ffd0                 call eax
// 0059afd6  83c408               add esp, 8
// 0059afd9  85c0                 test eax, eax
// 0059afdb  0f8404010000         je 0x59b0e5
// 0059afe1  ff464c               inc dword ptr [esi + 0x4c]
// 0059afe4  c6463001             mov byte ptr [esi + 0x30], 1
// 0059afe8  8b4644               mov eax, dword ptr [esi + 0x44]
// 0059afeb  83e800               sub eax, 0
// 0059afee  53                   push ebx
// 0059afef  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0059aff3  55                   push ebp
// 0059aff4  7457                 je 0x59b04d
// 0059aff6  83e801               sub eax, 1
// 0059aff9  747e                 je 0x59b079
// 0059affb  83e801               sub eax, 1
// 0059affe  0f85df000000         jne 0x59b0e3
// 0059b004  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059b008  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059b00c  8b8f8c010000         mov ecx, dword ptr [edi + 0x18c]
// 0059b012  53                   push ebx
// 0059b013  52                   push edx
// 0059b014  8b5648               mov edx, dword ptr [esi + 0x48]
// 0059b017  50                   push eax
// 0059b018  8b4640               mov eax, dword ptr [esi + 0x40]
// 0059b01b  52                   push edx
// 0059b01c  8b548638             mov edx, dword ptr [esi + eax*4 + 0x38]
// 0059b020  8b4104               mov eax, dword ptr [ecx + 4]
// 0059b023  8d6e34               lea ebp, [esi + 0x34]
// 0059b026  55                   push ebp
// 0059b027  52                   push edx
// 0059b028  57                   push edi
// 0059b029  ffd0                 call eax
// 0059b02b  8b4d00               mov ecx, dword ptr [ebp]
// 0059b02e  83c41c               add esp, 0x1c
// 0059b031  3b4e48               cmp ecx, dword ptr [esi + 0x48]
// 0059b034  0f82a9000000         jb 0x59b0e3
// 0059b03a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059b03e  c7464400000000       mov dword ptr [esi + 0x44], 0
// 0059b045  391a                 cmp dword ptr [edx], ebx
// 0059b047  0f8396000000         jae 0x59b0e3
// 0059b04d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0059b050  c7463400000000       mov dword ptr [esi + 0x34], 0
// 0059b057  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0059b05d  48                   dec eax
// 0059b05e  894648               mov dword ptr [esi + 0x48], eax
// 0059b061  3b8f1c010000         cmp ecx, dword ptr [edi + 0x11c]
// 0059b067  7509                 jne 0x59b072
// 0059b069  57                   push edi
// 0059b06a  e831feffff           call 0x59aea0
// 0059b06f  83c404               add esp, 4
// 0059b072  c7464401000000       mov dword ptr [esi + 0x44], 1
// 0059b079  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059b07d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059b081  8b978c010000         mov edx, dword ptr [edi + 0x18c]
// 0059b087  53                   push ebx
// 0059b088  50                   push eax
// 0059b089  8b4648               mov eax, dword ptr [esi + 0x48]
// 0059b08c  51                   push ecx
// 0059b08d  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0059b090  50                   push eax
// 0059b091  8b448e38             mov eax, dword ptr [esi + ecx*4 + 0x38]
// 0059b095  8b4a04               mov ecx, dword ptr [edx + 4]
// 0059b098  8d6e34               lea ebp, [esi + 0x34]
// 0059b09b  55                   push ebp
// 0059b09c  50                   push eax
// 0059b09d  57                   push edi
// 0059b09e  ffd1                 call ecx
// 0059b0a0  8b5500               mov edx, dword ptr [ebp]
// 0059b0a3  83c41c               add esp, 0x1c
// 0059b0a6  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0059b0a9  7238                 jb 0x59b0e3
// 0059b0ab  bb01000000           mov ebx, 1
// 0059b0b0  395e4c               cmp dword ptr [esi + 0x4c], ebx
// 0059b0b3  7509                 jne 0x59b0be
// 0059b0b5  57                   push edi
// 0059b0b6  e805fdffff           call 0x59adc0
// 0059b0bb  83c404               add esp, 4
// 0059b0be  315e40               xor dword ptr [esi + 0x40], ebx
// 0059b0c1  c6463000             mov byte ptr [esi + 0x30], 0
// 0059b0c5  8b8718010000         mov eax, dword ptr [edi + 0x118]
// 0059b0cb  03c3                 add eax, ebx
// 0059b0cd  894500               mov dword ptr [ebp], eax
// 0059b0d0  8b8f18010000         mov ecx, dword ptr [edi + 0x118]
// 0059b0d6  83c102               add ecx, 2
// 0059b0d9  894e48               mov dword ptr [esi + 0x48], ecx
// 0059b0dc  c7464402000000       mov dword ptr [esi + 0x44], 2
// 0059b0e3  5d                   pop ebp
// 0059b0e4  5b                   pop ebx
// 0059b0e5  5f                   pop edi
// 0059b0e6  5e                   pop esi
// 0059b0e7  c3                   ret 
// library jpeg-6b/jdmainct.c (function _process_data_context_main)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
