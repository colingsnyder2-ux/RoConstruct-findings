// roc 2012-06 0065e490  unit: seg_00650000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065e490
//
// 0065e490  51                   push ecx
// 0065e491  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 0065e497  55                   push ebp
// 0065e498  56                   push esi
// 0065e499  8b742410             mov esi, dword ptr [esp + 0x10]
// 0065e49d  8bacb05c0b0000       mov ebp, dword ptr [eax + esi*4 + 0xb5c]
// 0065e4a4  8d0c36               lea ecx, [esi + esi]
// 0065e4a7  3bca                 cmp ecx, edx
// 0065e4a9  896c2408             mov dword ptr [esp + 8], ebp
// 0065e4ad  0f8f96000000         jg 0x65e549
// 0065e4b3  53                   push ebx
// 0065e4b4  7d32                 jge 0x65e4e8
// 0065e4b6  8bb488600b0000       mov esi, dword ptr [eax + ecx*4 + 0xb60]
// 0065e4bd  8bac885c0b0000       mov ebp, dword ptr [eax + ecx*4 + 0xb5c]
// 0065e4c4  0fb714b7             movzx edx, word ptr [edi + esi*4]
// 0065e4c8  0fb71caf             movzx ebx, word ptr [edi + ebp*4]
// 0065e4cc  663bd3               cmp dx, bx
// 0065e4cf  7212                 jb 0x65e4e3
// 0065e4d1  7511                 jne 0x65e4e4
// 0065e4d3  8a940658140000       mov dl, byte ptr [esi + eax + 0x1458]
// 0065e4da  3a942858140000       cmp dl, byte ptr [eax + ebp + 0x1458]
// 0065e4e1  7701                 ja 0x65e4e4
// 0065e4e3  41                   inc ecx
// 0065e4e4  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0065e4e8  8bb4885c0b0000       mov esi, dword ptr [eax + ecx*4 + 0xb5c]
// 0065e4ef  0fb714af             movzx edx, word ptr [edi + ebp*4]
// 0065e4f3  0fb71cb7             movzx ebx, word ptr [edi + esi*4]
// 0065e4f7  663bd3               cmp dx, bx
// 0065e4fa  722d                 jb 0x65e529
// 0065e4fc  7510                 jne 0x65e50e
// 0065e4fe  8a942858140000       mov dl, byte ptr [eax + ebp + 0x1458]
// 0065e505  3a940658140000       cmp dl, byte ptr [esi + eax + 0x1458]
// 0065e50c  762b                 jbe 0x65e539
// 0065e50e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065e512  89b4905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], esi
// 0065e519  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 0065e51f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0065e523  03c9                 add ecx, ecx
// 0065e525  3bca                 cmp ecx, edx
// 0065e527  7e8b                 jle 0x65e4b4
// 0065e529  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065e52d  5b                   pop ebx
// 0065e52e  5e                   pop esi
// 0065e52f  89ac885c0b0000       mov dword ptr [eax + ecx*4 + 0xb5c], ebp
// 0065e536  5d                   pop ebp
// 0065e537  59                   pop ecx
// 0065e538  c3                   ret 
// 0065e539  8b542414             mov edx, dword ptr [esp + 0x14]
// 0065e53d  5b                   pop ebx
// 0065e53e  5e                   pop esi
// 0065e53f  89ac905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], ebp
// 0065e546  5d                   pop ebp
// 0065e547  59                   pop ecx
// 0065e548  c3                   ret 
// 0065e549  89acb05c0b0000       mov dword ptr [eax + esi*4 + 0xb5c], ebp
// 0065e550  5e                   pop esi
// 0065e551  5d                   pop ebp
// 0065e552  59                   pop ecx
// 0065e553  c3                   ret 
// library zlib-1.2.3/trees.c (function _pqdownheap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
