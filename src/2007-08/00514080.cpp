// from server: 100% by auto
// roc 2007-08 00514080  unit: G3D::_internal::DialogTemplate  size: 550 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00514080
//
// 00514080  57                   push edi
// 00514081  8b7c2408             mov edi, dword ptr [esp + 8]
// 00514085  85ff                 test edi, edi
// 00514087  0f8417020000         je 0x5142a4
// 0051408d  56                   push esi
// 0051408e  8b742410             mov esi, dword ptr [esp + 0x10]
// 00514092  85f6                 test esi, esi
// 00514094  0f8409020000         je 0x5142a3
// 0051409a  53                   push ebx
// 0051409b  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0051409f  55                   push ebp
// 005140a0  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005140a4  85ed                 test ebp, ebp
// 005140a6  7404                 je 0x5140ac
// 005140a8  85db                 test ebx, ebx
// 005140aa  750e                 jne 0x5140ba
// 005140ac  686c137a00           push 0x7a136c
// 005140b1  57                   push edi
// 005140b2  e829a80000           call 0x51e8e0
// 005140b7  83c408               add esp, 8
// 005140ba  3baf64020000         cmp ebp, dword ptr [edi + 0x264]
// 005140c0  7708                 ja 0x5140ca
// 005140c2  3b9f68020000         cmp ebx, dword ptr [edi + 0x268]
// 005140c8  760e                 jbe 0x5140d8
// 005140ca  6844137a00           push 0x7a1344
// 005140cf  57                   push edi
// 005140d0  e80ba80000           call 0x51e8e0
// 005140d5  83c408               add esp, 8
// 005140d8  81fdffffff7f         cmp ebp, 0x7fffffff
// 005140de  7708                 ja 0x5140e8
// 005140e0  81fbffffff7f         cmp ebx, 0x7fffffff
// 005140e6  760e                 jbe 0x5140f6
// 005140e8  6828137a00           push 0x7a1328
// 005140ed  57                   push edi
// 005140ee  e8eda70000           call 0x51e8e0
// 005140f3  83c408               add esp, 8
// 005140f6  81fd7effff1f         cmp ebp, 0x1fffff7e
// 005140fc  760e                 jbe 0x51410c
// 005140fe  68f8127a00           push 0x7a12f8
// 00514103  57                   push edi
// 00514104  e887a80000           call 0x51e990
// 00514109  83c408               add esp, 8
// 0051410c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00514110  83f801               cmp eax, 1
// 00514113  7422                 je 0x514137
// 00514115  83f802               cmp eax, 2
// 00514118  741d                 je 0x514137
// 0051411a  83f804               cmp eax, 4
// 0051411d  7418                 je 0x514137
// 0051411f  83f808               cmp eax, 8
// 00514122  7413                 je 0x514137
// 00514124  83f810               cmp eax, 0x10
// 00514127  740e                 je 0x514137
// 00514129  68dc127a00           push 0x7a12dc
// 0051412e  57                   push edi
// 0051412f  e8aca70000           call 0x51e8e0
// 00514134  83c408               add esp, 8
// 00514137  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0051413b  85db                 test ebx, ebx
// 0051413d  7c0f                 jl 0x51414e
// 0051413f  83fb01               cmp ebx, 1
// 00514142  740a                 je 0x51414e
// 00514144  83fb05               cmp ebx, 5
// 00514147  7405                 je 0x51414e
// 00514149  83fb06               cmp ebx, 6
// 0051414c  7e0e                 jle 0x51415c
// 0051414e  68c0127a00           push 0x7a12c0
// 00514153  57                   push edi
// 00514154  e887a70000           call 0x51e8e0
// 00514159  83c408               add esp, 8
// 0051415c  83fb03               cmp ebx, 3
// 0051415f  7509                 jne 0x51416a
// 00514161  837c242408           cmp dword ptr [esp + 0x24], 8
// 00514166  7f18                 jg 0x514180
// 00514168  eb24                 jmp 0x51418e
// 0051416a  83fb02               cmp ebx, 2
// 0051416d  740a                 je 0x514179
// 0051416f  83fb04               cmp ebx, 4
// 00514172  7405                 je 0x514179
// 00514174  83fb06               cmp ebx, 6
// 00514177  7515                 jne 0x51418e
// 00514179  837c242408           cmp dword ptr [esp + 0x24], 8
// 0051417e  7d0e                 jge 0x51418e
// 00514180  688c127a00           push 0x7a128c
// 00514185  57                   push edi
// 00514186  e855a70000           call 0x51e8e0
// 0051418b  83c408               add esp, 8
// 0051418e  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 00514193  7c0e                 jl 0x5141a3
// 00514195  6868127a00           push 0x7a1268
// 0051419a  57                   push edi
// 0051419b  e840a70000           call 0x51e8e0
// 005141a0  83c408               add esp, 8
// 005141a3  837c243000           cmp dword ptr [esp + 0x30], 0
// 005141a8  740e                 je 0x5141b8
// 005141aa  6844127a00           push 0x7a1244
// 005141af  57                   push edi
// 005141b0  e82ba70000           call 0x51e8e0
// 005141b5  83c408               add esp, 8
// 005141b8  bd00100000           mov ebp, 0x1000
// 005141bd  856f68               test dword ptr [edi + 0x68], ebp
// 005141c0  7417                 je 0x5141d9
// 005141c2  83bf3002000000       cmp dword ptr [edi + 0x230], 0
// 005141c9  740e                 je 0x5141d9
// 005141cb  68e80f7a00           push 0x7a0fe8
// 005141d0  57                   push edi
// 005141d1  e8baa70000           call 0x51e990
// 005141d6  83c408               add esp, 8
// 005141d9  8b442434             mov eax, dword ptr [esp + 0x34]
// 005141dd  85c0                 test eax, eax
// 005141df  743e                 je 0x51421f
// 005141e1  f6873002000004       test byte ptr [edi + 0x230], 4
// 005141e8  7414                 je 0x5141fe
// 005141ea  83f840               cmp eax, 0x40
// 005141ed  750f                 jne 0x5141fe
// 005141ef  856f68               test dword ptr [edi + 0x68], ebp
// 005141f2  750a                 jne 0x5141fe
// 005141f4  83fb02               cmp ebx, 2
// 005141f7  7413                 je 0x51420c
// 005141f9  83fb06               cmp ebx, 6
// 005141fc  740e                 je 0x51420c
// 005141fe  6824127a00           push 0x7a1224
// 00514203  57                   push edi
// 00514204  e8d7a60000           call 0x51e8e0
// 00514209  83c408               add esp, 8
// 0051420c  856f68               test dword ptr [edi + 0x68], ebp
// 0051420f  740e                 je 0x51421f
// 00514211  6804127a00           push 0x7a1204
// 00514216  57                   push edi
// 00514217  e874a70000           call 0x51e990
// 0051421c  83c408               add esp, 8
// 0051421f  80fb03               cmp bl, 3
// 00514222  8b442420             mov eax, dword ptr [esp + 0x20]
// 00514226  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0051422a  8a542424             mov dl, byte ptr [esp + 0x24]
// 0051422e  894604               mov dword ptr [esi + 4], eax
// 00514231  8a442430             mov al, byte ptr [esp + 0x30]
// 00514235  88461a               mov byte ptr [esi + 0x1a], al
// 00514238  8a442434             mov al, byte ptr [esp + 0x34]
// 0051423c  88461b               mov byte ptr [esi + 0x1b], al
// 0051423f  8a44242c             mov al, byte ptr [esp + 0x2c]
// 00514243  890e                 mov dword ptr [esi], ecx
// 00514245  885618               mov byte ptr [esi + 0x18], dl
// 00514248  885e19               mov byte ptr [esi + 0x19], bl
// 0051424b  88461c               mov byte ptr [esi + 0x1c], al
// 0051424e  740b                 je 0x51425b
// 00514250  f6c302               test bl, 2
// 00514253  7406                 je 0x51425b
// 00514255  c6461d03             mov byte ptr [esi + 0x1d], 3
// 00514259  eb04                 jmp 0x51425f
// 0051425b  c6461d01             mov byte ptr [esi + 0x1d], 1
// 0051425f  5d                   pop ebp
// 00514260  f6c304               test bl, 4
// 00514263  5b                   pop ebx
// 00514264  7404                 je 0x51426a
// 00514266  80461d01             add byte ptr [esi + 0x1d], 1
// 0051426a  8a461d               mov al, byte ptr [esi + 0x1d]
// 0051426d  f6ea                 imul dl
// 0051426f  81f97effff1f         cmp ecx, 0x1fffff7e
// 00514275  88461e               mov byte ptr [esi + 0x1e], al
// 00514278  760a                 jbe 0x514284
// 0051427a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00514281  5e                   pop esi
// 00514282  5f                   pop edi
// 00514283  c3                   ret 
// 00514284  3c08                 cmp al, 8
// 00514286  0fb6c0               movzx eax, al
// 00514289  720c                 jb 0x514297
// 0051428b  c1e803               shr eax, 3
// 0051428e  0fafc1               imul eax, ecx
// 00514291  89460c               mov dword ptr [esi + 0xc], eax
// 00514294  5e                   pop esi
// 00514295  5f                   pop edi
// 00514296  c3                   ret 
// 00514297  0fafc1               imul eax, ecx
// 0051429a  83c007               add eax, 7
// 0051429d  c1e803               shr eax, 3
// 005142a0  89460c               mov dword ptr [esi + 0xc], eax
// 005142a3  5e                   pop esi
// 005142a4  5f                   pop edi
// 005142a5  c3                   ret 
// library libpng-1.2.6/pngset.c (function _png_set_IHDR)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngset.c
