// from server: 100% by auto
// roc 2008-06 00527a20  unit: G3D::Line  size: 268 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00527a20
//
// 00527a20  55                   push ebp
// 00527a21  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00527a25  57                   push edi
// 00527a26  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00527a2a  f6476804             test byte ptr [edi + 0x68], 4
// 00527a2e  0f85dd000000         jne 0x527b11
// 00527a34  80bf6002000000       cmp byte ptr [edi + 0x260], 0
// 00527a3b  0f85d0000000         jne 0x527b11
// 00527a41  56                   push esi
// 00527a42  0fb67500             movzx esi, byte ptr [ebp]
// 00527a46  8bc6                 mov eax, esi
// 00527a48  240f                 and al, 0xf
// 00527a4a  3c08                 cmp al, 8
// 00527a4c  0f85b0000000         jne 0x527b02
// 00527a52  8bce                 mov ecx, esi
// 00527a54  81e1f0000000         and ecx, 0xf0
// 00527a5a  83f970               cmp ecx, 0x70
// 00527a5d  0f879f000000         ja 0x527b02
// 00527a63  837c241802           cmp dword ptr [esp + 0x18], 2
// 00527a68  0f82a2000000         jb 0x527b10
// 00527a6e  8b97cc000000         mov edx, dword ptr [edi + 0xcc]
// 00527a74  81fa00400000         cmp edx, 0x4000
// 00527a7a  0f8390000000         jae 0x527b10
// 00527a80  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 00527a86  81f900400000         cmp ecx, 0x4000
// 00527a8c  0f837e000000         jae 0x527b10
// 00527a92  0fb6872a010000       movzx eax, byte ptr [edi + 0x12a]
// 00527a99  53                   push ebx
// 00527a9a  0fb69f27010000       movzx ebx, byte ptr [edi + 0x127]
// 00527aa1  0fafc3               imul eax, ebx
// 00527aa4  0fafc1               imul eax, ecx
// 00527aa7  83c00f               add eax, 0xf
// 00527aaa  c1e803               shr eax, 3
// 00527aad  0fafc2               imul eax, edx
// 00527ab0  c1ee04               shr esi, 4
// 00527ab3  8d4e07               lea ecx, [esi + 7]
// 00527ab6  ba01000000           mov edx, 1
// 00527abb  d3e2                 shl edx, cl
// 00527abd  5b                   pop ebx
// 00527abe  3bc2                 cmp eax, edx
// 00527ac0  770f                 ja 0x527ad1
// 00527ac2  81fa00010000         cmp edx, 0x100
// 00527ac8  7207                 jb 0x527ad1
// 00527aca  d1ea                 shr edx, 1
// 00527acc  4e                   dec esi
// 00527acd  3bc2                 cmp eax, edx
// 00527acf  76f1                 jbe 0x527ac2
// 00527ad1  c1e604               shl esi, 4
// 00527ad4  83ce08               or esi, 8
// 00527ad7  8bc6                 mov eax, esi
// 00527ad9  384500               cmp byte ptr [ebp], al
// 00527adc  7432                 je 0x527b10
// 00527ade  8a4d01               mov cl, byte ptr [ebp + 1]
// 00527ae1  80e1e0               and cl, 0xe0
// 00527ae4  0fb6d1               movzx edx, cl
// 00527ae7  884500               mov byte ptr [ebp], al
// 00527aea  c1e008               shl eax, 8
// 00527aed  03c2                 add eax, edx
// 00527aef  33d2                 xor edx, edx
// 00527af1  be1f000000           mov esi, 0x1f
// 00527af6  f7f6                 div esi
// 00527af8  2aca                 sub cl, dl
// 00527afa  80c11f               add cl, 0x1f
// 00527afd  884d01               mov byte ptr [ebp + 1], cl
// 00527b00  eb0e                 jmp 0x527b10
// 00527b02  6838b78200           push 0x82b738
// 00527b07  57                   push edi
// 00527b08  e8a31e0000           call 0x5299b0
// 00527b0d  83c408               add esp, 8
// 00527b10  5e                   pop esi
// 00527b11  8b442414             mov eax, dword ptr [esp + 0x14]
// 00527b15  50                   push eax
// 00527b16  55                   push ebp
// 00527b17  684c948200           push 0x82944c
// 00527b1c  57                   push edi
// 00527b1d  e88efaffff           call 0x5275b0
// 00527b22  834f6804             or dword ptr [edi + 0x68], 4
// 00527b26  83c410               add esp, 0x10
// 00527b29  5f                   pop edi
// 00527b2a  5d                   pop ebp
// 00527b2b  c3                   ret 
// library libpng-1.2.7/pngwutil.c (function _png_write_IDAT)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.7 pngwutil.c
