// from server: 100% by auto
// roc 2012-06 00651ae0  unit: seg_00650000  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00651ae0
//
// 00651ae0  83ec14               sub esp, 0x14
// 00651ae3  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 00651ae6  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00651ae9  53                   push ebx
// 00651aea  55                   push ebp
// 00651aeb  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 00651aee  56                   push esi
// 00651aef  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 00651af5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00651af9  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 00651afc  89742414             mov dword ptr [esp + 0x14], esi
// 00651b00  8b772c               mov esi, dword ptr [edi + 0x2c]
// 00651b03  8d9efafeffff         lea ebx, [esi - 0x106]
// 00651b09  03ca                 add ecx, edx
// 00651b0b  3bd3                 cmp edx, ebx
// 00651b0d  760e                 jbe 0x651b1d
// 00651b0f  2bd6                 sub edx, esi
// 00651b11  81c206010000         add edx, 0x106
// 00651b17  89542418             mov dword ptr [esp + 0x18], edx
// 00651b1b  eb08                 jmp 0x651b25
// 00651b1d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00651b25  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 00651b2a  8854240e             mov byte ptr [esp + 0xe], dl
// 00651b2e  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00651b32  8db102010000         lea esi, [ecx + 0x102]
// 00651b38  8854240f             mov byte ptr [esp + 0xf], dl
// 00651b3c  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 00651b42  7205                 jb 0x651b49
// 00651b44  c16c241002           shr dword ptr [esp + 0x10], 2
// 00651b49  8b5774               mov edx, dword ptr [edi + 0x74]
// 00651b4c  39542414             cmp dword ptr [esp + 0x14], edx
// 00651b50  7604                 jbe 0x651b56
// 00651b52  89542414             mov dword ptr [esp + 0x14], edx
// 00651b56  8b5738               mov edx, dword ptr [edi + 0x38]
// 00651b59  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 00651b5d  03d0                 add edx, eax
// 00651b5f  381c2a               cmp byte ptr [edx + ebp], bl
// 00651b62  0f85a3000000         jne 0x651c0b
// 00651b68  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 00651b6c  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 00651b70  0f8595000000         jne 0x651c0b
// 00651b76  8a1a                 mov bl, byte ptr [edx]
// 00651b78  3a19                 cmp bl, byte ptr [ecx]
// 00651b7a  0f858b000000         jne 0x651c0b
// 00651b80  8a5a01               mov bl, byte ptr [edx + 1]
// 00651b83  42                   inc edx
// 00651b84  3a5901               cmp bl, byte ptr [ecx + 1]
// 00651b87  0f857e000000         jne 0x651c0b
// 00651b8d  83c102               add ecx, 2
// 00651b90  42                   inc edx
// 00651b91  8a5901               mov bl, byte ptr [ecx + 1]
// 00651b94  41                   inc ecx
// 00651b95  42                   inc edx
// 00651b96  3a1a                 cmp bl, byte ptr [edx]
// 00651b98  7543                 jne 0x651bdd
// 00651b9a  8a5901               mov bl, byte ptr [ecx + 1]
// 00651b9d  41                   inc ecx
// 00651b9e  42                   inc edx
// 00651b9f  3a1a                 cmp bl, byte ptr [edx]
// 00651ba1  753a                 jne 0x651bdd
// 00651ba3  8a5901               mov bl, byte ptr [ecx + 1]
// 00651ba6  41                   inc ecx
// 00651ba7  42                   inc edx
// 00651ba8  3a1a                 cmp bl, byte ptr [edx]
// 00651baa  7531                 jne 0x651bdd
// 00651bac  8a5901               mov bl, byte ptr [ecx + 1]
// 00651baf  41                   inc ecx
// 00651bb0  42                   inc edx
// 00651bb1  3a1a                 cmp bl, byte ptr [edx]
// 00651bb3  7528                 jne 0x651bdd
// 00651bb5  8a5901               mov bl, byte ptr [ecx + 1]
// 00651bb8  41                   inc ecx
// 00651bb9  42                   inc edx
// 00651bba  3a1a                 cmp bl, byte ptr [edx]
// 00651bbc  751f                 jne 0x651bdd
// 00651bbe  8a5901               mov bl, byte ptr [ecx + 1]
// 00651bc1  41                   inc ecx
// 00651bc2  42                   inc edx
// 00651bc3  3a1a                 cmp bl, byte ptr [edx]
// 00651bc5  7516                 jne 0x651bdd
// 00651bc7  8a5901               mov bl, byte ptr [ecx + 1]
// 00651bca  41                   inc ecx
// 00651bcb  42                   inc edx
// 00651bcc  3a1a                 cmp bl, byte ptr [edx]
// 00651bce  750d                 jne 0x651bdd
// 00651bd0  8a5901               mov bl, byte ptr [ecx + 1]
// 00651bd3  41                   inc ecx
// 00651bd4  42                   inc edx
// 00651bd5  3a1a                 cmp bl, byte ptr [edx]
// 00651bd7  7504                 jne 0x651bdd
// 00651bd9  3bce                 cmp ecx, esi
// 00651bdb  72b4                 jb 0x651b91
// 00651bdd  8bd1                 mov edx, ecx
// 00651bdf  2bd6                 sub edx, esi
// 00651be1  81c202010000         add edx, 0x102
// 00651be7  3bd5                 cmp edx, ebp
// 00651be9  8d8efefeffff         lea ecx, [esi - 0x102]
// 00651bef  7e1a                 jle 0x651c0b
// 00651bf1  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00651bf5  894770               mov dword ptr [edi + 0x70], eax
// 00651bf8  8bea                 mov ebp, edx
// 00651bfa  7d2c                 jge 0x651c28
// 00651bfc  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 00651c00  8a140a               mov dl, byte ptr [edx + ecx]
// 00651c03  885c240e             mov byte ptr [esp + 0xe], bl
// 00651c07  8854240f             mov byte ptr [esp + 0xf], dl
// 00651c0b  8b5734               mov edx, dword ptr [edi + 0x34]
// 00651c0e  23d0                 and edx, eax
// 00651c10  8b4740               mov eax, dword ptr [edi + 0x40]
// 00651c13  0fb70450             movzx eax, word ptr [eax + edx*2]
// 00651c17  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00651c1b  760b                 jbe 0x651c28
// 00651c1d  836c241001           sub dword ptr [esp + 0x10], 1
// 00651c22  0f852effffff         jne 0x651b56
// 00651c28  8b4774               mov eax, dword ptr [edi + 0x74]
// 00651c2b  3be8                 cmp ebp, eax
// 00651c2d  7702                 ja 0x651c31
// 00651c2f  8bc5                 mov eax, ebp
// 00651c31  5e                   pop esi
// 00651c32  5d                   pop ebp
// 00651c33  5b                   pop ebx
// 00651c34  83c414               add esp, 0x14
// 00651c37  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
