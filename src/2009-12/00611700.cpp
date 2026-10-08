// roc 2009-12 00611700  unit: seg_00610000  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00611700
//
// 00611700  83ec14               sub esp, 0x14
// 00611703  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 00611706  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00611709  53                   push ebx
// 0061170a  55                   push ebp
// 0061170b  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 0061170e  56                   push esi
// 0061170f  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 00611715  894c2410             mov dword ptr [esp + 0x10], ecx
// 00611719  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0061171c  89742414             mov dword ptr [esp + 0x14], esi
// 00611720  8b772c               mov esi, dword ptr [edi + 0x2c]
// 00611723  8d9efafeffff         lea ebx, [esi - 0x106]
// 00611729  03ca                 add ecx, edx
// 0061172b  3bd3                 cmp edx, ebx
// 0061172d  760e                 jbe 0x61173d
// 0061172f  2bd6                 sub edx, esi
// 00611731  81c206010000         add edx, 0x106
// 00611737  89542418             mov dword ptr [esp + 0x18], edx
// 0061173b  eb08                 jmp 0x611745
// 0061173d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00611745  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 0061174a  8854240e             mov byte ptr [esp + 0xe], dl
// 0061174e  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00611752  8db102010000         lea esi, [ecx + 0x102]
// 00611758  8854240f             mov byte ptr [esp + 0xf], dl
// 0061175c  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 00611762  7205                 jb 0x611769
// 00611764  c16c241002           shr dword ptr [esp + 0x10], 2
// 00611769  8b5774               mov edx, dword ptr [edi + 0x74]
// 0061176c  39542414             cmp dword ptr [esp + 0x14], edx
// 00611770  7604                 jbe 0x611776
// 00611772  89542414             mov dword ptr [esp + 0x14], edx
// 00611776  8b5738               mov edx, dword ptr [edi + 0x38]
// 00611779  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 0061177d  03d0                 add edx, eax
// 0061177f  381c2a               cmp byte ptr [edx + ebp], bl
// 00611782  0f85a3000000         jne 0x61182b
// 00611788  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 0061178c  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 00611790  0f8595000000         jne 0x61182b
// 00611796  8a1a                 mov bl, byte ptr [edx]
// 00611798  3a19                 cmp bl, byte ptr [ecx]
// 0061179a  0f858b000000         jne 0x61182b
// 006117a0  8a5a01               mov bl, byte ptr [edx + 1]
// 006117a3  42                   inc edx
// 006117a4  3a5901               cmp bl, byte ptr [ecx + 1]
// 006117a7  0f857e000000         jne 0x61182b
// 006117ad  83c102               add ecx, 2
// 006117b0  42                   inc edx
// 006117b1  8a5901               mov bl, byte ptr [ecx + 1]
// 006117b4  41                   inc ecx
// 006117b5  42                   inc edx
// 006117b6  3a1a                 cmp bl, byte ptr [edx]
// 006117b8  7543                 jne 0x6117fd
// 006117ba  8a5901               mov bl, byte ptr [ecx + 1]
// 006117bd  41                   inc ecx
// 006117be  42                   inc edx
// 006117bf  3a1a                 cmp bl, byte ptr [edx]
// 006117c1  753a                 jne 0x6117fd
// 006117c3  8a5901               mov bl, byte ptr [ecx + 1]
// 006117c6  41                   inc ecx
// 006117c7  42                   inc edx
// 006117c8  3a1a                 cmp bl, byte ptr [edx]
// 006117ca  7531                 jne 0x6117fd
// 006117cc  8a5901               mov bl, byte ptr [ecx + 1]
// 006117cf  41                   inc ecx
// 006117d0  42                   inc edx
// 006117d1  3a1a                 cmp bl, byte ptr [edx]
// 006117d3  7528                 jne 0x6117fd
// 006117d5  8a5901               mov bl, byte ptr [ecx + 1]
// 006117d8  41                   inc ecx
// 006117d9  42                   inc edx
// 006117da  3a1a                 cmp bl, byte ptr [edx]
// 006117dc  751f                 jne 0x6117fd
// 006117de  8a5901               mov bl, byte ptr [ecx + 1]
// 006117e1  41                   inc ecx
// 006117e2  42                   inc edx
// 006117e3  3a1a                 cmp bl, byte ptr [edx]
// 006117e5  7516                 jne 0x6117fd
// 006117e7  8a5901               mov bl, byte ptr [ecx + 1]
// 006117ea  41                   inc ecx
// 006117eb  42                   inc edx
// 006117ec  3a1a                 cmp bl, byte ptr [edx]
// 006117ee  750d                 jne 0x6117fd
// 006117f0  8a5901               mov bl, byte ptr [ecx + 1]
// 006117f3  41                   inc ecx
// 006117f4  42                   inc edx
// 006117f5  3a1a                 cmp bl, byte ptr [edx]
// 006117f7  7504                 jne 0x6117fd
// 006117f9  3bce                 cmp ecx, esi
// 006117fb  72b4                 jb 0x6117b1
// 006117fd  8bd1                 mov edx, ecx
// 006117ff  2bd6                 sub edx, esi
// 00611801  81c202010000         add edx, 0x102
// 00611807  3bd5                 cmp edx, ebp
// 00611809  8d8efefeffff         lea ecx, [esi - 0x102]
// 0061180f  7e1a                 jle 0x61182b
// 00611811  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00611815  894770               mov dword ptr [edi + 0x70], eax
// 00611818  8bea                 mov ebp, edx
// 0061181a  7d2c                 jge 0x611848
// 0061181c  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 00611820  8a140a               mov dl, byte ptr [edx + ecx]
// 00611823  885c240e             mov byte ptr [esp + 0xe], bl
// 00611827  8854240f             mov byte ptr [esp + 0xf], dl
// 0061182b  8b5734               mov edx, dword ptr [edi + 0x34]
// 0061182e  23d0                 and edx, eax
// 00611830  8b4740               mov eax, dword ptr [edi + 0x40]
// 00611833  0fb70450             movzx eax, word ptr [eax + edx*2]
// 00611837  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0061183b  760b                 jbe 0x611848
// 0061183d  836c241001           sub dword ptr [esp + 0x10], 1
// 00611842  0f852effffff         jne 0x611776
// 00611848  8b4774               mov eax, dword ptr [edi + 0x74]
// 0061184b  3be8                 cmp ebp, eax
// 0061184d  7702                 ja 0x611851
// 0061184f  8bc5                 mov eax, ebp
// 00611851  5e                   pop esi
// 00611852  5d                   pop ebp
// 00611853  5b                   pop ebx
// 00611854  83c414               add esp, 0x14
// 00611857  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
