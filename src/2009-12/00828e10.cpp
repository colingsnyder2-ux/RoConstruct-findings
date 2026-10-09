// roc 2009-12 00828e10  unit: CXTPReportHeader  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00828e10
//
// 00828e10  83ec74               sub esp, 0x74
// 00828e13  53                   push ebx
// 00828e14  55                   push ebp
// 00828e15  56                   push esi
// 00828e16  8be9                 mov ebp, ecx
// 00828e18  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00828e1b  57                   push edi
// 00828e1c  50                   push eax
// 00828e1d  8d4c2458             lea ecx, [esp + 0x58]
// 00828e21  e8aa240200           call 0x84b2d0
// 00828e26  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 00828e29  8b5564               mov edx, dword ptr [ebp + 0x64]
// 00828e2c  8b4568               mov eax, dword ptr [ebp + 0x68]
// 00828e2f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00828e33  8b4d6c               mov ecx, dword ptr [ebp + 0x6c]
// 00828e36  89542448             mov dword ptr [esp + 0x48], edx
// 00828e3a  8944244c             mov dword ptr [esp + 0x4c], eax
// 00828e3e  8bd0                 mov edx, eax
// 00828e40  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00828e44  894c2450             mov dword ptr [esp + 0x50], ecx
// 00828e48  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00828e4b  89542444             mov dword ptr [esp + 0x44], edx
// 00828e4f  8944244c             mov dword ptr [esp + 0x4c], eax
// 00828e53  8b5930               mov ebx, dword ptr [ecx + 0x30]
// 00828e56  e8a5450400           call 0x86d400
// 00828e5b  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00828e62  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00828e69  8b355cca9800         mov esi, dword ptr [0x98ca5c]
// 00828e6f  51                   push ecx
// 00828e70  8bf8                 mov edi, eax
// 00828e72  52                   push edx
// 00828e73  8d44244c             lea eax, [esp + 0x4c]
// 00828e77  50                   push eax
// 00828e78  897c2428             mov dword ptr [esp + 0x28], edi
// 00828e7c  ffd6                 call esi
// 00828e7e  85c0                 test eax, eax
// 00828e80  740c                 je 0x828e8e
// 00828e82  5f                   pop edi
// 00828e83  5e                   pop esi
// 00828e84  5d                   pop ebp
// 00828e85  8bc3                 mov eax, ebx
// 00828e87  5b                   pop ebx
// 00828e88  83c474               add esp, 0x74
// 00828e8b  c20800               ret 8
// 00828e8e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00828e95  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00828e98  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00828e9f  51                   push ecx
// 00828ea0  83c070               add eax, 0x70
// 00828ea3  52                   push edx
// 00828ea4  50                   push eax
// 00828ea5  ffd6                 call esi
// 00828ea7  85c0                 test eax, eax
// 00828ea9  750d                 jne 0x828eb8
// 00828eab  5f                   pop edi
// 00828eac  5e                   pop esi
// 00828ead  5d                   pop ebp
// 00828eae  83c8ff               or eax, 0xffffffff
// 00828eb1  5b                   pop ebx
// 00828eb2  83c474               add esp, 0x74
// 00828eb5  c20800               ret 8
// 00828eb8  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00828ebb  8bb010010000         mov esi, dword ptr [eax + 0x110]
// 00828ec1  3bf7                 cmp esi, edi
// 00828ec3  7d06                 jge 0x828ecb
// 00828ec5  89742414             mov dword ptr [esp + 0x14], esi
// 00828ec9  eb06                 jmp 0x828ed1
// 00828ecb  897c2414             mov dword ptr [esp + 0x14], edi
// 00828ecf  8bf7                 mov esi, edi
// 00828ed1  33c0                 xor eax, eax
// 00828ed3  3bf8                 cmp edi, eax
// 00828ed5  89442410             mov dword ptr [esp + 0x10], eax
// 00828ed9  0f8e5a010000         jle 0x829039
// 00828edf  8d4c3eff             lea ecx, [esi + edi - 1]
// 00828ee3  894c2418             mov dword ptr [esp + 0x18], ecx
// 00828ee7  eb0b                 jmp 0x828ef4
// 00828ee9  8da42400000000       lea esp, [esp]
// 00828ef0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00828ef4  33d2                 xor edx, edx
// 00828ef6  3bc6                 cmp eax, esi
// 00828ef8  0f9cc2               setl dl
// 00828efb  8bc8                 mov ecx, eax
// 00828efd  8bfa                 mov edi, edx
// 00828eff  85ff                 test edi, edi
// 00828f01  7504                 jne 0x828f07
// 00828f03  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00828f07  8d5801               lea ebx, [eax + 1]
// 00828f0a  33c0                 xor eax, eax
// 00828f0c  3bde                 cmp ebx, esi
// 00828f0e  0f94c0               sete al
// 00828f11  51                   push ecx
// 00828f12  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 00828f15  89442424             mov dword ptr [esp + 0x24], eax
// 00828f19  e8e2450400           call 0x86d500
// 00828f1e  8d4c2464             lea ecx, [esp + 0x64]
// 00828f22  8bf0                 mov esi, eax
// 00828f24  51                   push ecx
// 00828f25  8bce                 mov ecx, esi
// 00828f27  e8a4ebffff           call 0x827ad0
// 00828f2c  8b4008               mov eax, dword ptr [eax + 8]
// 00828f2f  85ff                 test edi, edi
// 00828f31  740c                 je 0x828f3f
// 00828f33  39442410             cmp dword ptr [esp + 0x10], eax
// 00828f37  7f10                 jg 0x828f49
// 00828f39  89442410             mov dword ptr [esp + 0x10], eax
// 00828f3d  eb0a                 jmp 0x828f49
// 00828f3f  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00828f43  0f8e62ffffff         jle 0x828eab
// 00828f49  8d542424             lea edx, [esp + 0x24]
// 00828f4d  52                   push edx
// 00828f4e  8bce                 mov ecx, esi
// 00828f50  e87bebffff           call 0x827ad0
// 00828f55  85ff                 test edi, edi
// 00828f57  750e                 jne 0x828f67
// 00828f59  8b442410             mov eax, dword ptr [esp + 0x10]
// 00828f5d  3b442424             cmp eax, dword ptr [esp + 0x24]
// 00828f61  7e04                 jle 0x828f67
// 00828f63  89442424             mov dword ptr [esp + 0x24], eax
// 00828f67  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00828f6b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00828f6f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00828f73  894c2438             mov dword ptr [esp + 0x38], ecx
// 00828f77  8d4c2474             lea ecx, [esp + 0x74]
// 00828f7b  89442434             mov dword ptr [esp + 0x34], eax
// 00828f7f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00828f83  51                   push ecx
// 00828f84  8bce                 mov ecx, esi
// 00828f86  89542440             mov dword ptr [esp + 0x40], edx
// 00828f8a  89442444             mov dword ptr [esp + 0x44], eax
// 00828f8e  e83debffff           call 0x827ad0
// 00828f93  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00828f97  3b38                 cmp edi, dword ptr [eax]
// 00828f99  7415                 je 0x828fb0
// 00828f9b  6a00                 push 0
// 00828f9d  6a00                 push 0
// 00828f9f  6a00                 push 0
// 00828fa1  6a00                 push 0
// 00828fa3  8d542434             lea edx, [esp + 0x34]
// 00828fa7  52                   push edx
// 00828fa8  ff1538ca9800         call dword ptr [0x98ca38]
// 00828fae  eb3d                 jmp 0x828fed
// 00828fb0  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00828fb4  3b4c245c             cmp ecx, dword ptr [esp + 0x5c]
// 00828fb8  7e15                 jle 0x828fcf
// 00828fba  6a00                 push 0
// 00828fbc  6a00                 push 0
// 00828fbe  6a00                 push 0
// 00828fc0  6a00                 push 0
// 00828fc2  8d442444             lea eax, [esp + 0x44]
// 00828fc6  50                   push eax
// 00828fc7  ff1538ca9800         call dword ptr [0x98ca38]
// 00828fcd  eb1e                 jmp 0x828fed
// 00828fcf  8bc1                 mov eax, ecx
// 00828fd1  2bc7                 sub eax, edi
// 00828fd3  99                   cdq 
// 00828fd4  2bc2                 sub eax, edx
// 00828fd6  d1f8                 sar eax, 1
// 00828fd8  f7d8                 neg eax
// 00828fda  03c8                 add ecx, eax
// 00828fdc  8bc1                 mov eax, ecx
// 00828fde  2bc7                 sub eax, edi
// 00828fe0  99                   cdq 
// 00828fe1  2bc2                 sub eax, edx
// 00828fe3  d1f8                 sar eax, 1
// 00828fe5  01442434             add dword ptr [esp + 0x34], eax
// 00828fe9  894c242c             mov dword ptr [esp + 0x2c], ecx
// 00828fed  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00828ff4  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 00828ffb  8b3d5cca9800         mov edi, dword ptr [0x98ca5c]
// 00829001  51                   push ecx
// 00829002  52                   push edx
// 00829003  8d44242c             lea eax, [esp + 0x2c]
// 00829007  50                   push eax
// 00829008  ffd7                 call edi
// 0082900a  85c0                 test eax, eax
// 0082900c  7537                 jne 0x829045
// 0082900e  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00829015  8b942488000000       mov edx, dword ptr [esp + 0x88]
// 0082901c  51                   push ecx
// 0082901d  52                   push edx
// 0082901e  8d44243c             lea eax, [esp + 0x3c]
// 00829022  50                   push eax
// 00829023  ffd7                 call edi
// 00829025  85c0                 test eax, eax
// 00829027  752d                 jne 0x829056
// 00829029  ff4c2418             dec dword ptr [esp + 0x18]
// 0082902d  8bc3                 mov eax, ebx
// 0082902f  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 00829033  0f8cb7feffff         jl 0x828ef0
// 00829039  5f                   pop edi
// 0082903a  5e                   pop esi
// 0082903b  5d                   pop ebp
// 0082903c  33c0                 xor eax, eax
// 0082903e  5b                   pop ebx
// 0082903f  83c474               add esp, 0x74
// 00829042  c20800               ret 8
// 00829045  8bce                 mov ecx, esi
// 00829047  e834ecffff           call 0x827c80
// 0082904c  5f                   pop edi
// 0082904d  5e                   pop esi
// 0082904e  5d                   pop ebp
// 0082904f  5b                   pop ebx
// 00829050  83c474               add esp, 0x74
// 00829053  c20800               ret 8
// 00829056  837c242000           cmp dword ptr [esp + 0x20], 0
// 0082905b  740c                 je 0x829069
// 0082905d  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00829060  83b90c01000000       cmp dword ptr [ecx + 0x10c], 0
// 00829067  75dc                 jne 0x829045
// 00829069  8bce                 mov ecx, esi
// 0082906b  e810ecffff           call 0x827c80
// 00829070  5f                   pop edi
// 00829071  5e                   pop esi
// 00829072  5d                   pop ebp
// 00829073  40                   inc eax
// 00829074  5b                   pop ebx
// 00829075  83c474               add esp, 0x74
// 00829078  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?FindHeaderColumn@CXTPReportHeader@@UBEHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
