// roc 2011-06 00574ac0  unit: seg_00570000  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00574ac0
//
// 00574ac0  83ec20               sub esp, 0x20
// 00574ac3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00574ac7  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 00574acd  55                   push ebp
// 00574ace  33ed                 xor ebp, ebp
// 00574ad0  396924               cmp dword ptr [ecx + 0x24], ebp
// 00574ad3  56                   push esi
// 00574ad4  8bb184010000         mov esi, dword ptr [ecx + 0x184]
// 00574ada  89442418             mov dword ptr [esp + 0x18], eax
// 00574ade  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 00574ae4  89742420             mov dword ptr [esp + 0x20], esi
// 00574ae8  896c2408             mov dword ptr [esp + 8], ebp
// 00574aec  0f8e08010000         jle 0x574bfa
// 00574af2  8d500c               lea edx, [eax + 0xc]
// 00574af5  53                   push ebx
// 00574af6  8d4608               lea eax, [esi + 8]
// 00574af9  57                   push edi
// 00574afa  89542418             mov dword ptr [esp + 0x18], edx
// 00574afe  89442414             mov dword ptr [esp + 0x14], eax
// 00574b02  eb08                 jmp 0x574b0c
// 00574b04  8b542418             mov edx, dword ptr [esp + 0x18]
// 00574b08  8b742428             mov esi, dword ptr [esp + 0x28]
// 00574b0c  8b4218               mov eax, dword ptr [edx + 0x18]
// 00574b0f  0faf02               imul eax, dword ptr [edx]
// 00574b12  99                   cdq 
// 00574b13  f7b918010000         idiv dword ptr [ecx + 0x118]
// 00574b19  8b5638               mov edx, dword ptr [esi + 0x38]
// 00574b1c  8b3caa               mov edi, dword ptr [edx + ebp*4]
// 00574b1f  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00574b22  8b742414             mov esi, dword ptr [esp + 0x14]
// 00574b26  8b1e                 mov ebx, dword ptr [esi]
// 00574b28  8b742420             mov esi, dword ptr [esp + 0x20]
// 00574b2c  8b14aa               mov edx, dword ptr [edx + ebp*4]
// 00574b2f  83c602               add esi, 2
// 00574b32  897c2424             mov dword ptr [esp + 0x24], edi
// 00574b36  0faff0               imul esi, eax
// 00574b39  85f6                 test esi, esi
// 00574b3b  7e35                 jle 0x574b72
// 00574b3d  8beb                 mov ebp, ebx
// 00574b3f  2bea                 sub ebp, edx
// 00574b41  2bfa                 sub edi, edx
// 00574b43  8bca                 mov ecx, edx
// 00574b45  897c242c             mov dword ptr [esp + 0x2c], edi
// 00574b49  8974241c             mov dword ptr [esp + 0x1c], esi
// 00574b4d  8d4900               lea ecx, [ecx]
// 00574b50  8b3c29               mov edi, dword ptr [ecx + ebp]
// 00574b53  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00574b57  8939                 mov dword ptr [ecx], edi
// 00574b59  893c0e               mov dword ptr [esi + ecx], edi
// 00574b5c  83c104               add ecx, 4
// 00574b5f  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00574b64  75ea                 jne 0x574b50
// 00574b66  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00574b6a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00574b6e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00574b72  8d3400               lea esi, [eax + eax]
// 00574b75  85f6                 test esi, esi
// 00574b77  7e3f                 jle 0x574bb8
// 00574b79  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00574b7d  8bf0                 mov esi, eax
// 00574b7f  0faff1               imul esi, ecx
// 00574b82  83c1fe               add ecx, -2
// 00574b85  0fafc8               imul ecx, eax
// 00574b88  8bfb                 mov edi, ebx
// 00574b8a  8d34b2               lea esi, [edx + esi*4]
// 00574b8d  2bfa                 sub edi, edx
// 00574b8f  8d0c8b               lea ecx, [ebx + ecx*4]
// 00574b92  2bd3                 sub edx, ebx
// 00574b94  8d1c00               lea ebx, [eax + eax]
// 00574b97  8b2c3e               mov ebp, dword ptr [esi + edi]
// 00574b9a  892c0a               mov dword ptr [edx + ecx], ebp
// 00574b9d  8b29                 mov ebp, dword ptr [ecx]
// 00574b9f  892e                 mov dword ptr [esi], ebp
// 00574ba1  83c104               add ecx, 4
// 00574ba4  83c604               add esi, 4
// 00574ba7  83eb01               sub ebx, 1
// 00574baa  75eb                 jne 0x574b97
// 00574bac  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00574bb0  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00574bb4  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00574bb8  85c0                 test eax, eax
// 00574bba  7e24                 jle 0x574be0
// 00574bbc  8d0c8500000000       lea ecx, [eax*4]
// 00574bc3  8bd1                 mov edx, ecx
// 00574bc5  8bcf                 mov ecx, edi
// 00574bc7  2bca                 sub ecx, edx
// 00574bc9  8da42400000000       lea esp, [esp]
// 00574bd0  8b17                 mov edx, dword ptr [edi]
// 00574bd2  8911                 mov dword ptr [ecx], edx
// 00574bd4  83c104               add ecx, 4
// 00574bd7  83e801               sub eax, 1
// 00574bda  75f4                 jne 0x574bd0
// 00574bdc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00574be0  8344241404           add dword ptr [esp + 0x14], 4
// 00574be5  8344241854           add dword ptr [esp + 0x18], 0x54
// 00574bea  45                   inc ebp
// 00574beb  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 00574bee  896c2410             mov dword ptr [esp + 0x10], ebp
// 00574bf2  0f8c0cffffff         jl 0x574b04
// 00574bf8  5f                   pop edi
// 00574bf9  5b                   pop ebx
// 00574bfa  5e                   pop esi
// 00574bfb  5d                   pop ebp
// 00574bfc  83c420               add esp, 0x20
// 00574bff  c3                   ret 
// library jpeg-6b/jdmainct.c (function _make_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
