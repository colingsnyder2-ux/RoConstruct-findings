// roc 2007-03 00523580  unit: seg_00520000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00523580
//
// 00523580  51                   push ecx
// 00523581  53                   push ebx
// 00523582  55                   push ebp
// 00523583  56                   push esi
// 00523584  57                   push edi
// 00523585  8bf8                 mov edi, eax
// 00523587  8b4704               mov eax, dword ptr [edi + 4]
// 0052358a  8b08                 mov ecx, dword ptr [eax]
// 0052358c  8bb7a0010000         mov esi, dword ptr [edi + 0x1a0]
// 00523592  6800040000           push 0x400
// 00523597  6a01                 push 1
// 00523599  57                   push edi
// 0052359a  ffd1                 call ecx
// 0052359c  894610               mov dword ptr [esi + 0x10], eax
// 0052359f  8b5704               mov edx, dword ptr [edi + 4]
// 005235a2  8b02                 mov eax, dword ptr [edx]
// 005235a4  6800040000           push 0x400
// 005235a9  6a01                 push 1
// 005235ab  57                   push edi
// 005235ac  ffd0                 call eax
// 005235ae  894614               mov dword ptr [esi + 0x14], eax
// 005235b1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005235b4  8b11                 mov edx, dword ptr [ecx]
// 005235b6  6800040000           push 0x400
// 005235bb  6a01                 push 1
// 005235bd  57                   push edi
// 005235be  ffd2                 call edx
// 005235c0  894618               mov dword ptr [esi + 0x18], eax
// 005235c3  8b4704               mov eax, dword ptr [edi + 4]
// 005235c6  8b08                 mov ecx, dword ptr [eax]
// 005235c8  6800040000           push 0x400
// 005235cd  6a01                 push 1
// 005235cf  57                   push edi
// 005235d0  ffd1                 call ecx
// 005235d2  83c430               add esp, 0x30
// 005235d5  89461c               mov dword ptr [esi + 0x1c], eax
// 005235d8  33c0                 xor eax, eax
// 005235da  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 005235e2  bf00af1dff           mov edi, 0xff1daf00
// 005235e7  ba800b4dff           mov edx, 0xff4d0b80
// 005235ec  b9008d2c00           mov ecx, 0x2c8d00
// 005235f1  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 005235f4  8bda                 mov ebx, edx
// 005235f6  c1fb10               sar ebx, 0x10
// 005235f9  891c28               mov dword ptr [eax + ebp], ebx
// 005235fc  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 005235ff  8bdf                 mov ebx, edi
// 00523601  c1fb10               sar ebx, 0x10
// 00523604  891c28               mov dword ptr [eax + ebp], ebx
// 00523607  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0052360a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052360e  891c28               mov dword ptr [eax + ebp], ebx
// 00523611  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00523614  890c28               mov dword ptr [eax + ebp], ecx
// 00523617  81ebd2b60000         sub ebx, 0xb6d2
// 0052361d  81e91a580000         sub ecx, 0x581a
// 00523623  81c2e9660100         add edx, 0x166e9
// 00523629  81c7a2c50100         add edi, 0x1c5a2
// 0052362f  83c004               add eax, 4
// 00523632  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00523638  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052363c  7db3                 jge 0x5235f1
// 0052363e  5f                   pop edi
// 0052363f  5e                   pop esi
// 00523640  5d                   pop ebp
// 00523641  5b                   pop ebx
// 00523642  59                   pop ecx
// 00523643  c3                   ret 
// library jpeg-6b/jdmerge.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
