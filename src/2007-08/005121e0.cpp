// roc 2007-08 005121e0  unit: G3D::_internal::DialogTemplate  size: 789 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005121e0
//
// 005121e0  83ec18               sub esp, 0x18
// 005121e3  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005121e9  80780d00             cmp byte ptr [eax + 0xd], 0
// 005121ed  53                   push ebx
// 005121ee  55                   push ebp
// 005121ef  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005121f2  8b5d00               mov ebx, dword ptr [ebp]
// 005121f5  57                   push edi
// 005121f6  8b7d04               mov edi, dword ptr [ebp + 4]
// 005121f9  896c2420             mov dword ptr [esp + 0x20], ebp
// 005121fd  7513                 jne 0x512212
// 005121ff  8b0e                 mov ecx, dword ptr [esi]
// 00512201  c741143e000000       mov dword ptr [ecx + 0x14], 0x3e
// 00512208  8b16                 mov edx, dword ptr [esi]
// 0051220a  8b02                 mov eax, dword ptr [edx]
// 0051220c  56                   push esi
// 0051220d  ffd0                 call eax
// 0051220f  83c404               add esp, 4
// 00512212  85ff                 test edi, edi
// 00512214  751e                 jne 0x512234
// 00512216  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00512219  56                   push esi
// 0051221a  ffd1                 call ecx
// 0051221c  83c404               add esp, 4
// 0051221f  84c0                 test al, al
// 00512221  7509                 jne 0x51222c
// 00512223  5f                   pop edi
// 00512224  5d                   pop ebp
// 00512225  32c0                 xor al, al
// 00512227  5b                   pop ebx
// 00512228  83c418               add esp, 0x18
// 0051222b  c3                   ret 
// 0051222c  8b5504               mov edx, dword ptr [ebp + 4]
// 0051222f  8b5d00               mov ebx, dword ptr [ebp]
// 00512232  8bfa                 mov edi, edx
// 00512234  33c0                 xor eax, eax
// 00512236  8a23                 mov ah, byte ptr [ebx]
// 00512238  83ef01               sub edi, 1
// 0051223b  83c301               add ebx, 1
// 0051223e  85ff                 test edi, edi
// 00512240  89442410             mov dword ptr [esp + 0x10], eax
// 00512244  7515                 jne 0x51225b
// 00512246  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00512249  56                   push esi
// 0051224a  ffd1                 call ecx
// 0051224c  83c404               add esp, 4
// 0051224f  84c0                 test al, al
// 00512251  74d0                 je 0x512223
// 00512253  8b5504               mov edx, dword ptr [ebp + 4]
// 00512256  8b5d00               mov ebx, dword ptr [ebp]
// 00512259  8bfa                 mov edi, edx
// 0051225b  0fb603               movzx eax, byte ptr [ebx]
// 0051225e  01442410             add dword ptr [esp + 0x10], eax
// 00512262  83ef01               sub edi, 1
// 00512265  83c301               add ebx, 1
// 00512268  85ff                 test edi, edi
// 0051226a  7515                 jne 0x512281
// 0051226c  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0051226f  56                   push esi
// 00512270  ffd1                 call ecx
// 00512272  83c404               add esp, 4
// 00512275  84c0                 test al, al
// 00512277  74aa                 je 0x512223
// 00512279  8b5504               mov edx, dword ptr [ebp + 4]
// 0051227c  8b5d00               mov ebx, dword ptr [ebp]
// 0051227f  8bfa                 mov edi, edx
// 00512281  0fb603               movzx eax, byte ptr [ebx]
// 00512284  8b0e                 mov ecx, dword ptr [esi]
// 00512286  c7411467000000       mov dword ptr [ecx + 0x14], 0x67
// 0051228d  8b16                 mov edx, dword ptr [esi]
// 0051228f  894218               mov dword ptr [edx + 0x18], eax
// 00512292  89442418             mov dword ptr [esp + 0x18], eax
// 00512296  8b06                 mov eax, dword ptr [esi]
// 00512298  8b4804               mov ecx, dword ptr [eax + 4]
// 0051229b  6a01                 push 1
// 0051229d  56                   push esi
// 0051229e  83ef01               sub edi, 1
// 005122a1  83c301               add ebx, 1
// 005122a4  ffd1                 call ecx
// 005122a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005122aa  8d540006             lea edx, [eax + eax + 6]
// 005122ae  83c408               add esp, 8
// 005122b1  39542410             cmp dword ptr [esp + 0x10], edx
// 005122b5  750a                 jne 0x5122c1
// 005122b7  83f801               cmp eax, 1
// 005122ba  7c05                 jl 0x5122c1
// 005122bc  83f804               cmp eax, 4
// 005122bf  7e17                 jle 0x5122d8
// 005122c1  8b06                 mov eax, dword ptr [esi]
// 005122c3  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 005122ca  8b0e                 mov ecx, dword ptr [esi]
// 005122cc  8b11                 mov edx, dword ptr [ecx]
// 005122ce  56                   push esi
// 005122cf  ffd2                 call edx
// 005122d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005122d5  83c404               add esp, 4
// 005122d8  85c0                 test eax, eax
// 005122da  898624010000         mov dword ptr [esi + 0x124], eax
// 005122e0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005122e8  0f8e08010000         jle 0x5123f6
// 005122ee  8d8628010000         lea eax, [esi + 0x128]
// 005122f4  89442414             mov dword ptr [esp + 0x14], eax
// 005122f8  85ff                 test edi, edi
// 005122fa  751d                 jne 0x512319
// 005122fc  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005122ff  56                   push esi
// 00512300  ffd1                 call ecx
// 00512302  83c404               add esp, 4
// 00512305  84c0                 test al, al
// 00512307  0f8416ffffff         je 0x512223
// 0051230d  8b5504               mov edx, dword ptr [ebp + 4]
// 00512310  8b5d00               mov ebx, dword ptr [ebp]
// 00512313  8954240c             mov dword ptr [esp + 0xc], edx
// 00512317  8bfa                 mov edi, edx
// 00512319  0fb603               movzx eax, byte ptr [ebx]
// 0051231c  83ef01               sub edi, 1
// 0051231f  83c301               add ebx, 1
// 00512322  85ff                 test edi, edi
// 00512324  89442410             mov dword ptr [esp + 0x10], eax
// 00512328  751d                 jne 0x512347
// 0051232a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0051232d  56                   push esi
// 0051232e  ffd1                 call ecx
// 00512330  83c404               add esp, 4
// 00512333  84c0                 test al, al
// 00512335  0f84e8feffff         je 0x512223
// 0051233b  8b5504               mov edx, dword ptr [ebp + 4]
// 0051233e  8b5d00               mov ebx, dword ptr [ebp]
// 00512341  8954240c             mov dword ptr [esp + 0xc], edx
// 00512345  8bfa                 mov edi, edx
// 00512347  0fb62b               movzx ebp, byte ptr [ebx]
// 0051234a  83ef01               sub edi, 1
// 0051234d  33c0                 xor eax, eax
// 0051234f  83c301               add ebx, 1
// 00512352  394624               cmp dword ptr [esi + 0x24], eax
// 00512355  897c240c             mov dword ptr [esp + 0xc], edi
// 00512359  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0051235f  7e13                 jle 0x512374
// 00512361  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00512365  3b0f                 cmp ecx, dword ptr [edi]
// 00512367  7427                 je 0x512390
// 00512369  83c001               add eax, 1
// 0051236c  83c754               add edi, 0x54
// 0051236f  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00512372  7ced                 jl 0x512361
// 00512374  8b16                 mov edx, dword ptr [esi]
// 00512376  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051237a  c7421405000000       mov dword ptr [edx + 0x14], 5
// 00512381  8b06                 mov eax, dword ptr [esi]
// 00512383  894818               mov dword ptr [eax + 0x18], ecx
// 00512386  8b16                 mov edx, dword ptr [esi]
// 00512388  8b02                 mov eax, dword ptr [edx]
// 0051238a  56                   push esi
// 0051238b  ffd0                 call eax
// 0051238d  83c404               add esp, 4
// 00512390  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00512394  8939                 mov dword ptr [ecx], edi
// 00512396  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0051239a  8bd5                 mov edx, ebp
// 0051239c  c1fa04               sar edx, 4
// 0051239f  83e20f               and edx, 0xf
// 005123a2  895714               mov dword ptr [edi + 0x14], edx
// 005123a5  83e50f               and ebp, 0xf
// 005123a8  896f18               mov dword ptr [edi + 0x18], ebp
// 005123ab  8b06                 mov eax, dword ptr [esi]
// 005123ad  83c018               add eax, 0x18
// 005123b0  8908                 mov dword ptr [eax], ecx
// 005123b2  8b5714               mov edx, dword ptr [edi + 0x14]
// 005123b5  895004               mov dword ptr [eax + 4], edx
// 005123b8  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005123bb  894808               mov dword ptr [eax + 8], ecx
// 005123be  8b16                 mov edx, dword ptr [esi]
// 005123c0  c7421468000000       mov dword ptr [edx + 0x14], 0x68
// 005123c7  8b06                 mov eax, dword ptr [esi]
// 005123c9  8b4804               mov ecx, dword ptr [eax + 4]
// 005123cc  6a01                 push 1
// 005123ce  56                   push esi
// 005123cf  ffd1                 call ecx
// 005123d1  8b442424             mov eax, dword ptr [esp + 0x24]
// 005123d5  8344241c04           add dword ptr [esp + 0x1c], 4
// 005123da  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005123de  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005123e2  83c001               add eax, 1
// 005123e5  83c408               add esp, 8
// 005123e8  3b442418             cmp eax, dword ptr [esp + 0x18]
// 005123ec  8944241c             mov dword ptr [esp + 0x1c], eax
// 005123f0  0f8c02ffffff         jl 0x5122f8
// 005123f6  85ff                 test edi, edi
// 005123f8  751d                 jne 0x512417
// 005123fa  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005123fd  56                   push esi
// 005123fe  ffd2                 call edx
// 00512400  83c404               add esp, 4
// 00512403  84c0                 test al, al
// 00512405  0f8418feffff         je 0x512223
// 0051240b  8b4504               mov eax, dword ptr [ebp + 4]
// 0051240e  8b5d00               mov ebx, dword ptr [ebp]
// 00512411  8944240c             mov dword ptr [esp + 0xc], eax
// 00512415  8bf8                 mov edi, eax
// 00512417  0fb603               movzx eax, byte ptr [ebx]
// 0051241a  83ef01               sub edi, 1
// 0051241d  83c301               add ebx, 1
// 00512420  85ff                 test edi, edi
// 00512422  89866c010000         mov dword ptr [esi + 0x16c], eax
// 00512428  751d                 jne 0x512447
// 0051242a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0051242d  56                   push esi
// 0051242e  ffd1                 call ecx
// 00512430  83c404               add esp, 4
// 00512433  84c0                 test al, al
// 00512435  0f84e8fdffff         je 0x512223
// 0051243b  8b5504               mov edx, dword ptr [ebp + 4]
// 0051243e  8b5d00               mov ebx, dword ptr [ebp]
// 00512441  8954240c             mov dword ptr [esp + 0xc], edx
// 00512445  8bfa                 mov edi, edx
// 00512447  0fb603               movzx eax, byte ptr [ebx]
// 0051244a  83ef01               sub edi, 1
// 0051244d  83c301               add ebx, 1
// 00512450  85ff                 test edi, edi
// 00512452  898670010000         mov dword ptr [esi + 0x170], eax
// 00512458  751d                 jne 0x512477
// 0051245a  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0051245d  56                   push esi
// 0051245e  ffd0                 call eax
// 00512460  83c404               add esp, 4
// 00512463  84c0                 test al, al
// 00512465  0f84b8fdffff         je 0x512223
// 0051246b  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0051246e  8b5d00               mov ebx, dword ptr [ebp]
// 00512471  894c240c             mov dword ptr [esp + 0xc], ecx
// 00512475  8bf9                 mov edi, ecx
// 00512477  0fb603               movzx eax, byte ptr [ebx]
// 0051247a  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00512480  8bd0                 mov edx, eax
// 00512482  83e00f               and eax, 0xf
// 00512485  898678010000         mov dword ptr [esi + 0x178], eax
// 0051248b  8b06                 mov eax, dword ptr [esi]
// 0051248d  c1fa04               sar edx, 4
// 00512490  83e20f               and edx, 0xf
// 00512493  899674010000         mov dword ptr [esi + 0x174], edx
// 00512499  83c018               add eax, 0x18
// 0051249c  8908                 mov dword ptr [eax], ecx
// 0051249e  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 005124a4  895004               mov dword ptr [eax + 4], edx
// 005124a7  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 005124ad  894808               mov dword ptr [eax + 8], ecx
// 005124b0  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 005124b6  89500c               mov dword ptr [eax + 0xc], edx
// 005124b9  8b06                 mov eax, dword ptr [esi]
// 005124bb  c7401469000000       mov dword ptr [eax + 0x14], 0x69
// 005124c2  8b0e                 mov ecx, dword ptr [esi]
// 005124c4  8b5104               mov edx, dword ptr [ecx + 4]
// 005124c7  6a01                 push 1
// 005124c9  56                   push esi
// 005124ca  ffd2                 call edx
// 005124cc  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005124d2  c7401000000000       mov dword ptr [eax + 0x10], 0
// 005124d9  83467c01             add dword ptr [esi + 0x7c], 1
// 005124dd  83c408               add esp, 8
// 005124e0  83c301               add ebx, 1
// 005124e3  83c7ff               add edi, -1
// 005124e6  897d04               mov dword ptr [ebp + 4], edi
// 005124e9  5f                   pop edi
// 005124ea  895d00               mov dword ptr [ebp], ebx
// 005124ed  5d                   pop ebp
// 005124ee  b001                 mov al, 1
// 005124f0  5b                   pop ebx
// 005124f1  83c418               add esp, 0x18
// 005124f4  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sos)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
