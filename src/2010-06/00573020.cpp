// from server: 100% by auto
// roc 2010-06 00573020  unit: seg_00570000  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00573020
//
// 00573020  83ec14               sub esp, 0x14
// 00573023  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 00573026  8b576c               mov edx, dword ptr [edi + 0x6c]
// 00573029  53                   push ebx
// 0057302a  55                   push ebp
// 0057302b  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 0057302e  56                   push esi
// 0057302f  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 00573035  894c2410             mov dword ptr [esp + 0x10], ecx
// 00573039  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0057303c  89742414             mov dword ptr [esp + 0x14], esi
// 00573040  8b772c               mov esi, dword ptr [edi + 0x2c]
// 00573043  8d9efafeffff         lea ebx, [esi - 0x106]
// 00573049  03ca                 add ecx, edx
// 0057304b  3bd3                 cmp edx, ebx
// 0057304d  760e                 jbe 0x57305d
// 0057304f  2bd6                 sub edx, esi
// 00573051  81c206010000         add edx, 0x106
// 00573057  89542418             mov dword ptr [esp + 0x18], edx
// 0057305b  eb08                 jmp 0x573065
// 0057305d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00573065  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 0057306a  8854240e             mov byte ptr [esp + 0xe], dl
// 0057306e  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 00573072  8db102010000         lea esi, [ecx + 0x102]
// 00573078  8854240f             mov byte ptr [esp + 0xf], dl
// 0057307c  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 00573082  7205                 jb 0x573089
// 00573084  c16c241002           shr dword ptr [esp + 0x10], 2
// 00573089  8b5774               mov edx, dword ptr [edi + 0x74]
// 0057308c  39542414             cmp dword ptr [esp + 0x14], edx
// 00573090  7604                 jbe 0x573096
// 00573092  89542414             mov dword ptr [esp + 0x14], edx
// 00573096  8b5738               mov edx, dword ptr [edi + 0x38]
// 00573099  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 0057309d  03d0                 add edx, eax
// 0057309f  381c2a               cmp byte ptr [edx + ebp], bl
// 005730a2  0f85a3000000         jne 0x57314b
// 005730a8  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 005730ac  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 005730b0  0f8595000000         jne 0x57314b
// 005730b6  8a1a                 mov bl, byte ptr [edx]
// 005730b8  3a19                 cmp bl, byte ptr [ecx]
// 005730ba  0f858b000000         jne 0x57314b
// 005730c0  8a5a01               mov bl, byte ptr [edx + 1]
// 005730c3  42                   inc edx
// 005730c4  3a5901               cmp bl, byte ptr [ecx + 1]
// 005730c7  0f857e000000         jne 0x57314b
// 005730cd  83c102               add ecx, 2
// 005730d0  42                   inc edx
// 005730d1  8a5901               mov bl, byte ptr [ecx + 1]
// 005730d4  41                   inc ecx
// 005730d5  42                   inc edx
// 005730d6  3a1a                 cmp bl, byte ptr [edx]
// 005730d8  7543                 jne 0x57311d
// 005730da  8a5901               mov bl, byte ptr [ecx + 1]
// 005730dd  41                   inc ecx
// 005730de  42                   inc edx
// 005730df  3a1a                 cmp bl, byte ptr [edx]
// 005730e1  753a                 jne 0x57311d
// 005730e3  8a5901               mov bl, byte ptr [ecx + 1]
// 005730e6  41                   inc ecx
// 005730e7  42                   inc edx
// 005730e8  3a1a                 cmp bl, byte ptr [edx]
// 005730ea  7531                 jne 0x57311d
// 005730ec  8a5901               mov bl, byte ptr [ecx + 1]
// 005730ef  41                   inc ecx
// 005730f0  42                   inc edx
// 005730f1  3a1a                 cmp bl, byte ptr [edx]
// 005730f3  7528                 jne 0x57311d
// 005730f5  8a5901               mov bl, byte ptr [ecx + 1]
// 005730f8  41                   inc ecx
// 005730f9  42                   inc edx
// 005730fa  3a1a                 cmp bl, byte ptr [edx]
// 005730fc  751f                 jne 0x57311d
// 005730fe  8a5901               mov bl, byte ptr [ecx + 1]
// 00573101  41                   inc ecx
// 00573102  42                   inc edx
// 00573103  3a1a                 cmp bl, byte ptr [edx]
// 00573105  7516                 jne 0x57311d
// 00573107  8a5901               mov bl, byte ptr [ecx + 1]
// 0057310a  41                   inc ecx
// 0057310b  42                   inc edx
// 0057310c  3a1a                 cmp bl, byte ptr [edx]
// 0057310e  750d                 jne 0x57311d
// 00573110  8a5901               mov bl, byte ptr [ecx + 1]
// 00573113  41                   inc ecx
// 00573114  42                   inc edx
// 00573115  3a1a                 cmp bl, byte ptr [edx]
// 00573117  7504                 jne 0x57311d
// 00573119  3bce                 cmp ecx, esi
// 0057311b  72b4                 jb 0x5730d1
// 0057311d  8bd1                 mov edx, ecx
// 0057311f  2bd6                 sub edx, esi
// 00573121  81c202010000         add edx, 0x102
// 00573127  3bd5                 cmp edx, ebp
// 00573129  8d8efefeffff         lea ecx, [esi - 0x102]
// 0057312f  7e1a                 jle 0x57314b
// 00573131  3b542414             cmp edx, dword ptr [esp + 0x14]
// 00573135  894770               mov dword ptr [edi + 0x70], eax
// 00573138  8bea                 mov ebp, edx
// 0057313a  7d2c                 jge 0x573168
// 0057313c  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 00573140  8a140a               mov dl, byte ptr [edx + ecx]
// 00573143  885c240e             mov byte ptr [esp + 0xe], bl
// 00573147  8854240f             mov byte ptr [esp + 0xf], dl
// 0057314b  8b5734               mov edx, dword ptr [edi + 0x34]
// 0057314e  23d0                 and edx, eax
// 00573150  8b4740               mov eax, dword ptr [edi + 0x40]
// 00573153  0fb70450             movzx eax, word ptr [eax + edx*2]
// 00573157  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0057315b  760b                 jbe 0x573168
// 0057315d  836c241001           sub dword ptr [esp + 0x10], 1
// 00573162  0f852effffff         jne 0x573096
// 00573168  8b4774               mov eax, dword ptr [edi + 0x74]
// 0057316b  3be8                 cmp ebp, eax
// 0057316d  7702                 ja 0x573171
// 0057316f  8bc5                 mov eax, ebp
// 00573171  5e                   pop esi
// 00573172  5d                   pop ebp
// 00573173  5b                   pop ebx
// 00573174  83c414               add esp, 0x14
// 00573177  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
