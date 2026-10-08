// roc 2007-03 0051fa60  unit: seg_00510000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051fa60
//
// 0051fa60  83ec34               sub esp, 0x34
// 0051fa63  53                   push ebx
// 0051fa64  55                   push ebp
// 0051fa65  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 0051fa69  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0051fa6f  8b9d38010000         mov ebx, dword ptr [ebp + 0x138]
// 0051fa75  83e801               sub eax, 1
// 0051fa78  56                   push esi
// 0051fa79  8bb588010000         mov esi, dword ptr [ebp + 0x188]
// 0051fa7f  89442434             mov dword ptr [esp + 0x34], eax
// 0051fa83  8b4618               mov eax, dword ptr [esi + 0x18]
// 0051fa86  83eb01               sub ebx, 1
// 0051fa89  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 0051fa8c  57                   push edi
// 0051fa8d  89742418             mov dword ptr [esp + 0x18], esi
// 0051fa91  895c2434             mov dword ptr [esp + 0x34], ebx
// 0051fa95  89442410             mov dword ptr [esp + 0x10], eax
// 0051fa99  0f8d9c010000         jge 0x51fc3b
// 0051fa9f  90                   nop 
// 0051faa0  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0051faa3  3bfb                 cmp edi, ebx
// 0051faa5  897c2414             mov dword ptr [esp + 0x14], edi
// 0051faa9  0f8775010000         ja 0x51fc24
// 0051faaf  90                   nop 
// 0051fab0  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 0051fab6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0051fab9  c1e007               shl eax, 7
// 0051fabc  83c620               add esi, 0x20
// 0051fabf  50                   push eax
// 0051fac0  51                   push ecx
// 0051fac1  e8ea4bffff           call 0x5146b0
// 0051fac6  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0051facc  8b4204               mov eax, dword ptr [edx + 4]
// 0051facf  56                   push esi
// 0051fad0  55                   push ebp
// 0051fad1  ffd0                 call eax
// 0051fad3  83c410               add esp, 0x10
// 0051fad6  84c0                 test al, al
// 0051fad8  0f848d010000         je 0x51fc6b
// 0051fade  33c9                 xor ecx, ecx
// 0051fae0  398d24010000         cmp dword ptr [ebp + 0x124], ecx
// 0051fae6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0051faea  894c2430             mov dword ptr [esp + 0x30], ecx
// 0051faee  0f8e19010000         jle 0x51fc0d
// 0051faf4  8d9528010000         lea edx, [ebp + 0x128]
// 0051fafa  89542420             mov dword ptr [esp + 0x20], edx
// 0051fafe  8bff                 mov edi, edi
// 0051fb00  8b442420             mov eax, dword ptr [esp + 0x20]
// 0051fb04  8b30                 mov esi, dword ptr [eax]
// 0051fb06  807e3000             cmp byte ptr [esi + 0x30], 0
// 0051fb0a  750c                 jne 0x51fb18
// 0051fb0c  034e3c               add ecx, dword ptr [esi + 0x3c]
// 0051fb0f  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0051fb13  e9d1000000           jmp 0x51fbe9
// 0051fb18  8b4604               mov eax, dword ptr [esi + 4]
// 0051fb1b  8b959c010000         mov edx, dword ptr [ebp + 0x19c]
// 0051fb21  03c0                 add eax, eax
// 0051fb23  03c0                 add eax, eax
// 0051fb25  3bfb                 cmp edi, ebx
// 0051fb27  8b540204             mov edx, dword ptr [edx + eax + 4]
// 0051fb2b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0051fb2f  7305                 jae 0x51fb36
// 0051fb31  8b5634               mov edx, dword ptr [esi + 0x34]
// 0051fb34  eb03                 jmp 0x51fb39
// 0051fb36  8b5644               mov edx, dword ptr [esi + 0x44]
// 0051fb39  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0051fb3d  8b0438               mov eax, dword ptr [eax + edi]
// 0051fb40  8b7e40               mov edi, dword ptr [esi + 0x40]
// 0051fb43  0faf7c2414           imul edi, dword ptr [esp + 0x14]
// 0051fb48  89542424             mov dword ptr [esp + 0x24], edx
// 0051fb4c  8b5624               mov edx, dword ptr [esi + 0x24]
// 0051fb4f  0faf542410           imul edx, dword ptr [esp + 0x10]
// 0051fb54  8d1c90               lea ebx, [eax + edx*4]
// 0051fb57  33c0                 xor eax, eax
// 0051fb59  394638               cmp dword ptr [esi + 0x38], eax
// 0051fb5c  897c2440             mov dword ptr [esp + 0x40], edi
// 0051fb60  8944242c             mov dword ptr [esp + 0x2c], eax
// 0051fb64  0f8e7f000000         jle 0x51fbe9
// 0051fb6a  8d9b00000000         lea ebx, [ebx]
// 0051fb70  8b542438             mov edx, dword ptr [esp + 0x38]
// 0051fb74  399580000000         cmp dword ptr [ebp + 0x80], edx
// 0051fb7a  720b                 jb 0x51fb87
// 0051fb7c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051fb80  03d0                 add edx, eax
// 0051fb82  3b5648               cmp edx, dword ptr [esi + 0x48]
// 0051fb85  7d49                 jge 0x51fbd0
// 0051fb87  8b542424             mov edx, dword ptr [esp + 0x24]
// 0051fb8b  85d2                 test edx, edx
// 0051fb8d  7e41                 jle 0x51fbd0
// 0051fb8f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051fb93  8d6c8820             lea ebp, [eax + ecx*4 + 0x20]
// 0051fb97  89542428             mov dword ptr [esp + 0x28], edx
// 0051fb9b  eb03                 jmp 0x51fba0
// 0051fb9d  8d4900               lea ecx, [ecx]
// 0051fba0  8b4d00               mov ecx, dword ptr [ebp]
// 0051fba3  8b542448             mov edx, dword ptr [esp + 0x48]
// 0051fba7  57                   push edi
// 0051fba8  53                   push ebx
// 0051fba9  51                   push ecx
// 0051fbaa  56                   push esi
// 0051fbab  52                   push edx
// 0051fbac  ff542450             call dword ptr [esp + 0x50]
// 0051fbb0  037e24               add edi, dword ptr [esi + 0x24]
// 0051fbb3  83c414               add esp, 0x14
// 0051fbb6  83c504               add ebp, 4
// 0051fbb9  836c242801           sub dword ptr [esp + 0x28], 1
// 0051fbbe  75e0                 jne 0x51fba0
// 0051fbc0  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0051fbc4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051fbc8  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 0051fbcc  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0051fbd0  034e34               add ecx, dword ptr [esi + 0x34]
// 0051fbd3  8b5624               mov edx, dword ptr [esi + 0x24]
// 0051fbd6  83c001               add eax, 1
// 0051fbd9  3b4638               cmp eax, dword ptr [esi + 0x38]
// 0051fbdc  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0051fbe0  8d1c93               lea ebx, [ebx + edx*4]
// 0051fbe3  8944242c             mov dword ptr [esp + 0x2c], eax
// 0051fbe7  7c87                 jl 0x51fb70
// 0051fbe9  8b442430             mov eax, dword ptr [esp + 0x30]
// 0051fbed  8344242004           add dword ptr [esp + 0x20], 4
// 0051fbf2  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0051fbf6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051fbfa  83c001               add eax, 1
// 0051fbfd  3b8524010000         cmp eax, dword ptr [ebp + 0x124]
// 0051fc03  89442430             mov dword ptr [esp + 0x30], eax
// 0051fc07  0f8cf3feffff         jl 0x51fb00
// 0051fc0d  8b742418             mov esi, dword ptr [esp + 0x18]
// 0051fc11  83c701               add edi, 1
// 0051fc14  3bfb                 cmp edi, ebx
// 0051fc16  897c2414             mov dword ptr [esp + 0x14], edi
// 0051fc1a  0f8690feffff         jbe 0x51fab0
// 0051fc20  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051fc24  83c001               add eax, 1
// 0051fc27  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0051fc2e  3b461c               cmp eax, dword ptr [esi + 0x1c]
// 0051fc31  89442410             mov dword ptr [esp + 0x10], eax
// 0051fc35  0f8c65feffff         jl 0x51faa0
// 0051fc3b  83858000000001       add dword ptr [ebp + 0x80], 1
// 0051fc42  8b8580000000         mov eax, dword ptr [ebp + 0x80]
// 0051fc48  83858800000001       add dword ptr [ebp + 0x88], 1
// 0051fc4f  3b851c010000         cmp eax, dword ptr [ebp + 0x11c]
// 0051fc55  732c                 jae 0x51fc83
// 0051fc57  8bcd                 mov ecx, ebp
// 0051fc59  e892fdffff           call 0x51f9f0
// 0051fc5e  5f                   pop edi
// 0051fc5f  5e                   pop esi
// 0051fc60  5d                   pop ebp
// 0051fc61  b803000000           mov eax, 3
// 0051fc66  5b                   pop ebx
// 0051fc67  83c434               add esp, 0x34
// 0051fc6a  c3                   ret 
// 0051fc6b  8b442418             mov eax, dword ptr [esp + 0x18]
// 0051fc6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051fc73  897814               mov dword ptr [eax + 0x14], edi
// 0051fc76  5f                   pop edi
// 0051fc77  5e                   pop esi
// 0051fc78  5d                   pop ebp
// 0051fc79  894818               mov dword ptr [eax + 0x18], ecx
// 0051fc7c  33c0                 xor eax, eax
// 0051fc7e  5b                   pop ebx
// 0051fc7f  83c434               add esp, 0x34
// 0051fc82  c3                   ret 
// 0051fc83  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0051fc89  8b420c               mov eax, dword ptr [edx + 0xc]
// 0051fc8c  55                   push ebp
// 0051fc8d  ffd0                 call eax
// 0051fc8f  83c404               add esp, 4
// 0051fc92  5f                   pop edi
// 0051fc93  5e                   pop esi
// 0051fc94  5d                   pop ebp
// 0051fc95  b804000000           mov eax, 4
// 0051fc9a  5b                   pop ebx
// 0051fc9b  83c434               add esp, 0x34
// 0051fc9e  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_onepass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
