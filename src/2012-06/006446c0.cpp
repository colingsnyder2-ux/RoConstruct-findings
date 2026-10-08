// from server: 100% by auto
// roc 2012-06 006446c0  unit: seg_00640000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006446c0
//
// 006446c0  8b442408             mov eax, dword ptr [esp + 8]
// 006446c4  53                   push ebx
// 006446c5  55                   push ebp
// 006446c6  56                   push esi
// 006446c7  8b742410             mov esi, dword ptr [esp + 0x10]
// 006446cb  33db                 xor ebx, ebx
// 006446cd  57                   push edi
// 006446ce  895e04               mov dword ptr [esi + 4], ebx
// 006446d1  83f83e               cmp eax, 0x3e
// 006446d4  7421                 je 0x6446f7
// 006446d6  8b0e                 mov ecx, dword ptr [esi]
// 006446d8  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 006446df  8b16                 mov edx, dword ptr [esi]
// 006446e1  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 006446e8  8b0e                 mov ecx, dword ptr [esi]
// 006446ea  89411c               mov dword ptr [ecx + 0x1c], eax
// 006446ed  8b16                 mov edx, dword ptr [esi]
// 006446ef  8b02                 mov eax, dword ptr [edx]
// 006446f1  56                   push esi
// 006446f2  ffd0                 call eax
// 006446f4  83c404               add esp, 4
// 006446f7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006446fb  3d68010000           cmp eax, 0x168
// 00644700  7421                 je 0x644723
// 00644702  8b0e                 mov ecx, dword ptr [esi]
// 00644704  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 0064470b  8b16                 mov edx, dword ptr [esi]
// 0064470d  c7421868010000       mov dword ptr [edx + 0x18], 0x168
// 00644714  8b0e                 mov ecx, dword ptr [esi]
// 00644716  89411c               mov dword ptr [ecx + 0x1c], eax
// 00644719  8b16                 mov edx, dword ptr [esi]
// 0064471b  8b02                 mov eax, dword ptr [edx]
// 0064471d  56                   push esi
// 0064471e  ffd0                 call eax
// 00644720  83c404               add esp, 4
// 00644723  8b3e                 mov edi, dword ptr [esi]
// 00644725  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00644728  6868010000           push 0x168
// 0064472d  53                   push ebx
// 0064472e  56                   push esi
// 0064472f  e840ec3300           call 0x983374
// 00644734  56                   push esi
// 00644735  893e                 mov dword ptr [esi], edi
// 00644737  896e0c               mov dword ptr [esi + 0xc], ebp
// 0064473a  885e10               mov byte ptr [esi + 0x10], bl
// 0064473d  e86e010100           call 0x6548b0
// 00644742  d9e8                 fld1 
// 00644744  895e08               mov dword ptr [esi + 8], ebx
// 00644747  895e18               mov dword ptr [esi + 0x18], ebx
// 0064474a  895e44               mov dword ptr [esi + 0x44], ebx
// 0064474d  895e48               mov dword ptr [esi + 0x48], ebx
// 00644750  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00644753  895e50               mov dword ptr [esi + 0x50], ebx
// 00644756  895e54               mov dword ptr [esi + 0x54], ebx
// 00644759  83c410               add esp, 0x10
// 0064475c  895e58               mov dword ptr [esi + 0x58], ebx
// 0064475f  895e68               mov dword ptr [esi + 0x68], ebx
// 00644762  895e5c               mov dword ptr [esi + 0x5c], ebx
// 00644765  895e6c               mov dword ptr [esi + 0x6c], ebx
// 00644768  895e60               mov dword ptr [esi + 0x60], ebx
// 0064476b  895e70               mov dword ptr [esi + 0x70], ebx
// 0064476e  895e64               mov dword ptr [esi + 0x64], ebx
// 00644771  895e74               mov dword ptr [esi + 0x74], ebx
// 00644774  dd5e30               fstp qword ptr [esi + 0x30]
// 00644777  5f                   pop edi
// 00644778  899e60010000         mov dword ptr [esi + 0x160], ebx
// 0064477e  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00644785  5e                   pop esi
// 00644786  5d                   pop ebp
// 00644787  5b                   pop ebx
// 00644788  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_CreateCompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
