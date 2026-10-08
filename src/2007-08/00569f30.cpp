// roc 2007-08 00569f30  unit: RBX::ModelInstance  size: 749 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00569f30
//
// 00569f30  64a100000000         mov eax, dword ptr fs:[0]
// 00569f36  6aff                 push -1
// 00569f38  68b2417500           push 0x7541b2
// 00569f3d  50                   push eax
// 00569f3e  64892500000000       mov dword ptr fs:[0], esp
// 00569f45  8b442418             mov eax, dword ptr [esp + 0x18]
// 00569f49  83ec48               sub esp, 0x48
// 00569f4c  80781900             cmp byte ptr [eax + 0x19], 0
// 00569f50  55                   push ebp
// 00569f51  8be9                 mov ebp, ecx
// 00569f53  7459                 je 0x569fae
// 00569f55  68dc4e7800           push 0x784edc
// 00569f5a  8d4c240c             lea ecx, [esp + 0xc]
// 00569f5e  ff1598e67700         call dword ptr [0x77e698]
// 00569f64  8d4c2424             lea ecx, [esp + 0x24]
// 00569f68  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00569f70  ff15f8e67700         call dword ptr [0x77e6f8]
// 00569f76  8d442408             lea eax, [esp + 8]
// 00569f7a  50                   push eax
// 00569f7b  8d4c2434             lea ecx, [esp + 0x34]
// 00569f7f  c644245801           mov byte ptr [esp + 0x58], 1
// 00569f84  c7442428604e7800     mov dword ptr [esp + 0x28], 0x784e60
// 00569f8c  ff159ce67700         call dword ptr [0x77e69c]
// 00569f92  6864f38300           push 0x83f364
// 00569f97  8d4c2428             lea ecx, [esp + 0x28]
// 00569f9b  51                   push ecx
// 00569f9c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00569fa1  c744242c784e7800     mov dword ptr [esp + 0x2c], 0x784e78
// 00569fa9  e8f06b0c00           call 0x630b9e
// 00569fae  53                   push ebx
// 00569faf  56                   push esi
// 00569fb0  8bd8                 mov ebx, eax
// 00569fb2  57                   push edi
// 00569fb3  8d4c246c             lea ecx, [esp + 0x6c]
// 00569fb7  895c2410             mov dword ptr [esp + 0x10], ebx
// 00569fbb  e800dd0100           call 0x587cc0
// 00569fc0  8b03                 mov eax, dword ptr [ebx]
// 00569fc2  80781900             cmp byte ptr [eax + 0x19], 0
// 00569fc6  7405                 je 0x569fcd
// 00569fc8  8b7b08               mov edi, dword ptr [ebx + 8]
// 00569fcb  eb18                 jmp 0x569fe5
// 00569fcd  8b5308               mov edx, dword ptr [ebx + 8]
// 00569fd0  807a1900             cmp byte ptr [edx + 0x19], 0
// 00569fd4  7404                 je 0x569fda
// 00569fd6  8bf8                 mov edi, eax
// 00569fd8  eb0b                 jmp 0x569fe5
// 00569fda  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00569fde  3bcb                 cmp ecx, ebx
// 00569fe0  8b7908               mov edi, dword ptr [ecx + 8]
// 00569fe3  756b                 jne 0x56a050
// 00569fe5  807f1900             cmp byte ptr [edi + 0x19], 0
// 00569fe9  8b7304               mov esi, dword ptr [ebx + 4]
// 00569fec  7503                 jne 0x569ff1
// 00569fee  897704               mov dword ptr [edi + 4], esi
// 00569ff1  8b4504               mov eax, dword ptr [ebp + 4]
// 00569ff4  395804               cmp dword ptr [eax + 4], ebx
// 00569ff7  7505                 jne 0x569ffe
// 00569ff9  897804               mov dword ptr [eax + 4], edi
// 00569ffc  eb0b                 jmp 0x56a009
// 00569ffe  391e                 cmp dword ptr [esi], ebx
// 0056a000  7504                 jne 0x56a006
// 0056a002  893e                 mov dword ptr [esi], edi
// 0056a004  eb03                 jmp 0x56a009
// 0056a006  897e08               mov dword ptr [esi + 8], edi
// 0056a009  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0056a00c  8b03                 mov eax, dword ptr [ebx]
// 0056a00e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 0056a012  7515                 jne 0x56a029
// 0056a014  807f1900             cmp byte ptr [edi + 0x19], 0
// 0056a018  7404                 je 0x56a01e
// 0056a01a  8bc6                 mov eax, esi
// 0056a01c  eb09                 jmp 0x56a027
// 0056a01e  57                   push edi
// 0056a01f  e8ecdb0100           call 0x587c10
// 0056a024  83c404               add esp, 4
// 0056a027  8903                 mov dword ptr [ebx], eax
// 0056a029  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0056a02c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056a030  394b08               cmp dword ptr [ebx + 8], ecx
// 0056a033  7572                 jne 0x56a0a7
// 0056a035  807f1900             cmp byte ptr [edi + 0x19], 0
// 0056a039  7407                 je 0x56a042
// 0056a03b  8bc6                 mov eax, esi
// 0056a03d  894308               mov dword ptr [ebx + 8], eax
// 0056a040  eb65                 jmp 0x56a0a7
// 0056a042  57                   push edi
// 0056a043  e8a8db0100           call 0x587bf0
// 0056a048  83c404               add esp, 4
// 0056a04b  894308               mov dword ptr [ebx + 8], eax
// 0056a04e  eb57                 jmp 0x56a0a7
// 0056a050  894804               mov dword ptr [eax + 4], ecx
// 0056a053  8b13                 mov edx, dword ptr [ebx]
// 0056a055  8911                 mov dword ptr [ecx], edx
// 0056a057  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 0056a05a  7504                 jne 0x56a060
// 0056a05c  8bf1                 mov esi, ecx
// 0056a05e  eb1a                 jmp 0x56a07a
// 0056a060  807f1900             cmp byte ptr [edi + 0x19], 0
// 0056a064  8b7104               mov esi, dword ptr [ecx + 4]
// 0056a067  7503                 jne 0x56a06c
// 0056a069  897704               mov dword ptr [edi + 4], esi
// 0056a06c  893e                 mov dword ptr [esi], edi
// 0056a06e  8b4308               mov eax, dword ptr [ebx + 8]
// 0056a071  894108               mov dword ptr [ecx + 8], eax
// 0056a074  8b5308               mov edx, dword ptr [ebx + 8]
// 0056a077  894a04               mov dword ptr [edx + 4], ecx
// 0056a07a  8b4504               mov eax, dword ptr [ebp + 4]
// 0056a07d  395804               cmp dword ptr [eax + 4], ebx
// 0056a080  7505                 jne 0x56a087
// 0056a082  894804               mov dword ptr [eax + 4], ecx
// 0056a085  eb0e                 jmp 0x56a095
// 0056a087  8b4304               mov eax, dword ptr [ebx + 4]
// 0056a08a  3918                 cmp dword ptr [eax], ebx
// 0056a08c  7504                 jne 0x56a092
// 0056a08e  8908                 mov dword ptr [eax], ecx
// 0056a090  eb03                 jmp 0x56a095
// 0056a092  894808               mov dword ptr [eax + 8], ecx
// 0056a095  8b4304               mov eax, dword ptr [ebx + 4]
// 0056a098  894104               mov dword ptr [ecx + 4], eax
// 0056a09b  8a5318               mov dl, byte ptr [ebx + 0x18]
// 0056a09e  8a4118               mov al, byte ptr [ecx + 0x18]
// 0056a0a1  885118               mov byte ptr [ecx + 0x18], dl
// 0056a0a4  884318               mov byte ptr [ebx + 0x18], al
// 0056a0a7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056a0ab  b301                 mov bl, 1
// 0056a0ad  385818               cmp byte ptr [eax + 0x18], bl
// 0056a0b0  0f85f2000000         jne 0x56a1a8
// 0056a0b6  8b4d04               mov ecx, dword ptr [ebp + 4]
// 0056a0b9  3b7904               cmp edi, dword ptr [ecx + 4]
// 0056a0bc  0f84e3000000         je 0x56a1a5
// 0056a0c2  385f18               cmp byte ptr [edi + 0x18], bl
// 0056a0c5  0f85da000000         jne 0x56a1a5
// 0056a0cb  8b06                 mov eax, dword ptr [esi]
// 0056a0cd  3bf8                 cmp edi, eax
// 0056a0cf  7563                 jne 0x56a134
// 0056a0d1  8b4608               mov eax, dword ptr [esi + 8]
// 0056a0d4  80781800             cmp byte ptr [eax + 0x18], 0
// 0056a0d8  7512                 jne 0x56a0ec
// 0056a0da  885818               mov byte ptr [eax + 0x18], bl
// 0056a0dd  56                   push esi
// 0056a0de  8bcd                 mov ecx, ebp
// 0056a0e0  c6461800             mov byte ptr [esi + 0x18], 0
// 0056a0e4  e8d7430700           call 0x5de4c0
// 0056a0e9  8b4608               mov eax, dword ptr [esi + 8]
// 0056a0ec  80781900             cmp byte ptr [eax + 0x19], 0
// 0056a0f0  7572                 jne 0x56a164
// 0056a0f2  8b10                 mov edx, dword ptr [eax]
// 0056a0f4  385a18               cmp byte ptr [edx + 0x18], bl
// 0056a0f7  7508                 jne 0x56a101
// 0056a0f9  8b4808               mov ecx, dword ptr [eax + 8]
// 0056a0fc  385918               cmp byte ptr [ecx + 0x18], bl
// 0056a0ff  745f                 je 0x56a160
// 0056a101  8b4808               mov ecx, dword ptr [eax + 8]
// 0056a104  385918               cmp byte ptr [ecx + 0x18], bl
// 0056a107  7512                 jne 0x56a11b
// 0056a109  885a18               mov byte ptr [edx + 0x18], bl
// 0056a10c  50                   push eax
// 0056a10d  8bcd                 mov ecx, ebp
// 0056a10f  c6401800             mov byte ptr [eax + 0x18], 0
// 0056a113  e87853eaff           call 0x40f490
// 0056a118  8b4608               mov eax, dword ptr [esi + 8]
// 0056a11b  8a4e18               mov cl, byte ptr [esi + 0x18]
// 0056a11e  884818               mov byte ptr [eax + 0x18], cl
// 0056a121  885e18               mov byte ptr [esi + 0x18], bl
// 0056a124  8b5008               mov edx, dword ptr [eax + 8]
// 0056a127  56                   push esi
// 0056a128  8bcd                 mov ecx, ebp
// 0056a12a  885a18               mov byte ptr [edx + 0x18], bl
// 0056a12d  e88e430700           call 0x5de4c0
// 0056a132  eb71                 jmp 0x56a1a5
// 0056a134  80781800             cmp byte ptr [eax + 0x18], 0
// 0056a138  7511                 jne 0x56a14b
// 0056a13a  885818               mov byte ptr [eax + 0x18], bl
// 0056a13d  56                   push esi
// 0056a13e  8bcd                 mov ecx, ebp
// 0056a140  c6461800             mov byte ptr [esi + 0x18], 0
// 0056a144  e84753eaff           call 0x40f490
// 0056a149  8b06                 mov eax, dword ptr [esi]
// 0056a14b  80781900             cmp byte ptr [eax + 0x19], 0
// 0056a14f  7513                 jne 0x56a164
// 0056a151  8b5008               mov edx, dword ptr [eax + 8]
// 0056a154  385a18               cmp byte ptr [edx + 0x18], bl
// 0056a157  751e                 jne 0x56a177
// 0056a159  8b08                 mov ecx, dword ptr [eax]
// 0056a15b  385918               cmp byte ptr [ecx + 0x18], bl
// 0056a15e  7517                 jne 0x56a177
// 0056a160  c6401800             mov byte ptr [eax + 0x18], 0
// 0056a164  8b5504               mov edx, dword ptr [ebp + 4]
// 0056a167  8bfe                 mov edi, esi
// 0056a169  3b7a04               cmp edi, dword ptr [edx + 4]
// 0056a16c  8b7604               mov esi, dword ptr [esi + 4]
// 0056a16f  0f854dffffff         jne 0x56a0c2
// 0056a175  eb2e                 jmp 0x56a1a5
// 0056a177  8b08                 mov ecx, dword ptr [eax]
// 0056a179  385918               cmp byte ptr [ecx + 0x18], bl
// 0056a17c  7511                 jne 0x56a18f
// 0056a17e  885a18               mov byte ptr [edx + 0x18], bl
// 0056a181  50                   push eax
// 0056a182  8bcd                 mov ecx, ebp
// 0056a184  c6401800             mov byte ptr [eax + 0x18], 0
// 0056a188  e833430700           call 0x5de4c0
// 0056a18d  8b06                 mov eax, dword ptr [esi]
// 0056a18f  8a4e18               mov cl, byte ptr [esi + 0x18]
// 0056a192  884818               mov byte ptr [eax + 0x18], cl
// 0056a195  885e18               mov byte ptr [esi + 0x18], bl
// 0056a198  8b10                 mov edx, dword ptr [eax]
// 0056a19a  56                   push esi
// 0056a19b  8bcd                 mov ecx, ebp
// 0056a19d  885a18               mov byte ptr [edx + 0x18], bl
// 0056a1a0  e8eb52eaff           call 0x40f490
// 0056a1a5  885f18               mov byte ptr [edi + 0x18], bl
// 0056a1a8  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056a1ac  8b7014               mov esi, dword ptr [eax + 0x14]
// 0056a1af  85f6                 test esi, esi
// 0056a1b1  742a                 je 0x56a1dd
// 0056a1b3  8d4e04               lea ecx, [esi + 4]
// 0056a1b6  83caff               or edx, 0xffffffff
// 0056a1b9  f00fc111             lock xadd dword ptr [ecx], edx
// 0056a1bd  751e                 jne 0x56a1dd
// 0056a1bf  8b06                 mov eax, dword ptr [esi]
// 0056a1c1  8b5004               mov edx, dword ptr [eax + 4]
// 0056a1c4  8bce                 mov ecx, esi
// 0056a1c6  ffd2                 call edx
// 0056a1c8  8d4608               lea eax, [esi + 8]
// 0056a1cb  83c9ff               or ecx, 0xffffffff
// 0056a1ce  f00fc108             lock xadd dword ptr [eax], ecx
// 0056a1d2  7509                 jne 0x56a1dd
// 0056a1d4  8b16                 mov edx, dword ptr [esi]
// 0056a1d6  8b4208               mov eax, dword ptr [edx + 8]
// 0056a1d9  8bce                 mov ecx, esi
// 0056a1db  ffd0                 call eax
// 0056a1dd  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0056a1e1  51                   push ecx
// 0056a1e2  e87b5a0c00           call 0x62fc62
// 0056a1e7  8b4508               mov eax, dword ptr [ebp + 8]
// 0056a1ea  83c404               add esp, 4
// 0056a1ed  85c0                 test eax, eax
// 0056a1ef  5f                   pop edi
// 0056a1f0  5e                   pop esi
// 0056a1f1  5b                   pop ebx
// 0056a1f2  7606                 jbe 0x56a1fa
// 0056a1f4  83c0ff               add eax, -1
// 0056a1f7  894508               mov dword ptr [ebp + 8], eax
// 0056a1fa  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0056a1fe  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0056a202  8b542460             mov edx, dword ptr [esp + 0x60]
// 0056a206  894804               mov dword ptr [eax + 4], ecx
// 0056a209  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0056a20d  8910                 mov dword ptr [eax], edx
// 0056a20f  5d                   pop ebp
// 0056a210  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a217  83c454               add esp, 0x54
// 0056a21a  c20c00               ret 0xc
// library rbxgs/v8datamodel\DataModel.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@6@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
