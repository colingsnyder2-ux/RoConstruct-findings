// roc 2011-06 00557840  unit: seg_00550000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557840
//
// 00557840  8b442408             mov eax, dword ptr [esp + 8]
// 00557844  53                   push ebx
// 00557845  55                   push ebp
// 00557846  56                   push esi
// 00557847  8b742410             mov esi, dword ptr [esp + 0x10]
// 0055784b  33db                 xor ebx, ebx
// 0055784d  57                   push edi
// 0055784e  895e04               mov dword ptr [esi + 4], ebx
// 00557851  83f83e               cmp eax, 0x3e
// 00557854  7421                 je 0x557877
// 00557856  8b0e                 mov ecx, dword ptr [esi]
// 00557858  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 0055785f  8b16                 mov edx, dword ptr [esi]
// 00557861  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00557868  8b0e                 mov ecx, dword ptr [esi]
// 0055786a  89411c               mov dword ptr [ecx + 0x1c], eax
// 0055786d  8b16                 mov edx, dword ptr [esi]
// 0055786f  8b02                 mov eax, dword ptr [edx]
// 00557871  56                   push esi
// 00557872  ffd0                 call eax
// 00557874  83c404               add esp, 4
// 00557877  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055787b  3d68010000           cmp eax, 0x168
// 00557880  7421                 je 0x5578a3
// 00557882  8b0e                 mov ecx, dword ptr [esi]
// 00557884  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 0055788b  8b16                 mov edx, dword ptr [esi]
// 0055788d  c7421868010000       mov dword ptr [edx + 0x18], 0x168
// 00557894  8b0e                 mov ecx, dword ptr [esi]
// 00557896  89411c               mov dword ptr [ecx + 0x1c], eax
// 00557899  8b16                 mov edx, dword ptr [esi]
// 0055789b  8b02                 mov eax, dword ptr [edx]
// 0055789d  56                   push esi
// 0055789e  ffd0                 call eax
// 005578a0  83c404               add esp, 4
// 005578a3  8b3e                 mov edi, dword ptr [esi]
// 005578a5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005578a8  6868010000           push 0x168
// 005578ad  53                   push ebx
// 005578ae  56                   push esi
// 005578af  e8303a2b00           call 0x80b2e4
// 005578b4  56                   push esi
// 005578b5  893e                 mov dword ptr [esi], edi
// 005578b7  896e0c               mov dword ptr [esi + 0xc], ebp
// 005578ba  885e10               mov byte ptr [esi + 0x10], bl
// 005578bd  e8de180100           call 0x5691a0
// 005578c2  d9e8                 fld1 
// 005578c4  895e08               mov dword ptr [esi + 8], ebx
// 005578c7  895e18               mov dword ptr [esi + 0x18], ebx
// 005578ca  895e44               mov dword ptr [esi + 0x44], ebx
// 005578cd  895e48               mov dword ptr [esi + 0x48], ebx
// 005578d0  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005578d3  895e50               mov dword ptr [esi + 0x50], ebx
// 005578d6  895e54               mov dword ptr [esi + 0x54], ebx
// 005578d9  83c410               add esp, 0x10
// 005578dc  895e58               mov dword ptr [esi + 0x58], ebx
// 005578df  895e68               mov dword ptr [esi + 0x68], ebx
// 005578e2  895e5c               mov dword ptr [esi + 0x5c], ebx
// 005578e5  895e6c               mov dword ptr [esi + 0x6c], ebx
// 005578e8  895e60               mov dword ptr [esi + 0x60], ebx
// 005578eb  895e70               mov dword ptr [esi + 0x70], ebx
// 005578ee  895e64               mov dword ptr [esi + 0x64], ebx
// 005578f1  895e74               mov dword ptr [esi + 0x74], ebx
// 005578f4  dd5e30               fstp qword ptr [esi + 0x30]
// 005578f7  5f                   pop edi
// 005578f8  899e60010000         mov dword ptr [esi + 0x160], ebx
// 005578fe  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00557905  5e                   pop esi
// 00557906  5d                   pop ebp
// 00557907  5b                   pop ebx
// 00557908  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_CreateCompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
