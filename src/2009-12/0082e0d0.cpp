// roc 2009-12 0082e0d0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 722 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082e0d0
//
// 0082e0d0  6aff                 push -1
// 0082e0d2  68b3bd9500           push 0x95bdb3
// 0082e0d7  64a100000000         mov eax, dword ptr fs:[0]
// 0082e0dd  50                   push eax
// 0082e0de  83ec3c               sub esp, 0x3c
// 0082e0e1  53                   push ebx
// 0082e0e2  55                   push ebp
// 0082e0e3  56                   push esi
// 0082e0e4  57                   push edi
// 0082e0e5  a10052b600           mov eax, dword ptr [0xb65200]
// 0082e0ea  33c4                 xor eax, esp
// 0082e0ec  50                   push eax
// 0082e0ed  8d442450             lea eax, [esp + 0x50]
// 0082e0f1  64a300000000         mov dword ptr fs:[0], eax
// 0082e0f7  8be9                 mov ebp, ecx
// 0082e0f9  896c2420             mov dword ptr [esp + 0x20], ebp
// 0082e0fd  8b442464             mov eax, dword ptr [esp + 0x64]
// 0082e101  33db                 xor ebx, ebx
// 0082e103  895c2414             mov dword ptr [esp + 0x14], ebx
// 0082e107  33ff                 xor edi, edi
// 0082e109  8918                 mov dword ptr [eax], ebx
// 0082e10b  395d28               cmp dword ptr [ebp + 0x28], ebx
// 0082e10e  895c2418             mov dword ptr [esp + 0x18], ebx
// 0082e112  897c241c             mov dword ptr [esp + 0x1c], edi
// 0082e116  0f8e91010000         jle 0x82e2ad
// 0082e11c  8d642400             lea esp, [esp]
// 0082e120  3bfb                 cmp edi, ebx
// 0082e122  0f8c75020000         jl 0x82e39d
// 0082e128  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 0082e12b  0f8d6c020000         jge 0x82e39d
// 0082e131  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0082e134  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 0082e137  8b16                 mov edx, dword ptr [esi]
// 0082e139  8d04b9               lea eax, [ecx + edi*4]
// 0082e13c  8b8288000000         mov eax, dword ptr [edx + 0x88]
// 0082e142  8bce                 mov ecx, esi
// 0082e144  8974242c             mov dword ptr [esp + 0x2c], esi
// 0082e148  ffd0                 call eax
// 0082e14a  85c0                 test eax, eax
// 0082e14c  0f84a1010000         je 0x82e2f3
// 0082e152  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 0082e156  8b5500               mov edx, dword ptr [ebp]
// 0082e159  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082e15c  8bcd                 mov ecx, ebp
// 0082e15e  ffd0                 call eax
// 0082e160  8bf8                 mov edi, eax
// 0082e162  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0082e165  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 0082e16b  3bfb                 cmp edi, ebx
// 0082e16d  0f8424010000         je 0x82e297
// 0082e173  3bc3                 cmp eax, ebx
// 0082e175  0f841c010000         je 0x82e297
// 0082e17b  8b16                 mov edx, dword ptr [esi]
// 0082e17d  8b6820               mov ebp, dword ptr [eax + 0x20]
// 0082e180  8b82dc000000         mov eax, dword ptr [edx + 0xdc]
// 0082e186  8bce                 mov ecx, esi
// 0082e188  ffd0                 call eax
// 0082e18a  50                   push eax
// 0082e18b  8bcd                 mov ecx, ebp
// 0082e18d  e81ef40300           call 0x86d5b0
// 0082e192  8be8                 mov ebp, eax
// 0082e194  55                   push ebp
// 0082e195  8bcf                 mov ecx, edi
// 0082e197  e8a4cbffff           call 0x82ad40
// 0082e19c  3bc3                 cmp eax, ebx
// 0082e19e  7422                 je 0x82e1c2
// 0082e1a0  8b10                 mov edx, dword ptr [eax]
// 0082e1a2  8b5274               mov edx, dword ptr [edx + 0x74]
// 0082e1a5  55                   push ebp
// 0082e1a6  8d4c2428             lea ecx, [esp + 0x28]
// 0082e1aa  51                   push ecx
// 0082e1ab  8bc8                 mov ecx, eax
// 0082e1ad  ffd2                 call edx
// 0082e1af  834c241401           or dword ptr [esp + 0x14], 1
// 0082e1b4  8bc8                 mov ecx, eax
// 0082e1b6  895c2458             mov dword ptr [esp + 0x58], ebx
// 0082e1ba  ff1580de9800         call dword ptr [0x98de80]
// 0082e1c0  eb05                 jmp 0x82e1c7
// 0082e1c2  b856fd9900           mov eax, 0x99fd56
// 0082e1c7  33c9                 xor ecx, ecx
// 0082e1c9  66894c2440           mov word ptr [esp + 0x40], cx
// 0082e1ce  50                   push eax
// 0082e1cf  8d4c2444             lea ecx, [esp + 0x44]
// 0082e1d3  e8bc840f00           call 0x926694
// 0082e1d8  f644241401           test byte ptr [esp + 0x14], 1
// 0082e1dd  c744245802000000     mov dword ptr [esp + 0x58], 2
// 0082e1e5  740f                 je 0x82e1f6
// 0082e1e7  83642414fe           and dword ptr [esp + 0x14], 0xfffffffe
// 0082e1ec  8d4c2424             lea ecx, [esp + 0x24]
// 0082e1f0  ff15c0de9800         call dword ptr [0x98dec0]
// 0082e1f6  8b16                 mov edx, dword ptr [esi]
// 0082e1f8  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 0082e1fe  8d442428             lea eax, [esp + 0x28]
// 0082e202  50                   push eax
// 0082e203  8bce                 mov ecx, esi
// 0082e205  ffd2                 call edx
// 0082e207  8bc8                 mov ecx, eax
// 0082e209  c644245803           mov byte ptr [esp + 0x58], 3
// 0082e20e  ff1580de9800         call dword ptr [0x98de80]
// 0082e214  33c9                 xor ecx, ecx
// 0082e216  66894c2430           mov word ptr [esp + 0x30], cx
// 0082e21b  50                   push eax
// 0082e21c  8d4c2434             lea ecx, [esp + 0x34]
// 0082e220  e86f840f00           call 0x926694
// 0082e225  8d4c2428             lea ecx, [esp + 0x28]
// 0082e229  c644245805           mov byte ptr [esp + 0x58], 5
// 0082e22e  ff15c0de9800         call dword ptr [0x98dec0]
// 0082e234  8b4750               mov eax, dword ptr [edi + 0x50]
// 0082e237  8b4040               mov eax, dword ptr [eax + 0x40]
// 0082e23a  33d2                 xor edx, edx
// 0082e23c  3bc3                 cmp eax, ebx
// 0082e23e  a1d464b600           mov eax, dword ptr [0xb664d4]
// 0082e243  0f94c2               sete dl
// 0082e246  8bfa                 mov edi, edx
// 0082e248  3d00040000           cmp eax, 0x400
// 0082e24d  7505                 jne 0x82e254
// 0082e24f  e87ce0feff           call 0x81c2d0
// 0082e254  57                   push edi
// 0082e255  50                   push eax
// 0082e256  8d442438             lea eax, [esp + 0x38]
// 0082e25a  50                   push eax
// 0082e25b  8d4c244c             lea ecx, [esp + 0x4c]
// 0082e25f  51                   push ecx
// 0082e260  e85f8c0f00           call 0x926ec4
// 0082e265  8b6d40               mov ebp, dword ptr [ebp + 0x40]
// 0082e268  8bf8                 mov edi, eax
// 0082e26a  4f                   dec edi
// 0082e26b  3beb                 cmp ebp, ebx
// 0082e26d  7408                 je 0x82e277
// 0082e26f  3bfb                 cmp edi, ebx
// 0082e271  7f08                 jg 0x82e27b
// 0082e273  3beb                 cmp ebp, ebx
// 0082e275  7550                 jne 0x82e2c7
// 0082e277  3bfb                 cmp edi, ebx
// 0082e279  7d4c                 jge 0x82e2c7
// 0082e27b  8b3534ba9800         mov esi, dword ptr [0x98ba34]
// 0082e281  8d542430             lea edx, [esp + 0x30]
// 0082e285  52                   push edx
// 0082e286  ffd6                 call esi
// 0082e288  8d442440             lea eax, [esp + 0x40]
// 0082e28c  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0082e294  50                   push eax
// 0082e295  ffd6                 call esi
// 0082e297  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0082e29b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0082e29f  47                   inc edi
// 0082e2a0  3b7d28               cmp edi, dword ptr [ebp + 0x28]
// 0082e2a3  897c241c             mov dword ptr [esp + 0x1c], edi
// 0082e2a7  0f8c73feffff         jl 0x82e120
// 0082e2ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 0082e2b1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0082e2b5  64890d00000000       mov dword ptr fs:[0], ecx
// 0082e2bc  59                   pop ecx
// 0082e2bd  5f                   pop edi
// 0082e2be  5e                   pop esi
// 0082e2bf  5d                   pop ebp
// 0082e2c0  5b                   pop ebx
// 0082e2c1  83c448               add esp, 0x48
// 0082e2c4  c20800               ret 8
// 0082e2c7  8b16                 mov edx, dword ptr [esi]
// 0082e2c9  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082e2cf  8bce                 mov ecx, esi
// 0082e2d1  ffd0                 call eax
// 0082e2d3  85c0                 test eax, eax
// 0082e2d5  7538                 jne 0x82e30f
// 0082e2d7  8b3534ba9800         mov esi, dword ptr [0x98ba34]
// 0082e2dd  8d4c2430             lea ecx, [esp + 0x30]
// 0082e2e1  51                   push ecx
// 0082e2e2  ffd6                 call esi
// 0082e2e4  8d542440             lea edx, [esp + 0x40]
// 0082e2e8  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0082e2f0  52                   push edx
// 0082e2f1  eba2                 jmp 0x82e295
// 0082e2f3  8d44242c             lea eax, [esp + 0x2c]
// 0082e2f7  50                   push eax
// 0082e2f8  8d4c2464             lea ecx, [esp + 0x64]
// 0082e2fc  51                   push ecx
// 0082e2fd  e87efbffff           call 0x82de80
// 0082e302  83c408               add esp, 8
// 0082e305  85c0                 test eax, eax
// 0082e307  7f96                 jg 0x82e29f
// 0082e309  89742418             mov dword ptr [esp + 0x18], esi
// 0082e30d  eb9e                 jmp 0x82e2ad
// 0082e30f  3bfb                 cmp edi, ebx
// 0082e311  0f8580000000         jne 0x82e397
// 0082e317  8b16                 mov edx, dword ptr [esi]
// 0082e319  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082e31f  8bce                 mov ecx, esi
// 0082e321  ffd0                 call eax
// 0082e323  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0082e327  8b10                 mov edx, dword ptr [eax]
// 0082e329  8b9284000000         mov edx, dword ptr [edx + 0x84]
// 0082e32f  51                   push ecx
// 0082e330  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0082e334  51                   push ecx
// 0082e335  8bc8                 mov ecx, eax
// 0082e337  ffd2                 call edx
// 0082e339  89442418             mov dword ptr [esp + 0x18], eax
// 0082e33d  3bc3                 cmp eax, ebx
// 0082e33f  753d                 jne 0x82e37e
// 0082e341  8b06                 mov eax, dword ptr [esi]
// 0082e343  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0082e349  8bce                 mov ecx, esi
// 0082e34b  ffd2                 call edx
// 0082e34d  8be8                 mov ebp, eax
// 0082e34f  8b06                 mov eax, dword ptr [esi]
// 0082e351  8b7d00               mov edi, dword ptr [ebp]
// 0082e354  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 0082e35a  8bce                 mov ecx, esi
// 0082e35c  83c75c               add edi, 0x5c
// 0082e35f  ffd2                 call edx
// 0082e361  8bc8                 mov ecx, eax
// 0082e363  e8b8e8ffff           call 0x82cc20
// 0082e368  48                   dec eax
// 0082e369  50                   push eax
// 0082e36a  8b07                 mov eax, dword ptr [edi]
// 0082e36c  8bcd                 mov ecx, ebp
// 0082e36e  ffd0                 call eax
// 0082e370  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0082e374  89442418             mov dword ptr [esp + 0x18], eax
// 0082e378  c70101000000         mov dword ptr [ecx], 1
// 0082e37e  8b3534ba9800         mov esi, dword ptr [0x98ba34]
// 0082e384  8d542430             lea edx, [esp + 0x30]
// 0082e388  52                   push edx
// 0082e389  ffd6                 call esi
// 0082e38b  8d442440             lea eax, [esp + 0x40]
// 0082e38f  50                   push eax
// 0082e390  ffd6                 call esi
// 0082e392  e916ffffff           jmp 0x82e2ad
// 0082e397  89742418             mov dword ptr [esp + 0x18], esi
// 0082e39b  ebe1                 jmp 0x82e37e
// 0082e39d  e86a57fcff           call 0x7f3b0c
// copied from an identical function in another client (function ?FindInsertionPos@CXTPReportRows@@UAEPAVCXTPReportRow@@PAV2@AAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\ReportControl\XTPReportRows.cpp