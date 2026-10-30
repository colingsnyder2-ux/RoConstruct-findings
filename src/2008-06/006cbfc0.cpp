// from server: 100% by colin
// roc 2008-06 006cbfc0  unit: CXTPReportControl  size: 636 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cbfc0
//
// 006cbfc0  6aff                 push -1
// 006cbfc2  6804127e00           push 0x7e1204
// 006cbfc7  64a100000000         mov eax, dword ptr fs:[0]
// 006cbfcd  50                   push eax
// 006cbfce  83ec20               sub esp, 0x20
// 006cbfd1  53                   push ebx
// 006cbfd2  55                   push ebp
// 006cbfd3  56                   push esi
// 006cbfd4  57                   push edi
// 006cbfd5  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 006cbfda  33c4                 xor eax, esp
// 006cbfdc  50                   push eax
// 006cbfdd  8d442434             lea eax, [esp + 0x34]
// 006cbfe1  64a300000000         mov dword ptr fs:[0], eax
// 006cbfe7  8bf9                 mov edi, ecx
// 006cbfe9  897c2424             mov dword ptr [esp + 0x24], edi
// 006cbfed  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006cbff1  33db                 xor ebx, ebx
// 006cbff3  895c243c             mov dword ptr [esp + 0x3c], ebx
// 006cbff7  3bcb                 cmp ecx, ebx
// 006cbff9  7475                 je 0x6cc070
// 006cbffb  8b01                 mov eax, dword ptr [ecx]
// 006cbffd  8b505c               mov edx, dword ptr [eax + 0x5c]
// 006cc000  ffd2                 call edx
// 006cc002  8d4c2448             lea ecx, [esp + 0x48]
// 006cc006  85c0                 test eax, eax
// 006cc008  0f851e020000         jne 0x6cc22c
// 006cc00e  ff15d82f8000         call dword ptr [0x802fd8]
// 006cc014  84c0                 test al, al
// 006cc016  7558                 jne 0x6cc070
// 006cc018  8b07                 mov eax, dword ptr [edi]
// 006cc01a  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 006cc020  8bcf                 mov ecx, edi
// 006cc022  ffd2                 call edx
// 006cc024  8a0d5e3a8500         mov cl, byte ptr [0x853a5e]
// 006cc02a  8944242c             mov dword ptr [esp + 0x2c], eax
// 006cc02e  66a15c3a8500         mov ax, word ptr [0x853a5c]
// 006cc034  884c2416             mov byte ptr [esp + 0x16], cl
// 006cc038  8d4c2448             lea ecx, [esp + 0x48]
// 006cc03c  6689442414           mov word ptr [esp + 0x14], ax
// 006cc041  895c2428             mov dword ptr [esp + 0x28], ebx
// 006cc045  ff15e02f8000         call dword ptr [0x802fe0]
// 006cc04b  50                   push eax
// 006cc04c  8d4c244c             lea ecx, [esp + 0x4c]
// 006cc050  ff1584338000         call dword ptr [0x803384]
// 006cc056  8d542428             lea edx, [esp + 0x28]
// 006cc05a  52                   push edx
// 006cc05b  8d4c2418             lea ecx, [esp + 0x18]
// 006cc05f  51                   push ecx
// 006cc060  50                   push eax
// 006cc061  ff15f4258000         call dword ptr [0x8025f4]
// 006cc067  8bf0                 mov esi, eax
// 006cc069  83c40c               add esp, 0xc
// 006cc06c  3bf3                 cmp esi, ebx
// 006cc06e  7526                 jne 0x6cc096
// 006cc070  8d4c2448             lea ecx, [esp + 0x48]
// 006cc074  ff15143f8000         call dword ptr [0x803f14]
// 006cc07a  33c0                 xor eax, eax
// 006cc07c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006cc080  64890d00000000       mov dword ptr fs:[0], ecx
// 006cc087  59                   pop ecx
// 006cc088  5f                   pop edi
// 006cc089  5e                   pop esi
// 006cc08a  5d                   pop ebp
// 006cc08b  5b                   pop ebx
// 006cc08c  83c42c               add esp, 0x2c
// 006cc08f  c20c00               ret 0xc
// 006cc092  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006cc096  56                   push esi
// 006cc097  8d4c241c             lea ecx, [esp + 0x1c]
// 006cc09b  ff15103f8000         call dword ptr [0x803f10]
// 006cc0a1  8d4c2418             lea ecx, [esp + 0x18]
// 006cc0a5  c644243c01           mov byte ptr [esp + 0x3c], 1
// 006cc0aa  ff1588338000         call dword ptr [0x803388]
// 006cc0b0  8b97ec000000         mov edx, dword ptr [edi + 0xec]
// 006cc0b6  8b4230               mov eax, dword ptr [edx + 0x30]
// 006cc0b9  33ed                 xor ebp, ebp
// 006cc0bb  33ff                 xor edi, edi
// 006cc0bd  3bc3                 cmp eax, ebx
// 006cc0bf  89442430             mov dword ptr [esp + 0x30], eax
// 006cc0c3  0f8eaf000000         jle 0x6cc178
// 006cc0c9  8da42400000000       lea esp, [esp]
// 006cc0d0  3bfb                 cmp edi, ebx
// 006cc0d2  8b442424             mov eax, dword ptr [esp + 0x24]
// 006cc0d6  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 006cc0dc  0f8c8b000000         jl 0x6cc16d
// 006cc0e2  3b7830               cmp edi, dword ptr [eax + 0x30]
// 006cc0e5  0f8d82000000         jge 0x6cc16d
// 006cc0eb  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 006cc0ee  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 006cc0f1  8d04b9               lea eax, [ecx + edi*4]
// 006cc0f4  3bf3                 cmp esi, ebx
// 006cc0f6  7475                 je 0x6cc16d
// 006cc0f8  8bce                 mov ecx, esi
// 006cc0fa  e8e1840000           call 0x6d45e0
// 006cc0ff  85c0                 test eax, eax
// 006cc101  7506                 jne 0x6cc109
// 006cc103  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 006cc107  7464                 je 0x6cc16d
// 006cc109  395e64               cmp dword ptr [esi + 0x64], ebx
// 006cc10c  745f                 je 0x6cc16d
// 006cc10e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006cc112  56                   push esi
// 006cc113  e828be0000           call 0x6d7f40
// 006cc118  3bc3                 cmp eax, ebx
// 006cc11a  7451                 je 0x6cc16d
// 006cc11c  8b10                 mov edx, dword ptr [eax]
// 006cc11e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 006cc121  56                   push esi
// 006cc122  8d4c2420             lea ecx, [esp + 0x20]
// 006cc126  51                   push ecx
// 006cc127  8bc8                 mov ecx, eax
// 006cc129  ffd2                 call edx
// 006cc12b  8d4c241c             lea ecx, [esp + 0x1c]
// 006cc12f  c644243c02           mov byte ptr [esp + 0x3c], 2
// 006cc134  ff1588338000         call dword ptr [0x803388]
// 006cc13a  53                   push ebx
// 006cc13b  8d4c241c             lea ecx, [esp + 0x1c]
// 006cc13f  ff15e03e8000         call dword ptr [0x803ee0]
// 006cc145  50                   push eax
// 006cc146  8d4c2424             lea ecx, [esp + 0x24]
// 006cc14a  ff15983a8000         call dword ptr [0x803a98]
// 006cc150  33c9                 xor ecx, ecx
// 006cc152  83f8ff               cmp eax, -1
// 006cc155  0f95c1               setne cl
// 006cc158  c644243c01           mov byte ptr [esp + 0x3c], 1
// 006cc15d  8be9                 mov ebp, ecx
// 006cc15f  8d4c241c             lea ecx, [esp + 0x1c]
// 006cc163  ff15143f8000         call dword ptr [0x803f14]
// 006cc169  3beb                 cmp ebp, ebx
// 006cc16b  750b                 jne 0x6cc178
// 006cc16d  47                   inc edi
// 006cc16e  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 006cc172  0f8c58ffffff         jl 0x6cc0d0
// 006cc178  395c244c             cmp dword ptr [esp + 0x4c], ebx
// 006cc17c  746b                 je 0x6cc1e9
// 006cc17e  3beb                 cmp ebp, ebx
// 006cc180  756b                 jne 0x6cc1ed
// 006cc182  8b742444             mov esi, dword ptr [esp + 0x44]
// 006cc186  8bce                 mov ecx, esi
// 006cc188  e8e3450d00           call 0x7a0770
// 006cc18d  85c0                 test eax, eax
// 006cc18f  0f8489000000         je 0x6cc21e
// 006cc195  8bce                 mov ecx, esi
// 006cc197  e8d4450d00           call 0x7a0770
// 006cc19c  8b10                 mov edx, dword ptr [eax]
// 006cc19e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 006cc1a1  53                   push ebx
// 006cc1a2  8d4c2424             lea ecx, [esp + 0x24]
// 006cc1a6  51                   push ecx
// 006cc1a7  8bc8                 mov ecx, eax
// 006cc1a9  ffd2                 call edx
// 006cc1ab  8d4c2420             lea ecx, [esp + 0x20]
// 006cc1af  c644243c03           mov byte ptr [esp + 0x3c], 3
// 006cc1b4  ff1588338000         call dword ptr [0x803388]
// 006cc1ba  53                   push ebx
// 006cc1bb  8d4c241c             lea ecx, [esp + 0x1c]
// 006cc1bf  ff15e03e8000         call dword ptr [0x803ee0]
// 006cc1c5  50                   push eax
// 006cc1c6  8d4c2428             lea ecx, [esp + 0x28]
// 006cc1ca  ff15983a8000         call dword ptr [0x803a98]
// 006cc1d0  33c9                 xor ecx, ecx
// 006cc1d2  83f8ff               cmp eax, -1
// 006cc1d5  0f95c1               setne cl
// 006cc1d8  c644243c01           mov byte ptr [esp + 0x3c], 1
// 006cc1dd  8be9                 mov ebp, ecx
// 006cc1df  8d4c2420             lea ecx, [esp + 0x20]
// 006cc1e3  ff15143f8000         call dword ptr [0x803f14]
// 006cc1e9  3beb                 cmp ebp, ebx
// 006cc1eb  7431                 je 0x6cc21e
// 006cc1ed  8d542428             lea edx, [esp + 0x28]
// 006cc1f1  52                   push edx
// 006cc1f2  8d442418             lea eax, [esp + 0x18]
// 006cc1f6  50                   push eax
// 006cc1f7  53                   push ebx
// 006cc1f8  ff15f4258000         call dword ptr [0x8025f4]
// 006cc1fe  83c40c               add esp, 0xc
// 006cc201  8d4c2418             lea ecx, [esp + 0x18]
// 006cc205  8bf0                 mov esi, eax
// 006cc207  885c243c             mov byte ptr [esp + 0x3c], bl
// 006cc20b  ff15143f8000         call dword ptr [0x803f14]
// 006cc211  3bf3                 cmp esi, ebx
// 006cc213  0f8579feffff         jne 0x6cc092
// 006cc219  e952feffff           jmp 0x6cc070
// 006cc21e  8d4c2418             lea ecx, [esp + 0x18]
// 006cc222  ff15143f8000         call dword ptr [0x803f14]
// 006cc228  8d4c2448             lea ecx, [esp + 0x48]
// 006cc22c  ff15143f8000         call dword ptr [0x803f14]
// 006cc232  b801000000           mov eax, 1
// 006cc237  e940feffff           jmp 0x6cc07c

// from server: 93% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\ReportControl\XTPReportControl.cpp
