// from server: 100% by auto
// roc 2011-06 008ffc20  unit: CXTPRibbonSystemPopupBar  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ffc20
//
// 008ffc20  83ec14               sub esp, 0x14
// 008ffc23  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 008ffc26  8b576c               mov edx, dword ptr [edi + 0x6c]
// 008ffc29  53                   push ebx
// 008ffc2a  55                   push ebp
// 008ffc2b  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 008ffc2e  56                   push esi
// 008ffc2f  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 008ffc35  894c2410             mov dword ptr [esp + 0x10], ecx
// 008ffc39  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 008ffc3c  89742414             mov dword ptr [esp + 0x14], esi
// 008ffc40  8b772c               mov esi, dword ptr [edi + 0x2c]
// 008ffc43  8d9efafeffff         lea ebx, [esi - 0x106]
// 008ffc49  03ca                 add ecx, edx
// 008ffc4b  3bd3                 cmp edx, ebx
// 008ffc4d  760e                 jbe 0x8ffc5d
// 008ffc4f  2bd6                 sub edx, esi
// 008ffc51  81c206010000         add edx, 0x106
// 008ffc57  89542418             mov dword ptr [esp + 0x18], edx
// 008ffc5b  eb08                 jmp 0x8ffc65
// 008ffc5d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008ffc65  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 008ffc6a  8854240e             mov byte ptr [esp + 0xe], dl
// 008ffc6e  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 008ffc72  8db102010000         lea esi, [ecx + 0x102]
// 008ffc78  8854240f             mov byte ptr [esp + 0xf], dl
// 008ffc7c  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 008ffc82  7205                 jb 0x8ffc89
// 008ffc84  c16c241002           shr dword ptr [esp + 0x10], 2
// 008ffc89  8b5774               mov edx, dword ptr [edi + 0x74]
// 008ffc8c  39542414             cmp dword ptr [esp + 0x14], edx
// 008ffc90  7604                 jbe 0x8ffc96
// 008ffc92  89542414             mov dword ptr [esp + 0x14], edx
// 008ffc96  8b5738               mov edx, dword ptr [edi + 0x38]
// 008ffc99  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 008ffc9d  03d0                 add edx, eax
// 008ffc9f  381c2a               cmp byte ptr [edx + ebp], bl
// 008ffca2  0f85a3000000         jne 0x8ffd4b
// 008ffca8  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 008ffcac  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 008ffcb0  0f8595000000         jne 0x8ffd4b
// 008ffcb6  8a1a                 mov bl, byte ptr [edx]
// 008ffcb8  3a19                 cmp bl, byte ptr [ecx]
// 008ffcba  0f858b000000         jne 0x8ffd4b
// 008ffcc0  8a5a01               mov bl, byte ptr [edx + 1]
// 008ffcc3  42                   inc edx
// 008ffcc4  3a5901               cmp bl, byte ptr [ecx + 1]
// 008ffcc7  0f857e000000         jne 0x8ffd4b
// 008ffccd  83c102               add ecx, 2
// 008ffcd0  42                   inc edx
// 008ffcd1  8a5901               mov bl, byte ptr [ecx + 1]
// 008ffcd4  41                   inc ecx
// 008ffcd5  42                   inc edx
// 008ffcd6  3a1a                 cmp bl, byte ptr [edx]
// 008ffcd8  7543                 jne 0x8ffd1d
// 008ffcda  8a5901               mov bl, byte ptr [ecx + 1]
// 008ffcdd  41                   inc ecx
// 008ffcde  42                   inc edx
// 008ffcdf  3a1a                 cmp bl, byte ptr [edx]
// 008ffce1  753a                 jne 0x8ffd1d
// 008ffce3  8a5901               mov bl, byte ptr [ecx + 1]
// 008ffce6  41                   inc ecx
// 008ffce7  42                   inc edx
// 008ffce8  3a1a                 cmp bl, byte ptr [edx]
// 008ffcea  7531                 jne 0x8ffd1d
// 008ffcec  8a5901               mov bl, byte ptr [ecx + 1]
// 008ffcef  41                   inc ecx
// 008ffcf0  42                   inc edx
// 008ffcf1  3a1a                 cmp bl, byte ptr [edx]
// 008ffcf3  7528                 jne 0x8ffd1d
// 008ffcf5  8a5901               mov bl, byte ptr [ecx + 1]
// 008ffcf8  41                   inc ecx
// 008ffcf9  42                   inc edx
// 008ffcfa  3a1a                 cmp bl, byte ptr [edx]
// 008ffcfc  751f                 jne 0x8ffd1d
// 008ffcfe  8a5901               mov bl, byte ptr [ecx + 1]
// 008ffd01  41                   inc ecx
// 008ffd02  42                   inc edx
// 008ffd03  3a1a                 cmp bl, byte ptr [edx]
// 008ffd05  7516                 jne 0x8ffd1d
// 008ffd07  8a5901               mov bl, byte ptr [ecx + 1]
// 008ffd0a  41                   inc ecx
// 008ffd0b  42                   inc edx
// 008ffd0c  3a1a                 cmp bl, byte ptr [edx]
// 008ffd0e  750d                 jne 0x8ffd1d
// 008ffd10  8a5901               mov bl, byte ptr [ecx + 1]
// 008ffd13  41                   inc ecx
// 008ffd14  42                   inc edx
// 008ffd15  3a1a                 cmp bl, byte ptr [edx]
// 008ffd17  7504                 jne 0x8ffd1d
// 008ffd19  3bce                 cmp ecx, esi
// 008ffd1b  72b4                 jb 0x8ffcd1
// 008ffd1d  8bd1                 mov edx, ecx
// 008ffd1f  2bd6                 sub edx, esi
// 008ffd21  81c202010000         add edx, 0x102
// 008ffd27  3bd5                 cmp edx, ebp
// 008ffd29  8d8efefeffff         lea ecx, [esi - 0x102]
// 008ffd2f  7e1a                 jle 0x8ffd4b
// 008ffd31  3b542414             cmp edx, dword ptr [esp + 0x14]
// 008ffd35  894770               mov dword ptr [edi + 0x70], eax
// 008ffd38  8bea                 mov ebp, edx
// 008ffd3a  7d2c                 jge 0x8ffd68
// 008ffd3c  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 008ffd40  8a140a               mov dl, byte ptr [edx + ecx]
// 008ffd43  885c240e             mov byte ptr [esp + 0xe], bl
// 008ffd47  8854240f             mov byte ptr [esp + 0xf], dl
// 008ffd4b  8b5734               mov edx, dword ptr [edi + 0x34]
// 008ffd4e  23d0                 and edx, eax
// 008ffd50  8b4740               mov eax, dword ptr [edi + 0x40]
// 008ffd53  0fb70450             movzx eax, word ptr [eax + edx*2]
// 008ffd57  3b442418             cmp eax, dword ptr [esp + 0x18]
// 008ffd5b  760b                 jbe 0x8ffd68
// 008ffd5d  836c241001           sub dword ptr [esp + 0x10], 1
// 008ffd62  0f852effffff         jne 0x8ffc96
// 008ffd68  8b4774               mov eax, dword ptr [edi + 0x74]
// 008ffd6b  3be8                 cmp ebp, eax
// 008ffd6d  7702                 ja 0x8ffd71
// 008ffd6f  8bc5                 mov eax, ebp
// 008ffd71  5e                   pop esi
// 008ffd72  5d                   pop ebp
// 008ffd73  5b                   pop ebx
// 008ffd74  83c414               add esp, 0x14
// 008ffd77  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
