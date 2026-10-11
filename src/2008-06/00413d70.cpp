// roc 2008-06 00413d70  unit: CopyVerb  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00413d70
//
// 00413d70  64a100000000         mov eax, dword ptr fs:[0]
// 00413d76  6aff                 push -1
// 00413d78  6842e87d00           push 0x7de842
// 00413d7d  50                   push eax
// 00413d7e  64892500000000       mov dword ptr fs:[0], esp
// 00413d85  8b442418             mov eax, dword ptr [esp + 0x18]
// 00413d89  83ec48               sub esp, 0x48
// 00413d8c  80781900             cmp byte ptr [eax + 0x19], 0
// 00413d90  55                   push ebp
// 00413d91  8be9                 mov ebp, ecx
// 00413d93  7459                 je 0x413dee
// 00413d95  6870b28000           push 0x80b270
// 00413d9a  8d4c240c             lea ecx, [esp + 0xc]
// 00413d9e  ff1558248000         call dword ptr [0x802458]
// 00413da4  8d4c2424             lea ecx, [esp + 0x24]
// 00413da8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00413db0  ff1598288000         call dword ptr [0x802898]
// 00413db6  8d442408             lea eax, [esp + 8]
// 00413dba  50                   push eax
// 00413dbb  8d4c2434             lea ecx, [esp + 0x34]
// 00413dbf  c644245801           mov byte ptr [esp + 0x58], 1
// 00413dc4  c744242810b18000     mov dword ptr [esp + 0x28], 0x80b110
// 00413dcc  ff155c248000         call dword ptr [0x80245c]
// 00413dd2  683c0c8d00           push 0x8d0c3c
// 00413dd7  8d4c2428             lea ecx, [esp + 0x28]
// 00413ddb  51                   push ecx
// 00413ddc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00413de1  c744242c28b18000     mov dword ptr [esp + 0x2c], 0x80b128
// 00413de9  e89ed72800           call 0x6a158c
// 00413dee  53                   push ebx
// 00413def  56                   push esi
// 00413df0  8bd8                 mov ebx, eax
// 00413df2  57                   push edi
// 00413df3  8d4c246c             lea ecx, [esp + 0x6c]
// 00413df7  895c2410             mov dword ptr [esp + 0x10], ebx
// 00413dfb  e850341a00           call 0x5b7250
// 00413e00  8b0b                 mov ecx, dword ptr [ebx]
// 00413e02  80791900             cmp byte ptr [ecx + 0x19], 0
// 00413e06  7405                 je 0x413e0d
// 00413e08  8b7b08               mov edi, dword ptr [ebx + 8]
// 00413e0b  eb1b                 jmp 0x413e28
// 00413e0d  8b5308               mov edx, dword ptr [ebx + 8]
// 00413e10  807a1900             cmp byte ptr [edx + 0x19], 0
// 00413e14  7404                 je 0x413e1a
// 00413e16  8bf9                 mov edi, ecx
// 00413e18  eb0e                 jmp 0x413e28
// 00413e1a  8b442470             mov eax, dword ptr [esp + 0x70]
// 00413e1e  8b7808               mov edi, dword ptr [eax + 8]
// 00413e21  8d5008               lea edx, [eax + 8]
// 00413e24  3bc3                 cmp eax, ebx
// 00413e26  756b                 jne 0x413e93
// 00413e28  807f1900             cmp byte ptr [edi + 0x19], 0
// 00413e2c  8b7304               mov esi, dword ptr [ebx + 4]
// 00413e2f  7503                 jne 0x413e34
// 00413e31  897704               mov dword ptr [edi + 4], esi
// 00413e34  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00413e37  395804               cmp dword ptr [eax + 4], ebx
// 00413e3a  7505                 jne 0x413e41
// 00413e3c  897804               mov dword ptr [eax + 4], edi
// 00413e3f  eb0b                 jmp 0x413e4c
// 00413e41  391e                 cmp dword ptr [esi], ebx
// 00413e43  7504                 jne 0x413e49
// 00413e45  893e                 mov dword ptr [esi], edi
// 00413e47  eb03                 jmp 0x413e4c
// 00413e49  897e08               mov dword ptr [esi + 8], edi
// 00413e4c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00413e4f  8b03                 mov eax, dword ptr [ebx]
// 00413e51  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00413e55  7515                 jne 0x413e6c
// 00413e57  807f1900             cmp byte ptr [edi + 0x19], 0
// 00413e5b  7404                 je 0x413e61
// 00413e5d  8bc6                 mov eax, esi
// 00413e5f  eb09                 jmp 0x413e6a
// 00413e61  57                   push edi
// 00413e62  e8b92d1a00           call 0x5b6c20
// 00413e67  83c404               add esp, 4
// 00413e6a  8903                 mov dword ptr [ebx], eax
// 00413e6c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00413e6f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00413e73  394b08               cmp dword ptr [ebx + 8], ecx
// 00413e76  7577                 jne 0x413eef
// 00413e78  807f1900             cmp byte ptr [edi + 0x19], 0
// 00413e7c  7407                 je 0x413e85
// 00413e7e  8bc6                 mov eax, esi
// 00413e80  894308               mov dword ptr [ebx + 8], eax
// 00413e83  eb6a                 jmp 0x413eef
// 00413e85  57                   push edi
// 00413e86  e8e5710900           call 0x4ab070
// 00413e8b  83c404               add esp, 4
// 00413e8e  894308               mov dword ptr [ebx + 8], eax
// 00413e91  eb5c                 jmp 0x413eef
// 00413e93  894104               mov dword ptr [ecx + 4], eax
// 00413e96  8b0b                 mov ecx, dword ptr [ebx]
// 00413e98  8908                 mov dword ptr [eax], ecx
// 00413e9a  3b4308               cmp eax, dword ptr [ebx + 8]
// 00413e9d  7504                 jne 0x413ea3
// 00413e9f  8bf0                 mov esi, eax
// 00413ea1  eb19                 jmp 0x413ebc
// 00413ea3  807f1900             cmp byte ptr [edi + 0x19], 0
// 00413ea7  8b7004               mov esi, dword ptr [eax + 4]
// 00413eaa  7503                 jne 0x413eaf
// 00413eac  897704               mov dword ptr [edi + 4], esi
// 00413eaf  893e                 mov dword ptr [esi], edi
// 00413eb1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00413eb4  890a                 mov dword ptr [edx], ecx
// 00413eb6  8b5308               mov edx, dword ptr [ebx + 8]
// 00413eb9  894204               mov dword ptr [edx + 4], eax
// 00413ebc  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00413ebf  395904               cmp dword ptr [ecx + 4], ebx
// 00413ec2  7505                 jne 0x413ec9
// 00413ec4  894104               mov dword ptr [ecx + 4], eax
// 00413ec7  eb0e                 jmp 0x413ed7
// 00413ec9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00413ecc  3919                 cmp dword ptr [ecx], ebx
// 00413ece  7504                 jne 0x413ed4
// 00413ed0  8901                 mov dword ptr [ecx], eax
// 00413ed2  eb03                 jmp 0x413ed7
// 00413ed4  894108               mov dword ptr [ecx + 8], eax
// 00413ed7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00413eda  894804               mov dword ptr [eax + 4], ecx
// 00413edd  8d4b18               lea ecx, [ebx + 0x18]
// 00413ee0  83c018               add eax, 0x18
// 00413ee3  3bc1                 cmp eax, ecx
// 00413ee5  7408                 je 0x413eef
// 00413ee7  8a19                 mov bl, byte ptr [ecx]
// 00413ee9  8a10                 mov dl, byte ptr [eax]
// 00413eeb  8818                 mov byte ptr [eax], bl
// 00413eed  8811                 mov byte ptr [ecx], dl
// 00413eef  8b542410             mov edx, dword ptr [esp + 0x10]
// 00413ef3  b301                 mov bl, 1
// 00413ef5  385a18               cmp byte ptr [edx + 0x18], bl
// 00413ef8  0f85fd000000         jne 0x413ffb
// 00413efe  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00413f01  3b7804               cmp edi, dword ptr [eax + 4]
// 00413f04  0f84ee000000         je 0x413ff8
// 00413f0a  8d9b00000000         lea ebx, [ebx]
// 00413f10  385f18               cmp byte ptr [edi + 0x18], bl
// 00413f13  0f85df000000         jne 0x413ff8
// 00413f19  8b06                 mov eax, dword ptr [esi]
// 00413f1b  3bf8                 cmp edi, eax
// 00413f1d  7565                 jne 0x413f84
// 00413f1f  8b4608               mov eax, dword ptr [esi + 8]
// 00413f22  80781800             cmp byte ptr [eax + 0x18], 0
// 00413f26  7512                 jne 0x413f3a
// 00413f28  885818               mov byte ptr [eax + 0x18], bl
// 00413f2b  56                   push esi
// 00413f2c  8bcd                 mov ecx, ebp
// 00413f2e  c6461800             mov byte ptr [esi + 0x18], 0
// 00413f32  e8b97e0900           call 0x4abdf0
// 00413f37  8b4608               mov eax, dword ptr [esi + 8]
// 00413f3a  80781900             cmp byte ptr [eax + 0x19], 0
// 00413f3e  7574                 jne 0x413fb4
// 00413f40  8b08                 mov ecx, dword ptr [eax]
// 00413f42  385918               cmp byte ptr [ecx + 0x18], bl
// 00413f45  7508                 jne 0x413f4f
// 00413f47  8b5008               mov edx, dword ptr [eax + 8]
// 00413f4a  385a18               cmp byte ptr [edx + 0x18], bl
// 00413f4d  7461                 je 0x413fb0
// 00413f4f  8b4808               mov ecx, dword ptr [eax + 8]
// 00413f52  385918               cmp byte ptr [ecx + 0x18], bl
// 00413f55  7514                 jne 0x413f6b
// 00413f57  8b10                 mov edx, dword ptr [eax]
// 00413f59  885a18               mov byte ptr [edx + 0x18], bl
// 00413f5c  50                   push eax
// 00413f5d  8bcd                 mov ecx, ebp
// 00413f5f  c6401800             mov byte ptr [eax + 0x18], 0
// 00413f63  e8f8331700           call 0x587360
// 00413f68  8b4608               mov eax, dword ptr [esi + 8]
// 00413f6b  8a4e18               mov cl, byte ptr [esi + 0x18]
// 00413f6e  884818               mov byte ptr [eax + 0x18], cl
// 00413f71  885e18               mov byte ptr [esi + 0x18], bl
// 00413f74  8b5008               mov edx, dword ptr [eax + 8]
// 00413f77  56                   push esi
// 00413f78  8bcd                 mov ecx, ebp
// 00413f7a  885a18               mov byte ptr [edx + 0x18], bl
// 00413f7d  e86e7e0900           call 0x4abdf0
// 00413f82  eb74                 jmp 0x413ff8
// 00413f84  80781800             cmp byte ptr [eax + 0x18], 0
// 00413f88  7511                 jne 0x413f9b
// 00413f8a  885818               mov byte ptr [eax + 0x18], bl
// 00413f8d  56                   push esi
// 00413f8e  8bcd                 mov ecx, ebp
// 00413f90  c6461800             mov byte ptr [esi + 0x18], 0
// 00413f94  e8c7331700           call 0x587360
// 00413f99  8b06                 mov eax, dword ptr [esi]
// 00413f9b  80781900             cmp byte ptr [eax + 0x19], 0
// 00413f9f  7513                 jne 0x413fb4
// 00413fa1  8b4808               mov ecx, dword ptr [eax + 8]
// 00413fa4  385918               cmp byte ptr [ecx + 0x18], bl
// 00413fa7  751e                 jne 0x413fc7
// 00413fa9  8b10                 mov edx, dword ptr [eax]
// 00413fab  385a18               cmp byte ptr [edx + 0x18], bl
// 00413fae  7517                 jne 0x413fc7
// 00413fb0  c6401800             mov byte ptr [eax + 0x18], 0
// 00413fb4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00413fb7  8bfe                 mov edi, esi
// 00413fb9  8b7604               mov esi, dword ptr [esi + 4]
// 00413fbc  3b7804               cmp edi, dword ptr [eax + 4]
// 00413fbf  0f854bffffff         jne 0x413f10
// 00413fc5  eb31                 jmp 0x413ff8
// 00413fc7  8b08                 mov ecx, dword ptr [eax]
// 00413fc9  385918               cmp byte ptr [ecx + 0x18], bl
// 00413fcc  7514                 jne 0x413fe2
// 00413fce  8b5008               mov edx, dword ptr [eax + 8]
// 00413fd1  885a18               mov byte ptr [edx + 0x18], bl
// 00413fd4  50                   push eax
// 00413fd5  8bcd                 mov ecx, ebp
// 00413fd7  c6401800             mov byte ptr [eax + 0x18], 0
// 00413fdb  e8107e0900           call 0x4abdf0
// 00413fe0  8b06                 mov eax, dword ptr [esi]
// 00413fe2  8a4e18               mov cl, byte ptr [esi + 0x18]
// 00413fe5  884818               mov byte ptr [eax + 0x18], cl
// 00413fe8  885e18               mov byte ptr [esi + 0x18], bl
// 00413feb  8b10                 mov edx, dword ptr [eax]
// 00413fed  56                   push esi
// 00413fee  8bcd                 mov ecx, ebp
// 00413ff0  885a18               mov byte ptr [edx + 0x18], bl
// 00413ff3  e868331700           call 0x587360
// 00413ff8  885f18               mov byte ptr [edi + 0x18], bl
// 00413ffb  8b442410             mov eax, dword ptr [esp + 0x10]
// 00413fff  8b7010               mov esi, dword ptr [eax + 0x10]
// 00414002  85f6                 test esi, esi
// 00414004  742a                 je 0x414030
// 00414006  8d4e04               lea ecx, [esi + 4]
// 00414009  83caff               or edx, 0xffffffff
// 0041400c  f00fc111             lock xadd dword ptr [ecx], edx
// 00414010  751e                 jne 0x414030
// 00414012  8b06                 mov eax, dword ptr [esi]
// 00414014  8b5004               mov edx, dword ptr [eax + 4]
// 00414017  8bce                 mov ecx, esi
// 00414019  ffd2                 call edx
// 0041401b  8d4608               lea eax, [esi + 8]
// 0041401e  83c9ff               or ecx, 0xffffffff
// 00414021  f00fc108             lock xadd dword ptr [eax], ecx
// 00414025  7509                 jne 0x414030
// 00414027  8b16                 mov edx, dword ptr [esi]
// 00414029  8b4208               mov eax, dword ptr [edx + 8]
// 0041402c  8bce                 mov ecx, esi
// 0041402e  ffd0                 call eax
// 00414030  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00414034  51                   push ecx
// 00414035  e840c62800           call 0x6a067a
// 0041403a  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0041403d  83c404               add esp, 4
// 00414040  5f                   pop edi
// 00414041  5e                   pop esi
// 00414042  5b                   pop ebx
// 00414043  85c0                 test eax, eax
// 00414045  7604                 jbe 0x41404b
// 00414047  48                   dec eax
// 00414048  89451c               mov dword ptr [ebp + 0x1c], eax
// 0041404b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0041404f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00414053  8b5500               mov edx, dword ptr [ebp]
// 00414056  894804               mov dword ptr [eax + 4], ecx
// 00414059  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0041405d  8910                 mov dword ptr [eax], edx
// 0041405f  5d                   pop ebp
// 00414060  64890d00000000       mov dword ptr fs:[0], ecx
// 00414067  83c454               add esp, 0x54
// 0041406a  c20c00               ret 0xc
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/XmlSerializer.cpp
