// roc 2009-06 00598710  unit: seg_00590000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598710
//
// 00598710  51                   push ecx
// 00598711  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 00598717  55                   push ebp
// 00598718  56                   push esi
// 00598719  8b742410             mov esi, dword ptr [esp + 0x10]
// 0059871d  8bacb05c0b0000       mov ebp, dword ptr [eax + esi*4 + 0xb5c]
// 00598724  8d0c36               lea ecx, [esi + esi]
// 00598727  3bca                 cmp ecx, edx
// 00598729  896c2408             mov dword ptr [esp + 8], ebp
// 0059872d  0f8f96000000         jg 0x5987c9
// 00598733  53                   push ebx
// 00598734  7d32                 jge 0x598768
// 00598736  8bb488600b0000       mov esi, dword ptr [eax + ecx*4 + 0xb60]
// 0059873d  8bac885c0b0000       mov ebp, dword ptr [eax + ecx*4 + 0xb5c]
// 00598744  0fb714b7             movzx edx, word ptr [edi + esi*4]
// 00598748  0fb71caf             movzx ebx, word ptr [edi + ebp*4]
// 0059874c  663bd3               cmp dx, bx
// 0059874f  7212                 jb 0x598763
// 00598751  7511                 jne 0x598764
// 00598753  8a940658140000       mov dl, byte ptr [esi + eax + 0x1458]
// 0059875a  3a942858140000       cmp dl, byte ptr [eax + ebp + 0x1458]
// 00598761  7701                 ja 0x598764
// 00598763  41                   inc ecx
// 00598764  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00598768  8bb4885c0b0000       mov esi, dword ptr [eax + ecx*4 + 0xb5c]
// 0059876f  0fb714af             movzx edx, word ptr [edi + ebp*4]
// 00598773  0fb71cb7             movzx ebx, word ptr [edi + esi*4]
// 00598777  663bd3               cmp dx, bx
// 0059877a  722d                 jb 0x5987a9
// 0059877c  7510                 jne 0x59878e
// 0059877e  8a942858140000       mov dl, byte ptr [eax + ebp + 0x1458]
// 00598785  3a940658140000       cmp dl, byte ptr [esi + eax + 0x1458]
// 0059878c  762b                 jbe 0x5987b9
// 0059878e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00598792  89b4905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], esi
// 00598799  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 0059879f  894c2414             mov dword ptr [esp + 0x14], ecx
// 005987a3  03c9                 add ecx, ecx
// 005987a5  3bca                 cmp ecx, edx
// 005987a7  7e8b                 jle 0x598734
// 005987a9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005987ad  5b                   pop ebx
// 005987ae  5e                   pop esi
// 005987af  89ac885c0b0000       mov dword ptr [eax + ecx*4 + 0xb5c], ebp
// 005987b6  5d                   pop ebp
// 005987b7  59                   pop ecx
// 005987b8  c3                   ret 
// 005987b9  8b542414             mov edx, dword ptr [esp + 0x14]
// 005987bd  5b                   pop ebx
// 005987be  5e                   pop esi
// 005987bf  89ac905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], ebp
// 005987c6  5d                   pop ebp
// 005987c7  59                   pop ecx
// 005987c8  c3                   ret 
// 005987c9  89acb05c0b0000       mov dword ptr [eax + esi*4 + 0xb5c], ebp
// 005987d0  5e                   pop esi
// 005987d1  5d                   pop ebp
// 005987d2  59                   pop ecx
// 005987d3  c3                   ret 
// library zlib-1.2.3/trees.c (function _pqdownheap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
