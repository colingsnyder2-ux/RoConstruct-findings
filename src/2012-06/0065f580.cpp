// from server: 100% by auto
// roc 2012-06 0065f580  unit: seg_00650000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065f580
//
// 0065f580  53                   push ebx
// 0065f581  56                   push esi
// 0065f582  57                   push edi
// 0065f583  8bd9                 mov ebx, ecx
// 0065f585  8bf2                 mov esi, edx
// 0065f587  e894ffffff           call 0x65f520
// 0065f58c  837c241000           cmp dword ptr [esp + 0x10], 0
// 0065f591  c780b416000008000000 mov dword ptr [eax + 0x16b4], 8
// 0065f59b  bf01000000           mov edi, 1
// 0065f5a0  7442                 je 0x65f5e4
// 0065f5a2  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065f5a5  8b5008               mov edx, dword ptr [eax + 8]
// 0065f5a8  881c11               mov byte ptr [ecx + edx], bl
// 0065f5ab  017814               add dword ptr [eax + 0x14], edi
// 0065f5ae  8b5008               mov edx, dword ptr [eax + 8]
// 0065f5b1  55                   push ebp
// 0065f5b2  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0065f5b5  8bcb                 mov ecx, ebx
// 0065f5b7  c1e908               shr ecx, 8
// 0065f5ba  880c2a               mov byte ptr [edx + ebp], cl
// 0065f5bd  017814               add dword ptr [eax + 0x14], edi
// 0065f5c0  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0065f5c3  8b5008               mov edx, dword ptr [eax + 8]
// 0065f5c6  8acb                 mov cl, bl
// 0065f5c8  f6d1                 not cl
// 0065f5ca  880c2a               mov byte ptr [edx + ebp], cl
// 0065f5cd  017814               add dword ptr [eax + 0x14], edi
// 0065f5d0  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0065f5d3  8b5008               mov edx, dword ptr [eax + 8]
// 0065f5d6  8bcb                 mov ecx, ebx
// 0065f5d8  f7d1                 not ecx
// 0065f5da  c1e908               shr ecx, 8
// 0065f5dd  880c2a               mov byte ptr [edx + ebp], cl
// 0065f5e0  017814               add dword ptr [eax + 0x14], edi
// 0065f5e3  5d                   pop ebp
// 0065f5e4  85db                 test ebx, ebx
// 0065f5e6  741e                 je 0x65f606
// 0065f5e8  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0065f5eb  8b5008               mov edx, dword ptr [eax + 8]
// 0065f5ee  2bdf                 sub ebx, edi
// 0065f5f0  895c2410             mov dword ptr [esp + 0x10], ebx
// 0065f5f4  8a1e                 mov bl, byte ptr [esi]
// 0065f5f6  881c11               mov byte ptr [ecx + edx], bl
// 0065f5f9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0065f5fd  017814               add dword ptr [eax + 0x14], edi
// 0065f600  03f7                 add esi, edi
// 0065f602  85db                 test ebx, ebx
// 0065f604  75e2                 jne 0x65f5e8
// 0065f606  5f                   pop edi
// 0065f607  5e                   pop esi
// 0065f608  5b                   pop ebx
// 0065f609  c3                   ret 
// library zlib-1.2.3/trees.c (function _copy_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
