// from server: 100% by auto
// roc 2010-06 0056c4d0  unit: seg_00560000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c4d0
//
// 0056c4d0  8b442408             mov eax, dword ptr [esp + 8]
// 0056c4d4  53                   push ebx
// 0056c4d5  55                   push ebp
// 0056c4d6  56                   push esi
// 0056c4d7  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056c4db  33db                 xor ebx, ebx
// 0056c4dd  57                   push edi
// 0056c4de  895e04               mov dword ptr [esi + 4], ebx
// 0056c4e1  83f83e               cmp eax, 0x3e
// 0056c4e4  7421                 je 0x56c507
// 0056c4e6  8b0e                 mov ecx, dword ptr [esi]
// 0056c4e8  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 0056c4ef  8b16                 mov edx, dword ptr [esi]
// 0056c4f1  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 0056c4f8  8b0e                 mov ecx, dword ptr [esi]
// 0056c4fa  89411c               mov dword ptr [ecx + 0x1c], eax
// 0056c4fd  8b16                 mov edx, dword ptr [esi]
// 0056c4ff  8b02                 mov eax, dword ptr [edx]
// 0056c501  56                   push esi
// 0056c502  ffd0                 call eax
// 0056c504  83c404               add esp, 4
// 0056c507  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056c50b  3d68010000           cmp eax, 0x168
// 0056c510  7421                 je 0x56c533
// 0056c512  8b0e                 mov ecx, dword ptr [esi]
// 0056c514  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 0056c51b  8b16                 mov edx, dword ptr [esi]
// 0056c51d  c7421868010000       mov dword ptr [edx + 0x18], 0x168
// 0056c524  8b0e                 mov ecx, dword ptr [esi]
// 0056c526  89411c               mov dword ptr [ecx + 0x1c], eax
// 0056c529  8b16                 mov edx, dword ptr [esi]
// 0056c52b  8b02                 mov eax, dword ptr [edx]
// 0056c52d  56                   push esi
// 0056c52e  ffd0                 call eax
// 0056c530  83c404               add esp, 4
// 0056c533  8b3e                 mov edi, dword ptr [esi]
// 0056c535  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0056c538  6868010000           push 0x168
// 0056c53d  53                   push ebx
// 0056c53e  56                   push esi
// 0056c53f  e8a0c62300           call 0x7a8be4
// 0056c544  56                   push esi
// 0056c545  893e                 mov dword ptr [esi], edi
// 0056c547  896e0c               mov dword ptr [esi + 0xc], ebp
// 0056c54a  885e10               mov byte ptr [esi + 0x10], bl
// 0056c54d  e81ea60000           call 0x576b70
// 0056c552  d9e8                 fld1 
// 0056c554  895e08               mov dword ptr [esi + 8], ebx
// 0056c557  895e18               mov dword ptr [esi + 0x18], ebx
// 0056c55a  895e44               mov dword ptr [esi + 0x44], ebx
// 0056c55d  895e48               mov dword ptr [esi + 0x48], ebx
// 0056c560  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0056c563  895e50               mov dword ptr [esi + 0x50], ebx
// 0056c566  895e54               mov dword ptr [esi + 0x54], ebx
// 0056c569  83c410               add esp, 0x10
// 0056c56c  895e58               mov dword ptr [esi + 0x58], ebx
// 0056c56f  895e68               mov dword ptr [esi + 0x68], ebx
// 0056c572  895e5c               mov dword ptr [esi + 0x5c], ebx
// 0056c575  895e6c               mov dword ptr [esi + 0x6c], ebx
// 0056c578  895e60               mov dword ptr [esi + 0x60], ebx
// 0056c57b  895e70               mov dword ptr [esi + 0x70], ebx
// 0056c57e  895e64               mov dword ptr [esi + 0x64], ebx
// 0056c581  895e74               mov dword ptr [esi + 0x74], ebx
// 0056c584  dd5e30               fstp qword ptr [esi + 0x30]
// 0056c587  5f                   pop edi
// 0056c588  899e60010000         mov dword ptr [esi + 0x160], ebx
// 0056c58e  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 0056c595  5e                   pop esi
// 0056c596  5d                   pop ebp
// 0056c597  5b                   pop ebx
// 0056c598  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_CreateCompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
