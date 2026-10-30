// from server: 100% by auto
// roc 2007-08 00614960  unit: seg_00610000  size: 326 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00614960
//
// 00614960  81ec3c020000         sub esp, 0x23c
// 00614966  53                   push ebx
// 00614967  55                   push ebp
// 00614968  8bac2450020000       mov ebp, dword ptr [esp + 0x250]
// 0061496f  56                   push esi
// 00614970  8bd8                 mov ebx, eax
// 00614972  57                   push edi
// 00614973  8d442410             lea eax, [esp + 0x10]
// 00614977  e824f8ffff           call 0x6141a0
// 0061497c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00614980  89683c               mov dword ptr [eax + 0x3c], ebp
// 00614983  837b1028             cmp dword ptr [ebx + 0x10], 0x28
// 00614987  7421                 je 0x6149aa
// 00614989  6a28                 push 0x28
// 0061498b  53                   push ebx
// 0061498c  e82f2b0000           call 0x6174c0
// 00614991  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00614994  50                   push eax
// 00614995  6870337c00           push 0x7c3370
// 0061499a  51                   push ecx
// 0061499b  e8f0a4ffff           call 0x60ee90
// 006149a0  50                   push eax
// 006149a1  53                   push ebx
// 006149a2  e8192c0000           call 0x6175c0
// 006149a7  83c41c               add esp, 0x1c
// 006149aa  53                   push ebx
// 006149ab  e840400000           call 0x6189f0
// 006149b0  83c404               add esp, 4
// 006149b3  83bc245402000000     cmp dword ptr [esp + 0x254], 0
// 006149bb  746b                 je 0x614a28
// 006149bd  6a04                 push 4
// 006149bf  68a0347c00           push 0x7c34a0
// 006149c4  53                   push ebx
// 006149c5  e8162c0000           call 0x6175e0
// 006149ca  8b7330               mov esi, dword ptr [ebx + 0x30]
// 006149cd  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006149d1  83c201               add edx, 1
// 006149d4  83c40c               add esp, 0xc
// 006149d7  81fac8000000         cmp edx, 0xc8
// 006149dd  8bf8                 mov edi, eax
// 006149df  7e0f                 jle 0x6149f0
// 006149e1  b914347c00           mov ecx, 0x7c3414
// 006149e6  bac8000000           mov edx, 0xc8
// 006149eb  e8e0f0ffff           call 0x613ad0
// 006149f0  57                   push edi
// 006149f1  53                   push ebx
// 006149f2  e819f2ffff           call 0x613c10
// 006149f7  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006149fb  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 00614a03  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00614a06  83c408               add esp, 8
// 00614a09  80403201             add byte ptr [eax + 0x32], 1
// 00614a0d  0fb65032             movzx edx, byte ptr [eax + 0x32]
// 00614a11  0fb78c50aa000000     movzx ecx, word ptr [eax + edx*2 + 0xaa]
// 00614a19  8b10                 mov edx, dword ptr [eax]
// 00614a1b  8b5218               mov edx, dword ptr [edx + 0x18]
// 00614a1e  8b4018               mov eax, dword ptr [eax + 0x18]
// 00614a21  8d0c49               lea ecx, [ecx + ecx*2]
// 00614a24  89448a04             mov dword ptr [edx + ecx*4 + 4], eax
// 00614a28  8bfb                 mov edi, ebx
// 00614a2a  e8f1fdffff           call 0x614820
// 00614a2f  837b1029             cmp dword ptr [ebx + 0x10], 0x29
// 00614a33  7421                 je 0x614a56
// 00614a35  6a29                 push 0x29
// 00614a37  53                   push ebx
// 00614a38  e8832a0000           call 0x6174c0
// 00614a3d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00614a40  50                   push eax
// 00614a41  6870337c00           push 0x7c3370
// 00614a46  51                   push ecx
// 00614a47  e844a4ffff           call 0x60ee90
// 00614a4c  50                   push eax
// 00614a4d  53                   push ebx
// 00614a4e  e86d2b0000           call 0x6175c0
// 00614a53  83c41c               add esp, 0x1c
// 00614a56  53                   push ebx
// 00614a57  e8943f0000           call 0x6189f0
// 00614a5c  53                   push ebx
// 00614a5d  e88e1d0000           call 0x6167f0
// 00614a62  8b442418             mov eax, dword ptr [esp + 0x18]
// 00614a66  8b5304               mov edx, dword ptr [ebx + 4]
// 00614a69  895040               mov dword ptr [eax + 0x40], edx
// 00614a6c  6809010000           push 0x109
// 00614a71  8bc5                 mov eax, ebp
// 00614a73  bf06010000           mov edi, 0x106
// 00614a78  8bf3                 mov esi, ebx
// 00614a7a  e8a1f0ffff           call 0x613b20
// 00614a7f  53                   push ebx
// 00614a80  e8cbf7ffff           call 0x614250
// 00614a85  8b8c2460020000       mov ecx, dword ptr [esp + 0x260]
// 00614a8c  51                   push ecx
// 00614a8d  8d542424             lea edx, [esp + 0x24]
// 00614a91  52                   push edx
// 00614a92  53                   push ebx
// 00614a93  e8f8f5ffff           call 0x614090
// 00614a98  83c41c               add esp, 0x1c
// 00614a9b  5f                   pop edi
// 00614a9c  5e                   pop esi
// 00614a9d  5d                   pop ebp
// 00614a9e  5b                   pop ebx
// 00614a9f  81c43c020000         add esp, 0x23c
// 00614aa5  c3                   ret 
// library lua-5.1.4/lparser.c (function _body)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
