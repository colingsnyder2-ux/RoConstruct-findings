// roc 2008-06 006d58e0  unit: CXTPReportHeader  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d58e0
//
// 006d58e0  83ec74               sub esp, 0x74
// 006d58e3  53                   push ebx
// 006d58e4  55                   push ebp
// 006d58e5  56                   push esi
// 006d58e6  8be9                 mov ebp, ecx
// 006d58e8  8b4524               mov eax, dword ptr [ebp + 0x24]
// 006d58eb  57                   push edi
// 006d58ec  50                   push eax
// 006d58ed  8d4c2458             lea ecx, [esp + 0x58]
// 006d58f1  e83a220200           call 0x6f7b30
// 006d58f6  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 006d58f9  8b5564               mov edx, dword ptr [ebp + 0x64]
// 006d58fc  8b4568               mov eax, dword ptr [ebp + 0x68]
// 006d58ff  894c2444             mov dword ptr [esp + 0x44], ecx
// 006d5903  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 006d5906  89542448             mov dword ptr [esp + 0x48], edx
// 006d590a  8944244c             mov dword ptr [esp + 0x4c], eax
// 006d590e  8bd0                 mov edx, eax
// 006d5910  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 006d5914  894c2450             mov dword ptr [esp + 0x50], ecx
// 006d5918  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 006d591b  89542444             mov dword ptr [esp + 0x44], edx
// 006d591f  8944244c             mov dword ptr [esp + 0x4c], eax
// 006d5923  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 006d5926  e815a00700           call 0x74f940
// 006d592b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 006d5932  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 006d5939  8b352c2d8000         mov esi, dword ptr [0x802d2c]
// 006d593f  51                   push ecx
// 006d5940  8bf8                 mov edi, eax
// 006d5942  52                   push edx
// 006d5943  8d44244c             lea eax, [esp + 0x4c]
// 006d5947  50                   push eax
// 006d5948  897c2428             mov dword ptr [esp + 0x28], edi
// 006d594c  ffd6                 call esi
// 006d594e  85c0                 test eax, eax
// 006d5950  740c                 je 0x6d595e
// 006d5952  5f                   pop edi
// 006d5953  5e                   pop esi
// 006d5954  5d                   pop ebp
// 006d5955  8bc3                 mov eax, ebx
// 006d5957  5b                   pop ebx
// 006d5958  83c474               add esp, 0x74
// 006d595b  c20800               ret 8
// 006d595e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 006d5965  8b4524               mov eax, dword ptr [ebp + 0x24]
// 006d5968  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 006d596f  51                   push ecx
// 006d5970  83c070               add eax, 0x70
// 006d5973  52                   push edx
// 006d5974  50                   push eax
// 006d5975  ffd6                 call esi
// 006d5977  85c0                 test eax, eax
// 006d5979  750d                 jne 0x6d5988
// 006d597b  5f                   pop edi
// 006d597c  5e                   pop esi
// 006d597d  5d                   pop ebp
// 006d597e  83c8ff               or eax, 0xffffffff
// 006d5981  5b                   pop ebx
// 006d5982  83c474               add esp, 0x74
// 006d5985  c20800               ret 8
// 006d5988  8b4524               mov eax, dword ptr [ebp + 0x24]
// 006d598b  8bb010010000         mov esi, dword ptr [eax + 0x110]
// 006d5991  3bf7                 cmp esi, edi
// 006d5993  7d06                 jge 0x6d599b
// 006d5995  89742414             mov dword ptr [esp + 0x14], esi
// 006d5999  eb06                 jmp 0x6d59a1
// 006d599b  897c2414             mov dword ptr [esp + 0x14], edi
// 006d599f  8bf7                 mov esi, edi
// 006d59a1  33c0                 xor eax, eax
// 006d59a3  3bf8                 cmp edi, eax
// 006d59a5  89442410             mov dword ptr [esp + 0x10], eax
// 006d59a9  0f8e5a010000         jle 0x6d5b09
// 006d59af  8d4c3eff             lea ecx, [esi + edi - 1]
// 006d59b3  894c2418             mov dword ptr [esp + 0x18], ecx
// 006d59b7  eb0b                 jmp 0x6d59c4
// 006d59b9  8da42400000000       lea esp, [esp]
// 006d59c0  8b742414             mov esi, dword ptr [esp + 0x14]
// 006d59c4  33d2                 xor edx, edx
// 006d59c6  3bc6                 cmp eax, esi
// 006d59c8  0f9cc2               setl dl
// 006d59cb  8bc8                 mov ecx, eax
// 006d59cd  8bfa                 mov edi, edx
// 006d59cf  85ff                 test edi, edi
// 006d59d1  7504                 jne 0x6d59d7
// 006d59d3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006d59d7  8d5801               lea ebx, [eax + 1]
// 006d59da  33c0                 xor eax, eax
// 006d59dc  3bde                 cmp ebx, esi
// 006d59de  0f94c0               sete al
// 006d59e1  51                   push ecx
// 006d59e2  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 006d59e5  89442424             mov dword ptr [esp + 0x24], eax
// 006d59e9  e852a00700           call 0x74fa40
// 006d59ee  8d4c2464             lea ecx, [esp + 0x64]
// 006d59f2  8bf0                 mov esi, eax
// 006d59f4  51                   push ecx
// 006d59f5  8bce                 mov ecx, esi
// 006d59f7  e884ebffff           call 0x6d4580
// 006d59fc  8b4008               mov eax, dword ptr [eax + 8]
// 006d59ff  85ff                 test edi, edi
// 006d5a01  740c                 je 0x6d5a0f
// 006d5a03  39442410             cmp dword ptr [esp + 0x10], eax
// 006d5a07  7f10                 jg 0x6d5a19
// 006d5a09  89442410             mov dword ptr [esp + 0x10], eax
// 006d5a0d  eb0a                 jmp 0x6d5a19
// 006d5a0f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006d5a13  0f8e62ffffff         jle 0x6d597b
// 006d5a19  8d542424             lea edx, [esp + 0x24]
// 006d5a1d  52                   push edx
// 006d5a1e  8bce                 mov ecx, esi
// 006d5a20  e85bebffff           call 0x6d4580
// 006d5a25  85ff                 test edi, edi
// 006d5a27  750e                 jne 0x6d5a37
// 006d5a29  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d5a2d  3b442424             cmp eax, dword ptr [esp + 0x24]
// 006d5a31  7e04                 jle 0x6d5a37
// 006d5a33  89442424             mov dword ptr [esp + 0x24], eax
// 006d5a37  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006d5a3b  8b442424             mov eax, dword ptr [esp + 0x24]
// 006d5a3f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006d5a43  894c2438             mov dword ptr [esp + 0x38], ecx
// 006d5a47  8d4c2474             lea ecx, [esp + 0x74]
// 006d5a4b  89442434             mov dword ptr [esp + 0x34], eax
// 006d5a4f  8b442430             mov eax, dword ptr [esp + 0x30]
// 006d5a53  51                   push ecx
// 006d5a54  8bce                 mov ecx, esi
// 006d5a56  89542440             mov dword ptr [esp + 0x40], edx
// 006d5a5a  89442444             mov dword ptr [esp + 0x44], eax
// 006d5a5e  e81debffff           call 0x6d4580
// 006d5a63  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006d5a67  3b38                 cmp edi, dword ptr [eax]
// 006d5a69  7415                 je 0x6d5a80
// 006d5a6b  6a00                 push 0
// 006d5a6d  6a00                 push 0
// 006d5a6f  6a00                 push 0
// 006d5a71  6a00                 push 0
// 006d5a73  8d542434             lea edx, [esp + 0x34]
// 006d5a77  52                   push edx
// 006d5a78  ff15102d8000         call dword ptr [0x802d10]
// 006d5a7e  eb3d                 jmp 0x6d5abd
// 006d5a80  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 006d5a84  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 006d5a88  7e15                 jle 0x6d5a9f
// 006d5a8a  6a00                 push 0
// 006d5a8c  6a00                 push 0
// 006d5a8e  6a00                 push 0
// 006d5a90  6a00                 push 0
// 006d5a92  8d442444             lea eax, [esp + 0x44]
// 006d5a96  50                   push eax
// 006d5a97  ff15102d8000         call dword ptr [0x802d10]
// 006d5a9d  eb1e                 jmp 0x6d5abd
// 006d5a9f  8bc1                 mov eax, ecx
// 006d5aa1  2bc7                 sub eax, edi
// 006d5aa3  99                   cdq 
// 006d5aa4  2bc2                 sub eax, edx
// 006d5aa6  d1f8                 sar eax, 1
// 006d5aa8  f7d8                 neg eax
// 006d5aaa  03c8                 add ecx, eax
// 006d5aac  8bc1                 mov eax, ecx
// 006d5aae  2bc7                 sub eax, edi
// 006d5ab0  99                   cdq 
// 006d5ab1  2bc2                 sub eax, edx
// 006d5ab3  d1f8                 sar eax, 1
// 006d5ab5  01442434             add dword ptr [esp + 0x34], eax
// 006d5ab9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 006d5abd  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 006d5ac4  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 006d5acb  8b3d2c2d8000         mov edi, dword ptr [0x802d2c]
// 006d5ad1  51                   push ecx
// 006d5ad2  52                   push edx
// 006d5ad3  8d44242c             lea eax, [esp + 0x2c]
// 006d5ad7  50                   push eax
// 006d5ad8  ffd7                 call edi
// 006d5ada  85c0                 test eax, eax
// 006d5adc  7537                 jne 0x6d5b15
// 006d5ade  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 006d5ae5  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 006d5aec  51                   push ecx
// 006d5aed  52                   push edx
// 006d5aee  8d44243c             lea eax, [esp + 0x3c]
// 006d5af2  50                   push eax
// 006d5af3  ffd7                 call edi
// 006d5af5  85c0                 test eax, eax
// 006d5af7  752d                 jne 0x6d5b26
// 006d5af9  ff4c2418             dec dword ptr [esp + 0x18]
// 006d5afd  8bc3                 mov eax, ebx
// 006d5aff  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 006d5b03  0f8cb7feffff         jl 0x6d59c0
// 006d5b09  5f                   pop edi
// 006d5b0a  5e                   pop esi
// 006d5b0b  5d                   pop ebp
// 006d5b0c  33c0                 xor eax, eax
// 006d5b0e  5b                   pop ebx
// 006d5b0f  83c474               add esp, 0x74
// 006d5b12  c20800               ret 8
// 006d5b15  8bce                 mov ecx, esi
// 006d5b17  e824ecffff           call 0x6d4740
// 006d5b1c  5f                   pop edi
// 006d5b1d  5e                   pop esi
// 006d5b1e  5d                   pop ebp
// 006d5b1f  5b                   pop ebx
// 006d5b20  83c474               add esp, 0x74
// 006d5b23  c20800               ret 8
// 006d5b26  837c242000           cmp dword ptr [esp + 0x20], 0
// 006d5b2b  740c                 je 0x6d5b39
// 006d5b2d  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 006d5b30  83b90c01000000       cmp dword ptr [ecx + 0x10c], 0
// 006d5b37  75dc                 jne 0x6d5b15
// 006d5b39  8bce                 mov ecx, esi
// 006d5b3b  e800ecffff           call 0x6d4740
// 006d5b40  5f                   pop edi
// 006d5b41  5e                   pop esi
// 006d5b42  5d                   pop ebp
// 006d5b43  40                   inc eax
// 006d5b44  5b                   pop ebx
// 006d5b45  83c474               add esp, 0x74
// 006d5b48  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?FindHeaderColumn@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
