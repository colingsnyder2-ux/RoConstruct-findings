// roc 2008-06 00531000  unit: seg_00530000  size: 630 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00531000
//
// 00531000  83ec34               sub esp, 0x34
// 00531003  53                   push ebx
// 00531004  55                   push ebp
// 00531005  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00531009  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0053100f  8b8d88010000         mov ecx, dword ptr [ebp + 0x188]
// 00531015  8b9d38010000         mov ebx, dword ptr [ebp + 0x138]
// 0053101b  56                   push esi
// 0053101c  be01000000           mov esi, 1
// 00531021  2bc6                 sub eax, esi
// 00531023  89442434             mov dword ptr [esp + 0x34], eax
// 00531027  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0053102a  2bde                 sub ebx, esi
// 0053102c  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0053102f  57                   push edi
// 00531030  894c2418             mov dword ptr [esp + 0x18], ecx
// 00531034  895c2434             mov dword ptr [esp + 0x34], ebx
// 00531038  89442410             mov dword ptr [esp + 0x10], eax
// 0053103c  0f8d97010000         jge 0x5311d9
// 00531042  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00531045  897c2414             mov dword ptr [esp + 0x14], edi
// 00531049  3bfb                 cmp edi, ebx
// 0053104b  0f8772010000         ja 0x5311c3
// 00531051  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 00531057  8d7120               lea esi, [ecx + 0x20]
// 0053105a  8b0e                 mov ecx, dword ptr [esi]
// 0053105c  c1e007               shl eax, 7
// 0053105f  50                   push eax
// 00531060  51                   push ecx
// 00531061  e83a4bffff           call 0x525ba0
// 00531066  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0053106c  8b4204               mov eax, dword ptr [edx + 4]
// 0053106f  56                   push esi
// 00531070  55                   push ebp
// 00531071  ffd0                 call eax
// 00531073  83c410               add esp, 0x10
// 00531076  84c0                 test al, al
// 00531078  0f849b010000         je 0x531219
// 0053107e  33c9                 xor ecx, ecx
// 00531080  398d24010000         cmp dword ptr [ebp + 0x124], ecx
// 00531086  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053108a  894c2430             mov dword ptr [esp + 0x30], ecx
// 0053108e  0f8e15010000         jle 0x5311a9
// 00531094  8d9528010000         lea edx, [ebp + 0x128]
// 0053109a  89542420             mov dword ptr [esp + 0x20], edx
// 0053109e  8bff                 mov edi, edi
// 005310a0  8b442420             mov eax, dword ptr [esp + 0x20]
// 005310a4  8b30                 mov esi, dword ptr [eax]
// 005310a6  807e3000             cmp byte ptr [esi + 0x30], 0
// 005310aa  750c                 jne 0x5310b8
// 005310ac  034e3c               add ecx, dword ptr [esi + 0x3c]
// 005310af  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005310b3  e9cf000000           jmp 0x531187
// 005310b8  8b4604               mov eax, dword ptr [esi + 4]
// 005310bb  8b959c010000         mov edx, dword ptr [ebp + 0x19c]
// 005310c1  03c0                 add eax, eax
// 005310c3  03c0                 add eax, eax
// 005310c5  8b540204             mov edx, dword ptr [edx + eax + 4]
// 005310c9  8954243c             mov dword ptr [esp + 0x3c], edx
// 005310cd  3bfb                 cmp edi, ebx
// 005310cf  7305                 jae 0x5310d6
// 005310d1  8b5634               mov edx, dword ptr [esi + 0x34]
// 005310d4  eb03                 jmp 0x5310d9
// 005310d6  8b5644               mov edx, dword ptr [esi + 0x44]
// 005310d9  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 005310dd  8b0438               mov eax, dword ptr [eax + edi]
// 005310e0  8b7e40               mov edi, dword ptr [esi + 0x40]
// 005310e3  0faf7c2414           imul edi, dword ptr [esp + 0x14]
// 005310e8  89542424             mov dword ptr [esp + 0x24], edx
// 005310ec  8b5624               mov edx, dword ptr [esi + 0x24]
// 005310ef  0faf542410           imul edx, dword ptr [esp + 0x10]
// 005310f4  8d1c90               lea ebx, [eax + edx*4]
// 005310f7  33c0                 xor eax, eax
// 005310f9  394638               cmp dword ptr [esi + 0x38], eax
// 005310fc  897c2440             mov dword ptr [esp + 0x40], edi
// 00531100  8944242c             mov dword ptr [esp + 0x2c], eax
// 00531104  0f8e7d000000         jle 0x531187
// 0053110a  8d9b00000000         lea ebx, [ebx]
// 00531110  8b542438             mov edx, dword ptr [esp + 0x38]
// 00531114  399580000000         cmp dword ptr [ebp + 0x80], edx
// 0053111a  720b                 jb 0x531127
// 0053111c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00531120  03d0                 add edx, eax
// 00531122  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00531125  7d49                 jge 0x531170
// 00531127  8b542424             mov edx, dword ptr [esp + 0x24]
// 0053112b  85d2                 test edx, edx
// 0053112d  7e41                 jle 0x531170
// 0053112f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00531133  8d6c8820             lea ebp, [eax + ecx*4 + 0x20]
// 00531137  89542428             mov dword ptr [esp + 0x28], edx
// 0053113b  eb03                 jmp 0x531140
// 0053113d  8d4900               lea ecx, [ecx]
// 00531140  8b4d00               mov ecx, dword ptr [ebp]
// 00531143  8b542448             mov edx, dword ptr [esp + 0x48]
// 00531147  57                   push edi
// 00531148  53                   push ebx
// 00531149  51                   push ecx
// 0053114a  56                   push esi
// 0053114b  52                   push edx
// 0053114c  ff542450             call dword ptr [esp + 0x50]
// 00531150  037e24               add edi, dword ptr [esi + 0x24]
// 00531153  83c414               add esp, 0x14
// 00531156  83c504               add ebp, 4
// 00531159  836c242801           sub dword ptr [esp + 0x28], 1
// 0053115e  75e0                 jne 0x531140
// 00531160  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00531164  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00531168  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053116c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00531170  034e34               add ecx, dword ptr [esi + 0x34]
// 00531173  8b5624               mov edx, dword ptr [esi + 0x24]
// 00531176  40                   inc eax
// 00531177  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0053117a  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0053117e  8d1c93               lea ebx, [ebx + edx*4]
// 00531181  8944242c             mov dword ptr [esp + 0x2c], eax
// 00531185  7c89                 jl 0x531110
// 00531187  8b442430             mov eax, dword ptr [esp + 0x30]
// 0053118b  8344242004           add dword ptr [esp + 0x20], 4
// 00531190  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00531194  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00531198  40                   inc eax
// 00531199  3b8524010000         cmp eax, dword ptr [ebp + 0x124]
// 0053119f  89442430             mov dword ptr [esp + 0x30], eax
// 005311a3  0f8cf7feffff         jl 0x5310a0
// 005311a9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005311ad  47                   inc edi
// 005311ae  897c2414             mov dword ptr [esp + 0x14], edi
// 005311b2  3bfb                 cmp edi, ebx
// 005311b4  0f8697feffff         jbe 0x531051
// 005311ba  8b442410             mov eax, dword ptr [esp + 0x10]
// 005311be  be01000000           mov esi, 1
// 005311c3  03c6                 add eax, esi
// 005311c5  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 005311cc  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 005311cf  89442410             mov dword ptr [esp + 0x10], eax
// 005311d3  0f8c69feffff         jl 0x531042
// 005311d9  01b580000000         add dword ptr [ebp + 0x80], esi
// 005311df  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 005311e5  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 005311eb  01b588000000         add dword ptr [ebp + 0x88], esi
// 005311f1  3bca                 cmp ecx, edx
// 005311f3  7365                 jae 0x53125a
// 005311f5  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 005311fb  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 00531201  7e2e                 jle 0x531231
// 00531203  5f                   pop edi
// 00531204  89701c               mov dword ptr [eax + 0x1c], esi
// 00531207  33c9                 xor ecx, ecx
// 00531209  5e                   pop esi
// 0053120a  5d                   pop ebp
// 0053120b  894814               mov dword ptr [eax + 0x14], ecx
// 0053120e  894818               mov dword ptr [eax + 0x18], ecx
// 00531211  8d4103               lea eax, [ecx + 3]
// 00531214  5b                   pop ebx
// 00531215  83c434               add esp, 0x34
// 00531218  c3                   ret 
// 00531219  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053121d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00531221  897814               mov dword ptr [eax + 0x14], edi
// 00531224  5f                   pop edi
// 00531225  5e                   pop esi
// 00531226  5d                   pop ebp
// 00531227  894818               mov dword ptr [eax + 0x18], ecx
// 0053122a  33c0                 xor eax, eax
// 0053122c  5b                   pop ebx
// 0053122d  83c434               add esp, 0x34
// 00531230  c3                   ret 
// 00531231  4a                   dec edx
// 00531232  3bca                 cmp ecx, edx
// 00531234  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0053123a  7305                 jae 0x531241
// 0053123c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0053123f  eb03                 jmp 0x531244
// 00531241  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00531244  5f                   pop edi
// 00531245  89481c               mov dword ptr [eax + 0x1c], ecx
// 00531248  33c9                 xor ecx, ecx
// 0053124a  5e                   pop esi
// 0053124b  5d                   pop ebp
// 0053124c  894814               mov dword ptr [eax + 0x14], ecx
// 0053124f  894818               mov dword ptr [eax + 0x18], ecx
// 00531252  8d4103               lea eax, [ecx + 3]
// 00531255  5b                   pop ebx
// 00531256  83c434               add esp, 0x34
// 00531259  c3                   ret 
// 0053125a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 00531260  8b420c               mov eax, dword ptr [edx + 0xc]
// 00531263  55                   push ebp
// 00531264  ffd0                 call eax
// 00531266  83c404               add esp, 4
// 00531269  5f                   pop edi
// 0053126a  5e                   pop esi
// 0053126b  5d                   pop ebp
// 0053126c  b804000000           mov eax, 4
// 00531271  5b                   pop ebx
// 00531272  83c434               add esp, 0x34
// 00531275  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_onepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
