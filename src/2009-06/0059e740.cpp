// roc 2009-06 0059e740  unit: seg_00590000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059e740
//
// 0059e740  51                   push ecx
// 0059e741  53                   push ebx
// 0059e742  55                   push ebp
// 0059e743  56                   push esi
// 0059e744  57                   push edi
// 0059e745  8bf8                 mov edi, eax
// 0059e747  8b4704               mov eax, dword ptr [edi + 4]
// 0059e74a  8b08                 mov ecx, dword ptr [eax]
// 0059e74c  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 0059e752  6800040000           push 0x400
// 0059e757  6a01                 push 1
// 0059e759  57                   push edi
// 0059e75a  ffd1                 call ecx
// 0059e75c  894608               mov dword ptr [esi + 8], eax
// 0059e75f  8b5704               mov edx, dword ptr [edi + 4]
// 0059e762  8b02                 mov eax, dword ptr [edx]
// 0059e764  6800040000           push 0x400
// 0059e769  6a01                 push 1
// 0059e76b  57                   push edi
// 0059e76c  ffd0                 call eax
// 0059e76e  89460c               mov dword ptr [esi + 0xc], eax
// 0059e771  8b4f04               mov ecx, dword ptr [edi + 4]
// 0059e774  8b11                 mov edx, dword ptr [ecx]
// 0059e776  6800040000           push 0x400
// 0059e77b  6a01                 push 1
// 0059e77d  57                   push edi
// 0059e77e  ffd2                 call edx
// 0059e780  894610               mov dword ptr [esi + 0x10], eax
// 0059e783  8b4704               mov eax, dword ptr [edi + 4]
// 0059e786  8b08                 mov ecx, dword ptr [eax]
// 0059e788  6800040000           push 0x400
// 0059e78d  6a01                 push 1
// 0059e78f  57                   push edi
// 0059e790  ffd1                 call ecx
// 0059e792  83c430               add esp, 0x30
// 0059e795  894614               mov dword ptr [esi + 0x14], eax
// 0059e798  33c0                 xor eax, eax
// 0059e79a  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 0059e7a2  bf00af1dff           mov edi, 0xff1daf00
// 0059e7a7  ba800b4dff           mov edx, 0xff4d0b80
// 0059e7ac  b9008d2c00           mov ecx, 0x2c8d00
// 0059e7b1  8b6e08               mov ebp, dword ptr [esi + 8]
// 0059e7b4  8bda                 mov ebx, edx
// 0059e7b6  c1fb10               sar ebx, 0x10
// 0059e7b9  891c28               mov dword ptr [eax + ebp], ebx
// 0059e7bc  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0059e7bf  8bdf                 mov ebx, edi
// 0059e7c1  c1fb10               sar ebx, 0x10
// 0059e7c4  891c28               mov dword ptr [eax + ebp], ebx
// 0059e7c7  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0059e7ca  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059e7ce  891c28               mov dword ptr [eax + ebp], ebx
// 0059e7d1  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0059e7d4  890c28               mov dword ptr [eax + ebp], ecx
// 0059e7d7  81ebd2b60000         sub ebx, 0xb6d2
// 0059e7dd  81e91a580000         sub ecx, 0x581a
// 0059e7e3  81c2e9660100         add edx, 0x166e9
// 0059e7e9  81c7a2c50100         add edi, 0x1c5a2
// 0059e7ef  83c004               add eax, 4
// 0059e7f2  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 0059e7f8  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059e7fc  7db3                 jge 0x59e7b1
// 0059e7fe  5f                   pop edi
// 0059e7ff  5e                   pop esi
// 0059e800  5d                   pop ebp
// 0059e801  5b                   pop ebx
// 0059e802  59                   pop ecx
// 0059e803  c3                   ret 
// library jpeg-6b/jdcolor.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
