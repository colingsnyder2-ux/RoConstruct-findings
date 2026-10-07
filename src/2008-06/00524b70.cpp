// roc 2008-06 00524b70  unit: seg_00520000  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00524b70
//
// 00524b70  8b442408             mov eax, dword ptr [esp + 8]
// 00524b74  53                   push ebx
// 00524b75  55                   push ebp
// 00524b76  56                   push esi
// 00524b77  8b742410             mov esi, dword ptr [esp + 0x10]
// 00524b7b  33db                 xor ebx, ebx
// 00524b7d  57                   push edi
// 00524b7e  895e04               mov dword ptr [esi + 4], ebx
// 00524b81  83f83e               cmp eax, 0x3e
// 00524b84  7421                 je 0x524ba7
// 00524b86  8b0e                 mov ecx, dword ptr [esi]
// 00524b88  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 00524b8f  8b16                 mov edx, dword ptr [esi]
// 00524b91  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00524b98  8b0e                 mov ecx, dword ptr [esi]
// 00524b9a  89411c               mov dword ptr [ecx + 0x1c], eax
// 00524b9d  8b16                 mov edx, dword ptr [esi]
// 00524b9f  8b02                 mov eax, dword ptr [edx]
// 00524ba1  56                   push esi
// 00524ba2  ffd0                 call eax
// 00524ba4  83c404               add esp, 4
// 00524ba7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00524bab  3d68010000           cmp eax, 0x168
// 00524bb0  7421                 je 0x524bd3
// 00524bb2  8b0e                 mov ecx, dword ptr [esi]
// 00524bb4  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 00524bbb  8b16                 mov edx, dword ptr [esi]
// 00524bbd  c7421868010000       mov dword ptr [edx + 0x18], 0x168
// 00524bc4  8b0e                 mov ecx, dword ptr [esi]
// 00524bc6  89411c               mov dword ptr [ecx + 0x1c], eax
// 00524bc9  8b16                 mov edx, dword ptr [esi]
// 00524bcb  8b02                 mov eax, dword ptr [edx]
// 00524bcd  56                   push esi
// 00524bce  ffd0                 call eax
// 00524bd0  83c404               add esp, 4
// 00524bd3  8b3e                 mov edi, dword ptr [esi]
// 00524bd5  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00524bd8  6868010000           push 0x168
// 00524bdd  53                   push ebx
// 00524bde  56                   push esi
// 00524bdf  e820cb1700           call 0x6a1704
// 00524be4  56                   push esi
// 00524be5  893e                 mov dword ptr [esi], edi
// 00524be7  896e0c               mov dword ptr [esi + 0xc], ebp
// 00524bea  885e10               mov byte ptr [esi + 0x10], bl
// 00524bed  e86e6a0000           call 0x52b660
// 00524bf2  d9e8                 fld1 
// 00524bf4  895e08               mov dword ptr [esi + 8], ebx
// 00524bf7  895e18               mov dword ptr [esi + 0x18], ebx
// 00524bfa  895e44               mov dword ptr [esi + 0x44], ebx
// 00524bfd  895e48               mov dword ptr [esi + 0x48], ebx
// 00524c00  895e4c               mov dword ptr [esi + 0x4c], ebx
// 00524c03  895e50               mov dword ptr [esi + 0x50], ebx
// 00524c06  895e54               mov dword ptr [esi + 0x54], ebx
// 00524c09  83c410               add esp, 0x10
// 00524c0c  895e58               mov dword ptr [esi + 0x58], ebx
// 00524c0f  895e68               mov dword ptr [esi + 0x68], ebx
// 00524c12  895e5c               mov dword ptr [esi + 0x5c], ebx
// 00524c15  895e6c               mov dword ptr [esi + 0x6c], ebx
// 00524c18  895e60               mov dword ptr [esi + 0x60], ebx
// 00524c1b  895e70               mov dword ptr [esi + 0x70], ebx
// 00524c1e  895e64               mov dword ptr [esi + 0x64], ebx
// 00524c21  895e74               mov dword ptr [esi + 0x74], ebx
// 00524c24  dd5e30               fstp qword ptr [esi + 0x30]
// 00524c27  5f                   pop edi
// 00524c28  899e60010000         mov dword ptr [esi + 0x160], ebx
// 00524c2e  c7461464000000       mov dword ptr [esi + 0x14], 0x64
// 00524c35  5e                   pop esi
// 00524c36  5d                   pop ebp
// 00524c37  5b                   pop ebx
// 00524c38  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_CreateCompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
