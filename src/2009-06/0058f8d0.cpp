// from server: 100% by auto
// roc 2009-06 0058f8d0  unit: seg_00580000  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058f8d0
//
// 0058f8d0  83ec08               sub esp, 8
// 0058f8d3  53                   push ebx
// 0058f8d4  55                   push ebp
// 0058f8d5  8b6e2c               mov ebp, dword ptr [esi + 0x2c]
// 0058f8d8  57                   push edi
// 0058f8d9  8da42400000000       lea esp, [esp]
// 0058f8e0  8b7e3c               mov edi, dword ptr [esi + 0x3c]
// 0058f8e3  2b7e74               sub edi, dword ptr [esi + 0x74]
// 0058f8e6  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058f8e9  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0058f8ec  2bf8                 sub edi, eax
// 0058f8ee  8d9429fafeffff       lea edx, [ecx + ebp - 0x106]
// 0058f8f5  897c240c             mov dword ptr [esp + 0xc], edi
// 0058f8f9  3bc2                 cmp eax, edx
// 0058f8fb  7263                 jb 0x58f960
// 0058f8fd  8b4638               mov eax, dword ptr [esi + 0x38]
// 0058f900  55                   push ebp
// 0058f901  8d0c28               lea ecx, [eax + ebp]
// 0058f904  51                   push ecx
// 0058f905  50                   push eax
// 0058f906  e8aba51800           call 0x719eb6
// 0058f90b  8b564c               mov edx, dword ptr [esi + 0x4c]
// 0058f90e  8b4644               mov eax, dword ptr [esi + 0x44]
// 0058f911  296e70               sub dword ptr [esi + 0x70], ebp
// 0058f914  296e6c               sub dword ptr [esi + 0x6c], ebp
// 0058f917  83c40c               add esp, 0xc
// 0058f91a  296e5c               sub dword ptr [esi + 0x5c], ebp
// 0058f91d  8d0c50               lea ecx, [eax + edx*2]
// 0058f920  0fb741fe             movzx eax, word ptr [ecx - 2]
// 0058f924  83e902               sub ecx, 2
// 0058f927  3bc5                 cmp eax, ebp
// 0058f929  7204                 jb 0x58f92f
// 0058f92b  2bc5                 sub eax, ebp
// 0058f92d  eb02                 jmp 0x58f931
// 0058f92f  33c0                 xor eax, eax
// 0058f931  83ea01               sub edx, 1
// 0058f934  668901               mov word ptr [ecx], ax
// 0058f937  75e7                 jne 0x58f920
// 0058f939  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 0058f93c  8bd5                 mov edx, ebp
// 0058f93e  8d0c69               lea ecx, [ecx + ebp*2]
// 0058f941  0fb741fe             movzx eax, word ptr [ecx - 2]
// 0058f945  83e902               sub ecx, 2
// 0058f948  3bc5                 cmp eax, ebp
// 0058f94a  7204                 jb 0x58f950
// 0058f94c  2bc5                 sub eax, ebp
// 0058f94e  eb02                 jmp 0x58f952
// 0058f950  33c0                 xor eax, eax
// 0058f952  83ea01               sub edx, 1
// 0058f955  668901               mov word ptr [ecx], ax
// 0058f958  75e7                 jne 0x58f941
// 0058f95a  03fd                 add edi, ebp
// 0058f95c  897c240c             mov dword ptr [esp + 0xc], edi
// 0058f960  8b3e                 mov edi, dword ptr [esi]
// 0058f962  837f0400             cmp dword ptr [edi + 4], 0
// 0058f966  0f84ab000000         je 0x58fa17
// 0058f96c  8b4674               mov eax, dword ptr [esi + 0x74]
// 0058f96f  03466c               add eax, dword ptr [esi + 0x6c]
// 0058f972  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058f975  034638               add eax, dword ptr [esi + 0x38]
// 0058f978  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0058f97c  8bd9                 mov ebx, ecx
// 0058f97e  89442410             mov dword ptr [esp + 0x10], eax
// 0058f982  3bda                 cmp ebx, edx
// 0058f984  7602                 jbe 0x58f988
// 0058f986  8bda                 mov ebx, edx
// 0058f988  85db                 test ebx, ebx
// 0058f98a  744d                 je 0x58f9d9
// 0058f98c  8b571c               mov edx, dword ptr [edi + 0x1c]
// 0058f98f  2bcb                 sub ecx, ebx
// 0058f991  894f04               mov dword ptr [edi + 4], ecx
// 0058f994  8b4a18               mov ecx, dword ptr [edx + 0x18]
// 0058f997  83f901               cmp ecx, 1
// 0058f99a  750f                 jne 0x58f9ab
// 0058f99c  8b07                 mov eax, dword ptr [edi]
// 0058f99e  8b4f30               mov ecx, dword ptr [edi + 0x30]
// 0058f9a1  53                   push ebx
// 0058f9a2  50                   push eax
// 0058f9a3  51                   push ecx
// 0058f9a4  e8778a0000           call 0x598420
// 0058f9a9  eb12                 jmp 0x58f9bd
// 0058f9ab  83f902               cmp ecx, 2
// 0058f9ae  7517                 jne 0x58f9c7
// 0058f9b0  8b17                 mov edx, dword ptr [edi]
// 0058f9b2  8b4730               mov eax, dword ptr [edi + 0x30]
// 0058f9b5  53                   push ebx
// 0058f9b6  52                   push edx
// 0058f9b7  50                   push eax
// 0058f9b8  e8c30f0000           call 0x590980
// 0058f9bd  894730               mov dword ptr [edi + 0x30], eax
// 0058f9c0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058f9c4  83c40c               add esp, 0xc
// 0058f9c7  8b0f                 mov ecx, dword ptr [edi]
// 0058f9c9  53                   push ebx
// 0058f9ca  51                   push ecx
// 0058f9cb  50                   push eax
// 0058f9cc  e8e5a41800           call 0x719eb6
// 0058f9d1  011f                 add dword ptr [edi], ebx
// 0058f9d3  83c40c               add esp, 0xc
// 0058f9d6  015f08               add dword ptr [edi + 8], ebx
// 0058f9d9  015e74               add dword ptr [esi + 0x74], ebx
// 0058f9dc  8b7e74               mov edi, dword ptr [esi + 0x74]
// 0058f9df  83ff03               cmp edi, 3
// 0058f9e2  721f                 jb 0x58fa03
// 0058f9e4  8b4638               mov eax, dword ptr [esi + 0x38]
// 0058f9e7  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0058f9ea  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0058f9ed  03d0                 add edx, eax
// 0058f9ef  0fb602               movzx eax, byte ptr [edx]
// 0058f9f2  894648               mov dword ptr [esi + 0x48], eax
// 0058f9f5  d3e0                 shl eax, cl
// 0058f9f7  0fb64a01             movzx ecx, byte ptr [edx + 1]
// 0058f9fb  33c1                 xor eax, ecx
// 0058f9fd  234654               and eax, dword ptr [esi + 0x54]
// 0058fa00  894648               mov dword ptr [esi + 0x48], eax
// 0058fa03  81ff06010000         cmp edi, 0x106
// 0058fa09  730c                 jae 0x58fa17
// 0058fa0b  8b16                 mov edx, dword ptr [esi]
// 0058fa0d  837a0400             cmp dword ptr [edx + 4], 0
// 0058fa11  0f85c9feffff         jne 0x58f8e0
// 0058fa17  5f                   pop edi
// 0058fa18  5d                   pop ebp
// 0058fa19  5b                   pop ebx
// 0058fa1a  83c408               add esp, 8
// 0058fa1d  c3                   ret 
// library zlib-1.2.3/deflate.c (function _fill_window)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
