// roc 2008-06 0052e9d0  unit: seg_00520000  size: 691 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052e9d0
//
// 0052e9d0  83ec14               sub esp, 0x14
// 0052e9d3  57                   push edi
// 0052e9d4  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0052e9d8  8b4768               mov eax, dword ptr [edi + 0x68]
// 0052e9db  a801                 test al, 1
// 0052e9dd  7540                 jne 0x52ea1f
// 0052e9df  681cc78200           push 0x82c71c
// 0052e9e4  57                   push edi
// 0052e9e5  e8c6afffff           call 0x5299b0
// 0052e9ea  83c408               add esp, 8
// 0052e9ed  53                   push ebx
// 0052e9ee  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0052e9f2  56                   push esi
// 0052e9f3  8d5301               lea edx, [ebx + 1]
// 0052e9f6  52                   push edx
// 0052e9f7  57                   push edi
// 0052e9f8  e833bbffff           call 0x52a530
// 0052e9fd  8bf0                 mov esi, eax
// 0052e9ff  83c408               add esp, 8
// 0052ea02  89742410             mov dword ptr [esp + 0x10], esi
// 0052ea06  85f6                 test esi, esi
// 0052ea08  7566                 jne 0x52ea70
// 0052ea0a  6800c78200           push 0x82c700
// 0052ea0f  57                   push edi
// 0052ea10  e83bb0ffff           call 0x529a50
// 0052ea15  83c408               add esp, 8
// 0052ea18  5e                   pop esi
// 0052ea19  5b                   pop ebx
// 0052ea1a  5f                   pop edi
// 0052ea1b  83c414               add esp, 0x14
// 0052ea1e  c3                   ret 
// 0052ea1f  a804                 test al, 4
// 0052ea21  741e                 je 0x52ea41
// 0052ea23  68e8c68200           push 0x82c6e8
// 0052ea28  57                   push edi
// 0052ea29  e822b0ffff           call 0x529a50
// 0052ea2e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052ea32  50                   push eax
// 0052ea33  57                   push edi
// 0052ea34  e8a7e4ffff           call 0x52cee0
// 0052ea39  83c410               add esp, 0x10
// 0052ea3c  5f                   pop edi
// 0052ea3d  83c414               add esp, 0x14
// 0052ea40  c3                   ret 
// 0052ea41  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052ea45  85c0                 test eax, eax
// 0052ea47  74a4                 je 0x52e9ed
// 0052ea49  f7400800040000       test dword ptr [eax + 8], 0x400
// 0052ea50  749b                 je 0x52e9ed
// 0052ea52  68d0c68200           push 0x82c6d0
// 0052ea57  57                   push edi
// 0052ea58  e8f3afffff           call 0x529a50
// 0052ea5d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052ea61  51                   push ecx
// 0052ea62  57                   push edi
// 0052ea63  e878e4ffff           call 0x52cee0
// 0052ea68  83c410               add esp, 0x10
// 0052ea6b  5f                   pop edi
// 0052ea6c  83c414               add esp, 0x14
// 0052ea6f  c3                   ret 
// 0052ea70  53                   push ebx
// 0052ea71  56                   push esi
// 0052ea72  57                   push edi
// 0052ea73  e83860ffff           call 0x524ab0
// 0052ea78  53                   push ebx
// 0052ea79  56                   push esi
// 0052ea7a  57                   push edi
// 0052ea7b  e800f3feff           call 0x51dd80
// 0052ea80  6a00                 push 0
// 0052ea82  57                   push edi
// 0052ea83  e858e4ffff           call 0x52cee0
// 0052ea88  83c420               add esp, 0x20
// 0052ea8b  85c0                 test eax, eax
// 0052ea8d  7411                 je 0x52eaa0
// 0052ea8f  56                   push esi
// 0052ea90  57                   push edi
// 0052ea91  e86abaffff           call 0x52a500
// 0052ea96  83c408               add esp, 8
// 0052ea99  5e                   pop esi
// 0052ea9a  5b                   pop ebx
// 0052ea9b  5f                   pop edi
// 0052ea9c  83c414               add esp, 0x14
// 0052ea9f  c3                   ret 
// 0052eaa0  8d0c1e               lea ecx, [esi + ebx]
// 0052eaa3  c60100               mov byte ptr [ecx], 0
// 0052eaa6  803e00               cmp byte ptr [esi], 0
// 0052eaa9  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052eaad  8bc6                 mov eax, esi
// 0052eaaf  7406                 je 0x52eab7
// 0052eab1  40                   inc eax
// 0052eab2  803800               cmp byte ptr [eax], 0
// 0052eab5  75fa                 jne 0x52eab1
// 0052eab7  8d500c               lea edx, [eax + 0xc]
// 0052eaba  3bca                 cmp ecx, edx
// 0052eabc  771c                 ja 0x52eada
// 0052eabe  68bcc68200           push 0x82c6bc
// 0052eac3  57                   push edi
// 0052eac4  e887afffff           call 0x529a50
// 0052eac9  56                   push esi
// 0052eaca  57                   push edi
// 0052eacb  e830baffff           call 0x52a500
// 0052ead0  83c410               add esp, 0x10
// 0052ead3  5e                   pop esi
// 0052ead4  5b                   pop ebx
// 0052ead5  5f                   pop edi
// 0052ead6  83c414               add esp, 0x14
// 0052ead9  c3                   ret 
// 0052eada  0fb64802             movzx ecx, byte ptr [eax + 2]
// 0052eade  0fb65003             movzx edx, byte ptr [eax + 3]
// 0052eae2  0fb65805             movzx ebx, byte ptr [eax + 5]
// 0052eae6  55                   push ebp
// 0052eae7  0fb66801             movzx ebp, byte ptr [eax + 1]
// 0052eaeb  c1e508               shl ebp, 8
// 0052eaee  03e9                 add ebp, ecx
// 0052eaf0  0fb64804             movzx ecx, byte ptr [eax + 4]
// 0052eaf4  c1e508               shl ebp, 8
// 0052eaf7  03ea                 add ebp, edx
// 0052eaf9  0fb65006             movzx edx, byte ptr [eax + 6]
// 0052eafd  c1e308               shl ebx, 8
// 0052eb00  03da                 add ebx, edx
// 0052eb02  0fb65008             movzx edx, byte ptr [eax + 8]
// 0052eb06  c1e508               shl ebp, 8
// 0052eb09  03e9                 add ebp, ecx
// 0052eb0b  0fb64807             movzx ecx, byte ptr [eax + 7]
// 0052eb0f  c1e308               shl ebx, 8
// 0052eb12  03d9                 add ebx, ecx
// 0052eb14  8a4809               mov cl, byte ptr [eax + 9]
// 0052eb17  c1e308               shl ebx, 8
// 0052eb1a  03da                 add ebx, edx
// 0052eb1c  8a500a               mov dl, byte ptr [eax + 0xa]
// 0052eb1f  83c00b               add eax, 0xb
// 0052eb22  884c2413             mov byte ptr [esp + 0x13], cl
// 0052eb26  88542428             mov byte ptr [esp + 0x28], dl
// 0052eb2a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052eb2e  84c9                 test cl, cl
// 0052eb30  7507                 jne 0x52eb39
// 0052eb32  80fa02               cmp dl, 2
// 0052eb35  7524                 jne 0x52eb5b
// 0052eb37  eb5a                 jmp 0x52eb93
// 0052eb39  80f901               cmp cl, 1
// 0052eb3c  7507                 jne 0x52eb45
// 0052eb3e  80fa03               cmp dl, 3
// 0052eb41  7518                 jne 0x52eb5b
// 0052eb43  eb4e                 jmp 0x52eb93
// 0052eb45  80f902               cmp cl, 2
// 0052eb48  7507                 jne 0x52eb51
// 0052eb4a  80fa03               cmp dl, 3
// 0052eb4d  750c                 jne 0x52eb5b
// 0052eb4f  eb42                 jmp 0x52eb93
// 0052eb51  80f903               cmp cl, 3
// 0052eb54  7522                 jne 0x52eb78
// 0052eb56  80fa04               cmp dl, 4
// 0052eb59  7438                 je 0x52eb93
// 0052eb5b  6890c68200           push 0x82c690
// 0052eb60  57                   push edi
// 0052eb61  e8eaaeffff           call 0x529a50
// 0052eb66  56                   push esi
// 0052eb67  57                   push edi
// 0052eb68  e893b9ffff           call 0x52a500
// 0052eb6d  83c410               add esp, 0x10
// 0052eb70  5d                   pop ebp
// 0052eb71  5e                   pop esi
// 0052eb72  5b                   pop ebx
// 0052eb73  5f                   pop edi
// 0052eb74  83c414               add esp, 0x14
// 0052eb77  c3                   ret 
// 0052eb78  80f904               cmp cl, 4
// 0052eb7b  7216                 jb 0x52eb93
// 0052eb7d  68b8b58200           push 0x82b5b8
// 0052eb82  57                   push edi
// 0052eb83  e8c8aeffff           call 0x529a50
// 0052eb88  8a542430             mov dl, byte ptr [esp + 0x30]
// 0052eb8c  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052eb90  83c408               add esp, 8
// 0052eb93  803800               cmp byte ptr [eax], 0
// 0052eb96  8bf0                 mov esi, eax
// 0052eb98  740c                 je 0x52eba6
// 0052eb9a  8d9b00000000         lea ebx, [ebx]
// 0052eba0  46                   inc esi
// 0052eba1  803e00               cmp byte ptr [esi], 0
// 0052eba4  75fa                 jne 0x52eba0
// 0052eba6  0fb6c2               movzx eax, dl
// 0052eba9  89442428             mov dword ptr [esp + 0x28], eax
// 0052ebad  03c0                 add eax, eax
// 0052ebaf  03c0                 add eax, eax
// 0052ebb1  50                   push eax
// 0052ebb2  57                   push edi
// 0052ebb3  e878b9ffff           call 0x52a530
// 0052ebb8  83c408               add esp, 8
// 0052ebbb  89442420             mov dword ptr [esp + 0x20], eax
// 0052ebbf  85c0                 test eax, eax
// 0052ebc1  7521                 jne 0x52ebe4
// 0052ebc3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052ebc7  51                   push ecx
// 0052ebc8  57                   push edi
// 0052ebc9  e832b9ffff           call 0x52a500
// 0052ebce  6874c68200           push 0x82c674
// 0052ebd3  57                   push edi
// 0052ebd4  e877aeffff           call 0x529a50
// 0052ebd9  83c410               add esp, 0x10
// 0052ebdc  5d                   pop ebp
// 0052ebdd  5e                   pop esi
// 0052ebde  5b                   pop ebx
// 0052ebdf  5f                   pop edi
// 0052ebe0  83c414               add esp, 0x14
// 0052ebe3  c3                   ret 
// 0052ebe4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052ebe8  33c9                 xor ecx, ecx
// 0052ebea  85d2                 test edx, edx
// 0052ebec  7e2d                 jle 0x52ec1b
// 0052ebee  8bff                 mov edi, edi
// 0052ebf0  46                   inc esi
// 0052ebf1  893488               mov dword ptr [eax + ecx*4], esi
// 0052ebf4  803e00               cmp byte ptr [esi], 0
// 0052ebf7  7413                 je 0x52ec0c
// 0052ebf9  8da42400000000       lea esp, [esp]
// 0052ec00  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0052ec04  7751                 ja 0x52ec57
// 0052ec06  46                   inc esi
// 0052ec07  803e00               cmp byte ptr [esi], 0
// 0052ec0a  75f4                 jne 0x52ec00
// 0052ec0c  3b742418             cmp esi, dword ptr [esp + 0x18]
// 0052ec10  7745                 ja 0x52ec57
// 0052ec12  8b542428             mov edx, dword ptr [esp + 0x28]
// 0052ec16  41                   inc ecx
// 0052ec17  3bca                 cmp ecx, edx
// 0052ec19  7cd5                 jl 0x52ebf0
// 0052ec1b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052ec1f  8b742414             mov esi, dword ptr [esp + 0x14]
// 0052ec23  50                   push eax
// 0052ec24  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052ec28  51                   push ecx
// 0052ec29  52                   push edx
// 0052ec2a  0fb654241f           movzx edx, byte ptr [esp + 0x1f]
// 0052ec2f  52                   push edx
// 0052ec30  53                   push ebx
// 0052ec31  55                   push ebp
// 0052ec32  56                   push esi
// 0052ec33  50                   push eax
// 0052ec34  57                   push edi
// 0052ec35  e8a6e4feff           call 0x51d0e0
// 0052ec3a  56                   push esi
// 0052ec3b  57                   push edi
// 0052ec3c  e8bfb8ffff           call 0x52a500
// 0052ec41  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0052ec45  51                   push ecx
// 0052ec46  57                   push edi
// 0052ec47  e8b4b8ffff           call 0x52a500
// 0052ec4c  83c434               add esp, 0x34
// 0052ec4f  5d                   pop ebp
// 0052ec50  5e                   pop esi
// 0052ec51  5b                   pop ebx
// 0052ec52  5f                   pop edi
// 0052ec53  83c414               add esp, 0x14
// 0052ec56  c3                   ret 
// 0052ec57  68bcc68200           push 0x82c6bc
// 0052ec5c  57                   push edi
// 0052ec5d  e8eeadffff           call 0x529a50
// 0052ec62  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0052ec66  52                   push edx
// 0052ec67  57                   push edi
// 0052ec68  e893b8ffff           call 0x52a500
// 0052ec6d  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052ec71  50                   push eax
// 0052ec72  57                   push edi
// 0052ec73  e888b8ffff           call 0x52a500
// 0052ec78  83c418               add esp, 0x18
// 0052ec7b  5d                   pop ebp
// 0052ec7c  5e                   pop esi
// 0052ec7d  5b                   pop ebx
// 0052ec7e  5f                   pop edi
// 0052ec7f  83c414               add esp, 0x14
// 0052ec82  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_pCAL)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
