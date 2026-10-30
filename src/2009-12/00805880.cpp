// roc 2009-12 00805880  unit: CXTPCommandBar  size: 939 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805880
//
// 00805880  83ec24               sub esp, 0x24
// 00805883  53                   push ebx
// 00805884  56                   push esi
// 00805885  57                   push edi
// 00805886  8bd9                 mov ebx, ecx
// 00805888  33ff                 xor edi, edi
// 0080588a  895c240c             mov dword ptr [esp + 0xc], ebx
// 0080588e  897c241c             mov dword ptr [esp + 0x1c], edi
// 00805892  83ceff               or esi, 0xffffffff
// 00805895  e8b6f9ffff           call 0x805250
// 0080589a  8bc8                 mov ecx, eax
// 0080589c  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 008058a2  894c2418             mov dword ptr [esp + 0x18], ecx
// 008058a6  83f802               cmp eax, 2
// 008058a9  7412                 je 0x8058bd
// 008058ab  83f803               cmp eax, 3
// 008058ae  740d                 je 0x8058bd
// 008058b0  83bbf800000002       cmp dword ptr [ebx + 0xf8], 2
// 008058b7  897c2410             mov dword ptr [esp + 0x10], edi
// 008058bb  7508                 jne 0x8058c5
// 008058bd  c744241001000000     mov dword ptr [esp + 0x10], 1
// 008058c5  33c0                 xor eax, eax
// 008058c7  89442414             mov dword ptr [esp + 0x14], eax
// 008058cb  85c9                 test ecx, ecx
// 008058cd  0f8ea4000000         jle 0x805977
// 008058d3  55                   push ebp
// 008058d4  50                   push eax
// 008058d5  8bcb                 mov ecx, ebx
// 008058d7  e884f9ffff           call 0x805260
// 008058dc  8bf8                 mov edi, eax
// 008058de  8b07                 mov eax, dword ptr [edi]
// 008058e0  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 008058e6  6a00                 push 0
// 008058e8  8bcf                 mov ecx, edi
// 008058ea  ffd2                 call edx
// 008058ec  85c0                 test eax, eax
// 008058ee  0f84d4000000         je 0x8059c8
// 008058f4  8b07                 mov eax, dword ptr [edi]
// 008058f6  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 008058fc  8bcf                 mov ecx, edi
// 008058fe  ffd2                 call edx
// 00805900  85c0                 test eax, eax
// 00805902  0f84c0000000         je 0x8059c8
// 00805908  83bb6c01000000       cmp dword ptr [ebx + 0x16c], 0
// 0080590f  8b97c0000000         mov edx, dword ptr [edi + 0xc0]
// 00805915  8b8fc4000000         mov ecx, dword ptr [edi + 0xc4]
// 0080591b  8b87cc000000         mov eax, dword ptr [edi + 0xcc]
// 00805921  8bafc8000000         mov ebp, dword ptr [edi + 0xc8]
// 00805927  89542424             mov dword ptr [esp + 0x24], edx
// 0080592b  894c2428             mov dword ptr [esp + 0x28], ecx
// 0080592f  89442430             mov dword ptr [esp + 0x30], eax
// 00805933  7575                 jne 0x8059aa
// 00805935  83bf9400000000       cmp dword ptr [edi + 0x94], 0
// 0080593c  0f84a5000000         je 0x8059e7
// 00805942  83ceff               or esi, 0xffffffff
// 00805945  837c241400           cmp dword ptr [esp + 0x14], 0
// 0080594a  750e                 jne 0x80595a
// 0080594c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00805950  3b4804               cmp ecx, dword ptr [eax + 4]
// 00805953  7f15                 jg 0x80596a
// 00805955  e98c010000           jmp 0x805ae6
// 0080595a  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0080595e  3b2b                 cmp ebp, dword ptr [ebx]
// 00805960  0f8d85000000         jge 0x8059eb
// 00805966  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0080596a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0080596e  5d                   pop ebp
// 0080596f  85ff                 test edi, edi
// 00805971  0f858e020000         jne 0x805c05
// 00805977  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0080597a  8d442420             lea eax, [esp + 0x20]
// 0080597e  50                   push eax
// 0080597f  51                   push ecx
// 00805980  ff1550cc9800         call dword ptr [0x98cc50]
// 00805986  8b13                 mov edx, dword ptr [ebx]
// 00805988  8b829c010000         mov eax, dword ptr [edx + 0x19c]
// 0080598e  8bcb                 mov ecx, ebx
// 00805990  ffd0                 call eax
// 00805992  85c0                 test eax, eax
// 00805994  0f8424020000         je 0x805bbe
// 0080599a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080599e  51                   push ecx
// 0080599f  ff159cca9800         call dword ptr [0x98ca9c]
// 008059a5  e945020000           jmp 0x805bef
// 008059aa  837c241400           cmp dword ptr [esp + 0x14], 0
// 008059af  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008059b3  7528                 jne 0x8059dd
// 008059b5  8b5b04               mov ebx, dword ptr [ebx + 4]
// 008059b8  3bd9                 cmp ebx, ecx
// 008059ba  7c08                 jl 0x8059c4
// 008059bc  3bd8                 cmp ebx, eax
// 008059be  0f8efe000000         jle 0x805ac2
// 008059c4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008059c8  8b442418             mov eax, dword ptr [esp + 0x18]
// 008059cc  40                   inc eax
// 008059cd  3b44241c             cmp eax, dword ptr [esp + 0x1c]
// 008059d1  89442418             mov dword ptr [esp + 0x18], eax
// 008059d5  0f8cf9feffff         jl 0x8058d4
// 008059db  eb8d                 jmp 0x80596a
// 008059dd  8b1b                 mov ebx, dword ptr [ebx]
// 008059df  3bda                 cmp ebx, edx
// 008059e1  7ce1                 jl 0x8059c4
// 008059e3  3bdd                 cmp ebx, ebp
// 008059e5  7fdd                 jg 0x8059c4
// 008059e7  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 008059eb  837c241400           cmp dword ptr [esp + 0x14], 0
// 008059f0  0f84cc000000         je 0x805ac2
// 008059f6  83feff               cmp esi, -1
// 008059f9  741b                 je 0x805a16
// 008059fb  03c1                 add eax, ecx
// 008059fd  99                   cdq 
// 008059fe  2bc2                 sub eax, edx
// 00805a00  d1f8                 sar eax, 1
// 00805a02  2b4304               sub eax, dword ptr [ebx + 4]
// 00805a05  99                   cdq 
// 00805a06  33c2                 xor eax, edx
// 00805a08  2bc2                 sub eax, edx
// 00805a0a  3bf0                 cmp esi, eax
// 00805a0c  0f8e97010000         jle 0x805ba9
// 00805a12  8b442430             mov eax, dword ptr [esp + 0x30]
// 00805a16  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00805a19  03c1                 add eax, ecx
// 00805a1b  99                   cdq 
// 00805a1c  2bc2                 sub eax, edx
// 00805a1e  8bc8                 mov ecx, eax
// 00805a20  d1f9                 sar ecx, 1
// 00805a22  8bc1                 mov eax, ecx
// 00805a24  2bc3                 sub eax, ebx
// 00805a26  99                   cdq 
// 00805a27  8bf0                 mov esi, eax
// 00805a29  33f2                 xor esi, edx
// 00805a2b  33c0                 xor eax, eax
// 00805a2d  2bf2                 sub esi, edx
// 00805a2f  3bcb                 cmp ecx, ebx
// 00805a31  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00805a35  0f9cc0               setl al
// 00805a38  897c2420             mov dword ptr [esp + 0x20], edi
// 00805a3c  8901                 mov dword ptr [ecx], eax
// 00805a3e  85c0                 test eax, eax
// 00805a40  7467                 je 0x805aa9
// 00805a42  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00805a46  8b442418             mov eax, dword ptr [esp + 0x18]
// 00805a4a  4a                   dec edx
// 00805a4b  3bc2                 cmp eax, edx
// 00805a4d  7d41                 jge 0x805a90
// 00805a4f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00805a53  40                   inc eax
// 00805a54  50                   push eax
// 00805a55  e806f8ffff           call 0x805260
// 00805a5a  83b89800000000       cmp dword ptr [eax + 0x98], 0
// 00805a61  752d                 jne 0x805a90
// 00805a63  8b442430             mov eax, dword ptr [esp + 0x30]
// 00805a67  8b542424             mov edx, dword ptr [esp + 0x24]
// 00805a6b  8d4806               lea ecx, [eax + 6]
// 00805a6e  51                   push ecx
// 00805a6f  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00805a73  55                   push ebp
// 00805a74  50                   push eax
// 00805a75  52                   push edx
// 00805a76  e81559c6ff           call 0x46b390
// 00805a7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 00805a7f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00805a83  898a4c010000         mov dword ptr [edx + 0x14c], ecx
// 00805a89  8bda                 mov ebx, edx
// 00805a8b  e938ffffff           jmp 0x8059c8
// 00805a90  8b442430             mov eax, dword ptr [esp + 0x30]
// 00805a94  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00805a98  50                   push eax
// 00805a99  55                   push ebp
// 00805a9a  83c0fa               add eax, -6
// 00805a9d  50                   push eax
// 00805a9e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00805aa2  50                   push eax
// 00805aa3  51                   push ecx
// 00805aa4  e9fa000000           jmp 0x805ba3
// 00805aa9  8b442428             mov eax, dword ptr [esp + 0x28]
// 00805aad  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00805ab1  8d5006               lea edx, [eax + 6]
// 00805ab4  52                   push edx
// 00805ab5  55                   push ebp
// 00805ab6  50                   push eax
// 00805ab7  8b442430             mov eax, dword ptr [esp + 0x30]
// 00805abb  50                   push eax
// 00805abc  51                   push ecx
// 00805abd  e9e1000000           jmp 0x805ba3
// 00805ac2  83feff               cmp esi, -1
// 00805ac5  741f                 je 0x805ae6
// 00805ac7  8d042a               lea eax, [edx + ebp]
// 00805aca  99                   cdq 
// 00805acb  2bc2                 sub eax, edx
// 00805acd  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00805ad1  d1f8                 sar eax, 1
// 00805ad3  2b02                 sub eax, dword ptr [edx]
// 00805ad5  99                   cdq 
// 00805ad6  33c2                 xor eax, edx
// 00805ad8  2bc2                 sub eax, edx
// 00805ada  3bf0                 cmp esi, eax
// 00805adc  0f8ec7000000         jle 0x805ba9
// 00805ae2  8b542424             mov edx, dword ptr [esp + 0x24]
// 00805ae6  8d042a               lea eax, [edx + ebp]
// 00805ae9  99                   cdq 
// 00805aea  2bc2                 sub eax, edx
// 00805aec  8bc8                 mov ecx, eax
// 00805aee  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00805af2  8b18                 mov ebx, dword ptr [eax]
// 00805af4  d1f9                 sar ecx, 1
// 00805af6  8bc1                 mov eax, ecx
// 00805af8  2bc3                 sub eax, ebx
// 00805afa  99                   cdq 
// 00805afb  8bf0                 mov esi, eax
// 00805afd  33f2                 xor esi, edx
// 00805aff  33c0                 xor eax, eax
// 00805b01  2bf2                 sub esi, edx
// 00805b03  3bcb                 cmp ecx, ebx
// 00805b05  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00805b09  0f9cc0               setl al
// 00805b0c  897c2420             mov dword ptr [esp + 0x20], edi
// 00805b10  8901                 mov dword ptr [ecx], eax
// 00805b12  85c0                 test eax, eax
// 00805b14  7475                 je 0x805b8b
// 00805b16  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00805b1a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00805b1e  4a                   dec edx
// 00805b1f  3bc2                 cmp eax, edx
// 00805b21  7d52                 jge 0x805b75
// 00805b23  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00805b27  8d7801               lea edi, [eax + 1]
// 00805b2a  57                   push edi
// 00805b2b  e830f7ffff           call 0x805260
// 00805b30  83b89800000000       cmp dword ptr [eax + 0x98], 0
// 00805b37  753c                 jne 0x805b75
// 00805b39  57                   push edi
// 00805b3a  e821f7ffff           call 0x805260
// 00805b3f  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00805b46  752d                 jne 0x805b75
// 00805b48  8b442430             mov eax, dword ptr [esp + 0x30]
// 00805b4c  8b542428             mov edx, dword ptr [esp + 0x28]
// 00805b50  50                   push eax
// 00805b51  8d4d06               lea ecx, [ebp + 6]
// 00805b54  51                   push ecx
// 00805b55  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00805b59  52                   push edx
// 00805b5a  55                   push ebp
// 00805b5b  e83058c6ff           call 0x46b390
// 00805b60  8b542410             mov edx, dword ptr [esp + 0x10]
// 00805b64  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00805b68  898a4c010000         mov dword ptr [edx + 0x14c], ecx
// 00805b6e  8bda                 mov ebx, edx
// 00805b70  e953feffff           jmp 0x8059c8
// 00805b75  8b442430             mov eax, dword ptr [esp + 0x30]
// 00805b79  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00805b7d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00805b81  50                   push eax
// 00805b82  55                   push ebp
// 00805b83  51                   push ecx
// 00805b84  83c5fa               add ebp, -6
// 00805b87  55                   push ebp
// 00805b88  52                   push edx
// 00805b89  eb18                 jmp 0x805ba3
// 00805b8b  8b442430             mov eax, dword ptr [esp + 0x30]
// 00805b8f  8b542428             mov edx, dword ptr [esp + 0x28]
// 00805b93  50                   push eax
// 00805b94  8b442428             mov eax, dword ptr [esp + 0x28]
// 00805b98  8d4806               lea ecx, [eax + 6]
// 00805b9b  51                   push ecx
// 00805b9c  52                   push edx
// 00805b9d  50                   push eax
// 00805b9e  8b442450             mov eax, dword ptr [esp + 0x50]
// 00805ba2  50                   push eax
// 00805ba3  ff1538ca9800         call dword ptr [0x98ca38]
// 00805ba9  8b542410             mov edx, dword ptr [esp + 0x10]
// 00805bad  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00805bb1  898a4c010000         mov dword ptr [edx + 0x14c], ecx
// 00805bb7  8bda                 mov ebx, edx
// 00805bb9  e90afeffff           jmp 0x8059c8
// 00805bbe  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00805bc2  8b442420             mov eax, dword ptr [esp + 0x20]
// 00805bc6  83c2fe               add edx, -2
// 00805bc9  52                   push edx
// 00805bca  8b542428             mov edx, dword ptr [esp + 0x28]
// 00805bce  8d4808               lea ecx, [eax + 8]
// 00805bd1  51                   push ecx
// 00805bd2  83c202               add edx, 2
// 00805bd5  52                   push edx
// 00805bd6  83c002               add eax, 2
// 00805bd9  50                   push eax
// 00805bda  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00805bde  50                   push eax
// 00805bdf  ff1538ca9800         call dword ptr [0x98ca38]
// 00805be5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00805be9  c70101000000         mov dword ptr [ecx], 1
// 00805bef  8b542440             mov edx, dword ptr [esp + 0x40]
// 00805bf3  c702ffffffff         mov dword ptr [edx], 0xffffffff
// 00805bf9  c7834c01000000000000 mov dword ptr [ebx + 0x14c], 0
// 00805c03  eb0c                 jmp 0x805c11
// 00805c05  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00805c0b  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00805c0f  8901                 mov dword ptr [ecx], eax
// 00805c11  397c2434             cmp dword ptr [esp + 0x34], edi
// 00805c15  5f                   pop edi
// 00805c16  5e                   pop esi
// 00805c17  5b                   pop ebx
// 00805c18  750b                 jne 0x805c25
// 00805c1a  8b542430             mov edx, dword ptr [esp + 0x30]
// 00805c1e  52                   push edx
// 00805c1f  ff159cca9800         call dword ptr [0x98ca9c]
// 00805c25  83c424               add esp, 0x24
// 00805c28  c21400               ret 0x14
// copied from an identical function in another client (function ?CustomizeFindDropIndex@CXTPCommandBar@@IAEXPAVCXTPControl@@ABVCPoint@@AAVCRect@@AAH3@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp