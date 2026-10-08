// from server: 100% by auto
// roc 2008-06 0079fbc0  unit: CXTPDialogBar  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079fbc0
//
// 0079fbc0  83ec14               sub esp, 0x14
// 0079fbc3  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 0079fbc6  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0079fbc9  53                   push ebx
// 0079fbca  55                   push ebp
// 0079fbcb  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 0079fbce  56                   push esi
// 0079fbcf  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 0079fbd5  894c2410             mov dword ptr [esp + 0x10], ecx
// 0079fbd9  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0079fbdc  89742414             mov dword ptr [esp + 0x14], esi
// 0079fbe0  8b772c               mov esi, dword ptr [edi + 0x2c]
// 0079fbe3  8d9efafeffff         lea ebx, [esi - 0x106]
// 0079fbe9  03ca                 add ecx, edx
// 0079fbeb  3bd3                 cmp edx, ebx
// 0079fbed  760e                 jbe 0x79fbfd
// 0079fbef  2bd6                 sub edx, esi
// 0079fbf1  81c206010000         add edx, 0x106
// 0079fbf7  89542418             mov dword ptr [esp + 0x18], edx
// 0079fbfb  eb08                 jmp 0x79fc05
// 0079fbfd  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0079fc05  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 0079fc0a  8854240e             mov byte ptr [esp + 0xe], dl
// 0079fc0e  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 0079fc12  8db102010000         lea esi, [ecx + 0x102]
// 0079fc18  8854240f             mov byte ptr [esp + 0xf], dl
// 0079fc1c  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 0079fc22  7205                 jb 0x79fc29
// 0079fc24  c16c241002           shr dword ptr [esp + 0x10], 2
// 0079fc29  8b5774               mov edx, dword ptr [edi + 0x74]
// 0079fc2c  39542414             cmp dword ptr [esp + 0x14], edx
// 0079fc30  7604                 jbe 0x79fc36
// 0079fc32  89542414             mov dword ptr [esp + 0x14], edx
// 0079fc36  8b5738               mov edx, dword ptr [edi + 0x38]
// 0079fc39  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 0079fc3d  03d0                 add edx, eax
// 0079fc3f  381c2a               cmp byte ptr [edx + ebp], bl
// 0079fc42  0f85a3000000         jne 0x79fceb
// 0079fc48  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 0079fc4c  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 0079fc50  0f8595000000         jne 0x79fceb
// 0079fc56  8a1a                 mov bl, byte ptr [edx]
// 0079fc58  3a19                 cmp bl, byte ptr [ecx]
// 0079fc5a  0f858b000000         jne 0x79fceb
// 0079fc60  8a5a01               mov bl, byte ptr [edx + 1]
// 0079fc63  42                   inc edx
// 0079fc64  3a5901               cmp bl, byte ptr [ecx + 1]
// 0079fc67  0f857e000000         jne 0x79fceb
// 0079fc6d  83c102               add ecx, 2
// 0079fc70  42                   inc edx
// 0079fc71  8a5901               mov bl, byte ptr [ecx + 1]
// 0079fc74  41                   inc ecx
// 0079fc75  42                   inc edx
// 0079fc76  3a1a                 cmp bl, byte ptr [edx]
// 0079fc78  7543                 jne 0x79fcbd
// 0079fc7a  8a5901               mov bl, byte ptr [ecx + 1]
// 0079fc7d  41                   inc ecx
// 0079fc7e  42                   inc edx
// 0079fc7f  3a1a                 cmp bl, byte ptr [edx]
// 0079fc81  753a                 jne 0x79fcbd
// 0079fc83  8a5901               mov bl, byte ptr [ecx + 1]
// 0079fc86  41                   inc ecx
// 0079fc87  42                   inc edx
// 0079fc88  3a1a                 cmp bl, byte ptr [edx]
// 0079fc8a  7531                 jne 0x79fcbd
// 0079fc8c  8a5901               mov bl, byte ptr [ecx + 1]
// 0079fc8f  41                   inc ecx
// 0079fc90  42                   inc edx
// 0079fc91  3a1a                 cmp bl, byte ptr [edx]
// 0079fc93  7528                 jne 0x79fcbd
// 0079fc95  8a5901               mov bl, byte ptr [ecx + 1]
// 0079fc98  41                   inc ecx
// 0079fc99  42                   inc edx
// 0079fc9a  3a1a                 cmp bl, byte ptr [edx]
// 0079fc9c  751f                 jne 0x79fcbd
// 0079fc9e  8a5901               mov bl, byte ptr [ecx + 1]
// 0079fca1  41                   inc ecx
// 0079fca2  42                   inc edx
// 0079fca3  3a1a                 cmp bl, byte ptr [edx]
// 0079fca5  7516                 jne 0x79fcbd
// 0079fca7  8a5901               mov bl, byte ptr [ecx + 1]
// 0079fcaa  41                   inc ecx
// 0079fcab  42                   inc edx
// 0079fcac  3a1a                 cmp bl, byte ptr [edx]
// 0079fcae  750d                 jne 0x79fcbd
// 0079fcb0  8a5901               mov bl, byte ptr [ecx + 1]
// 0079fcb3  41                   inc ecx
// 0079fcb4  42                   inc edx
// 0079fcb5  3a1a                 cmp bl, byte ptr [edx]
// 0079fcb7  7504                 jne 0x79fcbd
// 0079fcb9  3bce                 cmp ecx, esi
// 0079fcbb  72b4                 jb 0x79fc71
// 0079fcbd  8bd1                 mov edx, ecx
// 0079fcbf  2bd6                 sub edx, esi
// 0079fcc1  81c202010000         add edx, 0x102
// 0079fcc7  3bd5                 cmp edx, ebp
// 0079fcc9  8d8efefeffff         lea ecx, [esi - 0x102]
// 0079fccf  7e1a                 jle 0x79fceb
// 0079fcd1  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0079fcd5  894770               mov dword ptr [edi + 0x70], eax
// 0079fcd8  8bea                 mov ebp, edx
// 0079fcda  7d2c                 jge 0x79fd08
// 0079fcdc  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 0079fce0  8a140a               mov dl, byte ptr [edx + ecx]
// 0079fce3  885c240e             mov byte ptr [esp + 0xe], bl
// 0079fce7  8854240f             mov byte ptr [esp + 0xf], dl
// 0079fceb  8b5734               mov edx, dword ptr [edi + 0x34]
// 0079fcee  23d0                 and edx, eax
// 0079fcf0  8b4740               mov eax, dword ptr [edi + 0x40]
// 0079fcf3  0fb70450             movzx eax, word ptr [eax + edx*2]
// 0079fcf7  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0079fcfb  760b                 jbe 0x79fd08
// 0079fcfd  836c241001           sub dword ptr [esp + 0x10], 1
// 0079fd02  0f852effffff         jne 0x79fc36
// 0079fd08  8b4774               mov eax, dword ptr [edi + 0x74]
// 0079fd0b  3be8                 cmp ebp, eax
// 0079fd0d  7702                 ja 0x79fd11
// 0079fd0f  8bc5                 mov eax, ebp
// 0079fd11  5e                   pop esi
// 0079fd12  5d                   pop ebp
// 0079fd13  5b                   pop ebx
// 0079fd14  83c414               add esp, 0x14
// 0079fd17  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
