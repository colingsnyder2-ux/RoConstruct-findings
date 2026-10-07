// roc 2008-06 007a4210  unit: CXTIconHandle  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a4210
//
// 007a4210  51                   push ecx
// 007a4211  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 007a4217  55                   push ebp
// 007a4218  56                   push esi
// 007a4219  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a421d  8bacb05c0b0000       mov ebp, dword ptr [eax + esi*4 + 0xb5c]
// 007a4224  8d0c36               lea ecx, [esi + esi]
// 007a4227  3bca                 cmp ecx, edx
// 007a4229  896c2408             mov dword ptr [esp + 8], ebp
// 007a422d  0f8f96000000         jg 0x7a42c9
// 007a4233  53                   push ebx
// 007a4234  7d32                 jge 0x7a4268
// 007a4236  8bb488600b0000       mov esi, dword ptr [eax + ecx*4 + 0xb60]
// 007a423d  8bac885c0b0000       mov ebp, dword ptr [eax + ecx*4 + 0xb5c]
// 007a4244  0fb714b7             movzx edx, word ptr [edi + esi*4]
// 007a4248  0fb71caf             movzx ebx, word ptr [edi + ebp*4]
// 007a424c  663bd3               cmp dx, bx
// 007a424f  7212                 jb 0x7a4263
// 007a4251  7511                 jne 0x7a4264
// 007a4253  8a940658140000       mov dl, byte ptr [esi + eax + 0x1458]
// 007a425a  3a942858140000       cmp dl, byte ptr [eax + ebp + 0x1458]
// 007a4261  7701                 ja 0x7a4264
// 007a4263  41                   inc ecx
// 007a4264  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007a4268  8bb4885c0b0000       mov esi, dword ptr [eax + ecx*4 + 0xb5c]
// 007a426f  0fb714af             movzx edx, word ptr [edi + ebp*4]
// 007a4273  0fb71cb7             movzx ebx, word ptr [edi + esi*4]
// 007a4277  663bd3               cmp dx, bx
// 007a427a  722d                 jb 0x7a42a9
// 007a427c  7510                 jne 0x7a428e
// 007a427e  8a942858140000       mov dl, byte ptr [eax + ebp + 0x1458]
// 007a4285  3a940658140000       cmp dl, byte ptr [esi + eax + 0x1458]
// 007a428c  762b                 jbe 0x7a42b9
// 007a428e  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a4292  89b4905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], esi
// 007a4299  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 007a429f  894c2414             mov dword ptr [esp + 0x14], ecx
// 007a42a3  03c9                 add ecx, ecx
// 007a42a5  3bca                 cmp ecx, edx
// 007a42a7  7e8b                 jle 0x7a4234
// 007a42a9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007a42ad  5b                   pop ebx
// 007a42ae  5e                   pop esi
// 007a42af  89ac885c0b0000       mov dword ptr [eax + ecx*4 + 0xb5c], ebp
// 007a42b6  5d                   pop ebp
// 007a42b7  59                   pop ecx
// 007a42b8  c3                   ret 
// 007a42b9  8b542414             mov edx, dword ptr [esp + 0x14]
// 007a42bd  5b                   pop ebx
// 007a42be  5e                   pop esi
// 007a42bf  89ac905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], ebp
// 007a42c6  5d                   pop ebp
// 007a42c7  59                   pop ecx
// 007a42c8  c3                   ret 
// 007a42c9  89acb05c0b0000       mov dword ptr [eax + esi*4 + 0xb5c], ebp
// 007a42d0  5e                   pop esi
// 007a42d1  5d                   pop ebp
// 007a42d2  59                   pop ecx
// 007a42d3  c3                   ret 
// library zlib-1.2.3/trees.c (function _pqdownheap)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
