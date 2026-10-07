// roc 2012-06 006601d0  unit: seg_00660000  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006601d0
//
// 006601d0  83ec20               sub esp, 0x20
// 006601d3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006601d7  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 006601dd  55                   push ebp
// 006601de  33ed                 xor ebp, ebp
// 006601e0  396924               cmp dword ptr [ecx + 0x24], ebp
// 006601e3  56                   push esi
// 006601e4  8bb184010000         mov esi, dword ptr [ecx + 0x184]
// 006601ea  89442418             mov dword ptr [esp + 0x18], eax
// 006601ee  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 006601f4  89742420             mov dword ptr [esp + 0x20], esi
// 006601f8  896c2408             mov dword ptr [esp + 8], ebp
// 006601fc  0f8e08010000         jle 0x66030a
// 00660202  8d500c               lea edx, [eax + 0xc]
// 00660205  53                   push ebx
// 00660206  8d4608               lea eax, [esi + 8]
// 00660209  57                   push edi
// 0066020a  89542418             mov dword ptr [esp + 0x18], edx
// 0066020e  89442414             mov dword ptr [esp + 0x14], eax
// 00660212  eb08                 jmp 0x66021c
// 00660214  8b542418             mov edx, dword ptr [esp + 0x18]
// 00660218  8b742428             mov esi, dword ptr [esp + 0x28]
// 0066021c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0066021f  0faf02               imul eax, dword ptr [edx]
// 00660222  99                   cdq 
// 00660223  f7b918010000         idiv dword ptr [ecx + 0x118]
// 00660229  8b5638               mov edx, dword ptr [esi + 0x38]
// 0066022c  8b3caa               mov edi, dword ptr [edx + ebp*4]
// 0066022f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00660232  8b742414             mov esi, dword ptr [esp + 0x14]
// 00660236  8b1e                 mov ebx, dword ptr [esi]
// 00660238  8b742420             mov esi, dword ptr [esp + 0x20]
// 0066023c  8b14aa               mov edx, dword ptr [edx + ebp*4]
// 0066023f  83c602               add esi, 2
// 00660242  897c2424             mov dword ptr [esp + 0x24], edi
// 00660246  0faff0               imul esi, eax
// 00660249  85f6                 test esi, esi
// 0066024b  7e35                 jle 0x660282
// 0066024d  8beb                 mov ebp, ebx
// 0066024f  2bea                 sub ebp, edx
// 00660251  2bfa                 sub edi, edx
// 00660253  8bca                 mov ecx, edx
// 00660255  897c242c             mov dword ptr [esp + 0x2c], edi
// 00660259  8974241c             mov dword ptr [esp + 0x1c], esi
// 0066025d  8d4900               lea ecx, [ecx]
// 00660260  8b3c29               mov edi, dword ptr [ecx + ebp]
// 00660263  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00660267  8939                 mov dword ptr [ecx], edi
// 00660269  893c0e               mov dword ptr [esi + ecx], edi
// 0066026c  83c104               add ecx, 4
// 0066026f  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00660274  75ea                 jne 0x660260
// 00660276  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0066027a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066027e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00660282  8d3400               lea esi, [eax + eax]
// 00660285  85f6                 test esi, esi
// 00660287  7e3f                 jle 0x6602c8
// 00660289  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066028d  8bf0                 mov esi, eax
// 0066028f  0faff1               imul esi, ecx
// 00660292  83c1fe               add ecx, -2
// 00660295  0fafc8               imul ecx, eax
// 00660298  8bfb                 mov edi, ebx
// 0066029a  8d34b2               lea esi, [edx + esi*4]
// 0066029d  2bfa                 sub edi, edx
// 0066029f  8d0c8b               lea ecx, [ebx + ecx*4]
// 006602a2  2bd3                 sub edx, ebx
// 006602a4  8d1c00               lea ebx, [eax + eax]
// 006602a7  8b2c3e               mov ebp, dword ptr [esi + edi]
// 006602aa  892c0a               mov dword ptr [edx + ecx], ebp
// 006602ad  8b29                 mov ebp, dword ptr [ecx]
// 006602af  892e                 mov dword ptr [esi], ebp
// 006602b1  83c104               add ecx, 4
// 006602b4  83c604               add esi, 4
// 006602b7  83eb01               sub ebx, 1
// 006602ba  75eb                 jne 0x6602a7
// 006602bc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006602c0  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006602c4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006602c8  85c0                 test eax, eax
// 006602ca  7e24                 jle 0x6602f0
// 006602cc  8d0c8500000000       lea ecx, [eax*4]
// 006602d3  8bd1                 mov edx, ecx
// 006602d5  8bcf                 mov ecx, edi
// 006602d7  2bca                 sub ecx, edx
// 006602d9  8da42400000000       lea esp, [esp]
// 006602e0  8b17                 mov edx, dword ptr [edi]
// 006602e2  8911                 mov dword ptr [ecx], edx
// 006602e4  83c104               add ecx, 4
// 006602e7  83e801               sub eax, 1
// 006602ea  75f4                 jne 0x6602e0
// 006602ec  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006602f0  8344241404           add dword ptr [esp + 0x14], 4
// 006602f5  8344241854           add dword ptr [esp + 0x18], 0x54
// 006602fa  45                   inc ebp
// 006602fb  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 006602fe  896c2410             mov dword ptr [esp + 0x10], ebp
// 00660302  0f8c0cffffff         jl 0x660214
// 00660308  5f                   pop edi
// 00660309  5b                   pop ebx
// 0066030a  5e                   pop esi
// 0066030b  5d                   pop ebp
// 0066030c  83c420               add esp, 0x20
// 0066030f  c3                   ret 
// library jpeg-6b/jdmainct.c (function _make_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
