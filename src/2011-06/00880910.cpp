// roc 2011-06 00880910  unit: PAUHWND__::?$CArray  size: 427 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00880910
//
// 00880910  83ec14               sub esp, 0x14
// 00880913  8b442420             mov eax, dword ptr [esp + 0x20]
// 00880917  53                   push ebx
// 00880918  55                   push ebp
// 00880919  56                   push esi
// 0088091a  57                   push edi
// 0088091b  8bf1                 mov esi, ecx
// 0088091d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00880921  50                   push eax
// 00880922  51                   push ecx
// 00880923  ff15a41aa400         call dword ptr [0xa41aa4]
// 00880929  8b5e10               mov ebx, dword ptr [esi + 0x10]
// 0088092c  83eb01               sub ebx, 1
// 0088092f  89442410             mov dword ptr [esp + 0x10], eax
// 00880933  7870                 js 0x8809a5
// 00880935  8b2d081ca400         mov ebp, dword ptr [0xa41c08]
// 0088093b  eb03                 jmp 0x880940
// 0088093d  8d4900               lea ecx, [ecx]
// 00880940  85db                 test ebx, ebx
// 00880942  0f8c6e010000         jl 0x880ab6
// 00880948  3b5e10               cmp ebx, dword ptr [esi + 0x10]
// 0088094b  0f8d65010000         jge 0x880ab6
// 00880951  8b560c               mov edx, dword ptr [esi + 0xc]
// 00880954  8b3c9a               mov edi, dword ptr [edx + ebx*4]
// 00880957  85ff                 test edi, edi
// 00880959  7445                 je 0x8809a0
// 0088095b  837f2000             cmp dword ptr [edi + 0x20], 0
// 0088095f  743f                 je 0x8809a0
// 00880961  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00880965  83ec08               sub esp, 8
// 00880968  8bc4                 mov eax, esp
// 0088096a  8908                 mov dword ptr [eax], ecx
// 0088096c  8b542438             mov edx, dword ptr [esp + 0x38]
// 00880970  895004               mov dword ptr [eax + 4], edx
// 00880973  8b07                 mov eax, dword ptr [edi]
// 00880975  8b90e0010000         mov edx, dword ptr [eax + 0x1e0]
// 0088097b  8bcf                 mov ecx, edi
// 0088097d  ffd2                 call edx
// 0088097f  83f8fe               cmp eax, -2
// 00880982  741c                 je 0x8809a0
// 00880984  83f801               cmp eax, 1
// 00880987  0f84e8000000         je 0x880a75
// 0088098d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00880991  8b4720               mov eax, dword ptr [edi + 0x20]
// 00880994  51                   push ecx
// 00880995  50                   push eax
// 00880996  ffd5                 call ebp
// 00880998  85c0                 test eax, eax
// 0088099a  0f85d5000000         jne 0x880a75
// 008809a0  83eb01               sub ebx, 1
// 008809a3  799b                 jns 0x880940
// 008809a5  837e1000             cmp dword ptr [esi + 0x10], 0
// 008809a9  7e64                 jle 0x880a0f
// 008809ab  8b4634               mov eax, dword ptr [esi + 0x34]
// 008809ae  33ff                 xor edi, edi
// 008809b0  85c0                 test eax, eax
// 008809b2  7e5b                 jle 0x880a0f
// 008809b4  8b2dec1ba400         mov ebp, dword ptr [0xa41bec]
// 008809ba  8d9b00000000         lea ebx, [ebx]
// 008809c0  85ff                 test edi, edi
// 008809c2  0f8cee000000         jl 0x880ab6
// 008809c8  3bf8                 cmp edi, eax
// 008809ca  0f8de6000000         jge 0x880ab6
// 008809d0  8b5630               mov edx, dword ptr [esi + 0x30]
// 008809d3  8b1cba               mov ebx, dword ptr [edx + edi*4]
// 008809d6  53                   push ebx
// 008809d7  ffd5                 call ebp
// 008809d9  85c0                 test eax, eax
// 008809db  742a                 je 0x880a07
// 008809dd  53                   push ebx
// 008809de  ff15201ca400         call dword ptr [0xa41c20]
// 008809e4  85c0                 test eax, eax
// 008809e6  741f                 je 0x880a07
// 008809e8  53                   push ebx
// 008809e9  8d4c2418             lea ecx, [esp + 0x18]
// 008809ed  e80ec3fdff           call 0x85cd00
// 008809f2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008809f6  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008809fa  51                   push ecx
// 008809fb  52                   push edx
// 008809fc  50                   push eax
// 008809fd  ff15101ca400         call dword ptr [0xa41c10]
// 00880a03  85c0                 test eax, eax
// 00880a05  7562                 jne 0x880a69
// 00880a07  8b4634               mov eax, dword ptr [esi + 0x34]
// 00880a0a  47                   inc edi
// 00880a0b  3bf8                 cmp edi, eax
// 00880a0d  7cb1                 jl 0x8809c0
// 00880a0f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00880a13  85c0                 test eax, eax
// 00880a15  7416                 je 0x880a2d
// 00880a17  837e1000             cmp dword ptr [esi + 0x10], 0
// 00880a1b  7e10                 jle 0x880a2d
// 00880a1d  6ae6                 push -0x1a
// 00880a1f  50                   push eax
// 00880a20  ff15841aa400         call dword ptr [0xa41a84]
// 00880a26  a900000100           test eax, 0x10000
// 00880a2b  753c                 jne 0x880a69
// 00880a2d  8b4610               mov eax, dword ptr [esi + 0x10]
// 00880a30  33ff                 xor edi, edi
// 00880a32  85c0                 test eax, eax
// 00880a34  7e33                 jle 0x880a69
// 00880a36  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00880a3a  8d9b00000000         lea ebx, [ebx]
// 00880a40  85ff                 test edi, edi
// 00880a42  7c72                 jl 0x880ab6
// 00880a44  3bf8                 cmp edi, eax
// 00880a46  7d6e                 jge 0x880ab6
// 00880a48  8b442430             mov eax, dword ptr [esp + 0x30]
// 00880a4c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00880a50  8b560c               mov edx, dword ptr [esi + 0xc]
// 00880a53  50                   push eax
// 00880a54  8b04ba               mov eax, dword ptr [edx + edi*4]
// 00880a57  51                   push ecx
// 00880a58  53                   push ebx
// 00880a59  50                   push eax
// 00880a5a  8bce                 mov ecx, esi
// 00880a5c  e8effdffff           call 0x880850
// 00880a61  8b4610               mov eax, dword ptr [esi + 0x10]
// 00880a64  47                   inc edi
// 00880a65  3bf8                 cmp edi, eax
// 00880a67  7cd7                 jl 0x880a40
// 00880a69  33c0                 xor eax, eax
// 00880a6b  5f                   pop edi
// 00880a6c  5e                   pop esi
// 00880a6d  5d                   pop ebp
// 00880a6e  5b                   pop ebx
// 00880a6f  83c414               add esp, 0x14
// 00880a72  c20c00               ret 0xc
// 00880a75  83bf2c01000000       cmp dword ptr [edi + 0x12c], 0
// 00880a7c  7eeb                 jle 0x880a69
// 00880a7e  8b442428             mov eax, dword ptr [esp + 0x28]
// 00880a82  3d00020000           cmp eax, 0x200
// 00880a87  74e0                 je 0x880a69
// 00880a89  3da0000000           cmp eax, 0xa0
// 00880a8e  74d9                 je 0x880a69
// 00880a90  837e4000             cmp dword ptr [esi + 0x40], 0
// 00880a94  75d3                 jne 0x880a69
// 00880a96  8bce                 mov ecx, esi
// 00880a98  e843fdffff           call 0x8807e0
// 00880a9d  5f                   pop edi
// 00880a9e  5e                   pop esi
// 00880a9f  33c0                 xor eax, eax
// 00880aa1  33c9                 xor ecx, ecx
// 00880aa3  5d                   pop ebp
// 00880aa4  a3ec8ed100           mov dword ptr [0xd18eec], eax
// 00880aa9  890df08ed100         mov dword ptr [0xd18ef0], ecx
// 00880aaf  5b                   pop ebx
// 00880ab0  83c414               add esp, 0x14
// 00880ab3  c20c00               ret 0xc
// 00880ab6  e84f98f8ff           call 0x80a30a
// copied from an identical function in another client (function ?PreTranslateMouseEvents@CXTPMouseManager@@AAEHIUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMouseManager.cpp