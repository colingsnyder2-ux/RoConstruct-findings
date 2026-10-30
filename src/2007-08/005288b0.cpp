// from server: 100% by auto
// roc 2007-08 005288b0  unit: seg_00520000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005288b0
//
// 005288b0  51                   push ecx
// 005288b1  53                   push ebx
// 005288b2  55                   push ebp
// 005288b3  56                   push esi
// 005288b4  57                   push edi
// 005288b5  8bf8                 mov edi, eax
// 005288b7  8b4704               mov eax, dword ptr [edi + 4]
// 005288ba  8b08                 mov ecx, dword ptr [eax]
// 005288bc  8bb7a0010000         mov esi, dword ptr [edi + 0x1a0]
// 005288c2  6800040000           push 0x400
// 005288c7  6a01                 push 1
// 005288c9  57                   push edi
// 005288ca  ffd1                 call ecx
// 005288cc  894610               mov dword ptr [esi + 0x10], eax
// 005288cf  8b5704               mov edx, dword ptr [edi + 4]
// 005288d2  8b02                 mov eax, dword ptr [edx]
// 005288d4  6800040000           push 0x400
// 005288d9  6a01                 push 1
// 005288db  57                   push edi
// 005288dc  ffd0                 call eax
// 005288de  894614               mov dword ptr [esi + 0x14], eax
// 005288e1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005288e4  8b11                 mov edx, dword ptr [ecx]
// 005288e6  6800040000           push 0x400
// 005288eb  6a01                 push 1
// 005288ed  57                   push edi
// 005288ee  ffd2                 call edx
// 005288f0  894618               mov dword ptr [esi + 0x18], eax
// 005288f3  8b4704               mov eax, dword ptr [edi + 4]
// 005288f6  8b08                 mov ecx, dword ptr [eax]
// 005288f8  6800040000           push 0x400
// 005288fd  6a01                 push 1
// 005288ff  57                   push edi
// 00528900  ffd1                 call ecx
// 00528902  83c430               add esp, 0x30
// 00528905  89461c               mov dword ptr [esi + 0x1c], eax
// 00528908  33c0                 xor eax, eax
// 0052890a  c744241000695b00     mov dword ptr [esp + 0x10], 0x5b6900
// 00528912  bf00af1dff           mov edi, 0xff1daf00
// 00528917  ba800b4dff           mov edx, 0xff4d0b80
// 0052891c  b9008d2c00           mov ecx, 0x2c8d00
// 00528921  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 00528924  8bda                 mov ebx, edx
// 00528926  c1fb10               sar ebx, 0x10
// 00528929  891c28               mov dword ptr [eax + ebp], ebx
// 0052892c  8b6e14               mov ebp, dword ptr [esi + 0x14]
// 0052892f  8bdf                 mov ebx, edi
// 00528931  c1fb10               sar ebx, 0x10
// 00528934  891c28               mov dword ptr [eax + ebp], ebx
// 00528937  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 0052893a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052893e  891c28               mov dword ptr [eax + ebp], ebx
// 00528941  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00528944  890c28               mov dword ptr [eax + ebp], ecx
// 00528947  81ebd2b60000         sub ebx, 0xb6d2
// 0052894d  81e91a580000         sub ecx, 0x581a
// 00528953  81c2e9660100         add edx, 0x166e9
// 00528959  81c7a2c50100         add edi, 0x1c5a2
// 0052895f  83c004               add eax, 4
// 00528962  81f91acbd4ff         cmp ecx, 0xffd4cb1a
// 00528968  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052896c  7db3                 jge 0x528921
// 0052896e  5f                   pop edi
// 0052896f  5e                   pop esi
// 00528970  5d                   pop ebp
// 00528971  5b                   pop ebx
// 00528972  59                   pop ecx
// 00528973  c3                   ret 
// library jpeg-6b/jdmerge.c (function _build_ycc_rgb_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
