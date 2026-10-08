// roc 2009-12 00624a60  unit: seg_00620000  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624a60
//
// 00624a60  53                   push ebx
// 00624a61  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00624a64  55                   push ebp
// 00624a65  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00624a69  85ed                 test ebp, ebp
// 00624a6b  7519                 jne 0x624a86
// 00624a6d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624a70  8b08                 mov ecx, dword ptr [eax]
// 00624a72  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 00624a79  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624a7c  8b10                 mov edx, dword ptr [eax]
// 00624a7e  50                   push eax
// 00624a7f  8b02                 mov eax, dword ptr [edx]
// 00624a81  ffd0                 call eax
// 00624a83  83c404               add esp, 4
// 00624a86  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00624a8a  0f85fe000000         jne 0x624b8e
// 00624a90  57                   push edi
// 00624a91  8bcd                 mov ecx, ebp
// 00624a93  bf01000000           mov edi, 1
// 00624a98  d3e7                 shl edi, cl
// 00624a9a  03dd                 add ebx, ebp
// 00624a9c  b918000000           mov ecx, 0x18
// 00624aa1  2bcb                 sub ecx, ebx
// 00624aa3  4f                   dec edi
// 00624aa4  237c2410             and edi, dword ptr [esp + 0x10]
// 00624aa8  d3e7                 shl edi, cl
// 00624aaa  0b7e18               or edi, dword ptr [esi + 0x18]
// 00624aad  83fb08               cmp ebx, 8
// 00624ab0  0f8cd1000000         jl 0x624b87
// 00624ab6  8beb                 mov ebp, ebx
// 00624ab8  c1ed03               shr ebp, 3
// 00624abb  8bcd                 mov ecx, ebp
// 00624abd  f7d9                 neg ecx
// 00624abf  8d14cb               lea edx, [ebx + ecx*8]
// 00624ac2  896c2414             mov dword ptr [esp + 0x14], ebp
// 00624ac6  89542410             mov dword ptr [esp + 0x10], edx
// 00624aca  8d9b00000000         lea ebx, [ebx]
// 00624ad0  8b4610               mov eax, dword ptr [esi + 0x10]
// 00624ad3  8bdf                 mov ebx, edi
// 00624ad5  c1fb10               sar ebx, 0x10
// 00624ad8  81e3ff000000         and ebx, 0xff
// 00624ade  8818                 mov byte ptr [eax], bl
// 00624ae0  ff4610               inc dword ptr [esi + 0x10]
// 00624ae3  834614ff             add dword ptr [esi + 0x14], -1
// 00624ae7  753c                 jne 0x624b25
// 00624ae9  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624aec  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00624aef  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00624af2  50                   push eax
// 00624af3  ffd1                 call ecx
// 00624af5  83c404               add esp, 4
// 00624af8  84c0                 test al, al
// 00624afa  7519                 jne 0x624b15
// 00624afc  8b5620               mov edx, dword ptr [esi + 0x20]
// 00624aff  8b02                 mov eax, dword ptr [edx]
// 00624b01  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00624b08  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624b0b  8b08                 mov ecx, dword ptr [eax]
// 00624b0d  8b11                 mov edx, dword ptr [ecx]
// 00624b0f  50                   push eax
// 00624b10  ffd2                 call edx
// 00624b12  83c404               add esp, 4
// 00624b15  8b4500               mov eax, dword ptr [ebp]
// 00624b18  894610               mov dword ptr [esi + 0x10], eax
// 00624b1b  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00624b1e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00624b22  894e14               mov dword ptr [esi + 0x14], ecx
// 00624b25  81fbff000000         cmp ebx, 0xff
// 00624b2b  7546                 jne 0x624b73
// 00624b2d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00624b30  c60200               mov byte ptr [edx], 0
// 00624b33  ff4610               inc dword ptr [esi + 0x10]
// 00624b36  834614ff             add dword ptr [esi + 0x14], -1
// 00624b3a  7537                 jne 0x624b73
// 00624b3c  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624b3f  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00624b42  50                   push eax
// 00624b43  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00624b46  ffd0                 call eax
// 00624b48  83c404               add esp, 4
// 00624b4b  84c0                 test al, al
// 00624b4d  7519                 jne 0x624b68
// 00624b4f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00624b52  8b11                 mov edx, dword ptr [ecx]
// 00624b54  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 00624b5b  8b4620               mov eax, dword ptr [esi + 0x20]
// 00624b5e  8b08                 mov ecx, dword ptr [eax]
// 00624b60  8b11                 mov edx, dword ptr [ecx]
// 00624b62  50                   push eax
// 00624b63  ffd2                 call edx
// 00624b65  83c404               add esp, 4
// 00624b68  8b03                 mov eax, dword ptr [ebx]
// 00624b6a  894610               mov dword ptr [esi + 0x10], eax
// 00624b6d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00624b70  894e14               mov dword ptr [esi + 0x14], ecx
// 00624b73  c1e708               shl edi, 8
// 00624b76  83ed01               sub ebp, 1
// 00624b79  896c2414             mov dword ptr [esp + 0x14], ebp
// 00624b7d  0f854dffffff         jne 0x624ad0
// 00624b83  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00624b87  897e18               mov dword ptr [esi + 0x18], edi
// 00624b8a  895e1c               mov dword ptr [esi + 0x1c], ebx
// 00624b8d  5f                   pop edi
// 00624b8e  5d                   pop ebp
// 00624b8f  5b                   pop ebx
// 00624b90  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
