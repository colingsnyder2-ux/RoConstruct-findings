// roc 2012-06 00994f50  unit: CXTPCommandBar  size: 1336 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00994f50
//
// 00994f50  83ec40               sub esp, 0x40
// 00994f53  53                   push ebx
// 00994f54  55                   push ebp
// 00994f55  56                   push esi
// 00994f56  8bf1                 mov esi, ecx
// 00994f58  83be0001000005       cmp dword ptr [esi + 0x100], 5
// 00994f5f  57                   push edi
// 00994f60  750d                 jne 0x994f6f
// 00994f62  bf01000000           mov edi, 1
// 00994f67  39bef8000000         cmp dword ptr [esi + 0xf8], edi
// 00994f6d  7402                 je 0x994f71
// 00994f6f  33ff                 xor edi, edi
// 00994f71  8b5c2454             mov ebx, dword ptr [esp + 0x54]
// 00994f75  85db                 test ebx, ebx
// 00994f77  7405                 je 0x994f7e
// 00994f79  83fb01               cmp ebx, 1
// 00994f7c  7505                 jne 0x994f83
// 00994f7e  e8fdeaffff           call 0x993a80
// 00994f83  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00994f89  83cdff               or ebp, 0xffffffff
// 00994f8c  3bc5                 cmp eax, ebp
// 00994f8e  741e                 je 0x994fae
// 00994f90  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 00994f96  7516                 jne 0x994fae
// 00994f98  85ff                 test edi, edi
// 00994f9a  7412                 je 0x994fae
// 00994f9c  85db                 test ebx, ebx
// 00994f9e  0f84b5040000         je 0x995459
// 00994fa4  83fb01               cmp ebx, 1
// 00994fa7  7561                 jne 0x99500a
// 00994fa9  8d5d03               lea ebx, [ebp + 3]
// 00994fac  eb6a                 jmp 0x995018
// 00994fae  83fb02               cmp ebx, 2
// 00994fb1  7557                 jne 0x99500a
// 00994fb3  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 00994fb9  0f85a8020000         jne 0x995267
// 00994fbf  3bc5                 cmp eax, ebp
// 00994fc1  7455                 je 0x995018
// 00994fc3  85ff                 test edi, edi
// 00994fc5  7510                 jne 0x994fd7
// 00994fc7  8b06                 mov eax, dword ptr [esi]
// 00994fc9  8b9094010000         mov edx, dword ptr [eax + 0x194]
// 00994fcf  8bce                 mov ecx, esi
// 00994fd1  ffd2                 call edx
// 00994fd3  85c0                 test eax, eax
// 00994fd5  7541                 jne 0x995018
// 00994fd7  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00994fdd  50                   push eax
// 00994fde  8bce                 mov ecx, esi
// 00994fe0  e82bebffff           call 0x993b10
// 00994fe5  50                   push eax
// 00994fe6  e845390300           call 0x9c8930
// 00994feb  50                   push eax
// 00994fec  e8f5d4feff           call 0x9824e6
// 00994ff1  83c408               add esp, 8
// 00994ff4  85c0                 test eax, eax
// 00994ff6  7420                 je 0x995018
// 00994ff8  8bc8                 mov ecx, eax
// 00994ffa  e8c12daeff           call 0x477dc0
// 00994fff  85c0                 test eax, eax
// 00995001  7415                 je 0x995018
// 00995003  bb03000000           mov ebx, 3
// 00995008  eb0e                 jmp 0x995018
// 0099500a  83fb03               cmp ebx, 3
// 0099500d  7409                 je 0x995018
// 0099500f  83fb02               cmp ebx, 2
// 00995012  0f854f020000         jne 0x995267
// 00995018  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 0099501e  0f8543020000         jne 0x995267
// 00995024  85ff                 test edi, edi
// 00995026  750d                 jne 0x995035
// 00995028  83be0001000004       cmp dword ptr [esi + 0x100], 4
// 0099502f  0f8532020000         jne 0x995267
// 00995035  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0099503b  33c9                 xor ecx, ecx
// 0099503d  83fb03               cmp ebx, 3
// 00995040  0f94c1               sete cl
// 00995043  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 00995047  8bf9                 mov edi, ecx
// 00995049  897c2454             mov dword ptr [esp + 0x54], edi
// 0099504d  3bc5                 cmp eax, ebp
// 0099504f  753b                 jne 0x99508c
// 00995051  8b1e                 mov ebx, dword ptr [esi]
// 00995053  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00995059  8bd7                 mov edx, edi
// 0099505b  81c350010000         add ebx, 0x150
// 00995061  f7da                 neg edx
// 00995063  1bd2                 sbb edx, edx
// 00995065  83c203               add edx, 3
// 00995068  52                   push edx
// 00995069  6a01                 push 1
// 0099506b  6a00                 push 0
// 0099506d  6a01                 push 1
// 0099506f  57                   push edi
// 00995070  55                   push ebp
// 00995071  e80aa30300           call 0x9cf380
// 00995076  50                   push eax
// 00995077  8b03                 mov eax, dword ptr [ebx]
// 00995079  8bce                 mov ecx, esi
// 0099507b  ffd0                 call eax
// 0099507d  5f                   pop edi
// 0099507e  5e                   pop esi
// 0099507f  5d                   pop ebp
// 00995080  b801000000           mov eax, 1
// 00995085  5b                   pop ebx
// 00995086  83c440               add esp, 0x40
// 00995089  c20400               ret 4
// 0099508c  50                   push eax
// 0099508d  8bce                 mov ecx, esi
// 0099508f  e87ceaffff           call 0x993b10
// 00995094  50                   push eax
// 00995095  e896380300           call 0x9c8930
// 0099509a  50                   push eax
// 0099509b  e846d4feff           call 0x9824e6
// 009950a0  83c408               add esp, 8
// 009950a3  85c0                 test eax, eax
// 009950a5  7427                 je 0x9950ce
// 009950a7  8b889c000000         mov ecx, dword ptr [eax + 0x9c]
// 009950ad  3bcd                 cmp ecx, ebp
// 009950af  7513                 jne 0x9950c4
// 009950b1  8b805c010000         mov eax, dword ptr [eax + 0x15c]
// 009950b7  85c0                 test eax, eax
// 009950b9  7409                 je 0x9950c4
// 009950bb  8bc8                 mov ecx, eax
// 009950bd  e85efefeff           call 0x984f20
// 009950c2  eb02                 jmp 0x9950c6
// 009950c4  8bc1                 mov eax, ecx
// 009950c6  85c0                 test eax, eax
// 009950c8  0f8599010000         jne 0x995267
// 009950ce  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 009950d4  51                   push ecx
// 009950d5  8bce                 mov ecx, esi
// 009950d7  e834eaffff           call 0x993b10
// 009950dc  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 009950e2  8b88c4000000         mov ecx, dword ptr [eax + 0xc4]
// 009950e8  8baecc000000         mov ebp, dword ptr [esi + 0xcc]
// 009950ee  89542410             mov dword ptr [esp + 0x10], edx
// 009950f2  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 009950f8  894c2414             mov dword ptr [esp + 0x14], ecx
// 009950fc  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 00995102  89542418             mov dword ptr [esp + 0x18], edx
// 00995106  8b90b0000000         mov edx, dword ptr [eax + 0xb0]
// 0099510c  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00995110  8b88b4000000         mov ecx, dword ptr [eax + 0xb4]
// 00995116  89542420             mov dword ptr [esp + 0x20], edx
// 0099511a  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00995120  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00995126  33db                 xor ebx, ebx
// 00995128  894c2424             mov dword ptr [esp + 0x24], ecx
// 0099512c  89542428             mov dword ptr [esp + 0x28], edx
// 00995130  8944242c             mov dword ptr [esp + 0x2c], eax
// 00995134  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0099513a  6a01                 push 1
// 0099513c  6a00                 push 0
// 0099513e  6a01                 push 1
// 00995140  57                   push edi
// 00995141  55                   push ebp
// 00995142  e839a20300           call 0x9cf380
// 00995147  8be8                 mov ebp, eax
// 00995149  55                   push ebp
// 0099514a  8bce                 mov ecx, esi
// 0099514c  e8bfe9ffff           call 0x993b10
// 00995151  8bf8                 mov edi, eax
// 00995153  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 00995159  8b97c8000000         mov edx, dword ptr [edi + 0xc8]
// 0099515f  8b87c0000000         mov eax, dword ptr [edi + 0xc0]
// 00995165  89542448             mov dword ptr [esp + 0x48], edx
// 00995169  8b97b0000000         mov edx, dword ptr [edi + 0xb0]
// 0099516f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00995173  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00995179  89542430             mov dword ptr [esp + 0x30], edx
// 0099517d  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00995181  8b8fb4000000         mov ecx, dword ptr [edi + 0xb4]
// 00995187  894c2434             mov dword ptr [esp + 0x34], ecx
// 0099518b  8b97b8000000         mov edx, dword ptr [edi + 0xb8]
// 00995191  89542438             mov dword ptr [esp + 0x38], edx
// 00995195  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 0099519b  8954243c             mov dword ptr [esp + 0x3c], edx
// 0099519f  85db                 test ebx, ebx
// 009951a1  0f8493000000         je 0x99523a
// 009951a7  398bb4000000         cmp dword ptr [ebx + 0xb4], ecx
// 009951ad  755c                 jne 0x99520b
// 009951af  3b442410             cmp eax, dword ptr [esp + 0x10]
// 009951b3  7f2e                 jg 0x9951e3
// 009951b5  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 009951bb  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 009951c1  3bc1                 cmp eax, ecx
// 009951c3  89542444             mov dword ptr [esp + 0x44], edx
// 009951c7  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 009951cd  89542448             mov dword ptr [esp + 0x48], edx
// 009951d1  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 009951d7  8954244c             mov dword ptr [esp + 0x4c], edx
// 009951db  7f72                 jg 0x99524f
// 009951dd  3b442410             cmp eax, dword ptr [esp + 0x10]
// 009951e1  7c28                 jl 0x99520b
// 009951e3  8b93c4000000         mov edx, dword ptr [ebx + 0xc4]
// 009951e9  8b8bc0000000         mov ecx, dword ptr [ebx + 0xc0]
// 009951ef  3bc8                 cmp ecx, eax
// 009951f1  89542444             mov dword ptr [esp + 0x44], edx
// 009951f5  8b93c8000000         mov edx, dword ptr [ebx + 0xc8]
// 009951fb  89542448             mov dword ptr [esp + 0x48], edx
// 009951ff  8b93cc000000         mov edx, dword ptr [ebx + 0xcc]
// 00995205  8954244c             mov dword ptr [esp + 0x4c], edx
// 00995209  7f44                 jg 0x99524f
// 0099520b  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 00995211  8b16                 mov edx, dword ptr [esi]
// 00995213  8b9250010000         mov edx, dword ptr [edx + 0x150]
// 00995219  33c0                 xor eax, eax
// 0099521b  39442454             cmp dword ptr [esp + 0x54], eax
// 0099521f  0f9ec0               setle al
// 00995222  83c002               add eax, 2
// 00995225  50                   push eax
// 00995226  51                   push ecx
// 00995227  8bce                 mov ecx, esi
// 00995229  ffd2                 call edx
// 0099522b  5f                   pop edi
// 0099522c  5e                   pop esi
// 0099522d  5d                   pop ebp
// 0099522e  b801000000           mov eax, 1
// 00995233  5b                   pop ebx
// 00995234  83c440               add esp, 0x40
// 00995237  c20400               ret 4
// 0099523a  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 0099523e  7411                 je 0x995251
// 00995240  8d442430             lea eax, [esp + 0x30]
// 00995244  50                   push eax
// 00995245  ff15f03ab200         call dword ptr [0xb23af0]
// 0099524b  85c0                 test eax, eax
// 0099524d  7502                 jne 0x995251
// 0099524f  8bdf                 mov ebx, edi
// 00995251  3baecc000000         cmp ebp, dword ptr [esi + 0xcc]
// 00995257  74d2                 je 0x99522b
// 00995259  83fdff               cmp ebp, -1
// 0099525c  74cd                 je 0x99522b
// 0099525e  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00995262  e9cdfeffff           jmp 0x995134
// 00995267  83fb07               cmp ebx, 7
// 0099526a  0f87e9010000         ja 0x995459
// 00995270  ff249d68549900       jmp dword ptr [ebx*4 + 0x995468]
// 00995277  6a02                 push 2
// 00995279  6a01                 push 1
// 0099527b  6a00                 push 0
// 0099527d  6a01                 push 1
// 0099527f  6a01                 push 1
// 00995281  8b3e                 mov edi, dword ptr [esi]
// 00995283  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00995289  81c750010000         add edi, 0x150
// 0099528f  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00995295  50                   push eax
// 00995296  e8e5a00300           call 0x9cf380
// 0099529b  8b17                 mov edx, dword ptr [edi]
// 0099529d  50                   push eax
// 0099529e  8bce                 mov ecx, esi
// 009952a0  ffd2                 call edx
// 009952a2  5f                   pop edi
// 009952a3  5e                   pop esi
// 009952a4  5d                   pop ebp
// 009952a5  b801000000           mov eax, 1
// 009952aa  5b                   pop ebx
// 009952ab  83c440               add esp, 0x40
// 009952ae  c20400               ret 4
// 009952b1  6a03                 push 3
// 009952b3  6a01                 push 1
// 009952b5  6a00                 push 0
// 009952b7  6a01                 push 1
// 009952b9  55                   push ebp
// 009952ba  ebc5                 jmp 0x995281
// 009952bc  8b3e                 mov edi, dword ptr [esi]
// 009952be  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 009952c4  6a02                 push 2
// 009952c6  6a01                 push 1
// 009952c8  6a00                 push 0
// 009952ca  6a01                 push 1
// 009952cc  6a01                 push 1
// 009952ce  55                   push ebp
// 009952cf  81c750010000         add edi, 0x150
// 009952d5  e8a6a00300           call 0x9cf380
// 009952da  50                   push eax
// 009952db  8b07                 mov eax, dword ptr [edi]
// 009952dd  8bce                 mov ecx, esi
// 009952df  ffd0                 call eax
// 009952e1  5f                   pop edi
// 009952e2  5e                   pop esi
// 009952e3  5d                   pop ebp
// 009952e4  b801000000           mov eax, 1
// 009952e9  5b                   pop ebx
// 009952ea  83c440               add esp, 0x40
// 009952ed  c20400               ret 4
// 009952f0  8b3e                 mov edi, dword ptr [esi]
// 009952f2  6a03                 push 3
// 009952f4  6a01                 push 1
// 009952f6  6a00                 push 0
// 009952f8  6a01                 push 1
// 009952fa  55                   push ebp
// 009952fb  8bce                 mov ecx, esi
// 009952fd  81c750010000         add edi, 0x150
// 00995303  e8f8e7ffff           call 0x993b00
// 00995308  eb85                 jmp 0x99528f
// 0099530a  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00995310  3bc5                 cmp eax, ebp
// 00995312  0f8441010000         je 0x995459
// 00995318  3b86d0000000         cmp eax, dword ptr [esi + 0xd0]
// 0099531e  0f8435010000         je 0x995459
// 00995324  50                   push eax
// 00995325  8bce                 mov ecx, esi
// 00995327  e8e4e7ffff           call 0x993b10
// 0099532c  8b10                 mov edx, dword ptr [eax]
// 0099532e  8bc8                 mov ecx, eax
// 00995330  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00995336  6a02                 push 2
// 00995338  ffd0                 call eax
// 0099533a  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00995340  6a00                 push 0
// 00995342  51                   push ecx
// 00995343  8bce                 mov ecx, esi
// 00995345  e806fbffff           call 0x994e50
// 0099534a  5f                   pop edi
// 0099534b  5e                   pop esi
// 0099534c  5d                   pop ebp
// 0099534d  5b                   pop ebx
// 0099534e  83c440               add esp, 0x40
// 00995351  c20400               ret 4
// 00995354  39aed0000000         cmp dword ptr [esi + 0xd0], ebp
// 0099535a  0f84f9000000         je 0x995459
// 00995360  6a00                 push 0
// 00995362  55                   push ebp
// 00995363  8bce                 mov ecx, esi
// 00995365  e8e6faffff           call 0x994e50
// 0099536a  8b16                 mov edx, dword ptr [esi]
// 0099536c  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00995372  6a00                 push 0
// 00995374  6a00                 push 0
// 00995376  6a01                 push 1
// 00995378  8bce                 mov ecx, esi
// 0099537a  ffd0                 call eax
// 0099537c  5f                   pop edi
// 0099537d  5e                   pop esi
// 0099537e  5d                   pop ebp
// 0099537f  b801000000           mov eax, 1
// 00995384  5b                   pop ebx
// 00995385  83c440               add esp, 0x40
// 00995388  c20400               ret 4
// 0099538b  8bce                 mov ecx, esi
// 0099538d  e86ed10000           call 0x9a2500
// 00995392  83f801               cmp eax, 1
// 00995395  8bce                 mov ecx, esi
// 00995397  7e1e                 jle 0x9953b7
// 00995399  48                   dec eax
// 0099539a  50                   push eax
// 0099539b  56                   push esi
// 0099539c  e84fd9ffff           call 0x992cf0
// 009953a1  8bc8                 mov ecx, eax
// 009953a3  e808fc0000           call 0x9a4fb0
// 009953a8  5f                   pop edi
// 009953a9  5e                   pop esi
// 009953aa  5d                   pop ebp
// 009953ab  b801000000           mov eax, 1
// 009953b0  5b                   pop ebx
// 009953b1  83c440               add esp, 0x40
// 009953b4  c20400               ret 4
// 009953b7  8b16                 mov edx, dword ptr [esi]
// 009953b9  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009953bf  ffd0                 call eax
// 009953c1  85c0                 test eax, eax
// 009953c3  741e                 je 0x9953e3
// 009953c5  8b16                 mov edx, dword ptr [esi]
// 009953c7  8b8294010000         mov eax, dword ptr [edx + 0x194]
// 009953cd  8bce                 mov ecx, esi
// 009953cf  ffd0                 call eax
// 009953d1  8b10                 mov edx, dword ptr [eax]
// 009953d3  6a00                 push 0
// 009953d5  6a00                 push 0
// 009953d7  8bc8                 mov ecx, eax
// 009953d9  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 009953df  6a01                 push 1
// 009953e1  ffd0                 call eax
// 009953e3  8b16                 mov edx, dword ptr [esi]
// 009953e5  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 009953eb  6a00                 push 0
// 009953ed  6a01                 push 1
// 009953ef  6a00                 push 0
// 009953f1  8bce                 mov ecx, esi
// 009953f3  ffd0                 call eax
// 009953f5  5f                   pop edi
// 009953f6  5e                   pop esi
// 009953f7  5d                   pop ebp
// 009953f8  b801000000           mov eax, 1
// 009953fd  5b                   pop ebx
// 009953fe  83c440               add esp, 0x40
// 00995401  c20400               ret 4
// 00995404  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0099540a  3bc5                 cmp eax, ebp
// 0099540c  0f8490feffff         je 0x9952a2
// 00995412  50                   push eax
// 00995413  8bce                 mov ecx, esi
// 00995415  e8f6e6ffff           call 0x993b10
// 0099541a  8b10                 mov edx, dword ptr [eax]
// 0099541c  8bc8                 mov ecx, eax
// 0099541e  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00995424  6a02                 push 2
// 00995426  ffd0                 call eax
// 00995428  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0099542e  51                   push ecx
// 0099542f  8bce                 mov ecx, esi
// 00995431  e8dae6ffff           call 0x993b10
// 00995436  8b30                 mov esi, dword ptr [eax]
// 00995438  33d2                 xor edx, edx
// 0099543a  52                   push edx
// 0099543b  8b96e8000000         mov edx, dword ptr [esi + 0xe8]
// 00995441  33c9                 xor ecx, ecx
// 00995443  51                   push ecx
// 00995444  6a01                 push 1
// 00995446  8bc8                 mov ecx, eax
// 00995448  ffd2                 call edx
// 0099544a  5f                   pop edi
// 0099544b  5e                   pop esi
// 0099544c  5d                   pop ebp
// 0099544d  b801000000           mov eax, 1
// 00995452  5b                   pop ebx
// 00995453  83c440               add esp, 0x40
// 00995456  c20400               ret 4
// 00995459  5f                   pop edi
// 0099545a  5e                   pop esi
// 0099545b  5d                   pop ebp
// 0099545c  33c0                 xor eax, eax
// 0099545e  5b                   pop ebx
// 0099545f  83c440               add esp, 0x40
// 00995462  c20400               ret 4
// 00995465  8d4900               lea ecx, [ecx]
// 00995468  7752                 ja 0x9954bc
// 0099546a  99                   cdq 
// 0099546b  00b152990054         add byte ptr [ecx + 0x54009952], dh
// 00995471  53                   push ebx
// 00995472  99                   cdq 
// 00995473  000a                 add byte ptr [edx], cl
// 00995475  53                   push ebx
// 00995476  99                   cdq 
// 00995477  008b53990004         add byte ptr [ebx + 0x4009953], cl
// 0099547d  54                   push esp
// 0099547e  99                   cdq 
// 0099547f  00bc529900f052       add byte ptr [edx + edx*2 + 0x52f00099], bh
// 00995486  99                   cdq 
// copied from an identical function in another client (function ?ProcessSpecialKey@CXTPCommandBar@@MAEHW4XTPSpecialKey@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp