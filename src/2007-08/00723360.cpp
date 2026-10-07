// roc 2007-08 00723360  unit: CXTIconHandle  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00723360
//
// 00723360  51                   push ecx
// 00723361  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 00723367  55                   push ebp
// 00723368  56                   push esi
// 00723369  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072336d  8bacb05c0b0000       mov ebp, dword ptr [eax + esi*4 + 0xb5c]
// 00723374  8d0c36               lea ecx, [esi + esi]
// 00723377  3bca                 cmp ecx, edx
// 00723379  896c2408             mov dword ptr [esp + 8], ebp
// 0072337d  0f8f98000000         jg 0x72341b
// 00723383  53                   push ebx
// 00723384  7d34                 jge 0x7233ba
// 00723386  8bb488600b0000       mov esi, dword ptr [eax + ecx*4 + 0xb60]
// 0072338d  8bac885c0b0000       mov ebp, dword ptr [eax + ecx*4 + 0xb5c]
// 00723394  0fb714b7             movzx edx, word ptr [edi + esi*4]
// 00723398  0fb71caf             movzx ebx, word ptr [edi + ebp*4]
// 0072339c  663bd3               cmp dx, bx
// 0072339f  7212                 jb 0x7233b3
// 007233a1  7513                 jne 0x7233b6
// 007233a3  8a940658140000       mov dl, byte ptr [esi + eax + 0x1458]
// 007233aa  3a942858140000       cmp dl, byte ptr [eax + ebp + 0x1458]
// 007233b1  7703                 ja 0x7233b6
// 007233b3  83c101               add ecx, 1
// 007233b6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007233ba  8bb4885c0b0000       mov esi, dword ptr [eax + ecx*4 + 0xb5c]
// 007233c1  0fb714af             movzx edx, word ptr [edi + ebp*4]
// 007233c5  0fb71cb7             movzx ebx, word ptr [edi + esi*4]
// 007233c9  663bd3               cmp dx, bx
// 007233cc  722d                 jb 0x7233fb
// 007233ce  7510                 jne 0x7233e0
// 007233d0  8a942858140000       mov dl, byte ptr [eax + ebp + 0x1458]
// 007233d7  3a940658140000       cmp dl, byte ptr [esi + eax + 0x1458]
// 007233de  762b                 jbe 0x72340b
// 007233e0  8b542414             mov edx, dword ptr [esp + 0x14]
// 007233e4  89b4905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], esi
// 007233eb  8b9050140000         mov edx, dword ptr [eax + 0x1450]
// 007233f1  894c2414             mov dword ptr [esp + 0x14], ecx
// 007233f5  03c9                 add ecx, ecx
// 007233f7  3bca                 cmp ecx, edx
// 007233f9  7e89                 jle 0x723384
// 007233fb  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007233ff  5b                   pop ebx
// 00723400  5e                   pop esi
// 00723401  89ac885c0b0000       mov dword ptr [eax + ecx*4 + 0xb5c], ebp
// 00723408  5d                   pop ebp
// 00723409  59                   pop ecx
// 0072340a  c3                   ret 
// 0072340b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0072340f  5b                   pop ebx
// 00723410  5e                   pop esi
// 00723411  89ac905c0b0000       mov dword ptr [eax + edx*4 + 0xb5c], ebp
// 00723418  5d                   pop ebp
// 00723419  59                   pop ecx
// 0072341a  c3                   ret 
// 0072341b  89acb05c0b0000       mov dword ptr [eax + esi*4 + 0xb5c], ebp
// 00723422  5e                   pop esi
// 00723423  5d                   pop ebp
// 00723424  59                   pop ecx
// 00723425  c3                   ret 
// library zlib-1.2.3/trees.c (function _pqdownheap)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
