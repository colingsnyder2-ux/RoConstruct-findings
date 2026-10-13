// from server: 100% by colin
// roc 2008-06 00529870  unit: G3D::Line  size: 287 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00529870
//
// 00529870  83ec20               sub esp, 0x20
// 00529873  803823               cmp byte ptr [eax], 0x23
// 00529876  0f85f6000000         jne 0x529972
// 0052987c  53                   push ebx
// 0052987d  55                   push ebp
// 0052987e  56                   push esi
// 0052987f  8d4c241f             lea ecx, [esp + 0x1f]
// 00529883  2bc8                 sub ecx, eax
// 00529885  57                   push edi
// 00529886  894c2418             mov dword ptr [esp + 0x18], ecx
// 0052988a  8d5c2420             lea ebx, [esp + 0x20]
// 0052988e  8d7c2421             lea edi, [esp + 0x21]
// 00529892  8d6c2422             lea ebp, [esp + 0x22]
// 00529896  2bd8                 sub ebx, eax
// 00529898  2be8                 sub ebp, eax
// 0052989a  8d4c2424             lea ecx, [esp + 0x24]
// 0052989e  33f6                 xor esi, esi
// 005298a0  2bf8                 sub edi, eax
// 005298a2  2bc8                 sub ecx, eax
// 005298a4  895c2414             mov dword ptr [esp + 0x14], ebx
// 005298a8  896c2410             mov dword ptr [esp + 0x10], ebp
// 005298ac  894c241c             mov dword ptr [esp + 0x1c], ecx
// 005298b0  eb08                 jmp 0x5298ba
// 005298b2  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 005298b6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005298ba  803c0620             cmp byte ptr [esi + eax], 0x20
// 005298be  8a540601             mov dl, byte ptr [esi + eax + 1]
// 005298c2  8d0c06               lea ecx, [esi + eax]
// 005298c5  88140b               mov byte ptr [ebx + ecx], dl
// 005298c8  7452                 je 0x52991c
// 005298ca  8a5c0602             mov bl, byte ptr [esi + eax + 2]
// 005298ce  881c0f               mov byte ptr [edi + ecx], bl
// 005298d1  80fa20               cmp dl, 0x20
// 005298d4  7436                 je 0x52990c
// 005298d6  8a540603             mov dl, byte ptr [esi + eax + 3]
// 005298da  881429               mov byte ptr [ecx + ebp], dl
// 005298dd  80fb20               cmp bl, 0x20
// 005298e0  742d                 je 0x52990f
// 005298e2  8a5c0604             mov bl, byte ptr [esi + eax + 4]
// 005298e6  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005298ea  881c29               mov byte ptr [ecx + ebp], bl
// 005298ed  80fa20               cmp dl, 0x20
// 005298f0  7422                 je 0x529914
// 005298f2  8a540605             mov dl, byte ptr [esi + eax + 5]
// 005298f6  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005298fa  881429               mov byte ptr [ecx + ebp], dl
// 005298fd  80fb20               cmp bl, 0x20
// 00529900  7417                 je 0x529919
// 00529902  83c605               add esi, 5
// 00529905  83fe0f               cmp esi, 0xf
// 00529908  7ca8                 jl 0x5298b2
// 0052990a  eb10                 jmp 0x52991c
// 0052990c  46                   inc esi
// 0052990d  eb0d                 jmp 0x52991c
// 0052990f  83c602               add esi, 2
// 00529912  eb08                 jmp 0x52991c
// 00529914  83c603               add esi, 3
// 00529917  eb03                 jmp 0x52991c
// 00529919  83c604               add esi, 4
// 0052991c  8d4efe               lea ecx, [esi - 2]
// 0052991f  83f90c               cmp ecx, 0xc
// 00529922  772d                 ja 0x529951
// 00529924  c644341f00           mov byte ptr [esp + esi + 0x1f], 0
// 00529929  03f0                 add esi, eax
// 0052992b  56                   push esi
// 0052992c  8d542424             lea edx, [esp + 0x24]
// 00529930  52                   push edx
// 00529931  6828bb8200           push 0x82bb28
// 00529936  ff1558278000         call dword ptr [0x802758]
// 0052993c  83c040               add eax, 0x40
// 0052993f  50                   push eax
// 00529940  ff151c288000         call dword ptr [0x80281c]
// 00529946  83c410               add esp, 0x10
// 00529949  5f                   pop edi
// 0052994a  5e                   pop esi
// 0052994b  5d                   pop ebp
// 0052994c  5b                   pop ebx
// 0052994d  83c420               add esp, 0x20
// 00529950  c3                   ret 
// 00529951  50                   push eax
// 00529952  6814bb8200           push 0x82bb14
// 00529957  ff1558278000         call dword ptr [0x802758]
// 0052995d  83c040               add eax, 0x40
// 00529960  50                   push eax
// 00529961  ff151c288000         call dword ptr [0x80281c]
// 00529967  83c40c               add esp, 0xc
// 0052996a  5f                   pop edi
// 0052996b  5e                   pop esi
// 0052996c  5d                   pop ebp
// 0052996d  5b                   pop ebx
// 0052996e  83c420               add esp, 0x20
// 00529971  c3                   ret 
// 00529972  50                   push eax
// 00529973  6814bb8200           push 0x82bb14
// 00529978  ff1558278000         call dword ptr [0x802758]
// 0052997e  83c040               add eax, 0x40
// 00529981  50                   push eax
// 00529982  ff151c288000         call dword ptr [0x80281c]
// 00529988  83c40c               add esp, 0xc
// 0052998b  83c420               add esp, 0x20
// 0052998e  c3                   ret 
// library libpng-1.2.5-dll/pngerror.c (function _png_default_warning)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5-dll pngerror.c
