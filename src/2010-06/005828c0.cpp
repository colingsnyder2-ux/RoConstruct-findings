// roc 2010-06 005828c0  unit: seg_00580000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005828c0
//
// 005828c0  51                   push ecx
// 005828c1  53                   push ebx
// 005828c2  55                   push ebp
// 005828c3  56                   push esi
// 005828c4  57                   push edi
// 005828c5  8bf8                 mov edi, eax
// 005828c7  8b4704               mov eax, dword ptr [edi + 4]
// 005828ca  8b08                 mov ecx, dword ptr [eax]
// 005828cc  8bb7a0010000         mov esi, dword ptr [edi + 0x1a0]
// 005828d2  6800040000           push 0x400
// 005828d7  6a01                 push 1
// 005828d9  57                   push edi
// 005828da  ffd1                 call ecx
// 005828dc  894610               mov dword ptr [esi + 0x10], eax
// 005828df  8b5704               mov edx, dword ptr [edi + 4]
// 005828e2  8b02                 mov eax, dword ptr [edx]
// 005828e4  6800040000           push 0x400
// 005828e9  6a01                 push 1
// 005828eb  57                   push edi
// 005828ec  ffd0                 call eax
// 005828ee  894614               mov dword ptr [esi + 0x14], eax
// 005828f1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005828f4  8b11                 mov edx, dword ptr [ecx]
// 005828f6  6800040000           push 0x400
// 005828fb  6a01                 push 1
// 005828fd  57                   push edi
// 005828fe  ffd2                 call edx
// 00582900  894618               mov dword ptr [esi + 0x18], eax
// 00582903  8b4704               mov eax, dword ptr [edi + 4]
// 00582906  8b08                 mov ecx, dword ptr [eax]
// 00582908  6800040000           push 0x400
// 0058290d  6a01                 push 1
// 0058290f  57                   push edi
// 00582910  ffd1                 call ecx
// 00582912  83c430               add esp, 0x30
// 00582915  89461c               mov dword ptr [esi + 0x1c], eax
// 00582918  33c0                 xor eax, eax
// 0058291a  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00582922  bf00af1dff           mov edi, 0xff1daf00
// 00582927  ba800b4dff           mov edx, 0xff4d0b80
// 0058292c  b9008d2c00           mov ecx, 0x2c8d00
// 00582931  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00582934  8bda                 mov ebx, edx
// 00582936  c1fb10               sar ebx, 0x10
// 00582939  891c28               mov dword ptr [eax + ebp], ebx
// 0058293c  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0058293f  8bdf                 mov ebx, edi
// 00582941  c1fb10               sar ebx, 0x10
// 00582944  891c28               mov dword ptr [eax + ebp], ebx
// 00582947  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0058294a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058294e  891c28               mov dword ptr [eax + ebp], ebx
// 00582951  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00582954  890c28               mov dword ptr [eax + ebp], ecx
// 00582957  81ebd2b60000         sub ebx, 0xb6d2
// 0058295d  81e91a580000         sub ecx, 0x581a
// 00582963  81c2e9660100         add edx, 0x166e9
// 00582969  81c7a2c50100         add edi, 0x1c5a2
// 0058296f  83c004               add eax, 4
// 00582972  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00582978  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058297c  7db3                 jge 0x582931
// 0058297e  5f                   pop edi
// 0058297f  5e                   pop esi
// 00582980  5d                   pop ebp
// 00582981  5b                   pop ebx
// 00582982  59                   pop ecx
// 00582983  c3                   ret 
// library jpeg-6b/jdmerge.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
