// from server: 100% by auto
// roc 2010-06 0057d390  unit: seg_00570000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057d390
//
// 0057d390  53                   push ebx
// 0057d391  56                   push esi
// 0057d392  57                   push edi
// 0057d393  8bd9                 mov ebx, ecx
// 0057d395  8bf2                 mov esi, edx
// 0057d397  e894ffffff           call 0x57d330
// 0057d39c  837c241000           cmp dword ptr [esp + 0x10], 0
// 0057d3a1  c780b416000008000000 mov dword ptr [eax + 0x16b4], 8
// 0057d3ab  bf01000000           mov edi, 1
// 0057d3b0  7442                 je 0x57d3f4
// 0057d3b2  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d3b5  8b5008               mov edx, dword ptr [eax + 8]
// 0057d3b8  881c11               mov byte ptr [ecx + edx], bl
// 0057d3bb  017814               add dword ptr [eax + 0x14], edi
// 0057d3be  8b5008               mov edx, dword ptr [eax + 8]
// 0057d3c1  55                   push ebp
// 0057d3c2  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0057d3c5  8bcb                 mov ecx, ebx
// 0057d3c7  c1e908               shr ecx, 8
// 0057d3ca  880c2a               mov byte ptr [edx + ebp], cl
// 0057d3cd  017814               add dword ptr [eax + 0x14], edi
// 0057d3d0  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0057d3d3  8b5008               mov edx, dword ptr [eax + 8]
// 0057d3d6  8acb                 mov cl, bl
// 0057d3d8  f6d1                 not cl
// 0057d3da  880c2a               mov byte ptr [edx + ebp], cl
// 0057d3dd  017814               add dword ptr [eax + 0x14], edi
// 0057d3e0  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0057d3e3  8b5008               mov edx, dword ptr [eax + 8]
// 0057d3e6  8bcb                 mov ecx, ebx
// 0057d3e8  f7d1                 not ecx
// 0057d3ea  c1e908               shr ecx, 8
// 0057d3ed  880c2a               mov byte ptr [edx + ebp], cl
// 0057d3f0  017814               add dword ptr [eax + 0x14], edi
// 0057d3f3  5d                   pop ebp
// 0057d3f4  85db                 test ebx, ebx
// 0057d3f6  741e                 je 0x57d416
// 0057d3f8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0057d3fb  8b5008               mov edx, dword ptr [eax + 8]
// 0057d3fe  2bdf                 sub ebx, edi
// 0057d400  895c2410             mov dword ptr [esp + 0x10], ebx
// 0057d404  8a1e                 mov bl, byte ptr [esi]
// 0057d406  881c11               mov byte ptr [ecx + edx], bl
// 0057d409  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0057d40d  017814               add dword ptr [eax + 0x14], edi
// 0057d410  03f7                 add esi, edi
// 0057d412  85db                 test ebx, ebx
// 0057d414  75e2                 jne 0x57d3f8
// 0057d416  5f                   pop edi
// 0057d417  5e                   pop esi
// 0057d418  5b                   pop ebx
// 0057d419  c3                   ret 
// library zlib-1.2.3/trees.c (function _copy_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
