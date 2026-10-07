// roc 2008-06 0053a100  unit: seg_00530000  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a100
//
// 0053a100  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0053a104  8b08                 mov ecx, dword ptr [eax]
// 0053a106  83ec10               sub esp, 0x10
// 0053a109  53                   push ebx
// 0053a10a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0053a10e  57                   push edi
// 0053a10f  8bbb44010000         mov edi, dword ptr [ebx + 0x144]
// 0053a115  3b4c2428             cmp ecx, dword ptr [esp + 0x28]
// 0053a119  0f83d7010000         jae 0x53a2f6
// 0053a11f  55                   push ebp
// 0053a120  56                   push esi
// 0053a121  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0053a125  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0053a129  395500               cmp dword ptr [ebp], edx
// 0053a12c  0f83c2010000         jae 0x53a2f4
// 0053a132  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053a136  8b08                 mov ecx, dword ptr [eax]
// 0053a138  8bb3dc000000         mov esi, dword ptr [ebx + 0xdc]
// 0053a13e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0053a142  2b7734               sub esi, dword ptr [edi + 0x34]
// 0053a145  2bc1                 sub eax, ecx
// 0053a147  3bf0                 cmp esi, eax
// 0053a149  7202                 jb 0x53a14d
// 0053a14b  8bf0                 mov esi, eax
// 0053a14d  8b4734               mov eax, dword ptr [edi + 0x34]
// 0053a150  8b9350010000         mov edx, dword ptr [ebx + 0x150]
// 0053a156  8b5204               mov edx, dword ptr [edx + 4]
// 0053a159  56                   push esi
// 0053a15a  50                   push eax
// 0053a15b  8d4708               lea eax, [edi + 8]
// 0053a15e  50                   push eax
// 0053a15f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0053a163  8d0c88               lea ecx, [eax + ecx*4]
// 0053a166  51                   push ecx
// 0053a167  53                   push ebx
// 0053a168  ffd2                 call edx
// 0053a16a  8b442440             mov eax, dword ptr [esp + 0x40]
// 0053a16e  0130                 add dword ptr [eax], esi
// 0053a170  017734               add dword ptr [edi + 0x34], esi
// 0053a173  8b4734               mov eax, dword ptr [edi + 0x34]
// 0053a176  83c414               add esp, 0x14
// 0053a179  297730               sub dword ptr [edi + 0x30], esi
// 0053a17c  0f858c000000         jne 0x53a20e
// 0053a182  3b83dc000000         cmp eax, dword ptr [ebx + 0xdc]
// 0053a188  0f8d80000000         jge 0x53a20e
// 0053a18e  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 0053a192  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0053a19a  7e69                 jle 0x53a205
// 0053a19c  8d4708               lea eax, [edi + 8]
// 0053a19f  89442410             mov dword ptr [esp + 0x10], eax
// 0053a1a3  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 0053a1a9  8b7734               mov esi, dword ptr [edi + 0x34]
// 0053a1ac  3bf0                 cmp esi, eax
// 0053a1ae  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0053a1b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0053a1b5  8b2a                 mov ebp, dword ptr [edx]
// 0053a1b7  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053a1bb  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053a1bf  7d2d                 jge 0x53a1ee
// 0053a1c1  8d46ff               lea eax, [esi - 1]
// 0053a1c4  89442418             mov dword ptr [esp + 0x18], eax
// 0053a1c8  eb06                 jmp 0x53a1d0
// 0053a1ca  8d9b00000000         lea ebx, [ebx]
// 0053a1d0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053a1d4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0053a1d8  51                   push ecx
// 0053a1d9  6a01                 push 1
// 0053a1db  56                   push esi
// 0053a1dc  55                   push ebp
// 0053a1dd  52                   push edx
// 0053a1de  55                   push ebp
// 0053a1df  e84cb9feff           call 0x525b30
// 0053a1e4  46                   inc esi
// 0053a1e5  83c418               add esp, 0x18
// 0053a1e8  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0053a1ec  7ce2                 jl 0x53a1d0
// 0053a1ee  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053a1f2  8344241004           add dword ptr [esp + 0x10], 4
// 0053a1f7  40                   inc eax
// 0053a1f8  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0053a1fb  89442424             mov dword ptr [esp + 0x24], eax
// 0053a1ff  7ca2                 jl 0x53a1a3
// 0053a201  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0053a205  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 0053a20b  894734               mov dword ptr [edi + 0x34], eax
// 0053a20e  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0053a211  3b8bdc000000         cmp ecx, dword ptr [ebx + 0xdc]
// 0053a217  7528                 jne 0x53a241
// 0053a219  8b4500               mov eax, dword ptr [ebp]
// 0053a21c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0053a220  8b9354010000         mov edx, dword ptr [ebx + 0x154]
// 0053a226  8b5204               mov edx, dword ptr [edx + 4]
// 0053a229  50                   push eax
// 0053a22a  51                   push ecx
// 0053a22b  6a00                 push 0
// 0053a22d  8d4708               lea eax, [edi + 8]
// 0053a230  50                   push eax
// 0053a231  53                   push ebx
// 0053a232  ffd2                 call edx
// 0053a234  83c414               add esp, 0x14
// 0053a237  c7473400000000       mov dword ptr [edi + 0x34], 0
// 0053a23e  ff4500               inc dword ptr [ebp]
// 0053a241  837f3000             cmp dword ptr [edi + 0x30], 0
// 0053a245  7509                 jne 0x53a250
// 0053a247  8b4500               mov eax, dword ptr [ebp]
// 0053a24a  3b44243c             cmp eax, dword ptr [esp + 0x3c]
// 0053a24e  7218                 jb 0x53a268
// 0053a250  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053a254  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0053a258  390a                 cmp dword ptr [edx], ecx
// 0053a25a  0f82c1feffff         jb 0x53a121
// 0053a260  5e                   pop esi
// 0053a261  5d                   pop ebp
// 0053a262  5f                   pop edi
// 0053a263  5b                   pop ebx
// 0053a264  83c410               add esp, 0x10
// 0053a267  c3                   ret 
// 0053a268  837b3c00             cmp dword ptr [ebx + 0x3c], 0
// 0053a26c  8b5344               mov edx, dword ptr [ebx + 0x44]
// 0053a26f  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0053a277  7e74                 jle 0x53a2ed
// 0053a279  83c20c               add edx, 0xc
// 0053a27c  8954242c             mov dword ptr [esp + 0x2c], edx
// 0053a280  8b0a                 mov ecx, dword ptr [edx]
// 0053a282  8b4500               mov eax, dword ptr [ebp]
// 0053a285  8b6a10               mov ebp, dword ptr [edx + 0x10]
// 0053a288  0fafc1               imul eax, ecx
// 0053a28b  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0053a28f  8bf1                 mov esi, ecx
// 0053a291  0faf74243c           imul esi, dword ptr [esp + 0x3c]
// 0053a296  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0053a29a  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 0053a29d  03ed                 add ebp, ebp
// 0053a29f  03ed                 add ebp, ebp
// 0053a2a1  03ed                 add ebp, ebp
// 0053a2a3  3bc6                 cmp eax, esi
// 0053a2a5  894c2430             mov dword ptr [esp + 0x30], ecx
// 0053a2a9  8bf8                 mov edi, eax
// 0053a2ab  7d27                 jge 0x53a2d4
// 0053a2ad  48                   dec eax
// 0053a2ae  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053a2b2  eb04                 jmp 0x53a2b8
// 0053a2b4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0053a2b8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0053a2bc  55                   push ebp
// 0053a2bd  6a01                 push 1
// 0053a2bf  57                   push edi
// 0053a2c0  51                   push ecx
// 0053a2c1  52                   push edx
// 0053a2c2  51                   push ecx
// 0053a2c3  e868b8feff           call 0x525b30
// 0053a2c8  47                   inc edi
// 0053a2c9  83c418               add esp, 0x18
// 0053a2cc  3bfe                 cmp edi, esi
// 0053a2ce  7ce4                 jl 0x53a2b4
// 0053a2d0  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0053a2d4  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053a2d8  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 0053a2dc  40                   inc eax
// 0053a2dd  83c254               add edx, 0x54
// 0053a2e0  3b433c               cmp eax, dword ptr [ebx + 0x3c]
// 0053a2e3  89442424             mov dword ptr [esp + 0x24], eax
// 0053a2e7  8954242c             mov dword ptr [esp + 0x2c], edx
// 0053a2eb  7c93                 jl 0x53a280
// 0053a2ed  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0053a2f1  894500               mov dword ptr [ebp], eax
// 0053a2f4  5e                   pop esi
// 0053a2f5  5d                   pop ebp
// 0053a2f6  5f                   pop edi
// 0053a2f7  5b                   pop ebx
// 0053a2f8  83c410               add esp, 0x10
// 0053a2fb  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
