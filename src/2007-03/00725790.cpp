// roc 2007-03 00725790  unit: seg_00720000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00725790
//
// 00725790  53                   push ebx
// 00725791  56                   push esi
// 00725792  57                   push edi
// 00725793  8bd9                 mov ebx, ecx
// 00725795  8bf2                 mov esi, edx
// 00725797  e874ffffff           call 0x725710
// 0072579c  837c241000           cmp dword ptr [esp + 0x10], 0
// 007257a1  c780b416000008000000 mov dword ptr [eax + 0x16b4], 8
// 007257ab  bf01000000           mov edi, 1
// 007257b0  743a                 je 0x7257ec
// 007257b2  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007257b5  8b5008               mov edx, dword ptr [eax + 8]
// 007257b8  881c11               mov byte ptr [ecx + edx], bl
// 007257bb  017814               add dword ptr [eax + 0x14], edi
// 007257be  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007257c1  8b5008               mov edx, dword ptr [eax + 8]
// 007257c4  883c11               mov byte ptr [ecx + edx], bh
// 007257c7  017814               add dword ptr [eax + 0x14], edi
// 007257ca  8b5008               mov edx, dword ptr [eax + 8]
// 007257cd  55                   push ebp
// 007257ce  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007257d1  8acb                 mov cl, bl
// 007257d3  f6d1                 not cl
// 007257d5  880c2a               mov byte ptr [edx + ebp], cl
// 007257d8  017814               add dword ptr [eax + 0x14], edi
// 007257db  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007257de  8b5008               mov edx, dword ptr [eax + 8]
// 007257e1  8bcb                 mov ecx, ebx
// 007257e3  f7d1                 not ecx
// 007257e5  882c2a               mov byte ptr [edx + ebp], ch
// 007257e8  017814               add dword ptr [eax + 0x14], edi
// 007257eb  5d                   pop ebp
// 007257ec  85db                 test ebx, ebx
// 007257ee  741e                 je 0x72580e
// 007257f0  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007257f3  8b5008               mov edx, dword ptr [eax + 8]
// 007257f6  2bdf                 sub ebx, edi
// 007257f8  895c2410             mov dword ptr [esp + 0x10], ebx
// 007257fc  8a1e                 mov bl, byte ptr [esi]
// 007257fe  881c11               mov byte ptr [ecx + edx], bl
// 00725801  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00725805  017814               add dword ptr [eax + 0x14], edi
// 00725808  03f7                 add esi, edi
// 0072580a  85db                 test ebx, ebx
// 0072580c  75e2                 jne 0x7257f0
// 0072580e  5f                   pop edi
// 0072580f  5e                   pop esi
// 00725810  5b                   pop ebx
// 00725811  c3                   ret 
// library zlib-1.2.3/trees.c (function _copy_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
