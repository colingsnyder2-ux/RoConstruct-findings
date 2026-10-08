// roc 2009-06 0074e050  unit: CXTPReportHeader  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074e050
//
// 0074e050  83ec74               sub esp, 0x74
// 0074e053  53                   push ebx
// 0074e054  55                   push ebp
// 0074e055  56                   push esi
// 0074e056  8be9                 mov ebp, ecx
// 0074e058  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0074e05b  57                   push edi
// 0074e05c  50                   push eax
// 0074e05d  8d4c2458             lea ecx, [esp + 0x58]
// 0074e061  e86a240200           call 0x7704d0
// 0074e066  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 0074e069  8b5564               mov edx, dword ptr [ebp + 0x64]
// 0074e06c  8b4568               mov eax, dword ptr [ebp + 0x68]
// 0074e06f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0074e073  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 0074e076  89542448             mov dword ptr [esp + 0x48], edx
// 0074e07a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0074e07e  8bd0                 mov edx, eax
// 0074e080  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0074e084  894c2450             mov dword ptr [esp + 0x50], ecx
// 0074e088  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0074e08b  89542444             mov dword ptr [esp + 0x44], edx
// 0074e08f  8944244c             mov dword ptr [esp + 0x4c], eax
// 0074e093  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 0074e096  e845430400           call 0x7923e0
// 0074e09b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0074e0a2  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0074e0a9  8b35c0ed8900         mov esi, dword ptr [0x89edc0]
// 0074e0af  51                   push ecx
// 0074e0b0  8bf8                 mov edi, eax
// 0074e0b2  52                   push edx
// 0074e0b3  8d44244c             lea eax, [esp + 0x4c]
// 0074e0b7  50                   push eax
// 0074e0b8  897c2428             mov dword ptr [esp + 0x28], edi
// 0074e0bc  ffd6                 call esi
// 0074e0be  85c0                 test eax, eax
// 0074e0c0  740c                 je 0x74e0ce
// 0074e0c2  5f                   pop edi
// 0074e0c3  5e                   pop esi
// 0074e0c4  5d                   pop ebp
// 0074e0c5  8bc3                 mov eax, ebx
// 0074e0c7  5b                   pop ebx
// 0074e0c8  83c474               add esp, 0x74
// 0074e0cb  c20800               ret 8
// 0074e0ce  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0074e0d5  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0074e0d8  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0074e0df  51                   push ecx
// 0074e0e0  83c070               add eax, 0x70
// 0074e0e3  52                   push edx
// 0074e0e4  50                   push eax
// 0074e0e5  ffd6                 call esi
// 0074e0e7  85c0                 test eax, eax
// 0074e0e9  750d                 jne 0x74e0f8
// 0074e0eb  5f                   pop edi
// 0074e0ec  5e                   pop esi
// 0074e0ed  5d                   pop ebp
// 0074e0ee  83c8ff               or eax, 0xffffffff
// 0074e0f1  5b                   pop ebx
// 0074e0f2  83c474               add esp, 0x74
// 0074e0f5  c20800               ret 8
// 0074e0f8  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0074e0fb  8bb010010000         mov esi, dword ptr [eax + 0x110]
// 0074e101  3bf7                 cmp esi, edi
// 0074e103  7d06                 jge 0x74e10b
// 0074e105  89742414             mov dword ptr [esp + 0x14], esi
// 0074e109  eb06                 jmp 0x74e111
// 0074e10b  897c2414             mov dword ptr [esp + 0x14], edi
// 0074e10f  8bf7                 mov esi, edi
// 0074e111  33c0                 xor eax, eax
// 0074e113  3bf8                 cmp edi, eax
// 0074e115  89442410             mov dword ptr [esp + 0x10], eax
// 0074e119  0f8e5a010000         jle 0x74e279
// 0074e11f  8d4c3eff             lea ecx, [esi + edi - 1]
// 0074e123  894c2418             mov dword ptr [esp + 0x18], ecx
// 0074e127  eb0b                 jmp 0x74e134
// 0074e129  8da42400000000       lea esp, [esp]
// 0074e130  8b742414             mov esi, dword ptr [esp + 0x14]
// 0074e134  33d2                 xor edx, edx
// 0074e136  3bc6                 cmp eax, esi
// 0074e138  0f9cc2               setl dl
// 0074e13b  8bc8                 mov ecx, eax
// 0074e13d  8bfa                 mov edi, edx
// 0074e13f  85ff                 test edi, edi
// 0074e141  7504                 jne 0x74e147
// 0074e143  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074e147  8d5801               lea ebx, [eax + 1]
// 0074e14a  33c0                 xor eax, eax
// 0074e14c  3bde                 cmp ebx, esi
// 0074e14e  0f94c0               sete al
// 0074e151  51                   push ecx
// 0074e152  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0074e155  89442424             mov dword ptr [esp + 0x24], eax
// 0074e159  e882430400           call 0x7924e0
// 0074e15e  8d4c2464             lea ecx, [esp + 0x64]
// 0074e162  8bf0                 mov esi, eax
// 0074e164  51                   push ecx
// 0074e165  8bce                 mov ecx, esi
// 0074e167  e874ebffff           call 0x74cce0
// 0074e16c  8b4008               mov eax, dword ptr [eax + 8]
// 0074e16f  85ff                 test edi, edi
// 0074e171  740c                 je 0x74e17f
// 0074e173  39442410             cmp dword ptr [esp + 0x10], eax
// 0074e177  7f10                 jg 0x74e189
// 0074e179  89442410             mov dword ptr [esp + 0x10], eax
// 0074e17d  eb0a                 jmp 0x74e189
// 0074e17f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0074e183  0f8e62ffffff         jle 0x74e0eb
// 0074e189  8d542424             lea edx, [esp + 0x24]
// 0074e18d  52                   push edx
// 0074e18e  8bce                 mov ecx, esi
// 0074e190  e84bebffff           call 0x74cce0
// 0074e195  85ff                 test edi, edi
// 0074e197  750e                 jne 0x74e1a7
// 0074e199  8b442410             mov eax, dword ptr [esp + 0x10]
// 0074e19d  3b442424             cmp eax, dword ptr [esp + 0x24]
// 0074e1a1  7e04                 jle 0x74e1a7
// 0074e1a3  89442424             mov dword ptr [esp + 0x24], eax
// 0074e1a7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0074e1ab  8b442424             mov eax, dword ptr [esp + 0x24]
// 0074e1af  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0074e1b3  894c2438             mov dword ptr [esp + 0x38], ecx
// 0074e1b7  8d4c2474             lea ecx, [esp + 0x74]
// 0074e1bb  89442434             mov dword ptr [esp + 0x34], eax
// 0074e1bf  8b442430             mov eax, dword ptr [esp + 0x30]
// 0074e1c3  51                   push ecx
// 0074e1c4  8bce                 mov ecx, esi
// 0074e1c6  89542440             mov dword ptr [esp + 0x40], edx
// 0074e1ca  89442444             mov dword ptr [esp + 0x44], eax
// 0074e1ce  e80debffff           call 0x74cce0
// 0074e1d3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0074e1d7  3b38                 cmp edi, dword ptr [eax]
// 0074e1d9  7415                 je 0x74e1f0
// 0074e1db  6a00                 push 0
// 0074e1dd  6a00                 push 0
// 0074e1df  6a00                 push 0
// 0074e1e1  6a00                 push 0
// 0074e1e3  8d542434             lea edx, [esp + 0x34]
// 0074e1e7  52                   push edx
// 0074e1e8  ff15a4ed8900         call dword ptr [0x89eda4]
// 0074e1ee  eb3d                 jmp 0x74e22d
// 0074e1f0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0074e1f4  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 0074e1f8  7e15                 jle 0x74e20f
// 0074e1fa  6a00                 push 0
// 0074e1fc  6a00                 push 0
// 0074e1fe  6a00                 push 0
// 0074e200  6a00                 push 0
// 0074e202  8d442444             lea eax, [esp + 0x44]
// 0074e206  50                   push eax
// 0074e207  ff15a4ed8900         call dword ptr [0x89eda4]
// 0074e20d  eb1e                 jmp 0x74e22d
// 0074e20f  8bc1                 mov eax, ecx
// 0074e211  2bc7                 sub eax, edi
// 0074e213  99                   cdq 
// 0074e214  2bc2                 sub eax, edx
// 0074e216  d1f8                 sar eax, 1
// 0074e218  f7d8                 neg eax
// 0074e21a  03c8                 add ecx, eax
// 0074e21c  8bc1                 mov eax, ecx
// 0074e21e  2bc7                 sub eax, edi
// 0074e220  99                   cdq 
// 0074e221  2bc2                 sub eax, edx
// 0074e223  d1f8                 sar eax, 1
// 0074e225  01442434             add dword ptr [esp + 0x34], eax
// 0074e229  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0074e22d  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0074e234  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0074e23b  8b3dc0ed8900         mov edi, dword ptr [0x89edc0]
// 0074e241  51                   push ecx
// 0074e242  52                   push edx
// 0074e243  8d44242c             lea eax, [esp + 0x2c]
// 0074e247  50                   push eax
// 0074e248  ffd7                 call edi
// 0074e24a  85c0                 test eax, eax
// 0074e24c  7537                 jne 0x74e285
// 0074e24e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0074e255  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0074e25c  51                   push ecx
// 0074e25d  52                   push edx
// 0074e25e  8d44243c             lea eax, [esp + 0x3c]
// 0074e262  50                   push eax
// 0074e263  ffd7                 call edi
// 0074e265  85c0                 test eax, eax
// 0074e267  752d                 jne 0x74e296
// 0074e269  ff4c2418             dec dword ptr [esp + 0x18]
// 0074e26d  8bc3                 mov eax, ebx
// 0074e26f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0074e273  0f8cb7feffff         jl 0x74e130
// 0074e279  5f                   pop edi
// 0074e27a  5e                   pop esi
// 0074e27b  5d                   pop ebp
// 0074e27c  33c0                 xor eax, eax
// 0074e27e  5b                   pop ebx
// 0074e27f  83c474               add esp, 0x74
// 0074e282  c20800               ret 8
// 0074e285  8bce                 mov ecx, esi
// 0074e287  e834ecffff           call 0x74cec0
// 0074e28c  5f                   pop edi
// 0074e28d  5e                   pop esi
// 0074e28e  5d                   pop ebp
// 0074e28f  5b                   pop ebx
// 0074e290  83c474               add esp, 0x74
// 0074e293  c20800               ret 8
// 0074e296  837c242000           cmp dword ptr [esp + 0x20], 0
// 0074e29b  740c                 je 0x74e2a9
// 0074e29d  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0074e2a0  83b90c01000000       cmp dword ptr [ecx + 0x10c], 0
// 0074e2a7  75dc                 jne 0x74e285
// 0074e2a9  8bce                 mov ecx, esi
// 0074e2ab  e810ecffff           call 0x74cec0
// 0074e2b0  5f                   pop edi
// 0074e2b1  5e                   pop esi
// 0074e2b2  5d                   pop ebp
// 0074e2b3  40                   inc eax
// 0074e2b4  5b                   pop ebx
// 0074e2b5  83c474               add esp, 0x74
// 0074e2b8  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?FindHeaderColumn@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
