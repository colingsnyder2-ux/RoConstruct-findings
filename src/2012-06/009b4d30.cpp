// roc 2012-06 009b4d30  unit: CXTPReportHeader  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b4d30
//
// 009b4d30  83ec74               sub esp, 0x74
// 009b4d33  53                   push ebx
// 009b4d34  55                   push ebp
// 009b4d35  56                   push esi
// 009b4d36  8be9                 mov ebp, ecx
// 009b4d38  8b4524               mov eax, dword ptr [ebp + 0x24]
// 009b4d3b  57                   push edi
// 009b4d3c  50                   push eax
// 009b4d3d  8d4c2458             lea ecx, [esp + 0x58]
// 009b4d41  e85a040200           call 0x9d51a0
// 009b4d46  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 009b4d49  8b5564               mov edx, dword ptr [ebp + 0x64]
// 009b4d4c  8b4568               mov eax, dword ptr [ebp + 0x68]
// 009b4d4f  894c2444             mov dword ptr [esp + 0x44], ecx
// 009b4d53  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 009b4d56  89542448             mov dword ptr [esp + 0x48], edx
// 009b4d5a  8944244c             mov dword ptr [esp + 0x4c], eax
// 009b4d5e  8bd0                 mov edx, eax
// 009b4d60  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 009b4d64  894c2450             mov dword ptr [esp + 0x50], ecx
// 009b4d68  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 009b4d6b  89542444             mov dword ptr [esp + 0x44], edx
// 009b4d6f  8944244c             mov dword ptr [esp + 0x4c], eax
// 009b4d73  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 009b4d76  e8d5100400           call 0x9f5e50
// 009b4d7b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009b4d82  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 009b4d89  8b35483bb200         mov esi, dword ptr [0xb23b48]
// 009b4d8f  51                   push ecx
// 009b4d90  8bf8                 mov edi, eax
// 009b4d92  52                   push edx
// 009b4d93  8d44244c             lea eax, [esp + 0x4c]
// 009b4d97  50                   push eax
// 009b4d98  897c2428             mov dword ptr [esp + 0x28], edi
// 009b4d9c  ffd6                 call esi
// 009b4d9e  85c0                 test eax, eax
// 009b4da0  740c                 je 0x9b4dae
// 009b4da2  5f                   pop edi
// 009b4da3  5e                   pop esi
// 009b4da4  5d                   pop ebp
// 009b4da5  8bc3                 mov eax, ebx
// 009b4da7  5b                   pop ebx
// 009b4da8  83c474               add esp, 0x74
// 009b4dab  c20800               ret 8
// 009b4dae  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009b4db5  8b4524               mov eax, dword ptr [ebp + 0x24]
// 009b4db8  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 009b4dbf  51                   push ecx
// 009b4dc0  83c070               add eax, 0x70
// 009b4dc3  52                   push edx
// 009b4dc4  50                   push eax
// 009b4dc5  ffd6                 call esi
// 009b4dc7  85c0                 test eax, eax
// 009b4dc9  750d                 jne 0x9b4dd8
// 009b4dcb  5f                   pop edi
// 009b4dcc  5e                   pop esi
// 009b4dcd  5d                   pop ebp
// 009b4dce  83c8ff               or eax, 0xffffffff
// 009b4dd1  5b                   pop ebx
// 009b4dd2  83c474               add esp, 0x74
// 009b4dd5  c20800               ret 8
// 009b4dd8  8b4524               mov eax, dword ptr [ebp + 0x24]
// 009b4ddb  8bb010010000         mov esi, dword ptr [eax + 0x110]
// 009b4de1  3bf7                 cmp esi, edi
// 009b4de3  7d06                 jge 0x9b4deb
// 009b4de5  89742414             mov dword ptr [esp + 0x14], esi
// 009b4de9  eb06                 jmp 0x9b4df1
// 009b4deb  897c2414             mov dword ptr [esp + 0x14], edi
// 009b4def  8bf7                 mov esi, edi
// 009b4df1  33c0                 xor eax, eax
// 009b4df3  3bf8                 cmp edi, eax
// 009b4df5  89442410             mov dword ptr [esp + 0x10], eax
// 009b4df9  0f8e5a010000         jle 0x9b4f59
// 009b4dff  8d4c3eff             lea ecx, [esi + edi - 1]
// 009b4e03  894c2418             mov dword ptr [esp + 0x18], ecx
// 009b4e07  eb0b                 jmp 0x9b4e14
// 009b4e09  8da42400000000       lea esp, [esp]
// 009b4e10  8b742414             mov esi, dword ptr [esp + 0x14]
// 009b4e14  33d2                 xor edx, edx
// 009b4e16  3bc6                 cmp eax, esi
// 009b4e18  0f9cc2               setl dl
// 009b4e1b  8bc8                 mov ecx, eax
// 009b4e1d  8bfa                 mov edi, edx
// 009b4e1f  85ff                 test edi, edi
// 009b4e21  7504                 jne 0x9b4e27
// 009b4e23  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009b4e27  8d5801               lea ebx, [eax + 1]
// 009b4e2a  33c0                 xor eax, eax
// 009b4e2c  3bde                 cmp ebx, esi
// 009b4e2e  0f94c0               sete al
// 009b4e31  51                   push ecx
// 009b4e32  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 009b4e35  89442424             mov dword ptr [esp + 0x24], eax
// 009b4e39  e812110400           call 0x9f5f50
// 009b4e3e  8d4c2464             lea ecx, [esp + 0x64]
// 009b4e42  8bf0                 mov esi, eax
// 009b4e44  51                   push ecx
// 009b4e45  8bce                 mov ecx, esi
// 009b4e47  e8b433ffff           call 0x9a8200
// 009b4e4c  8b4008               mov eax, dword ptr [eax + 8]
// 009b4e4f  85ff                 test edi, edi
// 009b4e51  740c                 je 0x9b4e5f
// 009b4e53  39442410             cmp dword ptr [esp + 0x10], eax
// 009b4e57  7f10                 jg 0x9b4e69
// 009b4e59  89442410             mov dword ptr [esp + 0x10], eax
// 009b4e5d  eb0a                 jmp 0x9b4e69
// 009b4e5f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 009b4e63  0f8e62ffffff         jle 0x9b4dcb
// 009b4e69  8d542424             lea edx, [esp + 0x24]
// 009b4e6d  52                   push edx
// 009b4e6e  8bce                 mov ecx, esi
// 009b4e70  e88b33ffff           call 0x9a8200
// 009b4e75  85ff                 test edi, edi
// 009b4e77  750e                 jne 0x9b4e87
// 009b4e79  8b442410             mov eax, dword ptr [esp + 0x10]
// 009b4e7d  3b442424             cmp eax, dword ptr [esp + 0x24]
// 009b4e81  7e04                 jle 0x9b4e87
// 009b4e83  89442424             mov dword ptr [esp + 0x24], eax
// 009b4e87  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009b4e8b  8b442424             mov eax, dword ptr [esp + 0x24]
// 009b4e8f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 009b4e93  894c2438             mov dword ptr [esp + 0x38], ecx
// 009b4e97  8d4c2474             lea ecx, [esp + 0x74]
// 009b4e9b  89442434             mov dword ptr [esp + 0x34], eax
// 009b4e9f  8b442430             mov eax, dword ptr [esp + 0x30]
// 009b4ea3  51                   push ecx
// 009b4ea4  8bce                 mov ecx, esi
// 009b4ea6  89542440             mov dword ptr [esp + 0x40], edx
// 009b4eaa  89442444             mov dword ptr [esp + 0x44], eax
// 009b4eae  e84d33ffff           call 0x9a8200
// 009b4eb3  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 009b4eb7  3b38                 cmp edi, dword ptr [eax]
// 009b4eb9  7415                 je 0x9b4ed0
// 009b4ebb  6a00                 push 0
// 009b4ebd  6a00                 push 0
// 009b4ebf  6a00                 push 0
// 009b4ec1  6a00                 push 0
// 009b4ec3  8d542434             lea edx, [esp + 0x34]
// 009b4ec7  52                   push edx
// 009b4ec8  ff156c3bb200         call dword ptr [0xb23b6c]
// 009b4ece  eb3d                 jmp 0x9b4f0d
// 009b4ed0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 009b4ed4  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 009b4ed8  7e15                 jle 0x9b4eef
// 009b4eda  6a00                 push 0
// 009b4edc  6a00                 push 0
// 009b4ede  6a00                 push 0
// 009b4ee0  6a00                 push 0
// 009b4ee2  8d442444             lea eax, [esp + 0x44]
// 009b4ee6  50                   push eax
// 009b4ee7  ff156c3bb200         call dword ptr [0xb23b6c]
// 009b4eed  eb1e                 jmp 0x9b4f0d
// 009b4eef  8bc1                 mov eax, ecx
// 009b4ef1  2bc7                 sub eax, edi
// 009b4ef3  99                   cdq 
// 009b4ef4  2bc2                 sub eax, edx
// 009b4ef6  d1f8                 sar eax, 1
// 009b4ef8  f7d8                 neg eax
// 009b4efa  03c8                 add ecx, eax
// 009b4efc  8bc1                 mov eax, ecx
// 009b4efe  2bc7                 sub eax, edi
// 009b4f00  99                   cdq 
// 009b4f01  2bc2                 sub eax, edx
// 009b4f03  d1f8                 sar eax, 1
// 009b4f05  01442434             add dword ptr [esp + 0x34], eax
// 009b4f09  894c242c             mov dword ptr [esp + 0x2c], ecx
// 009b4f0d  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009b4f14  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 009b4f1b  8b3d483bb200         mov edi, dword ptr [0xb23b48]
// 009b4f21  51                   push ecx
// 009b4f22  52                   push edx
// 009b4f23  8d44242c             lea eax, [esp + 0x2c]
// 009b4f27  50                   push eax
// 009b4f28  ffd7                 call edi
// 009b4f2a  85c0                 test eax, eax
// 009b4f2c  7537                 jne 0x9b4f65
// 009b4f2e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 009b4f35  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 009b4f3c  51                   push ecx
// 009b4f3d  52                   push edx
// 009b4f3e  8d44243c             lea eax, [esp + 0x3c]
// 009b4f42  50                   push eax
// 009b4f43  ffd7                 call edi
// 009b4f45  85c0                 test eax, eax
// 009b4f47  752d                 jne 0x9b4f76
// 009b4f49  ff4c2418             dec dword ptr [esp + 0x18]
// 009b4f4d  8bc3                 mov eax, ebx
// 009b4f4f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 009b4f53  0f8cb7feffff         jl 0x9b4e10
// 009b4f59  5f                   pop edi
// 009b4f5a  5e                   pop esi
// 009b4f5b  5d                   pop ebp
// 009b4f5c  33c0                 xor eax, eax
// 009b4f5e  5b                   pop ebx
// 009b4f5f  83c474               add esp, 0x74
// 009b4f62  c20800               ret 8
// 009b4f65  8bce                 mov ecx, esi
// 009b4f67  e85434ffff           call 0x9a83c0
// 009b4f6c  5f                   pop edi
// 009b4f6d  5e                   pop esi
// 009b4f6e  5d                   pop ebp
// 009b4f6f  5b                   pop ebx
// 009b4f70  83c474               add esp, 0x74
// 009b4f73  c20800               ret 8
// 009b4f76  837c242000           cmp dword ptr [esp + 0x20], 0
// 009b4f7b  740c                 je 0x9b4f89
// 009b4f7d  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 009b4f80  83b90c01000000       cmp dword ptr [ecx + 0x10c], 0
// 009b4f87  75dc                 jne 0x9b4f65
// 009b4f89  8bce                 mov ecx, esi
// 009b4f8b  e83034ffff           call 0x9a83c0
// 009b4f90  5f                   pop edi
// 009b4f91  5e                   pop esi
// 009b4f92  5d                   pop ebp
// 009b4f93  40                   inc eax
// 009b4f94  5b                   pop ebx
// 009b4f95  83c474               add esp, 0x74
// 009b4f98  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?FindHeaderColumn@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
