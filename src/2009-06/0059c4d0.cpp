// roc 2009-06 0059c4d0  unit: seg_00590000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059c4d0
//
// 0059c4d0  53                   push ebx
// 0059c4d1  55                   push ebp
// 0059c4d2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0059c4d6  8b5d10               mov ebx, dword ptr [ebp + 0x10]
// 0059c4d9  83bb7c01000000       cmp dword ptr [ebx + 0x17c], 0
// 0059c4e0  56                   push esi
// 0059c4e1  8b7500               mov esi, dword ptr [ebp]
// 0059c4e4  57                   push edi
// 0059c4e5  8b7d04               mov edi, dword ptr [ebp + 4]
// 0059c4e8  0f8597000000         jne 0x59c585
// 0059c4ee  837c241c19           cmp dword ptr [esp + 0x1c], 0x19
// 0059c4f3  0f8dd7000000         jge 0x59c5d0
// 0059c4f9  8da42400000000       lea esp, [esp]
// 0059c500  85ff                 test edi, edi
// 0059c502  7518                 jne 0x59c51c
// 0059c504  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0059c507  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0059c50a  53                   push ebx
// 0059c50b  ffd1                 call ecx
// 0059c50d  83c404               add esp, 4
// 0059c510  84c0                 test al, al
// 0059c512  7464                 je 0x59c578
// 0059c514  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0059c517  8b30                 mov esi, dword ptr [eax]
// 0059c519  8b7804               mov edi, dword ptr [eax + 4]
// 0059c51c  0fb606               movzx eax, byte ptr [esi]
// 0059c51f  4f                   dec edi
// 0059c520  46                   inc esi
// 0059c521  3dff000000           cmp eax, 0xff
// 0059c526  7531                 jne 0x59c559
// 0059c528  85ff                 test edi, edi
// 0059c52a  7518                 jne 0x59c544
// 0059c52c  8b5318               mov edx, dword ptr [ebx + 0x18]
// 0059c52f  8b420c               mov eax, dword ptr [edx + 0xc]
// 0059c532  53                   push ebx
// 0059c533  ffd0                 call eax
// 0059c535  83c404               add esp, 4
// 0059c538  84c0                 test al, al
// 0059c53a  743c                 je 0x59c578
// 0059c53c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0059c53f  8b30                 mov esi, dword ptr [eax]
// 0059c541  8b7804               mov edi, dword ptr [eax + 4]
// 0059c544  0fb606               movzx eax, byte ptr [esi]
// 0059c547  4f                   dec edi
// 0059c548  46                   inc esi
// 0059c549  3dff000000           cmp eax, 0xff
// 0059c54e  74d8                 je 0x59c528
// 0059c550  85c0                 test eax, eax
// 0059c552  752b                 jne 0x59c57f
// 0059c554  b8ff000000           mov eax, 0xff
// 0059c559  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059c55d  c1e108               shl ecx, 8
// 0059c560  0bc8                 or ecx, eax
// 0059c562  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059c566  83c008               add eax, 8
// 0059c569  83f819               cmp eax, 0x19
// 0059c56c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059c570  8944241c             mov dword ptr [esp + 0x1c], eax
// 0059c574  7c8a                 jl 0x59c500
// 0059c576  eb58                 jmp 0x59c5d0
// 0059c578  5f                   pop edi
// 0059c579  5e                   pop esi
// 0059c57a  5d                   pop ebp
// 0059c57b  32c0                 xor al, al
// 0059c57d  5b                   pop ebx
// 0059c57e  c3                   ret 
// 0059c57f  89837c010000         mov dword ptr [ebx + 0x17c], eax
// 0059c585  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059c589  39542420             cmp dword ptr [esp + 0x20], edx
// 0059c58d  7e41                 jle 0x59c5d0
// 0059c58f  8b8398010000         mov eax, dword ptr [ebx + 0x198]
// 0059c595  80780800             cmp byte ptr [eax + 8], 0
// 0059c599  7520                 jne 0x59c5bb
// 0059c59b  8b0b                 mov ecx, dword ptr [ebx]
// 0059c59d  c7411475000000       mov dword ptr [ecx + 0x14], 0x75
// 0059c5a4  8b13                 mov edx, dword ptr [ebx]
// 0059c5a6  8b4204               mov eax, dword ptr [edx + 4]
// 0059c5a9  6aff                 push -1
// 0059c5ab  53                   push ebx
// 0059c5ac  ffd0                 call eax
// 0059c5ae  8b8b98010000         mov ecx, dword ptr [ebx + 0x198]
// 0059c5b4  83c408               add esp, 8
// 0059c5b7  c6410801             mov byte ptr [ecx + 8], 1
// 0059c5bb  b919000000           mov ecx, 0x19
// 0059c5c0  2b4c241c             sub ecx, dword ptr [esp + 0x1c]
// 0059c5c4  c744241c19000000     mov dword ptr [esp + 0x1c], 0x19
// 0059c5cc  d3642418             shl dword ptr [esp + 0x18], cl
// 0059c5d0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059c5d4  8b542418             mov edx, dword ptr [esp + 0x18]
// 0059c5d8  897d04               mov dword ptr [ebp + 4], edi
// 0059c5db  5f                   pop edi
// 0059c5dc  897500               mov dword ptr [ebp], esi
// 0059c5df  5e                   pop esi
// 0059c5e0  89450c               mov dword ptr [ebp + 0xc], eax
// 0059c5e3  895508               mov dword ptr [ebp + 8], edx
// 0059c5e6  5d                   pop ebp
// 0059c5e7  b001                 mov al, 1
// 0059c5e9  5b                   pop ebx
// 0059c5ea  c3                   ret 
// library jpeg-6b/jdhuff.c (function _jpeg_fill_bit_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
