// roc 2007-03 0072cb80  unit: seg_00720000  size: 470 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072cb80
//
// 0072cb80  51                   push ecx
// 0072cb81  53                   push ebx
// 0072cb82  56                   push esi
// 0072cb83  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072cb87  8b460c               mov eax, dword ptr [esi + 0xc]
// 0072cb8a  83c0fb               add eax, -5
// 0072cb8d  3dffff0000           cmp eax, 0xffff
// 0072cb92  57                   push edi
// 0072cb93  c744240cffff0000     mov dword ptr [esp + 0xc], 0xffff
// 0072cb9b  7304                 jae 0x72cba1
// 0072cb9d  8944240c             mov dword ptr [esp + 0xc], eax
// 0072cba1  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072cba4  83f801               cmp eax, 1
// 0072cba7  7710                 ja 0x72cbb9
// 0072cba9  e882feffff           call 0x72ca30
// 0072cbae  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072cbb1  85c0                 test eax, eax
// 0072cbb3  0f8436010000         je 0x72ccef
// 0072cbb9  01466c               add dword ptr [esi + 0x6c], eax
// 0072cbbc  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072cbbf  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0072cbc3  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072cbc6  c7467400000000       mov dword ptr [esi + 0x74], 0
// 0072cbcd  8d0401               lea eax, [ecx + eax]
// 0072cbd0  7408                 je 0x72cbda
// 0072cbd2  3bd0                 cmp edx, eax
// 0072cbd4  0f8280000000         jb 0x72cc5a
// 0072cbda  2bd0                 sub edx, eax
// 0072cbdc  85c9                 test ecx, ecx
// 0072cbde  895674               mov dword ptr [esi + 0x74], edx
// 0072cbe1  89466c               mov dword ptr [esi + 0x6c], eax
// 0072cbe4  7c07                 jl 0x72cbed
// 0072cbe6  8b5638               mov edx, dword ptr [esi + 0x38]
// 0072cbe9  03d1                 add edx, ecx
// 0072cbeb  eb02                 jmp 0x72cbef
// 0072cbed  33d2                 xor edx, edx
// 0072cbef  6a00                 push 0
// 0072cbf1  2bc1                 sub eax, ecx
// 0072cbf3  50                   push eax
// 0072cbf4  52                   push edx
// 0072cbf5  56                   push esi
// 0072cbf6  e87592ffff           call 0x725e70
// 0072cbfb  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072cbfe  8b3e                 mov edi, dword ptr [esi]
// 0072cc00  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0072cc03  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072cc06  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0072cc09  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072cc0c  83c410               add esp, 0x10
// 0072cc0f  3bd9                 cmp ebx, ecx
// 0072cc11  7602                 jbe 0x72cc15
// 0072cc13  8bd9                 mov ebx, ecx
// 0072cc15  85db                 test ebx, ebx
// 0072cc17  7435                 je 0x72cc4e
// 0072cc19  8b5010               mov edx, dword ptr [eax + 0x10]
// 0072cc1c  8b470c               mov eax, dword ptr [edi + 0xc]
// 0072cc1f  53                   push ebx
// 0072cc20  52                   push edx
// 0072cc21  50                   push eax
// 0072cc22  e8bb25efff           call 0x61f1e2
// 0072cc27  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072cc2a  015f0c               add dword ptr [edi + 0xc], ebx
// 0072cc2d  015810               add dword ptr [eax + 0x10], ebx
// 0072cc30  015f14               add dword ptr [edi + 0x14], ebx
// 0072cc33  295f10               sub dword ptr [edi + 0x10], ebx
// 0072cc36  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072cc39  295814               sub dword ptr [eax + 0x14], ebx
// 0072cc3c  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072cc3f  83c40c               add esp, 0xc
// 0072cc42  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072cc46  7506                 jne 0x72cc4e
// 0072cc48  8b4f08               mov ecx, dword ptr [edi + 8]
// 0072cc4b  894f10               mov dword ptr [edi + 0x10], ecx
// 0072cc4e  8b16                 mov edx, dword ptr [esi]
// 0072cc50  837a1000             cmp dword ptr [edx + 0x10], 0
// 0072cc54  0f848e000000         je 0x72cce8
// 0072cc5a  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0072cc5d  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072cc60  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0072cc63  2bca                 sub ecx, edx
// 0072cc65  2d06010000           sub eax, 0x106
// 0072cc6a  3bc8                 cmp ecx, eax
// 0072cc6c  0f822fffffff         jb 0x72cba1
// 0072cc72  85d2                 test edx, edx
// 0072cc74  7c07                 jl 0x72cc7d
// 0072cc76  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072cc79  03c2                 add eax, edx
// 0072cc7b  eb02                 jmp 0x72cc7f
// 0072cc7d  33c0                 xor eax, eax
// 0072cc7f  6a00                 push 0
// 0072cc81  51                   push ecx
// 0072cc82  50                   push eax
// 0072cc83  56                   push esi
// 0072cc84  e8e791ffff           call 0x725e70
// 0072cc89  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072cc8c  8b3e                 mov edi, dword ptr [esi]
// 0072cc8e  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0072cc91  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072cc94  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0072cc97  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072cc9a  83c410               add esp, 0x10
// 0072cc9d  3bd9                 cmp ebx, ecx
// 0072cc9f  7602                 jbe 0x72cca3
// 0072cca1  8bd9                 mov ebx, ecx
// 0072cca3  85db                 test ebx, ebx
// 0072cca5  7435                 je 0x72ccdc
// 0072cca7  8b5010               mov edx, dword ptr [eax + 0x10]
// 0072ccaa  8b470c               mov eax, dword ptr [edi + 0xc]
// 0072ccad  53                   push ebx
// 0072ccae  52                   push edx
// 0072ccaf  50                   push eax
// 0072ccb0  e82d25efff           call 0x61f1e2
// 0072ccb5  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072ccb8  015f0c               add dword ptr [edi + 0xc], ebx
// 0072ccbb  015810               add dword ptr [eax + 0x10], ebx
// 0072ccbe  015f14               add dword ptr [edi + 0x14], ebx
// 0072ccc1  295f10               sub dword ptr [edi + 0x10], ebx
// 0072ccc4  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072ccc7  295814               sub dword ptr [eax + 0x14], ebx
// 0072ccca  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072cccd  83c40c               add esp, 0xc
// 0072ccd0  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072ccd4  7506                 jne 0x72ccdc
// 0072ccd6  8b4f08               mov ecx, dword ptr [edi + 8]
// 0072ccd9  894f10               mov dword ptr [edi + 0x10], ecx
// 0072ccdc  8b16                 mov edx, dword ptr [esi]
// 0072ccde  837a1000             cmp dword ptr [edx + 0x10], 0
// 0072cce2  0f85b9feffff         jne 0x72cba1
// 0072cce8  5f                   pop edi
// 0072cce9  5e                   pop esi
// 0072ccea  33c0                 xor eax, eax
// 0072ccec  5b                   pop ebx
// 0072cced  59                   pop ecx
// 0072ccee  c3                   ret 
// 0072ccef  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072ccf3  85ff                 test edi, edi
// 0072ccf5  74f1                 je 0x72cce8
// 0072ccf7  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072ccfa  85c9                 test ecx, ecx
// 0072ccfc  7c07                 jl 0x72cd05
// 0072ccfe  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072cd01  03c1                 add eax, ecx
// 0072cd03  eb02                 jmp 0x72cd07
// 0072cd05  33c0                 xor eax, eax
// 0072cd07  33d2                 xor edx, edx
// 0072cd09  83ff04               cmp edi, 4
// 0072cd0c  0f94c2               sete dl
// 0072cd0f  52                   push edx
// 0072cd10  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072cd13  2bd1                 sub edx, ecx
// 0072cd15  52                   push edx
// 0072cd16  50                   push eax
// 0072cd17  56                   push esi
// 0072cd18  e85391ffff           call 0x725e70
// 0072cd1d  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072cd20  89465c               mov dword ptr [esi + 0x5c], eax
// 0072cd23  8b06                 mov eax, dword ptr [esi]
// 0072cd25  83c410               add esp, 0x10
// 0072cd28  e823f1ffff           call 0x72be50
// 0072cd2d  8b0e                 mov ecx, dword ptr [esi]
// 0072cd2f  33c0                 xor eax, eax
// 0072cd31  394110               cmp dword ptr [ecx + 0x10], eax
// 0072cd34  7511                 jne 0x72cd47
// 0072cd36  83ff04               cmp edi, 4
// 0072cd39  0f95c0               setne al
// 0072cd3c  5f                   pop edi
// 0072cd3d  5e                   pop esi
// 0072cd3e  5b                   pop ebx
// 0072cd3f  83e801               sub eax, 1
// 0072cd42  83e002               and eax, 2
// 0072cd45  59                   pop ecx
// 0072cd46  c3                   ret 
// 0072cd47  83ff04               cmp edi, 4
// 0072cd4a  0f94c0               sete al
// 0072cd4d  5f                   pop edi
// 0072cd4e  5e                   pop esi
// 0072cd4f  5b                   pop ebx
// 0072cd50  8d440001             lea eax, [eax + eax + 1]
// 0072cd54  59                   pop ecx
// 0072cd55  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_stored)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
