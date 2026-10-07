// roc 2007-08 0071ee60  unit: CXTPDialogBar  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071ee60
//
// 0071ee60  83ec14               sub esp, 0x14
// 0071ee63  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 0071ee66  8b576c               mov edx, dword ptr [edi + 0x6c]
// 0071ee69  53                   push ebx
// 0071ee6a  55                   push ebp
// 0071ee6b  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 0071ee6e  56                   push esi
// 0071ee6f  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 0071ee75  894c2410             mov dword ptr [esp + 0x10], ecx
// 0071ee79  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 0071ee7c  89742414             mov dword ptr [esp + 0x14], esi
// 0071ee80  8b772c               mov esi, dword ptr [edi + 0x2c]
// 0071ee83  8d9efafeffff         lea ebx, [esi - 0x106]
// 0071ee89  03ca                 add ecx, edx
// 0071ee8b  3bd3                 cmp edx, ebx
// 0071ee8d  760e                 jbe 0x71ee9d
// 0071ee8f  2bd6                 sub edx, esi
// 0071ee91  81c206010000         add edx, 0x106
// 0071ee97  89542418             mov dword ptr [esp + 0x18], edx
// 0071ee9b  eb08                 jmp 0x71eea5
// 0071ee9d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0071eea5  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 0071eeab  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 0071eeb0  8854240e             mov byte ptr [esp + 0xe], dl
// 0071eeb4  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 0071eeb8  8db102010000         lea esi, [ecx + 0x102]
// 0071eebe  8854240f             mov byte ptr [esp + 0xf], dl
// 0071eec2  7205                 jb 0x71eec9
// 0071eec4  c16c241002           shr dword ptr [esp + 0x10], 2
// 0071eec9  8b5774               mov edx, dword ptr [edi + 0x74]
// 0071eecc  39542414             cmp dword ptr [esp + 0x14], edx
// 0071eed0  7604                 jbe 0x71eed6
// 0071eed2  89542414             mov dword ptr [esp + 0x14], edx
// 0071eed6  8b5738               mov edx, dword ptr [edi + 0x38]
// 0071eed9  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 0071eedd  03d0                 add edx, eax
// 0071eedf  381c2a               cmp byte ptr [edx + ebp], bl
// 0071eee2  0f85c7000000         jne 0x71efaf
// 0071eee8  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 0071eeec  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 0071eef0  0f85b9000000         jne 0x71efaf
// 0071eef6  8a1a                 mov bl, byte ptr [edx]
// 0071eef8  3a19                 cmp bl, byte ptr [ecx]
// 0071eefa  0f85af000000         jne 0x71efaf
// 0071ef00  8a5a01               mov bl, byte ptr [edx + 1]
// 0071ef03  83c201               add edx, 1
// 0071ef06  3a5901               cmp bl, byte ptr [ecx + 1]
// 0071ef09  0f85a0000000         jne 0x71efaf
// 0071ef0f  83c102               add ecx, 2
// 0071ef12  83c201               add edx, 1
// 0071ef15  8a5901               mov bl, byte ptr [ecx + 1]
// 0071ef18  83c101               add ecx, 1
// 0071ef1b  83c201               add edx, 1
// 0071ef1e  3a1a                 cmp bl, byte ptr [edx]
// 0071ef20  755f                 jne 0x71ef81
// 0071ef22  8a5901               mov bl, byte ptr [ecx + 1]
// 0071ef25  83c101               add ecx, 1
// 0071ef28  83c201               add edx, 1
// 0071ef2b  3a1a                 cmp bl, byte ptr [edx]
// 0071ef2d  7552                 jne 0x71ef81
// 0071ef2f  8a5901               mov bl, byte ptr [ecx + 1]
// 0071ef32  83c101               add ecx, 1
// 0071ef35  83c201               add edx, 1
// 0071ef38  3a1a                 cmp bl, byte ptr [edx]
// 0071ef3a  7545                 jne 0x71ef81
// 0071ef3c  8a5901               mov bl, byte ptr [ecx + 1]
// 0071ef3f  83c101               add ecx, 1
// 0071ef42  83c201               add edx, 1
// 0071ef45  3a1a                 cmp bl, byte ptr [edx]
// 0071ef47  7538                 jne 0x71ef81
// 0071ef49  8a5901               mov bl, byte ptr [ecx + 1]
// 0071ef4c  83c101               add ecx, 1
// 0071ef4f  83c201               add edx, 1
// 0071ef52  3a1a                 cmp bl, byte ptr [edx]
// 0071ef54  752b                 jne 0x71ef81
// 0071ef56  8a5901               mov bl, byte ptr [ecx + 1]
// 0071ef59  83c101               add ecx, 1
// 0071ef5c  83c201               add edx, 1
// 0071ef5f  3a1a                 cmp bl, byte ptr [edx]
// 0071ef61  751e                 jne 0x71ef81
// 0071ef63  8a5901               mov bl, byte ptr [ecx + 1]
// 0071ef66  83c101               add ecx, 1
// 0071ef69  83c201               add edx, 1
// 0071ef6c  3a1a                 cmp bl, byte ptr [edx]
// 0071ef6e  7511                 jne 0x71ef81
// 0071ef70  8a5901               mov bl, byte ptr [ecx + 1]
// 0071ef73  83c101               add ecx, 1
// 0071ef76  83c201               add edx, 1
// 0071ef79  3a1a                 cmp bl, byte ptr [edx]
// 0071ef7b  7504                 jne 0x71ef81
// 0071ef7d  3bce                 cmp ecx, esi
// 0071ef7f  7294                 jb 0x71ef15
// 0071ef81  8bd1                 mov edx, ecx
// 0071ef83  2bd6                 sub edx, esi
// 0071ef85  81c202010000         add edx, 0x102
// 0071ef8b  3bd5                 cmp edx, ebp
// 0071ef8d  8d8efefeffff         lea ecx, [esi - 0x102]
// 0071ef93  7e1a                 jle 0x71efaf
// 0071ef95  3b542414             cmp edx, dword ptr [esp + 0x14]
// 0071ef99  894770               mov dword ptr [edi + 0x70], eax
// 0071ef9c  8bea                 mov ebp, edx
// 0071ef9e  7d2c                 jge 0x71efcc
// 0071efa0  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 0071efa4  8a140a               mov dl, byte ptr [edx + ecx]
// 0071efa7  885c240e             mov byte ptr [esp + 0xe], bl
// 0071efab  8854240f             mov byte ptr [esp + 0xf], dl
// 0071efaf  8b5734               mov edx, dword ptr [edi + 0x34]
// 0071efb2  23d0                 and edx, eax
// 0071efb4  8b4740               mov eax, dword ptr [edi + 0x40]
// 0071efb7  0fb70450             movzx eax, word ptr [eax + edx*2]
// 0071efbb  3b442418             cmp eax, dword ptr [esp + 0x18]
// 0071efbf  760b                 jbe 0x71efcc
// 0071efc1  836c241001           sub dword ptr [esp + 0x10], 1
// 0071efc6  0f850affffff         jne 0x71eed6
// 0071efcc  8b4774               mov eax, dword ptr [edi + 0x74]
// 0071efcf  3be8                 cmp ebp, eax
// 0071efd1  7702                 ja 0x71efd5
// 0071efd3  8bc5                 mov eax, ebp
// 0071efd5  5e                   pop esi
// 0071efd6  5d                   pop ebp
// 0071efd7  5b                   pop ebx
// 0071efd8  83c414               add esp, 0x14
// 0071efdb  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
