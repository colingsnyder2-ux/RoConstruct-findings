// roc 2011-06 0057b1b0  unit: seg_00570000  size: 649 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057b1b0
//
// 0057b1b0  83ec2c               sub esp, 0x2c
// 0057b1b3  53                   push ebx
// 0057b1b4  55                   push ebp
// 0057b1b5  56                   push esi
// 0057b1b6  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0057b1ba  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0057b1c0  8bae48010000         mov ebp, dword ptr [esi + 0x148]
// 0057b1c6  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0057b1cc  48                   dec eax
// 0057b1cd  89442430             mov dword ptr [esp + 0x30], eax
// 0057b1d1  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0057b1d4  49                   dec ecx
// 0057b1d5  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 0057b1d8  57                   push edi
// 0057b1d9  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057b1dd  89442410             mov dword ptr [esp + 0x10], eax
// 0057b1e1  7c33                 jl 0x57b216
// 0057b1e3  ff4508               inc dword ptr [ebp + 8]
// 0057b1e6  83bee400000001       cmp dword ptr [esi + 0xe4], 1
// 0057b1ed  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 0057b1f3  0f8e11020000         jle 0x57b40a
// 0057b1f9  5f                   pop edi
// 0057b1fa  5e                   pop esi
// 0057b1fb  33c9                 xor ecx, ecx
// 0057b1fd  5d                   pop ebp
// 0057b1fe  c7401401000000       mov dword ptr [eax + 0x14], 1
// 0057b205  89480c               mov dword ptr [eax + 0xc], ecx
// 0057b208  894810               mov dword ptr [eax + 0x10], ecx
// 0057b20b  b001                 mov al, 1
// 0057b20d  5b                   pop ebx
// 0057b20e  83c42c               add esp, 0x2c
// 0057b211  c3                   ret 
// 0057b212  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057b216  8b5d0c               mov ebx, dword ptr [ebp + 0xc]
// 0057b219  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057b21d  3bd9                 cmp ebx, ecx
// 0057b21f  0f87b7010000         ja 0x57b3dc
// 0057b225  eb09                 jmp 0x57b230
// 0057b227  8da42400000000       lea esp, [esp]
// 0057b22e  8bff                 mov edi, edi
// 0057b230  33ff                 xor edi, edi
// 0057b232  39bee4000000         cmp dword ptr [esi + 0xe4], edi
// 0057b238  897c242c             mov dword ptr [esp + 0x2c], edi
// 0057b23c  0f8e70010000         jle 0x57b3b2
// 0057b242  81c6e8000000         add esi, 0xe8
// 0057b248  89742430             mov dword ptr [esp + 0x30], esi
// 0057b24c  8d642400             lea esp, [esp]
// 0057b250  8b36                 mov esi, dword ptr [esi]
// 0057b252  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 0057b256  7305                 jae 0x57b25d
// 0057b258  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0057b25b  eb03                 jmp 0x57b260
// 0057b25d  8b5e44               mov ebx, dword ptr [esi + 0x44]
// 0057b260  8b4640               mov eax, dword ptr [esi + 0x40]
// 0057b263  0faf442414           imul eax, dword ptr [esp + 0x14]
// 0057b268  89442438             mov dword ptr [esp + 0x38], eax
// 0057b26c  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057b270  03c0                 add eax, eax
// 0057b272  03c0                 add eax, eax
// 0057b274  03c0                 add eax, eax
// 0057b276  837e3800             cmp dword ptr [esi + 0x38], 0
// 0057b27a  895c2424             mov dword ptr [esp + 0x24], ebx
// 0057b27e  89442418             mov dword ptr [esp + 0x18], eax
// 0057b282  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0057b28a  0f8ef8000000         jle 0x57b388
// 0057b290  8b4634               mov eax, dword ptr [esi + 0x34]
// 0057b293  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057b297  394d08               cmp dword ptr [ebp + 8], ecx
// 0057b29a  7252                 jb 0x57b2ee
// 0057b29c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057b2a0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057b2a4  03d1                 add edx, ecx
// 0057b2a6  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0057b2a9  7c43                 jl 0x57b2ee
// 0057b2ab  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 0057b2af  c1e007               shl eax, 7
// 0057b2b2  50                   push eax
// 0057b2b3  52                   push edx
// 0057b2b4  e887cbfeff           call 0x567e40
// 0057b2b9  33c0                 xor eax, eax
// 0057b2bb  83c408               add esp, 8
// 0057b2be  394634               cmp dword ptr [esi + 0x34], eax
// 0057b2c1  0f8ea5000000         jle 0x57b36c
// 0057b2c7  8d4cbd18             lea ecx, [ebp + edi*4 + 0x18]
// 0057b2cb  eb03                 jmp 0x57b2d0
// 0057b2cd  8d4900               lea ecx, [ecx]
// 0057b2d0  8b54bd14             mov edx, dword ptr [ebp + edi*4 + 0x14]
// 0057b2d4  8b19                 mov ebx, dword ptr [ecx]
// 0057b2d6  668b12               mov dx, word ptr [edx]
// 0057b2d9  40                   inc eax
// 0057b2da  668913               mov word ptr [ebx], dx
// 0057b2dd  83c104               add ecx, 4
// 0057b2e0  3b4634               cmp eax, dword ptr [esi + 0x34]
// 0057b2e3  7ceb                 jl 0x57b2d0
// 0057b2e5  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0057b2e9  e97e000000           jmp 0x57b36c
// 0057b2ee  8b442440             mov eax, dword ptr [esp + 0x40]
// 0057b2f2  8b8858010000         mov ecx, dword ptr [eax + 0x158]
// 0057b2f8  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057b2fc  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057b300  53                   push ebx
// 0057b301  52                   push edx
// 0057b302  8b54bd18             mov edx, dword ptr [ebp + edi*4 + 0x18]
// 0057b306  50                   push eax
// 0057b307  8b4604               mov eax, dword ptr [esi + 4]
// 0057b30a  52                   push edx
// 0057b30b  8b542454             mov edx, dword ptr [esp + 0x54]
// 0057b30f  8b0482               mov eax, dword ptr [edx + eax*4]
// 0057b312  8b542450             mov edx, dword ptr [esp + 0x50]
// 0057b316  50                   push eax
// 0057b317  8b4104               mov eax, dword ptr [ecx + 4]
// 0057b31a  56                   push esi
// 0057b31b  52                   push edx
// 0057b31c  ffd0                 call eax
// 0057b31e  8b4634               mov eax, dword ptr [esi + 0x34]
// 0057b321  83c41c               add esp, 0x1c
// 0057b324  3bd8                 cmp ebx, eax
// 0057b326  7d44                 jge 0x57b36c
// 0057b328  2bc3                 sub eax, ebx
// 0057b32a  c1e007               shl eax, 7
// 0057b32d  8d0c3b               lea ecx, [ebx + edi]
// 0057b330  8b548d18             mov edx, dword ptr [ebp + ecx*4 + 0x18]
// 0057b334  50                   push eax
// 0057b335  52                   push edx
// 0057b336  e805cbfeff           call 0x567e40
// 0057b33b  83c408               add esp, 8
// 0057b33e  3b5e34               cmp ebx, dword ptr [esi + 0x34]
// 0057b341  895c2428             mov dword ptr [esp + 0x28], ebx
// 0057b345  7d25                 jge 0x57b36c
// 0057b347  8d043b               lea eax, [ebx + edi]
// 0057b34a  8d448518             lea eax, [ebp + eax*4 + 0x18]
// 0057b34e  8bff                 mov edi, edi
// 0057b350  8b48fc               mov ecx, dword ptr [eax - 4]
// 0057b353  668b09               mov cx, word ptr [ecx]
// 0057b356  8b10                 mov edx, dword ptr [eax]
// 0057b358  66890a               mov word ptr [edx], cx
// 0057b35b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0057b35f  41                   inc ecx
// 0057b360  83c004               add eax, 4
// 0057b363  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 0057b366  894c2428             mov dword ptr [esp + 0x28], ecx
// 0057b36a  7ce4                 jl 0x57b350
// 0057b36c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057b370  8b4634               mov eax, dword ptr [esi + 0x34]
// 0057b373  8344241808           add dword ptr [esp + 0x18], 8
// 0057b378  41                   inc ecx
// 0057b379  03f8                 add edi, eax
// 0057b37b  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 0057b37e  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057b382  0f8c0bffffff         jl 0x57b293
// 0057b388  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057b38c  8b742430             mov esi, dword ptr [esp + 0x30]
// 0057b390  8b542440             mov edx, dword ptr [esp + 0x40]
// 0057b394  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0057b398  40                   inc eax
// 0057b399  83c604               add esi, 4
// 0057b39c  3b82e4000000         cmp eax, dword ptr [edx + 0xe4]
// 0057b3a2  8944242c             mov dword ptr [esp + 0x2c], eax
// 0057b3a6  89742430             mov dword ptr [esp + 0x30], esi
// 0057b3aa  0f8ca0feffff         jl 0x57b250
// 0057b3b0  8bf2                 mov esi, edx
// 0057b3b2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 0057b3b8  8b5104               mov edx, dword ptr [ecx + 4]
// 0057b3bb  8d4518               lea eax, [ebp + 0x18]
// 0057b3be  50                   push eax
// 0057b3bf  56                   push esi
// 0057b3c0  ffd2                 call edx
// 0057b3c2  83c408               add esp, 8
// 0057b3c5  84c0                 test al, al
// 0057b3c7  742d                 je 0x57b3f6
// 0057b3c9  43                   inc ebx
// 0057b3ca  895c2414             mov dword ptr [esp + 0x14], ebx
// 0057b3ce  3b5c2420             cmp ebx, dword ptr [esp + 0x20]
// 0057b3d2  0f8658feffff         jbe 0x57b230
// 0057b3d8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057b3dc  40                   inc eax
// 0057b3dd  c7450c00000000       mov dword ptr [ebp + 0xc], 0
// 0057b3e4  3b4514               cmp eax, dword ptr [ebp + 0x14]
// 0057b3e7  89442410             mov dword ptr [esp + 0x10], eax
// 0057b3eb  0f8c21feffff         jl 0x57b212
// 0057b3f1  e9edfdffff           jmp 0x57b1e3
// 0057b3f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057b3fa  5f                   pop edi
// 0057b3fb  5e                   pop esi
// 0057b3fc  894510               mov dword ptr [ebp + 0x10], eax
// 0057b3ff  895d0c               mov dword ptr [ebp + 0xc], ebx
// 0057b402  5d                   pop ebp
// 0057b403  32c0                 xor al, al
// 0057b405  5b                   pop ebx
// 0057b406  83c42c               add esp, 0x2c
// 0057b409  c3                   ret 
// 0057b40a  8b8ee0000000         mov ecx, dword ptr [esi + 0xe0]
// 0057b410  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 0057b416  49                   dec ecx
// 0057b417  394808               cmp dword ptr [eax + 8], ecx
// 0057b41a  7305                 jae 0x57b421
// 0057b41c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0057b41f  eb03                 jmp 0x57b424
// 0057b421  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 0057b424  5f                   pop edi
// 0057b425  894814               mov dword ptr [eax + 0x14], ecx
// 0057b428  5e                   pop esi
// 0057b429  33c9                 xor ecx, ecx
// 0057b42b  5d                   pop ebp
// 0057b42c  89480c               mov dword ptr [eax + 0xc], ecx
// 0057b42f  894810               mov dword ptr [eax + 0x10], ecx
// 0057b432  b001                 mov al, 1
// 0057b434  5b                   pop ebx
// 0057b435  83c42c               add esp, 0x2c
// 0057b438  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
