// roc 2007-08 00569c60  unit: RBX::ModelInstance  size: 708 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00569c60
//
// 00569c60  64a100000000         mov eax, dword ptr fs:[0]
// 00569c66  6aff                 push -1
// 00569c68  68b2417500           push 0x7541b2
// 00569c6d  50                   push eax
// 00569c6e  64892500000000       mov dword ptr fs:[0], esp
// 00569c75  8b442418             mov eax, dword ptr [esp + 0x18]
// 00569c79  83ec48               sub esp, 0x48
// 00569c7c  80783100             cmp byte ptr [eax + 0x31], 0
// 00569c80  55                   push ebp
// 00569c81  8be9                 mov ebp, ecx
// 00569c83  7459                 je 0x569cde
// 00569c85  68dc4e7800           push 0x784edc
// 00569c8a  8d4c240c             lea ecx, [esp + 0xc]
// 00569c8e  ff1598e67700         call dword ptr [0x77e698]
// 00569c94  8d4c2424             lea ecx, [esp + 0x24]
// 00569c98  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00569ca0  ff15f8e67700         call dword ptr [0x77e6f8]
// 00569ca6  8d442408             lea eax, [esp + 8]
// 00569caa  50                   push eax
// 00569cab  8d4c2434             lea ecx, [esp + 0x34]
// 00569caf  c644245801           mov byte ptr [esp + 0x58], 1
// 00569cb4  c7442428604e7800     mov dword ptr [esp + 0x28], 0x784e60
// 00569cbc  ff159ce67700         call dword ptr [0x77e69c]
// 00569cc2  6864f38300           push 0x83f364
// 00569cc7  8d4c2428             lea ecx, [esp + 0x28]
// 00569ccb  51                   push ecx
// 00569ccc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00569cd1  c744242c784e7800     mov dword ptr [esp + 0x2c], 0x784e78
// 00569cd9  e8c06e0c00           call 0x630b9e
// 00569cde  53                   push ebx
// 00569cdf  56                   push esi
// 00569ce0  8bd8                 mov ebx, eax
// 00569ce2  57                   push edi
// 00569ce3  8d4c246c             lea ecx, [esp + 0x6c]
// 00569ce7  895c2410             mov dword ptr [esp + 0x10], ebx
// 00569ceb  e840f8ffff           call 0x569530
// 00569cf0  8b03                 mov eax, dword ptr [ebx]
// 00569cf2  80783100             cmp byte ptr [eax + 0x31], 0
// 00569cf6  7405                 je 0x569cfd
// 00569cf8  8b7b08               mov edi, dword ptr [ebx + 8]
// 00569cfb  eb18                 jmp 0x569d15
// 00569cfd  8b5308               mov edx, dword ptr [ebx + 8]
// 00569d00  807a3100             cmp byte ptr [edx + 0x31], 0
// 00569d04  7404                 je 0x569d0a
// 00569d06  8bf8                 mov edi, eax
// 00569d08  eb0b                 jmp 0x569d15
// 00569d0a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00569d0e  3bcb                 cmp ecx, ebx
// 00569d10  8b7908               mov edi, dword ptr [ecx + 8]
// 00569d13  756b                 jne 0x569d80
// 00569d15  807f3100             cmp byte ptr [edi + 0x31], 0
// 00569d19  8b7304               mov esi, dword ptr [ebx + 4]
// 00569d1c  7503                 jne 0x569d21
// 00569d1e  897704               mov dword ptr [edi + 4], esi
// 00569d21  8b4504               mov eax, dword ptr [ebp + 4]
// 00569d24  395804               cmp dword ptr [eax + 4], ebx
// 00569d27  7505                 jne 0x569d2e
// 00569d29  897804               mov dword ptr [eax + 4], edi
// 00569d2c  eb0b                 jmp 0x569d39
// 00569d2e  391e                 cmp dword ptr [esi], ebx
// 00569d30  7504                 jne 0x569d36
// 00569d32  893e                 mov dword ptr [esi], edi
// 00569d34  eb03                 jmp 0x569d39
// 00569d36  897e08               mov dword ptr [esi + 8], edi
// 00569d39  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00569d3c  8b03                 mov eax, dword ptr [ebx]
// 00569d3e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00569d42  7515                 jne 0x569d59
// 00569d44  807f3100             cmp byte ptr [edi + 0x31], 0
// 00569d48  7404                 je 0x569d4e
// 00569d4a  8bc6                 mov eax, esi
// 00569d4c  eb09                 jmp 0x569d57
// 00569d4e  57                   push edi
// 00569d4f  e8bcf7ffff           call 0x569510
// 00569d54  83c404               add esp, 4
// 00569d57  8903                 mov dword ptr [ebx], eax
// 00569d59  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00569d5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00569d60  394b08               cmp dword ptr [ebx + 8], ecx
// 00569d63  7572                 jne 0x569dd7
// 00569d65  807f3100             cmp byte ptr [edi + 0x31], 0
// 00569d69  7407                 je 0x569d72
// 00569d6b  8bc6                 mov eax, esi
// 00569d6d  894308               mov dword ptr [ebx + 8], eax
// 00569d70  eb65                 jmp 0x569dd7
// 00569d72  57                   push edi
// 00569d73  e878f7ffff           call 0x5694f0
// 00569d78  83c404               add esp, 4
// 00569d7b  894308               mov dword ptr [ebx + 8], eax
// 00569d7e  eb57                 jmp 0x569dd7
// 00569d80  894804               mov dword ptr [eax + 4], ecx
// 00569d83  8b13                 mov edx, dword ptr [ebx]
// 00569d85  8911                 mov dword ptr [ecx], edx
// 00569d87  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 00569d8a  7504                 jne 0x569d90
// 00569d8c  8bf1                 mov esi, ecx
// 00569d8e  eb1a                 jmp 0x569daa
// 00569d90  807f3100             cmp byte ptr [edi + 0x31], 0
// 00569d94  8b7104               mov esi, dword ptr [ecx + 4]
// 00569d97  7503                 jne 0x569d9c
// 00569d99  897704               mov dword ptr [edi + 4], esi
// 00569d9c  893e                 mov dword ptr [esi], edi
// 00569d9e  8b4308               mov eax, dword ptr [ebx + 8]
// 00569da1  894108               mov dword ptr [ecx + 8], eax
// 00569da4  8b5308               mov edx, dword ptr [ebx + 8]
// 00569da7  894a04               mov dword ptr [edx + 4], ecx
// 00569daa  8b4504               mov eax, dword ptr [ebp + 4]
// 00569dad  395804               cmp dword ptr [eax + 4], ebx
// 00569db0  7505                 jne 0x569db7
// 00569db2  894804               mov dword ptr [eax + 4], ecx
// 00569db5  eb0e                 jmp 0x569dc5
// 00569db7  8b4304               mov eax, dword ptr [ebx + 4]
// 00569dba  3918                 cmp dword ptr [eax], ebx
// 00569dbc  7504                 jne 0x569dc2
// 00569dbe  8908                 mov dword ptr [eax], ecx
// 00569dc0  eb03                 jmp 0x569dc5
// 00569dc2  894808               mov dword ptr [eax + 8], ecx
// 00569dc5  8b4304               mov eax, dword ptr [ebx + 4]
// 00569dc8  894104               mov dword ptr [ecx + 4], eax
// 00569dcb  8a5330               mov dl, byte ptr [ebx + 0x30]
// 00569dce  8a4130               mov al, byte ptr [ecx + 0x30]
// 00569dd1  885130               mov byte ptr [ecx + 0x30], dl
// 00569dd4  884330               mov byte ptr [ebx + 0x30], al
// 00569dd7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00569ddb  b301                 mov bl, 1
// 00569ddd  385830               cmp byte ptr [eax + 0x30], bl
// 00569de0  0f85f2000000         jne 0x569ed8
// 00569de6  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00569de9  3b7904               cmp edi, dword ptr [ecx + 4]
// 00569dec  0f84e3000000         je 0x569ed5
// 00569df2  385f30               cmp byte ptr [edi + 0x30], bl
// 00569df5  0f85da000000         jne 0x569ed5
// 00569dfb  8b06                 mov eax, dword ptr [esi]
// 00569dfd  3bf8                 cmp edi, eax
// 00569dff  7563                 jne 0x569e64
// 00569e01  8b4608               mov eax, dword ptr [esi + 8]
// 00569e04  80783000             cmp byte ptr [eax + 0x30], 0
// 00569e08  7512                 jne 0x569e1c
// 00569e0a  885830               mov byte ptr [eax + 0x30], bl
// 00569e0d  56                   push esi
// 00569e0e  8bcd                 mov ecx, ebp
// 00569e10  c6463000             mov byte ptr [esi + 0x30], 0
// 00569e14  e857f8ffff           call 0x569670
// 00569e19  8b4608               mov eax, dword ptr [esi + 8]
// 00569e1c  80783100             cmp byte ptr [eax + 0x31], 0
// 00569e20  7572                 jne 0x569e94
// 00569e22  8b10                 mov edx, dword ptr [eax]
// 00569e24  385a30               cmp byte ptr [edx + 0x30], bl
// 00569e27  7508                 jne 0x569e31
// 00569e29  8b4808               mov ecx, dword ptr [eax + 8]
// 00569e2c  385930               cmp byte ptr [ecx + 0x30], bl
// 00569e2f  745f                 je 0x569e90
// 00569e31  8b4808               mov ecx, dword ptr [eax + 8]
// 00569e34  385930               cmp byte ptr [ecx + 0x30], bl
// 00569e37  7512                 jne 0x569e4b
// 00569e39  885a30               mov byte ptr [edx + 0x30], bl
// 00569e3c  50                   push eax
// 00569e3d  8bcd                 mov ecx, ebp
// 00569e3f  c6403000             mov byte ptr [eax + 0x30], 0
// 00569e43  e848f6ffff           call 0x569490
// 00569e48  8b4608               mov eax, dword ptr [esi + 8]
// 00569e4b  8a4e30               mov cl, byte ptr [esi + 0x30]
// 00569e4e  884830               mov byte ptr [eax + 0x30], cl
// 00569e51  885e30               mov byte ptr [esi + 0x30], bl
// 00569e54  8b5008               mov edx, dword ptr [eax + 8]
// 00569e57  56                   push esi
// 00569e58  8bcd                 mov ecx, ebp
// 00569e5a  885a30               mov byte ptr [edx + 0x30], bl
// 00569e5d  e80ef8ffff           call 0x569670
// 00569e62  eb71                 jmp 0x569ed5
// 00569e64  80783000             cmp byte ptr [eax + 0x30], 0
// 00569e68  7511                 jne 0x569e7b
// 00569e6a  885830               mov byte ptr [eax + 0x30], bl
// 00569e6d  56                   push esi
// 00569e6e  8bcd                 mov ecx, ebp
// 00569e70  c6463000             mov byte ptr [esi + 0x30], 0
// 00569e74  e817f6ffff           call 0x569490
// 00569e79  8b06                 mov eax, dword ptr [esi]
// 00569e7b  80783100             cmp byte ptr [eax + 0x31], 0
// 00569e7f  7513                 jne 0x569e94
// 00569e81  8b5008               mov edx, dword ptr [eax + 8]
// 00569e84  385a30               cmp byte ptr [edx + 0x30], bl
// 00569e87  751e                 jne 0x569ea7
// 00569e89  8b08                 mov ecx, dword ptr [eax]
// 00569e8b  385930               cmp byte ptr [ecx + 0x30], bl
// 00569e8e  7517                 jne 0x569ea7
// 00569e90  c6403000             mov byte ptr [eax + 0x30], 0
// 00569e94  8b5504               mov edx, dword ptr [ebp + 4]
// 00569e97  8bfe                 mov edi, esi
// 00569e99  3b7a04               cmp edi, dword ptr [edx + 4]
// 00569e9c  8b7604               mov esi, dword ptr [esi + 4]
// 00569e9f  0f854dffffff         jne 0x569df2
// 00569ea5  eb2e                 jmp 0x569ed5
// 00569ea7  8b08                 mov ecx, dword ptr [eax]
// 00569ea9  385930               cmp byte ptr [ecx + 0x30], bl
// 00569eac  7511                 jne 0x569ebf
// 00569eae  885a30               mov byte ptr [edx + 0x30], bl
// 00569eb1  50                   push eax
// 00569eb2  8bcd                 mov ecx, ebp
// 00569eb4  c6403000             mov byte ptr [eax + 0x30], 0
// 00569eb8  e8b3f7ffff           call 0x569670
// 00569ebd  8b06                 mov eax, dword ptr [esi]
// 00569ebf  8a4e30               mov cl, byte ptr [esi + 0x30]
// 00569ec2  884830               mov byte ptr [eax + 0x30], cl
// 00569ec5  885e30               mov byte ptr [esi + 0x30], bl
// 00569ec8  8b10                 mov edx, dword ptr [eax]
// 00569eca  56                   push esi
// 00569ecb  8bcd                 mov ecx, ebp
// 00569ecd  885a30               mov byte ptr [edx + 0x30], bl
// 00569ed0  e8bbf5ffff           call 0x569490
// 00569ed5  885f30               mov byte ptr [edi + 0x30], bl
// 00569ed8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00569edc  83c10c               add ecx, 0xc
// 00569edf  e8bcf6ffff           call 0x5695a0
// 00569ee4  8b442410             mov eax, dword ptr [esp + 0x10]
// 00569ee8  50                   push eax
// 00569ee9  e8745d0c00           call 0x62fc62
// 00569eee  8b4508               mov eax, dword ptr [ebp + 8]
// 00569ef1  83c404               add esp, 4
// 00569ef4  85c0                 test eax, eax
// 00569ef6  5f                   pop edi
// 00569ef7  5e                   pop esi
// 00569ef8  5b                   pop ebx
// 00569ef9  7606                 jbe 0x569f01
// 00569efb  83c0ff               add eax, -1
// 00569efe  894508               mov dword ptr [ebp + 8], eax
// 00569f01  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00569f05  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00569f09  8b542464             mov edx, dword ptr [esp + 0x64]
// 00569f0d  8908                 mov dword ptr [eax], ecx
// 00569f0f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00569f13  895004               mov dword ptr [eax + 4], edx
// 00569f16  5d                   pop ebp
// 00569f17  64890d00000000       mov dword ptr fs:[0], ecx
// 00569f1e  83c454               add esp, 0x54
// 00569f21  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
