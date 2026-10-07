// roc 2009-06 0059ed30  unit: seg_00590000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059ed30
//
// 0059ed30  51                   push ecx
// 0059ed31  53                   push ebx
// 0059ed32  55                   push ebp
// 0059ed33  56                   push esi
// 0059ed34  57                   push edi
// 0059ed35  8bf8                 mov edi, eax
// 0059ed37  8b4704               mov eax, dword ptr [edi + 4]
// 0059ed3a  8b08                 mov ecx, dword ptr [eax]
// 0059ed3c  8bb7a0010000         mov esi, dword ptr [edi + 0x1a0]
// 0059ed42  6800040000           push 0x400
// 0059ed47  6a01                 push 1
// 0059ed49  57                   push edi
// 0059ed4a  ffd1                 call ecx
// 0059ed4c  894610               mov dword ptr [esi + 0x10], eax
// 0059ed4f  8b5704               mov edx, dword ptr [edi + 4]
// 0059ed52  8b02                 mov eax, dword ptr [edx]
// 0059ed54  6800040000           push 0x400
// 0059ed59  6a01                 push 1
// 0059ed5b  57                   push edi
// 0059ed5c  ffd0                 call eax
// 0059ed5e  894614               mov dword ptr [esi + 0x14], eax
// 0059ed61  8b4f04               mov ecx, dword ptr [edi + 4]
// 0059ed64  8b11                 mov edx, dword ptr [ecx]
// 0059ed66  6800040000           push 0x400
// 0059ed6b  6a01                 push 1
// 0059ed6d  57                   push edi
// 0059ed6e  ffd2                 call edx
// 0059ed70  894618               mov dword ptr [esi + 0x18], eax
// 0059ed73  8b4704               mov eax, dword ptr [edi + 4]
// 0059ed76  8b08                 mov ecx, dword ptr [eax]
// 0059ed78  6800040000           push 0x400
// 0059ed7d  6a01                 push 1
// 0059ed7f  57                   push edi
// 0059ed80  ffd1                 call ecx
// 0059ed82  83c430               add esp, 0x30
// 0059ed85  89461c               mov dword ptr [esi + 0x1c], eax
// 0059ed88  33c0                 xor eax, eax
// 0059ed8a  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 0059ed92  bf00af1dff           mov edi, 0xff1daf00
// 0059ed97  ba800b4dff           mov edx, 0xff4d0b80
// 0059ed9c  b9008d2c00           mov ecx, 0x2c8d00
// 0059eda1  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0059eda4  8bda                 mov ebx, edx
// 0059eda6  c1fb10               sar ebx, 0x10
// 0059eda9  891c28               mov dword ptr [eax + ebp], ebx
// 0059edac  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0059edaf  8bdf                 mov ebx, edi
// 0059edb1  c1fb10               sar ebx, 0x10
// 0059edb4  891c28               mov dword ptr [eax + ebp], ebx
// 0059edb7  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0059edba  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0059edbe  891c28               mov dword ptr [eax + ebp], ebx
// 0059edc1  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 0059edc4  890c28               mov dword ptr [eax + ebp], ecx
// 0059edc7  81ebd2b60000         sub ebx, 0xb6d2
// 0059edcd  81e91a580000         sub ecx, 0x581a
// 0059edd3  81c2e9660100         add edx, 0x166e9
// 0059edd9  81c7a2c50100         add edi, 0x1c5a2
// 0059eddf  83c004               add eax, 4
// 0059ede2  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 0059ede8  895c2410             mov dword ptr [esp + 0x10], ebx
// 0059edec  7db3                 jge 0x59eda1
// 0059edee  5f                   pop edi
// 0059edef  5e                   pop esi
// 0059edf0  5d                   pop ebp
// 0059edf1  5b                   pop ebx
// 0059edf2  59                   pop ecx
// 0059edf3  c3                   ret 
// library jpeg-6b/jdmerge.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
