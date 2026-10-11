// roc 2009-06 006225e0  unit: RBX::RootInstance  size: 724 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006225e0
//
// 006225e0  64a100000000         mov eax, dword ptr fs:[0]
// 006225e6  6aff                 push -1
// 006225e8  68b2db8500           push 0x85dbb2
// 006225ed  50                   push eax
// 006225ee  64892500000000       mov dword ptr fs:[0], esp
// 006225f5  8b442418             mov eax, dword ptr [esp + 0x18]
// 006225f9  83ec48               sub esp, 0x48
// 006225fc  80783100             cmp byte ptr [eax + 0x31], 0
// 00622600  55                   push ebp
// 00622601  8be9                 mov ebp, ecx
// 00622603  7459                 je 0x62265e
// 00622605  68a4c98a00           push 0x8ac9a4
// 0062260a  8d4c240c             lea ecx, [esp + 0xc]
// 0062260e  ff15b4e48900         call dword ptr [0x89e4b4]
// 00622614  8d4c2424             lea ecx, [esp + 0x24]
// 00622618  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00622620  ff15b8e98900         call dword ptr [0x89e9b8]
// 00622626  8d442408             lea eax, [esp + 8]
// 0062262a  50                   push eax
// 0062262b  8d4c2434             lea ecx, [esp + 0x34]
// 0062262f  c644245801           mov byte ptr [esp + 0x58], 1
// 00622634  c744242844c98a00     mov dword ptr [esp + 0x28], 0x8ac944
// 0062263c  ff15b8e48900         call dword ptr [0x89e4b8]
// 00622642  68dc919700           push 0x9791dc
// 00622647  8d4c2428             lea ecx, [esp + 0x28]
// 0062264b  51                   push ecx
// 0062264c  c644245c00           mov byte ptr [esp + 0x5c], 0
// 00622651  c744242c5cc98a00     mov dword ptr [esp + 0x2c], 0x8ac95c
// 00622659  e8ec730f00           call 0x719a4a
// 0062265e  53                   push ebx
// 0062265f  56                   push esi
// 00622660  8bd8                 mov ebx, eax
// 00622662  57                   push edi
// 00622663  8d4c246c             lea ecx, [esp + 0x6c]
// 00622667  895c2410             mov dword ptr [esp + 0x10], ebx
// 0062266b  e840fc0b00           call 0x6e22b0
// 00622670  8b0b                 mov ecx, dword ptr [ebx]
// 00622672  80793100             cmp byte ptr [ecx + 0x31], 0
// 00622676  7405                 je 0x62267d
// 00622678  8b7b08               mov edi, dword ptr [ebx + 8]
// 0062267b  eb1b                 jmp 0x622698
// 0062267d  8b5308               mov edx, dword ptr [ebx + 8]
// 00622680  807a3100             cmp byte ptr [edx + 0x31], 0
// 00622684  7404                 je 0x62268a
// 00622686  8bf9                 mov edi, ecx
// 00622688  eb0e                 jmp 0x622698
// 0062268a  8b442470             mov eax, dword ptr [esp + 0x70]
// 0062268e  8b7808               mov edi, dword ptr [eax + 8]
// 00622691  8d5008               lea edx, [eax + 8]
// 00622694  3bc3                 cmp eax, ebx
// 00622696  756b                 jne 0x622703
// 00622698  807f3100             cmp byte ptr [edi + 0x31], 0
// 0062269c  8b7304               mov esi, dword ptr [ebx + 4]
// 0062269f  7503                 jne 0x6226a4
// 006226a1  897704               mov dword ptr [edi + 4], esi
// 006226a4  8b4518               mov eax, dword ptr [ebp + 0x18]
// 006226a7  395804               cmp dword ptr [eax + 4], ebx
// 006226aa  7505                 jne 0x6226b1
// 006226ac  897804               mov dword ptr [eax + 4], edi
// 006226af  eb0b                 jmp 0x6226bc
// 006226b1  391e                 cmp dword ptr [esi], ebx
// 006226b3  7504                 jne 0x6226b9
// 006226b5  893e                 mov dword ptr [esi], edi
// 006226b7  eb03                 jmp 0x6226bc
// 006226b9  897e08               mov dword ptr [esi + 8], edi
// 006226bc  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 006226bf  8b03                 mov eax, dword ptr [ebx]
// 006226c1  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006226c5  7515                 jne 0x6226dc
// 006226c7  807f3100             cmp byte ptr [edi + 0x31], 0
// 006226cb  7404                 je 0x6226d1
// 006226cd  8bc6                 mov eax, esi
// 006226cf  eb09                 jmp 0x6226da
// 006226d1  57                   push edi
// 006226d2  e8596afbff           call 0x5d9130
// 006226d7  83c404               add esp, 4
// 006226da  8903                 mov dword ptr [ebx], eax
// 006226dc  8b5d18               mov ebx, dword ptr [ebp + 0x18]
// 006226df  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006226e3  394b08               cmp dword ptr [ebx + 8], ecx
// 006226e6  7577                 jne 0x62275f
// 006226e8  807f3100             cmp byte ptr [edi + 0x31], 0
// 006226ec  7407                 je 0x6226f5
// 006226ee  8bc6                 mov eax, esi
// 006226f0  894308               mov dword ptr [ebx + 8], eax
// 006226f3  eb6a                 jmp 0x62275f
// 006226f5  57                   push edi
// 006226f6  e845f90b00           call 0x6e2040
// 006226fb  83c404               add esp, 4
// 006226fe  894308               mov dword ptr [ebx + 8], eax
// 00622701  eb5c                 jmp 0x62275f
// 00622703  894104               mov dword ptr [ecx + 4], eax
// 00622706  8b0b                 mov ecx, dword ptr [ebx]
// 00622708  8908                 mov dword ptr [eax], ecx
// 0062270a  3b4308               cmp eax, dword ptr [ebx + 8]
// 0062270d  7504                 jne 0x622713
// 0062270f  8bf0                 mov esi, eax
// 00622711  eb19                 jmp 0x62272c
// 00622713  807f3100             cmp byte ptr [edi + 0x31], 0
// 00622717  8b7004               mov esi, dword ptr [eax + 4]
// 0062271a  7503                 jne 0x62271f
// 0062271c  897704               mov dword ptr [edi + 4], esi
// 0062271f  893e                 mov dword ptr [esi], edi
// 00622721  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00622724  890a                 mov dword ptr [edx], ecx
// 00622726  8b5308               mov edx, dword ptr [ebx + 8]
// 00622729  894204               mov dword ptr [edx + 4], eax
// 0062272c  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0062272f  395904               cmp dword ptr [ecx + 4], ebx
// 00622732  7505                 jne 0x622739
// 00622734  894104               mov dword ptr [ecx + 4], eax
// 00622737  eb0e                 jmp 0x622747
// 00622739  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0062273c  3919                 cmp dword ptr [ecx], ebx
// 0062273e  7504                 jne 0x622744
// 00622740  8901                 mov dword ptr [ecx], eax
// 00622742  eb03                 jmp 0x622747
// 00622744  894108               mov dword ptr [ecx + 8], eax
// 00622747  8b4b04               mov ecx, dword ptr [ebx + 4]
// 0062274a  894804               mov dword ptr [eax + 4], ecx
// 0062274d  8d4b30               lea ecx, [ebx + 0x30]
// 00622750  83c030               add eax, 0x30
// 00622753  3bc1                 cmp eax, ecx
// 00622755  7408                 je 0x62275f
// 00622757  8a19                 mov bl, byte ptr [ecx]
// 00622759  8a10                 mov dl, byte ptr [eax]
// 0062275b  8818                 mov byte ptr [eax], bl
// 0062275d  8811                 mov byte ptr [ecx], dl
// 0062275f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00622763  b301                 mov bl, 1
// 00622765  385a30               cmp byte ptr [edx + 0x30], bl
// 00622768  0f85fd000000         jne 0x62286b
// 0062276e  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00622771  3b7804               cmp edi, dword ptr [eax + 4]
// 00622774  0f84ee000000         je 0x622868
// 0062277a  8d9b00000000         lea ebx, [ebx]
// 00622780  385f30               cmp byte ptr [edi + 0x30], bl
// 00622783  0f85df000000         jne 0x622868
// 00622789  8b06                 mov eax, dword ptr [esi]
// 0062278b  3bf8                 cmp edi, eax
// 0062278d  7565                 jne 0x6227f4
// 0062278f  8b4608               mov eax, dword ptr [esi + 8]
// 00622792  80783000             cmp byte ptr [eax + 0x30], 0
// 00622796  7512                 jne 0x6227aa
// 00622798  885830               mov byte ptr [eax + 0x30], bl
// 0062279b  56                   push esi
// 0062279c  8bcd                 mov ecx, ebp
// 0062279e  c6463000             mov byte ptr [esi + 0x30], 0
// 006227a2  e8c9faffff           call 0x622270
// 006227a7  8b4608               mov eax, dword ptr [esi + 8]
// 006227aa  80783100             cmp byte ptr [eax + 0x31], 0
// 006227ae  7574                 jne 0x622824
// 006227b0  8b08                 mov ecx, dword ptr [eax]
// 006227b2  385930               cmp byte ptr [ecx + 0x30], bl
// 006227b5  7508                 jne 0x6227bf
// 006227b7  8b5008               mov edx, dword ptr [eax + 8]
// 006227ba  385a30               cmp byte ptr [edx + 0x30], bl
// 006227bd  7461                 je 0x622820
// 006227bf  8b4808               mov ecx, dword ptr [eax + 8]
// 006227c2  385930               cmp byte ptr [ecx + 0x30], bl
// 006227c5  7514                 jne 0x6227db
// 006227c7  8b10                 mov edx, dword ptr [eax]
// 006227c9  885a30               mov byte ptr [edx + 0x30], bl
// 006227cc  50                   push eax
// 006227cd  8bcd                 mov ecx, ebp
// 006227cf  c6403000             mov byte ptr [eax + 0x30], 0
// 006227d3  e8c8f70b00           call 0x6e1fa0
// 006227d8  8b4608               mov eax, dword ptr [esi + 8]
// 006227db  8a4e30               mov cl, byte ptr [esi + 0x30]
// 006227de  884830               mov byte ptr [eax + 0x30], cl
// 006227e1  885e30               mov byte ptr [esi + 0x30], bl
// 006227e4  8b5008               mov edx, dword ptr [eax + 8]
// 006227e7  56                   push esi
// 006227e8  8bcd                 mov ecx, ebp
// 006227ea  885a30               mov byte ptr [edx + 0x30], bl
// 006227ed  e87efaffff           call 0x622270
// 006227f2  eb74                 jmp 0x622868
// 006227f4  80783000             cmp byte ptr [eax + 0x30], 0
// 006227f8  7511                 jne 0x62280b
// 006227fa  885830               mov byte ptr [eax + 0x30], bl
// 006227fd  56                   push esi
// 006227fe  8bcd                 mov ecx, ebp
// 00622800  c6463000             mov byte ptr [esi + 0x30], 0
// 00622804  e897f70b00           call 0x6e1fa0
// 00622809  8b06                 mov eax, dword ptr [esi]
// 0062280b  80783100             cmp byte ptr [eax + 0x31], 0
// 0062280f  7513                 jne 0x622824
// 00622811  8b4808               mov ecx, dword ptr [eax + 8]
// 00622814  385930               cmp byte ptr [ecx + 0x30], bl
// 00622817  751e                 jne 0x622837
// 00622819  8b10                 mov edx, dword ptr [eax]
// 0062281b  385a30               cmp byte ptr [edx + 0x30], bl
// 0062281e  7517                 jne 0x622837
// 00622820  c6403000             mov byte ptr [eax + 0x30], 0
// 00622824  8b4518               mov eax, dword ptr [ebp + 0x18]
// 00622827  8bfe                 mov edi, esi
// 00622829  8b7604               mov esi, dword ptr [esi + 4]
// 0062282c  3b7804               cmp edi, dword ptr [eax + 4]
// 0062282f  0f854bffffff         jne 0x622780
// 00622835  eb31                 jmp 0x622868
// 00622837  8b08                 mov ecx, dword ptr [eax]
// 00622839  385930               cmp byte ptr [ecx + 0x30], bl
// 0062283c  7514                 jne 0x622852
// 0062283e  8b5008               mov edx, dword ptr [eax + 8]
// 00622841  885a30               mov byte ptr [edx + 0x30], bl
// 00622844  50                   push eax
// 00622845  8bcd                 mov ecx, ebp
// 00622847  c6403000             mov byte ptr [eax + 0x30], 0
// 0062284b  e820faffff           call 0x622270
// 00622850  8b06                 mov eax, dword ptr [esi]
// 00622852  8a4e30               mov cl, byte ptr [esi + 0x30]
// 00622855  884830               mov byte ptr [eax + 0x30], cl
// 00622858  885e30               mov byte ptr [esi + 0x30], bl
// 0062285b  8b10                 mov edx, dword ptr [eax]
// 0062285d  56                   push esi
// 0062285e  8bcd                 mov ecx, ebp
// 00622860  885a30               mov byte ptr [edx + 0x30], bl
// 00622863  e838f70b00           call 0x6e1fa0
// 00622868  885f30               mov byte ptr [edi + 0x30], bl
// 0062286b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062286f  83c10c               add ecx, 0xc
// 00622872  e829f9ffff           call 0x6221a0
// 00622877  8b442410             mov eax, dword ptr [esp + 0x10]
// 0062287b  50                   push eax
// 0062287c  e8b1610f00           call 0x718a32
// 00622881  8b451c               mov eax, dword ptr [ebp + 0x1c]
// 00622884  83c404               add esp, 4
// 00622887  5f                   pop edi
// 00622888  5e                   pop esi
// 00622889  5b                   pop ebx
// 0062288a  85c0                 test eax, eax
// 0062288c  7604                 jbe 0x622892
// 0062288e  48                   dec eax
// 0062288f  89451c               mov dword ptr [ebp + 0x1c], eax
// 00622892  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00622896  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 0062289a  8b5500               mov edx, dword ptr [ebp]
// 0062289d  894804               mov dword ptr [eax + 4], ecx
// 006228a0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 006228a4  8910                 mov dword ptr [eax], edx
// 006228a6  5d                   pop ebp
// 006228a7  64890d00000000       mov dword ptr fs:[0], ecx
// 006228ae  83c454               add esp, 0x54
// 006228b1  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VInstanceHandle@RBX@@@std@@@2@$0A@@std@@@std@@QAE?AViterator@12@Vconst_iterator@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
