// from server: 99% by colin
// roc 2008-06 00591e60  unit: RBX::RootInstance  size: 724 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00591e60
//
// 00591e60  64a100000000         mov eax, dword ptr fs:[0]
// 00591e66  6aff                 push -1
// 00591e68  6842e87d00           push 0x7de842
// 00591e6d  50                   push eax
// 00591e6e  64892500000000       mov dword ptr fs:[0], esp
// 00591e75  8b442418             mov eax, dword ptr [esp + 0x18]
// 00591e79  83ec48               sub esp, 0x48
// 00591e7c  80783100             cmp byte ptr [eax + 0x31], 0
// 00591e80  55                   push ebp
// 00591e81  8be9                 mov ebp, ecx
// 00591e83  7459                 je 0x591ede
// 00591e85  6870b28000           push 0x80b270
// 00591e8a  8d4c240c             lea ecx, [esp + 0xc]
// 00591e8e  ff1558248000         call dword ptr [0x802458]
// 00591e94  8d4c2424             lea ecx, [esp + 0x24]
// 00591e98  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00591ea0  ff1598288000         call dword ptr [0x802898]
// 00591ea6  8d442408             lea eax, [esp + 8]
// 00591eaa  50                   push eax
// 00591eab  8d4c2434             lea ecx, [esp + 0x34]
// 00591eaf  c644245801           mov byte ptr [esp + 0x58], 1
// 00591eb4  c744242810b18000     mov dword ptr [esp + 0x28], 0x80b110
// 00591ebc  ff155c248000         call dword ptr [0x80245c]
// 00591ec2  683c0c8d00           push 0x8d0c3c
// 00591ec7  8d4c2428             lea ecx, [esp + 0x28]
// 00591ecb  51                   push ecx
// 00591ecc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00591ed1  c744242c28b18000     mov dword ptr [esp + 0x2c], 0x80b128
// 00591ed9  e8aef61000           call 0x6a158c
// 00591ede  53                   push ebx
// 00591edf  56                   push esi
// 00591ee0  8bd8                 mov ebx, eax
// 00591ee2  57                   push edi
// 00591ee3  8d4c246c             lea ecx, [esp + 0x6c]
// 00591ee7  895c2410             mov dword ptr [esp + 0x10], ebx
// 00591eeb  e890f9ffff           call 0x591880
// 00591ef0  8b0b                 mov ecx, dword ptr [ebx]
// 00591ef2  80793100             cmp byte ptr [ecx + 0x31], 0
// 00591ef6  7405                 je 0x591efd
// 00591ef8  8b7b08               mov edi, dword ptr [ebx + 8]
// 00591efb  eb1b                 jmp 0x591f18
// 00591efd  8b5308               mov edx, dword ptr [ebx + 8]
// 00591f00  807a3100             cmp byte ptr [edx + 0x31], 0
// 00591f04  7404                 je 0x591f0a
// 00591f06  8bf9                 mov edi, ecx
// 00591f08  eb0e                 jmp 0x591f18
// 00591f0a  8b442470             mov eax, dword ptr [esp + 0x70]
// 00591f0e  8b7808               mov edi, dword ptr [eax + 8]
// 00591f11  8d5008               lea edx, [eax + 8]
// 00591f14  3bc3                 cmp eax, ebx
// 00591f16  756b                 jne 0x591f83
// 00591f18  807f3100             cmp byte ptr [edi + 0x31], 0
// 00591f1c  8b7304               mov esi, dword ptr [ebx + 4]
// 00591f1f  7503                 jne 0x591f24
// 00591f21  897704               mov dword ptr [edi + 4], esi
// 00591f24  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00591f27  395804               cmp dword ptr [eax + 4], ebx
// 00591f2a  7505                 jne 0x591f31
// 00591f2c  897804               mov dword ptr [eax + 4], edi
// 00591f2f  eb0b                 jmp 0x591f3c
// 00591f31  391e                 cmp dword ptr [esi], ebx
// 00591f33  7504                 jne 0x591f39
// 00591f35  893e                 mov dword ptr [esi], edi
// 00591f37  eb03                 jmp 0x591f3c
// 00591f39  897e08               mov dword ptr [esi + 8], edi
// 00591f3c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00591f3f  8b03                 mov eax, dword ptr [ebx]
// 00591f41  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00591f45  7515                 jne 0x591f5c
// 00591f47  807f3100             cmp byte ptr [edi + 0x31], 0
// 00591f4b  7404                 je 0x591f51
// 00591f4d  8bc6                 mov eax, esi
// 00591f4f  eb09                 jmp 0x591f5a
// 00591f51  57                   push edi
// 00591f52  e869f8ffff           call 0x5917c0
// 00591f57  83c404               add esp, 4
// 00591f5a  8903                 mov dword ptr [ebx], eax
// 00591f5c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 00591f5f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00591f63  394b08               cmp dword ptr [ebx + 8], ecx
// 00591f66  7577                 jne 0x591fdf
// 00591f68  807f3100             cmp byte ptr [edi + 0x31], 0
// 00591f6c  7407                 je 0x591f75
// 00591f6e  8bc6                 mov eax, esi
// 00591f70  894308               mov dword ptr [ebx + 8], eax
// 00591f73  eb6a                 jmp 0x591fdf
// 00591f75  57                   push edi
// 00591f76  e815ef0b00           call 0x650e90
// 00591f7b  83c404               add esp, 4
// 00591f7e  894308               mov dword ptr [ebx + 8], eax
// 00591f81  eb5c                 jmp 0x591fdf
// 00591f83  894104               mov dword ptr [ecx + 4], eax
// 00591f86  8b0b                 mov ecx, dword ptr [ebx]
// 00591f88  8908                 mov dword ptr [eax], ecx
// 00591f8a  3b4308               cmp eax, dword ptr [ebx + 8]
// 00591f8d  7504                 jne 0x591f93
// 00591f8f  8bf0                 mov esi, eax
// 00591f91  eb19                 jmp 0x591fac
// 00591f93  807f3100             cmp byte ptr [edi + 0x31], 0
// 00591f97  8b7004               mov esi, dword ptr [eax + 4]
// 00591f9a  7503                 jne 0x591f9f
// 00591f9c  897704               mov dword ptr [edi + 4], esi
// 00591f9f  893e                 mov dword ptr [esi], edi
// 00591fa1  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00591fa4  890a                 mov dword ptr [edx], ecx
// 00591fa6  8b5308               mov edx, dword ptr [ebx + 8]
// 00591fa9  894204               mov dword ptr [edx + 4], eax
// 00591fac  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 00591faf  395904               cmp dword ptr [ecx + 4], ebx
// 00591fb2  7505                 jne 0x591fb9
// 00591fb4  894104               mov dword ptr [ecx + 4], eax
// 00591fb7  eb0e                 jmp 0x591fc7
// 00591fb9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00591fbc  3919                 cmp dword ptr [ecx], ebx
// 00591fbe  7504                 jne 0x591fc4
// 00591fc0  8901                 mov dword ptr [ecx], eax
// 00591fc2  eb03                 jmp 0x591fc7
// 00591fc4  894108               mov dword ptr [ecx + 8], eax
// 00591fc7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00591fca  894804               mov dword ptr [eax + 4], ecx
// 00591fcd  8d4b30               lea ecx, [ebx + 0x30]
// 00591fd0  83c030               add eax, 0x30
// 00591fd3  3bc1                 cmp eax, ecx
// 00591fd5  7408                 je 0x591fdf
// 00591fd7  8a19                 mov bl, byte ptr [ecx]
// 00591fd9  8a10                 mov dl, byte ptr [eax]
// 00591fdb  8818                 mov byte ptr [eax], bl
// 00591fdd  8811                 mov byte ptr [ecx], dl
// 00591fdf  8b542410             mov edx, dword ptr [esp + 0x10]
// 00591fe3  b301                 mov bl, 1
// 00591fe5  385a30               cmp byte ptr [edx + 0x30], bl
// 00591fe8  0f85fd000000         jne 0x5920eb
// 00591fee  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00591ff1  3b7804               cmp edi, dword ptr [eax + 4]
// 00591ff4  0f84ee000000         je 0x5920e8
// 00591ffa  8d9b00000000         lea ebx, [ebx]
// 00592000  385f30               cmp byte ptr [edi + 0x30], bl
// 00592003  0f85df000000         jne 0x5920e8
// 00592009  8b06                 mov eax, dword ptr [esi]
// 0059200b  3bf8                 cmp edi, eax
// 0059200d  7565                 jne 0x592074
// 0059200f  8b4608               mov eax, dword ptr [esi + 8]
// 00592012  80783000             cmp byte ptr [eax + 0x30], 0
// 00592016  7512                 jne 0x59202a
// 00592018  885830               mov byte ptr [eax + 0x30], bl
// 0059201b  56                   push esi
// 0059201c  8bcd                 mov ecx, ebp
// 0059201e  c6463000             mov byte ptr [esi + 0x30], 0
// 00592022  e809f8ffff           call 0x591830
// 00592027  8b4608               mov eax, dword ptr [esi + 8]
// 0059202a  80783100             cmp byte ptr [eax + 0x31], 0
// 0059202e  7574                 jne 0x5920a4
// 00592030  8b08                 mov ecx, dword ptr [eax]
// 00592032  385930               cmp byte ptr [ecx + 0x30], bl
// 00592035  7508                 jne 0x59203f
// 00592037  8b5008               mov edx, dword ptr [eax + 8]
// 0059203a  385a30               cmp byte ptr [edx + 0x30], bl
// 0059203d  7461                 je 0x5920a0
// 0059203f  8b4808               mov ecx, dword ptr [eax + 8]
// 00592042  385930               cmp byte ptr [ecx + 0x30], bl
// 00592045  7514                 jne 0x59205b
// 00592047  8b10                 mov edx, dword ptr [eax]
// 00592049  885a30               mov byte ptr [edx + 0x30], bl
// 0059204c  50                   push eax
// 0059204d  8bcd                 mov ecx, ebp
// 0059204f  c6403000             mov byte ptr [eax + 0x30], 0
// 00592053  e8b8ed0b00           call 0x650e10
// 00592058  8b4608               mov eax, dword ptr [esi + 8]
// 0059205b  8a4e30               mov cl, byte ptr [esi + 0x30]
// 0059205e  884830               mov byte ptr [eax + 0x30], cl
// 00592061  885e30               mov byte ptr [esi + 0x30], bl
// 00592064  8b5008               mov edx, dword ptr [eax + 8]
// 00592067  56                   push esi
// 00592068  8bcd                 mov ecx, ebp
// 0059206a  885a30               mov byte ptr [edx + 0x30], bl
// 0059206d  e8bef7ffff           call 0x591830
// 00592072  eb74                 jmp 0x5920e8
// 00592074  80783000             cmp byte ptr [eax + 0x30], 0
// 00592078  7511                 jne 0x59208b
// 0059207a  885830               mov byte ptr [eax + 0x30], bl
// 0059207d  56                   push esi
// 0059207e  8bcd                 mov ecx, ebp
// 00592080  c6463000             mov byte ptr [esi + 0x30], 0
// 00592084  e887ed0b00           call 0x650e10
// 00592089  8b06                 mov eax, dword ptr [esi]
// 0059208b  80783100             cmp byte ptr [eax + 0x31], 0
// 0059208f  7513                 jne 0x5920a4
// 00592091  8b4808               mov ecx, dword ptr [eax + 8]
// 00592094  385930               cmp byte ptr [ecx + 0x30], bl
// 00592097  751e                 jne 0x5920b7
// 00592099  8b10                 mov edx, dword ptr [eax]
// 0059209b  385a30               cmp byte ptr [edx + 0x30], bl
// 0059209e  7517                 jne 0x5920b7
// 005920a0  c6403000             mov byte ptr [eax + 0x30], 0
// 005920a4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 005920a7  8bfe                 mov edi, esi
// 005920a9  8b7604               mov esi, dword ptr [esi + 4]
// 005920ac  3b7804               cmp edi, dword ptr [eax + 4]
// 005920af  0f854bffffff         jne 0x592000
// 005920b5  eb31                 jmp 0x5920e8
// 005920b7  8b08                 mov ecx, dword ptr [eax]
// 005920b9  385930               cmp byte ptr [ecx + 0x30], bl
// 005920bc  7514                 jne 0x5920d2
// 005920be  8b5008               mov edx, dword ptr [eax + 8]
// 005920c1  885a30               mov byte ptr [edx + 0x30], bl
// 005920c4  50                   push eax
// 005920c5  8bcd                 mov ecx, ebp
// 005920c7  c6403000             mov byte ptr [eax + 0x30], 0
// 005920cb  e860f7ffff           call 0x591830
// 005920d0  8b06                 mov eax, dword ptr [esi]
// 005920d2  8a4e30               mov cl, byte ptr [esi + 0x30]
// 005920d5  884830               mov byte ptr [eax + 0x30], cl
// 005920d8  885e30               mov byte ptr [esi + 0x30], bl
// 005920db  8b10                 mov edx, dword ptr [eax]
// 005920dd  56                   push esi
// 005920de  8bcd                 mov ecx, ebp
// 005920e0  885a30               mov byte ptr [edx + 0x30], bl
// 005920e3  e828ed0b00           call 0x650e10
// 005920e8  885f30               mov byte ptr [edi + 0x30], bl
// 005920eb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005920ef  83c10c               add ecx, 0xc
// 005920f2  e84946f0ff           call 0x496740
// 005920f7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005920fb  50                   push eax
// 005920fc  e879e51000           call 0x6a067a
// 00592101  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00592104  83c404               add esp, 4
// 00592107  5f                   pop edi
// 00592108  5e                   pop esi
// 00592109  5b                   pop ebx
// 0059210a  85c0                 test eax, eax
// 0059210c  7604                 jbe 0x592112
// 0059210e  48                   dec eax
// 0059210f  89451c               mov dword ptr [ebp + 0x1c], eax
// 00592112  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00592116  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0059211a  8b5500               mov edx, dword ptr [ebp]
// 0059211d  894804               mov dword ptr [eax + 4], ecx
// 00592120  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00592124  8910                 mov dword ptr [eax], edx
// 00592126  5d                   pop ebp
// 00592127  64890d00000000       mov dword ptr fs:[0], ecx
// 0059212e  83c454               add esp, 0x54
// 00592131  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
