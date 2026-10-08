// from server: 100% by auto
// roc 2008-06 00662790  unit: RBX::FilterStairs  size: 550 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662790
//
// 00662790  83ec1c               sub esp, 0x1c
// 00662793  53                   push ebx
// 00662794  55                   push ebp
// 00662795  8b6f30               mov ebp, dword ptr [edi + 0x30]
// 00662798  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0066279b  56                   push esi
// 0066279c  6a0b                 push 0xb
// 0066279e  68c4c68400           push 0x84c6c4
// 006627a3  57                   push edi
// 006627a4  89442418             mov dword ptr [esp + 0x18], eax
// 006627a8  e8831a0000           call 0x664230
// 006627ad  8b7730               mov esi, dword ptr [edi + 0x30]
// 006627b0  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006627b4  41                   inc ecx
// 006627b5  83c40c               add esp, 0xc
// 006627b8  81f9c8000000         cmp ecx, 0xc8
// 006627be  8bd8                 mov ebx, eax
// 006627c0  7e0f                 jle 0x6627d1
// 006627c2  b964c58400           mov ecx, 0x84c564
// 006627c7  bac8000000           mov edx, 0xc8
// 006627cc  e8ffdfffff           call 0x6607d0
// 006627d1  53                   push ebx
// 006627d2  57                   push edi
// 006627d3  e838e1ffff           call 0x660910
// 006627d8  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 006627dc  6a0b                 push 0xb
// 006627de  68b8c68400           push 0x84c6b8
// 006627e3  57                   push edi
// 006627e4  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 006627ec  e83f1a0000           call 0x664230
// 006627f1  8b7730               mov esi, dword ptr [edi + 0x30]
// 006627f4  8bd8                 mov ebx, eax
// 006627f6  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 006627fa  83c002               add eax, 2
// 006627fd  83c414               add esp, 0x14
// 00662800  3dc8000000           cmp eax, 0xc8
// 00662805  7e0f                 jle 0x662816
// 00662807  b964c58400           mov ecx, 0x84c564
// 0066280c  bac8000000           mov edx, 0xc8
// 00662811  e8badfffff           call 0x6607d0
// 00662816  53                   push ebx
// 00662817  57                   push edi
// 00662818  e8f3e0ffff           call 0x660910
// 0066281d  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00662821  6a0a                 push 0xa
// 00662823  68acc68400           push 0x84c6ac
// 00662828  57                   push edi
// 00662829  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 00662831  e8fa190000           call 0x664230
// 00662836  8b7730               mov esi, dword ptr [edi + 0x30]
// 00662839  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0066283d  83c203               add edx, 3
// 00662840  83c414               add esp, 0x14
// 00662843  81fac8000000         cmp edx, 0xc8
// 00662849  8bd8                 mov ebx, eax
// 0066284b  7e0f                 jle 0x66285c
// 0066284d  b964c58400           mov ecx, 0x84c564
// 00662852  bac8000000           mov edx, 0xc8
// 00662857  e874dfffff           call 0x6607d0
// 0066285c  53                   push ebx
// 0066285d  57                   push edi
// 0066285e  e8ade0ffff           call 0x660910
// 00662863  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00662867  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 0066286f  8b7730               mov esi, dword ptr [edi + 0x30]
// 00662872  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00662876  83c204               add edx, 4
// 00662879  83c408               add esp, 8
// 0066287c  81fac8000000         cmp edx, 0xc8
// 00662882  7e0f                 jle 0x662893
// 00662884  b964c58400           mov ecx, 0x84c564
// 00662889  bac8000000           mov edx, 0xc8
// 0066288e  e83ddfffff           call 0x6607d0
// 00662893  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00662897  50                   push eax
// 00662898  57                   push edi
// 00662899  e872e0ffff           call 0x660910
// 0066289e  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 006628a2  83c408               add esp, 8
// 006628a5  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 006628ad  837f103d             cmp dword ptr [edi + 0x10], 0x3d
// 006628b1  7421                 je 0x6628d4
// 006628b3  6a3d                 push 0x3d
// 006628b5  57                   push edi
// 006628b6  e855180000           call 0x664110
// 006628bb  8b5734               mov edx, dword ptr [edi + 0x34]
// 006628be  50                   push eax
// 006628bf  68c0c48400           push 0x84c4c0
// 006628c4  52                   push edx
// 006628c5  e8f601fcff           call 0x622ac0
// 006628ca  50                   push eax
// 006628cb  57                   push edi
// 006628cc  e83f190000           call 0x664210
// 006628d1  83c41c               add esp, 0x1c
// 006628d4  57                   push edi
// 006628d5  e8262d0000           call 0x665600
// 006628da  6a00                 push 0
// 006628dc  8d442418             lea eax, [esp + 0x18]
// 006628e0  50                   push eax
// 006628e1  57                   push edi
// 006628e2  e809f7ffff           call 0x661ff0
// 006628e7  8b5730               mov edx, dword ptr [edi + 0x30]
// 006628ea  8d4c2420             lea ecx, [esp + 0x20]
// 006628ee  51                   push ecx
// 006628ef  52                   push edx
// 006628f0  e83b8f0000           call 0x66b830
// 006628f5  be2c000000           mov esi, 0x2c
// 006628fa  83c418               add esp, 0x18
// 006628fd  397710               cmp dword ptr [edi + 0x10], esi
// 00662900  7420                 je 0x662922
// 00662902  56                   push esi
// 00662903  57                   push edi
// 00662904  e807180000           call 0x664110
// 00662909  50                   push eax
// 0066290a  8b4734               mov eax, dword ptr [edi + 0x34]
// 0066290d  68c0c48400           push 0x84c4c0
// 00662912  50                   push eax
// 00662913  e8a801fcff           call 0x622ac0
// 00662918  50                   push eax
// 00662919  57                   push edi
// 0066291a  e8f1180000           call 0x664210
// 0066291f  83c41c               add esp, 0x1c
// 00662922  57                   push edi
// 00662923  e8d82c0000           call 0x665600
// 00662928  6a00                 push 0
// 0066292a  8d4c2418             lea ecx, [esp + 0x18]
// 0066292e  51                   push ecx
// 0066292f  57                   push edi
// 00662930  e8bbf6ffff           call 0x661ff0
// 00662935  8b4730               mov eax, dword ptr [edi + 0x30]
// 00662938  8d542420             lea edx, [esp + 0x20]
// 0066293c  52                   push edx
// 0066293d  50                   push eax
// 0066293e  e8ed8e0000           call 0x66b830
// 00662943  83c418               add esp, 0x18
// 00662946  397710               cmp dword ptr [edi + 0x10], esi
// 00662949  7526                 jne 0x662971
// 0066294b  57                   push edi
// 0066294c  e8af2c0000           call 0x665600
// 00662951  6a00                 push 0
// 00662953  8d4c2418             lea ecx, [esp + 0x18]
// 00662957  51                   push ecx
// 00662958  57                   push edi
// 00662959  e892f6ffff           call 0x661ff0
// 0066295e  8b4730               mov eax, dword ptr [edi + 0x30]
// 00662961  8d542420             lea edx, [esp + 0x20]
// 00662965  52                   push edx
// 00662966  50                   push eax
// 00662967  e8c48e0000           call 0x66b830
// 0066296c  83c418               add esp, 0x18
// 0066296f  eb26                 jmp 0x662997
// 00662971  d9e8                 fld1 
// 00662973  83ec08               sub esp, 8
// 00662976  dd1c24               fstp qword ptr [esp]
// 00662979  55                   push ebp
// 0066297a  e891850000           call 0x66af10
// 0066297f  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00662982  50                   push eax
// 00662983  51                   push ecx
// 00662984  6a01                 push 1
// 00662986  55                   push ebp
// 00662987  e8d4880000           call 0x66b260
// 0066298c  6a01                 push 1
// 0066298e  55                   push ebp
// 0066298f  e80c840000           call 0x66ada0
// 00662994  83c424               add esp, 0x24
// 00662997  8b542430             mov edx, dword ptr [esp + 0x30]
// 0066299b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0066299f  6a01                 push 1
// 006629a1  6a01                 push 1
// 006629a3  52                   push edx
// 006629a4  50                   push eax
// 006629a5  8bc7                 mov eax, edi
// 006629a7  e844fcffff           call 0x6625f0
// 006629ac  83c410               add esp, 0x10
// 006629af  5e                   pop esi
// 006629b0  5d                   pop ebp
// 006629b1  5b                   pop ebx
// 006629b2  83c41c               add esp, 0x1c
// 006629b5  c3                   ret 
// library lua-5.1.4/lparser.c (function _fornum)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
