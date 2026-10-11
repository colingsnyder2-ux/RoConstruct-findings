// roc 2010-06 00413fc0  unit: CopyVerb  size: 765 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00413fc0
//
// 00413fc0  64a100000000         mov eax, dword ptr fs:[0]
// 00413fc6  6aff                 push -1
// 00413fc8  68e22f9a00           push 0x9a2fe2
// 00413fcd  50                   push eax
// 00413fce  64892500000000       mov dword ptr fs:[0], esp
// 00413fd5  8b442418             mov eax, dword ptr [esp + 0x18]
// 00413fd9  83ec48               sub esp, 0x48
// 00413fdc  80781900             cmp byte ptr [eax + 0x19], 0
// 00413fe0  55                   push ebp
// 00413fe1  8be9                 mov ebp, ecx
// 00413fe3  7459                 je 0x41403e
// 00413fe5  688c00a000           push 0xa0008c
// 00413fea  8d4c240c             lea ecx, [esp + 0xc]
// 00413fee  ff1510a49e00         call dword ptr [0x9ea410]
// 00413ff4  8d4c2424             lea ecx, [esp + 0x24]
// 00413ff8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00414000  ff1518a99e00         call dword ptr [0x9ea918]
// 00414006  8d442408             lea eax, [esp + 8]
// 0041400a  50                   push eax
// 0041400b  8d4c2434             lea ecx, [esp + 0x34]
// 0041400f  c644245801           mov byte ptr [esp + 0x58], 1
// 00414014  c74424282c00a000     mov dword ptr [esp + 0x28], 0xa0002c
// 0041401c  ff150ca49e00         call dword ptr [0x9ea40c]
// 00414022  68081bb000           push 0xb01b08
// 00414027  8d4c2428             lea ecx, [esp + 0x28]
// 0041402b  51                   push ecx
// 0041402c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00414031  c744242c4400a000     mov dword ptr [esp + 0x2c], 0xa00044
// 00414039  e874493900           call 0x7a89b2
// 0041403e  53                   push ebx
// 0041403f  56                   push esi
// 00414040  8bd8                 mov ebx, eax
// 00414042  57                   push edi
// 00414043  8d4c246c             lea ecx, [esp + 0x6c]
// 00414047  895c2410             mov dword ptr [esp + 0x10], ebx
// 0041404b  e8e0290d00           call 0x4e6a30
// 00414050  8b0b                 mov ecx, dword ptr [ebx]
// 00414052  80791900             cmp byte ptr [ecx + 0x19], 0
// 00414056  7405                 je 0x41405d
// 00414058  8b7b08               mov edi, dword ptr [ebx + 8]
// 0041405b  eb1b                 jmp 0x414078
// 0041405d  8b5308               mov edx, dword ptr [ebx + 8]
// 00414060  807a1900             cmp byte ptr [edx + 0x19], 0
// 00414064  7404                 je 0x41406a
// 00414066  8bf9                 mov edi, ecx
// 00414068  eb0e                 jmp 0x414078
// 0041406a  8b442470             mov eax, dword ptr [esp + 0x70]
// 0041406e  8b7808               mov edi, dword ptr [eax + 8]
// 00414071  8d5008               lea edx, [eax + 8]
// 00414074  3bc3                 cmp eax, ebx
// 00414076  756b                 jne 0x4140e3
// 00414078  807f1900             cmp byte ptr [edi + 0x19], 0
// 0041407c  8b7304               mov esi, dword ptr [ebx + 4]
// 0041407f  7503                 jne 0x414084
// 00414081  897704               mov dword ptr [edi + 4], esi
// 00414084  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00414087  395804               cmp dword ptr [eax + 4], ebx
// 0041408a  7505                 jne 0x414091
// 0041408c  897804               mov dword ptr [eax + 4], edi
// 0041408f  eb0b                 jmp 0x41409c
// 00414091  391e                 cmp dword ptr [esi], ebx
// 00414093  7504                 jne 0x414099
// 00414095  893e                 mov dword ptr [esi], edi
// 00414097  eb03                 jmp 0x41409c
// 00414099  897e08               mov dword ptr [esi + 8], edi
// 0041409c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0041409f  8b03                 mov eax, dword ptr [ebx]
// 004140a1  3b442410             cmp eax, dword ptr [esp + 0x10]
// 004140a5  7515                 jne 0x4140bc
// 004140a7  807f1900             cmp byte ptr [edi + 0x19], 0
// 004140ab  7404                 je 0x4140b1
// 004140ad  8bc6                 mov eax, esi
// 004140af  eb09                 jmp 0x4140ba
// 004140b1  57                   push edi
// 004140b2  e8d9190d00           call 0x4e5a90
// 004140b7  83c404               add esp, 4
// 004140ba  8903                 mov dword ptr [ebx], eax
// 004140bc  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 004140bf  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004140c3  394b08               cmp dword ptr [ebx + 8], ecx
// 004140c6  7577                 jne 0x41413f
// 004140c8  807f1900             cmp byte ptr [edi + 0x19], 0
// 004140cc  7407                 je 0x4140d5
// 004140ce  8bc6                 mov eax, esi
// 004140d0  894308               mov dword ptr [ebx + 8], eax
// 004140d3  eb6a                 jmp 0x41413f
// 004140d5  57                   push edi
// 004140d6  e835e51d00           call 0x5f2610
// 004140db  83c404               add esp, 4
// 004140de  894308               mov dword ptr [ebx + 8], eax
// 004140e1  eb5c                 jmp 0x41413f
// 004140e3  894104               mov dword ptr [ecx + 4], eax
// 004140e6  8b0b                 mov ecx, dword ptr [ebx]
// 004140e8  8908                 mov dword ptr [eax], ecx
// 004140ea  3b4308               cmp eax, dword ptr [ebx + 8]
// 004140ed  7504                 jne 0x4140f3
// 004140ef  8bf0                 mov esi, eax
// 004140f1  eb19                 jmp 0x41410c
// 004140f3  807f1900             cmp byte ptr [edi + 0x19], 0
// 004140f7  8b7004               mov esi, dword ptr [eax + 4]
// 004140fa  7503                 jne 0x4140ff
// 004140fc  897704               mov dword ptr [edi + 4], esi
// 004140ff  893e                 mov dword ptr [esi], edi
// 00414101  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00414104  890a                 mov dword ptr [edx], ecx
// 00414106  8b5308               mov edx, dword ptr [ebx + 8]
// 00414109  894204               mov dword ptr [edx + 4], eax
// 0041410c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0041410f  395904               cmp dword ptr [ecx + 4], ebx
// 00414112  7505                 jne 0x414119
// 00414114  894104               mov dword ptr [ecx + 4], eax
// 00414117  eb0e                 jmp 0x414127
// 00414119  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0041411c  3919                 cmp dword ptr [ecx], ebx
// 0041411e  7504                 jne 0x414124
// 00414120  8901                 mov dword ptr [ecx], eax
// 00414122  eb03                 jmp 0x414127
// 00414124  894108               mov dword ptr [ecx + 8], eax
// 00414127  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0041412a  894804               mov dword ptr [eax + 4], ecx
// 0041412d  8d4b18               lea ecx, [ebx + 0x18]
// 00414130  83c018               add eax, 0x18
// 00414133  3bc1                 cmp eax, ecx
// 00414135  7408                 je 0x41413f
// 00414137  8a19                 mov bl, byte ptr [ecx]
// 00414139  8a10                 mov dl, byte ptr [eax]
// 0041413b  8818                 mov byte ptr [eax], bl
// 0041413d  8811                 mov byte ptr [ecx], dl
// 0041413f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00414143  b301                 mov bl, 1
// 00414145  385a18               cmp byte ptr [edx + 0x18], bl
// 00414148  0f85fd000000         jne 0x41424b
// 0041414e  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00414151  3b7804               cmp edi, dword ptr [eax + 4]
// 00414154  0f84ee000000         je 0x414248
// 0041415a  8d9b00000000         lea ebx, [ebx]
// 00414160  385f18               cmp byte ptr [edi + 0x18], bl
// 00414163  0f85df000000         jne 0x414248
// 00414169  8b06                 mov eax, dword ptr [esi]
// 0041416b  3bf8                 cmp edi, eax
// 0041416d  7565                 jne 0x4141d4
// 0041416f  8b4608               mov eax, dword ptr [esi + 8]
// 00414172  80781800             cmp byte ptr [eax + 0x18], 0
// 00414176  7512                 jne 0x41418a
// 00414178  885818               mov byte ptr [eax + 0x18], bl
// 0041417b  56                   push esi
// 0041417c  8bcd                 mov ecx, ebp
// 0041417e  c6461800             mov byte ptr [esi + 0x18], 0
// 00414182  e859270d00           call 0x4e68e0
// 00414187  8b4608               mov eax, dword ptr [esi + 8]
// 0041418a  80781900             cmp byte ptr [eax + 0x19], 0
// 0041418e  7574                 jne 0x414204
// 00414190  8b08                 mov ecx, dword ptr [eax]
// 00414192  385918               cmp byte ptr [ecx + 0x18], bl
// 00414195  7508                 jne 0x41419f
// 00414197  8b5008               mov edx, dword ptr [eax + 8]
// 0041419a  385a18               cmp byte ptr [edx + 0x18], bl
// 0041419d  7461                 je 0x414200
// 0041419f  8b4808               mov ecx, dword ptr [eax + 8]
// 004141a2  385918               cmp byte ptr [ecx + 0x18], bl
// 004141a5  7514                 jne 0x4141bb
// 004141a7  8b10                 mov edx, dword ptr [eax]
// 004141a9  885a18               mov byte ptr [edx + 0x18], bl
// 004141ac  50                   push eax
// 004141ad  8bcd                 mov ecx, ebp
// 004141af  c6401800             mov byte ptr [eax + 0x18], 0
// 004141b3  e8f8e31d00           call 0x5f25b0
// 004141b8  8b4608               mov eax, dword ptr [esi + 8]
// 004141bb  8a4e18               mov cl, byte ptr [esi + 0x18]
// 004141be  884818               mov byte ptr [eax + 0x18], cl
// 004141c1  885e18               mov byte ptr [esi + 0x18], bl
// 004141c4  8b5008               mov edx, dword ptr [eax + 8]
// 004141c7  56                   push esi
// 004141c8  8bcd                 mov ecx, ebp
// 004141ca  885a18               mov byte ptr [edx + 0x18], bl
// 004141cd  e80e270d00           call 0x4e68e0
// 004141d2  eb74                 jmp 0x414248
// 004141d4  80781800             cmp byte ptr [eax + 0x18], 0
// 004141d8  7511                 jne 0x4141eb
// 004141da  885818               mov byte ptr [eax + 0x18], bl
// 004141dd  56                   push esi
// 004141de  8bcd                 mov ecx, ebp
// 004141e0  c6461800             mov byte ptr [esi + 0x18], 0
// 004141e4  e8c7e31d00           call 0x5f25b0
// 004141e9  8b06                 mov eax, dword ptr [esi]
// 004141eb  80781900             cmp byte ptr [eax + 0x19], 0
// 004141ef  7513                 jne 0x414204
// 004141f1  8b4808               mov ecx, dword ptr [eax + 8]
// 004141f4  385918               cmp byte ptr [ecx + 0x18], bl
// 004141f7  751e                 jne 0x414217
// 004141f9  8b10                 mov edx, dword ptr [eax]
// 004141fb  385a18               cmp byte ptr [edx + 0x18], bl
// 004141fe  7517                 jne 0x414217
// 00414200  c6401800             mov byte ptr [eax + 0x18], 0
// 00414204  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00414207  8bfe                 mov edi, esi
// 00414209  8b7604               mov esi, dword ptr [esi + 4]
// 0041420c  3b7804               cmp edi, dword ptr [eax + 4]
// 0041420f  0f854bffffff         jne 0x414160
// 00414215  eb31                 jmp 0x414248
// 00414217  8b08                 mov ecx, dword ptr [eax]
// 00414219  385918               cmp byte ptr [ecx + 0x18], bl
// 0041421c  7514                 jne 0x414232
// 0041421e  8b5008               mov edx, dword ptr [eax + 8]
// 00414221  885a18               mov byte ptr [edx + 0x18], bl
// 00414224  50                   push eax
// 00414225  8bcd                 mov ecx, ebp
// 00414227  c6401800             mov byte ptr [eax + 0x18], 0
// 0041422b  e8b0260d00           call 0x4e68e0
// 00414230  8b06                 mov eax, dword ptr [esi]
// 00414232  8a4e18               mov cl, byte ptr [esi + 0x18]
// 00414235  884818               mov byte ptr [eax + 0x18], cl
// 00414238  885e18               mov byte ptr [esi + 0x18], bl
// 0041423b  8b10                 mov edx, dword ptr [eax]
// 0041423d  56                   push esi
// 0041423e  8bcd                 mov ecx, ebp
// 00414240  885a18               mov byte ptr [edx + 0x18], bl
// 00414243  e868e31d00           call 0x5f25b0
// 00414248  885f18               mov byte ptr [edi + 0x18], bl
// 0041424b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0041424f  8b7010               mov esi, dword ptr [eax + 0x10]
// 00414252  85f6                 test esi, esi
// 00414254  742a                 je 0x414280
// 00414256  8d4e04               lea ecx, [esi + 4]
// 00414259  83caff               or edx, 0xffffffff
// 0041425c  f00fc111             lock xadd dword ptr [ecx], edx
// 00414260  751e                 jne 0x414280
// 00414262  8b06                 mov eax, dword ptr [esi]
// 00414264  8b5004               mov edx, dword ptr [eax + 4]
// 00414267  8bce                 mov ecx, esi
// 00414269  ffd2                 call edx
// 0041426b  8d4608               lea eax, [esi + 8]
// 0041426e  83c9ff               or ecx, 0xffffffff
// 00414271  f00fc108             lock xadd dword ptr [eax], ecx
// 00414275  7509                 jne 0x414280
// 00414277  8b16                 mov edx, dword ptr [esi]
// 00414279  8b4208               mov eax, dword ptr [edx + 8]
// 0041427c  8bce                 mov ecx, esi
// 0041427e  ffd0                 call eax
// 00414280  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00414284  51                   push ecx
// 00414285  e810373900           call 0x7a799a
// 0041428a  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 0041428d  83c404               add esp, 4
// 00414290  5f                   pop edi
// 00414291  5e                   pop esi
// 00414292  5b                   pop ebx
// 00414293  85c0                 test eax, eax
// 00414295  7604                 jbe 0x41429b
// 00414297  48                   dec eax
// 00414298  89451c               mov dword ptr [ebp + 0x1c], eax
// 0041429b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0041429f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 004142a3  8b5500               mov edx, dword ptr [ebp]
// 004142a6  894804               mov dword ptr [eax + 4], ecx
// 004142a9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004142ad  8910                 mov dword ptr [eax], edx
// 004142af  5d                   pop ebp
// 004142b0  64890d00000000       mov dword ptr fs:[0], ecx
// 004142b7  83c454               add esp, 0x54
// 004142ba  c20c00               ret 0xc
// library openrbx-client/App\v8xml\XmlSerializer.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@VInstanceHandle@RBX@@HU?$less@VInstanceHandle@RBX@@@std@@V?$allocator@U?$pair@$$CBVInstanceHandle@RBX@@H@std@@@4@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/XmlSerializer.cpp
