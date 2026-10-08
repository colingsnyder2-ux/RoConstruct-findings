// from server: 100% by auto
// roc 2009-06 00590af0  unit: seg_00590000  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00590af0
//
// 00590af0  55                   push ebp
// 00590af1  56                   push esi
// 00590af2  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 00590af5  33ed                 xor ebp, ebp
// 00590af7  57                   push edi
// 00590af8  8bf8                 mov edi, eax
// 00590afa  396e34               cmp dword ptr [esi + 0x34], ebp
// 00590afd  7527                 jne 0x590b26
// 00590aff  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00590b02  8b5320               mov edx, dword ptr [ebx + 0x20]
// 00590b05  b801000000           mov eax, 1
// 00590b0a  d3e0                 shl eax, cl
// 00590b0c  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 00590b0f  6a01                 push 1
// 00590b11  50                   push eax
// 00590b12  51                   push ecx
// 00590b13  ffd2                 call edx
// 00590b15  83c40c               add esp, 0xc
// 00590b18  894634               mov dword ptr [esi + 0x34], eax
// 00590b1b  3bc5                 cmp eax, ebp
// 00590b1d  7507                 jne 0x590b26
// 00590b1f  5f                   pop edi
// 00590b20  5e                   pop esi
// 00590b21  8d4501               lea eax, [ebp + 1]
// 00590b24  5d                   pop ebp
// 00590b25  c3                   ret 
// 00590b26  396e28               cmp dword ptr [esi + 0x28], ebp
// 00590b29  7513                 jne 0x590b3e
// 00590b2b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00590b2e  b801000000           mov eax, 1
// 00590b33  d3e0                 shl eax, cl
// 00590b35  896e30               mov dword ptr [esi + 0x30], ebp
// 00590b38  896e2c               mov dword ptr [esi + 0x2c], ebp
// 00590b3b  894628               mov dword ptr [esi + 0x28], eax
// 00590b3e  2b7b10               sub edi, dword ptr [ebx + 0x10]
// 00590b41  8b4628               mov eax, dword ptr [esi + 0x28]
// 00590b44  3bf8                 cmp edi, eax
// 00590b46  7222                 jb 0x590b6a
// 00590b48  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00590b4b  8b5634               mov edx, dword ptr [esi + 0x34]
// 00590b4e  50                   push eax
// 00590b4f  2bc8                 sub ecx, eax
// 00590b51  51                   push ecx
// 00590b52  52                   push edx
// 00590b53  e85e931800           call 0x719eb6
// 00590b58  8b4628               mov eax, dword ptr [esi + 0x28]
// 00590b5b  83c40c               add esp, 0xc
// 00590b5e  5f                   pop edi
// 00590b5f  896e30               mov dword ptr [esi + 0x30], ebp
// 00590b62  89462c               mov dword ptr [esi + 0x2c], eax
// 00590b65  5e                   pop esi
// 00590b66  33c0                 xor eax, eax
// 00590b68  5d                   pop ebp
// 00590b69  c3                   ret 
// 00590b6a  2b4630               sub eax, dword ptr [esi + 0x30]
// 00590b6d  8be8                 mov ebp, eax
// 00590b6f  3bef                 cmp ebp, edi
// 00590b71  7602                 jbe 0x590b75
// 00590b73  8bef                 mov ebp, edi
// 00590b75  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00590b78  8b5634               mov edx, dword ptr [esi + 0x34]
// 00590b7b  035630               add edx, dword ptr [esi + 0x30]
// 00590b7e  55                   push ebp
// 00590b7f  2bcf                 sub ecx, edi
// 00590b81  51                   push ecx
// 00590b82  52                   push edx
// 00590b83  e82e931800           call 0x719eb6
// 00590b88  83c40c               add esp, 0xc
// 00590b8b  2bfd                 sub edi, ebp
// 00590b8d  7422                 je 0x590bb1
// 00590b8f  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00590b92  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00590b95  57                   push edi
// 00590b96  2bc7                 sub eax, edi
// 00590b98  50                   push eax
// 00590b99  51                   push ecx
// 00590b9a  e817931800           call 0x719eb6
// 00590b9f  8b5628               mov edx, dword ptr [esi + 0x28]
// 00590ba2  83c40c               add esp, 0xc
// 00590ba5  897e30               mov dword ptr [esi + 0x30], edi
// 00590ba8  5f                   pop edi
// 00590ba9  89562c               mov dword ptr [esi + 0x2c], edx
// 00590bac  5e                   pop esi
// 00590bad  33c0                 xor eax, eax
// 00590baf  5d                   pop ebp
// 00590bb0  c3                   ret 
// 00590bb1  016e30               add dword ptr [esi + 0x30], ebp
// 00590bb4  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00590bb7  8b4628               mov eax, dword ptr [esi + 0x28]
// 00590bba  3bc8                 cmp ecx, eax
// 00590bbc  7507                 jne 0x590bc5
// 00590bbe  c7463000000000       mov dword ptr [esi + 0x30], 0
// 00590bc5  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00590bc8  3bc8                 cmp ecx, eax
// 00590bca  7305                 jae 0x590bd1
// 00590bcc  03cd                 add ecx, ebp
// 00590bce  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00590bd1  5f                   pop edi
// 00590bd2  5e                   pop esi
// 00590bd3  33c0                 xor eax, eax
// 00590bd5  5d                   pop ebp
// 00590bd6  c3                   ret 
// library zlib-1.2.3/inflate.c (function _updatewindow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
