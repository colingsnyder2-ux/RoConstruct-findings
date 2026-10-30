// roc 2010-06 00852a50  unit: CXTPReportPaintManager  size: 971 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00852a50
//
// 00852a50  6aff                 push -1
// 00852a52  680b7e9b00           push 0x9b7e0b
// 00852a57  64a100000000         mov eax, dword ptr fs:[0]
// 00852a5d  50                   push eax
// 00852a5e  83ec2c               sub esp, 0x2c
// 00852a61  53                   push ebx
// 00852a62  55                   push ebp
// 00852a63  56                   push esi
// 00852a64  57                   push edi
// 00852a65  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00852a6a  33c4                 xor eax, esp
// 00852a6c  50                   push eax
// 00852a6d  8d442440             lea eax, [esp + 0x40]
// 00852a71  64a300000000         mov dword ptr fs:[0], eax
// 00852a77  8be9                 mov ebp, ecx
// 00852a79  8b442450             mov eax, dword ptr [esp + 0x50]
// 00852a7d  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00852a80  8b5810               mov ebx, dword ptr [eax + 0x10]
// 00852a83  8b542470             mov edx, dword ptr [esp + 0x70]
// 00852a87  8b02                 mov eax, dword ptr [edx]
// 00852a89  8b13                 mov edx, dword ptr [ebx]
// 00852a8b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00852a8f  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00852a93  8b31                 mov esi, dword ptr [ecx]
// 00852a95  8944241c             mov dword ptr [esp + 0x1c], eax
// 00852a99  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00852a9f  8bcb                 mov ecx, ebx
// 00852aa1  895c2428             mov dword ptr [esp + 0x28], ebx
// 00852aa5  ffd0                 call eax
// 00852aa7  8d4c2458             lea ecx, [esp + 0x58]
// 00852aab  51                   push ecx
// 00852aac  8d542434             lea edx, [esp + 0x34]
// 00852ab0  52                   push edx
// 00852ab1  89442428             mov dword ptr [esp + 0x28], eax
// 00852ab5  8bfe                 mov edi, esi
// 00852ab7  ff1548bc9e00         call dword ptr [0x9ebc48]
// 00852abd  837c242000           cmp dword ptr [esp + 0x20], 0
// 00852ac2  8d4c2430             lea ecx, [esp + 0x30]
// 00852ac6  753c                 jne 0x852b04
// 00852ac8  8b442450             mov eax, dword ptr [esp + 0x50]
// 00852acc  8b4028               mov eax, dword ptr [eax + 0x28]
// 00852acf  0b442468             or eax, dword ptr [esp + 0x68]
// 00852ad3  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00852ad7  8b33                 mov esi, dword ptr [ebx]
// 00852ad9  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00852add  0d20080000           or eax, 0x820
// 00852ae2  50                   push eax
// 00852ae3  51                   push ecx
// 00852ae4  8bcf                 mov ecx, edi
// 00852ae6  83c670               add esi, 0x70
// 00852ae9  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852aef  50                   push eax
// 00852af0  8bcf                 mov ecx, edi
// 00852af2  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00852af8  8b16                 mov edx, dword ptr [esi]
// 00852afa  50                   push eax
// 00852afb  8bcb                 mov ecx, ebx
// 00852afd  ffd2                 call edx
// 00852aff  e901030000           jmp 0x852e05
// 00852b04  8b442418             mov eax, dword ptr [esp + 0x18]
// 00852b08  8b00                 mov eax, dword ptr [eax]
// 00852b0a  68200c0000           push 0xc20
// 00852b0f  83c070               add eax, 0x70
// 00852b12  51                   push ecx
// 00852b13  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00852b17  8944242c             mov dword ptr [esp + 0x2c], eax
// 00852b1b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852b21  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00852b25  50                   push eax
// 00852b26  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00852b2c  8b542430             mov edx, dword ptr [esp + 0x30]
// 00852b30  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00852b34  50                   push eax
// 00852b35  8b02                 mov eax, dword ptr [edx]
// 00852b37  ffd0                 call eax
// 00852b39  8b542438             mov edx, dword ptr [esp + 0x38]
// 00852b3d  8b442460             mov eax, dword ptr [esp + 0x60]
// 00852b41  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00852b45  2b542430             sub edx, dword ptr [esp + 0x30]
// 00852b49  2bc1                 sub eax, ecx
// 00852b4b  3bd0                 cmp edx, eax
// 00852b4d  7d3b                 jge 0x852b8a
// 00852b4f  8b542450             mov edx, dword ptr [esp + 0x50]
// 00852b53  8b4228               mov eax, dword ptr [edx + 0x28]
// 00852b56  83e003               and eax, 3
// 00852b59  83e801               sub eax, 1
// 00852b5c  7413                 je 0x852b71
// 00852b5e  83e801               sub eax, 1
// 00852b61  7527                 jne 0x852b8a
// 00852b63  8b442460             mov eax, dword ptr [esp + 0x60]
// 00852b67  2b442438             sub eax, dword ptr [esp + 0x38]
// 00852b6b  01442430             add dword ptr [esp + 0x30], eax
// 00852b6f  eb19                 jmp 0x852b8a
// 00852b71  8b442430             mov eax, dword ptr [esp + 0x30]
// 00852b75  2b442438             sub eax, dword ptr [esp + 0x38]
// 00852b79  2bc1                 sub eax, ecx
// 00852b7b  03442460             add eax, dword ptr [esp + 0x60]
// 00852b7f  99                   cdq 
// 00852b80  2bc2                 sub eax, edx
// 00852b82  d1f8                 sar eax, 1
// 00852b84  03c1                 add eax, ecx
// 00852b86  89442430             mov dword ptr [esp + 0x30], eax
// 00852b8a  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00852b8e  8b542430             mov edx, dword ptr [esp + 0x30]
// 00852b92  894c2438             mov dword ptr [esp + 0x38], ecx
// 00852b96  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00852b9a  89542414             mov dword ptr [esp + 0x14], edx
// 00852b9e  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852ba4  3bc6                 cmp eax, esi
// 00852ba6  0f8e48020000         jle 0x852df4
// 00852bac  eb06                 jmp 0x852bb4
// 00852bae  8bff                 mov edi, edi
// 00852bb0  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00852bb4  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852bb8  3b442438             cmp eax, dword ptr [esp + 0x38]
// 00852bbc  0f8d32020000         jge 0x852df4
// 00852bc2  8d4c2470             lea ecx, [esp + 0x70]
// 00852bc6  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 00852bcc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00852bd0  39442420             cmp dword ptr [esp + 0x20], eax
// 00852bd4  c744244800000000     mov dword ptr [esp + 0x48], 0
// 00852bdc  0f8e7c010000         jle 0x852d5e
// 00852be2  8b13                 mov edx, dword ptr [ebx]
// 00852be4  50                   push eax
// 00852be5  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 00852beb  8bcb                 mov ecx, ebx
// 00852bed  ffd0                 call eax
// 00852bef  8bd8                 mov ebx, eax
// 00852bf1  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00852bf4  2bcf                 sub ecx, edi
// 00852bf6  51                   push ecx
// 00852bf7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00852bfb  57                   push edi
// 00852bfc  8d54242c             lea edx, [esp + 0x2c]
// 00852c00  52                   push edx
// 00852c01  ff153cc89e00         call dword ptr [0x9ec83c]
// 00852c07  50                   push eax
// 00852c08  8d4c2474             lea ecx, [esp + 0x74]
// 00852c0c  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00852c11  ff1580c59e00         call dword ptr [0x9ec580]
// 00852c17  8d4c2424             lea ecx, [esp + 0x24]
// 00852c1b  c644244800           mov byte ptr [esp + 0x48], 0
// 00852c20  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00852c26  8d4c2470             lea ecx, [esp + 0x70]
// 00852c2a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852c30  85c0                 test eax, eax
// 00852c32  0f8e84000000         jle 0x852cbc
// 00852c38  6a0a                 push 0xa
// 00852c3a  8d4c2474             lea ecx, [esp + 0x74]
// 00852c3e  ff1580cc9e00         call dword ptr [0x9ecc80]
// 00852c44  6a0d                 push 0xd
// 00852c46  8d4c2474             lea ecx, [esp + 0x74]
// 00852c4a  ff1580cc9e00         call dword ptr [0x9ecc80]
// 00852c50  8b442468             mov eax, dword ptr [esp + 0x68]
// 00852c54  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00852c58  8b5500               mov edx, dword ptr [ebp]
// 00852c5b  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00852c61  50                   push eax
// 00852c62  83ec10               sub esp, 0x10
// 00852c65  8bc4                 mov eax, esp
// 00852c67  8908                 mov dword ptr [eax], ecx
// 00852c69  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00852c6d  894804               mov dword ptr [eax + 4], ecx
// 00852c70  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00852c74  894808               mov dword ptr [eax + 8], ecx
// 00852c77  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00852c7b  89480c               mov dword ptr [eax + 0xc], ecx
// 00852c7e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00852c82  8d842484000000       lea eax, [esp + 0x84]
// 00852c89  50                   push eax
// 00852c8a  51                   push ecx
// 00852c8b  8d442430             lea eax, [esp + 0x30]
// 00852c8f  50                   push eax
// 00852c90  8bcd                 mov ecx, ebp
// 00852c92  ffd2                 call edx
// 00852c94  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00852c98  8bf0                 mov esi, eax
// 00852c9a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852c9e  3bc1                 cmp eax, ecx
// 00852ca0  894c2430             mov dword ptr [esp + 0x30], ecx
// 00852ca4  7f04                 jg 0x852caa
// 00852ca6  89442430             mov dword ptr [esp + 0x30], eax
// 00852caa  8d4c2470             lea ecx, [esp + 0x70]
// 00852cae  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852cb4  3bf0                 cmp esi, eax
// 00852cb6  0f8c24010000         jl 0x852de0
// 00852cbc  8b442468             mov eax, dword ptr [esp + 0x68]
// 00852cc0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00852cc4  8b542434             mov edx, dword ptr [esp + 0x34]
// 00852cc8  50                   push eax
// 00852cc9  83ec10               sub esp, 0x10
// 00852ccc  8bc4                 mov eax, esp
// 00852cce  8908                 mov dword ptr [eax], ecx
// 00852cd0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00852cd4  895004               mov dword ptr [eax + 4], edx
// 00852cd7  8b542450             mov edx, dword ptr [esp + 0x50]
// 00852cdb  894808               mov dword ptr [eax + 8], ecx
// 00852cde  51                   push ecx
// 00852cdf  89500c               mov dword ptr [eax + 0xc], edx
// 00852ce2  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00852ce6  8bcc                 mov ecx, esp
// 00852ce8  89642444             mov dword ptr [esp + 0x44], esp
// 00852cec  50                   push eax
// 00852ced  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00852cf3  8b442468             mov eax, dword ptr [esp + 0x68]
// 00852cf7  8b5500               mov edx, dword ptr [ebp]
// 00852cfa  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 00852d00  53                   push ebx
// 00852d01  50                   push eax
// 00852d02  8d4c2434             lea ecx, [esp + 0x34]
// 00852d06  51                   push ecx
// 00852d07  8bcd                 mov ecx, ebp
// 00852d09  ffd2                 call edx
// 00852d0b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00852d0f  8bf0                 mov esi, eax
// 00852d11  8b442414             mov eax, dword ptr [esp + 0x14]
// 00852d15  3bc1                 cmp eax, ecx
// 00852d17  894c2430             mov dword ptr [esp + 0x30], ecx
// 00852d1b  7f04                 jg 0x852d21
// 00852d1d  89442430             mov dword ptr [esp + 0x30], eax
// 00852d21  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00852d24  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 00852d27  ff44241c             inc dword ptr [esp + 0x1c]
// 00852d2b  03f8                 add edi, eax
// 00852d2d  3bf0                 cmp esi, eax
// 00852d2f  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00852d37  8d4c2470             lea ecx, [esp + 0x70]
// 00852d3b  0f8cab000000         jl 0x852dec
// 00852d41  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00852d47  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00852d4b  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852d51  3bc7                 cmp eax, edi
// 00852d53  0f8f57feffff         jg 0x852bb0
// 00852d59  e996000000           jmp 0x852df4
// 00852d5e  8b742454             mov esi, dword ptr [esp + 0x54]
// 00852d62  8bce                 mov ecx, esi
// 00852d64  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00852d6a  2bc7                 sub eax, edi
// 00852d6c  50                   push eax
// 00852d6d  57                   push edi
// 00852d6e  8d44245c             lea eax, [esp + 0x5c]
// 00852d72  50                   push eax
// 00852d73  8bce                 mov ecx, esi
// 00852d75  ff153cc89e00         call dword ptr [0x9ec83c]
// 00852d7b  50                   push eax
// 00852d7c  8d4c2474             lea ecx, [esp + 0x74]
// 00852d80  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00852d85  ff1580c59e00         call dword ptr [0x9ec580]
// 00852d8b  8d4c2454             lea ecx, [esp + 0x54]
// 00852d8f  c644244800           mov byte ptr [esp + 0x48], 0
// 00852d94  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00852d9a  8b442468             mov eax, dword ptr [esp + 0x68]
// 00852d9e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00852da2  8b5500               mov edx, dword ptr [ebp]
// 00852da5  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00852dab  50                   push eax
// 00852dac  83ec10               sub esp, 0x10
// 00852daf  8bc4                 mov eax, esp
// 00852db1  8908                 mov dword ptr [eax], ecx
// 00852db3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00852db7  894804               mov dword ptr [eax + 4], ecx
// 00852dba  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00852dbe  894808               mov dword ptr [eax + 8], ecx
// 00852dc1  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00852dc5  89480c               mov dword ptr [eax + 0xc], ecx
// 00852dc8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00852dcc  8d842484000000       lea eax, [esp + 0x84]
// 00852dd3  50                   push eax
// 00852dd4  51                   push ecx
// 00852dd5  8d442430             lea eax, [esp + 0x30]
// 00852dd9  50                   push eax
// 00852dda  8bcd                 mov ecx, ebp
// 00852ddc  ffd2                 call edx
// 00852dde  8bf0                 mov esi, eax
// 00852de0  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00852de8  8d4c2470             lea ecx, [esp + 0x70]
// 00852dec  03f7                 add esi, edi
// 00852dee  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00852df4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00852df8  6a00                 push 0
// 00852dfa  e8835af5ff           call 0x7a8882
// 00852dff  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00852e03  8930                 mov dword ptr [eax], esi
// 00852e05  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00852e09  64890d00000000       mov dword ptr fs:[0], ecx
// 00852e10  59                   pop ecx
// 00852e11  5f                   pop edi
// 00852e12  5e                   pop esi
// 00852e13  5d                   pop ebp
// 00852e14  5b                   pop ebx
// 00852e15  83c438               add esp, 0x38
// 00852e18  c22400               ret 0x24
// copied from an identical function in another client (function ?DrawTextLine@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HAAH3@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp