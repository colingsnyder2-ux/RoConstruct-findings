// roc 2011-06 0083c710  unit: CXTPReportHeader  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083c710
//
// 0083c710  83ec74               sub esp, 0x74
// 0083c713  53                   push ebx
// 0083c714  55                   push ebp
// 0083c715  56                   push esi
// 0083c716  8be9                 mov ebp, ecx
// 0083c718  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0083c71b  57                   push edi
// 0083c71c  50                   push eax
// 0083c71d  8d4c2458             lea ecx, [esp + 0x58]
// 0083c721  e86a060200           call 0x85cd90
// 0083c726  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 0083c729  8b5564               mov edx, dword ptr [ebp + 0x64]
// 0083c72c  8b4568               mov eax, dword ptr [ebp + 0x68]
// 0083c72f  894c2444             mov dword ptr [esp + 0x44], ecx
// 0083c733  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 0083c736  89542448             mov dword ptr [esp + 0x48], edx
// 0083c73a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083c73e  8bd0                 mov edx, eax
// 0083c740  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0083c744  894c2450             mov dword ptr [esp + 0x50], ecx
// 0083c748  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0083c74b  89542444             mov dword ptr [esp + 0x44], edx
// 0083c74f  8944244c             mov dword ptr [esp + 0x4c], eax
// 0083c753  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 0083c756  e845110400           call 0x87d8a0
// 0083c75b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0083c762  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0083c769  8b35101ca400         mov esi, dword ptr [0xa41c10]
// 0083c76f  51                   push ecx
// 0083c770  8bf8                 mov edi, eax
// 0083c772  52                   push edx
// 0083c773  8d44244c             lea eax, [esp + 0x4c]
// 0083c777  50                   push eax
// 0083c778  897c2428             mov dword ptr [esp + 0x28], edi
// 0083c77c  ffd6                 call esi
// 0083c77e  85c0                 test eax, eax
// 0083c780  740c                 je 0x83c78e
// 0083c782  5f                   pop edi
// 0083c783  5e                   pop esi
// 0083c784  5d                   pop ebp
// 0083c785  8bc3                 mov eax, ebx
// 0083c787  5b                   pop ebx
// 0083c788  83c474               add esp, 0x74
// 0083c78b  c20800               ret 8
// 0083c78e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0083c795  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0083c798  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0083c79f  51                   push ecx
// 0083c7a0  83c070               add eax, 0x70
// 0083c7a3  52                   push edx
// 0083c7a4  50                   push eax
// 0083c7a5  ffd6                 call esi
// 0083c7a7  85c0                 test eax, eax
// 0083c7a9  750d                 jne 0x83c7b8
// 0083c7ab  5f                   pop edi
// 0083c7ac  5e                   pop esi
// 0083c7ad  5d                   pop ebp
// 0083c7ae  83c8ff               or eax, 0xffffffff
// 0083c7b1  5b                   pop ebx
// 0083c7b2  83c474               add esp, 0x74
// 0083c7b5  c20800               ret 8
// 0083c7b8  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0083c7bb  8bb010010000         mov esi, dword ptr [eax + 0x110]
// 0083c7c1  3bf7                 cmp esi, edi
// 0083c7c3  7d06                 jge 0x83c7cb
// 0083c7c5  89742414             mov dword ptr [esp + 0x14], esi
// 0083c7c9  eb06                 jmp 0x83c7d1
// 0083c7cb  897c2414             mov dword ptr [esp + 0x14], edi
// 0083c7cf  8bf7                 mov esi, edi
// 0083c7d1  33c0                 xor eax, eax
// 0083c7d3  3bf8                 cmp edi, eax
// 0083c7d5  89442410             mov dword ptr [esp + 0x10], eax
// 0083c7d9  0f8e5a010000         jle 0x83c939
// 0083c7df  8d4c3eff             lea ecx, [esi + edi - 1]
// 0083c7e3  894c2418             mov dword ptr [esp + 0x18], ecx
// 0083c7e7  eb0b                 jmp 0x83c7f4
// 0083c7e9  8da42400000000       lea esp, [esp]
// 0083c7f0  8b742414             mov esi, dword ptr [esp + 0x14]
// 0083c7f4  33d2                 xor edx, edx
// 0083c7f6  3bc6                 cmp eax, esi
// 0083c7f8  0f9cc2               setl dl
// 0083c7fb  8bc8                 mov ecx, eax
// 0083c7fd  8bfa                 mov edi, edx
// 0083c7ff  85ff                 test edi, edi
// 0083c801  7504                 jne 0x83c807
// 0083c803  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0083c807  8d5801               lea ebx, [eax + 1]
// 0083c80a  33c0                 xor eax, eax
// 0083c80c  3bde                 cmp ebx, esi
// 0083c80e  0f94c0               sete al
// 0083c811  51                   push ecx
// 0083c812  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0083c815  89442424             mov dword ptr [esp + 0x24], eax
// 0083c819  e882110400           call 0x87d9a0
// 0083c81e  8d4c2464             lea ecx, [esp + 0x64]
// 0083c822  8bf0                 mov esi, eax
// 0083c824  51                   push ecx
// 0083c825  8bce                 mov ecx, esi
// 0083c827  e8d433ffff           call 0x82fc00
// 0083c82c  8b4008               mov eax, dword ptr [eax + 8]
// 0083c82f  85ff                 test edi, edi
// 0083c831  740c                 je 0x83c83f
// 0083c833  39442410             cmp dword ptr [esp + 0x10], eax
// 0083c837  7f10                 jg 0x83c849
// 0083c839  89442410             mov dword ptr [esp + 0x10], eax
// 0083c83d  eb0a                 jmp 0x83c849
// 0083c83f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0083c843  0f8e62ffffff         jle 0x83c7ab
// 0083c849  8d542424             lea edx, [esp + 0x24]
// 0083c84d  52                   push edx
// 0083c84e  8bce                 mov ecx, esi
// 0083c850  e8ab33ffff           call 0x82fc00
// 0083c855  85ff                 test edi, edi
// 0083c857  750e                 jne 0x83c867
// 0083c859  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083c85d  3b442424             cmp eax, dword ptr [esp + 0x24]
// 0083c861  7e04                 jle 0x83c867
// 0083c863  89442424             mov dword ptr [esp + 0x24], eax
// 0083c867  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0083c86b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0083c86f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0083c873  894c2438             mov dword ptr [esp + 0x38], ecx
// 0083c877  8d4c2474             lea ecx, [esp + 0x74]
// 0083c87b  89442434             mov dword ptr [esp + 0x34], eax
// 0083c87f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0083c883  51                   push ecx
// 0083c884  8bce                 mov ecx, esi
// 0083c886  89542440             mov dword ptr [esp + 0x40], edx
// 0083c88a  89442444             mov dword ptr [esp + 0x44], eax
// 0083c88e  e86d33ffff           call 0x82fc00
// 0083c893  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0083c897  3b38                 cmp edi, dword ptr [eax]
// 0083c899  7415                 je 0x83c8b0
// 0083c89b  6a00                 push 0
// 0083c89d  6a00                 push 0
// 0083c89f  6a00                 push 0
// 0083c8a1  6a00                 push 0
// 0083c8a3  8d542434             lea edx, [esp + 0x34]
// 0083c8a7  52                   push edx
// 0083c8a8  ff15c81ba400         call dword ptr [0xa41bc8]
// 0083c8ae  eb3d                 jmp 0x83c8ed
// 0083c8b0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0083c8b4  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 0083c8b8  7e15                 jle 0x83c8cf
// 0083c8ba  6a00                 push 0
// 0083c8bc  6a00                 push 0
// 0083c8be  6a00                 push 0
// 0083c8c0  6a00                 push 0
// 0083c8c2  8d442444             lea eax, [esp + 0x44]
// 0083c8c6  50                   push eax
// 0083c8c7  ff15c81ba400         call dword ptr [0xa41bc8]
// 0083c8cd  eb1e                 jmp 0x83c8ed
// 0083c8cf  8bc1                 mov eax, ecx
// 0083c8d1  2bc7                 sub eax, edi
// 0083c8d3  99                   cdq 
// 0083c8d4  2bc2                 sub eax, edx
// 0083c8d6  d1f8                 sar eax, 1
// 0083c8d8  f7d8                 neg eax
// 0083c8da  03c8                 add ecx, eax
// 0083c8dc  8bc1                 mov eax, ecx
// 0083c8de  2bc7                 sub eax, edi
// 0083c8e0  99                   cdq 
// 0083c8e1  2bc2                 sub eax, edx
// 0083c8e3  d1f8                 sar eax, 1
// 0083c8e5  01442434             add dword ptr [esp + 0x34], eax
// 0083c8e9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 0083c8ed  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0083c8f4  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0083c8fb  8b3d101ca400         mov edi, dword ptr [0xa41c10]
// 0083c901  51                   push ecx
// 0083c902  52                   push edx
// 0083c903  8d44242c             lea eax, [esp + 0x2c]
// 0083c907  50                   push eax
// 0083c908  ffd7                 call edi
// 0083c90a  85c0                 test eax, eax
// 0083c90c  7537                 jne 0x83c945
// 0083c90e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0083c915  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0083c91c  51                   push ecx
// 0083c91d  52                   push edx
// 0083c91e  8d44243c             lea eax, [esp + 0x3c]
// 0083c922  50                   push eax
// 0083c923  ffd7                 call edi
// 0083c925  85c0                 test eax, eax
// 0083c927  752d                 jne 0x83c956
// 0083c929  ff4c2418             dec dword ptr [esp + 0x18]
// 0083c92d  8bc3                 mov eax, ebx
// 0083c92f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 0083c933  0f8cb7feffff         jl 0x83c7f0
// 0083c939  5f                   pop edi
// 0083c93a  5e                   pop esi
// 0083c93b  5d                   pop ebp
// 0083c93c  33c0                 xor eax, eax
// 0083c93e  5b                   pop ebx
// 0083c93f  83c474               add esp, 0x74
// 0083c942  c20800               ret 8
// 0083c945  8bce                 mov ecx, esi
// 0083c947  e88434ffff           call 0x82fdd0
// 0083c94c  5f                   pop edi
// 0083c94d  5e                   pop esi
// 0083c94e  5d                   pop ebp
// 0083c94f  5b                   pop ebx
// 0083c950  83c474               add esp, 0x74
// 0083c953  c20800               ret 8
// 0083c956  837c242000           cmp dword ptr [esp + 0x20], 0
// 0083c95b  740c                 je 0x83c969
// 0083c95d  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0083c960  83b90c01000000       cmp dword ptr [ecx + 0x10c], 0
// 0083c967  75dc                 jne 0x83c945
// 0083c969  8bce                 mov ecx, esi
// 0083c96b  e86034ffff           call 0x82fdd0
// 0083c970  5f                   pop edi
// 0083c971  5e                   pop esi
// 0083c972  5d                   pop ebp
// 0083c973  40                   inc eax
// 0083c974  5b                   pop ebx
// 0083c975  83c474               add esp, 0x74
// 0083c978  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?FindHeaderColumn@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
