// roc 2011-06 00578580  unit: seg_00570000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578580
//
// 00578580  51                   push ecx
// 00578581  53                   push ebx
// 00578582  55                   push ebp
// 00578583  56                   push esi
// 00578584  57                   push edi
// 00578585  8bf8                 mov edi, eax
// 00578587  8b4704               mov eax, dword ptr [edi + 4]
// 0057858a  8b08                 mov ecx, dword ptr [eax]
// 0057858c  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 00578592  6800040000           push 0x400
// 00578597  6a01                 push 1
// 00578599  57                   push edi
// 0057859a  ffd1                 call ecx
// 0057859c  894608               mov dword ptr [esi + 8], eax
// 0057859f  8b5704               mov edx, dword ptr [edi + 4]
// 005785a2  8b02                 mov eax, dword ptr [edx]
// 005785a4  6800040000           push 0x400
// 005785a9  6a01                 push 1
// 005785ab  57                   push edi
// 005785ac  ffd0                 call eax
// 005785ae  89460c               mov dword ptr [esi + 0xc], eax
// 005785b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005785b4  8b11                 mov edx, dword ptr [ecx]
// 005785b6  6800040000           push 0x400
// 005785bb  6a01                 push 1
// 005785bd  57                   push edi
// 005785be  ffd2                 call edx
// 005785c0  894610               mov dword ptr [esi + 0x10], eax
// 005785c3  8b4704               mov eax, dword ptr [edi + 4]
// 005785c6  8b08                 mov ecx, dword ptr [eax]
// 005785c8  6800040000           push 0x400
// 005785cd  6a01                 push 1
// 005785cf  57                   push edi
// 005785d0  ffd1                 call ecx
// 005785d2  83c430               add esp, 0x30
// 005785d5  894614               mov dword ptr [esi + 0x14], eax
// 005785d8  33c0                 xor eax, eax
// 005785da  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 005785e2  bf00af1dff           mov edi, 0xff1daf00
// 005785e7  ba800b4dff           mov edx, 0xff4d0b80
// 005785ec  b9008d2c00           mov ecx, 0x2c8d00
// 005785f1  8b6e08               mov ebp, dword ptr [esi + 8]
// 005785f4  8bda                 mov ebx, edx
// 005785f6  c1fb10               sar ebx, 0x10
// 005785f9  891c28               mov dword ptr [eax + ebp], ebx
// 005785fc  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005785ff  8bdf                 mov ebx, edi
// 00578601  c1fb10               sar ebx, 0x10
// 00578604  891c28               mov dword ptr [eax + ebp], ebx
// 00578607  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0057860a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057860e  891c28               mov dword ptr [eax + ebp], ebx
// 00578611  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00578614  890c28               mov dword ptr [eax + ebp], ecx
// 00578617  81ebd2b60000         sub ebx, 0xb6d2
// 0057861d  81e91a580000         sub ecx, 0x581a
// 00578623  81c2e9660100         add edx, 0x166e9
// 00578629  81c7a2c50100         add edi, 0x1c5a2
// 0057862f  83c004               add eax, 4
// 00578632  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00578638  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057863c  7db3                 jge 0x5785f1
// 0057863e  5f                   pop edi
// 0057863f  5e                   pop esi
// 00578640  5d                   pop ebp
// 00578641  5b                   pop ebx
// 00578642  59                   pop ecx
// 00578643  c3                   ret 
// library jpeg-6b/jdcolor.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
