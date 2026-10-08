// roc 2009-12 0061b830  unit: seg_00610000  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061b830
//
// 0061b830  53                   push ebx
// 0061b831  56                   push esi
// 0061b832  57                   push edi
// 0061b833  8bd9                 mov ebx, ecx
// 0061b835  8bf2                 mov esi, edx
// 0061b837  e894ffffff           call 0x61b7d0
// 0061b83c  837c241000           cmp dword ptr [esp + 0x10], 0
// 0061b841  c780b416000008000000 mov dword ptr [eax + 0x16b4], 8
// 0061b84b  bf01000000           mov edi, 1
// 0061b850  7442                 je 0x61b894
// 0061b852  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b855  8b5008               mov edx, dword ptr [eax + 8]
// 0061b858  881c11               mov byte ptr [ecx + edx], bl
// 0061b85b  017814               add dword ptr [eax + 0x14], edi
// 0061b85e  8b5008               mov edx, dword ptr [eax + 8]
// 0061b861  55                   push ebp
// 0061b862  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0061b865  8bcb                 mov ecx, ebx
// 0061b867  c1e908               shr ecx, 8
// 0061b86a  880c2a               mov byte ptr [edx + ebp], cl
// 0061b86d  017814               add dword ptr [eax + 0x14], edi
// 0061b870  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0061b873  8b5008               mov edx, dword ptr [eax + 8]
// 0061b876  8acb                 mov cl, bl
// 0061b878  f6d1                 not cl
// 0061b87a  880c2a               mov byte ptr [edx + ebp], cl
// 0061b87d  017814               add dword ptr [eax + 0x14], edi
// 0061b880  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0061b883  8b5008               mov edx, dword ptr [eax + 8]
// 0061b886  8bcb                 mov ecx, ebx
// 0061b888  f7d1                 not ecx
// 0061b88a  c1e908               shr ecx, 8
// 0061b88d  880c2a               mov byte ptr [edx + ebp], cl
// 0061b890  017814               add dword ptr [eax + 0x14], edi
// 0061b893  5d                   pop ebp
// 0061b894  85db                 test ebx, ebx
// 0061b896  741e                 je 0x61b8b6
// 0061b898  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061b89b  8b5008               mov edx, dword ptr [eax + 8]
// 0061b89e  2bdf                 sub ebx, edi
// 0061b8a0  895c2410             mov dword ptr [esp + 0x10], ebx
// 0061b8a4  8a1e                 mov bl, byte ptr [esi]
// 0061b8a6  881c11               mov byte ptr [ecx + edx], bl
// 0061b8a9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0061b8ad  017814               add dword ptr [eax + 0x14], edi
// 0061b8b0  03f7                 add esi, edi
// 0061b8b2  85db                 test ebx, ebx
// 0061b8b4  75e2                 jne 0x61b898
// 0061b8b6  5f                   pop edi
// 0061b8b7  5e                   pop esi
// 0061b8b8  5b                   pop ebx
// 0061b8b9  c3                   ret 
// library zlib-1.2.3/trees.c (function _copy_block)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
