// from server: 100% by auto
// roc 2009-06 00581dc0  unit: seg_00580000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00581dc0
//
// 00581dc0  8b442408             mov eax, dword ptr [esp + 8]
// 00581dc4  53                   push ebx
// 00581dc5  55                   push ebp
// 00581dc6  56                   push esi
// 00581dc7  8b742410             mov esi, dword ptr [esp + 0x10]
// 00581dcb  57                   push edi
// 00581dcc  33ff                 xor edi, edi
// 00581dce  897e04               mov dword ptr [esi + 4], edi
// 00581dd1  83f83e               cmp eax, 0x3e
// 00581dd4  7421                 je 0x581df7
// 00581dd6  8b0e                 mov ecx, dword ptr [esi]
// 00581dd8  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 00581ddf  8b16                 mov edx, dword ptr [esi]
// 00581de1  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 00581de8  8b0e                 mov ecx, dword ptr [esi]
// 00581dea  89411c               mov dword ptr [ecx + 0x1c], eax
// 00581ded  8b16                 mov edx, dword ptr [esi]
// 00581def  8b02                 mov eax, dword ptr [edx]
// 00581df1  56                   push esi
// 00581df2  ffd0                 call eax
// 00581df4  83c404               add esp, 4
// 00581df7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00581dfb  3db0010000           cmp eax, 0x1b0
// 00581e00  7421                 je 0x581e23
// 00581e02  8b0e                 mov ecx, dword ptr [esi]
// 00581e04  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 00581e0b  8b16                 mov edx, dword ptr [esi]
// 00581e0d  c74218b0010000       mov dword ptr [edx + 0x18], 0x1b0
// 00581e14  8b0e                 mov ecx, dword ptr [esi]
// 00581e16  89411c               mov dword ptr [ecx + 0x1c], eax
// 00581e19  8b16                 mov edx, dword ptr [esi]
// 00581e1b  8b02                 mov eax, dword ptr [edx]
// 00581e1d  56                   push esi
// 00581e1e  ffd0                 call eax
// 00581e20  83c404               add esp, 4
// 00581e23  8b1e                 mov ebx, dword ptr [esi]
// 00581e25  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00581e28  68b0010000           push 0x1b0
// 00581e2d  57                   push edi
// 00581e2e  56                   push esi
// 00581e2f  e8407e1900           call 0x719c74
// 00581e34  56                   push esi
// 00581e35  891e                 mov dword ptr [esi], ebx
// 00581e37  896e0c               mov dword ptr [esi + 0xc], ebp
// 00581e3a  c6461001             mov byte ptr [esi + 0x10], 1
// 00581e3e  e8fd130100           call 0x593240
// 00581e43  897e08               mov dword ptr [esi + 8], edi
// 00581e46  897e18               mov dword ptr [esi + 0x18], edi
// 00581e49  89be90000000         mov dword ptr [esi + 0x90], edi
// 00581e4f  89be94000000         mov dword ptr [esi + 0x94], edi
// 00581e55  89be98000000         mov dword ptr [esi + 0x98], edi
// 00581e5b  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 00581e61  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 00581e67  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 00581e6d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 00581e73  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 00581e79  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 00581e7f  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 00581e85  89beac000000         mov dword ptr [esi + 0xac], edi
// 00581e8b  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 00581e91  56                   push esi
// 00581e92  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 00581e98  e8d3d0ffff           call 0x57ef70
// 00581e9d  56                   push esi
// 00581e9e  e83d080100           call 0x5926e0
// 00581ea3  83c418               add esp, 0x18
// 00581ea6  5f                   pop edi
// 00581ea7  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 00581eae  5e                   pop esi
// 00581eaf  5d                   pop ebp
// 00581eb0  5b                   pop ebx
// 00581eb1  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_CreateDecompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
