// roc 2011-06 00578b70  unit: seg_00570000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00578b70
//
// 00578b70  51                   push ecx
// 00578b71  53                   push ebx
// 00578b72  55                   push ebp
// 00578b73  56                   push esi
// 00578b74  57                   push edi
// 00578b75  8bf8                 mov edi, eax
// 00578b77  8b4704               mov eax, dword ptr [edi + 4]
// 00578b7a  8b08                 mov ecx, dword ptr [eax]
// 00578b7c  8bb7a0010000         mov esi, dword ptr [edi + 0x1a0]
// 00578b82  6800040000           push 0x400
// 00578b87  6a01                 push 1
// 00578b89  57                   push edi
// 00578b8a  ffd1                 call ecx
// 00578b8c  894610               mov dword ptr [esi + 0x10], eax
// 00578b8f  8b5704               mov edx, dword ptr [edi + 4]
// 00578b92  8b02                 mov eax, dword ptr [edx]
// 00578b94  6800040000           push 0x400
// 00578b99  6a01                 push 1
// 00578b9b  57                   push edi
// 00578b9c  ffd0                 call eax
// 00578b9e  894614               mov dword ptr [esi + 0x14], eax
// 00578ba1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00578ba4  8b11                 mov edx, dword ptr [ecx]
// 00578ba6  6800040000           push 0x400
// 00578bab  6a01                 push 1
// 00578bad  57                   push edi
// 00578bae  ffd2                 call edx
// 00578bb0  894618               mov dword ptr [esi + 0x18], eax
// 00578bb3  8b4704               mov eax, dword ptr [edi + 4]
// 00578bb6  8b08                 mov ecx, dword ptr [eax]
// 00578bb8  6800040000           push 0x400
// 00578bbd  6a01                 push 1
// 00578bbf  57                   push edi
// 00578bc0  ffd1                 call ecx
// 00578bc2  83c430               add esp, 0x30
// 00578bc5  89461c               mov dword ptr [esi + 0x1c], eax
// 00578bc8  33c0                 xor eax, eax
// 00578bca  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00578bd2  bf00af1dff           mov edi, 0xff1daf00
// 00578bd7  ba800b4dff           mov edx, 0xff4d0b80
// 00578bdc  b9008d2c00           mov ecx, 0x2c8d00
// 00578be1  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00578be4  8bda                 mov ebx, edx
// 00578be6  c1fb10               sar ebx, 0x10
// 00578be9  891c28               mov dword ptr [eax + ebp], ebx
// 00578bec  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00578bef  8bdf                 mov ebx, edi
// 00578bf1  c1fb10               sar ebx, 0x10
// 00578bf4  891c28               mov dword ptr [eax + ebp], ebx
// 00578bf7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00578bfa  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00578bfe  891c28               mov dword ptr [eax + ebp], ebx
// 00578c01  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00578c04  890c28               mov dword ptr [eax + ebp], ecx
// 00578c07  81ebd2b60000         sub ebx, 0xb6d2
// 00578c0d  81e91a580000         sub ecx, 0x581a
// 00578c13  81c2e9660100         add edx, 0x166e9
// 00578c19  81c7a2c50100         add edi, 0x1c5a2
// 00578c1f  83c004               add eax, 4
// 00578c22  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00578c28  895c2410             mov dword ptr [esp + 0x10], ebx
// 00578c2c  7db3                 jge 0x578be1
// 00578c2e  5f                   pop edi
// 00578c2f  5e                   pop esi
// 00578c30  5d                   pop ebp
// 00578c31  5b                   pop ebx
// 00578c32  59                   pop ecx
// 00578c33  c3                   ret 
// library jpeg-6b/jdmerge.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
