// roc 2009-06 00742e00  unit: CXTPReportControl  size: 860 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00742e00
//
// 00742e00  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00742e04  83ec78               sub esp, 0x78
// 00742e07  57                   push edi
// 00742e08  8bf9                 mov edi, ecx
// 00742e0a  33c9                 xor ecx, ecx
// 00742e0c  3bc1                 cmp eax, ecx
// 00742e0e  741f                 je 0x742e2f
// 00742e10  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00742e17  50                   push eax
// 00742e18  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00742e1f  50                   push eax
// 00742e20  51                   push ecx
// 00742e21  8bcf                 mov ecx, edi
// 00742e23  e8fa921000           call 0x84c122
// 00742e28  5f                   pop edi
// 00742e29  83c478               add esp, 0x78
// 00742e2c  c20c00               ret 0xc
// 00742e2f  53                   push ebx
// 00742e30  55                   push ebp
// 00742e31  8baf0c010000         mov ebp, dword ptr [edi + 0x10c]
// 00742e37  33db                 xor ebx, ebx
// 00742e39  56                   push esi
// 00742e3a  896c2414             mov dword ptr [esp + 0x14], ebp
// 00742e3e  8bf5                 mov esi, ebp
// 00742e40  894c2420             mov dword ptr [esp + 0x20], ecx
// 00742e44  894c2424             mov dword ptr [esp + 0x24], ecx
// 00742e48  894c2418             mov dword ptr [esp + 0x18], ecx
// 00742e4c  894c2410             mov dword ptr [esp + 0x10], ecx
// 00742e50  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00742e54  398f18010000         cmp dword ptr [edi + 0x118], ecx
// 00742e5a  742a                 je 0x742e86
// 00742e5c  8b8f88020000         mov ecx, dword ptr [edi + 0x288]
// 00742e62  8d54241c             lea edx, [esp + 0x1c]
// 00742e66  52                   push edx
// 00742e67  8d442414             lea eax, [esp + 0x14]
// 00742e6b  50                   push eax
// 00742e6c  8d542420             lea edx, [esp + 0x20]
// 00742e70  52                   push edx
// 00742e71  8d442430             lea eax, [esp + 0x30]
// 00742e75  50                   push eax
// 00742e76  8d542430             lea edx, [esp + 0x30]
// 00742e7a  52                   push edx
// 00742e7b  e8c0b00000           call 0x74df40
// 00742e80  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00742e84  8bd8                 mov ebx, eax
// 00742e86  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00742e8d  83f807               cmp eax, 7
// 00742e90  0f8762020000         ja 0x7430f8
// 00742e96  ff24853c317400       jmp dword ptr [eax*4 + 0x74313c]
// 00742e9d  33f6                 xor esi, esi
// 00742e9f  89742414             mov dword ptr [esp + 0x14], esi
// 00742ea3  89742410             mov dword ptr [esp + 0x10], esi
// 00742ea7  e94c020000           jmp 0x7430f8
// 00742eac  6a00                 push 0
// 00742eae  8bcf                 mov ecx, edi
// 00742eb0  e867921000           call 0x84c11c
// 00742eb5  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 00742ebc  89442414             mov dword ptr [esp + 0x14], eax
// 00742ec0  0f845d020000         je 0x743123
// 00742ec6  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 00742ecc  e80ff50400           call 0x7923e0
// 00742ed1  48                   dec eax
// 00742ed2  33c9                 xor ecx, ecx
// 00742ed4  85c0                 test eax, eax
// 00742ed6  0f9ec1               setle cl
// 00742ed9  49                   dec ecx
// 00742eda  23c1                 and eax, ecx
// 00742edc  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 00742ee2  50                   push eax
// 00742ee3  e8f8f50400           call 0x7924e0
// 00742ee8  85c0                 test eax, eax
// 00742eea  0f843f020000         je 0x74312f
// 00742ef0  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 00742ef6  8d542428             lea edx, [esp + 0x28]
// 00742efa  52                   push edx
// 00742efb  8bc8                 mov ecx, eax
// 00742efd  e8de9d0000           call 0x74cce0
// 00742f02  8bc8                 mov ecx, eax
// 00742f04  8b4660               mov eax, dword ptr [esi + 0x60]
// 00742f07  2b01                 sub eax, dword ptr [ecx]
// 00742f09  33c9                 xor ecx, ecx
// 00742f0b  99                   cdq 
// 00742f0c  8bf0                 mov esi, eax
// 00742f0e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00742f12  33f2                 xor esi, edx
// 00742f14  2bf2                 sub esi, edx
// 00742f16  48                   dec eax
// 00742f17  2bf3                 sub esi, ebx
// 00742f19  85c0                 test eax, eax
// 00742f1b  0f9ec1               setle cl
// 00742f1e  49                   dec ecx
// 00742f1f  23c8                 and ecx, eax
// 00742f21  894c2410             mov dword ptr [esp + 0x10], ecx
// 00742f25  e9ce010000           jmp 0x7430f8
// 00742f2a  2baf14010000         sub ebp, dword ptr [edi + 0x114]
// 00742f30  33d2                 xor edx, edx
// 00742f32  85ed                 test ebp, ebp
// 00742f34  0f9ec2               setle dl
// 00742f37  4a                   dec edx
// 00742f38  23d5                 and edx, ebp
// 00742f3a  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 00742f41  89542414             mov dword ptr [esp + 0x14], edx
// 00742f45  0f84d8010000         je 0x743123
// 00742f4b  85c9                 test ecx, ecx
// 00742f4d  0f84a5010000         je 0x7430f8
// 00742f53  8d442438             lea eax, [esp + 0x38]
// 00742f57  50                   push eax
// 00742f58  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 00742f5e  e87d9d0000           call 0x74cce0
// 00742f63  8bc8                 mov ecx, eax
// 00742f65  8b4660               mov eax, dword ptr [esi + 0x60]
// 00742f68  2b01                 sub eax, dword ptr [ecx]
// 00742f6a  33c9                 xor ecx, ecx
// 00742f6c  99                   cdq 
// 00742f6d  8bf0                 mov esi, eax
// 00742f6f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00742f73  33f2                 xor esi, edx
// 00742f75  2bf2                 sub esi, edx
// 00742f77  48                   dec eax
// 00742f78  2bf3                 sub esi, ebx
// 00742f7a  85c0                 test eax, eax
// 00742f7c  0f9ec1               setle cl
// 00742f7f  49                   dec ecx
// 00742f80  23c8                 and ecx, eax
// 00742f82  894c2410             mov dword ptr [esp + 0x10], ecx
// 00742f86  e96d010000           jmp 0x7430f8
// 00742f8b  8b9714010000         mov edx, dword ptr [edi + 0x114]
// 00742f91  6a00                 push 0
// 00742f93  8bcf                 mov ecx, edi
// 00742f95  03ea                 add ebp, edx
// 00742f97  e880911000           call 0x84c11c
// 00742f9c  3be8                 cmp ebp, eax
// 00742f9e  7d06                 jge 0x742fa6
// 00742fa0  896c2414             mov dword ptr [esp + 0x14], ebp
// 00742fa4  eb0d                 jmp 0x742fb3
// 00742fa6  6a00                 push 0
// 00742fa8  8bcf                 mov ecx, edi
// 00742faa  e86d911000           call 0x84c11c
// 00742faf  89442414             mov dword ptr [esp + 0x14], eax
// 00742fb3  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 00742fba  0f8463010000         je 0x743123
// 00742fc0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00742fc4  85c9                 test ecx, ecx
// 00742fc6  0f842c010000         je 0x7430f8
// 00742fcc  8d442448             lea eax, [esp + 0x48]
// 00742fd0  50                   push eax
// 00742fd1  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 00742fd7  e8049d0000           call 0x74cce0
// 00742fdc  8bc8                 mov ecx, eax
// 00742fde  8b4660               mov eax, dword ptr [esi + 0x60]
// 00742fe1  2b01                 sub eax, dword ptr [ecx]
// 00742fe3  99                   cdq 
// 00742fe4  8bf0                 mov esi, eax
// 00742fe6  33f2                 xor esi, edx
// 00742fe8  2bf2                 sub esi, edx
// 00742fea  2bf3                 sub esi, ebx
// 00742fec  ff442410             inc dword ptr [esp + 0x10]
// 00742ff0  e903010000           jmp 0x7430f8
// 00742ff5  8b9790000000         mov edx, dword ptr [edi + 0x90]
// 00742ffb  2b9798000000         sub edx, dword ptr [edi + 0x98]
// 00743001  03d5                 add edx, ebp
// 00743003  85d2                 test edx, edx
// 00743005  7e14                 jle 0x74301b
// 00743007  8b8790000000         mov eax, dword ptr [edi + 0x90]
// 0074300d  2b8798000000         sub eax, dword ptr [edi + 0x98]
// 00743013  03e8                 add ebp, eax
// 00743015  896c2414             mov dword ptr [esp + 0x14], ebp
// 00743019  eb08                 jmp 0x743023
// 0074301b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00743023  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 0074302a  0f84f3000000         je 0x743123
// 00743030  85c9                 test ecx, ecx
// 00743032  0f84c0000000         je 0x7430f8
// 00743038  8d542458             lea edx, [esp + 0x58]
// 0074303c  52                   push edx
// 0074303d  e916ffffff           jmp 0x742f58
// 00743042  8baf98000000         mov ebp, dword ptr [edi + 0x98]
// 00743048  2baf90000000         sub ebp, dword ptr [edi + 0x90]
// 0074304e  6a00                 push 0
// 00743050  8bcf                 mov ecx, edi
// 00743052  e8c5901000           call 0x84c11c
// 00743057  8bd6                 mov edx, esi
// 00743059  03ea                 add ebp, edx
// 0074305b  3be8                 cmp ebp, eax
// 0074305d  7d12                 jge 0x743071
// 0074305f  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 00743065  2b8790000000         sub eax, dword ptr [edi + 0x90]
// 0074306b  01442414             add dword ptr [esp + 0x14], eax
// 0074306f  eb0d                 jmp 0x74307e
// 00743071  6a00                 push 0
// 00743073  8bcf                 mov ecx, edi
// 00743075  e8a2901000           call 0x84c11c
// 0074307a  89442414             mov dword ptr [esp + 0x14], eax
// 0074307e  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 00743085  0f8498000000         je 0x743123
// 0074308b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0074308f  85c9                 test ecx, ecx
// 00743091  7465                 je 0x7430f8
// 00743093  8d542468             lea edx, [esp + 0x68]
// 00743097  52                   push edx
// 00743098  e934ffffff           jmp 0x742fd1
// 0074309d  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007430a4  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 007430ab  896c2414             mov dword ptr [esp + 0x14], ebp
// 007430af  7472                 je 0x743123
// 007430b1  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 007430b7  e824f30400           call 0x7923e0
// 007430bc  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 007430c0  8b8fec000000         mov ecx, dword ptr [edi + 0xec]
// 007430c6  03c5                 add eax, ebp
// 007430c8  50                   push eax
// 007430c9  e812f40400           call 0x7924e0
// 007430ce  85c0                 test eax, eax
// 007430d0  745d                 je 0x74312f
// 007430d2  8bb788020000         mov esi, dword ptr [edi + 0x288]
// 007430d8  8d4c2478             lea ecx, [esp + 0x78]
// 007430dc  51                   push ecx
// 007430dd  8bc8                 mov ecx, eax
// 007430df  e8fc9b0000           call 0x74cce0
// 007430e4  8bc8                 mov ecx, eax
// 007430e6  8b4660               mov eax, dword ptr [esi + 0x60]
// 007430e9  2b01                 sub eax, dword ptr [ecx]
// 007430eb  896c2410             mov dword ptr [esp + 0x10], ebp
// 007430ef  99                   cdq 
// 007430f0  8bf0                 mov esi, eax
// 007430f2  33f2                 xor esi, edx
// 007430f4  2bf2                 sub esi, edx
// 007430f6  2bf3                 sub esi, ebx
// 007430f8  83bf1801000000       cmp dword ptr [edi + 0x118], 0
// 007430ff  7422                 je 0x743123
// 00743101  56                   push esi
// 00743102  8bcf                 mov ecx, edi
// 00743104  e8a7f5ffff           call 0x7426b0
// 00743109  8b542410             mov edx, dword ptr [esp + 0x10]
// 0074310d  6a01                 push 1
// 0074310f  52                   push edx
// 00743110  6a00                 push 0
// 00743112  8bcf                 mov ecx, edi
// 00743114  e8eb8f1000           call 0x84c104
// 00743119  5e                   pop esi
// 0074311a  5d                   pop ebp
// 0074311b  5b                   pop ebx
// 0074311c  5f                   pop edi
// 0074311d  83c478               add esp, 0x78
// 00743120  c20c00               ret 0xc
// 00743123  8b442414             mov eax, dword ptr [esp + 0x14]
// 00743127  50                   push eax
// 00743128  8bcf                 mov ecx, edi
// 0074312a  e881f5ffff           call 0x7426b0
// 0074312f  5e                   pop esi
// 00743130  5d                   pop ebp
// 00743131  5b                   pop ebx
// 00743132  5f                   pop edi
// 00743133  83c478               add esp, 0x78
// 00743136  c20c00               ret 0xc
// 00743139  8d4900               lea ecx, [ecx]
// 0074313c  2a2f                 sub ch, byte ptr [edi]
// 0074313e  7400                 je 0x743140
// 00743140  8b2f                 mov ebp, dword ptr [edi]
// 00743142  7400                 je 0x743144
// 00743144  f5                   cmc 
// 00743145  2f                   das 
// 00743146  7400                 je 0x743148
// 00743148  42                   inc edx
// 00743149  3074009d             xor byte ptr [eax + eax - 0x63], dh
// 0074314d  3074009d             xor byte ptr [eax + eax - 0x63], dh
// 00743151  3074009d             xor byte ptr [eax + eax - 0x63], dh
// 00743155  2e7400               je 0x743158
// 00743158  ac                   lodsb al, byte ptr [esi]
// 00743159  2e7400               je 0x74315c
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?OnHScroll@CXTPReportControl@@IAEXIIPAVCScrollBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
