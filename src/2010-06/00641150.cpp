// roc 2010-06 00641150  unit: RBX::VInstance::?$NonFactoryProduct  size: 724 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00641150
//
// 00641150  64a100000000         mov eax, dword ptr fs:[0]
// 00641156  6aff                 push -1
// 00641158  68e22f9a00           push 0x9a2fe2
// 0064115d  50                   push eax
// 0064115e  64892500000000       mov dword ptr fs:[0], esp
// 00641165  8b442418             mov eax, dword ptr [esp + 0x18]
// 00641169  83ec48               sub esp, 0x48
// 0064116c  80783100             cmp byte ptr [eax + 0x31], 0
// 00641170  55                   push ebp
// 00641171  8be9                 mov ebp, ecx
// 00641173  7459                 je 0x6411ce
// 00641175  688c00a000           push 0xa0008c
// 0064117a  8d4c240c             lea ecx, [esp + 0xc]
// 0064117e  ff1510a49e00         call dword ptr [0x9ea410]
// 00641184  8d4c2424             lea ecx, [esp + 0x24]
// 00641188  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00641190  ff1518a99e00         call dword ptr [0x9ea918]
// 00641196  8d442408             lea eax, [esp + 8]
// 0064119a  50                   push eax
// 0064119b  8d4c2434             lea ecx, [esp + 0x34]
// 0064119f  c644245801           mov byte ptr [esp + 0x58], 1
// 006411a4  c74424282c00a000     mov dword ptr [esp + 0x28], 0xa0002c
// 006411ac  ff150ca49e00         call dword ptr [0x9ea40c]
// 006411b2  68081bb000           push 0xb01b08
// 006411b7  8d4c2428             lea ecx, [esp + 0x28]
// 006411bb  51                   push ecx
// 006411bc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 006411c1  c744242c4400a000     mov dword ptr [esp + 0x2c], 0xa00044
// 006411c9  e8e4771600           call 0x7a89b2
// 006411ce  53                   push ebx
// 006411cf  56                   push esi
// 006411d0  8bd8                 mov ebx, eax
// 006411d2  57                   push edi
// 006411d3  8d4c246c             lea ecx, [esp + 0x6c]
// 006411d7  895c2410             mov dword ptr [esp + 0x10], ebx
// 006411db  e8d0e20100           call 0x65f4b0
// 006411e0  8b0b                 mov ecx, dword ptr [ebx]
// 006411e2  80793100             cmp byte ptr [ecx + 0x31], 0
// 006411e6  7405                 je 0x6411ed
// 006411e8  8b7b08               mov edi, dword ptr [ebx + 8]
// 006411eb  eb1b                 jmp 0x641208
// 006411ed  8b5308               mov edx, dword ptr [ebx + 8]
// 006411f0  807a3100             cmp byte ptr [edx + 0x31], 0
// 006411f4  7404                 je 0x6411fa
// 006411f6  8bf9                 mov edi, ecx
// 006411f8  eb0e                 jmp 0x641208
// 006411fa  8b442470             mov eax, dword ptr [esp + 0x70]
// 006411fe  8b7808               mov edi, dword ptr [eax + 8]
// 00641201  8d5008               lea edx, [eax + 8]
// 00641204  3bc3                 cmp eax, ebx
// 00641206  756b                 jne 0x641273
// 00641208  807f3100             cmp byte ptr [edi + 0x31], 0
// 0064120c  8b7304               mov esi, dword ptr [ebx + 4]
// 0064120f  7503                 jne 0x641214
// 00641211  897704               mov dword ptr [edi + 4], esi
// 00641214  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00641217  395804               cmp dword ptr [eax + 4], ebx
// 0064121a  7505                 jne 0x641221
// 0064121c  897804               mov dword ptr [eax + 4], edi
// 0064121f  eb0b                 jmp 0x64122c
// 00641221  391e                 cmp dword ptr [esi], ebx
// 00641223  7504                 jne 0x641229
// 00641225  893e                 mov dword ptr [esi], edi
// 00641227  eb03                 jmp 0x64122c
// 00641229  897e08               mov dword ptr [esi + 8], edi
// 0064122c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0064122f  8b03                 mov eax, dword ptr [ebx]
// 00641231  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00641235  7515                 jne 0x64124c
// 00641237  807f3100             cmp byte ptr [edi + 0x31], 0
// 0064123b  7404                 je 0x641241
// 0064123d  8bc6                 mov eax, esi
// 0064123f  eb09                 jmp 0x64124a
// 00641241  57                   push edi
// 00641242  e809a00100           call 0x65b250
// 00641247  83c404               add esp, 4
// 0064124a  8903                 mov dword ptr [ebx], eax
// 0064124c  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 0064124f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00641253  394b08               cmp dword ptr [ebx + 8], ecx
// 00641256  7577                 jne 0x6412cf
// 00641258  807f3100             cmp byte ptr [edi + 0x31], 0
// 0064125c  7407                 je 0x641265
// 0064125e  8bc6                 mov eax, esi
// 00641260  894308               mov dword ptr [ebx + 8], eax
// 00641263  eb6a                 jmp 0x6412cf
// 00641265  57                   push edi
// 00641266  e8a5990300           call 0x67ac10
// 0064126b  83c404               add esp, 4
// 0064126e  894308               mov dword ptr [ebx + 8], eax
// 00641271  eb5c                 jmp 0x6412cf
// 00641273  894104               mov dword ptr [ecx + 4], eax
// 00641276  8b0b                 mov ecx, dword ptr [ebx]
// 00641278  8908                 mov dword ptr [eax], ecx
// 0064127a  3b4308               cmp eax, dword ptr [ebx + 8]
// 0064127d  7504                 jne 0x641283
// 0064127f  8bf0                 mov esi, eax
// 00641281  eb19                 jmp 0x64129c
// 00641283  807f3100             cmp byte ptr [edi + 0x31], 0
// 00641287  8b7004               mov esi, dword ptr [eax + 4]
// 0064128a  7503                 jne 0x64128f
// 0064128c  897704               mov dword ptr [edi + 4], esi
// 0064128f  893e                 mov dword ptr [esi], edi
// 00641291  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00641294  890a                 mov dword ptr [edx], ecx
// 00641296  8b5308               mov edx, dword ptr [ebx + 8]
// 00641299  894204               mov dword ptr [edx + 4], eax
// 0064129c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0064129f  395904               cmp dword ptr [ecx + 4], ebx
// 006412a2  7505                 jne 0x6412a9
// 006412a4  894104               mov dword ptr [ecx + 4], eax
// 006412a7  eb0e                 jmp 0x6412b7
// 006412a9  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006412ac  3919                 cmp dword ptr [ecx], ebx
// 006412ae  7504                 jne 0x6412b4
// 006412b0  8901                 mov dword ptr [ecx], eax
// 006412b2  eb03                 jmp 0x6412b7
// 006412b4  894108               mov dword ptr [ecx + 8], eax
// 006412b7  8b4b04               mov ecx, dword ptr [ebx + 4]
// 006412ba  894804               mov dword ptr [eax + 4], ecx
// 006412bd  8d4b30               lea ecx, [ebx + 0x30]
// 006412c0  83c030               add eax, 0x30
// 006412c3  3bc1                 cmp eax, ecx
// 006412c5  7408                 je 0x6412cf
// 006412c7  8a19                 mov bl, byte ptr [ecx]
// 006412c9  8a10                 mov dl, byte ptr [eax]
// 006412cb  8818                 mov byte ptr [eax], bl
// 006412cd  8811                 mov byte ptr [ecx], dl
// 006412cf  8b542410             mov edx, dword ptr [esp + 0x10]
// 006412d3  b301                 mov bl, 1
// 006412d5  385a30               cmp byte ptr [edx + 0x30], bl
// 006412d8  0f85fd000000         jne 0x6413db
// 006412de  8b4518               mov eax, dword ptr [ebp + 0x18]
// 006412e1  3b7804               cmp edi, dword ptr [eax + 4]
// 006412e4  0f84ee000000         je 0x6413d8
// 006412ea  8d9b00000000         lea ebx, [ebx]
// 006412f0  385f30               cmp byte ptr [edi + 0x30], bl
// 006412f3  0f85df000000         jne 0x6413d8
// 006412f9  8b06                 mov eax, dword ptr [esi]
// 006412fb  3bf8                 cmp edi, eax
// 006412fd  7565                 jne 0x641364
// 006412ff  8b4608               mov eax, dword ptr [esi + 8]
// 00641302  80783000             cmp byte ptr [eax + 0x30], 0
// 00641306  7512                 jne 0x64131a
// 00641308  885830               mov byte ptr [eax + 0x30], bl
// 0064130b  56                   push esi
// 0064130c  8bcd                 mov ecx, ebp
// 0064130e  c6463000             mov byte ptr [esi + 0x30], 0
// 00641312  e809e20100           call 0x65f520
// 00641317  8b4608               mov eax, dword ptr [esi + 8]
// 0064131a  80783100             cmp byte ptr [eax + 0x31], 0
// 0064131e  7574                 jne 0x641394
// 00641320  8b08                 mov ecx, dword ptr [eax]
// 00641322  385930               cmp byte ptr [ecx + 0x30], bl
// 00641325  7508                 jne 0x64132f
// 00641327  8b5008               mov edx, dword ptr [eax + 8]
// 0064132a  385a30               cmp byte ptr [edx + 0x30], bl
// 0064132d  7461                 je 0x641390
// 0064132f  8b4808               mov ecx, dword ptr [eax + 8]
// 00641332  385930               cmp byte ptr [ecx + 0x30], bl
// 00641335  7514                 jne 0x64134b
// 00641337  8b10                 mov edx, dword ptr [eax]
// 00641339  885a30               mov byte ptr [edx + 0x30], bl
// 0064133c  50                   push eax
// 0064133d  8bcd                 mov ecx, ebp
// 0064133f  c6403000             mov byte ptr [eax + 0x30], 0
// 00641343  e808ebe7ff           call 0x4bfe50
// 00641348  8b4608               mov eax, dword ptr [esi + 8]
// 0064134b  8a4e30               mov cl, byte ptr [esi + 0x30]
// 0064134e  884830               mov byte ptr [eax + 0x30], cl
// 00641351  885e30               mov byte ptr [esi + 0x30], bl
// 00641354  8b5008               mov edx, dword ptr [eax + 8]
// 00641357  56                   push esi
// 00641358  8bcd                 mov ecx, ebp
// 0064135a  885a30               mov byte ptr [edx + 0x30], bl
// 0064135d  e8bee10100           call 0x65f520
// 00641362  eb74                 jmp 0x6413d8
// 00641364  80783000             cmp byte ptr [eax + 0x30], 0
// 00641368  7511                 jne 0x64137b
// 0064136a  885830               mov byte ptr [eax + 0x30], bl
// 0064136d  56                   push esi
// 0064136e  8bcd                 mov ecx, ebp
// 00641370  c6463000             mov byte ptr [esi + 0x30], 0
// 00641374  e8d7eae7ff           call 0x4bfe50
// 00641379  8b06                 mov eax, dword ptr [esi]
// 0064137b  80783100             cmp byte ptr [eax + 0x31], 0
// 0064137f  7513                 jne 0x641394
// 00641381  8b4808               mov ecx, dword ptr [eax + 8]
// 00641384  385930               cmp byte ptr [ecx + 0x30], bl
// 00641387  751e                 jne 0x6413a7
// 00641389  8b10                 mov edx, dword ptr [eax]
// 0064138b  385a30               cmp byte ptr [edx + 0x30], bl
// 0064138e  7517                 jne 0x6413a7
// 00641390  c6403000             mov byte ptr [eax + 0x30], 0
// 00641394  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00641397  8bfe                 mov edi, esi
// 00641399  8b7604               mov esi, dword ptr [esi + 4]
// 0064139c  3b7804               cmp edi, dword ptr [eax + 4]
// 0064139f  0f854bffffff         jne 0x6412f0
// 006413a5  eb31                 jmp 0x6413d8
// 006413a7  8b08                 mov ecx, dword ptr [eax]
// 006413a9  385930               cmp byte ptr [ecx + 0x30], bl
// 006413ac  7514                 jne 0x6413c2
// 006413ae  8b5008               mov edx, dword ptr [eax + 8]
// 006413b1  885a30               mov byte ptr [edx + 0x30], bl
// 006413b4  50                   push eax
// 006413b5  8bcd                 mov ecx, ebp
// 006413b7  c6403000             mov byte ptr [eax + 0x30], 0
// 006413bb  e860e10100           call 0x65f520
// 006413c0  8b06                 mov eax, dword ptr [esi]
// 006413c2  8a4e30               mov cl, byte ptr [esi + 0x30]
// 006413c5  884830               mov byte ptr [eax + 0x30], cl
// 006413c8  885e30               mov byte ptr [esi + 0x30], bl
// 006413cb  8b10                 mov edx, dword ptr [eax]
// 006413cd  56                   push esi
// 006413ce  8bcd                 mov ecx, ebp
// 006413d0  885a30               mov byte ptr [edx + 0x30], bl
// 006413d3  e878eae7ff           call 0x4bfe50
// 006413d8  885f30               mov byte ptr [edi + 0x30], bl
// 006413db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006413df  83c10c               add ecx, 0xc
// 006413e2  e849e8ffff           call 0x63fc30
// 006413e7  8b442410             mov eax, dword ptr [esp + 0x10]
// 006413eb  50                   push eax
// 006413ec  e8a9651600           call 0x7a799a
// 006413f1  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 006413f4  83c404               add esp, 4
// 006413f7  5f                   pop edi
// 006413f8  5e                   pop esi
// 006413f9  5b                   pop ebx
// 006413fa  85c0                 test eax, eax
// 006413fc  7604                 jbe 0x641402
// 006413fe  48                   dec eax
// 006413ff  89451c               mov dword ptr [ebp + 0x1c], eax
// 00641402  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00641406  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0064140a  8b5500               mov edx, dword ptr [ebp]
// 0064140d  894804               mov dword ptr [eax + 4], ecx
// 00641410  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00641414  8910                 mov dword ptr [eax], edx
// 00641416  5d                   pop ebp
// 00641417  64890d00000000       mov dword ptr fs:[0], ecx
// 0064141e  83c454               add esp, 0x54
// 00641421  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
