// roc 2009-12 00623e20  unit: seg_00620000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623e20
//
// 00623e20  51                   push ecx
// 00623e21  53                   push ebx
// 00623e22  55                   push ebp
// 00623e23  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00623e26  8bd8                 mov ebx, eax
// 00623e28  57                   push edi
// 00623e29  85db                 test ebx, ebx
// 00623e2b  7519                 jne 0x623e46
// 00623e2d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00623e30  8b08                 mov ecx, dword ptr [eax]
// 00623e32  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 00623e39  8b4620               mov eax, dword ptr [esi + 0x20]
// 00623e3c  8b10                 mov edx, dword ptr [eax]
// 00623e3e  50                   push eax
// 00623e3f  8b02                 mov eax, dword ptr [edx]
// 00623e41  ffd0                 call eax
// 00623e43  83c404               add esp, 4
// 00623e46  8bcb                 mov ecx, ebx
// 00623e48  bf01000000           mov edi, 1
// 00623e4d  d3e7                 shl edi, cl
// 00623e4f  03eb                 add ebp, ebx
// 00623e51  b918000000           mov ecx, 0x18
// 00623e56  2bcd                 sub ecx, ebp
// 00623e58  4f                   dec edi
// 00623e59  237c2414             and edi, dword ptr [esp + 0x14]
// 00623e5d  896c240c             mov dword ptr [esp + 0xc], ebp
// 00623e61  d3e7                 shl edi, cl
// 00623e63  0b7e08               or edi, dword ptr [esi + 8]
// 00623e66  83fd08               cmp ebp, 8
// 00623e69  7c7f                 jl 0x623eea
// 00623e6b  eb03                 jmp 0x623e70
// 00623e6d  8d4900               lea ecx, [ecx]
// 00623e70  8b0e                 mov ecx, dword ptr [esi]
// 00623e72  8bdf                 mov ebx, edi
// 00623e74  c1fb10               sar ebx, 0x10
// 00623e77  81e3ff000000         and ebx, 0xff
// 00623e7d  8819                 mov byte ptr [ecx], bl
// 00623e7f  ff06                 inc dword ptr [esi]
// 00623e81  834604ff             add dword ptr [esi + 4], -1
// 00623e85  7522                 jne 0x623ea9
// 00623e87  8b4620               mov eax, dword ptr [esi + 0x20]
// 00623e8a  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00623e8d  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00623e90  50                   push eax
// 00623e91  ffd2                 call edx
// 00623e93  83c404               add esp, 4
// 00623e96  84c0                 test al, al
// 00623e98  745d                 je 0x623ef7
// 00623e9a  8b4500               mov eax, dword ptr [ebp]
// 00623e9d  8906                 mov dword ptr [esi], eax
// 00623e9f  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00623ea2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00623ea6  894e04               mov dword ptr [esi + 4], ecx
// 00623ea9  81fbff000000         cmp ebx, 0xff
// 00623eaf  752a                 jne 0x623edb
// 00623eb1  8b16                 mov edx, dword ptr [esi]
// 00623eb3  c60200               mov byte ptr [edx], 0
// 00623eb6  ff06                 inc dword ptr [esi]
// 00623eb8  834604ff             add dword ptr [esi + 4], -1
// 00623ebc  751d                 jne 0x623edb
// 00623ebe  8b4620               mov eax, dword ptr [esi + 0x20]
// 00623ec1  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00623ec4  50                   push eax
// 00623ec5  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00623ec8  ffd0                 call eax
// 00623eca  83c404               add esp, 4
// 00623ecd  84c0                 test al, al
// 00623ecf  7426                 je 0x623ef7
// 00623ed1  8b0b                 mov ecx, dword ptr [ebx]
// 00623ed3  890e                 mov dword ptr [esi], ecx
// 00623ed5  8b5304               mov edx, dword ptr [ebx + 4]
// 00623ed8  895604               mov dword ptr [esi + 4], edx
// 00623edb  83ed08               sub ebp, 8
// 00623ede  c1e708               shl edi, 8
// 00623ee1  83fd08               cmp ebp, 8
// 00623ee4  896c240c             mov dword ptr [esp + 0xc], ebp
// 00623ee8  7d86                 jge 0x623e70
// 00623eea  897e08               mov dword ptr [esi + 8], edi
// 00623eed  5f                   pop edi
// 00623eee  896e0c               mov dword ptr [esi + 0xc], ebp
// 00623ef1  5d                   pop ebp
// 00623ef2  b001                 mov al, 1
// 00623ef4  5b                   pop ebx
// 00623ef5  59                   pop ecx
// 00623ef6  c3                   ret 
// 00623ef7  5f                   pop edi
// 00623ef8  5d                   pop ebp
// 00623ef9  32c0                 xor al, al
// 00623efb  5b                   pop ebx
// 00623efc  59                   pop ecx
// 00623efd  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
