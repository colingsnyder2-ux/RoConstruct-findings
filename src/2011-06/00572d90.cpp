// from server: 100% by auto
// roc 2011-06 00572d90  unit: seg_00570000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00572d90
//
// 00572d90  51                   push ecx
// 00572d91  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 00572d97  55                   push ebp
// 00572d98  56                   push esi
// 00572d99  8b742410             mov esi, dword ptr [esp + 0x10]
// 00572d9d  8bacb05c0b0000       mov ebp, dword ptr [eax + esi*4 + 0xb5c]
// 00572da4  8d0c36               lea ecx, [esi + esi]
// 00572da7  3bca                 cmp ecx, edx
// 00572da9  896c2408             mov dword ptr [esp + 8], ebp
// 00572dad  0f8f96000000         jg 0x572e49
// 00572db3  53                   push ebx
// 00572db4  7d32                 jge 0x572de8
// 00572db6  8bb488600b0000       mov esi, dword ptr [eax + ecx*4 + 0xb60]
// 00572dbd  8bac885c0b0000       mov ebp, dword ptr [eax + ecx*4 + 0xb5c]
// 00572dc4  0fb714b7             movzx edx, word ptr [edi + esi*4]
// 00572dc8  0fb71caf             movzx ebx, word ptr [edi + ebp*4]
// 00572dcc  663bd3               cmp dx, bx
// 00572dcf  7212                 jb 0x572de3
// 00572dd1  7511                 jne 0x572de4
// 00572dd3  8a940658140000       mov dl, byte ptr [esi + eax + 0x1458]
// 00572dda  3a942858140000       cmp dl, byte ptr [eax + ebp + 0x1458]
// 00572de1  7701                 ja 0x572de4
// 00572de3  41                   inc ecx
// 00572de4  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00572de8  8bb4885c0b0000       mov esi, dword ptr [eax + ecx*4 + 0xb5c]
// 00572def  0fb714af             movzx edx, word ptr [edi + ebp*4]
// 00572df3  0fb71cb7             movzx ebx, word ptr [edi + esi*4]
// 00572df7  663bd3               cmp dx, bx
// 00572dfa  722d                 jb 0x572e29
// 00572dfc  7510                 jne 0x572e0e
// 00572dfe  8a942858140000       mov dl, byte ptr [eax + ebp + 0x1458]
// 00572e05  3a940658140000       cmp dl, byte ptr [esi + eax + 0x1458]
// 00572e0c  762b                 jbe 0x572e39
// 00572e0e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00572e12  89b4905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], esi
// 00572e19  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 00572e1f  894c2414             mov dword ptr [esp + 0x14], ecx
// 00572e23  03c9                 add ecx, ecx
// 00572e25  3bca                 cmp ecx, edx
// 00572e27  7e8b                 jle 0x572db4
// 00572e29  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00572e2d  5b                   pop ebx
// 00572e2e  5e                   pop esi
// 00572e2f  89ac885c0b0000       mov dword ptr [eax + ecx*4 + 0xb5c], ebp
// 00572e36  5d                   pop ebp
// 00572e37  59                   pop ecx
// 00572e38  c3                   ret 
// 00572e39  8b542414             mov edx, dword ptr [esp + 0x14]
// 00572e3d  5b                   pop ebx
// 00572e3e  5e                   pop esi
// 00572e3f  89ac905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], ebp
// 00572e46  5d                   pop ebp
// 00572e47  59                   pop ecx
// 00572e48  c3                   ret 
// 00572e49  89acb05c0b0000       mov dword ptr [eax + esi*4 + 0xb5c], ebp
// 00572e50  5e                   pop esi
// 00572e51  5d                   pop ebp
// 00572e52  59                   pop ecx
// 00572e53  c3                   ret 
// library zlib-1.2.3/trees.c (function _pqdownheap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
