// roc 2010-06 007dce90  unit: CXTPReportHeader  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007dce90
//
// 007dce90  83ec74               sub esp, 0x74
// 007dce93  53                   push ebx
// 007dce94  55                   push ebp
// 007dce95  56                   push esi
// 007dce96  8be9                 mov ebp, ecx
// 007dce98  8b4524               mov eax, dword ptr [ebp + 0x24]
// 007dce9b  57                   push edi
// 007dce9c  50                   push eax
// 007dce9d  8d4c2458             lea ecx, [esp + 0x58]
// 007dcea1  e86a240200           call 0x7ff310
// 007dcea6  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 007dcea9  8b5564               mov edx, dword ptr [ebp + 0x64]
// 007dceac  8b4568               mov eax, dword ptr [ebp + 0x68]
// 007dceaf  894c2444             mov dword ptr [esp + 0x44], ecx
// 007dceb3  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 007dceb6  89542448             mov dword ptr [esp + 0x48], edx
// 007dceba  8944244c             mov dword ptr [esp + 0x4c], eax
// 007dcebe  8bd0                 mov edx, eax
// 007dcec0  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007dcec4  894c2450             mov dword ptr [esp + 0x50], ecx
// 007dcec8  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 007dcecb  89542444             mov dword ptr [esp + 0x44], edx
// 007dcecf  8944244c             mov dword ptr [esp + 0x4c], eax
// 007dced3  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 007dced6  e8b5320400           call 0x820190
// 007dcedb  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007dcee2  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007dcee9  8b35e0bb9e00         mov esi, dword ptr [0x9ebbe0]
// 007dceef  51                   push ecx
// 007dcef0  8bf8                 mov edi, eax
// 007dcef2  52                   push edx
// 007dcef3  8d44244c             lea eax, [esp + 0x4c]
// 007dcef7  50                   push eax
// 007dcef8  897c2428             mov dword ptr [esp + 0x28], edi
// 007dcefc  ffd6                 call esi
// 007dcefe  85c0                 test eax, eax
// 007dcf00  740c                 je 0x7dcf0e
// 007dcf02  5f                   pop edi
// 007dcf03  5e                   pop esi
// 007dcf04  5d                   pop ebp
// 007dcf05  8bc3                 mov eax, ebx
// 007dcf07  5b                   pop ebx
// 007dcf08  83c474               add esp, 0x74
// 007dcf0b  c20800               ret 8
// 007dcf0e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007dcf15  8b4524               mov eax, dword ptr [ebp + 0x24]
// 007dcf18  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007dcf1f  51                   push ecx
// 007dcf20  83c070               add eax, 0x70
// 007dcf23  52                   push edx
// 007dcf24  50                   push eax
// 007dcf25  ffd6                 call esi
// 007dcf27  85c0                 test eax, eax
// 007dcf29  750d                 jne 0x7dcf38
// 007dcf2b  5f                   pop edi
// 007dcf2c  5e                   pop esi
// 007dcf2d  5d                   pop ebp
// 007dcf2e  83c8ff               or eax, 0xffffffff
// 007dcf31  5b                   pop ebx
// 007dcf32  83c474               add esp, 0x74
// 007dcf35  c20800               ret 8
// 007dcf38  8b4524               mov eax, dword ptr [ebp + 0x24]
// 007dcf3b  8bb010010000         mov esi, dword ptr [eax + 0x110]
// 007dcf41  3bf7                 cmp esi, edi
// 007dcf43  7d06                 jge 0x7dcf4b
// 007dcf45  89742414             mov dword ptr [esp + 0x14], esi
// 007dcf49  eb06                 jmp 0x7dcf51
// 007dcf4b  897c2414             mov dword ptr [esp + 0x14], edi
// 007dcf4f  8bf7                 mov esi, edi
// 007dcf51  33c0                 xor eax, eax
// 007dcf53  3bf8                 cmp edi, eax
// 007dcf55  89442410             mov dword ptr [esp + 0x10], eax
// 007dcf59  0f8e5a010000         jle 0x7dd0b9
// 007dcf5f  8d4c3eff             lea ecx, [esi + edi - 1]
// 007dcf63  894c2418             mov dword ptr [esp + 0x18], ecx
// 007dcf67  eb0b                 jmp 0x7dcf74
// 007dcf69  8da42400000000       lea esp, [esp]
// 007dcf70  8b742414             mov esi, dword ptr [esp + 0x14]
// 007dcf74  33d2                 xor edx, edx
// 007dcf76  3bc6                 cmp eax, esi
// 007dcf78  0f9cc2               setl dl
// 007dcf7b  8bc8                 mov ecx, eax
// 007dcf7d  8bfa                 mov edi, edx
// 007dcf7f  85ff                 test edi, edi
// 007dcf81  7504                 jne 0x7dcf87
// 007dcf83  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007dcf87  8d5801               lea ebx, [eax + 1]
// 007dcf8a  33c0                 xor eax, eax
// 007dcf8c  3bde                 cmp ebx, esi
// 007dcf8e  0f94c0               sete al
// 007dcf91  51                   push ecx
// 007dcf92  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 007dcf95  89442424             mov dword ptr [esp + 0x24], eax
// 007dcf99  e8f2320400           call 0x820290
// 007dcf9e  8d4c2464             lea ecx, [esp + 0x64]
// 007dcfa2  8bf0                 mov esi, eax
// 007dcfa4  51                   push ecx
// 007dcfa5  8bce                 mov ecx, esi
// 007dcfa7  e894ebffff           call 0x7dbb40
// 007dcfac  8b4008               mov eax, dword ptr [eax + 8]
// 007dcfaf  85ff                 test edi, edi
// 007dcfb1  740c                 je 0x7dcfbf
// 007dcfb3  39442410             cmp dword ptr [esp + 0x10], eax
// 007dcfb7  7f10                 jg 0x7dcfc9
// 007dcfb9  89442410             mov dword ptr [esp + 0x10], eax
// 007dcfbd  eb0a                 jmp 0x7dcfc9
// 007dcfbf  3b442410             cmp eax, dword ptr [esp + 0x10]
// 007dcfc3  0f8e62ffffff         jle 0x7dcf2b
// 007dcfc9  8d542424             lea edx, [esp + 0x24]
// 007dcfcd  52                   push edx
// 007dcfce  8bce                 mov ecx, esi
// 007dcfd0  e86bebffff           call 0x7dbb40
// 007dcfd5  85ff                 test edi, edi
// 007dcfd7  750e                 jne 0x7dcfe7
// 007dcfd9  8b442410             mov eax, dword ptr [esp + 0x10]
// 007dcfdd  3b442424             cmp eax, dword ptr [esp + 0x24]
// 007dcfe1  7e04                 jle 0x7dcfe7
// 007dcfe3  89442424             mov dword ptr [esp + 0x24], eax
// 007dcfe7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007dcfeb  8b442424             mov eax, dword ptr [esp + 0x24]
// 007dcfef  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007dcff3  894c2438             mov dword ptr [esp + 0x38], ecx
// 007dcff7  8d4c2474             lea ecx, [esp + 0x74]
// 007dcffb  89442434             mov dword ptr [esp + 0x34], eax
// 007dcfff  8b442430             mov eax, dword ptr [esp + 0x30]
// 007dd003  51                   push ecx
// 007dd004  8bce                 mov ecx, esi
// 007dd006  89542440             mov dword ptr [esp + 0x40], edx
// 007dd00a  89442444             mov dword ptr [esp + 0x44], eax
// 007dd00e  e82debffff           call 0x7dbb40
// 007dd013  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007dd017  3b38                 cmp edi, dword ptr [eax]
// 007dd019  7415                 je 0x7dd030
// 007dd01b  6a00                 push 0
// 007dd01d  6a00                 push 0
// 007dd01f  6a00                 push 0
// 007dd021  6a00                 push 0
// 007dd023  8d542434             lea edx, [esp + 0x34]
// 007dd027  52                   push edx
// 007dd028  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007dd02e  eb3d                 jmp 0x7dd06d
// 007dd030  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007dd034  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 007dd038  7e15                 jle 0x7dd04f
// 007dd03a  6a00                 push 0
// 007dd03c  6a00                 push 0
// 007dd03e  6a00                 push 0
// 007dd040  6a00                 push 0
// 007dd042  8d442444             lea eax, [esp + 0x44]
// 007dd046  50                   push eax
// 007dd047  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007dd04d  eb1e                 jmp 0x7dd06d
// 007dd04f  8bc1                 mov eax, ecx
// 007dd051  2bc7                 sub eax, edi
// 007dd053  99                   cdq 
// 007dd054  2bc2                 sub eax, edx
// 007dd056  d1f8                 sar eax, 1
// 007dd058  f7d8                 neg eax
// 007dd05a  03c8                 add ecx, eax
// 007dd05c  8bc1                 mov eax, ecx
// 007dd05e  2bc7                 sub eax, edi
// 007dd060  99                   cdq 
// 007dd061  2bc2                 sub eax, edx
// 007dd063  d1f8                 sar eax, 1
// 007dd065  01442434             add dword ptr [esp + 0x34], eax
// 007dd069  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007dd06d  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007dd074  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007dd07b  8b3de0bb9e00         mov edi, dword ptr [0x9ebbe0]
// 007dd081  51                   push ecx
// 007dd082  52                   push edx
// 007dd083  8d44242c             lea eax, [esp + 0x2c]
// 007dd087  50                   push eax
// 007dd088  ffd7                 call edi
// 007dd08a  85c0                 test eax, eax
// 007dd08c  7537                 jne 0x7dd0c5
// 007dd08e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007dd095  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 007dd09c  51                   push ecx
// 007dd09d  52                   push edx
// 007dd09e  8d44243c             lea eax, [esp + 0x3c]
// 007dd0a2  50                   push eax
// 007dd0a3  ffd7                 call edi
// 007dd0a5  85c0                 test eax, eax
// 007dd0a7  752d                 jne 0x7dd0d6
// 007dd0a9  ff4c2418             dec dword ptr [esp + 0x18]
// 007dd0ad  8bc3                 mov eax, ebx
// 007dd0af  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 007dd0b3  0f8cb7feffff         jl 0x7dcf70
// 007dd0b9  5f                   pop edi
// 007dd0ba  5e                   pop esi
// 007dd0bb  5d                   pop ebp
// 007dd0bc  33c0                 xor eax, eax
// 007dd0be  5b                   pop ebx
// 007dd0bf  83c474               add esp, 0x74
// 007dd0c2  c20800               ret 8
// 007dd0c5  8bce                 mov ecx, esi
// 007dd0c7  e834ecffff           call 0x7dbd00
// 007dd0cc  5f                   pop edi
// 007dd0cd  5e                   pop esi
// 007dd0ce  5d                   pop ebp
// 007dd0cf  5b                   pop ebx
// 007dd0d0  83c474               add esp, 0x74
// 007dd0d3  c20800               ret 8
// 007dd0d6  837c242000           cmp dword ptr [esp + 0x20], 0
// 007dd0db  740c                 je 0x7dd0e9
// 007dd0dd  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 007dd0e0  83b90c01000000       cmp dword ptr [ecx + 0x10c], 0
// 007dd0e7  75dc                 jne 0x7dd0c5
// 007dd0e9  8bce                 mov ecx, esi
// 007dd0eb  e810ecffff           call 0x7dbd00
// 007dd0f0  5f                   pop edi
// 007dd0f1  5e                   pop esi
// 007dd0f2  5d                   pop ebp
// 007dd0f3  40                   inc eax
// 007dd0f4  5b                   pop ebx
// 007dd0f5  83c474               add esp, 0x74
// 007dd0f8  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?FindHeaderColumn@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
