// roc 2007-03 00522f80  unit: seg_00520000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522f80
//
// 00522f80  51                   push ecx
// 00522f81  53                   push ebx
// 00522f82  55                   push ebp
// 00522f83  56                   push esi
// 00522f84  57                   push edi
// 00522f85  8bf8                 mov edi, eax
// 00522f87  8b4704               mov eax, dword ptr [edi + 4]
// 00522f8a  8b08                 mov ecx, dword ptr [eax]
// 00522f8c  8bb7a4010000         mov esi, dword ptr [edi + 0x1a4]
// 00522f92  6800040000           push 0x400
// 00522f97  6a01                 push 1
// 00522f99  57                   push edi
// 00522f9a  ffd1                 call ecx
// 00522f9c  894608               mov dword ptr [esi + 8], eax
// 00522f9f  8b5704               mov edx, dword ptr [edi + 4]
// 00522fa2  8b02                 mov eax, dword ptr [edx]
// 00522fa4  6800040000           push 0x400
// 00522fa9  6a01                 push 1
// 00522fab  57                   push edi
// 00522fac  ffd0                 call eax
// 00522fae  89460c               mov dword ptr [esi + 0xc], eax
// 00522fb1  8b4f04               mov ecx, dword ptr [edi + 4]
// 00522fb4  8b11                 mov edx, dword ptr [ecx]
// 00522fb6  6800040000           push 0x400
// 00522fbb  6a01                 push 1
// 00522fbd  57                   push edi
// 00522fbe  ffd2                 call edx
// 00522fc0  894610               mov dword ptr [esi + 0x10], eax
// 00522fc3  8b4704               mov eax, dword ptr [edi + 4]
// 00522fc6  8b08                 mov ecx, dword ptr [eax]
// 00522fc8  6800040000           push 0x400
// 00522fcd  6a01                 push 1
// 00522fcf  57                   push edi
// 00522fd0  ffd1                 call ecx
// 00522fd2  83c430               add esp, 0x30
// 00522fd5  894614               mov dword ptr [esi + 0x14], eax
// 00522fd8  33c0                 xor eax, eax
// 00522fda  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00522fe2  bf00af1dff           mov edi, 0xff1daf00
// 00522fe7  ba800b4dff           mov edx, 0xff4d0b80
// 00522fec  b9008d2c00           mov ecx, 0x2c8d00
// 00522ff1  8b6e08               mov ebp, dword ptr [esi + 8]
// 00522ff4  8bda                 mov ebx, edx
// 00522ff6  c1fb10               sar ebx, 0x10
// 00522ff9  891c28               mov dword ptr [eax + ebp], ebx
// 00522ffc  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00522fff  8bdf                 mov ebx, edi
// 00523001  c1fb10               sar ebx, 0x10
// 00523004  891c28               mov dword ptr [eax + ebp], ebx
// 00523007  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0052300a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052300e  891c28               mov dword ptr [eax + ebp], ebx
// 00523011  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 00523014  890c28               mov dword ptr [eax + ebp], ecx
// 00523017  81ebd2b60000         sub ebx, 0xb6d2
// 0052301d  81e91a580000         sub ecx, 0x581a
// 00523023  81c2e9660100         add edx, 0x166e9
// 00523029  81c7a2c50100         add edi, 0x1c5a2
// 0052302f  83c004               add eax, 4
// 00523032  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00523038  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052303c  7db3                 jge 0x522ff1
// 0052303e  5f                   pop edi
// 0052303f  5e                   pop esi
// 00523040  5d                   pop ebp
// 00523041  5b                   pop ebx
// 00523042  59                   pop ecx
// 00523043  c3                   ret 
// library jpeg-6b/jdcolor.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcolor.c
