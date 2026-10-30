// roc 2007-03 00513060  unit: seg_00510000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00513060
//
// 00513060  8b442408             mov eax, dword ptr [esp + 8]
// 00513064  53                   push ebx
// 00513065  55                   push ebp
// 00513066  56                   push esi
// 00513067  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051306b  33db                 xor ebx, ebx
// 0051306d  83f83e               cmp eax, 0x3e
// 00513070  57                   push edi
// 00513071  895e04               mov dword ptr [esi + 4], ebx
// 00513074  7421                 je 0x513097
// 00513076  8b0e                 mov ecx, dword ptr [esi]
// 00513078  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 0051307f  8b16                 mov edx, dword ptr [esi]
// 00513081  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00513088  8b0e                 mov ecx, dword ptr [esi]
// 0051308a  89411c               mov dword ptr [ecx + 0x1c], eax
// 0051308d  8b16                 mov edx, dword ptr [esi]
// 0051308f  8b02                 mov eax, dword ptr [edx]
// 00513091  56                   push esi
// 00513092  ffd0                 call eax
// 00513094  83c404               add esp, 4
// 00513097  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0051309b  3d68010000           cmp eax, 0x168
// 005130a0  7421                 je 0x5130c3
// 005130a2  8b0e                 mov ecx, dword ptr [esi]
// 005130a4  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 005130ab  8b16                 mov edx, dword ptr [esi]
// 005130ad  c7421868010000       mov dword ptr [edx + 0x18], 0x168
// 005130b4  8b0e                 mov ecx, dword ptr [esi]
// 005130b6  89411c               mov dword ptr [ecx + 0x1c], eax
// 005130b9  8b16                 mov edx, dword ptr [esi]
// 005130bb  8b02                 mov eax, dword ptr [edx]
// 005130bd  56                   push esi
// 005130be  ffd0                 call eax
// 005130c0  83c404               add esp, 4
// 005130c3  8b3e                 mov edi, dword ptr [esi]
// 005130c5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 005130c8  6868010000           push 0x168
// 005130cd  53                   push ebx
// 005130ce  56                   push esi
// 005130cf  e848bf1000           call 0x61f01c
// 005130d4  56                   push esi
// 005130d5  893e                 mov dword ptr [esi], edi
// 005130d7  896e0c               mov dword ptr [esi + 0xc], ebp
// 005130da  885e10               mov byte ptr [esi + 0x10], bl
// 005130dd  e86e700000           call 0x51a150
// 005130e2  d9e8                 fld1 
// 005130e4  895e08               mov dword ptr [esi + 8], ebx
// 005130e7  895e18               mov dword ptr [esi + 0x18], ebx
// 005130ea  895e44               mov dword ptr [esi + 0x44], ebx
// 005130ed  895e48               mov dword ptr [esi + 0x48], ebx
// 005130f0  895e4c               mov dword ptr [esi + 0x4c], ebx
// 005130f3  895e50               mov dword ptr [esi + 0x50], ebx
// 005130f6  895e54               mov dword ptr [esi + 0x54], ebx
// 005130f9  83c410               add esp, 0x10
// 005130fc  895e58               mov dword ptr [esi + 0x58], ebx
// 005130ff  895e68               mov dword ptr [esi + 0x68], ebx
// 00513102  895e5c               mov dword ptr [esi + 0x5c], ebx
// 00513105  895e6c               mov dword ptr [esi + 0x6c], ebx
// 00513108  895e60               mov dword ptr [esi + 0x60], ebx
// 0051310b  895e70               mov dword ptr [esi + 0x70], ebx
// 0051310e  895e64               mov dword ptr [esi + 0x64], ebx
// 00513111  895e74               mov dword ptr [esi + 0x74], ebx
// 00513114  dd5e30               fstp qword ptr [esi + 0x30]
// 00513117  5f                   pop edi
// 00513118  899e60010000         mov dword ptr [esi + 0x160], ebx
// 0051311e  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00513125  5e                   pop esi
// 00513126  5d                   pop ebp
// 00513127  5b                   pop ebx
// 00513128  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_CreateCompress)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
