// roc 2012-06 00a26d50  unit: CXTPReportPaintManager  size: 644 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a26d50
//
// 00a26d50  6aff                 push -1
// 00a26d52  68e149ae00           push 0xae49e1
// 00a26d57  64a100000000         mov eax, dword ptr fs:[0]
// 00a26d5d  50                   push eax
// 00a26d5e  83ec44               sub esp, 0x44
// 00a26d61  53                   push ebx
// 00a26d62  55                   push ebp
// 00a26d63  56                   push esi
// 00a26d64  57                   push edi
// 00a26d65  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a26d6a  33c4                 xor eax, esp
// 00a26d6c  50                   push eax
// 00a26d6d  8d442458             lea eax, [esp + 0x58]
// 00a26d71  64a300000000         mov dword ptr fs:[0], eax
// 00a26d77  8bf9                 mov edi, ecx
// 00a26d79  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00a26d7d  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00a26d80  8d4c246c             lea ecx, [esp + 0x6c]
// 00a26d84  51                   push ecx
// 00a26d85  8bce                 mov ecx, esi
// 00a26d87  89442418             mov dword ptr [esp + 0x18], eax
// 00a26d8b  e870d4f8ff           call 0x9b4200
// 00a26d90  8b6c2468             mov ebp, dword ptr [esp + 0x68]
// 00a26d94  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 00a26d98  c744246000000000     mov dword ptr [esp + 0x60], 0
// 00a26da0  8bce                 mov ecx, esi
// 00a26da2  740c                 je 0xa26db0
// 00a26da4  8b542470             mov edx, dword ptr [esp + 0x70]
// 00a26da8  52                   push edx
// 00a26da9  e8421bf8ff           call 0x9a88f0
// 00a26dae  eb05                 jmp 0xa26db5
// 00a26db0  e80b1bf8ff           call 0x9a88c0
// 00a26db5  8bd8                 mov ebx, eax
// 00a26db7  8d442438             lea eax, [esp + 0x38]
// 00a26dbb  50                   push eax
// 00a26dbc  8bce                 mov ecx, esi
// 00a26dbe  e83d14f8ff           call 0x9a8200
// 00a26dc3  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 00a26dca  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a26dce  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a26dd2  8d0c18               lea ecx, [eax + ebx]
// 00a26dd5  89442428             mov dword ptr [esp + 0x28], eax
// 00a26dd9  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a26ddd  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a26de1  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a26de5  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a26de9  89442434             mov dword ptr [esp + 0x34], eax
// 00a26ded  750b                 jne 0xa26dfa
// 00a26def  8bce                 mov ecx, esi
// 00a26df1  e86a18f8ff           call 0x9a8660
// 00a26df6  01442428             add dword ptr [esp + 0x28], eax
// 00a26dfa  8bce                 mov ecx, esi
// 00a26dfc  e81f15f8ff           call 0x9a8320
// 00a26e01  bb01000000           mov ebx, 1
// 00a26e06  85c0                 test eax, eax
// 00a26e08  740a                 je 0xa26e14
// 00a26e0a  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 00a26e0e  895c2468             mov dword ptr [esp + 0x68], ebx
// 00a26e12  7408                 je 0xa26e1c
// 00a26e14  c744246800000000     mov dword ptr [esp + 0x68], 0
// 00a26e1c  8d4f30               lea ecx, [edi + 0x30]
// 00a26e1f  51                   push ecx
// 00a26e20  55                   push ebp
// 00a26e21  8d4c2450             lea ecx, [esp + 0x50]
// 00a26e25  e806e7faff           call 0x9d5530
// 00a26e2a  8d542420             lea edx, [esp + 0x20]
// 00a26e2e  52                   push edx
// 00a26e2f  8d4c2470             lea ecx, [esp + 0x70]
// 00a26e33  885c2464             mov byte ptr [esp + 0x64], bl
// 00a26e37  ff155846b200         call dword ptr [0xb24658]
// 00a26e3d  50                   push eax
// 00a26e3e  8d4c2474             lea ecx, [esp + 0x74]
// 00a26e42  ff159847b200         call dword ptr [0xb24798]
// 00a26e48  50                   push eax
// 00a26e49  8b4508               mov eax, dword ptr [ebp + 8]
// 00a26e4c  50                   push eax
// 00a26e4d  ff154021b200         call dword ptr [0xb22140]
// 00a26e53  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a26e57  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a26e5b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a26e5f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a26e63  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00a26e67  83f8ff               cmp eax, -1
// 00a26e6a  7447                 je 0xa26eb3
// 00a26e6c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a26e70  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a26e74  8b1f                 mov ebx, dword ptr [edi]
// 00a26e76  50                   push eax
// 00a26e77  83ec10               sub esp, 0x10
// 00a26e7a  8bc4                 mov eax, esp
// 00a26e7c  8910                 mov dword ptr [eax], edx
// 00a26e7e  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a26e82  894804               mov dword ptr [eax + 4], ecx
// 00a26e85  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a26e89  895008               mov dword ptr [eax + 8], edx
// 00a26e8c  89480c               mov dword ptr [eax + 0xc], ecx
// 00a26e8f  8bce                 mov ecx, esi
// 00a26e91  e83a15f8ff           call 0x9a83d0
// 00a26e96  8b93a8000000         mov edx, dword ptr [ebx + 0xa8]
// 00a26e9c  50                   push eax
// 00a26e9d  6a00                 push 0
// 00a26e9f  8bcf                 mov ecx, edi
// 00a26ea1  ffd2                 call edx
// 00a26ea3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a26ea7  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00a26eab  8d540102             lea edx, [ecx + eax + 2]
// 00a26eaf  89542428             mov dword ptr [esp + 0x28], edx
// 00a26eb3  b803000000           mov eax, 3
// 00a26eb8  01442428             add dword ptr [esp + 0x28], eax
// 00a26ebc  29442430             sub dword ptr [esp + 0x30], eax
// 00a26ec0  8d4c246c             lea ecx, [esp + 0x6c]
// 00a26ec4  ff155846b200         call dword ptr [0xb24658]
// 00a26eca  85c0                 test eax, eax
// 00a26ecc  0f8ecf000000         jle 0xa26fa1
// 00a26ed2  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a26ed6  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a26eda  3bd0                 cmp edx, eax
// 00a26edc  0f8ebf000000         jle 0xa26fa1
// 00a26ee2  83bf2802000000       cmp dword ptr [edi + 0x228], 0
// 00a26ee9  7441                 je 0xa26f2c
// 00a26eeb  837c246800           cmp dword ptr [esp + 0x68], 0
// 00a26ef0  743a                 je 0xa26f2c
// 00a26ef2  8bca                 mov ecx, edx
// 00a26ef4  2bc8                 sub ecx, eax
// 00a26ef6  8d41e5               lea eax, [ecx - 0x1b]
// 00a26ef9  3bd8                 cmp ebx, eax
// 00a26efb  8bcb                 mov ecx, ebx
// 00a26efd  7c02                 jl 0xa26f01
// 00a26eff  8bc8                 mov ecx, eax
// 00a26f01  83f9fb               cmp ecx, -5
// 00a26f04  7d0a                 jge 0xa26f10
// 00a26f06  c7442418fbffffff     mov dword ptr [esp + 0x18], 0xfffffffb
// 00a26f0e  eb08                 jmp 0xa26f18
// 00a26f10  3bd8                 cmp ebx, eax
// 00a26f12  7c04                 jl 0xa26f18
// 00a26f14  89442418             mov dword ptr [esp + 0x18], eax
// 00a26f18  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a26f1c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a26f20  8d440108             lea eax, [ecx + eax + 8]
// 00a26f24  3bd0                 cmp edx, eax
// 00a26f26  7c04                 jl 0xa26f2c
// 00a26f28  89442430             mov dword ptr [esp + 0x30], eax
// 00a26f2c  8bce                 mov ecx, esi
// 00a26f2e  e84d12f8ff           call 0x9a8180
// 00a26f33  8b7500               mov esi, dword ptr [ebp]
// 00a26f36  2410                 and al, 0x10
// 00a26f38  0fbec0               movsx eax, al
// 00a26f3b  f7d8                 neg eax
// 00a26f3d  1bc0                 sbb eax, eax
// 00a26f3f  83e0f0               and eax, 0xfffffff0
// 00a26f42  83c020               add eax, 0x20
// 00a26f45  0d048c0000           or eax, 0x8c04
// 00a26f4a  50                   push eax
// 00a26f4b  8d54242c             lea edx, [esp + 0x2c]
// 00a26f4f  52                   push edx
// 00a26f50  8d4c2474             lea ecx, [esp + 0x74]
// 00a26f54  ff155846b200         call dword ptr [0xb24658]
// 00a26f5a  50                   push eax
// 00a26f5b  8d4c2478             lea ecx, [esp + 0x78]
// 00a26f5f  ff159847b200         call dword ptr [0xb24798]
// 00a26f65  50                   push eax
// 00a26f66  8b4670               mov eax, dword ptr [esi + 0x70]
// 00a26f69  8bcd                 mov ecx, ebp
// 00a26f6b  ffd0                 call eax
// 00a26f6d  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a26f71  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 00a26f75  8b8fe4020000         mov ecx, dword ptr [edi + 0x2e4]
// 00a26f7b  8b11                 mov edx, dword ptr [ecx]
// 00a26f7d  50                   push eax
// 00a26f7e  8b4258               mov eax, dword ptr [edx + 0x58]
// 00a26f81  ffd0                 call eax
// 00a26f83  8d4c2448             lea ecx, [esp + 0x48]
// 00a26f87  8bf0                 mov esi, eax
// 00a26f89  c644246000           mov byte ptr [esp + 0x60], 0
// 00a26f8e  e81de6faff           call 0x9d55b0
// 00a26f93  8d4c246c             lea ecx, [esp + 0x6c]
// 00a26f97  ff15d047b200         call dword ptr [0xb247d0]
// 00a26f9d  8bc6                 mov eax, esi
// 00a26f9f  eb1d                 jmp 0xa26fbe
// 00a26fa1  8d4c2448             lea ecx, [esp + 0x48]
// 00a26fa5  c644246000           mov byte ptr [esp + 0x60], 0
// 00a26faa  e801e6faff           call 0x9d55b0
// 00a26faf  8d4c246c             lea ecx, [esp + 0x6c]
// 00a26fb3  ff15d047b200         call dword ptr [0xb247d0]
// 00a26fb9  b808000000           mov eax, 8
// 00a26fbe  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a26fc2  64890d00000000       mov dword ptr fs:[0], ecx
// 00a26fc9  59                   pop ecx
// 00a26fca  5f                   pop edi
// 00a26fcb  5e                   pop esi
// 00a26fcc  5d                   pop ebp
// 00a26fcd  5b                   pop ebx
// 00a26fce  83c450               add esp, 0x50
// 00a26fd1  c20c00               ret 0xc
// copied from an identical function in another client (function ?CalcColumnHeight@CXTPReportPaintManager@@MAEHPAVCDC@@PAVCXTPReportColumn@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp