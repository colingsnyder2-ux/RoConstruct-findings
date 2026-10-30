// from server: 100% by auto
// roc 2008-06 00534460  unit: seg_00530000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534460
//
// 00534460  51                   push ecx
// 00534461  53                   push ebx
// 00534462  55                   push ebp
// 00534463  56                   push esi
// 00534464  57                   push edi
// 00534465  8bf8                 mov edi, eax
// 00534467  8b4704               mov eax, dword ptr [edi + 4]
// 0053446a  8b08                 mov ecx, dword ptr [eax]
// 0053446c  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 00534472  6800040000           push 0x400
// 00534477  6a01                 push 1
// 00534479  57                   push edi
// 0053447a  ffd1                 call ecx
// 0053447c  894608               mov dword ptr [esi + 8], eax
// 0053447f  8b5704               mov edx, dword ptr [edi + 4]
// 00534482  8b02                 mov eax, dword ptr [edx]
// 00534484  6800040000           push 0x400
// 00534489  6a01                 push 1
// 0053448b  57                   push edi
// 0053448c  ffd0                 call eax
// 0053448e  89460c               mov dword ptr [esi + 0xc], eax
// 00534491  8b4f04               mov ecx, dword ptr [edi + 4]
// 00534494  8b11                 mov edx, dword ptr [ecx]
// 00534496  6800040000           push 0x400
// 0053449b  6a01                 push 1
// 0053449d  57                   push edi
// 0053449e  ffd2                 call edx
// 005344a0  894610               mov dword ptr [esi + 0x10], eax
// 005344a3  8b4704               mov eax, dword ptr [edi + 4]
// 005344a6  8b08                 mov ecx, dword ptr [eax]
// 005344a8  6800040000           push 0x400
// 005344ad  6a01                 push 1
// 005344af  57                   push edi
// 005344b0  ffd1                 call ecx
// 005344b2  83c430               add esp, 0x30
// 005344b5  894614               mov dword ptr [esi + 0x14], eax
// 005344b8  33c0                 xor eax, eax
// 005344ba  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 005344c2  bf00af1dff           mov edi, 0xff1daf00
// 005344c7  ba800b4dff           mov edx, 0xff4d0b80
// 005344cc  b9008d2c00           mov ecx, 0x2c8d00
// 005344d1  8b6e08               mov ebp, dword ptr [esi + 8]
// 005344d4  8bda                 mov ebx, edx
// 005344d6  c1fb10               sar ebx, 0x10
// 005344d9  891c28               mov dword ptr [eax + ebp], ebx
// 005344dc  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005344df  8bdf                 mov ebx, edi
// 005344e1  c1fb10               sar ebx, 0x10
// 005344e4  891c28               mov dword ptr [eax + ebp], ebx
// 005344e7  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 005344ea  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005344ee  891c28               mov dword ptr [eax + ebp], ebx
// 005344f1  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 005344f4  890c28               mov dword ptr [eax + ebp], ecx
// 005344f7  81ebd2b60000         sub ebx, 0xb6d2
// 005344fd  81e91a580000         sub ecx, 0x581a
// 00534503  81c2e9660100         add edx, 0x166e9
// 00534509  81c7a2c50100         add edi, 0x1c5a2
// 0053450f  83c004               add eax, 4
// 00534512  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00534518  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053451c  7db3                 jge 0x5344d1
// 0053451e  5f                   pop edi
// 0053451f  5e                   pop esi
// 00534520  5d                   pop ebp
// 00534521  5b                   pop ebx
// 00534522  59                   pop ecx
// 00534523  c3                   ret 
// library jpeg-6b/jdcolor.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
