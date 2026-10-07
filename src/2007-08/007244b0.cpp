// roc 2007-08 007244b0  unit: CXTIconHandle  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007244b0
//
// 007244b0  53                   push ebx
// 007244b1  56                   push esi
// 007244b2  57                   push edi
// 007244b3  8bd9                 mov ebx, ecx
// 007244b5  8bf2                 mov esi, edx
// 007244b7  e874ffffff           call 0x724430
// 007244bc  837c241000           cmp dword ptr [esp + 0x10], 0
// 007244c1  c780b416000008000000 mov dword ptr [eax + 0x16b4], 8
// 007244cb  bf01000000           mov edi, 1
// 007244d0  743a                 je 0x72450c
// 007244d2  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007244d5  8b5008               mov edx, dword ptr [eax + 8]
// 007244d8  881c11               mov byte ptr [ecx + edx], bl
// 007244db  017814               add dword ptr [eax + 0x14], edi
// 007244de  8b4814               mov ecx, dword ptr [eax + 0x14]
// 007244e1  8b5008               mov edx, dword ptr [eax + 8]
// 007244e4  883c11               mov byte ptr [ecx + edx], bh
// 007244e7  017814               add dword ptr [eax + 0x14], edi
// 007244ea  8b5008               mov edx, dword ptr [eax + 8]
// 007244ed  55                   push ebp
// 007244ee  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007244f1  8acb                 mov cl, bl
// 007244f3  f6d1                 not cl
// 007244f5  880c2a               mov byte ptr [edx + ebp], cl
// 007244f8  017814               add dword ptr [eax + 0x14], edi
// 007244fb  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007244fe  8b5008               mov edx, dword ptr [eax + 8]
// 00724501  8bcb                 mov ecx, ebx
// 00724503  f7d1                 not ecx
// 00724505  882c2a               mov byte ptr [edx + ebp], ch
// 00724508  017814               add dword ptr [eax + 0x14], edi
// 0072450b  5d                   pop ebp
// 0072450c  85db                 test ebx, ebx
// 0072450e  741e                 je 0x72452e
// 00724510  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00724513  8b5008               mov edx, dword ptr [eax + 8]
// 00724516  2bdf                 sub ebx, edi
// 00724518  895c2410             mov dword ptr [esp + 0x10], ebx
// 0072451c  8a1e                 mov bl, byte ptr [esi]
// 0072451e  881c11               mov byte ptr [ecx + edx], bl
// 00724521  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00724525  017814               add dword ptr [eax + 0x14], edi
// 00724528  03f7                 add esi, edi
// 0072452a  85db                 test ebx, ebx
// 0072452c  75e2                 jne 0x724510
// 0072452e  5f                   pop edi
// 0072452f  5e                   pop esi
// 00724530  5b                   pop ebx
// 00724531  c3                   ret 
// library zlib-1.2.3/trees.c (function _copy_block)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
