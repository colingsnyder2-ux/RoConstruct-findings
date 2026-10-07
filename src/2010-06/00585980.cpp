// roc 2010-06 00585980  unit: seg_00580000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00585980
//
// 00585980  51                   push ecx
// 00585981  53                   push ebx
// 00585982  55                   push ebp
// 00585983  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 00585986  8bd8                 mov ebx, eax
// 00585988  57                   push edi
// 00585989  85db                 test ebx, ebx
// 0058598b  7519                 jne 0x5859a6
// 0058598d  8b4620               mov eax, dword ptr [esi + 0x20]
// 00585990  8b08                 mov ecx, dword ptr [eax]
// 00585992  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 00585999  8b4620               mov eax, dword ptr [esi + 0x20]
// 0058599c  8b10                 mov edx, dword ptr [eax]
// 0058599e  50                   push eax
// 0058599f  8b02                 mov eax, dword ptr [edx]
// 005859a1  ffd0                 call eax
// 005859a3  83c404               add esp, 4
// 005859a6  8bcb                 mov ecx, ebx
// 005859a8  bf01000000           mov edi, 1
// 005859ad  d3e7                 shl edi, cl
// 005859af  03eb                 add ebp, ebx
// 005859b1  b918000000           mov ecx, 0x18
// 005859b6  2bcd                 sub ecx, ebp
// 005859b8  4f                   dec edi
// 005859b9  237c2414             and edi, dword ptr [esp + 0x14]
// 005859bd  896c240c             mov dword ptr [esp + 0xc], ebp
// 005859c1  d3e7                 shl edi, cl
// 005859c3  0b7e08               or edi, dword ptr [esi + 8]
// 005859c6  83fd08               cmp ebp, 8
// 005859c9  7c7f                 jl 0x585a4a
// 005859cb  eb03                 jmp 0x5859d0
// 005859cd  8d4900               lea ecx, [ecx]
// 005859d0  8b0e                 mov ecx, dword ptr [esi]
// 005859d2  8bdf                 mov ebx, edi
// 005859d4  c1fb10               sar ebx, 0x10
// 005859d7  81e3ff000000         and ebx, 0xff
// 005859dd  8819                 mov byte ptr [ecx], bl
// 005859df  ff06                 inc dword ptr [esi]
// 005859e1  834604ff             add dword ptr [esi + 4], -1
// 005859e5  7522                 jne 0x585a09
// 005859e7  8b4620               mov eax, dword ptr [esi + 0x20]
// 005859ea  8b6818               mov ebp, dword ptr [eax + 0x18]
// 005859ed  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005859f0  50                   push eax
// 005859f1  ffd2                 call edx
// 005859f3  83c404               add esp, 4
// 005859f6  84c0                 test al, al
// 005859f8  745d                 je 0x585a57
// 005859fa  8b4500               mov eax, dword ptr [ebp]
// 005859fd  8906                 mov dword ptr [esi], eax
// 005859ff  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00585a02  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00585a06  894e04               mov dword ptr [esi + 4], ecx
// 00585a09  81fbff000000         cmp ebx, 0xff
// 00585a0f  752a                 jne 0x585a3b
// 00585a11  8b16                 mov edx, dword ptr [esi]
// 00585a13  c60200               mov byte ptr [edx], 0
// 00585a16  ff06                 inc dword ptr [esi]
// 00585a18  834604ff             add dword ptr [esi + 4], -1
// 00585a1c  751d                 jne 0x585a3b
// 00585a1e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00585a21  8b5818               mov ebx, dword ptr [eax + 0x18]
// 00585a24  50                   push eax
// 00585a25  8b430c               mov eax, dword ptr [ebx + 0xc]
// 00585a28  ffd0                 call eax
// 00585a2a  83c404               add esp, 4
// 00585a2d  84c0                 test al, al
// 00585a2f  7426                 je 0x585a57
// 00585a31  8b0b                 mov ecx, dword ptr [ebx]
// 00585a33  890e                 mov dword ptr [esi], ecx
// 00585a35  8b5304               mov edx, dword ptr [ebx + 4]
// 00585a38  895604               mov dword ptr [esi + 4], edx
// 00585a3b  83ed08               sub ebp, 8
// 00585a3e  c1e708               shl edi, 8
// 00585a41  83fd08               cmp ebp, 8
// 00585a44  896c240c             mov dword ptr [esp + 0xc], ebp
// 00585a48  7d86                 jge 0x5859d0
// 00585a4a  897e08               mov dword ptr [esi + 8], edi
// 00585a4d  5f                   pop edi
// 00585a4e  896e0c               mov dword ptr [esi + 0xc], ebp
// 00585a51  5d                   pop ebp
// 00585a52  b001                 mov al, 1
// 00585a54  5b                   pop ebx
// 00585a55  59                   pop ecx
// 00585a56  c3                   ret 
// 00585a57  5f                   pop edi
// 00585a58  5d                   pop ebp
// 00585a59  32c0                 xor al, al
// 00585a5b  5b                   pop ebx
// 00585a5c  59                   pop ecx
// 00585a5d  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
