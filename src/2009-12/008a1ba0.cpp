// roc 2009-12 008a1ba0  unit: CXTPReportInplaceEdit  size: 599 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a1ba0
//
// 008a1ba0  6aff                 push -1
// 008a1ba2  6862229600           push 0x962262
// 008a1ba7  64a100000000         mov eax, dword ptr fs:[0]
// 008a1bad  50                   push eax
// 008a1bae  83ec0c               sub esp, 0xc
// 008a1bb1  53                   push ebx
// 008a1bb2  55                   push ebp
// 008a1bb3  56                   push esi
// 008a1bb4  57                   push edi
// 008a1bb5  a10052b600           mov eax, dword ptr [0xb65200]
// 008a1bba  33c4                 xor eax, esp
// 008a1bbc  50                   push eax
// 008a1bbd  8d442420             lea eax, [esp + 0x20]
// 008a1bc1  64a300000000         mov dword ptr fs:[0], eax
// 008a1bc7  8bf1                 mov esi, ecx
// 008a1bc9  8b5e58               mov ebx, dword ptr [esi + 0x58]
// 008a1bcc  33ed                 xor ebp, ebp
// 008a1bce  3bdd                 cmp ebx, ebp
// 008a1bd0  0f840b020000         je 0x8a1de1
// 008a1bd6  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008a1bda  83ff09               cmp edi, 9
// 008a1bdd  751d                 jne 0x8a1bfc
// 008a1bdf  8bcb                 mov ecx, ebx
// 008a1be1  e81c20f5ff           call 0x7f3c02
// 008a1be6  8b4320               mov eax, dword ptr [ebx + 0x20]
// 008a1be9  55                   push ebp
// 008a1bea  57                   push edi
// 008a1beb  6802010000           push 0x102
// 008a1bf0  50                   push eax
// 008a1bf1  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008a1bf7  e9e5010000           jmp 0x8a1de1
// 008a1bfc  83ff1b               cmp edi, 0x1b
// 008a1bff  7516                 jne 0x8a1c17
// 008a1c01  8d4e78               lea ecx, [esi + 0x78]
// 008a1c04  ff1580de9800         call dword ptr [0x98de80]
// 008a1c0a  50                   push eax
// 008a1c0b  8bce                 mov ecx, esi
// 008a1c0d  e84ef7ffff           call 0x8a1360
// 008a1c12  e9ca010000           jmp 0x8a1de1
// 008a1c17  83ff0d               cmp edi, 0xd
// 008a1c1a  0f84c1010000         je 0x8a1de1
// 008a1c20  83ff26               cmp edi, 0x26
// 008a1c23  7413                 je 0x8a1c38
// 008a1c25  83ff28               cmp edi, 0x28
// 008a1c28  740e                 je 0x8a1c38
// 008a1c2a  83ff21               cmp edi, 0x21
// 008a1c2d  7409                 je 0x8a1c38
// 008a1c2f  83ff22               cmp edi, 0x22
// 008a1c32  0f85a2010000         jne 0x8a1dda
// 008a1c38  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a1c3b  3bcd                 cmp ecx, ebp
// 008a1c3d  0f8497010000         je 0x8a1dda
// 008a1c43  8b4660               mov eax, dword ptr [esi + 0x60]
// 008a1c46  3bc5                 cmp eax, ebp
// 008a1c48  0f848c010000         je 0x8a1dda
// 008a1c4e  50                   push eax
// 008a1c4f  e85c98f7ff           call 0x81b4b0
// 008a1c54  396824               cmp dword ptr [eax + 0x24], ebp
// 008a1c57  0f847d010000         je 0x8a1dda
// 008a1c5d  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 008a1c60  51                   push ecx
// 008a1c61  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 008a1c64  e84798f7ff           call 0x81b4b0
// 008a1c69  8b4028               mov eax, dword ptr [eax + 0x28]
// 008a1c6c  8bc8                 mov ecx, eax
// 008a1c6e  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a1c72  e809c0faff           call 0x84dc80
// 008a1c77  8bd8                 mov ebx, eax
// 008a1c79  83fb01               cmp ebx, 1
// 008a1c7c  0f8e58010000         jle 0x8a1dda
// 008a1c82  8d4c2418             lea ecx, [esp + 0x18]
// 008a1c86  ff1574de9800         call dword ptr [0x98de74]
// 008a1c8c  8d4c2414             lea ecx, [esp + 0x14]
// 008a1c90  896c2428             mov dword ptr [esp + 0x28], ebp
// 008a1c94  ff1574de9800         call dword ptr [0x98de74]
// 008a1c9a  8d542418             lea edx, [esp + 0x18]
// 008a1c9e  52                   push edx
// 008a1c9f  8bce                 mov ecx, esi
// 008a1ca1  c644242c01           mov byte ptr [esp + 0x2c], 1
// 008a1ca6  e89d21f5ff           call 0x7f3e48
// 008a1cab  83ff22               cmp edi, 0x22
// 008a1cae  7505                 jne 0x8a1cb5
// 008a1cb0  8d6bff               lea ebp, [ebx - 1]
// 008a1cb3  eb5b                 jmp 0x8a1d10
// 008a1cb5  83ff21               cmp edi, 0x21
// 008a1cb8  7456                 je 0x8a1d10
// 008a1cba  33ff                 xor edi, edi
// 008a1cbc  85db                 test ebx, ebx
// 008a1cbe  7e50                 jle 0x8a1d10
// 008a1cc0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a1cc4  57                   push edi
// 008a1cc5  e866120000           call 0x8a2f30
// 008a1cca  8d4820               lea ecx, [eax + 0x20]
// 008a1ccd  ff1580de9800         call dword ptr [0x98de80]
// 008a1cd3  50                   push eax
// 008a1cd4  8d4c241c             lea ecx, [esp + 0x1c]
// 008a1cd8  ff15d4cf9800         call dword ptr [0x98cfd4]
// 008a1cde  85c0                 test eax, eax
// 008a1ce0  7407                 je 0x8a1ce9
// 008a1ce2  47                   inc edi
// 008a1ce3  3bfb                 cmp edi, ebx
// 008a1ce5  7cd9                 jl 0x8a1cc0
// 008a1ce7  eb27                 jmp 0x8a1d10
// 008a1ce9  8b442430             mov eax, dword ptr [esp + 0x30]
// 008a1ced  83f826               cmp eax, 0x26
// 008a1cf0  750d                 jne 0x8a1cff
// 008a1cf2  4f                   dec edi
// 008a1cf3  33c0                 xor eax, eax
// 008a1cf5  85ff                 test edi, edi
// 008a1cf7  0f9cc0               setl al
// 008a1cfa  48                   dec eax
// 008a1cfb  23c7                 and eax, edi
// 008a1cfd  eb0f                 jmp 0x8a1d0e
// 008a1cff  83f828               cmp eax, 0x28
// 008a1d02  750c                 jne 0x8a1d10
// 008a1d04  8d4701               lea eax, [edi + 1]
// 008a1d07  8d6bff               lea ebp, [ebx - 1]
// 008a1d0a  3be8                 cmp ebp, eax
// 008a1d0c  7c02                 jl 0x8a1d10
// 008a1d0e  8be8                 mov ebp, eax
// 008a1d10  4b                   dec ebx
// 008a1d11  3beb                 cmp ebp, ebx
// 008a1d13  8bc5                 mov eax, ebp
// 008a1d15  7c02                 jl 0x8a1d19
// 008a1d17  8bc3                 mov eax, ebx
// 008a1d19  85c0                 test eax, eax
// 008a1d1b  7d04                 jge 0x8a1d21
// 008a1d1d  33ed                 xor ebp, ebp
// 008a1d1f  eb06                 jmp 0x8a1d27
// 008a1d21  3beb                 cmp ebp, ebx
// 008a1d23  7c02                 jl 0x8a1d27
// 008a1d25  8beb                 mov ebp, ebx
// 008a1d27  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a1d2b  55                   push ebp
// 008a1d2c  e8ff110000           call 0x8a2f30
// 008a1d31  8bf8                 mov edi, eax
// 008a1d33  8d4f20               lea ecx, [edi + 0x20]
// 008a1d36  51                   push ecx
// 008a1d37  8d4c2418             lea ecx, [esp + 0x18]
// 008a1d3b  ff1538d59800         call dword ptr [0x98d538]
// 008a1d41  8b5658               mov edx, dword ptr [esi + 0x58]
// 008a1d44  89be88000000         mov dword ptr [esi + 0x88], edi
// 008a1d4a  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 008a1d50  83c020               add eax, 0x20
// 008a1d53  50                   push eax
// 008a1d54  8bce                 mov ecx, esi
// 008a1d56  e815faffff           call 0x8a1770
// 008a1d5b  8d4c2414             lea ecx, [esp + 0x14]
// 008a1d5f  ff1580de9800         call dword ptr [0x98de80]
// 008a1d65  50                   push eax
// 008a1d66  8bce                 mov ecx, esi
// 008a1d68  e8f3f5ffff           call 0x8a1360
// 008a1d6d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a1d70  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 008a1d76  6aff                 push -1
// 008a1d78  6a00                 push 0
// 008a1d7a  68b1000000           push 0xb1
// 008a1d7f  51                   push ecx
// 008a1d80  ffd3                 call ebx
// 008a1d82  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a1d85  6a00                 push 0
// 008a1d87  6a00                 push 0
// 008a1d89  68b7000000           push 0xb7
// 008a1d8e  52                   push edx
// 008a1d8f  ffd3                 call ebx
// 008a1d91  8d4c2414             lea ecx, [esp + 0x14]
// 008a1d95  ff1580de9800         call dword ptr [0x98de80]
// 008a1d9b  50                   push eax
// 008a1d9c  8d4c241c             lea ecx, [esp + 0x1c]
// 008a1da0  ff15d4cf9800         call dword ptr [0x98cfd4]
// 008a1da6  85c0                 test eax, eax
// 008a1da8  741a                 je 0x8a1dc4
// 008a1daa  8b5660               mov edx, dword ptr [esi + 0x60]
// 008a1dad  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008a1db0  8b01                 mov eax, dword ptr [ecx]
// 008a1db2  8b8034020000         mov eax, dword ptr [eax + 0x234]
// 008a1db8  57                   push edi
// 008a1db9  52                   push edx
// 008a1dba  8b5664               mov edx, dword ptr [esi + 0x64]
// 008a1dbd  52                   push edx
// 008a1dbe  8b565c               mov edx, dword ptr [esi + 0x5c]
// 008a1dc1  52                   push edx
// 008a1dc2  ffd0                 call eax
// 008a1dc4  8d4c2414             lea ecx, [esp + 0x14]
// 008a1dc8  ff15c0de9800         call dword ptr [0x98dec0]
// 008a1dce  8d4c2418             lea ecx, [esp + 0x18]
// 008a1dd2  ff15c0de9800         call dword ptr [0x98dec0]
// 008a1dd8  eb07                 jmp 0x8a1de1
// 008a1dda  8bce                 mov ecx, esi
// 008a1ddc  e84f20f5ff           call 0x7f3e30
// 008a1de1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008a1de5  64890d00000000       mov dword ptr fs:[0], ecx
// 008a1dec  59                   pop ecx
// 008a1ded  5f                   pop edi
// 008a1dee  5e                   pop esi
// 008a1def  5d                   pop ebp
// 008a1df0  5b                   pop ebx
// 008a1df1  83c418               add esp, 0x18
// 008a1df4  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnKeyDown@CXTPReportInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportInplaceControls.cpp