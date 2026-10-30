// roc 2009-06 007c3af0  unit: CXTPReportPaintManager  size: 971 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c3af0
//
// 007c3af0  6aff                 push -1
// 007c3af2  68ebdc8700           push 0x87dceb
// 007c3af7  64a100000000         mov eax, dword ptr fs:[0]
// 007c3afd  50                   push eax
// 007c3afe  83ec2c               sub esp, 0x2c
// 007c3b01  53                   push ebx
// 007c3b02  55                   push ebp
// 007c3b03  56                   push esi
// 007c3b04  57                   push edi
// 007c3b05  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c3b0a  33c4                 xor eax, esp
// 007c3b0c  50                   push eax
// 007c3b0d  8d442440             lea eax, [esp + 0x40]
// 007c3b11  64a300000000         mov dword ptr fs:[0], eax
// 007c3b17  8be9                 mov ebp, ecx
// 007c3b19  8b442450             mov eax, dword ptr [esp + 0x50]
// 007c3b1d  8b4824               mov ecx, dword ptr [eax + 0x24]
// 007c3b20  8b5810               mov ebx, dword ptr [eax + 0x10]
// 007c3b23  8b542470             mov edx, dword ptr [esp + 0x70]
// 007c3b27  8b02                 mov eax, dword ptr [edx]
// 007c3b29  8b13                 mov edx, dword ptr [ebx]
// 007c3b2b  894c2418             mov dword ptr [esp + 0x18], ecx
// 007c3b2f  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 007c3b33  8b31                 mov esi, dword ptr [ecx]
// 007c3b35  8944241c             mov dword ptr [esp + 0x1c], eax
// 007c3b39  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 007c3b3f  8bcb                 mov ecx, ebx
// 007c3b41  895c2428             mov dword ptr [esp + 0x28], ebx
// 007c3b45  ffd0                 call eax
// 007c3b47  8d4c2458             lea ecx, [esp + 0x58]
// 007c3b4b  51                   push ecx
// 007c3b4c  8d542434             lea edx, [esp + 0x34]
// 007c3b50  52                   push edx
// 007c3b51  89442428             mov dword ptr [esp + 0x28], eax
// 007c3b55  8bfe                 mov edi, esi
// 007c3b57  ff1500ee8900         call dword ptr [0x89ee00]
// 007c3b5d  837c242000           cmp dword ptr [esp + 0x20], 0
// 007c3b62  8d4c2430             lea ecx, [esp + 0x30]
// 007c3b66  753c                 jne 0x7c3ba4
// 007c3b68  8b442450             mov eax, dword ptr [esp + 0x50]
// 007c3b6c  8b4028               mov eax, dword ptr [eax + 0x28]
// 007c3b6f  0b442468             or eax, dword ptr [esp + 0x68]
// 007c3b73  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007c3b77  8b33                 mov esi, dword ptr [ebx]
// 007c3b79  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007c3b7d  0d20080000           or eax, 0x820
// 007c3b82  50                   push eax
// 007c3b83  51                   push ecx
// 007c3b84  8bcf                 mov ecx, edi
// 007c3b86  83c670               add esi, 0x70
// 007c3b89  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3b8f  50                   push eax
// 007c3b90  8bcf                 mov ecx, edi
// 007c3b92  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c3b98  8b16                 mov edx, dword ptr [esi]
// 007c3b9a  50                   push eax
// 007c3b9b  8bcb                 mov ecx, ebx
// 007c3b9d  ffd2                 call edx
// 007c3b9f  e901030000           jmp 0x7c3ea5
// 007c3ba4  8b442418             mov eax, dword ptr [esp + 0x18]
// 007c3ba8  8b00                 mov eax, dword ptr [eax]
// 007c3baa  68200c0000           push 0xc20
// 007c3baf  83c070               add eax, 0x70
// 007c3bb2  51                   push ecx
// 007c3bb3  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007c3bb7  8944242c             mov dword ptr [esp + 0x2c], eax
// 007c3bbb  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3bc1  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007c3bc5  50                   push eax
// 007c3bc6  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c3bcc  8b542430             mov edx, dword ptr [esp + 0x30]
// 007c3bd0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007c3bd4  50                   push eax
// 007c3bd5  8b02                 mov eax, dword ptr [edx]
// 007c3bd7  ffd0                 call eax
// 007c3bd9  8b542438             mov edx, dword ptr [esp + 0x38]
// 007c3bdd  8b442460             mov eax, dword ptr [esp + 0x60]
// 007c3be1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007c3be5  2b542430             sub edx, dword ptr [esp + 0x30]
// 007c3be9  2bc1                 sub eax, ecx
// 007c3beb  3bd0                 cmp edx, eax
// 007c3bed  7d3b                 jge 0x7c3c2a
// 007c3bef  8b542450             mov edx, dword ptr [esp + 0x50]
// 007c3bf3  8b4228               mov eax, dword ptr [edx + 0x28]
// 007c3bf6  83e003               and eax, 3
// 007c3bf9  83e801               sub eax, 1
// 007c3bfc  7413                 je 0x7c3c11
// 007c3bfe  83e801               sub eax, 1
// 007c3c01  7527                 jne 0x7c3c2a
// 007c3c03  8b442460             mov eax, dword ptr [esp + 0x60]
// 007c3c07  2b442438             sub eax, dword ptr [esp + 0x38]
// 007c3c0b  01442430             add dword ptr [esp + 0x30], eax
// 007c3c0f  eb19                 jmp 0x7c3c2a
// 007c3c11  8b442430             mov eax, dword ptr [esp + 0x30]
// 007c3c15  2b442438             sub eax, dword ptr [esp + 0x38]
// 007c3c19  2bc1                 sub eax, ecx
// 007c3c1b  03442460             add eax, dword ptr [esp + 0x60]
// 007c3c1f  99                   cdq 
// 007c3c20  2bc2                 sub eax, edx
// 007c3c22  d1f8                 sar eax, 1
// 007c3c24  03c1                 add eax, ecx
// 007c3c26  89442430             mov dword ptr [esp + 0x30], eax
// 007c3c2a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007c3c2e  8b542430             mov edx, dword ptr [esp + 0x30]
// 007c3c32  894c2438             mov dword ptr [esp + 0x38], ecx
// 007c3c36  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007c3c3a  89542414             mov dword ptr [esp + 0x14], edx
// 007c3c3e  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3c44  3bc6                 cmp eax, esi
// 007c3c46  0f8e48020000         jle 0x7c3e94
// 007c3c4c  eb06                 jmp 0x7c3c54
// 007c3c4e  8bff                 mov edi, edi
// 007c3c50  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007c3c54  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c3c58  3b442438             cmp eax, dword ptr [esp + 0x38]
// 007c3c5c  0f8d32020000         jge 0x7c3e94
// 007c3c62  8d4c2470             lea ecx, [esp + 0x70]
// 007c3c66  ff15bcfc8900         call dword ptr [0x89fcbc]
// 007c3c6c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007c3c70  39442420             cmp dword ptr [esp + 0x20], eax
// 007c3c74  c744244800000000     mov dword ptr [esp + 0x48], 0
// 007c3c7c  0f8e7c010000         jle 0x7c3dfe
// 007c3c82  8b13                 mov edx, dword ptr [ebx]
// 007c3c84  50                   push eax
// 007c3c85  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 007c3c8b  8bcb                 mov ecx, ebx
// 007c3c8d  ffd0                 call eax
// 007c3c8f  8bd8                 mov ebx, eax
// 007c3c91  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 007c3c94  2bcf                 sub ecx, edi
// 007c3c96  51                   push ecx
// 007c3c97  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007c3c9b  57                   push edi
// 007c3c9c  8d54242c             lea edx, [esp + 0x2c]
// 007c3ca0  52                   push edx
// 007c3ca1  ff157cfe8900         call dword ptr [0x89fe7c]
// 007c3ca7  50                   push eax
// 007c3ca8  8d4c2474             lea ecx, [esp + 0x74]
// 007c3cac  c644244c01           mov byte ptr [esp + 0x4c], 1
// 007c3cb1  ff1508fa8900         call dword ptr [0x89fa08]
// 007c3cb7  8d4c2424             lea ecx, [esp + 0x24]
// 007c3cbb  c644244800           mov byte ptr [esp + 0x48], 0
// 007c3cc0  ff1510fd8900         call dword ptr [0x89fd10]
// 007c3cc6  8d4c2470             lea ecx, [esp + 0x70]
// 007c3cca  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3cd0  85c0                 test eax, eax
// 007c3cd2  0f8e84000000         jle 0x7c3d5c
// 007c3cd8  6a0a                 push 0xa
// 007c3cda  8d4c2474             lea ecx, [esp + 0x74]
// 007c3cde  ff154cf78900         call dword ptr [0x89f74c]
// 007c3ce4  6a0d                 push 0xd
// 007c3ce6  8d4c2474             lea ecx, [esp + 0x74]
// 007c3cea  ff154cf78900         call dword ptr [0x89f74c]
// 007c3cf0  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c3cf4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007c3cf8  8b5500               mov edx, dword ptr [ebp]
// 007c3cfb  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 007c3d01  50                   push eax
// 007c3d02  83ec10               sub esp, 0x10
// 007c3d05  8bc4                 mov eax, esp
// 007c3d07  8908                 mov dword ptr [eax], ecx
// 007c3d09  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c3d0d  894804               mov dword ptr [eax + 4], ecx
// 007c3d10  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c3d14  894808               mov dword ptr [eax + 8], ecx
// 007c3d17  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007c3d1b  89480c               mov dword ptr [eax + 0xc], ecx
// 007c3d1e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c3d22  8d842484000000       lea eax, [esp + 0x84]
// 007c3d29  50                   push eax
// 007c3d2a  51                   push ecx
// 007c3d2b  8d442430             lea eax, [esp + 0x30]
// 007c3d2f  50                   push eax
// 007c3d30  8bcd                 mov ecx, ebp
// 007c3d32  ffd2                 call edx
// 007c3d34  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007c3d38  8bf0                 mov esi, eax
// 007c3d3a  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c3d3e  3bc1                 cmp eax, ecx
// 007c3d40  894c2430             mov dword ptr [esp + 0x30], ecx
// 007c3d44  7f04                 jg 0x7c3d4a
// 007c3d46  89442430             mov dword ptr [esp + 0x30], eax
// 007c3d4a  8d4c2470             lea ecx, [esp + 0x70]
// 007c3d4e  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3d54  3bf0                 cmp esi, eax
// 007c3d56  0f8c24010000         jl 0x7c3e80
// 007c3d5c  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c3d60  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007c3d64  8b542434             mov edx, dword ptr [esp + 0x34]
// 007c3d68  50                   push eax
// 007c3d69  83ec10               sub esp, 0x10
// 007c3d6c  8bc4                 mov eax, esp
// 007c3d6e  8908                 mov dword ptr [eax], ecx
// 007c3d70  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c3d74  895004               mov dword ptr [eax + 4], edx
// 007c3d77  8b542450             mov edx, dword ptr [esp + 0x50]
// 007c3d7b  894808               mov dword ptr [eax + 8], ecx
// 007c3d7e  51                   push ecx
// 007c3d7f  89500c               mov dword ptr [eax + 0xc], edx
// 007c3d82  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007c3d86  8bcc                 mov ecx, esp
// 007c3d88  89642444             mov dword ptr [esp + 0x44], esp
// 007c3d8c  50                   push eax
// 007c3d8d  ff15e4fc8900         call dword ptr [0x89fce4]
// 007c3d93  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c3d97  8b5500               mov edx, dword ptr [ebp]
// 007c3d9a  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 007c3da0  53                   push ebx
// 007c3da1  50                   push eax
// 007c3da2  8d4c2434             lea ecx, [esp + 0x34]
// 007c3da6  51                   push ecx
// 007c3da7  8bcd                 mov ecx, ebp
// 007c3da9  ffd2                 call edx
// 007c3dab  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007c3daf  8bf0                 mov esi, eax
// 007c3db1  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c3db5  3bc1                 cmp eax, ecx
// 007c3db7  894c2430             mov dword ptr [esp + 0x30], ecx
// 007c3dbb  7f04                 jg 0x7c3dc1
// 007c3dbd  89442430             mov dword ptr [esp + 0x30], eax
// 007c3dc1  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007c3dc4  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 007c3dc7  ff44241c             inc dword ptr [esp + 0x1c]
// 007c3dcb  03f8                 add edi, eax
// 007c3dcd  3bf0                 cmp esi, eax
// 007c3dcf  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 007c3dd7  8d4c2470             lea ecx, [esp + 0x70]
// 007c3ddb  0f8cab000000         jl 0x7c3e8c
// 007c3de1  ff1510fd8900         call dword ptr [0x89fd10]
// 007c3de7  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007c3deb  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3df1  3bc7                 cmp eax, edi
// 007c3df3  0f8f57feffff         jg 0x7c3c50
// 007c3df9  e996000000           jmp 0x7c3e94
// 007c3dfe  8b742454             mov esi, dword ptr [esp + 0x54]
// 007c3e02  8bce                 mov ecx, esi
// 007c3e04  ff1554fb8900         call dword ptr [0x89fb54]
// 007c3e0a  2bc7                 sub eax, edi
// 007c3e0c  50                   push eax
// 007c3e0d  57                   push edi
// 007c3e0e  8d44245c             lea eax, [esp + 0x5c]
// 007c3e12  50                   push eax
// 007c3e13  8bce                 mov ecx, esi
// 007c3e15  ff157cfe8900         call dword ptr [0x89fe7c]
// 007c3e1b  50                   push eax
// 007c3e1c  8d4c2474             lea ecx, [esp + 0x74]
// 007c3e20  c644244c02           mov byte ptr [esp + 0x4c], 2
// 007c3e25  ff1508fa8900         call dword ptr [0x89fa08]
// 007c3e2b  8d4c2454             lea ecx, [esp + 0x54]
// 007c3e2f  c644244800           mov byte ptr [esp + 0x48], 0
// 007c3e34  ff1510fd8900         call dword ptr [0x89fd10]
// 007c3e3a  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c3e3e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007c3e42  8b5500               mov edx, dword ptr [ebp]
// 007c3e45  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 007c3e4b  50                   push eax
// 007c3e4c  83ec10               sub esp, 0x10
// 007c3e4f  8bc4                 mov eax, esp
// 007c3e51  8908                 mov dword ptr [eax], ecx
// 007c3e53  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007c3e57  894804               mov dword ptr [eax + 4], ecx
// 007c3e5a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c3e5e  894808               mov dword ptr [eax + 8], ecx
// 007c3e61  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007c3e65  89480c               mov dword ptr [eax + 0xc], ecx
// 007c3e68  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c3e6c  8d842484000000       lea eax, [esp + 0x84]
// 007c3e73  50                   push eax
// 007c3e74  51                   push ecx
// 007c3e75  8d442430             lea eax, [esp + 0x30]
// 007c3e79  50                   push eax
// 007c3e7a  8bcd                 mov ecx, ebp
// 007c3e7c  ffd2                 call edx
// 007c3e7e  8bf0                 mov esi, eax
// 007c3e80  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 007c3e88  8d4c2470             lea ecx, [esp + 0x70]
// 007c3e8c  03f7                 add esi, edi
// 007c3e8e  ff1510fd8900         call dword ptr [0x89fd10]
// 007c3e94  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c3e98  6a00                 push 0
// 007c3e9a  e8755af5ff           call 0x719914
// 007c3e9f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007c3ea3  8930                 mov dword ptr [eax], esi
// 007c3ea5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007c3ea9  64890d00000000       mov dword ptr fs:[0], ecx
// 007c3eb0  59                   pop ecx
// 007c3eb1  5f                   pop edi
// 007c3eb2  5e                   pop esi
// 007c3eb3  5d                   pop ebp
// 007c3eb4  5b                   pop ebx
// 007c3eb5  83c438               add esp, 0x38
// 007c3eb8  c22400               ret 0x24
// copied from an identical function in another client (function ?DrawTextLine@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HAAH3@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp