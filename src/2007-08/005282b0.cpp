// roc 2007-08 005282b0  unit: seg_00520000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005282b0
//
// 005282b0  51                   push ecx
// 005282b1  53                   push ebx
// 005282b2  55                   push ebp
// 005282b3  56                   push esi
// 005282b4  57                   push edi
// 005282b5  8bf8                 mov edi, eax
// 005282b7  8b4704               mov eax, dword ptr [edi + 4]
// 005282ba  8b08                 mov ecx, dword ptr [eax]
// 005282bc  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 005282c2  6800040000           push 0x400
// 005282c7  6a01                 push 1
// 005282c9  57                   push edi
// 005282ca  ffd1                 call ecx
// 005282cc  894608               mov dword ptr [esi + 8], eax
// 005282cf  8b5704               mov edx, dword ptr [edi + 4]
// 005282d2  8b02                 mov eax, dword ptr [edx]
// 005282d4  6800040000           push 0x400
// 005282d9  6a01                 push 1
// 005282db  57                   push edi
// 005282dc  ffd0                 call eax
// 005282de  89460c               mov dword ptr [esi + 0xc], eax
// 005282e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005282e4  8b11                 mov edx, dword ptr [ecx]
// 005282e6  6800040000           push 0x400
// 005282eb  6a01                 push 1
// 005282ed  57                   push edi
// 005282ee  ffd2                 call edx
// 005282f0  894610               mov dword ptr [esi + 0x10], eax
// 005282f3  8b4704               mov eax, dword ptr [edi + 4]
// 005282f6  8b08                 mov ecx, dword ptr [eax]
// 005282f8  6800040000           push 0x400
// 005282fd  6a01                 push 1
// 005282ff  57                   push edi
// 00528300  ffd1                 call ecx
// 00528302  83c430               add esp, 0x30
// 00528305  894614               mov dword ptr [esi + 0x14], eax
// 00528308  33c0                 xor eax, eax
// 0052830a  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00528312  bf00af1dff           mov edi, 0xff1daf00
// 00528317  ba800b4dff           mov edx, 0xff4d0b80
// 0052831c  b9008d2c00           mov ecx, 0x2c8d00
// 00528321  8b6e08               mov ebp, dword ptr [esi + 8]
// 00528324  8bda                 mov ebx, edx
// 00528326  c1fb10               sar ebx, 0x10
// 00528329  891c28               mov dword ptr [eax + ebp], ebx
// 0052832c  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0052832f  8bdf                 mov ebx, edi
// 00528331  c1fb10               sar ebx, 0x10
// 00528334  891c28               mov dword ptr [eax + ebp], ebx
// 00528337  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0052833a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052833e  891c28               mov dword ptr [eax + ebp], ebx
// 00528341  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00528344  890c28               mov dword ptr [eax + ebp], ecx
// 00528347  81ebd2b60000         sub ebx, 0xb6d2
// 0052834d  81e91a580000         sub ecx, 0x581a
// 00528353  81c2e9660100         add edx, 0x166e9
// 00528359  81c7a2c50100         add edi, 0x1c5a2
// 0052835f  83c004               add eax, 4
// 00528362  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00528368  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052836c  7db3                 jge 0x528321
// 0052836e  5f                   pop edi
// 0052836f  5e                   pop esi
// 00528370  5d                   pop ebp
// 00528371  5b                   pop ebx
// 00528372  59                   pop ecx
// 00528373  c3                   ret 
// library jpeg-6b/jdcolor.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
