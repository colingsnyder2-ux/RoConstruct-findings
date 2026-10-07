// roc 2010-06 0057e810  unit: seg_00570000  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057e810
//
// 0057e810  83ec20               sub esp, 0x20
// 0057e813  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057e817  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 0057e81d  55                   push ebp
// 0057e81e  33ed                 xor ebp, ebp
// 0057e820  396924               cmp dword ptr [ecx + 0x24], ebp
// 0057e823  56                   push esi
// 0057e824  8bb184010000         mov esi, dword ptr [ecx + 0x184]
// 0057e82a  89442418             mov dword ptr [esp + 0x18], eax
// 0057e82e  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 0057e834  89742420             mov dword ptr [esp + 0x20], esi
// 0057e838  896c2408             mov dword ptr [esp + 8], ebp
// 0057e83c  0f8e08010000         jle 0x57e94a
// 0057e842  8d500c               lea edx, [eax + 0xc]
// 0057e845  53                   push ebx
// 0057e846  8d4608               lea eax, [esi + 8]
// 0057e849  57                   push edi
// 0057e84a  89542418             mov dword ptr [esp + 0x18], edx
// 0057e84e  89442414             mov dword ptr [esp + 0x14], eax
// 0057e852  eb08                 jmp 0x57e85c
// 0057e854  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057e858  8b742428             mov esi, dword ptr [esp + 0x28]
// 0057e85c  8b4218               mov eax, dword ptr [edx + 0x18]
// 0057e85f  0faf02               imul eax, dword ptr [edx]
// 0057e862  99                   cdq 
// 0057e863  f7b918010000         idiv dword ptr [ecx + 0x118]
// 0057e869  8b5638               mov edx, dword ptr [esi + 0x38]
// 0057e86c  8b3caa               mov edi, dword ptr [edx + ebp*4]
// 0057e86f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 0057e872  8b742414             mov esi, dword ptr [esp + 0x14]
// 0057e876  8b1e                 mov ebx, dword ptr [esi]
// 0057e878  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057e87c  8b14aa               mov edx, dword ptr [edx + ebp*4]
// 0057e87f  83c602               add esi, 2
// 0057e882  897c2424             mov dword ptr [esp + 0x24], edi
// 0057e886  0faff0               imul esi, eax
// 0057e889  85f6                 test esi, esi
// 0057e88b  7e35                 jle 0x57e8c2
// 0057e88d  8beb                 mov ebp, ebx
// 0057e88f  2bea                 sub ebp, edx
// 0057e891  2bfa                 sub edi, edx
// 0057e893  8bca                 mov ecx, edx
// 0057e895  897c242c             mov dword ptr [esp + 0x2c], edi
// 0057e899  8974241c             mov dword ptr [esp + 0x1c], esi
// 0057e89d  8d4900               lea ecx, [ecx]
// 0057e8a0  8b3c29               mov edi, dword ptr [ecx + ebp]
// 0057e8a3  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0057e8a7  8939                 mov dword ptr [ecx], edi
// 0057e8a9  893c0e               mov dword ptr [esi + ecx], edi
// 0057e8ac  83c104               add ecx, 4
// 0057e8af  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0057e8b4  75ea                 jne 0x57e8a0
// 0057e8b6  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057e8ba  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057e8be  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057e8c2  8d3400               lea esi, [eax + eax]
// 0057e8c5  85f6                 test esi, esi
// 0057e8c7  7e3f                 jle 0x57e908
// 0057e8c9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057e8cd  8bf0                 mov esi, eax
// 0057e8cf  0faff1               imul esi, ecx
// 0057e8d2  83c1fe               add ecx, -2
// 0057e8d5  0fafc8               imul ecx, eax
// 0057e8d8  8bfb                 mov edi, ebx
// 0057e8da  8d34b2               lea esi, [edx + esi*4]
// 0057e8dd  2bfa                 sub edi, edx
// 0057e8df  8d0c8b               lea ecx, [ebx + ecx*4]
// 0057e8e2  2bd3                 sub edx, ebx
// 0057e8e4  8d1c00               lea ebx, [eax + eax]
// 0057e8e7  8b2c3e               mov ebp, dword ptr [esi + edi]
// 0057e8ea  892c0a               mov dword ptr [edx + ecx], ebp
// 0057e8ed  8b29                 mov ebp, dword ptr [ecx]
// 0057e8ef  892e                 mov dword ptr [esi], ebp
// 0057e8f1  83c104               add ecx, 4
// 0057e8f4  83c604               add esi, 4
// 0057e8f7  83eb01               sub ebx, 1
// 0057e8fa  75eb                 jne 0x57e8e7
// 0057e8fc  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057e900  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0057e904  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057e908  85c0                 test eax, eax
// 0057e90a  7e24                 jle 0x57e930
// 0057e90c  8d0c8500000000       lea ecx, [eax*4]
// 0057e913  8bd1                 mov edx, ecx
// 0057e915  8bcf                 mov ecx, edi
// 0057e917  2bca                 sub ecx, edx
// 0057e919  8da42400000000       lea esp, [esp]
// 0057e920  8b17                 mov edx, dword ptr [edi]
// 0057e922  8911                 mov dword ptr [ecx], edx
// 0057e924  83c104               add ecx, 4
// 0057e927  83e801               sub eax, 1
// 0057e92a  75f4                 jne 0x57e920
// 0057e92c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057e930  8344241404           add dword ptr [esp + 0x14], 4
// 0057e935  8344241854           add dword ptr [esp + 0x18], 0x54
// 0057e93a  45                   inc ebp
// 0057e93b  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 0057e93e  896c2410             mov dword ptr [esp + 0x10], ebp
// 0057e942  0f8c0cffffff         jl 0x57e854
// 0057e948  5f                   pop edi
// 0057e949  5b                   pop ebx
// 0057e94a  5e                   pop esi
// 0057e94b  5d                   pop ebp
// 0057e94c  83c420               add esp, 0x20
// 0057e94f  c3                   ret 
// library jpeg-6b/jdmainct.c (function _make_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
