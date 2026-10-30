// roc 2009-12 0061d310  unit: seg_00610000  size: 630 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061d310
//
// 0061d310  83ec34               sub esp, 0x34
// 0061d313  53                   push ebx
// 0061d314  55                   push ebp
// 0061d315  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0061d319  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0061d31f  8b8d88010000         mov ecx, dword ptr [ebp + 0x188]
// 0061d325  8b9d38010000         mov ebx, dword ptr [ebp + 0x138]
// 0061d32b  56                   push esi
// 0061d32c  be01000000           mov esi, 1
// 0061d331  2bc6                 sub eax, esi
// 0061d333  89442434             mov dword ptr [esp + 0x34], eax
// 0061d337  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0061d33a  2bde                 sub ebx, esi
// 0061d33c  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0061d33f  57                   push edi
// 0061d340  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061d344  895c2434             mov dword ptr [esp + 0x34], ebx
// 0061d348  89442410             mov dword ptr [esp + 0x10], eax
// 0061d34c  0f8d97010000         jge 0x61d4e9
// 0061d352  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0061d355  897c2414             mov dword ptr [esp + 0x14], edi
// 0061d359  3bfb                 cmp edi, ebx
// 0061d35b  0f8772010000         ja 0x61d4d3
// 0061d361  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 0061d367  8d7120               lea esi, [ecx + 0x20]
// 0061d36a  8b0e                 mov ecx, dword ptr [esi]
// 0061d36c  c1e007               shl eax, 7
// 0061d36f  50                   push eax
// 0061d370  51                   push ecx
// 0061d371  e88ae9feff           call 0x60bd00
// 0061d376  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0061d37c  8b4204               mov eax, dword ptr [edx + 4]
// 0061d37f  56                   push esi
// 0061d380  55                   push ebp
// 0061d381  ffd0                 call eax
// 0061d383  83c410               add esp, 0x10
// 0061d386  84c0                 test al, al
// 0061d388  0f849b010000         je 0x61d529
// 0061d38e  33c9                 xor ecx, ecx
// 0061d390  398d24010000         cmp dword ptr [ebp + 0x124], ecx
// 0061d396  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0061d39a  894c2430             mov dword ptr [esp + 0x30], ecx
// 0061d39e  0f8e15010000         jle 0x61d4b9
// 0061d3a4  8d9528010000         lea edx, [ebp + 0x128]
// 0061d3aa  89542420             mov dword ptr [esp + 0x20], edx
// 0061d3ae  8bff                 mov edi, edi
// 0061d3b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 0061d3b4  8b30                 mov esi, dword ptr [eax]
// 0061d3b6  807e3000             cmp byte ptr [esi + 0x30], 0
// 0061d3ba  750c                 jne 0x61d3c8
// 0061d3bc  034e3c               add ecx, dword ptr [esi + 0x3c]
// 0061d3bf  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0061d3c3  e9cf000000           jmp 0x61d497
// 0061d3c8  8b4604               mov eax, dword ptr [esi + 4]
// 0061d3cb  8b959c010000         mov edx, dword ptr [ebp + 0x19c]
// 0061d3d1  03c0                 add eax, eax
// 0061d3d3  03c0                 add eax, eax
// 0061d3d5  8b540204             mov edx, dword ptr [edx + eax + 4]
// 0061d3d9  8954243c             mov dword ptr [esp + 0x3c], edx
// 0061d3dd  3bfb                 cmp edi, ebx
// 0061d3df  7305                 jae 0x61d3e6
// 0061d3e1  8b5634               mov edx, dword ptr [esi + 0x34]
// 0061d3e4  eb03                 jmp 0x61d3e9
// 0061d3e6  8b5644               mov edx, dword ptr [esi + 0x44]
// 0061d3e9  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0061d3ed  8b0438               mov eax, dword ptr [eax + edi]
// 0061d3f0  8b7e40               mov edi, dword ptr [esi + 0x40]
// 0061d3f3  0faf7c2414           imul edi, dword ptr [esp + 0x14]
// 0061d3f8  89542424             mov dword ptr [esp + 0x24], edx
// 0061d3fc  8b5624               mov edx, dword ptr [esi + 0x24]
// 0061d3ff  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0061d404  8d1c90               lea ebx, [eax + edx*4]
// 0061d407  33c0                 xor eax, eax
// 0061d409  394638               cmp dword ptr [esi + 0x38], eax
// 0061d40c  897c2440             mov dword ptr [esp + 0x40], edi
// 0061d410  8944242c             mov dword ptr [esp + 0x2c], eax
// 0061d414  0f8e7d000000         jle 0x61d497
// 0061d41a  8d9b00000000         lea ebx, [ebx]
// 0061d420  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061d424  399580000000         cmp dword ptr [ebp + 0x80], edx
// 0061d42a  720b                 jb 0x61d437
// 0061d42c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0061d430  03d0                 add edx, eax
// 0061d432  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0061d435  7d49                 jge 0x61d480
// 0061d437  8b542424             mov edx, dword ptr [esp + 0x24]
// 0061d43b  85d2                 test edx, edx
// 0061d43d  7e41                 jle 0x61d480
// 0061d43f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061d443  8d6c8820             lea ebp, [eax + ecx*4 + 0x20]
// 0061d447  89542428             mov dword ptr [esp + 0x28], edx
// 0061d44b  eb03                 jmp 0x61d450
// 0061d44d  8d4900               lea ecx, [ecx]
// 0061d450  8b4d00               mov ecx, dword ptr [ebp]
// 0061d453  8b542448             mov edx, dword ptr [esp + 0x48]
// 0061d457  57                   push edi
// 0061d458  53                   push ebx
// 0061d459  51                   push ecx
// 0061d45a  56                   push esi
// 0061d45b  52                   push edx
// 0061d45c  ff542450             call dword ptr [esp + 0x50]
// 0061d460  037e24               add edi, dword ptr [esi + 0x24]
// 0061d463  83c414               add esp, 0x14
// 0061d466  83c504               add ebp, 4
// 0061d469  836c242801           sub dword ptr [esp + 0x28], 1
// 0061d46e  75e0                 jne 0x61d450
// 0061d470  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0061d474  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0061d478  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061d47c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0061d480  034e34               add ecx, dword ptr [esi + 0x34]
// 0061d483  8b5624               mov edx, dword ptr [esi + 0x24]
// 0061d486  40                   inc eax
// 0061d487  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0061d48a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0061d48e  8d1c93               lea ebx, [ebx + edx*4]
// 0061d491  8944242c             mov dword ptr [esp + 0x2c], eax
// 0061d495  7c89                 jl 0x61d420
// 0061d497  8b442430             mov eax, dword ptr [esp + 0x30]
// 0061d49b  8344242004           add dword ptr [esp + 0x20], 4
// 0061d4a0  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0061d4a4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061d4a8  40                   inc eax
// 0061d4a9  3b8524010000         cmp eax, dword ptr [ebp + 0x124]
// 0061d4af  89442430             mov dword ptr [esp + 0x30], eax
// 0061d4b3  0f8cf7feffff         jl 0x61d3b0
// 0061d4b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061d4bd  47                   inc edi
// 0061d4be  897c2414             mov dword ptr [esp + 0x14], edi
// 0061d4c2  3bfb                 cmp edi, ebx
// 0061d4c4  0f8697feffff         jbe 0x61d361
// 0061d4ca  8b442410             mov eax, dword ptr [esp + 0x10]
// 0061d4ce  be01000000           mov esi, 1
// 0061d4d3  03c6                 add eax, esi
// 0061d4d5  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0061d4dc  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0061d4df  89442410             mov dword ptr [esp + 0x10], eax
// 0061d4e3  0f8c69feffff         jl 0x61d352
// 0061d4e9  01b580000000         add dword ptr [ebp + 0x80], esi
// 0061d4ef  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 0061d4f5  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 0061d4fb  01b588000000         add dword ptr [ebp + 0x88], esi
// 0061d501  3bca                 cmp ecx, edx
// 0061d503  7365                 jae 0x61d56a
// 0061d505  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0061d50b  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 0061d511  7e2e                 jle 0x61d541
// 0061d513  5f                   pop edi
// 0061d514  89701c               mov dword ptr [eax + 0x1c], esi
// 0061d517  33c9                 xor ecx, ecx
// 0061d519  5e                   pop esi
// 0061d51a  5d                   pop ebp
// 0061d51b  894814               mov dword ptr [eax + 0x14], ecx
// 0061d51e  894818               mov dword ptr [eax + 0x18], ecx
// 0061d521  8d4103               lea eax, [ecx + 3]
// 0061d524  5b                   pop ebx
// 0061d525  83c434               add esp, 0x34
// 0061d528  c3                   ret 
// 0061d529  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061d52d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061d531  897814               mov dword ptr [eax + 0x14], edi
// 0061d534  5f                   pop edi
// 0061d535  5e                   pop esi
// 0061d536  5d                   pop ebp
// 0061d537  894818               mov dword ptr [eax + 0x18], ecx
// 0061d53a  33c0                 xor eax, eax
// 0061d53c  5b                   pop ebx
// 0061d53d  83c434               add esp, 0x34
// 0061d540  c3                   ret 
// 0061d541  4a                   dec edx
// 0061d542  3bca                 cmp ecx, edx
// 0061d544  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0061d54a  7305                 jae 0x61d551
// 0061d54c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0061d54f  eb03                 jmp 0x61d554
// 0061d551  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 0061d554  5f                   pop edi
// 0061d555  89481c               mov dword ptr [eax + 0x1c], ecx
// 0061d558  33c9                 xor ecx, ecx
// 0061d55a  5e                   pop esi
// 0061d55b  5d                   pop ebp
// 0061d55c  894814               mov dword ptr [eax + 0x14], ecx
// 0061d55f  894818               mov dword ptr [eax + 0x18], ecx
// 0061d562  8d4103               lea eax, [ecx + 3]
// 0061d565  5b                   pop ebx
// 0061d566  83c434               add esp, 0x34
// 0061d569  c3                   ret 
// 0061d56a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0061d570  8b420c               mov eax, dword ptr [edx + 0xc]
// 0061d573  55                   push ebp
// 0061d574  ffd0                 call eax
// 0061d576  83c404               add esp, 4
// 0061d579  5f                   pop edi
// 0061d57a  5e                   pop esi
// 0061d57b  5d                   pop ebp
// 0061d57c  b804000000           mov eax, 4
// 0061d581  5b                   pop ebx
// 0061d582  83c434               add esp, 0x34
// 0061d585  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_onepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
