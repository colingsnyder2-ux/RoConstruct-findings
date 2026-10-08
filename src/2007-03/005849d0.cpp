// roc 2007-03 005849d0  unit: seg_00580000  size: 749 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005849d0
//
// 005849d0  64a100000000         mov eax, dword ptr fs:[0]
// 005849d6  6aff                 push -1
// 005849d8  68926f7500           push 0x756f92
// 005849dd  50                   push eax
// 005849de  64892500000000       mov dword ptr fs:[0], esp
// 005849e5  8b442418             mov eax, dword ptr [esp + 0x18]
// 005849e9  83ec48               sub esp, 0x48
// 005849ec  80781900             cmp byte ptr [eax + 0x19], 0
// 005849f0  55                   push ebp
// 005849f1  8be9                 mov ebp, ecx
// 005849f3  7459                 je 0x584a4e
// 005849f5  68dc3e7800           push 0x783edc
// 005849fa  8d4c240c             lea ecx, [esp + 0xc]
// 005849fe  ff1578e77700         call dword ptr [0x77e778]
// 00584a04  8d4c2424             lea ecx, [esp + 0x24]
// 00584a08  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00584a10  ff1560e97700         call dword ptr [0x77e960]
// 00584a16  8d442408             lea eax, [esp + 8]
// 00584a1a  50                   push eax
// 00584a1b  8d4c2434             lea ecx, [esp + 0x34]
// 00584a1f  c644245801           mov byte ptr [esp + 0x58], 1
// 00584a24  c7442428383e7800     mov dword ptr [esp + 0x28], 0x783e38
// 00584a2c  ff157ce77700         call dword ptr [0x77e77c]
// 00584a32  68ccf38300           push 0x83f3cc
// 00584a37  8d4c2428             lea ecx, [esp + 0x28]
// 00584a3b  51                   push ecx
// 00584a3c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00584a41  c744242c503e7800     mov dword ptr [esp + 0x2c], 0x783e50
// 00584a49  e8e0a50900           call 0x61f02e
// 00584a4e  53                   push ebx
// 00584a4f  56                   push esi
// 00584a50  8bd8                 mov ebx, eax
// 00584a52  57                   push edi
// 00584a53  8d4c246c             lea ecx, [esp + 0x6c]
// 00584a57  895c2410             mov dword ptr [esp + 0x10], ebx
// 00584a5b  e8a0c70600           call 0x5f1200
// 00584a60  8b03                 mov eax, dword ptr [ebx]
// 00584a62  80781900             cmp byte ptr [eax + 0x19], 0
// 00584a66  7405                 je 0x584a6d
// 00584a68  8b7b08               mov edi, dword ptr [ebx + 8]
// 00584a6b  eb18                 jmp 0x584a85
// 00584a6d  8b5308               mov edx, dword ptr [ebx + 8]
// 00584a70  807a1900             cmp byte ptr [edx + 0x19], 0
// 00584a74  7404                 je 0x584a7a
// 00584a76  8bf8                 mov edi, eax
// 00584a78  eb0b                 jmp 0x584a85
// 00584a7a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00584a7e  3bcb                 cmp ecx, ebx
// 00584a80  8b7908               mov edi, dword ptr [ecx + 8]
// 00584a83  756b                 jne 0x584af0
// 00584a85  807f1900             cmp byte ptr [edi + 0x19], 0
// 00584a89  8b7304               mov esi, dword ptr [ebx + 4]
// 00584a8c  7503                 jne 0x584a91
// 00584a8e  897704               mov dword ptr [edi + 4], esi
// 00584a91  8b4504               mov eax, dword ptr [ebp + 4]
// 00584a94  395804               cmp dword ptr [eax + 4], ebx
// 00584a97  7505                 jne 0x584a9e
// 00584a99  897804               mov dword ptr [eax + 4], edi
// 00584a9c  eb0b                 jmp 0x584aa9
// 00584a9e  391e                 cmp dword ptr [esi], ebx
// 00584aa0  7504                 jne 0x584aa6
// 00584aa2  893e                 mov dword ptr [esi], edi
// 00584aa4  eb03                 jmp 0x584aa9
// 00584aa6  897e08               mov dword ptr [esi + 8], edi
// 00584aa9  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00584aac  8b03                 mov eax, dword ptr [ebx]
// 00584aae  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00584ab2  7515                 jne 0x584ac9
// 00584ab4  807f1900             cmp byte ptr [edi + 0x19], 0
// 00584ab8  7404                 je 0x584abe
// 00584aba  8bc6                 mov eax, esi
// 00584abc  eb09                 jmp 0x584ac7
// 00584abe  57                   push edi
// 00584abf  e8dc74f1ff           call 0x49bfa0
// 00584ac4  83c404               add esp, 4
// 00584ac7  8903                 mov dword ptr [ebx], eax
// 00584ac9  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00584acc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00584ad0  394b08               cmp dword ptr [ebx + 8], ecx
// 00584ad3  7572                 jne 0x584b47
// 00584ad5  807f1900             cmp byte ptr [edi + 0x19], 0
// 00584ad9  7407                 je 0x584ae2
// 00584adb  8bc6                 mov eax, esi
// 00584add  894308               mov dword ptr [ebx + 8], eax
// 00584ae0  eb65                 jmp 0x584b47
// 00584ae2  57                   push edi
// 00584ae3  e808c40600           call 0x5f0ef0
// 00584ae8  83c404               add esp, 4
// 00584aeb  894308               mov dword ptr [ebx + 8], eax
// 00584aee  eb57                 jmp 0x584b47
// 00584af0  894804               mov dword ptr [eax + 4], ecx
// 00584af3  8b13                 mov edx, dword ptr [ebx]
// 00584af5  8911                 mov dword ptr [ecx], edx
// 00584af7  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 00584afa  7504                 jne 0x584b00
// 00584afc  8bf1                 mov esi, ecx
// 00584afe  eb1a                 jmp 0x584b1a
// 00584b00  807f1900             cmp byte ptr [edi + 0x19], 0
// 00584b04  8b7104               mov esi, dword ptr [ecx + 4]
// 00584b07  7503                 jne 0x584b0c
// 00584b09  897704               mov dword ptr [edi + 4], esi
// 00584b0c  893e                 mov dword ptr [esi], edi
// 00584b0e  8b4308               mov eax, dword ptr [ebx + 8]
// 00584b11  894108               mov dword ptr [ecx + 8], eax
// 00584b14  8b5308               mov edx, dword ptr [ebx + 8]
// 00584b17  894a04               mov dword ptr [edx + 4], ecx
// 00584b1a  8b4504               mov eax, dword ptr [ebp + 4]
// 00584b1d  395804               cmp dword ptr [eax + 4], ebx
// 00584b20  7505                 jne 0x584b27
// 00584b22  894804               mov dword ptr [eax + 4], ecx
// 00584b25  eb0e                 jmp 0x584b35
// 00584b27  8b4304               mov eax, dword ptr [ebx + 4]
// 00584b2a  3918                 cmp dword ptr [eax], ebx
// 00584b2c  7504                 jne 0x584b32
// 00584b2e  8908                 mov dword ptr [eax], ecx
// 00584b30  eb03                 jmp 0x584b35
// 00584b32  894808               mov dword ptr [eax + 8], ecx
// 00584b35  8b4304               mov eax, dword ptr [ebx + 4]
// 00584b38  894104               mov dword ptr [ecx + 4], eax
// 00584b3b  8a5318               mov dl, byte ptr [ebx + 0x18]
// 00584b3e  8a4118               mov al, byte ptr [ecx + 0x18]
// 00584b41  885118               mov byte ptr [ecx + 0x18], dl
// 00584b44  884318               mov byte ptr [ebx + 0x18], al
// 00584b47  8b442410             mov eax, dword ptr [esp + 0x10]
// 00584b4b  b301                 mov bl, 1
// 00584b4d  385818               cmp byte ptr [eax + 0x18], bl
// 00584b50  0f85f2000000         jne 0x584c48
// 00584b56  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00584b59  3b7904               cmp edi, dword ptr [ecx + 4]
// 00584b5c  0f84e3000000         je 0x584c45
// 00584b62  385f18               cmp byte ptr [edi + 0x18], bl
// 00584b65  0f85da000000         jne 0x584c45
// 00584b6b  8b06                 mov eax, dword ptr [esi]
// 00584b6d  3bf8                 cmp edi, eax
// 00584b6f  7563                 jne 0x584bd4
// 00584b71  8b4608               mov eax, dword ptr [esi + 8]
// 00584b74  80781800             cmp byte ptr [eax + 0x18], 0
// 00584b78  7512                 jne 0x584b8c
// 00584b7a  885818               mov byte ptr [eax + 0x18], bl
// 00584b7d  56                   push esi
// 00584b7e  8bcd                 mov ecx, ebp
// 00584b80  c6461800             mov byte ptr [esi + 0x18], 0
// 00584b84  e827c60600           call 0x5f11b0
// 00584b89  8b4608               mov eax, dword ptr [esi + 8]
// 00584b8c  80781900             cmp byte ptr [eax + 0x19], 0
// 00584b90  7572                 jne 0x584c04
// 00584b92  8b10                 mov edx, dword ptr [eax]
// 00584b94  385a18               cmp byte ptr [edx + 0x18], bl
// 00584b97  7508                 jne 0x584ba1
// 00584b99  8b4808               mov ecx, dword ptr [eax + 8]
// 00584b9c  385918               cmp byte ptr [ecx + 0x18], bl
// 00584b9f  745f                 je 0x584c00
// 00584ba1  8b4808               mov ecx, dword ptr [eax + 8]
// 00584ba4  385918               cmp byte ptr [ecx + 0x18], bl
// 00584ba7  7512                 jne 0x584bbb
// 00584ba9  885a18               mov byte ptr [edx + 0x18], bl
// 00584bac  50                   push eax
// 00584bad  8bcd                 mov ecx, ebp
// 00584baf  c6401800             mov byte ptr [eax + 0x18], 0
// 00584bb3  e8a872f1ff           call 0x49be60
// 00584bb8  8b4608               mov eax, dword ptr [esi + 8]
// 00584bbb  8a4e18               mov cl, byte ptr [esi + 0x18]
// 00584bbe  884818               mov byte ptr [eax + 0x18], cl
// 00584bc1  885e18               mov byte ptr [esi + 0x18], bl
// 00584bc4  8b5008               mov edx, dword ptr [eax + 8]
// 00584bc7  56                   push esi
// 00584bc8  8bcd                 mov ecx, ebp
// 00584bca  885a18               mov byte ptr [edx + 0x18], bl
// 00584bcd  e8dec50600           call 0x5f11b0
// 00584bd2  eb71                 jmp 0x584c45
// 00584bd4  80781800             cmp byte ptr [eax + 0x18], 0
// 00584bd8  7511                 jne 0x584beb
// 00584bda  885818               mov byte ptr [eax + 0x18], bl
// 00584bdd  56                   push esi
// 00584bde  8bcd                 mov ecx, ebp
// 00584be0  c6461800             mov byte ptr [esi + 0x18], 0
// 00584be4  e87772f1ff           call 0x49be60
// 00584be9  8b06                 mov eax, dword ptr [esi]
// 00584beb  80781900             cmp byte ptr [eax + 0x19], 0
// 00584bef  7513                 jne 0x584c04
// 00584bf1  8b5008               mov edx, dword ptr [eax + 8]
// 00584bf4  385a18               cmp byte ptr [edx + 0x18], bl
// 00584bf7  751e                 jne 0x584c17
// 00584bf9  8b08                 mov ecx, dword ptr [eax]
// 00584bfb  385918               cmp byte ptr [ecx + 0x18], bl
// 00584bfe  7517                 jne 0x584c17
// 00584c00  c6401800             mov byte ptr [eax + 0x18], 0
// 00584c04  8b5504               mov edx, dword ptr [ebp + 4]
// 00584c07  8bfe                 mov edi, esi
// 00584c09  3b7a04               cmp edi, dword ptr [edx + 4]
// 00584c0c  8b7604               mov esi, dword ptr [esi + 4]
// 00584c0f  0f854dffffff         jne 0x584b62
// 00584c15  eb2e                 jmp 0x584c45
// 00584c17  8b08                 mov ecx, dword ptr [eax]
// 00584c19  385918               cmp byte ptr [ecx + 0x18], bl
// 00584c1c  7511                 jne 0x584c2f
// 00584c1e  885a18               mov byte ptr [edx + 0x18], bl
// 00584c21  50                   push eax
// 00584c22  8bcd                 mov ecx, ebp
// 00584c24  c6401800             mov byte ptr [eax + 0x18], 0
// 00584c28  e883c50600           call 0x5f11b0
// 00584c2d  8b06                 mov eax, dword ptr [esi]
// 00584c2f  8a4e18               mov cl, byte ptr [esi + 0x18]
// 00584c32  884818               mov byte ptr [eax + 0x18], cl
// 00584c35  885e18               mov byte ptr [esi + 0x18], bl
// 00584c38  8b10                 mov edx, dword ptr [eax]
// 00584c3a  56                   push esi
// 00584c3b  8bcd                 mov ecx, ebp
// 00584c3d  885a18               mov byte ptr [edx + 0x18], bl
// 00584c40  e81b72f1ff           call 0x49be60
// 00584c45  885f18               mov byte ptr [edi + 0x18], bl
// 00584c48  8b442410             mov eax, dword ptr [esp + 0x10]
// 00584c4c  8b7014               mov esi, dword ptr [eax + 0x14]
// 00584c4f  85f6                 test esi, esi
// 00584c51  742a                 je 0x584c7d
// 00584c53  8d4e04               lea ecx, [esi + 4]
// 00584c56  83caff               or edx, 0xffffffff
// 00584c59  f00fc111             lock xadd dword ptr [ecx], edx
// 00584c5d  751e                 jne 0x584c7d
// 00584c5f  8b06                 mov eax, dword ptr [esi]
// 00584c61  8b5004               mov edx, dword ptr [eax + 4]
// 00584c64  8bce                 mov ecx, esi
// 00584c66  ffd2                 call edx
// 00584c68  8d4608               lea eax, [esi + 8]
// 00584c6b  83c9ff               or ecx, 0xffffffff
// 00584c6e  f00fc108             lock xadd dword ptr [eax], ecx
// 00584c72  7509                 jne 0x584c7d
// 00584c74  8b16                 mov edx, dword ptr [esi]
// 00584c76  8b4208               mov eax, dword ptr [edx + 8]
// 00584c79  8bce                 mov ecx, esi
// 00584c7b  ffd0                 call eax
// 00584c7d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00584c81  51                   push ecx
// 00584c82  e869940900           call 0x61e0f0
// 00584c87  8b4508               mov eax, dword ptr [ebp + 8]
// 00584c8a  83c404               add esp, 4
// 00584c8d  85c0                 test eax, eax
// 00584c8f  5f                   pop edi
// 00584c90  5e                   pop esi
// 00584c91  5b                   pop ebx
// 00584c92  7606                 jbe 0x584c9a
// 00584c94  83c0ff               add eax, -1
// 00584c97  894508               mov dword ptr [ebp + 8], eax
// 00584c9a  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00584c9e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00584ca2  8b542460             mov edx, dword ptr [esp + 0x60]
// 00584ca6  894804               mov dword ptr [eax + 4], ecx
// 00584ca9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00584cad  8910                 mov dword ptr [eax], edx
// 00584caf  5d                   pop ebp
// 00584cb0  64890d00000000       mov dword ptr fs:[0], ecx
// 00584cb7  83c454               add esp, 0x54
// 00584cba  c20c00               ret 0xc
// library rbxgs/v8datamodel\DataModel.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@6@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
