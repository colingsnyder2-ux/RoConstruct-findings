// roc 2009-12 00620770  unit: seg_00620000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620770
//
// 00620770  51                   push ecx
// 00620771  53                   push ebx
// 00620772  55                   push ebp
// 00620773  56                   push esi
// 00620774  57                   push edi
// 00620775  8bf8                 mov edi, eax
// 00620777  8b4704               mov eax, dword ptr [edi + 4]
// 0062077a  8b08                 mov ecx, dword ptr [eax]
// 0062077c  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 00620782  6800040000           push 0x400
// 00620787  6a01                 push 1
// 00620789  57                   push edi
// 0062078a  ffd1                 call ecx
// 0062078c  894608               mov dword ptr [esi + 8], eax
// 0062078f  8b5704               mov edx, dword ptr [edi + 4]
// 00620792  8b02                 mov eax, dword ptr [edx]
// 00620794  6800040000           push 0x400
// 00620799  6a01                 push 1
// 0062079b  57                   push edi
// 0062079c  ffd0                 call eax
// 0062079e  89460c               mov dword ptr [esi + 0xc], eax
// 006207a1  8b4f04               mov ecx, dword ptr [edi + 4]
// 006207a4  8b11                 mov edx, dword ptr [ecx]
// 006207a6  6800040000           push 0x400
// 006207ab  6a01                 push 1
// 006207ad  57                   push edi
// 006207ae  ffd2                 call edx
// 006207b0  894610               mov dword ptr [esi + 0x10], eax
// 006207b3  8b4704               mov eax, dword ptr [edi + 4]
// 006207b6  8b08                 mov ecx, dword ptr [eax]
// 006207b8  6800040000           push 0x400
// 006207bd  6a01                 push 1
// 006207bf  57                   push edi
// 006207c0  ffd1                 call ecx
// 006207c2  83c430               add esp, 0x30
// 006207c5  894614               mov dword ptr [esi + 0x14], eax
// 006207c8  33c0                 xor eax, eax
// 006207ca  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 006207d2  bf00af1dff           mov edi, 0xff1daf00
// 006207d7  ba800b4dff           mov edx, 0xff4d0b80
// 006207dc  b9008d2c00           mov ecx, 0x2c8d00
// 006207e1  8b6e08               mov ebp, dword ptr [esi + 8]
// 006207e4  8bda                 mov ebx, edx
// 006207e6  c1fb10               sar ebx, 0x10
// 006207e9  891c28               mov dword ptr [eax + ebp], ebx
// 006207ec  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 006207ef  8bdf                 mov ebx, edi
// 006207f1  c1fb10               sar ebx, 0x10
// 006207f4  891c28               mov dword ptr [eax + ebp], ebx
// 006207f7  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 006207fa  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006207fe  891c28               mov dword ptr [eax + ebp], ebx
// 00620801  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00620804  890c28               mov dword ptr [eax + ebp], ecx
// 00620807  81ebd2b60000         sub ebx, 0xb6d2
// 0062080d  81e91a580000         sub ecx, 0x581a
// 00620813  81c2e9660100         add edx, 0x166e9
// 00620819  81c7a2c50100         add edi, 0x1c5a2
// 0062081f  83c004               add eax, 4
// 00620822  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00620828  895c2410             mov dword ptr [esp + 0x10], ebx
// 0062082c  7db3                 jge 0x6207e1
// 0062082e  5f                   pop edi
// 0062082f  5e                   pop esi
// 00620830  5d                   pop ebp
// 00620831  5b                   pop ebx
// 00620832  59                   pop ecx
// 00620833  c3                   ret 
// library jpeg-6b/jdcolor.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
