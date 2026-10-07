// roc 2010-06 00780d00  unit: seg_00780000  size: 619 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00780d00
//
// 00780d00  83ec24               sub esp, 0x24
// 00780d03  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00780d06  55                   push ebp
// 00780d07  56                   push esi
// 00780d08  57                   push edi
// 00780d09  6a0f                 push 0xf
// 00780d0b  89442414             mov dword ptr [esp + 0x14], eax
// 00780d0f  8b4024               mov eax, dword ptr [eax + 0x24]
// 00780d12  687c32a500           push 0xa5327c
// 00780d17  53                   push ebx
// 00780d18  89442420             mov dword ptr [esp + 0x20], eax
// 00780d1c  e88f180000           call 0x7825b0
// 00780d21  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00780d24  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780d28  41                   inc ecx
// 00780d29  83c40c               add esp, 0xc
// 00780d2c  81f9c8000000         cmp ecx, 0xc8
// 00780d32  8bf8                 mov edi, eax
// 00780d34  7e0f                 jle 0x780d45
// 00780d36  b9dc30a500           mov ecx, 0xa530dc
// 00780d3b  bac8000000           mov edx, 0xc8
// 00780d40  e89bddffff           call 0x77eae0
// 00780d45  57                   push edi
// 00780d46  53                   push ebx
// 00780d47  e8d4deffff           call 0x77ec20
// 00780d4c  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00780d50  6a0b                 push 0xb
// 00780d52  687032a500           push 0xa53270
// 00780d57  53                   push ebx
// 00780d58  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 00780d60  e84b180000           call 0x7825b0
// 00780d65  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00780d68  8bf8                 mov edi, eax
// 00780d6a  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00780d6e  83c002               add eax, 2
// 00780d71  83c414               add esp, 0x14
// 00780d74  3dc8000000           cmp eax, 0xc8
// 00780d79  7e0f                 jle 0x780d8a
// 00780d7b  b9dc30a500           mov ecx, 0xa530dc
// 00780d80  bac8000000           mov edx, 0xc8
// 00780d85  e856ddffff           call 0x77eae0
// 00780d8a  57                   push edi
// 00780d8b  53                   push ebx
// 00780d8c  e88fdeffff           call 0x77ec20
// 00780d91  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780d95  6a0d                 push 0xd
// 00780d97  686032a500           push 0xa53260
// 00780d9c  53                   push ebx
// 00780d9d  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 00780da5  e806180000           call 0x7825b0
// 00780daa  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00780dad  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00780db1  83c203               add edx, 3
// 00780db4  83c414               add esp, 0x14
// 00780db7  81fac8000000         cmp edx, 0xc8
// 00780dbd  8bf8                 mov edi, eax
// 00780dbf  7e0f                 jle 0x780dd0
// 00780dc1  b9dc30a500           mov ecx, 0xa530dc
// 00780dc6  bac8000000           mov edx, 0xc8
// 00780dcb  e810ddffff           call 0x77eae0
// 00780dd0  57                   push edi
// 00780dd1  53                   push ebx
// 00780dd2  e849deffff           call 0x77ec20
// 00780dd7  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780ddb  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 00780de3  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00780de6  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00780dea  83c204               add edx, 4
// 00780ded  83c408               add esp, 8
// 00780df0  81fac8000000         cmp edx, 0xc8
// 00780df6  7e0f                 jle 0x780e07
// 00780df8  b9dc30a500           mov ecx, 0xa530dc
// 00780dfd  bac8000000           mov edx, 0xc8
// 00780e02  e8d9dcffff           call 0x77eae0
// 00780e07  8b442434             mov eax, dword ptr [esp + 0x34]
// 00780e0b  50                   push eax
// 00780e0c  53                   push ebx
// 00780e0d  e80edeffff           call 0x77ec20
// 00780e12  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780e16  83c408               add esp, 8
// 00780e19  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 00780e21  bf04000000           mov edi, 4
// 00780e26  837b102c             cmp dword ptr [ebx + 0x10], 0x2c
// 00780e2a  0f85ba000000         jne 0x780eea
// 00780e30  53                   push ebx
// 00780e31  e84a2b0000           call 0x783980
// 00780e36  83c404               add esp, 4
// 00780e39  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 00780e40  7424                 je 0x780e66
// 00780e42  681d010000           push 0x11d
// 00780e47  53                   push ebx
// 00780e48  e843160000           call 0x782490
// 00780e4d  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00780e50  50                   push eax
// 00780e51  683830a500           push 0xa53038
// 00780e56  52                   push edx
// 00780e57  e8841ffbff           call 0x732de0
// 00780e5c  50                   push eax
// 00780e5d  53                   push ebx
// 00780e5e  e82d170000           call 0x782590
// 00780e63  83c41c               add esp, 0x1c
// 00780e66  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00780e69  53                   push ebx
// 00780e6a  e8112b0000           call 0x783980
// 00780e6f  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00780e72  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00780e76  8d4c3801             lea ecx, [eax + edi + 1]
// 00780e7a  83c404               add esp, 4
// 00780e7d  81f9c8000000         cmp ecx, 0xc8
// 00780e83  7e47                 jle 0x780ecc
// 00780e85  8b16                 mov edx, dword ptr [esi]
// 00780e87  8b423c               mov eax, dword ptr [edx + 0x3c]
// 00780e8a  68dc30a500           push 0xa530dc
// 00780e8f  68c8000000           push 0xc8
// 00780e94  85c0                 test eax, eax
// 00780e96  7513                 jne 0x780eab
// 00780e98  8b4610               mov eax, dword ptr [esi + 0x10]
// 00780e9b  687030a500           push 0xa53070
// 00780ea0  50                   push eax
// 00780ea1  e83a1ffbff           call 0x732de0
// 00780ea6  83c410               add esp, 0x10
// 00780ea9  eb12                 jmp 0x780ebd
// 00780eab  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00780eae  50                   push eax
// 00780eaf  684830a500           push 0xa53048
// 00780eb4  51                   push ecx
// 00780eb5  e8261ffbff           call 0x732de0
// 00780eba  83c414               add esp, 0x14
// 00780ebd  8b560c               mov edx, dword ptr [esi + 0xc]
// 00780ec0  6a00                 push 0
// 00780ec2  50                   push eax
// 00780ec3  52                   push edx
// 00780ec4  e827160000           call 0x7824f0
// 00780ec9  83c40c               add esp, 0xc
// 00780ecc  55                   push ebp
// 00780ecd  53                   push ebx
// 00780ece  e84dddffff           call 0x77ec20
// 00780ed3  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780ed7  03cf                 add ecx, edi
// 00780ed9  83c408               add esp, 8
// 00780edc  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 00780ee4  47                   inc edi
// 00780ee5  e93cffffff           jmp 0x780e26
// 00780eea  817b100b010000       cmp dword ptr [ebx + 0x10], 0x10b
// 00780ef1  897c240c             mov dword ptr [esp + 0xc], edi
// 00780ef5  7424                 je 0x780f1b
// 00780ef7  680b010000           push 0x10b
// 00780efc  53                   push ebx
// 00780efd  e88e150000           call 0x782490
// 00780f02  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00780f05  50                   push eax
// 00780f06  683830a500           push 0xa53038
// 00780f0b  52                   push edx
// 00780f0c  e8cf1efbff           call 0x732de0
// 00780f11  50                   push eax
// 00780f12  53                   push ebx
// 00780f13  e878160000           call 0x782590
// 00780f18  83c41c               add esp, 0x1c
// 00780f1b  53                   push ebx
// 00780f1c  e85f2a0000           call 0x783980
// 00780f21  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00780f24  8d7c241c             lea edi, [esp + 0x1c]
// 00780f28  8bf3                 mov esi, ebx
// 00780f2a  e861ebffff           call 0x77fa90
// 00780f2f  50                   push eax
// 00780f30  8bcf                 mov ecx, edi
// 00780f32  ba03000000           mov edx, 3
// 00780f37  8bc3                 mov eax, ebx
// 00780f39  e882e0ffff           call 0x77efc0
// 00780f3e  8b442418             mov eax, dword ptr [esp + 0x18]
// 00780f42  6a03                 push 3
// 00780f44  50                   push eax
// 00780f45  e836e70000           call 0x78f680
// 00780f4a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00780f4e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00780f52  6a00                 push 0
// 00780f54  83c1fd               add ecx, -3
// 00780f57  51                   push ecx
// 00780f58  55                   push ebp
// 00780f59  52                   push edx
// 00780f5a  8bc3                 mov eax, ebx
// 00780f5c  e8cff9ffff           call 0x780930
// 00780f61  83c420               add esp, 0x20
// 00780f64  5f                   pop edi
// 00780f65  5e                   pop esi
// 00780f66  5d                   pop ebp
// 00780f67  83c424               add esp, 0x24
// 00780f6a  c3                   ret 
// library lua-5.1.4/lparser.c (function _forlist)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
