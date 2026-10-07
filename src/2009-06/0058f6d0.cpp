// roc 2009-06 0058f6d0  unit: seg_00580000  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058f6d0
//
// 0058f6d0  83ec14               sub esp, 0x14
// 0058f6d3  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 0058f6d6  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0058f6d9  53                   push ebx
// 0058f6da  55                   push ebp
// 0058f6db  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 0058f6de  56                   push esi
// 0058f6df  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 0058f6e5  894c2410             mov dword ptr [esp + 0x10], ecx
// 0058f6e9  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0058f6ec  89742414             mov dword ptr [esp + 0x14], esi
// 0058f6f0  8b772c               mov esi, dword ptr [edi + 0x2c]
// 0058f6f3  8d9efafeffff         lea ebx, [esi - 0x106]
// 0058f6f9  03ca                 add ecx, edx
// 0058f6fb  3bd3                 cmp edx, ebx
// 0058f6fd  760e                 jbe 0x58f70d
// 0058f6ff  2bd6                 sub edx, esi
// 0058f701  81c206010000         add edx, 0x106
// 0058f707  89542418             mov dword ptr [esp + 0x18], edx
// 0058f70b  eb08                 jmp 0x58f715
// 0058f70d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058f715  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 0058f71a  8854240e             mov byte ptr [esp + 0xe], dl
// 0058f71e  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 0058f722  8db102010000         lea esi, [ecx + 0x102]
// 0058f728  8854240f             mov byte ptr [esp + 0xf], dl
// 0058f72c  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 0058f732  7205                 jb 0x58f739
// 0058f734  c16c241002           shr dword ptr [esp + 0x10], 2
// 0058f739  8b5774               mov edx, dword ptr [edi + 0x74]
// 0058f73c  39542414             cmp dword ptr [esp + 0x14], edx
// 0058f740  7604                 jbe 0x58f746
// 0058f742  89542414             mov dword ptr [esp + 0x14], edx
// 0058f746  8b5738               mov edx, dword ptr [edi + 0x38]
// 0058f749  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 0058f74d  03d0                 add edx, eax
// 0058f74f  381c2a               cmp byte ptr [edx + ebp], bl
// 0058f752  0f85a3000000         jne 0x58f7fb
// 0058f758  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 0058f75c  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 0058f760  0f8595000000         jne 0x58f7fb
// 0058f766  8a1a                 mov bl, byte ptr [edx]
// 0058f768  3a19                 cmp bl, byte ptr [ecx]
// 0058f76a  0f858b000000         jne 0x58f7fb
// 0058f770  8a5a01               mov bl, byte ptr [edx + 1]
// 0058f773  42                   inc edx
// 0058f774  3a5901               cmp bl, byte ptr [ecx + 1]
// 0058f777  0f857e000000         jne 0x58f7fb
// 0058f77d  83c102               add ecx, 2
// 0058f780  42                   inc edx
// 0058f781  8a5901               mov bl, byte ptr [ecx + 1]
// 0058f784  41                   inc ecx
// 0058f785  42                   inc edx
// 0058f786  3a1a                 cmp bl, byte ptr [edx]
// 0058f788  7543                 jne 0x58f7cd
// 0058f78a  8a5901               mov bl, byte ptr [ecx + 1]
// 0058f78d  41                   inc ecx
// 0058f78e  42                   inc edx
// 0058f78f  3a1a                 cmp bl, byte ptr [edx]
// 0058f791  753a                 jne 0x58f7cd
// 0058f793  8a5901               mov bl, byte ptr [ecx + 1]
// 0058f796  41                   inc ecx
// 0058f797  42                   inc edx
// 0058f798  3a1a                 cmp bl, byte ptr [edx]
// 0058f79a  7531                 jne 0x58f7cd
// 0058f79c  8a5901               mov bl, byte ptr [ecx + 1]
// 0058f79f  41                   inc ecx
// 0058f7a0  42                   inc edx
// 0058f7a1  3a1a                 cmp bl, byte ptr [edx]
// 0058f7a3  7528                 jne 0x58f7cd
// 0058f7a5  8a5901               mov bl, byte ptr [ecx + 1]
// 0058f7a8  41                   inc ecx
// 0058f7a9  42                   inc edx
// 0058f7aa  3a1a                 cmp bl, byte ptr [edx]
// 0058f7ac  751f                 jne 0x58f7cd
// 0058f7ae  8a5901               mov bl, byte ptr [ecx + 1]
// 0058f7b1  41                   inc ecx
// 0058f7b2  42                   inc edx
// 0058f7b3  3a1a                 cmp bl, byte ptr [edx]
// 0058f7b5  7516                 jne 0x58f7cd
// 0058f7b7  8a5901               mov bl, byte ptr [ecx + 1]
// 0058f7ba  41                   inc ecx
// 0058f7bb  42                   inc edx
// 0058f7bc  3a1a                 cmp bl, byte ptr [edx]
// 0058f7be  750d                 jne 0x58f7cd
// 0058f7c0  8a5901               mov bl, byte ptr [ecx + 1]
// 0058f7c3  41                   inc ecx
// 0058f7c4  42                   inc edx
// 0058f7c5  3a1a                 cmp bl, byte ptr [edx]
// 0058f7c7  7504                 jne 0x58f7cd
// 0058f7c9  3bce                 cmp ecx, esi
// 0058f7cb  72b4                 jb 0x58f781
// 0058f7cd  8bd1                 mov edx, ecx
// 0058f7cf  2bd6                 sub edx, esi
// 0058f7d1  81c202010000         add edx, 0x102
// 0058f7d7  3bd5                 cmp edx, ebp
// 0058f7d9  8d8efefeffff         lea ecx, [esi - 0x102]
// 0058f7df  7e1a                 jle 0x58f7fb
// 0058f7e1  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0058f7e5  894770               mov dword ptr [edi + 0x70], eax
// 0058f7e8  8bea                 mov ebp, edx
// 0058f7ea  7d2c                 jge 0x58f818
// 0058f7ec  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 0058f7f0  8a140a               mov dl, byte ptr [edx + ecx]
// 0058f7f3  885c240e             mov byte ptr [esp + 0xe], bl
// 0058f7f7  8854240f             mov byte ptr [esp + 0xf], dl
// 0058f7fb  8b5734               mov edx, dword ptr [edi + 0x34]
// 0058f7fe  23d0                 and edx, eax
// 0058f800  8b4740               mov eax, dword ptr [edi + 0x40]
// 0058f803  0fb70450             movzx eax, word ptr [eax + edx*2]
// 0058f807  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0058f80b  760b                 jbe 0x58f818
// 0058f80d  836c241001           sub dword ptr [esp + 0x10], 1
// 0058f812  0f852effffff         jne 0x58f746
// 0058f818  8b4774               mov eax, dword ptr [edi + 0x74]
// 0058f81b  3be8                 cmp ebp, eax
// 0058f81d  7702                 ja 0x58f821
// 0058f81f  8bc5                 mov eax, ebp
// 0058f821  5e                   pop esi
// 0058f822  5d                   pop ebp
// 0058f823  5b                   pop ebx
// 0058f824  83c414               add esp, 0x14
// 0058f827  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
