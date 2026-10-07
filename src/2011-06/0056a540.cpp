// roc 2011-06 0056a540  unit: seg_00560000  size: 243 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a540
//
// 0056a540  51                   push ecx
// 0056a541  53                   push ebx
// 0056a542  56                   push esi
// 0056a543  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056a547  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056a54a  33db                 xor ebx, ebx
// 0056a54c  57                   push edi
// 0056a54d  33ff                 xor edi, edi
// 0056a54f  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0056a552  895c240c             mov dword ptr [esp + 0xc], ebx
// 0056a556  7e26                 jle 0x56a57e
// 0056a558  55                   push ebp
// 0056a559  8d6810               lea ebp, [eax + 0x10]
// 0056a55c  8d642400             lea esp, [esp]
// 0056a560  8b4500               mov eax, dword ptr [ebp]
// 0056a563  50                   push eax
// 0056a564  8bc6                 mov eax, esi
// 0056a566  e825f5ffff           call 0x569a90
// 0056a56b  47                   inc edi
// 0056a56c  83c404               add esp, 4
// 0056a56f  03d8                 add ebx, eax
// 0056a571  83c554               add ebp, 0x54
// 0056a574  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0056a577  7ce7                 jl 0x56a560
// 0056a579  895c2410             mov dword ptr [esp + 0x10], ebx
// 0056a57d  5d                   pop ebp
// 0056a57e  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0056a585  7558                 jne 0x56a5df
// 0056a587  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0056a58e  754f                 jne 0x56a5df
// 0056a590  837e3808             cmp dword ptr [esi + 0x38], 8
// 0056a594  7549                 jne 0x56a5df
// 0056a596  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056a599  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056a59c  b301                 mov bl, 1
// 0056a59e  85c9                 test ecx, ecx
// 0056a5a0  7e18                 jle 0x56a5ba
// 0056a5a2  83c018               add eax, 0x18
// 0056a5a5  8378fc01             cmp dword ptr [eax - 4], 1
// 0056a5a9  7f05                 jg 0x56a5b0
// 0056a5ab  833801               cmp dword ptr [eax], 1
// 0056a5ae  7e02                 jle 0x56a5b2
// 0056a5b0  32db                 xor bl, bl
// 0056a5b2  83c054               add eax, 0x54
// 0056a5b5  83e901               sub ecx, 1
// 0056a5b8  75eb                 jne 0x56a5a5
// 0056a5ba  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0056a5bf  7420                 je 0x56a5e1
// 0056a5c1  84db                 test bl, bl
// 0056a5c3  741c                 je 0x56a5e1
// 0056a5c5  8b0e                 mov ecx, dword ptr [esi]
// 0056a5c7  c741144b000000       mov dword ptr [ecx + 0x14], 0x4b
// 0056a5ce  8b16                 mov edx, dword ptr [esi]
// 0056a5d0  8b4204               mov eax, dword ptr [edx + 4]
// 0056a5d3  6a00                 push 0
// 0056a5d5  56                   push esi
// 0056a5d6  32db                 xor bl, bl
// 0056a5d8  ffd0                 call eax
// 0056a5da  83c408               add esp, 8
// 0056a5dd  eb02                 jmp 0x56a5e1
// 0056a5df  32db                 xor bl, bl
// 0056a5e1  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0056a5e8  8bce                 mov ecx, esi
// 0056a5ea  5f                   pop edi
// 0056a5eb  740f                 je 0x56a5fc
// 0056a5ed  5e                   pop esi
// 0056a5ee  b8c9000000           mov eax, 0xc9
// 0056a5f3  5b                   pop ebx
// 0056a5f4  83c404               add esp, 4
// 0056a5f7  e9e4f7ffff           jmp 0x569de0
// 0056a5fc  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0056a603  5e                   pop esi
// 0056a604  740e                 je 0x56a614
// 0056a606  b8c2000000           mov eax, 0xc2
// 0056a60b  5b                   pop ebx
// 0056a60c  83c404               add esp, 4
// 0056a60f  e9ccf7ffff           jmp 0x569de0
// 0056a614  84db                 test bl, bl
// 0056a616  5b                   pop ebx
// 0056a617  740d                 je 0x56a626
// 0056a619  b8c0000000           mov eax, 0xc0
// 0056a61e  83c404               add esp, 4
// 0056a621  e9baf7ffff           jmp 0x569de0
// 0056a626  b8c1000000           mov eax, 0xc1
// 0056a62b  83c404               add esp, 4
// 0056a62e  e9adf7ffff           jmp 0x569de0
// library jpeg-6b/jcmarker.c (function _write_frame_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
