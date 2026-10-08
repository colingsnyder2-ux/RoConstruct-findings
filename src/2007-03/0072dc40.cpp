// roc 2007-03 0072dc40  unit: seg_00720000  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072dc40
//
// 0072dc40  55                   push ebp
// 0072dc41  56                   push esi
// 0072dc42  8b731c               mov esi, dword ptr [ebx + 0x1c]
// 0072dc45  33ed                 xor ebp, ebp
// 0072dc47  396e34               cmp dword ptr [esi + 0x34], ebp
// 0072dc4a  57                   push edi
// 0072dc4b  8bf8                 mov edi, eax
// 0072dc4d  7529                 jne 0x72dc78
// 0072dc4f  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0072dc52  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0072dc55  b801000000           mov eax, 1
// 0072dc5a  d3e0                 shl eax, cl
// 0072dc5c  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 0072dc5f  6a01                 push 1
// 0072dc61  50                   push eax
// 0072dc62  51                   push ecx
// 0072dc63  ffd2                 call edx
// 0072dc65  83c40c               add esp, 0xc
// 0072dc68  3bc5                 cmp eax, ebp
// 0072dc6a  894634               mov dword ptr [esi + 0x34], eax
// 0072dc6d  7509                 jne 0x72dc78
// 0072dc6f  5f                   pop edi
// 0072dc70  5e                   pop esi
// 0072dc71  b801000000           mov eax, 1
// 0072dc76  5d                   pop ebp
// 0072dc77  c3                   ret 
// 0072dc78  396e28               cmp dword ptr [esi + 0x28], ebp
// 0072dc7b  7513                 jne 0x72dc90
// 0072dc7d  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0072dc80  b801000000           mov eax, 1
// 0072dc85  d3e0                 shl eax, cl
// 0072dc87  896e30               mov dword ptr [esi + 0x30], ebp
// 0072dc8a  896e2c               mov dword ptr [esi + 0x2c], ebp
// 0072dc8d  894628               mov dword ptr [esi + 0x28], eax
// 0072dc90  2b7b10               sub edi, dword ptr [ebx + 0x10]
// 0072dc93  8b4628               mov eax, dword ptr [esi + 0x28]
// 0072dc96  3bf8                 cmp edi, eax
// 0072dc98  7222                 jb 0x72dcbc
// 0072dc9a  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0072dc9d  8b5634               mov edx, dword ptr [esi + 0x34]
// 0072dca0  50                   push eax
// 0072dca1  2bc8                 sub ecx, eax
// 0072dca3  51                   push ecx
// 0072dca4  52                   push edx
// 0072dca5  e83815efff           call 0x61f1e2
// 0072dcaa  8b4628               mov eax, dword ptr [esi + 0x28]
// 0072dcad  83c40c               add esp, 0xc
// 0072dcb0  5f                   pop edi
// 0072dcb1  896e30               mov dword ptr [esi + 0x30], ebp
// 0072dcb4  89462c               mov dword ptr [esi + 0x2c], eax
// 0072dcb7  5e                   pop esi
// 0072dcb8  33c0                 xor eax, eax
// 0072dcba  5d                   pop ebp
// 0072dcbb  c3                   ret 
// 0072dcbc  2b4630               sub eax, dword ptr [esi + 0x30]
// 0072dcbf  8be8                 mov ebp, eax
// 0072dcc1  3bef                 cmp ebp, edi
// 0072dcc3  7602                 jbe 0x72dcc7
// 0072dcc5  8bef                 mov ebp, edi
// 0072dcc7  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0072dcca  8b5634               mov edx, dword ptr [esi + 0x34]
// 0072dccd  035630               add edx, dword ptr [esi + 0x30]
// 0072dcd0  55                   push ebp
// 0072dcd1  2bcf                 sub ecx, edi
// 0072dcd3  51                   push ecx
// 0072dcd4  52                   push edx
// 0072dcd5  e80815efff           call 0x61f1e2
// 0072dcda  83c40c               add esp, 0xc
// 0072dcdd  2bfd                 sub edi, ebp
// 0072dcdf  7422                 je 0x72dd03
// 0072dce1  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0072dce4  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0072dce7  57                   push edi
// 0072dce8  2bc7                 sub eax, edi
// 0072dcea  50                   push eax
// 0072dceb  51                   push ecx
// 0072dcec  e8f114efff           call 0x61f1e2
// 0072dcf1  8b5628               mov edx, dword ptr [esi + 0x28]
// 0072dcf4  83c40c               add esp, 0xc
// 0072dcf7  897e30               mov dword ptr [esi + 0x30], edi
// 0072dcfa  5f                   pop edi
// 0072dcfb  89562c               mov dword ptr [esi + 0x2c], edx
// 0072dcfe  5e                   pop esi
// 0072dcff  33c0                 xor eax, eax
// 0072dd01  5d                   pop ebp
// 0072dd02  c3                   ret 
// 0072dd03  016e30               add dword ptr [esi + 0x30], ebp
// 0072dd06  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 0072dd09  8b4628               mov eax, dword ptr [esi + 0x28]
// 0072dd0c  3bc8                 cmp ecx, eax
// 0072dd0e  7507                 jne 0x72dd17
// 0072dd10  c7463000000000       mov dword ptr [esi + 0x30], 0
// 0072dd17  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0072dd1a  3bc8                 cmp ecx, eax
// 0072dd1c  7305                 jae 0x72dd23
// 0072dd1e  03cd                 add ecx, ebp
// 0072dd20  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0072dd23  5f                   pop edi
// 0072dd24  5e                   pop esi
// 0072dd25  33c0                 xor eax, eax
// 0072dd27  5d                   pop ebp
// 0072dd28  c3                   ret 
// library zlib-1.2.3/inflate.c (function _updatewindow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 inflate.c
