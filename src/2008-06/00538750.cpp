// roc 2008-06 00538750  unit: seg_00530000  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538750
//
// 00538750  53                   push ebx
// 00538751  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 00538754  55                   push ebp
// 00538755  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00538759  85ed                 test ebp, ebp
// 0053875b  7519                 jne 0x538776
// 0053875d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00538760  8b08                 mov ecx, dword ptr [eax]
// 00538762  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 00538769  8b4620               mov eax, dword ptr [esi + 0x20]
// 0053876c  8b10                 mov edx, dword ptr [eax]
// 0053876e  50                   push eax
// 0053876f  8b02                 mov eax, dword ptr [edx]
// 00538771  ffd0                 call eax
// 00538773  83c404               add esp, 4
// 00538776  807e0c00             cmp byte ptr [esi + 0xc], 0
// 0053877a  0f85fe000000         jne 0x53887e
// 00538780  57                   push edi
// 00538781  8bcd                 mov ecx, ebp
// 00538783  bf01000000           mov edi, 1
// 00538788  d3e7                 shl edi, cl
// 0053878a  03dd                 add ebx, ebp
// 0053878c  b918000000           mov ecx, 0x18
// 00538791  2bcb                 sub ecx, ebx
// 00538793  4f                   dec edi
// 00538794  237c2410             and edi, dword ptr [esp + 0x10]
// 00538798  d3e7                 shl edi, cl
// 0053879a  0b7e18               or edi, dword ptr [esi + 0x18]
// 0053879d  83fb08               cmp ebx, 8
// 005387a0  0f8cd1000000         jl 0x538877
// 005387a6  8beb                 mov ebp, ebx
// 005387a8  c1ed03               shr ebp, 3
// 005387ab  8bcd                 mov ecx, ebp
// 005387ad  f7d9                 neg ecx
// 005387af  8d14cb               lea edx, [ebx + ecx*8]
// 005387b2  896c2414             mov dword ptr [esp + 0x14], ebp
// 005387b6  89542410             mov dword ptr [esp + 0x10], edx
// 005387ba  8d9b00000000         lea ebx, [ebx]
// 005387c0  8b4610               mov eax, dword ptr [esi + 0x10]
// 005387c3  8bdf                 mov ebx, edi
// 005387c5  c1fb10               sar ebx, 0x10
// 005387c8  81e3ff000000         and ebx, 0xff
// 005387ce  8818                 mov byte ptr [eax], bl
// 005387d0  ff4610               inc dword ptr [esi + 0x10]
// 005387d3  834614ff             add dword ptr [esi + 0x14], -1
// 005387d7  753c                 jne 0x538815
// 005387d9  8b4620               mov eax, dword ptr [esi + 0x20]
// 005387dc  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005387df  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005387e2  50                   push eax
// 005387e3  ffd1                 call ecx
// 005387e5  83c404               add esp, 4
// 005387e8  84c0                 test al, al
// 005387ea  7519                 jne 0x538805
// 005387ec  8b5620               mov edx, dword ptr [esi + 0x20]
// 005387ef  8b02                 mov eax, dword ptr [edx]
// 005387f1  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 005387f8  8b4620               mov eax, dword ptr [esi + 0x20]
// 005387fb  8b08                 mov ecx, dword ptr [eax]
// 005387fd  8b11                 mov edx, dword ptr [ecx]
// 005387ff  50                   push eax
// 00538800  ffd2                 call edx
// 00538802  83c404               add esp, 4
// 00538805  8b4500               mov eax, dword ptr [ebp]
// 00538808  894610               mov dword ptr [esi + 0x10], eax
// 0053880b  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0053880e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00538812  894e14               mov dword ptr [esi + 0x14], ecx
// 00538815  81fbff000000         cmp ebx, 0xff
// 0053881b  7546                 jne 0x538863
// 0053881d  8b5610               mov edx, dword ptr [esi + 0x10]
// 00538820  c60200               mov byte ptr [edx], 0
// 00538823  ff4610               inc dword ptr [esi + 0x10]
// 00538826  834614ff             add dword ptr [esi + 0x14], -1
// 0053882a  7537                 jne 0x538863
// 0053882c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0053882f  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00538832  50                   push eax
// 00538833  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00538836  ffd0                 call eax
// 00538838  83c404               add esp, 4
// 0053883b  84c0                 test al, al
// 0053883d  7519                 jne 0x538858
// 0053883f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00538842  8b11                 mov edx, dword ptr [ecx]
// 00538844  c7421418000000       mov dword ptr [edx + 0x14], 0x18
// 0053884b  8b4620               mov eax, dword ptr [esi + 0x20]
// 0053884e  8b08                 mov ecx, dword ptr [eax]
// 00538850  8b11                 mov edx, dword ptr [ecx]
// 00538852  50                   push eax
// 00538853  ffd2                 call edx
// 00538855  83c404               add esp, 4
// 00538858  8b03                 mov eax, dword ptr [ebx]
// 0053885a  894610               mov dword ptr [esi + 0x10], eax
// 0053885d  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00538860  894e14               mov dword ptr [esi + 0x14], ecx
// 00538863  c1e708               shl edi, 8
// 00538866  83ed01               sub ebp, 1
// 00538869  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053886d  0f854dffffff         jne 0x5387c0
// 00538873  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00538877  897e18               mov dword ptr [esi + 0x18], edi
// 0053887a  895e1c               mov dword ptr [esi + 0x1c], ebx
// 0053887d  5f                   pop edi
// 0053887e  5d                   pop ebp
// 0053887f  5b                   pop ebx
// 00538880  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
