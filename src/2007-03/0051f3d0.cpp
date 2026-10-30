// roc 2007-03 0051f3d0  unit: seg_00510000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051f3d0
//
// 0051f3d0  83ec20               sub esp, 0x20
// 0051f3d3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0051f3d7  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0051f3dd  55                   push ebp
// 0051f3de  33ed                 xor ebp, ebp
// 0051f3e0  396924               cmp dword ptr [ecx + 0x24], ebp
// 0051f3e3  56                   push esi
// 0051f3e4  8bb184010000         mov esi, dword ptr [ecx + 0x184]
// 0051f3ea  89442418             mov dword ptr [esp + 0x18], eax
// 0051f3ee  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 0051f3f4  89742420             mov dword ptr [esp + 0x20], esi
// 0051f3f8  896c2408             mov dword ptr [esp + 8], ebp
// 0051f3fc  0f8e0a010000         jle 0x51f50c
// 0051f402  8d500c               lea edx, [eax + 0xc]
// 0051f405  53                   push ebx
// 0051f406  8d4608               lea eax, [esi + 8]
// 0051f409  57                   push edi
// 0051f40a  89542418             mov dword ptr [esp + 0x18], edx
// 0051f40e  89442414             mov dword ptr [esp + 0x14], eax
// 0051f412  eb08                 jmp 0x51f41c
// 0051f414  8b542418             mov edx, dword ptr [esp + 0x18]
// 0051f418  8b742428             mov esi, dword ptr [esp + 0x28]
// 0051f41c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0051f41f  0faf02               imul eax, dword ptr [edx]
// 0051f422  99                   cdq 
// 0051f423  f7b918010000         idiv dword ptr [ecx + 0x118]
// 0051f429  8b5638               mov edx, dword ptr [esi + 0x38]
// 0051f42c  8b3caa               mov edi, dword ptr [edx + ebp*4]
// 0051f42f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0051f432  8b742414             mov esi, dword ptr [esp + 0x14]
// 0051f436  8b1e                 mov ebx, dword ptr [esi]
// 0051f438  8b742420             mov esi, dword ptr [esp + 0x20]
// 0051f43c  8b14aa               mov edx, dword ptr [edx + ebp*4]
// 0051f43f  83c602               add esi, 2
// 0051f442  897c2424             mov dword ptr [esp + 0x24], edi
// 0051f446  0faff0               imul esi, eax
// 0051f449  85f6                 test esi, esi
// 0051f44b  7e35                 jle 0x51f482
// 0051f44d  8beb                 mov ebp, ebx
// 0051f44f  2bea                 sub ebp, edx
// 0051f451  2bfa                 sub edi, edx
// 0051f453  8bca                 mov ecx, edx
// 0051f455  897c242c             mov dword ptr [esp + 0x2c], edi
// 0051f459  8974241c             mov dword ptr [esp + 0x1c], esi
// 0051f45d  8d4900               lea ecx, [ecx]
// 0051f460  8b3c29               mov edi, dword ptr [ecx + ebp]
// 0051f463  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0051f467  8939                 mov dword ptr [ecx], edi
// 0051f469  893c0e               mov dword ptr [esi + ecx], edi
// 0051f46c  83c104               add ecx, 4
// 0051f46f  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0051f474  75ea                 jne 0x51f460
// 0051f476  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0051f47a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051f47e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0051f482  8d3400               lea esi, [eax + eax]
// 0051f485  85f6                 test esi, esi
// 0051f487  7e3f                 jle 0x51f4c8
// 0051f489  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0051f48d  8bf0                 mov esi, eax
// 0051f48f  0faff1               imul esi, ecx
// 0051f492  83c1fe               add ecx, -2
// 0051f495  0fafc8               imul ecx, eax
// 0051f498  8bfb                 mov edi, ebx
// 0051f49a  8d34b2               lea esi, [edx + esi*4]
// 0051f49d  2bfa                 sub edi, edx
// 0051f49f  8d0c8b               lea ecx, [ebx + ecx*4]
// 0051f4a2  2bd3                 sub edx, ebx
// 0051f4a4  8d1c00               lea ebx, [eax + eax]
// 0051f4a7  8b2c3e               mov ebp, dword ptr [esi + edi]
// 0051f4aa  892c0a               mov dword ptr [edx + ecx], ebp
// 0051f4ad  8b29                 mov ebp, dword ptr [ecx]
// 0051f4af  892e                 mov dword ptr [esi], ebp
// 0051f4b1  83c104               add ecx, 4
// 0051f4b4  83c604               add esi, 4
// 0051f4b7  83eb01               sub ebx, 1
// 0051f4ba  75eb                 jne 0x51f4a7
// 0051f4bc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0051f4c0  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0051f4c4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0051f4c8  85c0                 test eax, eax
// 0051f4ca  7e24                 jle 0x51f4f0
// 0051f4cc  8d0c8500000000       lea ecx, [eax*4]
// 0051f4d3  8bd1                 mov edx, ecx
// 0051f4d5  8bcf                 mov ecx, edi
// 0051f4d7  2bca                 sub ecx, edx
// 0051f4d9  8da42400000000       lea esp, [esp]
// 0051f4e0  8b17                 mov edx, dword ptr [edi]
// 0051f4e2  8911                 mov dword ptr [ecx], edx
// 0051f4e4  83c104               add ecx, 4
// 0051f4e7  83e801               sub eax, 1
// 0051f4ea  75f4                 jne 0x51f4e0
// 0051f4ec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0051f4f0  8344241404           add dword ptr [esp + 0x14], 4
// 0051f4f5  8344241854           add dword ptr [esp + 0x18], 0x54
// 0051f4fa  83c501               add ebp, 1
// 0051f4fd  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 0051f500  896c2410             mov dword ptr [esp + 0x10], ebp
// 0051f504  0f8c0affffff         jl 0x51f414
// 0051f50a  5f                   pop edi
// 0051f50b  5b                   pop ebx
// 0051f50c  5e                   pop esi
// 0051f50d  5d                   pop ebp
// 0051f50e  83c420               add esp, 0x20
// 0051f511  c3                   ret 
// library jpeg-6b/jdmainct.c (function _make_funny_pointers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
