// roc 2010-06 0057c2a0  unit: seg_00570000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057c2a0
//
// 0057c2a0  51                   push ecx
// 0057c2a1  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 0057c2a7  55                   push ebp
// 0057c2a8  56                   push esi
// 0057c2a9  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057c2ad  8bacb05c0b0000       mov ebp, dword ptr [eax + esi*4 + 0xb5c]
// 0057c2b4  8d0c36               lea ecx, [esi + esi]
// 0057c2b7  3bca                 cmp ecx, edx
// 0057c2b9  896c2408             mov dword ptr [esp + 8], ebp
// 0057c2bd  0f8f96000000         jg 0x57c359
// 0057c2c3  53                   push ebx
// 0057c2c4  7d32                 jge 0x57c2f8
// 0057c2c6  8bb488600b0000       mov esi, dword ptr [eax + ecx*4 + 0xb60]
// 0057c2cd  8bac885c0b0000       mov ebp, dword ptr [eax + ecx*4 + 0xb5c]
// 0057c2d4  0fb714b7             movzx edx, word ptr [edi + esi*4]
// 0057c2d8  0fb71caf             movzx ebx, word ptr [edi + ebp*4]
// 0057c2dc  663bd3               cmp dx, bx
// 0057c2df  7212                 jb 0x57c2f3
// 0057c2e1  7511                 jne 0x57c2f4
// 0057c2e3  8a940658140000       mov dl, byte ptr [esi + eax + 0x1458]
// 0057c2ea  3a942858140000       cmp dl, byte ptr [eax + ebp + 0x1458]
// 0057c2f1  7701                 ja 0x57c2f4
// 0057c2f3  41                   inc ecx
// 0057c2f4  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0057c2f8  8bb4885c0b0000       mov esi, dword ptr [eax + ecx*4 + 0xb5c]
// 0057c2ff  0fb714af             movzx edx, word ptr [edi + ebp*4]
// 0057c303  0fb71cb7             movzx ebx, word ptr [edi + esi*4]
// 0057c307  663bd3               cmp dx, bx
// 0057c30a  722d                 jb 0x57c339
// 0057c30c  7510                 jne 0x57c31e
// 0057c30e  8a942858140000       mov dl, byte ptr [eax + ebp + 0x1458]
// 0057c315  3a940658140000       cmp dl, byte ptr [esi + eax + 0x1458]
// 0057c31c  762b                 jbe 0x57c349
// 0057c31e  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057c322  89b4905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], esi
// 0057c329  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 0057c32f  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057c333  03c9                 add ecx, ecx
// 0057c335  3bca                 cmp ecx, edx
// 0057c337  7e8b                 jle 0x57c2c4
// 0057c339  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0057c33d  5b                   pop ebx
// 0057c33e  5e                   pop esi
// 0057c33f  89ac885c0b0000       mov dword ptr [eax + ecx*4 + 0xb5c], ebp
// 0057c346  5d                   pop ebp
// 0057c347  59                   pop ecx
// 0057c348  c3                   ret 
// 0057c349  8b542414             mov edx, dword ptr [esp + 0x14]
// 0057c34d  5b                   pop ebx
// 0057c34e  5e                   pop esi
// 0057c34f  89ac905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], ebp
// 0057c356  5d                   pop ebp
// 0057c357  59                   pop ecx
// 0057c358  c3                   ret 
// 0057c359  89acb05c0b0000       mov dword ptr [eax + esi*4 + 0xb5c], ebp
// 0057c360  5e                   pop esi
// 0057c361  5d                   pop ebp
// 0057c362  59                   pop ecx
// 0057c363  c3                   ret 
// library zlib-1.2.3/trees.c (function _pqdownheap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
