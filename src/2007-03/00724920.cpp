// roc 2007-03 00724920  unit: seg_00720000  size: 237 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00724920
//
// 00724920  83ec0c               sub esp, 0xc
// 00724923  53                   push ebx
// 00724924  55                   push ebp
// 00724925  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00724929  56                   push esi
// 0072492a  57                   push edi
// 0072492b  0fb77802             movzx edi, word ptr [eax + 2]
// 0072492f  33d2                 xor edx, edx
// 00724931  85ff                 test edi, edi
// 00724933  8bd9                 mov ebx, ecx
// 00724935  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0072493d  b907000000           mov ecx, 7
// 00724942  be04000000           mov esi, 4
// 00724947  750a                 jne 0x724953
// 00724949  b98a000000           mov ecx, 0x8a
// 0072494e  be03000000           mov esi, 3
// 00724953  85db                 test ebx, ebx
// 00724955  66c7449806ffff       mov word ptr [eax + ebx*4 + 6], 0xffff
// 0072495c  0f8ca3000000         jl 0x724a05
// 00724962  83c006               add eax, 6
// 00724965  83c301               add ebx, 1
// 00724968  895c2418             mov dword ptr [esp + 0x18], ebx
// 0072496c  89442410             mov dword ptr [esp + 0x10], eax
// 00724970  bb01000000           mov ebx, 1
// 00724975  8bc7                 mov eax, edi
// 00724977  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0072497b  0fb73f               movzx edi, word ptr [edi]
// 0072497e  03d3                 add edx, ebx
// 00724980  3bd1                 cmp edx, ecx
// 00724982  7d04                 jge 0x724988
// 00724984  3bc7                 cmp eax, edi
// 00724986  746e                 je 0x7249f6
// 00724988  3bd6                 cmp edx, esi
// 0072498a  7d0a                 jge 0x724996
// 0072498c  660194857c0a0000     add word ptr [ebp + eax*4 + 0xa7c], dx
// 00724994  eb30                 jmp 0x7249c6
// 00724996  85c0                 test eax, eax
// 00724998  7417                 je 0x7249b1
// 0072499a  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0072499e  7408                 je 0x7249a8
// 007249a0  66019c857c0a0000     add word ptr [ebp + eax*4 + 0xa7c], bx
// 007249a8  66019dbc0a0000       add word ptr [ebp + 0xabc], bx
// 007249af  eb15                 jmp 0x7249c6
// 007249b1  83fa0a               cmp edx, 0xa
// 007249b4  7f09                 jg 0x7249bf
// 007249b6  66019dc00a0000       add word ptr [ebp + 0xac0], bx
// 007249bd  eb07                 jmp 0x7249c6
// 007249bf  66019dc40a0000       add word ptr [ebp + 0xac4], bx
// 007249c6  33d2                 xor edx, edx
// 007249c8  85ff                 test edi, edi
// 007249ca  89442414             mov dword ptr [esp + 0x14], eax
// 007249ce  750c                 jne 0x7249dc
// 007249d0  b98a000000           mov ecx, 0x8a
// 007249d5  be03000000           mov esi, 3
// 007249da  eb1a                 jmp 0x7249f6
// 007249dc  3bc7                 cmp eax, edi
// 007249de  750c                 jne 0x7249ec
// 007249e0  b906000000           mov ecx, 6
// 007249e5  be03000000           mov esi, 3
// 007249ea  eb0a                 jmp 0x7249f6
// 007249ec  b907000000           mov ecx, 7
// 007249f1  be04000000           mov esi, 4
// 007249f6  8344241004           add dword ptr [esp + 0x10], 4
// 007249fb  295c2418             sub dword ptr [esp + 0x18], ebx
// 007249ff  0f8570ffffff         jne 0x724975
// 00724a05  5f                   pop edi
// 00724a06  5e                   pop esi
// 00724a07  5d                   pop ebp
// 00724a08  5b                   pop ebx
// 00724a09  83c40c               add esp, 0xc
// 00724a0c  c3                   ret 
// library zlib-1.2.3/trees.c (function _scan_tree)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 trees.c
