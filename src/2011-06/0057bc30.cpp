// from server: 100% by auto
// roc 2011-06 0057bc30  unit: seg_00570000  size: 222 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057bc30
//
// 0057bc30  51                   push ecx
// 0057bc31  53                   push ebx
// 0057bc32  55                   push ebp
// 0057bc33  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0057bc36  8bd8                 mov ebx, eax
// 0057bc38  57                   push edi
// 0057bc39  85db                 test ebx, ebx
// 0057bc3b  7519                 jne 0x57bc56
// 0057bc3d  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057bc40  8b08                 mov ecx, dword ptr [eax]
// 0057bc42  c7411428000000       mov dword ptr [ecx + 0x14], 0x28
// 0057bc49  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057bc4c  8b10                 mov edx, dword ptr [eax]
// 0057bc4e  50                   push eax
// 0057bc4f  8b02                 mov eax, dword ptr [edx]
// 0057bc51  ffd0                 call eax
// 0057bc53  83c404               add esp, 4
// 0057bc56  8bcb                 mov ecx, ebx
// 0057bc58  bf01000000           mov edi, 1
// 0057bc5d  d3e7                 shl edi, cl
// 0057bc5f  03eb                 add ebp, ebx
// 0057bc61  b918000000           mov ecx, 0x18
// 0057bc66  2bcd                 sub ecx, ebp
// 0057bc68  4f                   dec edi
// 0057bc69  237c2414             and edi, dword ptr [esp + 0x14]
// 0057bc6d  896c240c             mov dword ptr [esp + 0xc], ebp
// 0057bc71  d3e7                 shl edi, cl
// 0057bc73  0b7e08               or edi, dword ptr [esi + 8]
// 0057bc76  83fd08               cmp ebp, 8
// 0057bc79  7c7f                 jl 0x57bcfa
// 0057bc7b  eb03                 jmp 0x57bc80
// 0057bc7d  8d4900               lea ecx, [ecx]
// 0057bc80  8b0e                 mov ecx, dword ptr [esi]
// 0057bc82  8bdf                 mov ebx, edi
// 0057bc84  c1fb10               sar ebx, 0x10
// 0057bc87  81e3ff000000         and ebx, 0xff
// 0057bc8d  8819                 mov byte ptr [ecx], bl
// 0057bc8f  ff06                 inc dword ptr [esi]
// 0057bc91  834604ff             add dword ptr [esi + 4], -1
// 0057bc95  7522                 jne 0x57bcb9
// 0057bc97  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057bc9a  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0057bc9d  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0057bca0  50                   push eax
// 0057bca1  ffd2                 call edx
// 0057bca3  83c404               add esp, 4
// 0057bca6  84c0                 test al, al
// 0057bca8  745d                 je 0x57bd07
// 0057bcaa  8b4500               mov eax, dword ptr [ebp]
// 0057bcad  8906                 mov dword ptr [esi], eax
// 0057bcaf  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0057bcb2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0057bcb6  894e04               mov dword ptr [esi + 4], ecx
// 0057bcb9  81fbff000000         cmp ebx, 0xff
// 0057bcbf  752a                 jne 0x57bceb
// 0057bcc1  8b16                 mov edx, dword ptr [esi]
// 0057bcc3  c60200               mov byte ptr [edx], 0
// 0057bcc6  ff06                 inc dword ptr [esi]
// 0057bcc8  834604ff             add dword ptr [esi + 4], -1
// 0057bccc  751d                 jne 0x57bceb
// 0057bcce  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057bcd1  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0057bcd4  50                   push eax
// 0057bcd5  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0057bcd8  ffd0                 call eax
// 0057bcda  83c404               add esp, 4
// 0057bcdd  84c0                 test al, al
// 0057bcdf  7426                 je 0x57bd07
// 0057bce1  8b0b                 mov ecx, dword ptr [ebx]
// 0057bce3  890e                 mov dword ptr [esi], ecx
// 0057bce5  8b5304               mov edx, dword ptr [ebx + 4]
// 0057bce8  895604               mov dword ptr [esi + 4], edx
// 0057bceb  83ed08               sub ebp, 8
// 0057bcee  c1e708               shl edi, 8
// 0057bcf1  83fd08               cmp ebp, 8
// 0057bcf4  896c240c             mov dword ptr [esp + 0xc], ebp
// 0057bcf8  7d86                 jge 0x57bc80
// 0057bcfa  897e08               mov dword ptr [esi + 8], edi
// 0057bcfd  5f                   pop edi
// 0057bcfe  896e0c               mov dword ptr [esi + 0xc], ebp
// 0057bd01  5d                   pop ebp
// 0057bd02  b001                 mov al, 1
// 0057bd04  5b                   pop ebx
// 0057bd05  59                   pop ecx
// 0057bd06  c3                   ret 
// 0057bd07  5f                   pop edi
// 0057bd08  5d                   pop ebp
// 0057bd09  32c0                 xor al, al
// 0057bd0b  5b                   pop ebx
// 0057bd0c  59                   pop ecx
// 0057bd0d  c3                   ret 
// library jpeg-6b/jchuff.c (function _emit_bits)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
