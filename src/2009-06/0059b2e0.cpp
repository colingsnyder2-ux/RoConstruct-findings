// from server: 100% by auto
// roc 2009-06 0059b2e0  unit: seg_00590000  size: 630 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059b2e0
//
// 0059b2e0  83ec34               sub esp, 0x34
// 0059b2e3  53                   push ebx
// 0059b2e4  55                   push ebp
// 0059b2e5  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0059b2e9  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0059b2ef  8b8d88010000         mov ecx, dword ptr [ebp + 0x188]
// 0059b2f5  8b9d38010000         mov ebx, dword ptr [ebp + 0x138]
// 0059b2fb  56                   push esi
// 0059b2fc  be01000000           mov esi, 1
// 0059b301  2bc6                 sub eax, esi
// 0059b303  89442434             mov dword ptr [esp + 0x34], eax
// 0059b307  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0059b30a  2bde                 sub ebx, esi
// 0059b30c  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0059b30f  57                   push edi
// 0059b310  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059b314  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059b318  89442410             mov dword ptr [esp + 0x10], eax
// 0059b31c  0f8d97010000         jge 0x59b4b9
// 0059b322  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0059b325  897c2414             mov dword ptr [esp + 0x14], edi
// 0059b329  3bfb                 cmp edi, ebx
// 0059b32b  0f8772010000         ja 0x59b4a3
// 0059b331  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 0059b337  8d7120               lea esi, [ecx + 0x20]
// 0059b33a  8b0e                 mov ecx, dword ptr [esi]
// 0059b33c  c1e007               shl eax, 7
// 0059b33f  50                   push eax
// 0059b340  51                   push ecx
// 0059b341  e86aebfeff           call 0x589eb0
// 0059b346  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0059b34c  8b4204               mov eax, dword ptr [edx + 4]
// 0059b34f  56                   push esi
// 0059b350  55                   push ebp
// 0059b351  ffd0                 call eax
// 0059b353  83c410               add esp, 0x10
// 0059b356  84c0                 test al, al
// 0059b358  0f849b010000         je 0x59b4f9
// 0059b35e  33c9                 xor ecx, ecx
// 0059b360  398d24010000         cmp dword ptr [ebp + 0x124], ecx
// 0059b366  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0059b36a  894c2430             mov dword ptr [esp + 0x30], ecx
// 0059b36e  0f8e15010000         jle 0x59b489
// 0059b374  8d9528010000         lea edx, [ebp + 0x128]
// 0059b37a  89542420             mov dword ptr [esp + 0x20], edx
// 0059b37e  8bff                 mov edi, edi
// 0059b380  8b442420             mov eax, dword ptr [esp + 0x20]
// 0059b384  8b30                 mov esi, dword ptr [eax]
// 0059b386  807e3000             cmp byte ptr [esi + 0x30], 0
// 0059b38a  750c                 jne 0x59b398
// 0059b38c  034e3c               add ecx, dword ptr [esi + 0x3c]
// 0059b38f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0059b393  e9cf000000           jmp 0x59b467
// 0059b398  8b4604               mov eax, dword ptr [esi + 4]
// 0059b39b  8b959c010000         mov edx, dword ptr [ebp + 0x19c]
// 0059b3a1  03c0                 add eax, eax
// 0059b3a3  03c0                 add eax, eax
// 0059b3a5  8b540204             mov edx, dword ptr [edx + eax + 4]
// 0059b3a9  8954243c             mov dword ptr [esp + 0x3c], edx
// 0059b3ad  3bfb                 cmp edi, ebx
// 0059b3af  7305                 jae 0x59b3b6
// 0059b3b1  8b5634               mov edx, dword ptr [esi + 0x34]
// 0059b3b4  eb03                 jmp 0x59b3b9
// 0059b3b6  8b5644               mov edx, dword ptr [esi + 0x44]
// 0059b3b9  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0059b3bd  8b0438               mov eax, dword ptr [eax + edi]
// 0059b3c0  8b7e40               mov edi, dword ptr [esi + 0x40]
// 0059b3c3  0faf7c2414           imul edi, dword ptr [esp + 0x14]
// 0059b3c8  89542424             mov dword ptr [esp + 0x24], edx
// 0059b3cc  8b5624               mov edx, dword ptr [esi + 0x24]
// 0059b3cf  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0059b3d4  8d1c90               lea ebx, [eax + edx*4]
// 0059b3d7  33c0                 xor eax, eax
// 0059b3d9  394638               cmp dword ptr [esi + 0x38], eax
// 0059b3dc  897c2440             mov dword ptr [esp + 0x40], edi
// 0059b3e0  8944242c             mov dword ptr [esp + 0x2c], eax
// 0059b3e4  0f8e7d000000         jle 0x59b467
// 0059b3ea  8d9b00000000         lea ebx, [ebx]
// 0059b3f0  8b542438             mov edx, dword ptr [esp + 0x38]
// 0059b3f4  399580000000         cmp dword ptr [ebp + 0x80], edx
// 0059b3fa  720b                 jb 0x59b407
// 0059b3fc  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059b400  03d0                 add edx, eax
// 0059b402  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0059b405  7d49                 jge 0x59b450
// 0059b407  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059b40b  85d2                 test edx, edx
// 0059b40d  7e41                 jle 0x59b450
// 0059b40f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059b413  8d6c8820             lea ebp, [eax + ecx*4 + 0x20]
// 0059b417  89542428             mov dword ptr [esp + 0x28], edx
// 0059b41b  eb03                 jmp 0x59b420
// 0059b41d  8d4900               lea ecx, [ecx]
// 0059b420  8b4d00               mov ecx, dword ptr [ebp]
// 0059b423  8b542448             mov edx, dword ptr [esp + 0x48]
// 0059b427  57                   push edi
// 0059b428  53                   push ebx
// 0059b429  51                   push ecx
// 0059b42a  56                   push esi
// 0059b42b  52                   push edx
// 0059b42c  ff542450             call dword ptr [esp + 0x50]
// 0059b430  037e24               add edi, dword ptr [esi + 0x24]
// 0059b433  83c414               add esp, 0x14
// 0059b436  83c504               add ebp, 4
// 0059b439  836c242801           sub dword ptr [esp + 0x28], 1
// 0059b43e  75e0                 jne 0x59b420
// 0059b440  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059b444  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0059b448  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059b44c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0059b450  034e34               add ecx, dword ptr [esi + 0x34]
// 0059b453  8b5624               mov edx, dword ptr [esi + 0x24]
// 0059b456  40                   inc eax
// 0059b457  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0059b45a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0059b45e  8d1c93               lea ebx, [ebx + edx*4]
// 0059b461  8944242c             mov dword ptr [esp + 0x2c], eax
// 0059b465  7c89                 jl 0x59b3f0
// 0059b467  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059b46b  8344242004           add dword ptr [esp + 0x20], 4
// 0059b470  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0059b474  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059b478  40                   inc eax
// 0059b479  3b8524010000         cmp eax, dword ptr [ebp + 0x124]
// 0059b47f  89442430             mov dword ptr [esp + 0x30], eax
// 0059b483  0f8cf7feffff         jl 0x59b380
// 0059b489  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059b48d  47                   inc edi
// 0059b48e  897c2414             mov dword ptr [esp + 0x14], edi
// 0059b492  3bfb                 cmp edi, ebx
// 0059b494  0f8697feffff         jbe 0x59b331
// 0059b49a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0059b49e  be01000000           mov esi, 1
// 0059b4a3  03c6                 add eax, esi
// 0059b4a5  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0059b4ac  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0059b4af  89442410             mov dword ptr [esp + 0x10], eax
// 0059b4b3  0f8c69feffff         jl 0x59b322
// 0059b4b9  01b580000000         add dword ptr [ebp + 0x80], esi
// 0059b4bf  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 0059b4c5  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 0059b4cb  01b588000000         add dword ptr [ebp + 0x88], esi
// 0059b4d1  3bca                 cmp ecx, edx
// 0059b4d3  7365                 jae 0x59b53a
// 0059b4d5  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0059b4db  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 0059b4e1  7e2e                 jle 0x59b511
// 0059b4e3  5f                   pop edi
// 0059b4e4  89701c               mov dword ptr [eax + 0x1c], esi
// 0059b4e7  33c9                 xor ecx, ecx
// 0059b4e9  5e                   pop esi
// 0059b4ea  5d                   pop ebp
// 0059b4eb  894814               mov dword ptr [eax + 0x14], ecx
// 0059b4ee  894818               mov dword ptr [eax + 0x18], ecx
// 0059b4f1  8d4103               lea eax, [ecx + 3]
// 0059b4f4  5b                   pop ebx
// 0059b4f5  83c434               add esp, 0x34
// 0059b4f8  c3                   ret 
// 0059b4f9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0059b4fd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059b501  897814               mov dword ptr [eax + 0x14], edi
// 0059b504  5f                   pop edi
// 0059b505  5e                   pop esi
// 0059b506  5d                   pop ebp
// 0059b507  894818               mov dword ptr [eax + 0x18], ecx
// 0059b50a  33c0                 xor eax, eax
// 0059b50c  5b                   pop ebx
// 0059b50d  83c434               add esp, 0x34
// 0059b510  c3                   ret 
// 0059b511  4a                   dec edx
// 0059b512  3bca                 cmp ecx, edx
// 0059b514  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0059b51a  7305                 jae 0x59b521
// 0059b51c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0059b51f  eb03                 jmp 0x59b524
// 0059b521  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 0059b524  5f                   pop edi
// 0059b525  89481c               mov dword ptr [eax + 0x1c], ecx
// 0059b528  33c9                 xor ecx, ecx
// 0059b52a  5e                   pop esi
// 0059b52b  5d                   pop ebp
// 0059b52c  894814               mov dword ptr [eax + 0x14], ecx
// 0059b52f  894818               mov dword ptr [eax + 0x18], ecx
// 0059b532  8d4103               lea eax, [ecx + 3]
// 0059b535  5b                   pop ebx
// 0059b536  83c434               add esp, 0x34
// 0059b539  c3                   ret 
// 0059b53a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0059b540  8b420c               mov eax, dword ptr [edx + 0xc]
// 0059b543  55                   push ebp
// 0059b544  ffd0                 call eax
// 0059b546  83c404               add esp, 4
// 0059b549  5f                   pop edi
// 0059b54a  5e                   pop esi
// 0059b54b  5d                   pop ebp
// 0059b54c  b804000000           mov eax, 4
// 0059b551  5b                   pop ebx
// 0059b552  83c434               add esp, 0x34
// 0059b555  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_onepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
