// from server: 100% by auto
// roc 2008-06 00537b10  unit: seg_00530000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537b10
//
// 00537b10  51                   push ecx
// 00537b11  53                   push ebx
// 00537b12  55                   push ebp
// 00537b13  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00537b16  8bd8                 mov ebx, eax
// 00537b18  57                   push edi
// 00537b19  85db                 test ebx, ebx
// 00537b1b  7519                 jne 0x537b36
// 00537b1d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537b20  8b08                 mov ecx, dword ptr [eax]
// 00537b22  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 00537b29  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537b2c  8b10                 mov edx, dword ptr [eax]
// 00537b2e  50                   push eax
// 00537b2f  8b02                 mov eax, dword ptr [edx]
// 00537b31  ffd0                 call eax
// 00537b33  83c404               add esp, 4
// 00537b36  8bcb                 mov ecx, ebx
// 00537b38  bf01000000           mov edi, 1
// 00537b3d  d3e7                 shl edi, cl
// 00537b3f  03eb                 add ebp, ebx
// 00537b41  b918000000           mov ecx, 0x18
// 00537b46  2bcd                 sub ecx, ebp
// 00537b48  4f                   dec edi
// 00537b49  237c2414             and edi, dword ptr [esp + 0x14]
// 00537b4d  896c240c             mov dword ptr [esp + 0xc], ebp
// 00537b51  d3e7                 shl edi, cl
// 00537b53  0b7e08               or edi, dword ptr [esi + 8]
// 00537b56  83fd08               cmp ebp, 8
// 00537b59  7c7f                 jl 0x537bda
// 00537b5b  eb03                 jmp 0x537b60
// 00537b5d  8d4900               lea ecx, [ecx]
// 00537b60  8b0e                 mov ecx, dword ptr [esi]
// 00537b62  8bdf                 mov ebx, edi
// 00537b64  c1fb10               sar ebx, 0x10
// 00537b67  81e3ff000000         and ebx, 0xff
// 00537b6d  8819                 mov byte ptr [ecx], bl
// 00537b6f  ff06                 inc dword ptr [esi]
// 00537b71  834604ff             add dword ptr [esi + 4], -1
// 00537b75  7522                 jne 0x537b99
// 00537b77  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537b7a  8b6818               mov ebp, dword ptr [eax + 0x18]
// 00537b7d  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00537b80  50                   push eax
// 00537b81  ffd2                 call edx
// 00537b83  83c404               add esp, 4
// 00537b86  84c0                 test al, al
// 00537b88  745d                 je 0x537be7
// 00537b8a  8b4500               mov eax, dword ptr [ebp]
// 00537b8d  8906                 mov dword ptr [esi], eax
// 00537b8f  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00537b92  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00537b96  894e04               mov dword ptr [esi + 4], ecx
// 00537b99  81fbff000000         cmp ebx, 0xff
// 00537b9f  752a                 jne 0x537bcb
// 00537ba1  8b16                 mov edx, dword ptr [esi]
// 00537ba3  c60200               mov byte ptr [edx], 0
// 00537ba6  ff06                 inc dword ptr [esi]
// 00537ba8  834604ff             add dword ptr [esi + 4], -1
// 00537bac  751d                 jne 0x537bcb
// 00537bae  8b4620               mov eax, dword ptr [esi + 0x20]
// 00537bb1  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00537bb4  50                   push eax
// 00537bb5  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00537bb8  ffd0                 call eax
// 00537bba  83c404               add esp, 4
// 00537bbd  84c0                 test al, al
// 00537bbf  7426                 je 0x537be7
// 00537bc1  8b0b                 mov ecx, dword ptr [ebx]
// 00537bc3  890e                 mov dword ptr [esi], ecx
// 00537bc5  8b5304               mov edx, dword ptr [ebx + 4]
// 00537bc8  895604               mov dword ptr [esi + 4], edx
// 00537bcb  83ed08               sub ebp, 8
// 00537bce  c1e708               shl edi, 8
// 00537bd1  83fd08               cmp ebp, 8
// 00537bd4  896c240c             mov dword ptr [esp + 0xc], ebp
// 00537bd8  7d86                 jge 0x537b60
// 00537bda  897e08               mov dword ptr [esi + 8], edi
// 00537bdd  5f                   pop edi
// 00537bde  896e0c               mov dword ptr [esi + 0xc], ebp
// 00537be1  5d                   pop ebp
// 00537be2  b001                 mov al, 1
// 00537be4  5b                   pop ebx
// 00537be5  59                   pop ecx
// 00537be6  c3                   ret 
// 00537be7  5f                   pop edi
// 00537be8  5d                   pop ebp
// 00537be9  32c0                 xor al, al
// 00537beb  5b                   pop ebx
// 00537bec  59                   pop ecx
// 00537bed  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
