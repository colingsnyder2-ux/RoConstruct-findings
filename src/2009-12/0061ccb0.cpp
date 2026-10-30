// roc 2009-12 0061ccb0  unit: seg_00610000  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061ccb0
//
// 0061ccb0  83ec20               sub esp, 0x20
// 0061ccb3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061ccb7  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0061ccbd  55                   push ebp
// 0061ccbe  33ed                 xor ebp, ebp
// 0061ccc0  396924               cmp dword ptr [ecx + 0x24], ebp
// 0061ccc3  56                   push esi
// 0061ccc4  8bb184010000         mov esi, dword ptr [ecx + 0x184]
// 0061ccca  89442418             mov dword ptr [esp + 0x18], eax
// 0061ccce  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 0061ccd4  89742420             mov dword ptr [esp + 0x20], esi
// 0061ccd8  896c2408             mov dword ptr [esp + 8], ebp
// 0061ccdc  0f8e08010000         jle 0x61cdea
// 0061cce2  8d500c               lea edx, [eax + 0xc]
// 0061cce5  53                   push ebx
// 0061cce6  8d4608               lea eax, [esi + 8]
// 0061cce9  57                   push edi
// 0061ccea  89542418             mov dword ptr [esp + 0x18], edx
// 0061ccee  89442414             mov dword ptr [esp + 0x14], eax
// 0061ccf2  eb08                 jmp 0x61ccfc
// 0061ccf4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0061ccf8  8b742428             mov esi, dword ptr [esp + 0x28]
// 0061ccfc  8b4218               mov eax, dword ptr [edx + 0x18]
// 0061ccff  0faf02               imul eax, dword ptr [edx]
// 0061cd02  99                   cdq 
// 0061cd03  f7b918010000         idiv dword ptr [ecx + 0x118]
// 0061cd09  8b5638               mov edx, dword ptr [esi + 0x38]
// 0061cd0c  8b3caa               mov edi, dword ptr [edx + ebp*4]
// 0061cd0f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0061cd12  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061cd16  8b1e                 mov ebx, dword ptr [esi]
// 0061cd18  8b742420             mov esi, dword ptr [esp + 0x20]
// 0061cd1c  8b14aa               mov edx, dword ptr [edx + ebp*4]
// 0061cd1f  83c602               add esi, 2
// 0061cd22  897c2424             mov dword ptr [esp + 0x24], edi
// 0061cd26  0faff0               imul esi, eax
// 0061cd29  85f6                 test esi, esi
// 0061cd2b  7e35                 jle 0x61cd62
// 0061cd2d  8beb                 mov ebp, ebx
// 0061cd2f  2bea                 sub ebp, edx
// 0061cd31  2bfa                 sub edi, edx
// 0061cd33  8bca                 mov ecx, edx
// 0061cd35  897c242c             mov dword ptr [esp + 0x2c], edi
// 0061cd39  8974241c             mov dword ptr [esp + 0x1c], esi
// 0061cd3d  8d4900               lea ecx, [ecx]
// 0061cd40  8b3c29               mov edi, dword ptr [ecx + ebp]
// 0061cd43  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0061cd47  8939                 mov dword ptr [ecx], edi
// 0061cd49  893c0e               mov dword ptr [esi + ecx], edi
// 0061cd4c  83c104               add ecx, 4
// 0061cd4f  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0061cd54  75ea                 jne 0x61cd40
// 0061cd56  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0061cd5a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0061cd5e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061cd62  8d3400               lea esi, [eax + eax]
// 0061cd65  85f6                 test esi, esi
// 0061cd67  7e3f                 jle 0x61cda8
// 0061cd69  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0061cd6d  8bf0                 mov esi, eax
// 0061cd6f  0faff1               imul esi, ecx
// 0061cd72  83c1fe               add ecx, -2
// 0061cd75  0fafc8               imul ecx, eax
// 0061cd78  8bfb                 mov edi, ebx
// 0061cd7a  8d34b2               lea esi, [edx + esi*4]
// 0061cd7d  2bfa                 sub edi, edx
// 0061cd7f  8d0c8b               lea ecx, [ebx + ecx*4]
// 0061cd82  2bd3                 sub edx, ebx
// 0061cd84  8d1c00               lea ebx, [eax + eax]
// 0061cd87  8b2c3e               mov ebp, dword ptr [esi + edi]
// 0061cd8a  892c0a               mov dword ptr [edx + ecx], ebp
// 0061cd8d  8b29                 mov ebp, dword ptr [ecx]
// 0061cd8f  892e                 mov dword ptr [esi], ebp
// 0061cd91  83c104               add ecx, 4
// 0061cd94  83c604               add esi, 4
// 0061cd97  83eb01               sub ebx, 1
// 0061cd9a  75eb                 jne 0x61cd87
// 0061cd9c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0061cda0  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0061cda4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061cda8  85c0                 test eax, eax
// 0061cdaa  7e24                 jle 0x61cdd0
// 0061cdac  8d0c8500000000       lea ecx, [eax*4]
// 0061cdb3  8bd1                 mov edx, ecx
// 0061cdb5  8bcf                 mov ecx, edi
// 0061cdb7  2bca                 sub ecx, edx
// 0061cdb9  8da42400000000       lea esp, [esp]
// 0061cdc0  8b17                 mov edx, dword ptr [edi]
// 0061cdc2  8911                 mov dword ptr [ecx], edx
// 0061cdc4  83c104               add ecx, 4
// 0061cdc7  83e801               sub eax, 1
// 0061cdca  75f4                 jne 0x61cdc0
// 0061cdcc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061cdd0  8344241404           add dword ptr [esp + 0x14], 4
// 0061cdd5  8344241854           add dword ptr [esp + 0x18], 0x54
// 0061cdda  45                   inc ebp
// 0061cddb  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 0061cdde  896c2410             mov dword ptr [esp + 0x10], ebp
// 0061cde2  0f8c0cffffff         jl 0x61ccf4
// 0061cde8  5f                   pop edi
// 0061cde9  5b                   pop ebx
// 0061cdea  5e                   pop esi
// 0061cdeb  5d                   pop ebp
// 0061cdec  83c420               add esp, 0x20
// 0061cdef  c3                   ret 
// library jpeg-6b/jdmainct.c (function _make_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
