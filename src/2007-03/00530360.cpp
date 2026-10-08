// roc 2007-03 00530360  unit: seg_00530000  size: 696 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00530360
//
// 00530360  64a100000000         mov eax, dword ptr fs:[0]
// 00530366  6aff                 push -1
// 00530368  68926f7500           push 0x756f92
// 0053036d  50                   push eax
// 0053036e  64892500000000       mov dword ptr fs:[0], esp
// 00530375  8b442418             mov eax, dword ptr [esp + 0x18]
// 00530379  83ec48               sub esp, 0x48
// 0053037c  80781500             cmp byte ptr [eax + 0x15], 0
// 00530380  55                   push ebp
// 00530381  8be9                 mov ebp, ecx
// 00530383  7459                 je 0x5303de
// 00530385  68dc3e7800           push 0x783edc
// 0053038a  8d4c240c             lea ecx, [esp + 0xc]
// 0053038e  ff1578e77700         call dword ptr [0x77e778]
// 00530394  8d4c2424             lea ecx, [esp + 0x24]
// 00530398  c744245400000000     mov dword ptr [esp + 0x54], 0
// 005303a0  ff1560e97700         call dword ptr [0x77e960]
// 005303a6  8d442408             lea eax, [esp + 8]
// 005303aa  50                   push eax
// 005303ab  8d4c2434             lea ecx, [esp + 0x34]
// 005303af  c644245801           mov byte ptr [esp + 0x58], 1
// 005303b4  c7442428383e7800     mov dword ptr [esp + 0x28], 0x783e38
// 005303bc  ff157ce77700         call dword ptr [0x77e77c]
// 005303c2  68ccf38300           push 0x83f3cc
// 005303c7  8d4c2428             lea ecx, [esp + 0x28]
// 005303cb  51                   push ecx
// 005303cc  c644245c00           mov byte ptr [esp + 0x5c], 0
// 005303d1  c744242c503e7800     mov dword ptr [esp + 0x2c], 0x783e50
// 005303d9  e850ec0e00           call 0x61f02e
// 005303de  53                   push ebx
// 005303df  56                   push esi
// 005303e0  8bd8                 mov ebx, eax
// 005303e2  57                   push edi
// 005303e3  8d4c246c             lea ecx, [esp + 0x6c]
// 005303e7  895c2410             mov dword ptr [esp + 0x10], ebx
// 005303eb  e8e0590800           call 0x5b5dd0
// 005303f0  8b03                 mov eax, dword ptr [ebx]
// 005303f2  80781500             cmp byte ptr [eax + 0x15], 0
// 005303f6  7405                 je 0x5303fd
// 005303f8  8b7b08               mov edi, dword ptr [ebx + 8]
// 005303fb  eb18                 jmp 0x530415
// 005303fd  8b5308               mov edx, dword ptr [ebx + 8]
// 00530400  807a1500             cmp byte ptr [edx + 0x15], 0
// 00530404  7404                 je 0x53040a
// 00530406  8bf8                 mov edi, eax
// 00530408  eb0b                 jmp 0x530415
// 0053040a  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0053040e  3bcb                 cmp ecx, ebx
// 00530410  8b7908               mov edi, dword ptr [ecx + 8]
// 00530413  756b                 jne 0x530480
// 00530415  807f1500             cmp byte ptr [edi + 0x15], 0
// 00530419  8b7304               mov esi, dword ptr [ebx + 4]
// 0053041c  7503                 jne 0x530421
// 0053041e  897704               mov dword ptr [edi + 4], esi
// 00530421  8b4504               mov eax, dword ptr [ebp + 4]
// 00530424  395804               cmp dword ptr [eax + 4], ebx
// 00530427  7505                 jne 0x53042e
// 00530429  897804               mov dword ptr [eax + 4], edi
// 0053042c  eb0b                 jmp 0x530439
// 0053042e  391e                 cmp dword ptr [esi], ebx
// 00530430  7504                 jne 0x530436
// 00530432  893e                 mov dword ptr [esi], edi
// 00530434  eb03                 jmp 0x530439
// 00530436  897e08               mov dword ptr [esi + 8], edi
// 00530439  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0053043c  8b03                 mov eax, dword ptr [ebx]
// 0053043e  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00530442  7515                 jne 0x530459
// 00530444  807f1500             cmp byte ptr [edi + 0x15], 0
// 00530448  7404                 je 0x53044e
// 0053044a  8bc6                 mov eax, esi
// 0053044c  eb09                 jmp 0x530457
// 0053044e  57                   push edi
// 0053044f  e85cef0b00           call 0x5ef3b0
// 00530454  83c404               add esp, 4
// 00530457  8903                 mov dword ptr [ebx], eax
// 00530459  8b5d04               mov ebx, dword ptr [ebp + 4]
// 0053045c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00530460  394b08               cmp dword ptr [ebx + 8], ecx
// 00530463  7572                 jne 0x5304d7
// 00530465  807f1500             cmp byte ptr [edi + 0x15], 0
// 00530469  7407                 je 0x530472
// 0053046b  8bc6                 mov eax, esi
// 0053046d  894308               mov dword ptr [ebx + 8], eax
// 00530470  eb65                 jmp 0x5304d7
// 00530472  57                   push edi
// 00530473  e8682ef6ff           call 0x4932e0
// 00530478  83c404               add esp, 4
// 0053047b  894308               mov dword ptr [ebx + 8], eax
// 0053047e  eb57                 jmp 0x5304d7
// 00530480  894804               mov dword ptr [eax + 4], ecx
// 00530483  8b13                 mov edx, dword ptr [ebx]
// 00530485  8911                 mov dword ptr [ecx], edx
// 00530487  3b4b08               cmp ecx, dword ptr [ebx + 8]
// 0053048a  7504                 jne 0x530490
// 0053048c  8bf1                 mov esi, ecx
// 0053048e  eb1a                 jmp 0x5304aa
// 00530490  807f1500             cmp byte ptr [edi + 0x15], 0
// 00530494  8b7104               mov esi, dword ptr [ecx + 4]
// 00530497  7503                 jne 0x53049c
// 00530499  897704               mov dword ptr [edi + 4], esi
// 0053049c  893e                 mov dword ptr [esi], edi
// 0053049e  8b4308               mov eax, dword ptr [ebx + 8]
// 005304a1  894108               mov dword ptr [ecx + 8], eax
// 005304a4  8b5308               mov edx, dword ptr [ebx + 8]
// 005304a7  894a04               mov dword ptr [edx + 4], ecx
// 005304aa  8b4504               mov eax, dword ptr [ebp + 4]
// 005304ad  395804               cmp dword ptr [eax + 4], ebx
// 005304b0  7505                 jne 0x5304b7
// 005304b2  894804               mov dword ptr [eax + 4], ecx
// 005304b5  eb0e                 jmp 0x5304c5
// 005304b7  8b4304               mov eax, dword ptr [ebx + 4]
// 005304ba  3918                 cmp dword ptr [eax], ebx
// 005304bc  7504                 jne 0x5304c2
// 005304be  8908                 mov dword ptr [eax], ecx
// 005304c0  eb03                 jmp 0x5304c5
// 005304c2  894808               mov dword ptr [eax + 8], ecx
// 005304c5  8b4304               mov eax, dword ptr [ebx + 4]
// 005304c8  894104               mov dword ptr [ecx + 4], eax
// 005304cb  8a5314               mov dl, byte ptr [ebx + 0x14]
// 005304ce  8a4114               mov al, byte ptr [ecx + 0x14]
// 005304d1  885114               mov byte ptr [ecx + 0x14], dl
// 005304d4  884314               mov byte ptr [ebx + 0x14], al
// 005304d7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005304db  b301                 mov bl, 1
// 005304dd  385814               cmp byte ptr [eax + 0x14], bl
// 005304e0  0f85f2000000         jne 0x5305d8
// 005304e6  8b4d04               mov ecx, dword ptr [ebp + 4]
// 005304e9  3b7904               cmp edi, dword ptr [ecx + 4]
// 005304ec  0f84e3000000         je 0x5305d5
// 005304f2  385f14               cmp byte ptr [edi + 0x14], bl
// 005304f5  0f85da000000         jne 0x5305d5
// 005304fb  8b06                 mov eax, dword ptr [esi]
// 005304fd  3bf8                 cmp edi, eax
// 005304ff  7563                 jne 0x530564
// 00530501  8b4608               mov eax, dword ptr [esi + 8]
// 00530504  80781400             cmp byte ptr [eax + 0x14], 0
// 00530508  7512                 jne 0x53051c
// 0053050a  885814               mov byte ptr [eax + 0x14], bl
// 0053050d  56                   push esi
// 0053050e  8bcd                 mov ecx, ebp
// 00530510  c6461400             mov byte ptr [esi + 0x14], 0
// 00530514  e827c60600           call 0x59cb40
// 00530519  8b4608               mov eax, dword ptr [esi + 8]
// 0053051c  80781500             cmp byte ptr [eax + 0x15], 0
// 00530520  7572                 jne 0x530594
// 00530522  8b10                 mov edx, dword ptr [eax]
// 00530524  385a14               cmp byte ptr [edx + 0x14], bl
// 00530527  7508                 jne 0x530531
// 00530529  8b4808               mov ecx, dword ptr [eax + 8]
// 0053052c  385914               cmp byte ptr [ecx + 0x14], bl
// 0053052f  745f                 je 0x530590
// 00530531  8b4808               mov ecx, dword ptr [eax + 8]
// 00530534  385914               cmp byte ptr [ecx + 0x14], bl
// 00530537  7512                 jne 0x53054b
// 00530539  885a14               mov byte ptr [edx + 0x14], bl
// 0053053c  50                   push eax
// 0053053d  8bcd                 mov ecx, ebp
// 0053053f  c6401400             mov byte ptr [eax + 0x14], 0
// 00530543  e8a8fc0400           call 0x5801f0
// 00530548  8b4608               mov eax, dword ptr [esi + 8]
// 0053054b  8a4e14               mov cl, byte ptr [esi + 0x14]
// 0053054e  884814               mov byte ptr [eax + 0x14], cl
// 00530551  885e14               mov byte ptr [esi + 0x14], bl
// 00530554  8b5008               mov edx, dword ptr [eax + 8]
// 00530557  56                   push esi
// 00530558  8bcd                 mov ecx, ebp
// 0053055a  885a14               mov byte ptr [edx + 0x14], bl
// 0053055d  e8dec50600           call 0x59cb40
// 00530562  eb71                 jmp 0x5305d5
// 00530564  80781400             cmp byte ptr [eax + 0x14], 0
// 00530568  7511                 jne 0x53057b
// 0053056a  885814               mov byte ptr [eax + 0x14], bl
// 0053056d  56                   push esi
// 0053056e  8bcd                 mov ecx, ebp
// 00530570  c6461400             mov byte ptr [esi + 0x14], 0
// 00530574  e877fc0400           call 0x5801f0
// 00530579  8b06                 mov eax, dword ptr [esi]
// 0053057b  80781500             cmp byte ptr [eax + 0x15], 0
// 0053057f  7513                 jne 0x530594
// 00530581  8b5008               mov edx, dword ptr [eax + 8]
// 00530584  385a14               cmp byte ptr [edx + 0x14], bl
// 00530587  751e                 jne 0x5305a7
// 00530589  8b08                 mov ecx, dword ptr [eax]
// 0053058b  385914               cmp byte ptr [ecx + 0x14], bl
// 0053058e  7517                 jne 0x5305a7
// 00530590  c6401400             mov byte ptr [eax + 0x14], 0
// 00530594  8b5504               mov edx, dword ptr [ebp + 4]
// 00530597  8bfe                 mov edi, esi
// 00530599  3b7a04               cmp edi, dword ptr [edx + 4]
// 0053059c  8b7604               mov esi, dword ptr [esi + 4]
// 0053059f  0f854dffffff         jne 0x5304f2
// 005305a5  eb2e                 jmp 0x5305d5
// 005305a7  8b08                 mov ecx, dword ptr [eax]
// 005305a9  385914               cmp byte ptr [ecx + 0x14], bl
// 005305ac  7511                 jne 0x5305bf
// 005305ae  885a14               mov byte ptr [edx + 0x14], bl
// 005305b1  50                   push eax
// 005305b2  8bcd                 mov ecx, ebp
// 005305b4  c6401400             mov byte ptr [eax + 0x14], 0
// 005305b8  e883c50600           call 0x59cb40
// 005305bd  8b06                 mov eax, dword ptr [esi]
// 005305bf  8a4e14               mov cl, byte ptr [esi + 0x14]
// 005305c2  884814               mov byte ptr [eax + 0x14], cl
// 005305c5  885e14               mov byte ptr [esi + 0x14], bl
// 005305c8  8b10                 mov edx, dword ptr [eax]
// 005305ca  56                   push esi
// 005305cb  8bcd                 mov ecx, ebp
// 005305cd  885a14               mov byte ptr [edx + 0x14], bl
// 005305d0  e81bfc0400           call 0x5801f0
// 005305d5  885f14               mov byte ptr [edi + 0x14], bl
// 005305d8  8b442410             mov eax, dword ptr [esp + 0x10]
// 005305dc  50                   push eax
// 005305dd  e80edb0e00           call 0x61e0f0
// 005305e2  8b4508               mov eax, dword ptr [ebp + 8]
// 005305e5  83c404               add esp, 4
// 005305e8  85c0                 test eax, eax
// 005305ea  5f                   pop edi
// 005305eb  5e                   pop esi
// 005305ec  5b                   pop ebx
// 005305ed  7606                 jbe 0x5305f5
// 005305ef  83c0ff               add eax, -1
// 005305f2  894508               mov dword ptr [ebp + 8], eax
// 005305f5  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 005305f9  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 005305fd  8b542464             mov edx, dword ptr [esp + 0x64]
// 00530601  8908                 mov dword ptr [eax], ecx
// 00530603  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00530607  895004               mov dword ptr [eax + 4], edx
// 0053060a  5d                   pop ebp
// 0053060b  64890d00000000       mov dword ptr fs:[0], ecx
// 00530612  83c454               add esp, 0x54
// 00530615  c20c00               ret 0xc
// library rbxgs/v8datamodel\Camera.cpp (function ?erase@?$_Tree@V?$_Tmap_traits@PBVName@RBX@@W4CameraType@Camera@2@U?$less@PBVName@RBX@@@std@@V?$allocator@U?$pair@QBVName@RBX@@W4CameraType@Camera@2@@std@@@6@$0A@@std@@@std@@QAE?AViterator@12@V312@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Camera.cpp
