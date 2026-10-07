// roc 2009-06 0058fa20  unit: seg_00580000  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058fa20
//
// 0058fa20  51                   push ecx
// 0058fa21  53                   push ebx
// 0058fa22  56                   push esi
// 0058fa23  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058fa27  8b460c               mov eax, dword ptr [esi + 0xc]
// 0058fa2a  83c0fb               add eax, -5
// 0058fa2d  57                   push edi
// 0058fa2e  c744240cffff0000     mov dword ptr [esp + 0xc], 0xffff
// 0058fa36  3dffff0000           cmp eax, 0xffff
// 0058fa3b  7304                 jae 0x58fa41
// 0058fa3d  8944240c             mov dword ptr [esp + 0xc], eax
// 0058fa41  8b4674               mov eax, dword ptr [esi + 0x74]
// 0058fa44  83f801               cmp eax, 1
// 0058fa47  7710                 ja 0x58fa59
// 0058fa49  e882feffff           call 0x58f8d0
// 0058fa4e  8b4674               mov eax, dword ptr [esi + 0x74]
// 0058fa51  85c0                 test eax, eax
// 0058fa53  0f8436010000         je 0x58fb8f
// 0058fa59  01466c               add dword ptr [esi + 0x6c], eax
// 0058fa5c  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0058fa5f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058fa63  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0058fa66  c7467400000000       mov dword ptr [esi + 0x74], 0
// 0058fa6d  8d0401               lea eax, [ecx + eax]
// 0058fa70  7408                 je 0x58fa7a
// 0058fa72  3bd0                 cmp edx, eax
// 0058fa74  0f8280000000         jb 0x58fafa
// 0058fa7a  2bd0                 sub edx, eax
// 0058fa7c  895674               mov dword ptr [esi + 0x74], edx
// 0058fa7f  89466c               mov dword ptr [esi + 0x6c], eax
// 0058fa82  85c9                 test ecx, ecx
// 0058fa84  7c07                 jl 0x58fa8d
// 0058fa86  8b5638               mov edx, dword ptr [esi + 0x38]
// 0058fa89  03d1                 add edx, ecx
// 0058fa8b  eb02                 jmp 0x58fa8f
// 0058fa8d  33d2                 xor edx, edx
// 0058fa8f  6a00                 push 0
// 0058fa91  2bc1                 sub eax, ecx
// 0058fa93  50                   push eax
// 0058fa94  52                   push edx
// 0058fa95  56                   push esi
// 0058fa96  e845a40000           call 0x599ee0
// 0058fa9b  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0058fa9e  8b3e                 mov edi, dword ptr [esi]
// 0058faa0  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0058faa3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058faa6  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0058faa9  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0058faac  83c410               add esp, 0x10
// 0058faaf  3bd9                 cmp ebx, ecx
// 0058fab1  7602                 jbe 0x58fab5
// 0058fab3  8bd9                 mov ebx, ecx
// 0058fab5  85db                 test ebx, ebx
// 0058fab7  7435                 je 0x58faee
// 0058fab9  8b5010               mov edx, dword ptr [eax + 0x10]
// 0058fabc  8b470c               mov eax, dword ptr [edi + 0xc]
// 0058fabf  53                   push ebx
// 0058fac0  52                   push edx
// 0058fac1  50                   push eax
// 0058fac2  e8efa31800           call 0x719eb6
// 0058fac7  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058faca  015f0c               add dword ptr [edi + 0xc], ebx
// 0058facd  015810               add dword ptr [eax + 0x10], ebx
// 0058fad0  015f14               add dword ptr [edi + 0x14], ebx
// 0058fad3  295f10               sub dword ptr [edi + 0x10], ebx
// 0058fad6  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058fad9  295814               sub dword ptr [eax + 0x14], ebx
// 0058fadc  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0058fadf  83c40c               add esp, 0xc
// 0058fae2  837f1400             cmp dword ptr [edi + 0x14], 0
// 0058fae6  7506                 jne 0x58faee
// 0058fae8  8b4f08               mov ecx, dword ptr [edi + 8]
// 0058faeb  894f10               mov dword ptr [edi + 0x10], ecx
// 0058faee  8b16                 mov edx, dword ptr [esi]
// 0058faf0  837a1000             cmp dword ptr [edx + 0x10], 0
// 0058faf4  0f848e000000         je 0x58fb88
// 0058fafa  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0058fafd  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0058fb00  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0058fb03  2bca                 sub ecx, edx
// 0058fb05  2d06010000           sub eax, 0x106
// 0058fb0a  3bc8                 cmp ecx, eax
// 0058fb0c  0f822fffffff         jb 0x58fa41
// 0058fb12  85d2                 test edx, edx
// 0058fb14  7c07                 jl 0x58fb1d
// 0058fb16  8b4638               mov eax, dword ptr [esi + 0x38]
// 0058fb19  03c2                 add eax, edx
// 0058fb1b  eb02                 jmp 0x58fb1f
// 0058fb1d  33c0                 xor eax, eax
// 0058fb1f  6a00                 push 0
// 0058fb21  51                   push ecx
// 0058fb22  50                   push eax
// 0058fb23  56                   push esi
// 0058fb24  e8b7a30000           call 0x599ee0
// 0058fb29  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0058fb2c  8b3e                 mov edi, dword ptr [esi]
// 0058fb2e  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0058fb31  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058fb34  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0058fb37  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0058fb3a  83c410               add esp, 0x10
// 0058fb3d  3bd9                 cmp ebx, ecx
// 0058fb3f  7602                 jbe 0x58fb43
// 0058fb41  8bd9                 mov ebx, ecx
// 0058fb43  85db                 test ebx, ebx
// 0058fb45  7435                 je 0x58fb7c
// 0058fb47  8b5010               mov edx, dword ptr [eax + 0x10]
// 0058fb4a  8b470c               mov eax, dword ptr [edi + 0xc]
// 0058fb4d  53                   push ebx
// 0058fb4e  52                   push edx
// 0058fb4f  50                   push eax
// 0058fb50  e861a31800           call 0x719eb6
// 0058fb55  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058fb58  015f0c               add dword ptr [edi + 0xc], ebx
// 0058fb5b  015810               add dword ptr [eax + 0x10], ebx
// 0058fb5e  015f14               add dword ptr [edi + 0x14], ebx
// 0058fb61  295f10               sub dword ptr [edi + 0x10], ebx
// 0058fb64  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058fb67  295814               sub dword ptr [eax + 0x14], ebx
// 0058fb6a  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0058fb6d  83c40c               add esp, 0xc
// 0058fb70  837f1400             cmp dword ptr [edi + 0x14], 0
// 0058fb74  7506                 jne 0x58fb7c
// 0058fb76  8b4f08               mov ecx, dword ptr [edi + 8]
// 0058fb79  894f10               mov dword ptr [edi + 0x10], ecx
// 0058fb7c  8b16                 mov edx, dword ptr [esi]
// 0058fb7e  837a1000             cmp dword ptr [edx + 0x10], 0
// 0058fb82  0f85b9feffff         jne 0x58fa41
// 0058fb88  5f                   pop edi
// 0058fb89  5e                   pop esi
// 0058fb8a  33c0                 xor eax, eax
// 0058fb8c  5b                   pop ebx
// 0058fb8d  59                   pop ecx
// 0058fb8e  c3                   ret 
// 0058fb8f  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0058fb93  85ff                 test edi, edi
// 0058fb95  74f1                 je 0x58fb88
// 0058fb97  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0058fb9a  85c9                 test ecx, ecx
// 0058fb9c  7c07                 jl 0x58fba5
// 0058fb9e  8b4638               mov eax, dword ptr [esi + 0x38]
// 0058fba1  03c1                 add eax, ecx
// 0058fba3  eb02                 jmp 0x58fba7
// 0058fba5  33c0                 xor eax, eax
// 0058fba7  33d2                 xor edx, edx
// 0058fba9  83ff04               cmp edi, 4
// 0058fbac  0f94c2               sete dl
// 0058fbaf  52                   push edx
// 0058fbb0  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0058fbb3  2bd1                 sub edx, ecx
// 0058fbb5  52                   push edx
// 0058fbb6  50                   push eax
// 0058fbb7  56                   push esi
// 0058fbb8  e823a30000           call 0x599ee0
// 0058fbbd  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058fbc0  89465c               mov dword ptr [esi + 0x5c], eax
// 0058fbc3  8b06                 mov eax, dword ptr [esi]
// 0058fbc5  83c410               add esp, 0x10
// 0058fbc8  e873f1ffff           call 0x58ed40
// 0058fbcd  8b0e                 mov ecx, dword ptr [esi]
// 0058fbcf  33c0                 xor eax, eax
// 0058fbd1  394110               cmp dword ptr [ecx + 0x10], eax
// 0058fbd4  750f                 jne 0x58fbe5
// 0058fbd6  83ff04               cmp edi, 4
// 0058fbd9  0f95c0               setne al
// 0058fbdc  5f                   pop edi
// 0058fbdd  5e                   pop esi
// 0058fbde  5b                   pop ebx
// 0058fbdf  48                   dec eax
// 0058fbe0  83e002               and eax, 2
// 0058fbe3  59                   pop ecx
// 0058fbe4  c3                   ret 
// 0058fbe5  83ff04               cmp edi, 4
// 0058fbe8  0f94c0               sete al
// 0058fbeb  5f                   pop edi
// 0058fbec  5e                   pop esi
// 0058fbed  5b                   pop ebx
// 0058fbee  8d440001             lea eax, [eax + eax + 1]
// 0058fbf2  59                   pop ecx
// 0058fbf3  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_stored)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
