// roc 2010-06 0057ee70  unit: seg_00570000  size: 630 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057ee70
//
// 0057ee70  83ec34               sub esp, 0x34
// 0057ee73  53                   push ebx
// 0057ee74  55                   push ebp
// 0057ee75  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0057ee79  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0057ee7f  8b8d88010000         mov ecx, dword ptr [ebp + 0x188]
// 0057ee85  8b9d38010000         mov ebx, dword ptr [ebp + 0x138]
// 0057ee8b  56                   push esi
// 0057ee8c  be01000000           mov esi, 1
// 0057ee91  2bc6                 sub eax, esi
// 0057ee93  89442434             mov dword ptr [esp + 0x34], eax
// 0057ee97  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0057ee9a  2bde                 sub ebx, esi
// 0057ee9c  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0057ee9f  57                   push edi
// 0057eea0  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057eea4  895c2434             mov dword ptr [esp + 0x34], ebx
// 0057eea8  89442410             mov dword ptr [esp + 0x10], eax
// 0057eeac  0f8d97010000         jge 0x57f049
// 0057eeb2  8b7914               mov edi, dword ptr [ecx + 0x14]
// 0057eeb5  897c2414             mov dword ptr [esp + 0x14], edi
// 0057eeb9  3bfb                 cmp edi, ebx
// 0057eebb  0f8772010000         ja 0x57f033
// 0057eec1  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 0057eec7  8d7120               lea esi, [ecx + 0x20]
// 0057eeca  8b0e                 mov ecx, dword ptr [esi]
// 0057eecc  c1e007               shl eax, 7
// 0057eecf  50                   push eax
// 0057eed0  51                   push ecx
// 0057eed1  e80ae5feff           call 0x56d3e0
// 0057eed6  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0057eedc  8b4204               mov eax, dword ptr [edx + 4]
// 0057eedf  56                   push esi
// 0057eee0  55                   push ebp
// 0057eee1  ffd0                 call eax
// 0057eee3  83c410               add esp, 0x10
// 0057eee6  84c0                 test al, al
// 0057eee8  0f849b010000         je 0x57f089
// 0057eeee  33c9                 xor ecx, ecx
// 0057eef0  398d24010000         cmp dword ptr [ebp + 0x124], ecx
// 0057eef6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057eefa  894c2430             mov dword ptr [esp + 0x30], ecx
// 0057eefe  0f8e15010000         jle 0x57f019
// 0057ef04  8d9528010000         lea edx, [ebp + 0x128]
// 0057ef0a  89542420             mov dword ptr [esp + 0x20], edx
// 0057ef0e  8bff                 mov edi, edi
// 0057ef10  8b442420             mov eax, dword ptr [esp + 0x20]
// 0057ef14  8b30                 mov esi, dword ptr [eax]
// 0057ef16  807e3000             cmp byte ptr [esi + 0x30], 0
// 0057ef1a  750c                 jne 0x57ef28
// 0057ef1c  034e3c               add ecx, dword ptr [esi + 0x3c]
// 0057ef1f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057ef23  e9cf000000           jmp 0x57eff7
// 0057ef28  8b4604               mov eax, dword ptr [esi + 4]
// 0057ef2b  8b959c010000         mov edx, dword ptr [ebp + 0x19c]
// 0057ef31  03c0                 add eax, eax
// 0057ef33  03c0                 add eax, eax
// 0057ef35  8b540204             mov edx, dword ptr [edx + eax + 4]
// 0057ef39  8954243c             mov dword ptr [esp + 0x3c], edx
// 0057ef3d  3bfb                 cmp edi, ebx
// 0057ef3f  7305                 jae 0x57ef46
// 0057ef41  8b5634               mov edx, dword ptr [esi + 0x34]
// 0057ef44  eb03                 jmp 0x57ef49
// 0057ef46  8b5644               mov edx, dword ptr [esi + 0x44]
// 0057ef49  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0057ef4d  8b0438               mov eax, dword ptr [eax + edi]
// 0057ef50  8b7e40               mov edi, dword ptr [esi + 0x40]
// 0057ef53  0faf7c2414           imul edi, dword ptr [esp + 0x14]
// 0057ef58  89542424             mov dword ptr [esp + 0x24], edx
// 0057ef5c  8b5624               mov edx, dword ptr [esi + 0x24]
// 0057ef5f  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0057ef64  8d1c90               lea ebx, [eax + edx*4]
// 0057ef67  33c0                 xor eax, eax
// 0057ef69  394638               cmp dword ptr [esi + 0x38], eax
// 0057ef6c  897c2440             mov dword ptr [esp + 0x40], edi
// 0057ef70  8944242c             mov dword ptr [esp + 0x2c], eax
// 0057ef74  0f8e7d000000         jle 0x57eff7
// 0057ef7a  8d9b00000000         lea ebx, [ebx]
// 0057ef80  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057ef84  399580000000         cmp dword ptr [ebp + 0x80], edx
// 0057ef8a  720b                 jb 0x57ef97
// 0057ef8c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057ef90  03d0                 add edx, eax
// 0057ef92  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0057ef95  7d49                 jge 0x57efe0
// 0057ef97  8b542424             mov edx, dword ptr [esp + 0x24]
// 0057ef9b  85d2                 test edx, edx
// 0057ef9d  7e41                 jle 0x57efe0
// 0057ef9f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057efa3  8d6c8820             lea ebp, [eax + ecx*4 + 0x20]
// 0057efa7  89542428             mov dword ptr [esp + 0x28], edx
// 0057efab  eb03                 jmp 0x57efb0
// 0057efad  8d4900               lea ecx, [ecx]
// 0057efb0  8b4d00               mov ecx, dword ptr [ebp]
// 0057efb3  8b542448             mov edx, dword ptr [esp + 0x48]
// 0057efb7  57                   push edi
// 0057efb8  53                   push ebx
// 0057efb9  51                   push ecx
// 0057efba  56                   push esi
// 0057efbb  52                   push edx
// 0057efbc  ff542450             call dword ptr [esp + 0x50]
// 0057efc0  037e24               add edi, dword ptr [esi + 0x24]
// 0057efc3  83c414               add esp, 0x14
// 0057efc6  83c504               add ebp, 4
// 0057efc9  836c242801           sub dword ptr [esp + 0x28], 1
// 0057efce  75e0                 jne 0x57efb0
// 0057efd0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057efd4  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0057efd8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057efdc  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0057efe0  034e34               add ecx, dword ptr [esi + 0x34]
// 0057efe3  8b5624               mov edx, dword ptr [esi + 0x24]
// 0057efe6  40                   inc eax
// 0057efe7  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0057efea  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0057efee  8d1c93               lea ebx, [ebx + edx*4]
// 0057eff1  8944242c             mov dword ptr [esp + 0x2c], eax
// 0057eff5  7c89                 jl 0x57ef80
// 0057eff7  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057effb  8344242004           add dword ptr [esp + 0x20], 4
// 0057f000  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0057f004  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057f008  40                   inc eax
// 0057f009  3b8524010000         cmp eax, dword ptr [ebp + 0x124]
// 0057f00f  89442430             mov dword ptr [esp + 0x30], eax
// 0057f013  0f8cf7feffff         jl 0x57ef10
// 0057f019  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057f01d  47                   inc edi
// 0057f01e  897c2414             mov dword ptr [esp + 0x14], edi
// 0057f022  3bfb                 cmp edi, ebx
// 0057f024  0f8697feffff         jbe 0x57eec1
// 0057f02a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057f02e  be01000000           mov esi, 1
// 0057f033  03c6                 add eax, esi
// 0057f035  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0057f03c  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0057f03f  89442410             mov dword ptr [esp + 0x10], eax
// 0057f043  0f8c69feffff         jl 0x57eeb2
// 0057f049  01b580000000         add dword ptr [ebp + 0x80], esi
// 0057f04f  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 0057f055  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 0057f05b  01b588000000         add dword ptr [ebp + 0x88], esi
// 0057f061  3bca                 cmp ecx, edx
// 0057f063  7365                 jae 0x57f0ca
// 0057f065  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0057f06b  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 0057f071  7e2e                 jle 0x57f0a1
// 0057f073  5f                   pop edi
// 0057f074  89701c               mov dword ptr [eax + 0x1c], esi
// 0057f077  33c9                 xor ecx, ecx
// 0057f079  5e                   pop esi
// 0057f07a  5d                   pop ebp
// 0057f07b  894814               mov dword ptr [eax + 0x14], ecx
// 0057f07e  894818               mov dword ptr [eax + 0x18], ecx
// 0057f081  8d4103               lea eax, [ecx + 3]
// 0057f084  5b                   pop ebx
// 0057f085  83c434               add esp, 0x34
// 0057f088  c3                   ret 
// 0057f089  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057f08d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057f091  897814               mov dword ptr [eax + 0x14], edi
// 0057f094  5f                   pop edi
// 0057f095  5e                   pop esi
// 0057f096  5d                   pop ebp
// 0057f097  894818               mov dword ptr [eax + 0x18], ecx
// 0057f09a  33c0                 xor eax, eax
// 0057f09c  5b                   pop ebx
// 0057f09d  83c434               add esp, 0x34
// 0057f0a0  c3                   ret 
// 0057f0a1  4a                   dec edx
// 0057f0a2  3bca                 cmp ecx, edx
// 0057f0a4  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0057f0aa  7305                 jae 0x57f0b1
// 0057f0ac  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0057f0af  eb03                 jmp 0x57f0b4
// 0057f0b1  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 0057f0b4  5f                   pop edi
// 0057f0b5  89481c               mov dword ptr [eax + 0x1c], ecx
// 0057f0b8  33c9                 xor ecx, ecx
// 0057f0ba  5e                   pop esi
// 0057f0bb  5d                   pop ebp
// 0057f0bc  894814               mov dword ptr [eax + 0x14], ecx
// 0057f0bf  894818               mov dword ptr [eax + 0x18], ecx
// 0057f0c2  8d4103               lea eax, [ecx + 3]
// 0057f0c5  5b                   pop ebx
// 0057f0c6  83c434               add esp, 0x34
// 0057f0c9  c3                   ret 
// 0057f0ca  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0057f0d0  8b420c               mov eax, dword ptr [edx + 0xc]
// 0057f0d3  55                   push ebp
// 0057f0d4  ffd0                 call eax
// 0057f0d6  83c404               add esp, 4
// 0057f0d9  5f                   pop edi
// 0057f0da  5e                   pop esi
// 0057f0db  5d                   pop ebp
// 0057f0dc  b804000000           mov eax, 4
// 0057f0e1  5b                   pop ebx
// 0057f0e2  83c434               add esp, 0x34
// 0057f0e5  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_onepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
