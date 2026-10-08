// roc 2009-12 0060ab50  unit: seg_00600000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060ab50
//
// 0060ab50  8b442408             mov eax, dword ptr [esp + 8]
// 0060ab54  53                   push ebx
// 0060ab55  55                   push ebp
// 0060ab56  56                   push esi
// 0060ab57  8b742410             mov esi, dword ptr [esp + 0x10]
// 0060ab5b  33db                 xor ebx, ebx
// 0060ab5d  57                   push edi
// 0060ab5e  895e04               mov dword ptr [esi + 4], ebx
// 0060ab61  83f83e               cmp eax, 0x3e
// 0060ab64  7421                 je 0x60ab87
// 0060ab66  8b0e                 mov ecx, dword ptr [esi]
// 0060ab68  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 0060ab6f  8b16                 mov edx, dword ptr [esi]
// 0060ab71  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 0060ab78  8b0e                 mov ecx, dword ptr [esi]
// 0060ab7a  89411c               mov dword ptr [ecx + 0x1c], eax
// 0060ab7d  8b16                 mov edx, dword ptr [esi]
// 0060ab7f  8b02                 mov eax, dword ptr [edx]
// 0060ab81  56                   push esi
// 0060ab82  ffd0                 call eax
// 0060ab84  83c404               add esp, 4
// 0060ab87  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060ab8b  3d68010000           cmp eax, 0x168
// 0060ab90  7421                 je 0x60abb3
// 0060ab92  8b0e                 mov ecx, dword ptr [esi]
// 0060ab94  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 0060ab9b  8b16                 mov edx, dword ptr [esi]
// 0060ab9d  c7421868010000       mov dword ptr [edx + 0x18], 0x168
// 0060aba4  8b0e                 mov ecx, dword ptr [esi]
// 0060aba6  89411c               mov dword ptr [ecx + 0x1c], eax
// 0060aba9  8b16                 mov edx, dword ptr [esi]
// 0060abab  8b02                 mov eax, dword ptr [edx]
// 0060abad  56                   push esi
// 0060abae  ffd0                 call eax
// 0060abb0  83c404               add esp, 4
// 0060abb3  8b3e                 mov edi, dword ptr [esi]
// 0060abb5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0060abb8  6868010000           push 0x168
// 0060abbd  53                   push ebx
// 0060abbe  56                   push esi
// 0060abbf  e8e09e1e00           call 0x7f4aa4
// 0060abc4  56                   push esi
// 0060abc5  893e                 mov dword ptr [esi], edi
// 0060abc7  896e0c               mov dword ptr [esi + 0xc], ebp
// 0060abca  885e10               mov byte ptr [esi + 0x10], bl
// 0060abcd  e87ea60000           call 0x615250
// 0060abd2  d9e8                 fld1 
// 0060abd4  895e08               mov dword ptr [esi + 8], ebx
// 0060abd7  895e18               mov dword ptr [esi + 0x18], ebx
// 0060abda  895e44               mov dword ptr [esi + 0x44], ebx
// 0060abdd  895e48               mov dword ptr [esi + 0x48], ebx
// 0060abe0  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0060abe3  895e50               mov dword ptr [esi + 0x50], ebx
// 0060abe6  895e54               mov dword ptr [esi + 0x54], ebx
// 0060abe9  83c410               add esp, 0x10
// 0060abec  895e58               mov dword ptr [esi + 0x58], ebx
// 0060abef  895e68               mov dword ptr [esi + 0x68], ebx
// 0060abf2  895e5c               mov dword ptr [esi + 0x5c], ebx
// 0060abf5  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0060abf8  895e60               mov dword ptr [esi + 0x60], ebx
// 0060abfb  895e70               mov dword ptr [esi + 0x70], ebx
// 0060abfe  895e64               mov dword ptr [esi + 0x64], ebx
// 0060ac01  895e74               mov dword ptr [esi + 0x74], ebx
// 0060ac04  dd5e30               fstp qword ptr [esi + 0x30]
// 0060ac07  5f                   pop edi
// 0060ac08  899e60010000         mov dword ptr [esi + 0x160], ebx
// 0060ac0e  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 0060ac15  5e                   pop esi
// 0060ac16  5d                   pop ebp
// 0060ac17  5b                   pop ebx
// 0060ac18  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_CreateCompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
