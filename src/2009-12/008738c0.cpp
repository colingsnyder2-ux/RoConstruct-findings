// roc 2009-12 008738c0  unit: CXTPRibbonTheme  size: 776 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008738c0
//
// 008738c0  83ec20               sub esp, 0x20
// 008738c3  53                   push ebx
// 008738c4  55                   push ebp
// 008738c5  56                   push esi
// 008738c6  57                   push edi
// 008738c7  8bf1                 mov esi, ecx
// 008738c9  e8a2a0fcff           call 0x83d970
// 008738ce  85c0                 test eax, eax
// 008738d0  7528                 jne 0x8738fa
// 008738d2  8b442460             mov eax, dword ptr [esp + 0x60]
// 008738d6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008738da  8b542458             mov edx, dword ptr [esp + 0x58]
// 008738de  50                   push eax
// 008738df  8b442458             mov eax, dword ptr [esp + 0x58]
// 008738e3  51                   push ecx
// 008738e4  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008738e8  52                   push edx
// 008738e9  8b542458             mov edx, dword ptr [esp + 0x58]
// 008738ed  50                   push eax
// 008738ee  8b442458             mov eax, dword ptr [esp + 0x58]
// 008738f2  51                   push ecx
// 008738f3  52                   push edx
// 008738f4  50                   push eax
// 008738f5  e998020000           jmp 0x873b92
// 008738fa  837c245c02           cmp dword ptr [esp + 0x5c], 2
// 008738ff  0f84fc000000         je 0x873a01
// 00873905  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00873909  2b4c243c             sub ecx, dword ptr [esp + 0x3c]
// 0087390d  b88414a000           mov eax, 0xa01484
// 00873912  83f921               cmp ecx, 0x21
// 00873915  7c05                 jl 0x87391c
// 00873917  b87014a000           mov eax, 0xa01470
// 0087391c  50                   push eax
// 0087391d  8bce                 mov ecx, esi
// 0087391f  e8dcb30000           call 0x87ed00
// 00873924  8bf8                 mov edi, eax
// 00873926  33ed                 xor ebp, ebp
// 00873928  3bfd                 cmp edi, ebp
// 0087392a  0f848e020000         je 0x873bbe
// 00873930  396c2450             cmp dword ptr [esp + 0x50], ebp
// 00873934  7516                 jne 0x87394c
// 00873936  8b442448             mov eax, dword ptr [esp + 0x48]
// 0087393a  83f802               cmp eax, 2
// 0087393d  7409                 je 0x873948
// 0087393f  83f803               cmp eax, 3
// 00873942  0f8576020000         jne 0x873bbe
// 00873948  33c0                 xor eax, eax
// 0087394a  eb48                 jmp 0x873994
// 0087394c  396c2458             cmp dword ptr [esp + 0x58], ebp
// 00873950  7516                 jne 0x873968
// 00873952  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00873956  8b5c2448             mov ebx, dword ptr [esp + 0x48]
// 0087395a  396c2454             cmp dword ptr [esp + 0x54], ebp
// 0087395e  741a                 je 0x87397a
// 00873960  3bdd                 cmp ebx, ebp
// 00873962  750b                 jne 0x87396f
// 00873964  3bf5                 cmp esi, ebp
// 00873966  7512                 jne 0x87397a
// 00873968  b802000000           mov eax, 2
// 0087396d  eb25                 jmp 0x873994
// 0087396f  3bf5                 cmp esi, ebp
// 00873971  7507                 jne 0x87397a
// 00873973  b803000000           mov eax, 3
// 00873978  eb1a                 jmp 0x873994
// 0087397a  56                   push esi
// 0087397b  e8b020f8ff           call 0x7f5a30
// 00873980  83c404               add esp, 4
// 00873983  85c0                 test eax, eax
// 00873985  7508                 jne 0x87398f
// 00873987  3bdd                 cmp ebx, ebp
// 00873989  746a                 je 0x8739f5
// 0087398b  3bf5                 cmp esi, ebp
// 0087398d  746e                 je 0x8739fd
// 0087398f  b801000000           mov eax, 1
// 00873994  b908000000           mov ecx, 8
// 00873999  6a04                 push 4
// 0087399b  50                   push eax
// 0087399c  8d542428             lea edx, [esp + 0x28]
// 008739a0  894c2418             mov dword ptr [esp + 0x18], ecx
// 008739a4  894c241c             mov dword ptr [esp + 0x1c], ecx
// 008739a8  894c2420             mov dword ptr [esp + 0x20], ecx
// 008739ac  894c2424             mov dword ptr [esp + 0x24], ecx
// 008739b0  52                   push edx
// 008739b1  8bcf                 mov ecx, edi
// 008739b3  e808cf0600           call 0x8e08c0
// 008739b8  8b10                 mov edx, dword ptr [eax]
// 008739ba  6aff                 push -1
// 008739bc  8d4c2414             lea ecx, [esp + 0x14]
// 008739c0  51                   push ecx
// 008739c1  83ec10               sub esp, 0x10
// 008739c4  8bcc                 mov ecx, esp
// 008739c6  8911                 mov dword ptr [ecx], edx
// 008739c8  8b5004               mov edx, dword ptr [eax + 4]
// 008739cb  895104               mov dword ptr [ecx + 4], edx
// 008739ce  8b5008               mov edx, dword ptr [eax + 8]
// 008739d1  8b400c               mov eax, dword ptr [eax + 0xc]
// 008739d4  895108               mov dword ptr [ecx + 8], edx
// 008739d7  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008739db  89410c               mov dword ptr [ecx + 0xc], eax
// 008739de  8d4c2450             lea ecx, [esp + 0x50]
// 008739e2  51                   push ecx
// 008739e3  52                   push edx
// 008739e4  8bcf                 mov ecx, edi
// 008739e6  e815d40600           call 0x8e0e00
// 008739eb  5f                   pop edi
// 008739ec  5e                   pop esi
// 008739ed  5d                   pop ebp
// 008739ee  5b                   pop ebx
// 008739ef  83c420               add esp, 0x20
// 008739f2  c23000               ret 0x30
// 008739f5  3bf5                 cmp esi, ebp
// 008739f7  0f84c1010000         je 0x873bbe
// 008739fd  33c0                 xor eax, eax
// 008739ff  eb93                 jmp 0x873994
// 00873a01  8b442460             mov eax, dword ptr [esp + 0x60]
// 00873a05  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00873a09  8b542448             mov edx, dword ptr [esp + 0x48]
// 00873a0d  83f805               cmp eax, 5
// 00873a10  0f8568010000         jne 0x873b7e
// 00873a16  33ed                 xor ebp, ebp
// 00873a18  3bcd                 cmp ecx, ebp
// 00873a1a  0f84a1000000         je 0x873ac1
// 00873a20  686014a000           push 0xa01460
// 00873a25  8bce                 mov ecx, esi
// 00873a27  e8d4b20000           call 0x87ed00
// 00873a2c  8bf8                 mov edi, eax
// 00873a2e  3bfd                 cmp edi, ebp
// 00873a30  0f8488010000         je 0x873bbe
// 00873a36  8bcf                 mov ecx, edi
// 00873a38  e803cf0600           call 0x8e0940
// 00873a3d  8bf0                 mov esi, eax
// 00873a3f  8bcf                 mov ecx, edi
// 00873a41  d1ee                 shr esi, 1
// 00873a43  e818cf0600           call 0x8e0960
// 00873a48  896c2410             mov dword ptr [esp + 0x10], ebp
// 00873a4c  896c2414             mov dword ptr [esp + 0x14], ebp
// 00873a50  89442418             mov dword ptr [esp + 0x18], eax
// 00873a54  8974241c             mov dword ptr [esp + 0x1c], esi
// 00873a58  396c2450             cmp dword ptr [esp + 0x50], ebp
// 00873a5c  750d                 jne 0x873a6b
// 00873a5e  56                   push esi
// 00873a5f  55                   push ebp
// 00873a60  8d442418             lea eax, [esp + 0x18]
// 00873a64  50                   push eax
// 00873a65  ff156ccc9800         call dword ptr [0x98cc6c]
// 00873a6b  83ec10               sub esp, 0x10
// 00873a6e  8bc4                 mov eax, esp
// 00873a70  b904000000           mov ecx, 4
// 00873a75  8908                 mov dword ptr [eax], ecx
// 00873a77  8bd1                 mov edx, ecx
// 00873a79  895004               mov dword ptr [eax + 4], edx
// 00873a7c  8b542424             mov edx, dword ptr [esp + 0x24]
// 00873a80  8bf1                 mov esi, ecx
// 00873a82  897008               mov dword ptr [eax + 8], esi
// 00873a85  8bd9                 mov ebx, ecx
// 00873a87  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00873a8b  89580c               mov dword ptr [eax + 0xc], ebx
// 00873a8e  83ec10               sub esp, 0x10
// 00873a91  8bc4                 mov eax, esp
// 00873a93  8908                 mov dword ptr [eax], ecx
// 00873a95  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00873a99  895004               mov dword ptr [eax + 4], edx
// 00873a9c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00873aa0  894808               mov dword ptr [eax + 8], ecx
// 00873aa3  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00873aa7  89500c               mov dword ptr [eax + 0xc], edx
// 00873aaa  8d442458             lea eax, [esp + 0x58]
// 00873aae  50                   push eax
// 00873aaf  51                   push ecx
// 00873ab0  8bcf                 mov ecx, edi
// 00873ab2  e8d9c60600           call 0x8e0190
// 00873ab7  5f                   pop edi
// 00873ab8  5e                   pop esi
// 00873ab9  5d                   pop ebp
// 00873aba  5b                   pop ebx
// 00873abb  83c420               add esp, 0x20
// 00873abe  c23000               ret 0x30
// 00873ac1  3bd5                 cmp edx, ebp
// 00873ac3  0f84b5000000         je 0x873b7e
// 00873ac9  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00873acd  3bfd                 cmp edi, ebp
// 00873acf  7511                 jne 0x873ae2
// 00873ad1  52                   push edx
// 00873ad2  e8591ff8ff           call 0x7f5a30
// 00873ad7  83c404               add esp, 4
// 00873ada  85c0                 test eax, eax
// 00873adc  0f84dc000000         je 0x873bbe
// 00873ae2  8b542444             mov edx, dword ptr [esp + 0x44]
// 00873ae6  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 00873aea  33c0                 xor eax, eax
// 00873aec  83fa21               cmp edx, 0x21
// 00873aef  0f9cc0               setl al
// 00873af2  3bfd                 cmp edi, ebp
// 00873af4  7512                 jne 0x873b08
// 00873af6  3bc5                 cmp eax, ebp
// 00873af8  7407                 je 0x873b01
// 00873afa  b84414a000           mov eax, 0xa01444
// 00873aff  eb15                 jmp 0x873b16
// 00873b01  b82814a000           mov eax, 0xa01428
// 00873b06  eb0e                 jmp 0x873b16
// 00873b08  3bc5                 cmp eax, ebp
// 00873b0a  b81414a000           mov eax, 0xa01414
// 00873b0f  7505                 jne 0x873b16
// 00873b11  b80014a000           mov eax, 0xa01400
// 00873b16  50                   push eax
// 00873b17  8bce                 mov ecx, esi
// 00873b19  e8e2b10000           call 0x87ed00
// 00873b1e  8bf0                 mov esi, eax
// 00873b20  3bf5                 cmp esi, ebp
// 00873b22  0f8496000000         je 0x873bbe
// 00873b28  8bce                 mov ecx, esi
// 00873b2a  e811ce0600           call 0x8e0940
// 00873b2f  8bce                 mov ecx, esi
// 00873b31  8bf8                 mov edi, eax
// 00873b33  33db                 xor ebx, ebx
// 00873b35  e826ce0600           call 0x8e0960
// 00873b3a  83ec10               sub esp, 0x10
// 00873b3d  8bcc                 mov ecx, esp
// 00873b3f  ba04000000           mov edx, 4
// 00873b44  8911                 mov dword ptr [ecx], edx
// 00873b46  895104               mov dword ptr [ecx + 4], edx
// 00873b49  895108               mov dword ptr [ecx + 8], edx
// 00873b4c  89510c               mov dword ptr [ecx + 0xc], edx
// 00873b4f  83ec10               sub esp, 0x10
// 00873b52  8bcc                 mov ecx, esp
// 00873b54  8919                 mov dword ptr [ecx], ebx
// 00873b56  896904               mov dword ptr [ecx + 4], ebp
// 00873b59  894108               mov dword ptr [ecx + 8], eax
// 00873b5c  89790c               mov dword ptr [ecx + 0xc], edi
// 00873b5f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00873b63  8d442458             lea eax, [esp + 0x58]
// 00873b67  50                   push eax
// 00873b68  51                   push ecx
// 00873b69  8bce                 mov ecx, esi
// 00873b6b  89542444             mov dword ptr [esp + 0x44], edx
// 00873b6f  e81cc60600           call 0x8e0190
// 00873b74  5f                   pop edi
// 00873b75  5e                   pop esi
// 00873b76  5d                   pop ebp
// 00873b77  5b                   pop ebx
// 00873b78  83c420               add esp, 0x20
// 00873b7b  c23000               ret 0x30
// 00873b7e  50                   push eax
// 00873b7f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00873b83  6a02                 push 2
// 00873b85  50                   push eax
// 00873b86  8b442458             mov eax, dword ptr [esp + 0x58]
// 00873b8a  51                   push ecx
// 00873b8b  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00873b8f  51                   push ecx
// 00873b90  50                   push eax
// 00873b91  52                   push edx
// 00873b92  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00873b96  8b542458             mov edx, dword ptr [esp + 0x58]
// 00873b9a  83ec10               sub esp, 0x10
// 00873b9d  8bc4                 mov eax, esp
// 00873b9f  8908                 mov dword ptr [eax], ecx
// 00873ba1  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00873ba5  895004               mov dword ptr [eax + 4], edx
// 00873ba8  8b542470             mov edx, dword ptr [esp + 0x70]
// 00873bac  894808               mov dword ptr [eax + 8], ecx
// 00873baf  89500c               mov dword ptr [eax + 0xc], edx
// 00873bb2  8b442460             mov eax, dword ptr [esp + 0x60]
// 00873bb6  50                   push eax
// 00873bb7  8bce                 mov ecx, esi
// 00873bb9  e8420a0100           call 0x884600
// 00873bbe  5f                   pop edi
// 00873bbf  5e                   pop esi
// 00873bc0  5d                   pop ebp
// 00873bc1  5b                   pop ebx
// 00873bc2  83c420               add esp, 0x20
// 00873bc5  c23000               ret 0x30
// copied from an identical function in another client (function ?DrawRectangle@CXTPRibbonTheme@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp