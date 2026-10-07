// roc 2012-06 00660830  unit: seg_00660000  size: 630 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660830
//
// 00660830  83ec34               sub esp, 0x34
// 00660833  53                   push ebx
// 00660834  55                   push ebp
// 00660835  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 00660839  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 0066083f  8b8d88010000         mov ecx, dword ptr [ebp + 0x188]
// 00660845  8b9d38010000         mov ebx, dword ptr [ebp + 0x138]
// 0066084b  56                   push esi
// 0066084c  be01000000           mov esi, 1
// 00660851  2bc6                 sub eax, esi
// 00660853  89442434             mov dword ptr [esp + 0x34], eax
// 00660857  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0066085a  2bde                 sub ebx, esi
// 0066085c  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 0066085f  57                   push edi
// 00660860  894c2418             mov dword ptr [esp + 0x18], ecx
// 00660864  895c2434             mov dword ptr [esp + 0x34], ebx
// 00660868  89442410             mov dword ptr [esp + 0x10], eax
// 0066086c  0f8d97010000         jge 0x660a09
// 00660872  8b7914               mov edi, dword ptr [ecx + 0x14]
// 00660875  897c2414             mov dword ptr [esp + 0x14], edi
// 00660879  3bfb                 cmp edi, ebx
// 0066087b  0f8772010000         ja 0x6609f3
// 00660881  8b8540010000         mov eax, dword ptr [ebp + 0x140]
// 00660887  8d7120               lea esi, [ecx + 0x20]
// 0066088a  8b0e                 mov ecx, dword ptr [esi]
// 0066088c  c1e007               shl eax, 7
// 0066088f  50                   push eax
// 00660890  51                   push ecx
// 00660891  e8ba2cffff           call 0x653550
// 00660896  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0066089c  8b4204               mov eax, dword ptr [edx + 4]
// 0066089f  56                   push esi
// 006608a0  55                   push ebp
// 006608a1  ffd0                 call eax
// 006608a3  83c410               add esp, 0x10
// 006608a6  84c0                 test al, al
// 006608a8  0f849b010000         je 0x660a49
// 006608ae  33c9                 xor ecx, ecx
// 006608b0  398d24010000         cmp dword ptr [ebp + 0x124], ecx
// 006608b6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006608ba  894c2430             mov dword ptr [esp + 0x30], ecx
// 006608be  0f8e15010000         jle 0x6609d9
// 006608c4  8d9528010000         lea edx, [ebp + 0x128]
// 006608ca  89542420             mov dword ptr [esp + 0x20], edx
// 006608ce  8bff                 mov edi, edi
// 006608d0  8b442420             mov eax, dword ptr [esp + 0x20]
// 006608d4  8b30                 mov esi, dword ptr [eax]
// 006608d6  807e3000             cmp byte ptr [esi + 0x30], 0
// 006608da  750c                 jne 0x6608e8
// 006608dc  034e3c               add ecx, dword ptr [esi + 0x3c]
// 006608df  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006608e3  e9cf000000           jmp 0x6609b7
// 006608e8  8b4604               mov eax, dword ptr [esi + 4]
// 006608eb  8b959c010000         mov edx, dword ptr [ebp + 0x19c]
// 006608f1  03c0                 add eax, eax
// 006608f3  03c0                 add eax, eax
// 006608f5  8b540204             mov edx, dword ptr [edx + eax + 4]
// 006608f9  8954243c             mov dword ptr [esp + 0x3c], edx
// 006608fd  3bfb                 cmp edi, ebx
// 006608ff  7305                 jae 0x660906
// 00660901  8b5634               mov edx, dword ptr [esi + 0x34]
// 00660904  eb03                 jmp 0x660909
// 00660906  8b5644               mov edx, dword ptr [esi + 0x44]
// 00660909  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 0066090d  8b0438               mov eax, dword ptr [eax + edi]
// 00660910  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00660913  0faf7c2414           imul edi, dword ptr [esp + 0x14]
// 00660918  89542424             mov dword ptr [esp + 0x24], edx
// 0066091c  8b5624               mov edx, dword ptr [esi + 0x24]
// 0066091f  0faf542410           imul edx, dword ptr [esp + 0x10]
// 00660924  8d1c90               lea ebx, [eax + edx*4]
// 00660927  33c0                 xor eax, eax
// 00660929  394638               cmp dword ptr [esi + 0x38], eax
// 0066092c  897c2440             mov dword ptr [esp + 0x40], edi
// 00660930  8944242c             mov dword ptr [esp + 0x2c], eax
// 00660934  0f8e7d000000         jle 0x6609b7
// 0066093a  8d9b00000000         lea ebx, [ebx]
// 00660940  8b542438             mov edx, dword ptr [esp + 0x38]
// 00660944  399580000000         cmp dword ptr [ebp + 0x80], edx
// 0066094a  720b                 jb 0x660957
// 0066094c  8b542410             mov edx, dword ptr [esp + 0x10]
// 00660950  03d0                 add edx, eax
// 00660952  3b5648               cmp edx, dword ptr [esi + 0x48]
// 00660955  7d49                 jge 0x6609a0
// 00660957  8b542424             mov edx, dword ptr [esp + 0x24]
// 0066095b  85d2                 test edx, edx
// 0066095d  7e41                 jle 0x6609a0
// 0066095f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00660963  8d6c8820             lea ebp, [eax + ecx*4 + 0x20]
// 00660967  89542428             mov dword ptr [esp + 0x28], edx
// 0066096b  eb03                 jmp 0x660970
// 0066096d  8d4900               lea ecx, [ecx]
// 00660970  8b4d00               mov ecx, dword ptr [ebp]
// 00660973  8b542448             mov edx, dword ptr [esp + 0x48]
// 00660977  57                   push edi
// 00660978  53                   push ebx
// 00660979  51                   push ecx
// 0066097a  56                   push esi
// 0066097b  52                   push edx
// 0066097c  ff542450             call dword ptr [esp + 0x50]
// 00660980  037e24               add edi, dword ptr [esi + 0x24]
// 00660983  83c414               add esp, 0x14
// 00660986  83c504               add ebp, 4
// 00660989  836c242801           sub dword ptr [esp + 0x28], 1
// 0066098e  75e0                 jne 0x660970
// 00660990  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00660994  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00660998  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066099c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 006609a0  034e34               add ecx, dword ptr [esi + 0x34]
// 006609a3  8b5624               mov edx, dword ptr [esi + 0x24]
// 006609a6  40                   inc eax
// 006609a7  3b4638               cmp eax, dword ptr [esi + 0x38]
// 006609aa  894c241c             mov dword ptr [esp + 0x1c], ecx
// 006609ae  8d1c93               lea ebx, [ebx + edx*4]
// 006609b1  8944242c             mov dword ptr [esp + 0x2c], eax
// 006609b5  7c89                 jl 0x660940
// 006609b7  8b442430             mov eax, dword ptr [esp + 0x30]
// 006609bb  8344242004           add dword ptr [esp + 0x20], 4
// 006609c0  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006609c4  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006609c8  40                   inc eax
// 006609c9  3b8524010000         cmp eax, dword ptr [ebp + 0x124]
// 006609cf  89442430             mov dword ptr [esp + 0x30], eax
// 006609d3  0f8cf7feffff         jl 0x6608d0
// 006609d9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006609dd  47                   inc edi
// 006609de  897c2414             mov dword ptr [esp + 0x14], edi
// 006609e2  3bfb                 cmp edi, ebx
// 006609e4  0f8697feffff         jbe 0x660881
// 006609ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 006609ee  be01000000           mov esi, 1
// 006609f3  03c6                 add eax, esi
// 006609f5  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 006609fc  3b411c               cmp eax, dword ptr [ecx + 0x1c]
// 006609ff  89442410             mov dword ptr [esp + 0x10], eax
// 00660a03  0f8c69feffff         jl 0x660872
// 00660a09  01b580000000         add dword ptr [ebp + 0x80], esi
// 00660a0f  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 00660a15  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 00660a1b  01b588000000         add dword ptr [ebp + 0x88], esi
// 00660a21  3bca                 cmp ecx, edx
// 00660a23  7365                 jae 0x660a8a
// 00660a25  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 00660a2b  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 00660a31  7e2e                 jle 0x660a61
// 00660a33  5f                   pop edi
// 00660a34  89701c               mov dword ptr [eax + 0x1c], esi
// 00660a37  33c9                 xor ecx, ecx
// 00660a39  5e                   pop esi
// 00660a3a  5d                   pop ebp
// 00660a3b  894814               mov dword ptr [eax + 0x14], ecx
// 00660a3e  894818               mov dword ptr [eax + 0x18], ecx
// 00660a41  8d4103               lea eax, [ecx + 3]
// 00660a44  5b                   pop ebx
// 00660a45  83c434               add esp, 0x34
// 00660a48  c3                   ret 
// 00660a49  8b442418             mov eax, dword ptr [esp + 0x18]
// 00660a4d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00660a51  897814               mov dword ptr [eax + 0x14], edi
// 00660a54  5f                   pop edi
// 00660a55  5e                   pop esi
// 00660a56  5d                   pop ebp
// 00660a57  894818               mov dword ptr [eax + 0x18], ecx
// 00660a5a  33c0                 xor eax, eax
// 00660a5c  5b                   pop ebx
// 00660a5d  83c434               add esp, 0x34
// 00660a60  c3                   ret 
// 00660a61  4a                   dec edx
// 00660a62  3bca                 cmp ecx, edx
// 00660a64  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 00660a6a  7305                 jae 0x660a71
// 00660a6c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00660a6f  eb03                 jmp 0x660a74
// 00660a71  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00660a74  5f                   pop edi
// 00660a75  89481c               mov dword ptr [eax + 0x1c], ecx
// 00660a78  33c9                 xor ecx, ecx
// 00660a7a  5e                   pop esi
// 00660a7b  5d                   pop ebp
// 00660a7c  894814               mov dword ptr [eax + 0x14], ecx
// 00660a7f  894818               mov dword ptr [eax + 0x18], ecx
// 00660a82  8d4103               lea eax, [ecx + 3]
// 00660a85  5b                   pop ebx
// 00660a86  83c434               add esp, 0x34
// 00660a89  c3                   ret 
// 00660a8a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 00660a90  8b420c               mov eax, dword ptr [edx + 0xc]
// 00660a93  55                   push ebp
// 00660a94  ffd0                 call eax
// 00660a96  83c404               add esp, 4
// 00660a99  5f                   pop edi
// 00660a9a  5e                   pop esi
// 00660a9b  5d                   pop ebp
// 00660a9c  b804000000           mov eax, 4
// 00660aa1  5b                   pop ebx
// 00660aa2  83c434               add esp, 0x34
// 00660aa5  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_onepass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
