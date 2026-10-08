// roc 2007-03 0072c7e0  unit: seg_00720000  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072c7e0
//
// 0072c7e0  83ec14               sub esp, 0x14
// 0072c7e3  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 0072c7e6  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0072c7e9  53                   push ebx
// 0072c7ea  55                   push ebp
// 0072c7eb  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 0072c7ee  56                   push esi
// 0072c7ef  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 0072c7f5  894c2410             mov dword ptr [esp + 0x10], ecx
// 0072c7f9  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0072c7fc  89742414             mov dword ptr [esp + 0x14], esi
// 0072c800  8b772c               mov esi, dword ptr [edi + 0x2c]
// 0072c803  8d9efafeffff         lea ebx, [esi - 0x106]
// 0072c809  03ca                 add ecx, edx
// 0072c80b  3bd3                 cmp edx, ebx
// 0072c80d  760e                 jbe 0x72c81d
// 0072c80f  2bd6                 sub edx, esi
// 0072c811  81c206010000         add edx, 0x106
// 0072c817  89542418             mov dword ptr [esp + 0x18], edx
// 0072c81b  eb08                 jmp 0x72c825
// 0072c81d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0072c825  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 0072c82b  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 0072c830  8854240e             mov byte ptr [esp + 0xe], dl
// 0072c834  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 0072c838  8db102010000         lea esi, [ecx + 0x102]
// 0072c83e  8854240f             mov byte ptr [esp + 0xf], dl
// 0072c842  7205                 jb 0x72c849
// 0072c844  c16c241002           shr dword ptr [esp + 0x10], 2
// 0072c849  8b5774               mov edx, dword ptr [edi + 0x74]
// 0072c84c  39542414             cmp dword ptr [esp + 0x14], edx
// 0072c850  7604                 jbe 0x72c856
// 0072c852  89542414             mov dword ptr [esp + 0x14], edx
// 0072c856  8b5738               mov edx, dword ptr [edi + 0x38]
// 0072c859  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 0072c85d  03d0                 add edx, eax
// 0072c85f  381c2a               cmp byte ptr [edx + ebp], bl
// 0072c862  0f85c7000000         jne 0x72c92f
// 0072c868  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 0072c86c  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 0072c870  0f85b9000000         jne 0x72c92f
// 0072c876  8a1a                 mov bl, byte ptr [edx]
// 0072c878  3a19                 cmp bl, byte ptr [ecx]
// 0072c87a  0f85af000000         jne 0x72c92f
// 0072c880  8a5a01               mov bl, byte ptr [edx + 1]
// 0072c883  83c201               add edx, 1
// 0072c886  3a5901               cmp bl, byte ptr [ecx + 1]
// 0072c889  0f85a0000000         jne 0x72c92f
// 0072c88f  83c102               add ecx, 2
// 0072c892  83c201               add edx, 1
// 0072c895  8a5901               mov bl, byte ptr [ecx + 1]
// 0072c898  83c101               add ecx, 1
// 0072c89b  83c201               add edx, 1
// 0072c89e  3a1a                 cmp bl, byte ptr [edx]
// 0072c8a0  755f                 jne 0x72c901
// 0072c8a2  8a5901               mov bl, byte ptr [ecx + 1]
// 0072c8a5  83c101               add ecx, 1
// 0072c8a8  83c201               add edx, 1
// 0072c8ab  3a1a                 cmp bl, byte ptr [edx]
// 0072c8ad  7552                 jne 0x72c901
// 0072c8af  8a5901               mov bl, byte ptr [ecx + 1]
// 0072c8b2  83c101               add ecx, 1
// 0072c8b5  83c201               add edx, 1
// 0072c8b8  3a1a                 cmp bl, byte ptr [edx]
// 0072c8ba  7545                 jne 0x72c901
// 0072c8bc  8a5901               mov bl, byte ptr [ecx + 1]
// 0072c8bf  83c101               add ecx, 1
// 0072c8c2  83c201               add edx, 1
// 0072c8c5  3a1a                 cmp bl, byte ptr [edx]
// 0072c8c7  7538                 jne 0x72c901
// 0072c8c9  8a5901               mov bl, byte ptr [ecx + 1]
// 0072c8cc  83c101               add ecx, 1
// 0072c8cf  83c201               add edx, 1
// 0072c8d2  3a1a                 cmp bl, byte ptr [edx]
// 0072c8d4  752b                 jne 0x72c901
// 0072c8d6  8a5901               mov bl, byte ptr [ecx + 1]
// 0072c8d9  83c101               add ecx, 1
// 0072c8dc  83c201               add edx, 1
// 0072c8df  3a1a                 cmp bl, byte ptr [edx]
// 0072c8e1  751e                 jne 0x72c901
// 0072c8e3  8a5901               mov bl, byte ptr [ecx + 1]
// 0072c8e6  83c101               add ecx, 1
// 0072c8e9  83c201               add edx, 1
// 0072c8ec  3a1a                 cmp bl, byte ptr [edx]
// 0072c8ee  7511                 jne 0x72c901
// 0072c8f0  8a5901               mov bl, byte ptr [ecx + 1]
// 0072c8f3  83c101               add ecx, 1
// 0072c8f6  83c201               add edx, 1
// 0072c8f9  3a1a                 cmp bl, byte ptr [edx]
// 0072c8fb  7504                 jne 0x72c901
// 0072c8fd  3bce                 cmp ecx, esi
// 0072c8ff  7294                 jb 0x72c895
// 0072c901  8bd1                 mov edx, ecx
// 0072c903  2bd6                 sub edx, esi
// 0072c905  81c202010000         add edx, 0x102
// 0072c90b  3bd5                 cmp edx, ebp
// 0072c90d  8d8efefeffff         lea ecx, [esi - 0x102]
// 0072c913  7e1a                 jle 0x72c92f
// 0072c915  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0072c919  894770               mov dword ptr [edi + 0x70], eax
// 0072c91c  8bea                 mov ebp, edx
// 0072c91e  7d2c                 jge 0x72c94c
// 0072c920  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 0072c924  8a140a               mov dl, byte ptr [edx + ecx]
// 0072c927  885c240e             mov byte ptr [esp + 0xe], bl
// 0072c92b  8854240f             mov byte ptr [esp + 0xf], dl
// 0072c92f  8b5734               mov edx, dword ptr [edi + 0x34]
// 0072c932  23d0                 and edx, eax
// 0072c934  8b4740               mov eax, dword ptr [edi + 0x40]
// 0072c937  0fb70450             movzx eax, word ptr [eax + edx*2]
// 0072c93b  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0072c93f  760b                 jbe 0x72c94c
// 0072c941  836c241001           sub dword ptr [esp + 0x10], 1
// 0072c946  0f850affffff         jne 0x72c856
// 0072c94c  8b4774               mov eax, dword ptr [edi + 0x74]
// 0072c94f  3be8                 cmp ebp, eax
// 0072c951  7702                 ja 0x72c955
// 0072c953  8bc5                 mov eax, ebp
// 0072c955  5e                   pop esi
// 0072c956  5d                   pop ebp
// 0072c957  5b                   pop ebx
// 0072c958  83c414               add esp, 0x14
// 0072c95b  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
