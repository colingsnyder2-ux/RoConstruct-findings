// roc 2007-08 00524700  unit: G3D::Line  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524700
//
// 00524700  83ec20               sub esp, 0x20
// 00524703  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00524707  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0052470d  55                   push ebp
// 0052470e  33ed                 xor ebp, ebp
// 00524710  396924               cmp dword ptr [ecx + 0x24], ebp
// 00524713  56                   push esi
// 00524714  8bb184010000         mov esi, dword ptr [ecx + 0x184]
// 0052471a  89442418             mov dword ptr [esp + 0x18], eax
// 0052471e  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 00524724  89742420             mov dword ptr [esp + 0x20], esi
// 00524728  896c2408             mov dword ptr [esp + 8], ebp
// 0052472c  0f8e0a010000         jle 0x52483c
// 00524732  8d500c               lea edx, [eax + 0xc]
// 00524735  53                   push ebx
// 00524736  8d4608               lea eax, [esi + 8]
// 00524739  57                   push edi
// 0052473a  89542418             mov dword ptr [esp + 0x18], edx
// 0052473e  89442414             mov dword ptr [esp + 0x14], eax
// 00524742  eb08                 jmp 0x52474c
// 00524744  8b542418             mov edx, dword ptr [esp + 0x18]
// 00524748  8b742428             mov esi, dword ptr [esp + 0x28]
// 0052474c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0052474f  0faf02               imul eax, dword ptr [edx]
// 00524752  99                   cdq 
// 00524753  f7b918010000         idiv dword ptr [ecx + 0x118]
// 00524759  8b5638               mov edx, dword ptr [esi + 0x38]
// 0052475c  8b3caa               mov edi, dword ptr [edx + ebp*4]
// 0052475f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00524762  8b742414             mov esi, dword ptr [esp + 0x14]
// 00524766  8b1e                 mov ebx, dword ptr [esi]
// 00524768  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052476c  8b14aa               mov edx, dword ptr [edx + ebp*4]
// 0052476f  83c602               add esi, 2
// 00524772  897c2424             mov dword ptr [esp + 0x24], edi
// 00524776  0faff0               imul esi, eax
// 00524779  85f6                 test esi, esi
// 0052477b  7e35                 jle 0x5247b2
// 0052477d  8beb                 mov ebp, ebx
// 0052477f  2bea                 sub ebp, edx
// 00524781  2bfa                 sub edi, edx
// 00524783  8bca                 mov ecx, edx
// 00524785  897c242c             mov dword ptr [esp + 0x2c], edi
// 00524789  8974241c             mov dword ptr [esp + 0x1c], esi
// 0052478d  8d4900               lea ecx, [ecx]
// 00524790  8b3c29               mov edi, dword ptr [ecx + ebp]
// 00524793  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00524797  8939                 mov dword ptr [ecx], edi
// 00524799  893c0e               mov dword ptr [esi + ecx], edi
// 0052479c  83c104               add ecx, 4
// 0052479f  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005247a4  75ea                 jne 0x524790
// 005247a6  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005247aa  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005247ae  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005247b2  8d3400               lea esi, [eax + eax]
// 005247b5  85f6                 test esi, esi
// 005247b7  7e3f                 jle 0x5247f8
// 005247b9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005247bd  8bf0                 mov esi, eax
// 005247bf  0faff1               imul esi, ecx
// 005247c2  83c1fe               add ecx, -2
// 005247c5  0fafc8               imul ecx, eax
// 005247c8  8bfb                 mov edi, ebx
// 005247ca  8d34b2               lea esi, [edx + esi*4]
// 005247cd  2bfa                 sub edi, edx
// 005247cf  8d0c8b               lea ecx, [ebx + ecx*4]
// 005247d2  2bd3                 sub edx, ebx
// 005247d4  8d1c00               lea ebx, [eax + eax]
// 005247d7  8b2c3e               mov ebp, dword ptr [esi + edi]
// 005247da  892c0a               mov dword ptr [edx + ecx], ebp
// 005247dd  8b29                 mov ebp, dword ptr [ecx]
// 005247df  892e                 mov dword ptr [esi], ebp
// 005247e1  83c104               add ecx, 4
// 005247e4  83c604               add esi, 4
// 005247e7  83eb01               sub ebx, 1
// 005247ea  75eb                 jne 0x5247d7
// 005247ec  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 005247f0  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005247f4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005247f8  85c0                 test eax, eax
// 005247fa  7e24                 jle 0x524820
// 005247fc  8d0c8500000000       lea ecx, [eax*4]
// 00524803  8bd1                 mov edx, ecx
// 00524805  8bcf                 mov ecx, edi
// 00524807  2bca                 sub ecx, edx
// 00524809  8da42400000000       lea esp, [esp]
// 00524810  8b17                 mov edx, dword ptr [edi]
// 00524812  8911                 mov dword ptr [ecx], edx
// 00524814  83c104               add ecx, 4
// 00524817  83e801               sub eax, 1
// 0052481a  75f4                 jne 0x524810
// 0052481c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00524820  8344241404           add dword ptr [esp + 0x14], 4
// 00524825  8344241854           add dword ptr [esp + 0x18], 0x54
// 0052482a  83c501               add ebp, 1
// 0052482d  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 00524830  896c2410             mov dword ptr [esp + 0x10], ebp
// 00524834  0f8c0affffff         jl 0x524744
// 0052483a  5f                   pop edi
// 0052483b  5b                   pop ebx
// 0052483c  5e                   pop esi
// 0052483d  5d                   pop ebp
// 0052483e  83c420               add esp, 0x20
// 00524841  c3                   ret 
// library jpeg-6b/jdmainct.c (function _make_funny_pointers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
