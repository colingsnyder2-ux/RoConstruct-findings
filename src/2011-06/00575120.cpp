// roc 2011-06 00575120  unit: seg_00570000  size: 630 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00575120
//
// 00575120  83ec34               sub esp, 0x34
// 00575123  53                   push ebx
// 00575124  55                   push ebp
// 00575125  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00575129  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0057512f  8b8d88010000         mov ecx, dword ptr [ebp + 0x188]
// 00575135  8b9d38010000         mov ebx, dword ptr [ebp + 0x138]
// 0057513b  56                   push esi
// 0057513c  be01000000           mov esi, 1
// 00575141  2bc6                 sub eax, esi
// 00575143  89442434             mov dword ptr [esp + 0x34], eax
// 00575147  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0057514a  2bde                 sub ebx, esi
// 0057514c  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0057514f  57                   push edi
// 00575150  894c2418             mov dword ptr [esp + 0x18], ecx
// 00575154  895c2434             mov dword ptr [esp + 0x34], ebx
// 00575158  89442410             mov dword ptr [esp + 0x10], eax
// 0057515c  0f8d97010000         jge 0x5752f9
// 00575162  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00575165  897c2414             mov dword ptr [esp + 0x14], edi
// 00575169  3bfb                 cmp edi, ebx
// 0057516b  0f8772010000         ja 0x5752e3
// 00575171  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 00575177  8d7120               lea esi, [ecx + 0x20]
// 0057517a  8b0e                 mov ecx, dword ptr [esi]
// 0057517c  c1e007               shl eax, 7
// 0057517f  50                   push eax
// 00575180  51                   push ecx
// 00575181  e8ba2cffff           call 0x567e40
// 00575186  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0057518c  8b4204               mov eax, dword ptr [edx + 4]
// 0057518f  56                   push esi
// 00575190  55                   push ebp
// 00575191  ffd0                 call eax
// 00575193  83c410               add esp, 0x10
// 00575196  84c0                 test al, al
// 00575198  0f849b010000         je 0x575339
// 0057519e  33c9                 xor ecx, ecx
// 005751a0  398d24010000         cmp dword ptr [ebp + 0x124], ecx
// 005751a6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005751aa  894c2430             mov dword ptr [esp + 0x30], ecx
// 005751ae  0f8e15010000         jle 0x5752c9
// 005751b4  8d9528010000         lea edx, [ebp + 0x128]
// 005751ba  89542420             mov dword ptr [esp + 0x20], edx
// 005751be  8bff                 mov edi, edi
// 005751c0  8b442420             mov eax, dword ptr [esp + 0x20]
// 005751c4  8b30                 mov esi, dword ptr [eax]
// 005751c6  807e3000             cmp byte ptr [esi + 0x30], 0
// 005751ca  750c                 jne 0x5751d8
// 005751cc  034e3c               add ecx, dword ptr [esi + 0x3c]
// 005751cf  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005751d3  e9cf000000           jmp 0x5752a7
// 005751d8  8b4604               mov eax, dword ptr [esi + 4]
// 005751db  8b959c010000         mov edx, dword ptr [ebp + 0x19c]
// 005751e1  03c0                 add eax, eax
// 005751e3  03c0                 add eax, eax
// 005751e5  8b540204             mov edx, dword ptr [edx + eax + 4]
// 005751e9  8954243c             mov dword ptr [esp + 0x3c], edx
// 005751ed  3bfb                 cmp edi, ebx
// 005751ef  7305                 jae 0x5751f6
// 005751f1  8b5634               mov edx, dword ptr [esi + 0x34]
// 005751f4  eb03                 jmp 0x5751f9
// 005751f6  8b5644               mov edx, dword ptr [esi + 0x44]
// 005751f9  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 005751fd  8b0438               mov eax, dword ptr [eax + edi]
// 00575200  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00575203  0faf7c2414           imul edi, dword ptr [esp + 0x14]
// 00575208  89542424             mov dword ptr [esp + 0x24], edx
// 0057520c  8b5624               mov edx, dword ptr [esi + 0x24]
// 0057520f  0faf542410           imul edx, dword ptr [esp + 0x10]
// 00575214  8d1c90               lea ebx, [eax + edx*4]
// 00575217  33c0                 xor eax, eax
// 00575219  394638               cmp dword ptr [esi + 0x38], eax
// 0057521c  897c2440             mov dword ptr [esp + 0x40], edi
// 00575220  8944242c             mov dword ptr [esp + 0x2c], eax
// 00575224  0f8e7d000000         jle 0x5752a7
// 0057522a  8d9b00000000         lea ebx, [ebx]
// 00575230  8b542438             mov edx, dword ptr [esp + 0x38]
// 00575234  399580000000         cmp dword ptr [ebp + 0x80], edx
// 0057523a  720b                 jb 0x575247
// 0057523c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00575240  03d0                 add edx, eax
// 00575242  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00575245  7d49                 jge 0x575290
// 00575247  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057524b  85d2                 test edx, edx
// 0057524d  7e41                 jle 0x575290
// 0057524f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00575253  8d6c8820             lea ebp, [eax + ecx*4 + 0x20]
// 00575257  89542428             mov dword ptr [esp + 0x28], edx
// 0057525b  eb03                 jmp 0x575260
// 0057525d  8d4900               lea ecx, [ecx]
// 00575260  8b4d00               mov ecx, dword ptr [ebp]
// 00575263  8b542448             mov edx, dword ptr [esp + 0x48]
// 00575267  57                   push edi
// 00575268  53                   push ebx
// 00575269  51                   push ecx
// 0057526a  56                   push esi
// 0057526b  52                   push edx
// 0057526c  ff542450             call dword ptr [esp + 0x50]
// 00575270  037e24               add edi, dword ptr [esi + 0x24]
// 00575273  83c414               add esp, 0x14
// 00575276  83c504               add ebp, 4
// 00575279  836c242801           sub dword ptr [esp + 0x28], 1
// 0057527e  75e0                 jne 0x575260
// 00575280  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00575284  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00575288  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057528c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00575290  034e34               add ecx, dword ptr [esi + 0x34]
// 00575293  8b5624               mov edx, dword ptr [esi + 0x24]
// 00575296  40                   inc eax
// 00575297  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0057529a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057529e  8d1c93               lea ebx, [ebx + edx*4]
// 005752a1  8944242c             mov dword ptr [esp + 0x2c], eax
// 005752a5  7c89                 jl 0x575230
// 005752a7  8b442430             mov eax, dword ptr [esp + 0x30]
// 005752ab  8344242004           add dword ptr [esp + 0x20], 4
// 005752b0  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 005752b4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005752b8  40                   inc eax
// 005752b9  3b8524010000         cmp eax, dword ptr [ebp + 0x124]
// 005752bf  89442430             mov dword ptr [esp + 0x30], eax
// 005752c3  0f8cf7feffff         jl 0x5751c0
// 005752c9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005752cd  47                   inc edi
// 005752ce  897c2414             mov dword ptr [esp + 0x14], edi
// 005752d2  3bfb                 cmp edi, ebx
// 005752d4  0f8697feffff         jbe 0x575171
// 005752da  8b442410             mov eax, dword ptr [esp + 0x10]
// 005752de  be01000000           mov esi, 1
// 005752e3  03c6                 add eax, esi
// 005752e5  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 005752ec  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 005752ef  89442410             mov dword ptr [esp + 0x10], eax
// 005752f3  0f8c69feffff         jl 0x575162
// 005752f9  01b580000000         add dword ptr [ebp + 0x80], esi
// 005752ff  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 00575305  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 0057530b  01b588000000         add dword ptr [ebp + 0x88], esi
// 00575311  3bca                 cmp ecx, edx
// 00575313  7365                 jae 0x57537a
// 00575315  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0057531b  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 00575321  7e2e                 jle 0x575351
// 00575323  5f                   pop edi
// 00575324  89701c               mov dword ptr [eax + 0x1c], esi
// 00575327  33c9                 xor ecx, ecx
// 00575329  5e                   pop esi
// 0057532a  5d                   pop ebp
// 0057532b  894814               mov dword ptr [eax + 0x14], ecx
// 0057532e  894818               mov dword ptr [eax + 0x18], ecx
// 00575331  8d4103               lea eax, [ecx + 3]
// 00575334  5b                   pop ebx
// 00575335  83c434               add esp, 0x34
// 00575338  c3                   ret 
// 00575339  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057533d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00575341  897814               mov dword ptr [eax + 0x14], edi
// 00575344  5f                   pop edi
// 00575345  5e                   pop esi
// 00575346  5d                   pop ebp
// 00575347  894818               mov dword ptr [eax + 0x18], ecx
// 0057534a  33c0                 xor eax, eax
// 0057534c  5b                   pop ebx
// 0057534d  83c434               add esp, 0x34
// 00575350  c3                   ret 
// 00575351  4a                   dec edx
// 00575352  3bca                 cmp ecx, edx
// 00575354  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0057535a  7305                 jae 0x575361
// 0057535c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0057535f  eb03                 jmp 0x575364
// 00575361  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00575364  5f                   pop edi
// 00575365  89481c               mov dword ptr [eax + 0x1c], ecx
// 00575368  33c9                 xor ecx, ecx
// 0057536a  5e                   pop esi
// 0057536b  5d                   pop ebp
// 0057536c  894814               mov dword ptr [eax + 0x14], ecx
// 0057536f  894818               mov dword ptr [eax + 0x18], ecx
// 00575372  8d4103               lea eax, [ecx + 3]
// 00575375  5b                   pop ebx
// 00575376  83c434               add esp, 0x34
// 00575379  c3                   ret 
// 0057537a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 00575380  8b420c               mov eax, dword ptr [edx + 0xc]
// 00575383  55                   push ebp
// 00575384  ffd0                 call eax
// 00575386  83c404               add esp, 4
// 00575389  5f                   pop edi
// 0057538a  5e                   pop esi
// 0057538b  5d                   pop ebp
// 0057538c  b804000000           mov eax, 4
// 00575391  5b                   pop ebx
// 00575392  83c434               add esp, 0x34
// 00575395  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_onepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
