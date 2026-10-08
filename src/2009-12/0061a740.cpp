// roc 2009-12 0061a740  unit: seg_00610000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a740
//
// 0061a740  51                   push ecx
// 0061a741  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 0061a747  55                   push ebp
// 0061a748  56                   push esi
// 0061a749  8b742410             mov esi, dword ptr [esp + 0x10]
// 0061a74d  8bacb05c0b0000       mov ebp, dword ptr [eax + esi*4 + 0xb5c]
// 0061a754  8d0c36               lea ecx, [esi + esi]
// 0061a757  3bca                 cmp ecx, edx
// 0061a759  896c2408             mov dword ptr [esp + 8], ebp
// 0061a75d  0f8f96000000         jg 0x61a7f9
// 0061a763  53                   push ebx
// 0061a764  7d32                 jge 0x61a798
// 0061a766  8bb488600b0000       mov esi, dword ptr [eax + ecx*4 + 0xb60]
// 0061a76d  8bac885c0b0000       mov ebp, dword ptr [eax + ecx*4 + 0xb5c]
// 0061a774  0fb714b7             movzx edx, word ptr [edi + esi*4]
// 0061a778  0fb71caf             movzx ebx, word ptr [edi + ebp*4]
// 0061a77c  663bd3               cmp dx, bx
// 0061a77f  7212                 jb 0x61a793
// 0061a781  7511                 jne 0x61a794
// 0061a783  8a940658140000       mov dl, byte ptr [esi + eax + 0x1458]
// 0061a78a  3a942858140000       cmp dl, byte ptr [eax + ebp + 0x1458]
// 0061a791  7701                 ja 0x61a794
// 0061a793  41                   inc ecx
// 0061a794  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0061a798  8bb4885c0b0000       mov esi, dword ptr [eax + ecx*4 + 0xb5c]
// 0061a79f  0fb714af             movzx edx, word ptr [edi + ebp*4]
// 0061a7a3  0fb71cb7             movzx ebx, word ptr [edi + esi*4]
// 0061a7a7  663bd3               cmp dx, bx
// 0061a7aa  722d                 jb 0x61a7d9
// 0061a7ac  7510                 jne 0x61a7be
// 0061a7ae  8a942858140000       mov dl, byte ptr [eax + ebp + 0x1458]
// 0061a7b5  3a940658140000       cmp dl, byte ptr [esi + eax + 0x1458]
// 0061a7bc  762b                 jbe 0x61a7e9
// 0061a7be  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061a7c2  89b4905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], esi
// 0061a7c9  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 0061a7cf  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061a7d3  03c9                 add ecx, ecx
// 0061a7d5  3bca                 cmp ecx, edx
// 0061a7d7  7e8b                 jle 0x61a764
// 0061a7d9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0061a7dd  5b                   pop ebx
// 0061a7de  5e                   pop esi
// 0061a7df  89ac885c0b0000       mov dword ptr [eax + ecx*4 + 0xb5c], ebp
// 0061a7e6  5d                   pop ebp
// 0061a7e7  59                   pop ecx
// 0061a7e8  c3                   ret 
// 0061a7e9  8b542414             mov edx, dword ptr [esp + 0x14]
// 0061a7ed  5b                   pop ebx
// 0061a7ee  5e                   pop esi
// 0061a7ef  89ac905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], ebp
// 0061a7f6  5d                   pop ebp
// 0061a7f7  59                   pop ecx
// 0061a7f8  c3                   ret 
// 0061a7f9  89acb05c0b0000       mov dword ptr [eax + esi*4 + 0xb5c], ebp
// 0061a800  5e                   pop esi
// 0061a801  5d                   pop ebp
// 0061a802  59                   pop ecx
// 0061a803  c3                   ret 
// library zlib-1.2.3/trees.c (function _pqdownheap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
