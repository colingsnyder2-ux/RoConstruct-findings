// roc 2009-12 00620d60  unit: seg_00620000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00620d60
//
// 00620d60  51                   push ecx
// 00620d61  53                   push ebx
// 00620d62  55                   push ebp
// 00620d63  56                   push esi
// 00620d64  57                   push edi
// 00620d65  8bf8                 mov edi, eax
// 00620d67  8b4704               mov eax, dword ptr [edi + 4]
// 00620d6a  8b08                 mov ecx, dword ptr [eax]
// 00620d6c  8bb7a0010000         mov esi, dword ptr [edi + 0x1a0]
// 00620d72  6800040000           push 0x400
// 00620d77  6a01                 push 1
// 00620d79  57                   push edi
// 00620d7a  ffd1                 call ecx
// 00620d7c  894610               mov dword ptr [esi + 0x10], eax
// 00620d7f  8b5704               mov edx, dword ptr [edi + 4]
// 00620d82  8b02                 mov eax, dword ptr [edx]
// 00620d84  6800040000           push 0x400
// 00620d89  6a01                 push 1
// 00620d8b  57                   push edi
// 00620d8c  ffd0                 call eax
// 00620d8e  894614               mov dword ptr [esi + 0x14], eax
// 00620d91  8b4f04               mov ecx, dword ptr [edi + 4]
// 00620d94  8b11                 mov edx, dword ptr [ecx]
// 00620d96  6800040000           push 0x400
// 00620d9b  6a01                 push 1
// 00620d9d  57                   push edi
// 00620d9e  ffd2                 call edx
// 00620da0  894618               mov dword ptr [esi + 0x18], eax
// 00620da3  8b4704               mov eax, dword ptr [edi + 4]
// 00620da6  8b08                 mov ecx, dword ptr [eax]
// 00620da8  6800040000           push 0x400
// 00620dad  6a01                 push 1
// 00620daf  57                   push edi
// 00620db0  ffd1                 call ecx
// 00620db2  83c430               add esp, 0x30
// 00620db5  89461c               mov dword ptr [esi + 0x1c], eax
// 00620db8  33c0                 xor eax, eax
// 00620dba  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00620dc2  bf00af1dff           mov edi, 0xff1daf00
// 00620dc7  ba800b4dff           mov edx, 0xff4d0b80
// 00620dcc  b9008d2c00           mov ecx, 0x2c8d00
// 00620dd1  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00620dd4  8bda                 mov ebx, edx
// 00620dd6  c1fb10               sar ebx, 0x10
// 00620dd9  891c28               mov dword ptr [eax + ebp], ebx
// 00620ddc  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00620ddf  8bdf                 mov ebx, edi
// 00620de1  c1fb10               sar ebx, 0x10
// 00620de4  891c28               mov dword ptr [eax + ebp], ebx
// 00620de7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00620dea  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00620dee  891c28               mov dword ptr [eax + ebp], ebx
// 00620df1  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00620df4  890c28               mov dword ptr [eax + ebp], ecx
// 00620df7  81ebd2b60000         sub ebx, 0xb6d2
// 00620dfd  81e91a580000         sub ecx, 0x581a
// 00620e03  81c2e9660100         add edx, 0x166e9
// 00620e09  81c7a2c50100         add edi, 0x1c5a2
// 00620e0f  83c004               add eax, 4
// 00620e12  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00620e18  895c2410             mov dword ptr [esp + 0x10], ebx
// 00620e1c  7db3                 jge 0x620dd1
// 00620e1e  5f                   pop edi
// 00620e1f  5e                   pop esi
// 00620e20  5d                   pop ebp
// 00620e21  5b                   pop ebx
// 00620e22  59                   pop ecx
// 00620e23  c3                   ret 
// library jpeg-6b/jdmerge.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
