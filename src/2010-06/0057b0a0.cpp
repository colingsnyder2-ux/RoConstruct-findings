// from server: 100% by auto
// roc 2010-06 0057b0a0  unit: seg_00570000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b0a0
//
// 0057b0a0  51                   push ecx
// 0057b0a1  807c240c00           cmp byte ptr [esp + 0xc], 0
// 0057b0a6  53                   push ebx
// 0057b0a7  56                   push esi
// 0057b0a8  8bf0                 mov esi, eax
// 0057b0aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057b0ae  740d                 je 0x57b0bd
// 0057b0b0  8b5c8668             mov ebx, dword ptr [esi + eax*4 + 0x68]
// 0057b0b4  83c010               add eax, 0x10
// 0057b0b7  89442410             mov dword ptr [esp + 0x10], eax
// 0057b0bb  eb04                 jmp 0x57b0c1
// 0057b0bd  8b5c8658             mov ebx, dword ptr [esi + eax*4 + 0x58]
// 0057b0c1  895c2408             mov dword ptr [esp + 8], ebx
// 0057b0c5  85db                 test ebx, ebx
// 0057b0c7  751c                 jne 0x57b0e5
// 0057b0c9  8b0e                 mov ecx, dword ptr [esi]
// 0057b0cb  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057b0cf  c7411432000000       mov dword ptr [ecx + 0x14], 0x32
// 0057b0d6  8b16                 mov edx, dword ptr [esi]
// 0057b0d8  894218               mov dword ptr [edx + 0x18], eax
// 0057b0db  8b0e                 mov ecx, dword ptr [esi]
// 0057b0dd  8b11                 mov edx, dword ptr [ecx]
// 0057b0df  56                   push esi
// 0057b0e0  ffd2                 call edx
// 0057b0e2  83c404               add esp, 4
// 0057b0e5  80bb1101000000       cmp byte ptr [ebx + 0x111], 0
// 0057b0ec  0f850f010000         jne 0x57b201
// 0057b0f2  55                   push ebp
// 0057b0f3  57                   push edi
// 0057b0f4  68c4000000           push 0xc4
// 0057b0f9  e8e2fcffff           call 0x57ade0
// 0057b0fe  83c404               add esp, 4
// 0057b101  33ed                 xor ebp, ebp
// 0057b103  33ff                 xor edi, edi
// 0057b105  33d2                 xor edx, edx
// 0057b107  33c9                 xor ecx, ecx
// 0057b109  8d4302               lea eax, [ebx + 2]
// 0057b10c  c744241c04000000     mov dword ptr [esp + 0x1c], 4
// 0057b114  0fb658ff             movzx ebx, byte ptr [eax - 1]
// 0057b118  03eb                 add ebp, ebx
// 0057b11a  0fb618               movzx ebx, byte ptr [eax]
// 0057b11d  03cb                 add ecx, ebx
// 0057b11f  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0057b123  03d3                 add edx, ebx
// 0057b125  0fb65802             movzx ebx, byte ptr [eax + 2]
// 0057b129  03fb                 add edi, ebx
// 0057b12b  83c004               add eax, 4
// 0057b12e  836c241c01           sub dword ptr [esp + 0x1c], 1
// 0057b133  75df                 jne 0x57b114
// 0057b135  03fa                 add edi, edx
// 0057b137  03f9                 add edi, ecx
// 0057b139  03ef                 add ebp, edi
// 0057b13b  8d5d13               lea ebx, [ebp + 0x13]
// 0057b13e  e80dfdffff           call 0x57ae50
// 0057b143  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b146  8b08                 mov ecx, dword ptr [eax]
// 0057b148  8a542418             mov dl, byte ptr [esp + 0x18]
// 0057b14c  8811                 mov byte ptr [ecx], dl
// 0057b14e  ff00                 inc dword ptr [eax]
// 0057b150  834004ff             add dword ptr [eax + 4], -1
// 0057b154  7520                 jne 0x57b176
// 0057b156  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b159  56                   push esi
// 0057b15a  ffd0                 call eax
// 0057b15c  83c404               add esp, 4
// 0057b15f  84c0                 test al, al
// 0057b161  7513                 jne 0x57b176
// 0057b163  8b0e                 mov ecx, dword ptr [esi]
// 0057b165  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b16c  8b16                 mov edx, dword ptr [esi]
// 0057b16e  8b02                 mov eax, dword ptr [edx]
// 0057b170  56                   push esi
// 0057b171  ffd0                 call eax
// 0057b173  83c404               add esp, 4
// 0057b176  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057b17a  bf01000000           mov edi, 1
// 0057b17f  90                   nop 
// 0057b180  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b183  8a141f               mov dl, byte ptr [edi + ebx]
// 0057b186  8b08                 mov ecx, dword ptr [eax]
// 0057b188  8811                 mov byte ptr [ecx], dl
// 0057b18a  ff00                 inc dword ptr [eax]
// 0057b18c  834004ff             add dword ptr [eax + 4], -1
// 0057b190  7520                 jne 0x57b1b2
// 0057b192  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b195  56                   push esi
// 0057b196  ffd0                 call eax
// 0057b198  83c404               add esp, 4
// 0057b19b  84c0                 test al, al
// 0057b19d  7513                 jne 0x57b1b2
// 0057b19f  8b0e                 mov ecx, dword ptr [esi]
// 0057b1a1  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b1a8  8b16                 mov edx, dword ptr [esi]
// 0057b1aa  8b02                 mov eax, dword ptr [edx]
// 0057b1ac  56                   push esi
// 0057b1ad  ffd0                 call eax
// 0057b1af  83c404               add esp, 4
// 0057b1b2  47                   inc edi
// 0057b1b3  83ff10               cmp edi, 0x10
// 0057b1b6  7ec8                 jle 0x57b180
// 0057b1b8  33ff                 xor edi, edi
// 0057b1ba  85ed                 test ebp, ebp
// 0057b1bc  7e3a                 jle 0x57b1f8
// 0057b1be  8bff                 mov edi, edi
// 0057b1c0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b1c3  8a543b11             mov dl, byte ptr [ebx + edi + 0x11]
// 0057b1c7  8b08                 mov ecx, dword ptr [eax]
// 0057b1c9  8811                 mov byte ptr [ecx], dl
// 0057b1cb  ff00                 inc dword ptr [eax]
// 0057b1cd  834004ff             add dword ptr [eax + 4], -1
// 0057b1d1  7520                 jne 0x57b1f3
// 0057b1d3  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b1d6  56                   push esi
// 0057b1d7  ffd0                 call eax
// 0057b1d9  83c404               add esp, 4
// 0057b1dc  84c0                 test al, al
// 0057b1de  7513                 jne 0x57b1f3
// 0057b1e0  8b0e                 mov ecx, dword ptr [esi]
// 0057b1e2  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b1e9  8b16                 mov edx, dword ptr [esi]
// 0057b1eb  8b02                 mov eax, dword ptr [edx]
// 0057b1ed  56                   push esi
// 0057b1ee  ffd0                 call eax
// 0057b1f0  83c404               add esp, 4
// 0057b1f3  47                   inc edi
// 0057b1f4  3bfd                 cmp edi, ebp
// 0057b1f6  7cc8                 jl 0x57b1c0
// 0057b1f8  5f                   pop edi
// 0057b1f9  c6831101000001       mov byte ptr [ebx + 0x111], 1
// 0057b200  5d                   pop ebp
// 0057b201  5e                   pop esi
// 0057b202  5b                   pop ebx
// 0057b203  59                   pop ecx
// 0057b204  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dht)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
