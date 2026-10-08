// from server: 100% by auto
// roc 2008-06 007a8290  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a8290
//
// 007a8290  55                   push ebp
// 007a8291  56                   push esi
// 007a8292  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 007a8295  33ed                 xor ebp, ebp
// 007a8297  396e34               cmp dword ptr [esi + 0x34], ebp
// 007a829a  57                   push edi
// 007a829b  8bf8                 mov edi, eax
// 007a829d  7529                 jne 0x7a82c8
// 007a829f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007a82a2  8b5320               mov edx, dword ptr [ebx + 0x20]
// 007a82a5  b801000000           mov eax, 1
// 007a82aa  d3e0                 shl eax, cl
// 007a82ac  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 007a82af  6a01                 push 1
// 007a82b1  50                   push eax
// 007a82b2  51                   push ecx
// 007a82b3  ffd2                 call edx
// 007a82b5  83c40c               add esp, 0xc
// 007a82b8  3bc5                 cmp eax, ebp
// 007a82ba  894634               mov dword ptr [esi + 0x34], eax
// 007a82bd  7509                 jne 0x7a82c8
// 007a82bf  5f                   pop edi
// 007a82c0  5e                   pop esi
// 007a82c1  b801000000           mov eax, 1
// 007a82c6  5d                   pop ebp
// 007a82c7  c3                   ret 
// 007a82c8  396e28               cmp dword ptr [esi + 0x28], ebp
// 007a82cb  7513                 jne 0x7a82e0
// 007a82cd  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 007a82d0  b801000000           mov eax, 1
// 007a82d5  d3e0                 shl eax, cl
// 007a82d7  896e30               mov dword ptr [esi + 0x30], ebp
// 007a82da  896e2c               mov dword ptr [esi + 0x2c], ebp
// 007a82dd  894628               mov dword ptr [esi + 0x28], eax
// 007a82e0  2b7b10               sub edi, dword ptr [ebx + 0x10]
// 007a82e3  8b4628               mov eax, dword ptr [esi + 0x28]
// 007a82e6  3bf8                 cmp edi, eax
// 007a82e8  7222                 jb 0x7a830c
// 007a82ea  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 007a82ed  8b5634               mov edx, dword ptr [esi + 0x34]
// 007a82f0  50                   push eax
// 007a82f1  2bc8                 sub ecx, eax
// 007a82f3  51                   push ecx
// 007a82f4  52                   push edx
// 007a82f5  e8e694efff           call 0x6a17e0
// 007a82fa  8b4628               mov eax, dword ptr [esi + 0x28]
// 007a82fd  83c40c               add esp, 0xc
// 007a8300  5f                   pop edi
// 007a8301  896e30               mov dword ptr [esi + 0x30], ebp
// 007a8304  89462c               mov dword ptr [esi + 0x2c], eax
// 007a8307  5e                   pop esi
// 007a8308  33c0                 xor eax, eax
// 007a830a  5d                   pop ebp
// 007a830b  c3                   ret 
// 007a830c  2b4630               sub eax, dword ptr [esi + 0x30]
// 007a830f  8be8                 mov ebp, eax
// 007a8311  3bef                 cmp ebp, edi
// 007a8313  7602                 jbe 0x7a8317
// 007a8315  8bef                 mov ebp, edi
// 007a8317  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 007a831a  8b5634               mov edx, dword ptr [esi + 0x34]
// 007a831d  035630               add edx, dword ptr [esi + 0x30]
// 007a8320  55                   push ebp
// 007a8321  2bcf                 sub ecx, edi
// 007a8323  51                   push ecx
// 007a8324  52                   push edx
// 007a8325  e8b694efff           call 0x6a17e0
// 007a832a  83c40c               add esp, 0xc
// 007a832d  2bfd                 sub edi, ebp
// 007a832f  7422                 je 0x7a8353
// 007a8331  8b430c               mov eax, dword ptr [ebx + 0xc]
// 007a8334  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007a8337  57                   push edi
// 007a8338  2bc7                 sub eax, edi
// 007a833a  50                   push eax
// 007a833b  51                   push ecx
// 007a833c  e89f94efff           call 0x6a17e0
// 007a8341  8b5628               mov edx, dword ptr [esi + 0x28]
// 007a8344  83c40c               add esp, 0xc
// 007a8347  897e30               mov dword ptr [esi + 0x30], edi
// 007a834a  5f                   pop edi
// 007a834b  89562c               mov dword ptr [esi + 0x2c], edx
// 007a834e  5e                   pop esi
// 007a834f  33c0                 xor eax, eax
// 007a8351  5d                   pop ebp
// 007a8352  c3                   ret 
// 007a8353  016e30               add dword ptr [esi + 0x30], ebp
// 007a8356  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 007a8359  8b4628               mov eax, dword ptr [esi + 0x28]
// 007a835c  3bc8                 cmp ecx, eax
// 007a835e  7507                 jne 0x7a8367
// 007a8360  c7463000000000       mov dword ptr [esi + 0x30], 0
// 007a8367  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007a836a  3bc8                 cmp ecx, eax
// 007a836c  7305                 jae 0x7a8373
// 007a836e  03cd                 add ecx, ebp
// 007a8370  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007a8373  5f                   pop edi
// 007a8374  5e                   pop esi
// 007a8375  33c0                 xor eax, eax
// 007a8377  5d                   pop ebp
// 007a8378  c3                   ret 
// library zlib-1.2.3/inflate.c (function _updatewindow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
