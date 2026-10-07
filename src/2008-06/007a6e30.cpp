// roc 2008-06 007a6e30  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 380 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a6e30
//
// 007a6e30  83ec14               sub esp, 0x14
// 007a6e33  8b4f7c               mov ecx, dword ptr [edi + 0x7c]
// 007a6e36  8b576c               mov edx, dword ptr [edi + 0x6c]
// 007a6e39  53                   push ebx
// 007a6e3a  55                   push ebp
// 007a6e3b  8b6f78               mov ebp, dword ptr [edi + 0x78]
// 007a6e3e  56                   push esi
// 007a6e3f  8bb790000000         mov esi, dword ptr [edi + 0x90]
// 007a6e45  894c2410             mov dword ptr [esp + 0x10], ecx
// 007a6e49  8b4f38               mov ecx, dword ptr [edi + 0x38]
// 007a6e4c  89742414             mov dword ptr [esp + 0x14], esi
// 007a6e50  8b772c               mov esi, dword ptr [edi + 0x2c]
// 007a6e53  8d9efafeffff         lea ebx, [esi - 0x106]
// 007a6e59  03ca                 add ecx, edx
// 007a6e5b  3bd3                 cmp edx, ebx
// 007a6e5d  760e                 jbe 0x7a6e6d
// 007a6e5f  2bd6                 sub edx, esi
// 007a6e61  81c206010000         add edx, 0x106
// 007a6e67  89542418             mov dword ptr [esp + 0x18], edx
// 007a6e6b  eb08                 jmp 0x7a6e75
// 007a6e6d  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007a6e75  3baf8c000000         cmp ebp, dword ptr [edi + 0x8c]
// 007a6e7b  0fb65429ff           movzx edx, byte ptr [ecx + ebp - 1]
// 007a6e80  8854240e             mov byte ptr [esp + 0xe], dl
// 007a6e84  0fb61429             movzx edx, byte ptr [ecx + ebp]
// 007a6e88  8db102010000         lea esi, [ecx + 0x102]
// 007a6e8e  8854240f             mov byte ptr [esp + 0xf], dl
// 007a6e92  7205                 jb 0x7a6e99
// 007a6e94  c16c241002           shr dword ptr [esp + 0x10], 2
// 007a6e99  8b5774               mov edx, dword ptr [edi + 0x74]
// 007a6e9c  39542414             cmp dword ptr [esp + 0x14], edx
// 007a6ea0  7604                 jbe 0x7a6ea6
// 007a6ea2  89542414             mov dword ptr [esp + 0x14], edx
// 007a6ea6  8b5738               mov edx, dword ptr [edi + 0x38]
// 007a6ea9  8a5c240f             mov bl, byte ptr [esp + 0xf]
// 007a6ead  03d0                 add edx, eax
// 007a6eaf  381c2a               cmp byte ptr [edx + ebp], bl
// 007a6eb2  0f85c7000000         jne 0x7a6f7f
// 007a6eb8  8a5c240e             mov bl, byte ptr [esp + 0xe]
// 007a6ebc  385c2aff             cmp byte ptr [edx + ebp - 1], bl
// 007a6ec0  0f85b9000000         jne 0x7a6f7f
// 007a6ec6  8a1a                 mov bl, byte ptr [edx]
// 007a6ec8  3a19                 cmp bl, byte ptr [ecx]
// 007a6eca  0f85af000000         jne 0x7a6f7f
// 007a6ed0  8a5a01               mov bl, byte ptr [edx + 1]
// 007a6ed3  83c201               add edx, 1
// 007a6ed6  3a5901               cmp bl, byte ptr [ecx + 1]
// 007a6ed9  0f85a0000000         jne 0x7a6f7f
// 007a6edf  83c102               add ecx, 2
// 007a6ee2  83c201               add edx, 1
// 007a6ee5  8a5901               mov bl, byte ptr [ecx + 1]
// 007a6ee8  83c101               add ecx, 1
// 007a6eeb  83c201               add edx, 1
// 007a6eee  3a1a                 cmp bl, byte ptr [edx]
// 007a6ef0  755f                 jne 0x7a6f51
// 007a6ef2  8a5901               mov bl, byte ptr [ecx + 1]
// 007a6ef5  83c101               add ecx, 1
// 007a6ef8  83c201               add edx, 1
// 007a6efb  3a1a                 cmp bl, byte ptr [edx]
// 007a6efd  7552                 jne 0x7a6f51
// 007a6eff  8a5901               mov bl, byte ptr [ecx + 1]
// 007a6f02  83c101               add ecx, 1
// 007a6f05  83c201               add edx, 1
// 007a6f08  3a1a                 cmp bl, byte ptr [edx]
// 007a6f0a  7545                 jne 0x7a6f51
// 007a6f0c  8a5901               mov bl, byte ptr [ecx + 1]
// 007a6f0f  83c101               add ecx, 1
// 007a6f12  83c201               add edx, 1
// 007a6f15  3a1a                 cmp bl, byte ptr [edx]
// 007a6f17  7538                 jne 0x7a6f51
// 007a6f19  8a5901               mov bl, byte ptr [ecx + 1]
// 007a6f1c  83c101               add ecx, 1
// 007a6f1f  83c201               add edx, 1
// 007a6f22  3a1a                 cmp bl, byte ptr [edx]
// 007a6f24  752b                 jne 0x7a6f51
// 007a6f26  8a5901               mov bl, byte ptr [ecx + 1]
// 007a6f29  83c101               add ecx, 1
// 007a6f2c  83c201               add edx, 1
// 007a6f2f  3a1a                 cmp bl, byte ptr [edx]
// 007a6f31  751e                 jne 0x7a6f51
// 007a6f33  8a5901               mov bl, byte ptr [ecx + 1]
// 007a6f36  83c101               add ecx, 1
// 007a6f39  83c201               add edx, 1
// 007a6f3c  3a1a                 cmp bl, byte ptr [edx]
// 007a6f3e  7511                 jne 0x7a6f51
// 007a6f40  8a5901               mov bl, byte ptr [ecx + 1]
// 007a6f43  83c101               add ecx, 1
// 007a6f46  83c201               add edx, 1
// 007a6f49  3a1a                 cmp bl, byte ptr [edx]
// 007a6f4b  7504                 jne 0x7a6f51
// 007a6f4d  3bce                 cmp ecx, esi
// 007a6f4f  7294                 jb 0x7a6ee5
// 007a6f51  8bd1                 mov edx, ecx
// 007a6f53  2bd6                 sub edx, esi
// 007a6f55  81c202010000         add edx, 0x102
// 007a6f5b  3bd5                 cmp edx, ebp
// 007a6f5d  8d8efefeffff         lea ecx, [esi - 0x102]
// 007a6f63  7e1a                 jle 0x7a6f7f
// 007a6f65  3b542414             cmp edx, dword ptr [esp + 0x14]
// 007a6f69  894770               mov dword ptr [edi + 0x70], eax
// 007a6f6c  8bea                 mov ebp, edx
// 007a6f6e  7d2c                 jge 0x7a6f9c
// 007a6f70  8a5c0aff             mov bl, byte ptr [edx + ecx - 1]
// 007a6f74  8a140a               mov dl, byte ptr [edx + ecx]
// 007a6f77  885c240e             mov byte ptr [esp + 0xe], bl
// 007a6f7b  8854240f             mov byte ptr [esp + 0xf], dl
// 007a6f7f  8b5734               mov edx, dword ptr [edi + 0x34]
// 007a6f82  23d0                 and edx, eax
// 007a6f84  8b4740               mov eax, dword ptr [edi + 0x40]
// 007a6f87  0fb70450             movzx eax, word ptr [eax + edx*2]
// 007a6f8b  3b442418             cmp eax, dword ptr [esp + 0x18]
// 007a6f8f  760b                 jbe 0x7a6f9c
// 007a6f91  836c241001           sub dword ptr [esp + 0x10], 1
// 007a6f96  0f850affffff         jne 0x7a6ea6
// 007a6f9c  8b4774               mov eax, dword ptr [edi + 0x74]
// 007a6f9f  3be8                 cmp ebp, eax
// 007a6fa1  7702                 ja 0x7a6fa5
// 007a6fa3  8bc5                 mov eax, ebp
// 007a6fa5  5e                   pop esi
// 007a6fa6  5d                   pop ebp
// 007a6fa7  5b                   pop ebx
// 007a6fa8  83c414               add esp, 0x14
// 007a6fab  c3                   ret 
// library zlib-1.2.3/deflate.c (function _longest_match)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
