// roc 2007-03 00724630  unit: seg_00720000  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00724630
//
// 00724630  51                   push ecx
// 00724631  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 00724637  55                   push ebp
// 00724638  56                   push esi
// 00724639  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072463d  8bacb05c0b0000       mov ebp, dword ptr [eax + esi*4 + 0xb5c]
// 00724644  8d0c36               lea ecx, [esi + esi]
// 00724647  3bca                 cmp ecx, edx
// 00724649  896c2408             mov dword ptr [esp + 8], ebp
// 0072464d  0f8f98000000         jg 0x7246eb
// 00724653  53                   push ebx
// 00724654  7d34                 jge 0x72468a
// 00724656  8bb488600b0000       mov esi, dword ptr [eax + ecx*4 + 0xb60]
// 0072465d  8bac885c0b0000       mov ebp, dword ptr [eax + ecx*4 + 0xb5c]
// 00724664  0fb714b7             movzx edx, word ptr [edi + esi*4]
// 00724668  0fb71caf             movzx ebx, word ptr [edi + ebp*4]
// 0072466c  663bd3               cmp dx, bx
// 0072466f  7212                 jb 0x724683
// 00724671  7513                 jne 0x724686
// 00724673  8a940658140000       mov dl, byte ptr [esi + eax + 0x1458]
// 0072467a  3a942858140000       cmp dl, byte ptr [eax + ebp + 0x1458]
// 00724681  7703                 ja 0x724686
// 00724683  83c101               add ecx, 1
// 00724686  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0072468a  8bb4885c0b0000       mov esi, dword ptr [eax + ecx*4 + 0xb5c]
// 00724691  0fb714af             movzx edx, word ptr [edi + ebp*4]
// 00724695  0fb71cb7             movzx ebx, word ptr [edi + esi*4]
// 00724699  663bd3               cmp dx, bx
// 0072469c  722d                 jb 0x7246cb
// 0072469e  7510                 jne 0x7246b0
// 007246a0  8a942858140000       mov dl, byte ptr [eax + ebp + 0x1458]
// 007246a7  3a940658140000       cmp dl, byte ptr [esi + eax + 0x1458]
// 007246ae  762b                 jbe 0x7246db
// 007246b0  8b542414             mov edx, dword ptr [esp + 0x14]
// 007246b4  89b4905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], esi
// 007246bb  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 007246c1  894c2414             mov dword ptr [esp + 0x14], ecx
// 007246c5  03c9                 add ecx, ecx
// 007246c7  3bca                 cmp ecx, edx
// 007246c9  7e89                 jle 0x724654
// 007246cb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007246cf  5b                   pop ebx
// 007246d0  5e                   pop esi
// 007246d1  89ac885c0b0000       mov dword ptr [eax + ecx*4 + 0xb5c], ebp
// 007246d8  5d                   pop ebp
// 007246d9  59                   pop ecx
// 007246da  c3                   ret 
// 007246db  8b542414             mov edx, dword ptr [esp + 0x14]
// 007246df  5b                   pop ebx
// 007246e0  5e                   pop esi
// 007246e1  89ac905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], ebp
// 007246e8  5d                   pop ebp
// 007246e9  59                   pop ecx
// 007246ea  c3                   ret 
// 007246eb  89acb05c0b0000       mov dword ptr [eax + esi*4 + 0xb5c], ebp
// 007246f2  5e                   pop esi
// 007246f3  5d                   pop ebp
// 007246f4  59                   pop ecx
// 007246f5  c3                   ret 
// library zlib-1.2.3/trees.c (function _pqdownheap)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
