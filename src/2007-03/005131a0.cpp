// roc 2007-03 005131a0  unit: seg_00510000  size: 275 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005131a0
//
// 005131a0  56                   push esi
// 005131a1  8b742408             mov esi, dword ptr [esp + 8]
// 005131a5  8b4614               mov eax, dword ptr [esi + 0x14]
// 005131a8  83f865               cmp eax, 0x65
// 005131ab  7421                 je 0x5131ce
// 005131ad  83f866               cmp eax, 0x66
// 005131b0  741c                 je 0x5131ce
// 005131b2  83f867               cmp eax, 0x67
// 005131b5  7444                 je 0x5131fb
// 005131b7  8b06                 mov eax, dword ptr [esi]
// 005131b9  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005131c0  8b0e                 mov ecx, dword ptr [esi]
// 005131c2  8b5614               mov edx, dword ptr [esi + 0x14]
// 005131c5  895118               mov dword ptr [ecx + 0x18], edx
// 005131c8  8b06                 mov eax, dword ptr [esi]
// 005131ca  8b08                 mov ecx, dword ptr [eax]
// 005131cc  eb27                 jmp 0x5131f5
// 005131ce  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 005131d4  3b5620               cmp edx, dword ptr [esi + 0x20]
// 005131d7  7313                 jae 0x5131ec
// 005131d9  8b06                 mov eax, dword ptr [esi]
// 005131db  c7401443000000       mov dword ptr [eax + 0x14], 0x43
// 005131e2  8b0e                 mov ecx, dword ptr [esi]
// 005131e4  8b11                 mov edx, dword ptr [ecx]
// 005131e6  56                   push esi
// 005131e7  ffd2                 call edx
// 005131e9  83c404               add esp, 4
// 005131ec  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 005131f2  8b4808               mov ecx, dword ptr [eax + 8]
// 005131f5  56                   push esi
// 005131f6  ffd1                 call ecx
// 005131f8  83c404               add esp, 4
// 005131fb  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00513201  80780d00             cmp byte ptr [eax + 0xd], 0
// 00513205  0f8588000000         jne 0x513293
// 0051320b  53                   push ebx
// 0051320c  57                   push edi
// 0051320d  bb18000000           mov ebx, 0x18
// 00513212  8b10                 mov edx, dword ptr [eax]
// 00513214  56                   push esi
// 00513215  ffd2                 call edx
// 00513217  33ff                 xor edi, edi
// 00513219  83c404               add esp, 4
// 0051321c  39bee0000000         cmp dword ptr [esi + 0xe0], edi
// 00513222  7652                 jbe 0x513276
// 00513224  837e0800             cmp dword ptr [esi + 8], 0
// 00513228  741d                 je 0x513247
// 0051322a  8b4608               mov eax, dword ptr [esi + 8]
// 0051322d  897804               mov dword ptr [eax + 4], edi
// 00513230  8b4e08               mov ecx, dword ptr [esi + 8]
// 00513233  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 00513239  895108               mov dword ptr [ecx + 8], edx
// 0051323c  8b4608               mov eax, dword ptr [esi + 8]
// 0051323f  8b08                 mov ecx, dword ptr [eax]
// 00513241  56                   push esi
// 00513242  ffd1                 call ecx
// 00513244  83c404               add esp, 4
// 00513247  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0051324d  8b4204               mov eax, dword ptr [edx + 4]
// 00513250  6a00                 push 0
// 00513252  56                   push esi
// 00513253  ffd0                 call eax
// 00513255  83c408               add esp, 8
// 00513258  84c0                 test al, al
// 0051325a  750f                 jne 0x51326b
// 0051325c  8b0e                 mov ecx, dword ptr [esi]
// 0051325e  895914               mov dword ptr [ecx + 0x14], ebx
// 00513261  8b16                 mov edx, dword ptr [esi]
// 00513263  8b02                 mov eax, dword ptr [edx]
// 00513265  56                   push esi
// 00513266  ffd0                 call eax
// 00513268  83c404               add esp, 4
// 0051326b  83c701               add edi, 1
// 0051326e  3bbee0000000         cmp edi, dword ptr [esi + 0xe0]
// 00513274  72ae                 jb 0x513224
// 00513276  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 0051327c  8b5108               mov edx, dword ptr [ecx + 8]
// 0051327f  56                   push esi
// 00513280  ffd2                 call edx
// 00513282  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 00513288  83c404               add esp, 4
// 0051328b  80780d00             cmp byte ptr [eax + 0xd], 0
// 0051328f  7481                 je 0x513212
// 00513291  5f                   pop edi
// 00513292  5b                   pop ebx
// 00513293  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 00513299  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0051329c  56                   push esi
// 0051329d  ffd1                 call ecx
// 0051329f  8b5618               mov edx, dword ptr [esi + 0x18]
// 005132a2  8b4210               mov eax, dword ptr [edx + 0x10]
// 005132a5  56                   push esi
// 005132a6  ffd0                 call eax
// 005132a8  56                   push esi
// 005132a9  e8e21b0000           call 0x514e90
// 005132ae  83c40c               add esp, 0xc
// 005132b1  5e                   pop esi
// 005132b2  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_finish_compress)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
