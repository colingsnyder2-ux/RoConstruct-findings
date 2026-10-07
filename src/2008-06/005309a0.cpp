// roc 2008-06 005309a0  unit: seg_00530000  size: 320 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005309a0
//
// 005309a0  83ec20               sub esp, 0x20
// 005309a3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005309a7  8b8118010000         mov eax, dword ptr [ecx + 0x118]
// 005309ad  55                   push ebp
// 005309ae  33ed                 xor ebp, ebp
// 005309b0  396924               cmp dword ptr [ecx + 0x24], ebp
// 005309b3  56                   push esi
// 005309b4  8bb184010000         mov esi, dword ptr [ecx + 0x184]
// 005309ba  89442418             mov dword ptr [esp + 0x18], eax
// 005309be  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 005309c4  89742420             mov dword ptr [esp + 0x20], esi
// 005309c8  896c2408             mov dword ptr [esp + 8], ebp
// 005309cc  0f8e08010000         jle 0x530ada
// 005309d2  8d500c               lea edx, [eax + 0xc]
// 005309d5  53                   push ebx
// 005309d6  8d4608               lea eax, [esi + 8]
// 005309d9  57                   push edi
// 005309da  89542418             mov dword ptr [esp + 0x18], edx
// 005309de  89442414             mov dword ptr [esp + 0x14], eax
// 005309e2  eb08                 jmp 0x5309ec
// 005309e4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005309e8  8b742428             mov esi, dword ptr [esp + 0x28]
// 005309ec  8b4218               mov eax, dword ptr [edx + 0x18]
// 005309ef  0faf02               imul eax, dword ptr [edx]
// 005309f2  99                   cdq 
// 005309f3  f7b918010000         idiv dword ptr [ecx + 0x118]
// 005309f9  8b5638               mov edx, dword ptr [esi + 0x38]
// 005309fc  8b3caa               mov edi, dword ptr [edx + ebp*4]
// 005309ff  8b563c               mov edx, dword ptr [esi + 0x3c]
// 00530a02  8b742414             mov esi, dword ptr [esp + 0x14]
// 00530a06  8b1e                 mov ebx, dword ptr [esi]
// 00530a08  8b742420             mov esi, dword ptr [esp + 0x20]
// 00530a0c  8b14aa               mov edx, dword ptr [edx + ebp*4]
// 00530a0f  83c602               add esi, 2
// 00530a12  897c2424             mov dword ptr [esp + 0x24], edi
// 00530a16  0faff0               imul esi, eax
// 00530a19  85f6                 test esi, esi
// 00530a1b  7e35                 jle 0x530a52
// 00530a1d  8beb                 mov ebp, ebx
// 00530a1f  2bea                 sub ebp, edx
// 00530a21  2bfa                 sub edi, edx
// 00530a23  8bca                 mov ecx, edx
// 00530a25  897c242c             mov dword ptr [esp + 0x2c], edi
// 00530a29  8974241c             mov dword ptr [esp + 0x1c], esi
// 00530a2d  8d4900               lea ecx, [ecx]
// 00530a30  8b3c29               mov edi, dword ptr [ecx + ebp]
// 00530a33  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00530a37  8939                 mov dword ptr [ecx], edi
// 00530a39  893c0e               mov dword ptr [esi + ecx], edi
// 00530a3c  83c104               add ecx, 4
// 00530a3f  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00530a44  75ea                 jne 0x530a30
// 00530a46  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00530a4a  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00530a4e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00530a52  8d3400               lea esi, [eax + eax]
// 00530a55  85f6                 test esi, esi
// 00530a57  7e3f                 jle 0x530a98
// 00530a59  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00530a5d  8bf0                 mov esi, eax
// 00530a5f  0faff1               imul esi, ecx
// 00530a62  83c1fe               add ecx, -2
// 00530a65  0fafc8               imul ecx, eax
// 00530a68  8bfb                 mov edi, ebx
// 00530a6a  8d34b2               lea esi, [edx + esi*4]
// 00530a6d  2bfa                 sub edi, edx
// 00530a6f  8d0c8b               lea ecx, [ebx + ecx*4]
// 00530a72  2bd3                 sub edx, ebx
// 00530a74  8d1c00               lea ebx, [eax + eax]
// 00530a77  8b2c3e               mov ebp, dword ptr [esi + edi]
// 00530a7a  892c0a               mov dword ptr [edx + ecx], ebp
// 00530a7d  8b29                 mov ebp, dword ptr [ecx]
// 00530a7f  892e                 mov dword ptr [esi], ebp
// 00530a81  83c104               add ecx, 4
// 00530a84  83c604               add esi, 4
// 00530a87  83eb01               sub ebx, 1
// 00530a8a  75eb                 jne 0x530a77
// 00530a8c  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00530a90  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00530a94  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00530a98  85c0                 test eax, eax
// 00530a9a  7e24                 jle 0x530ac0
// 00530a9c  8d0c8500000000       lea ecx, [eax*4]
// 00530aa3  8bd1                 mov edx, ecx
// 00530aa5  8bcf                 mov ecx, edi
// 00530aa7  2bca                 sub ecx, edx
// 00530aa9  8da42400000000       lea esp, [esp]
// 00530ab0  8b17                 mov edx, dword ptr [edi]
// 00530ab2  8911                 mov dword ptr [ecx], edx
// 00530ab4  83c104               add ecx, 4
// 00530ab7  83e801               sub eax, 1
// 00530aba  75f4                 jne 0x530ab0
// 00530abc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00530ac0  8344241404           add dword ptr [esp + 0x14], 4
// 00530ac5  8344241854           add dword ptr [esp + 0x18], 0x54
// 00530aca  45                   inc ebp
// 00530acb  3b6924               cmp ebp, dword ptr [ecx + 0x24]
// 00530ace  896c2410             mov dword ptr [esp + 0x10], ebp
// 00530ad2  0f8c0cffffff         jl 0x5309e4
// 00530ad8  5f                   pop edi
// 00530ad9  5b                   pop ebx
// 00530ada  5e                   pop esi
// 00530adb  5d                   pop ebp
// 00530adc  83c420               add esp, 0x20
// 00530adf  c3                   ret 
// library jpeg-6b/jdmainct.c (function _make_funny_pointers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmainct.c
