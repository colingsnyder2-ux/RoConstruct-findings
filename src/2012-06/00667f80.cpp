// from server: 100% by auto
// roc 2012-06 00667f80  unit: seg_00660000  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667f80
//
// 00667f80  53                   push ebx
// 00667f81  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00667f84  55                   push ebp
// 00667f85  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00667f89  85ed                 test ebp, ebp
// 00667f8b  7519                 jne 0x667fa6
// 00667f8d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00667f90  8b08                 mov ecx, dword ptr [eax]
// 00667f92  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 00667f99  8b4620               mov eax, dword ptr [esi + 0x20]
// 00667f9c  8b10                 mov edx, dword ptr [eax]
// 00667f9e  50                   push eax
// 00667f9f  8b02                 mov eax, dword ptr [edx]
// 00667fa1  ffd0                 call eax
// 00667fa3  83c404               add esp, 4
// 00667fa6  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00667faa  0f85fe000000         jne 0x6680ae
// 00667fb0  57                   push edi
// 00667fb1  8bcd                 mov ecx, ebp
// 00667fb3  bf01000000           mov edi, 1
// 00667fb8  d3e7                 shl edi, cl
// 00667fba  03dd                 add ebx, ebp
// 00667fbc  b918000000           mov ecx, 0x18
// 00667fc1  2bcb                 sub ecx, ebx
// 00667fc3  4f                   dec edi
// 00667fc4  237c2410             and edi, dword ptr [esp + 0x10]
// 00667fc8  d3e7                 shl edi, cl
// 00667fca  0b7e18               or edi, dword ptr [esi + 0x18]
// 00667fcd  83fb08               cmp ebx, 8
// 00667fd0  0f8cd1000000         jl 0x6680a7
// 00667fd6  8beb                 mov ebp, ebx
// 00667fd8  c1ed03               shr ebp, 3
// 00667fdb  8bcd                 mov ecx, ebp
// 00667fdd  f7d9                 neg ecx
// 00667fdf  8d14cb               lea edx, [ebx + ecx*8]
// 00667fe2  896c2414             mov dword ptr [esp + 0x14], ebp
// 00667fe6  89542410             mov dword ptr [esp + 0x10], edx
// 00667fea  8d9b00000000         lea ebx, [ebx]
// 00667ff0  8b4610               mov eax, dword ptr [esi + 0x10]
// 00667ff3  8bdf                 mov ebx, edi
// 00667ff5  c1fb10               sar ebx, 0x10
// 00667ff8  81e3ff000000         and ebx, 0xff
// 00667ffe  8818                 mov byte ptr [eax], bl
// 00668000  ff4610               inc dword ptr [esi + 0x10]
// 00668003  834614ff             add dword ptr [esi + 0x14], -1
// 00668007  753c                 jne 0x668045
// 00668009  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066800c  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0066800f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00668012  50                   push eax
// 00668013  ffd1                 call ecx
// 00668015  83c404               add esp, 4
// 00668018  84c0                 test al, al
// 0066801a  7519                 jne 0x668035
// 0066801c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0066801f  8b02                 mov eax, dword ptr [edx]
// 00668021  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00668028  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066802b  8b08                 mov ecx, dword ptr [eax]
// 0066802d  8b11                 mov edx, dword ptr [ecx]
// 0066802f  50                   push eax
// 00668030  ffd2                 call edx
// 00668032  83c404               add esp, 4
// 00668035  8b4500               mov eax, dword ptr [ebp]
// 00668038  894610               mov dword ptr [esi + 0x10], eax
// 0066803b  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0066803e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00668042  894e14               mov dword ptr [esi + 0x14], ecx
// 00668045  81fbff000000         cmp ebx, 0xff
// 0066804b  7546                 jne 0x668093
// 0066804d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00668050  c60200               mov byte ptr [edx], 0
// 00668053  ff4610               inc dword ptr [esi + 0x10]
// 00668056  834614ff             add dword ptr [esi + 0x14], -1
// 0066805a  7537                 jne 0x668093
// 0066805c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066805f  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00668062  50                   push eax
// 00668063  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00668066  ffd0                 call eax
// 00668068  83c404               add esp, 4
// 0066806b  84c0                 test al, al
// 0066806d  7519                 jne 0x668088
// 0066806f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00668072  8b11                 mov edx, dword ptr [ecx]
// 00668074  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 0066807b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0066807e  8b08                 mov ecx, dword ptr [eax]
// 00668080  8b11                 mov edx, dword ptr [ecx]
// 00668082  50                   push eax
// 00668083  ffd2                 call edx
// 00668085  83c404               add esp, 4
// 00668088  8b03                 mov eax, dword ptr [ebx]
// 0066808a  894610               mov dword ptr [esi + 0x10], eax
// 0066808d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00668090  894e14               mov dword ptr [esi + 0x14], ecx
// 00668093  c1e708               shl edi, 8
// 00668096  83ed01               sub ebp, 1
// 00668099  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066809d  0f854dffffff         jne 0x667ff0
// 006680a3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006680a7  897e18               mov dword ptr [esi + 0x18], edi
// 006680aa  895e1c               mov dword ptr [esi + 0x1c], ebx
// 006680ad  5f                   pop edi
// 006680ae  5d                   pop ebp
// 006680af  5b                   pop ebx
// 006680b0  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
