// from server: 100% by auto
// roc 2009-06 00588dc0  unit: seg_00580000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00588dc0
//
// 00588dc0  8b442408             mov eax, dword ptr [esp + 8]
// 00588dc4  53                   push ebx
// 00588dc5  55                   push ebp
// 00588dc6  56                   push esi
// 00588dc7  8b742410             mov esi, dword ptr [esp + 0x10]
// 00588dcb  33db                 xor ebx, ebx
// 00588dcd  57                   push edi
// 00588dce  895e04               mov dword ptr [esi + 4], ebx
// 00588dd1  83f83e               cmp eax, 0x3e
// 00588dd4  7421                 je 0x588df7
// 00588dd6  8b0e                 mov ecx, dword ptr [esi]
// 00588dd8  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 00588ddf  8b16                 mov edx, dword ptr [esi]
// 00588de1  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00588de8  8b0e                 mov ecx, dword ptr [esi]
// 00588dea  89411c               mov dword ptr [ecx + 0x1c], eax
// 00588ded  8b16                 mov edx, dword ptr [esi]
// 00588def  8b02                 mov eax, dword ptr [edx]
// 00588df1  56                   push esi
// 00588df2  ffd0                 call eax
// 00588df4  83c404               add esp, 4
// 00588df7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00588dfb  3d68010000           cmp eax, 0x168
// 00588e00  7421                 je 0x588e23
// 00588e02  8b0e                 mov ecx, dword ptr [esi]
// 00588e04  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 00588e0b  8b16                 mov edx, dword ptr [esi]
// 00588e0d  c7421868010000       mov dword ptr [edx + 0x18], 0x168
// 00588e14  8b0e                 mov ecx, dword ptr [esi]
// 00588e16  89411c               mov dword ptr [ecx + 0x1c], eax
// 00588e19  8b16                 mov edx, dword ptr [esi]
// 00588e1b  8b02                 mov eax, dword ptr [edx]
// 00588e1d  56                   push esi
// 00588e1e  ffd0                 call eax
// 00588e20  83c404               add esp, 4
// 00588e23  8b3e                 mov edi, dword ptr [esi]
// 00588e25  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00588e28  6868010000           push 0x168
// 00588e2d  53                   push ebx
// 00588e2e  56                   push esi
// 00588e2f  e8400e1900           call 0x719c74
// 00588e34  56                   push esi
// 00588e35  893e                 mov dword ptr [esi], edi
// 00588e37  896e0c               mov dword ptr [esi + 0xc], ebp
// 00588e3a  885e10               mov byte ptr [esi + 0x10], bl
// 00588e3d  e8fea30000           call 0x593240
// 00588e42  d9e8                 fld1 
// 00588e44  895e08               mov dword ptr [esi + 8], ebx
// 00588e47  895e18               mov dword ptr [esi + 0x18], ebx
// 00588e4a  895e44               mov dword ptr [esi + 0x44], ebx
// 00588e4d  895e48               mov dword ptr [esi + 0x48], ebx
// 00588e50  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00588e53  895e50               mov dword ptr [esi + 0x50], ebx
// 00588e56  895e54               mov dword ptr [esi + 0x54], ebx
// 00588e59  83c410               add esp, 0x10
// 00588e5c  895e58               mov dword ptr [esi + 0x58], ebx
// 00588e5f  895e68               mov dword ptr [esi + 0x68], ebx
// 00588e62  895e5c               mov dword ptr [esi + 0x5c], ebx
// 00588e65  895e6c               mov dword ptr [esi + 0x6c], ebx
// 00588e68  895e60               mov dword ptr [esi + 0x60], ebx
// 00588e6b  895e70               mov dword ptr [esi + 0x70], ebx
// 00588e6e  895e64               mov dword ptr [esi + 0x64], ebx
// 00588e71  895e74               mov dword ptr [esi + 0x74], ebx
// 00588e74  dd5e30               fstp qword ptr [esi + 0x30]
// 00588e77  5f                   pop edi
// 00588e78  899e60010000         mov dword ptr [esi + 0x160], ebx
// 00588e7e  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00588e85  5e                   pop esi
// 00588e86  5d                   pop ebp
// 00588e87  5b                   pop ebx
// 00588e88  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_CreateCompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
