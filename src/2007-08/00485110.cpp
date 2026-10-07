// roc 2007-08 00485110  unit: G3D::VertexAndPixelShader  size: 1455 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00485110
//
// 00485110  6aff                 push -1
// 00485112  6840667400           push 0x746640
// 00485117  64a100000000         mov eax, dword ptr fs:[0]
// 0048511d  50                   push eax
// 0048511e  81ec44010000         sub esp, 0x144
// 00485124  a188518b00           mov eax, dword ptr [0x8b5188]
// 00485129  33c4                 xor eax, esp
// 0048512b  89842440010000       mov dword ptr [esp + 0x140], eax
// 00485132  53                   push ebx
// 00485133  55                   push ebp
// 00485134  56                   push esi
// 00485135  57                   push edi
// 00485136  a188518b00           mov eax, dword ptr [0x8b5188]
// 0048513b  33c4                 xor eax, esp
// 0048513d  50                   push eax
// 0048513e  8d842458010000       lea eax, [esp + 0x158]
// 00485145  64a300000000         mov dword ptr fs:[0], eax
// 0048514b  8bb42468010000       mov esi, dword ptr [esp + 0x168]
// 00485152  33db                 xor ebx, ebx
// 00485154  895c2418             mov dword ptr [esp + 0x18], ebx
// 00485158  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0048515c  8d4c2454             lea ecx, [esp + 0x54]
// 00485160  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00485165  c644244d01           mov byte ptr [esp + 0x4d], 1
// 0048516a  c644244e01           mov byte ptr [esp + 0x4e], 1
// 0048516f  885c244f             mov byte ptr [esp + 0x4f], bl
// 00485173  885c2450             mov byte ptr [esp + 0x50], bl
// 00485177  c644245101           mov byte ptr [esp + 0x51], 1
// 0048517c  c644245201           mov byte ptr [esp + 0x52], 1
// 00485181  ff15a4e67700         call dword ptr [0x77e6a4]
// 00485187  895c2470             mov dword ptr [esp + 0x70], ebx
// 0048518b  885c2474             mov byte ptr [esp + 0x74], bl
// 0048518f  8d44244c             lea eax, [esp + 0x4c]
// 00485193  50                   push eax
// 00485194  56                   push esi
// 00485195  53                   push ebx
// 00485196  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 0048519d  899c246c010000       mov dword ptr [esp + 0x16c], ebx
// 004851a4  e8a7970800           call 0x50e950
// 004851a9  8d4c2454             lea ecx, [esp + 0x54]
// 004851ad  c684246001000002     mov byte ptr [esp + 0x160], 2
// 004851b5  ff15ace67700         call dword ptr [0x77e6ac]
// 004851bb  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 004851c2  e8c9a00800           call 0x50f290
// 004851c7  84c0                 test al, al
// 004851c9  0f84af040000         je 0x48567e
// 004851cf  90                   nop 
// 004851d0  8d8c2428010000       lea ecx, [esp + 0x128]
// 004851d7  51                   push ecx
// 004851d8  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004851df  e8bc9f0800           call 0x50f1a0
// 004851e4  be01000000           mov esi, 1
// 004851e9  0bde                 or ebx, esi
// 004851eb  397024               cmp dword ptr [eax + 0x24], esi
// 004851ee  c684246001000003     mov byte ptr [esp + 0x160], 3
// 004851f6  895c2418             mov dword ptr [esp + 0x18], ebx
// 004851fa  753f                 jne 0x48523b
// 004851fc  8d542420             lea edx, [esp + 0x20]
// 00485200  52                   push edx
// 00485201  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00485208  e8939f0800           call 0x50f1a0
// 0048520d  8b3df8e57700         mov edi, dword ptr [0x77e5f8]
// 00485213  6814ab7900           push 0x79ab14
// 00485218  83cb02               or ebx, 2
// 0048521b  50                   push eax
// 0048521c  c784246801000004000000 mov dword ptr [esp + 0x168], 4
// 00485227  895c2420             mov dword ptr [esp + 0x20], ebx
// 0048522b  ffd7                 call edi
// 0048522d  83c408               add esp, 8
// 00485230  84c0                 test al, al
// 00485232  740d                 je 0x485241
// 00485234  c644241701           mov byte ptr [esp + 0x17], 1
// 00485239  eb0b                 jmp 0x485246
// 0048523b  8b3df8e57700         mov edi, dword ptr [0x77e5f8]
// 00485241  c644241700           mov byte ptr [esp + 0x17], 0
// 00485246  f6c302               test bl, 2
// 00485249  c784246001000003000000 mov dword ptr [esp + 0x160], 3
// 00485254  7411                 je 0x485267
// 00485256  83e3fd               and ebx, 0xfffffffd
// 00485259  8d4c2420             lea ecx, [esp + 0x20]
// 0048525d  895c2418             mov dword ptr [esp + 0x18], ebx
// 00485261  ff15ace67700         call dword ptr [0x77e6ac]
// 00485267  f6c301               test bl, 1
// 0048526a  bd02000000           mov ebp, 2
// 0048526f  89ac2460010000       mov dword ptr [esp + 0x160], ebp
// 00485276  7410                 je 0x485288
// 00485278  8d8c2428010000       lea ecx, [esp + 0x128]
// 0048527f  83e3fe               and ebx, 0xfffffffe
// 00485282  ff15ace67700         call dword ptr [0x77e6ac]
// 00485288  807c241700           cmp byte ptr [esp + 0x17], 0
// 0048528d  0f84b6030000         je 0x485649
// 00485293  6814ab7900           push 0x79ab14
// 00485298  8d4c2424             lea ecx, [esp + 0x24]
// 0048529c  ff1598e67700         call dword ptr [0x77e698]
// 004852a2  8d442420             lea eax, [esp + 0x20]
// 004852a6  50                   push eax
// 004852a7  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004852ae  c684246401000005     mov byte ptr [esp + 0x164], 5
// 004852b6  e8659d0800           call 0x50f020
// 004852bb  8d4c2420             lea ecx, [esp + 0x20]
// 004852bf  c684246001000002     mov byte ptr [esp + 0x160], 2
// 004852c7  ff15ace67700         call dword ptr [0x77e6ac]
// 004852cd  8d4c2478             lea ecx, [esp + 0x78]
// 004852d1  51                   push ecx
// 004852d2  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004852d9  e8c29e0800           call 0x50f1a0
// 004852de  83cb04               or ebx, 4
// 004852e1  397024               cmp dword ptr [eax + 0x24], esi
// 004852e4  c684246001000006     mov byte ptr [esp + 0x160], 6
// 004852ec  895c2418             mov dword ptr [esp + 0x18], ebx
// 004852f0  7537                 jne 0x485329
// 004852f2  8d542420             lea edx, [esp + 0x20]
// 004852f6  52                   push edx
// 004852f7  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004852fe  e89d9e0800           call 0x50f1a0
// 00485303  680cab7900           push 0x79ab0c
// 00485308  83cb08               or ebx, 8
// 0048530b  50                   push eax
// 0048530c  c784246801000007000000 mov dword ptr [esp + 0x168], 7
// 00485317  895c2420             mov dword ptr [esp + 0x20], ebx
// 0048531b  ffd7                 call edi
// 0048531d  83c408               add esp, 8
// 00485320  84c0                 test al, al
// 00485322  c644241701           mov byte ptr [esp + 0x17], 1
// 00485327  7505                 jne 0x48532e
// 00485329  c644241700           mov byte ptr [esp + 0x17], 0
// 0048532e  f6c308               test bl, 8
// 00485331  c784246001000006000000 mov dword ptr [esp + 0x160], 6
// 0048533c  7411                 je 0x48534f
// 0048533e  83e3f7               and ebx, 0xfffffff7
// 00485341  8d4c2420             lea ecx, [esp + 0x20]
// 00485345  895c2418             mov dword ptr [esp + 0x18], ebx
// 00485349  ff15ace67700         call dword ptr [0x77e6ac]
// 0048534f  f6c304               test bl, 4
// 00485352  89ac2460010000       mov dword ptr [esp + 0x160], ebp
// 00485359  740d                 je 0x485368
// 0048535b  8d4c2478             lea ecx, [esp + 0x78]
// 0048535f  83e3fb               and ebx, 0xfffffffb
// 00485362  ff15ace67700         call dword ptr [0x77e6ac]
// 00485368  807c241700           cmp byte ptr [esp + 0x17], 0
// 0048536d  743a                 je 0x4853a9
// 0048536f  680cab7900           push 0x79ab0c
// 00485374  8d4c2424             lea ecx, [esp + 0x24]
// 00485378  ff1598e67700         call dword ptr [0x77e698]
// 0048537e  8d442420             lea eax, [esp + 0x20]
// 00485382  50                   push eax
// 00485383  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048538a  c684246401000008     mov byte ptr [esp + 0x164], 8
// 00485392  e8899c0800           call 0x50f020
// 00485397  8d4c2420             lea ecx, [esp + 0x20]
// 0048539b  c684246001000002     mov byte ptr [esp + 0x160], 2
// 004853a3  ff15ace67700         call dword ptr [0x77e6ac]
// 004853a9  8d4c2420             lea ecx, [esp + 0x20]
// 004853ad  51                   push ecx
// 004853ae  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004853b5  e8e69b0800           call 0x50efa0
// 004853ba  8bf0                 mov esi, eax
// 004853bc  c684246001000009     mov byte ptr [esp + 0x160], 9
// 004853c4  e897d0ffff           call 0x482460
// 004853c9  8d4c2420             lea ecx, [esp + 0x20]
// 004853cd  8be8                 mov ebp, eax
// 004853cf  c684246001000002     mov byte ptr [esp + 0x160], 2
// 004853d7  ff15ace67700         call dword ptr [0x77e6ac]
// 004853dd  8d942428010000       lea edx, [esp + 0x128]
// 004853e4  52                   push edx
// 004853e5  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004853ec  e8af9b0800           call 0x50efa0
// 004853f1  8d442420             lea eax, [esp + 0x20]
// 004853f5  50                   push eax
// 004853f6  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004853fd  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 00485405  e8969d0800           call 0x50f1a0
// 0048540a  83cb10               or ebx, 0x10
// 0048540d  83782401             cmp dword ptr [eax + 0x24], 1
// 00485411  c68424600100000b     mov byte ptr [esp + 0x160], 0xb
// 00485419  895c2418             mov dword ptr [esp + 0x18], ebx
// 0048541d  7537                 jne 0x485456
// 0048541f  8d4c2478             lea ecx, [esp + 0x78]
// 00485423  51                   push ecx
// 00485424  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048542b  e8709d0800           call 0x50f1a0
// 00485430  6808ab7900           push 0x79ab08
// 00485435  83cb20               or ebx, 0x20
// 00485438  50                   push eax
// 00485439  c78424680100000c000000 mov dword ptr [esp + 0x168], 0xc
// 00485444  895c2420             mov dword ptr [esp + 0x20], ebx
// 00485448  ffd7                 call edi
// 0048544a  83c408               add esp, 8
// 0048544d  84c0                 test al, al
// 0048544f  c644241701           mov byte ptr [esp + 0x17], 1
// 00485454  7505                 jne 0x48545b
// 00485456  c644241700           mov byte ptr [esp + 0x17], 0
// 0048545b  f6c320               test bl, 0x20
// 0048545e  c78424600100000b000000 mov dword ptr [esp + 0x160], 0xb
// 00485469  7411                 je 0x48547c
// 0048546b  83e3df               and ebx, 0xffffffdf
// 0048546e  8d4c2478             lea ecx, [esp + 0x78]
// 00485472  895c2418             mov dword ptr [esp + 0x18], ebx
// 00485476  ff15ace67700         call dword ptr [0x77e6ac]
// 0048547c  f6c310               test bl, 0x10
// 0048547f  c78424600100000a000000 mov dword ptr [esp + 0x160], 0xa
// 0048548a  740d                 je 0x485499
// 0048548c  8d4c2420             lea ecx, [esp + 0x20]
// 00485490  83e3ef               and ebx, 0xffffffef
// 00485493  ff15ace67700         call dword ptr [0x77e6ac]
// 00485499  807c241700           cmp byte ptr [esp + 0x17], 0
// 0048549e  0f8482000000         je 0x485526
// 004854a4  6808ab7900           push 0x79ab08
// 004854a9  8d4c2424             lea ecx, [esp + 0x24]
// 004854ad  ff1598e67700         call dword ptr [0x77e698]
// 004854b3  8d542420             lea edx, [esp + 0x20]
// 004854b7  52                   push edx
// 004854b8  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004854bf  c68424640100000d     mov byte ptr [esp + 0x164], 0xd
// 004854c7  e8549b0800           call 0x50f020
// 004854cc  8d4c2420             lea ecx, [esp + 0x20]
// 004854d0  c68424600100000a     mov byte ptr [esp + 0x160], 0xa
// 004854d8  ff15ace67700         call dword ptr [0x77e6ac]
// 004854de  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 004854e5  e856980800           call 0x50ed40
// 004854ea  ddd8                 fstp st(0)
// 004854ec  6804ab7900           push 0x79ab04
// 004854f1  8d4c2424             lea ecx, [esp + 0x24]
// 004854f5  ff1598e67700         call dword ptr [0x77e698]
// 004854fb  8d442420             lea eax, [esp + 0x20]
// 004854ff  50                   push eax
// 00485500  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00485507  c68424640100000e     mov byte ptr [esp + 0x164], 0xe
// 0048550f  e80c9b0800           call 0x50f020
// 00485514  8d4c2420             lea ecx, [esp + 0x20]
// 00485518  c68424600100000a     mov byte ptr [esp + 0x160], 0xa
// 00485520  ff15ace67700         call dword ptr [0x77e6ac]
// 00485526  68506f7800           push 0x786f50
// 0048552b  8d4c2424             lea ecx, [esp + 0x24]
// 0048552f  ff1598e67700         call dword ptr [0x77e698]
// 00485535  8d4c2420             lea ecx, [esp + 0x20]
// 00485539  51                   push ecx
// 0048553a  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00485541  c68424640100000f     mov byte ptr [esp + 0x164], 0xf
// 00485549  e8d29a0800           call 0x50f020
// 0048554e  8d4c2420             lea ecx, [esp + 0x20]
// 00485552  c68424600100000a     mov byte ptr [esp + 0x160], 0xa
// 0048555a  ff15ace67700         call dword ptr [0x77e6ac]
// 00485560  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00485564  33f6                 xor esi, esi
// 00485566  39b294010000         cmp dword ptr [edx + 0x194], esi
// 0048556c  7e3d                 jle 0x4855ab
// 0048556e  33ff                 xor edi, edi
// 00485570  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00485574  8b8090010000         mov eax, dword ptr [eax + 0x190]
// 0048557a  03c7                 add eax, edi
// 0048557c  8d8c2428010000       lea ecx, [esp + 0x128]
// 00485583  51                   push ecx
// 00485584  83c008               add eax, 8
// 00485587  50                   push eax
// 00485588  ff1594e67700         call dword ptr [0x77e694]
// 0048558e  83c408               add esp, 8
// 00485591  84c0                 test al, al
// 00485593  0f859f000000         jne 0x485638
// 00485599  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0048559d  83c601               add esi, 1
// 004855a0  83c730               add edi, 0x30
// 004855a3  3bb294010000         cmp esi, dword ptr [edx + 0x194]
// 004855a9  7cc5                 jl 0x485570
// 004855ab  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 004855af  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 004855b5  81c690010000         add esi, 0x190
// 004855bb  6a00                 push 0
// 004855bd  83c001               add eax, 1
// 004855c0  50                   push eax
// 004855c1  8bce                 mov ecx, esi
// 004855c3  e8e8d4ffff           call 0x482ab0
// 004855c8  8b4604               mov eax, dword ptr [esi + 4]
// 004855cb  8b16                 mov edx, dword ptr [esi]
// 004855cd  8d0c40               lea ecx, [eax + eax*2]
// 004855d0  c1e104               shl ecx, 4
// 004855d3  c64411d001           mov byte ptr [ecx + edx - 0x30], 1
// 004855d8  8b4604               mov eax, dword ptr [esi + 4]
// 004855db  8b0e                 mov ecx, dword ptr [esi]
// 004855dd  8d0440               lea eax, [eax + eax*2]
// 004855e0  c1e004               shl eax, 4
// 004855e3  83cfff               or edi, 0xffffffff
// 004855e6  897c08d4             mov dword ptr [eax + ecx - 0x2c], edi
// 004855ea  8b4604               mov eax, dword ptr [esi + 4]
// 004855ed  8b0e                 mov ecx, dword ptr [esi]
// 004855ef  8d0440               lea eax, [eax + eax*2]
// 004855f2  8d942428010000       lea edx, [esp + 0x128]
// 004855f9  c1e004               shl eax, 4
// 004855fc  52                   push edx
// 004855fd  8d4c08d8             lea ecx, [eax + ecx - 0x28]
// 00485601  ff1590e67700         call dword ptr [0x77e690]
// 00485607  8b4604               mov eax, dword ptr [esi + 4]
// 0048560a  8d1440               lea edx, [eax + eax*2]
// 0048560d  8b06                 mov eax, dword ptr [esi]
// 0048560f  c1e204               shl edx, 4
// 00485612  c74402f801000000     mov dword ptr [edx + eax - 8], 1
// 0048561a  8b4604               mov eax, dword ptr [esi + 4]
// 0048561d  8b16                 mov edx, dword ptr [esi]
// 0048561f  8d0c40               lea ecx, [eax + eax*2]
// 00485622  c1e104               shl ecx, 4
// 00485625  896c11f4             mov dword ptr [ecx + edx - 0xc], ebp
// 00485629  8b4604               mov eax, dword ptr [esi + 4]
// 0048562c  8b0e                 mov ecx, dword ptr [esi]
// 0048562e  8d0440               lea eax, [eax + eax*2]
// 00485631  c1e004               shl eax, 4
// 00485634  897c08fc             mov dword ptr [eax + ecx - 4], edi
// 00485638  c684246001000002     mov byte ptr [esp + 0x160], 2
// 00485640  8d8c2428010000       lea ecx, [esp + 0x128]
// 00485647  eb1b                 jmp 0x485664
// 00485649  8d9424a4000000       lea edx, [esp + 0xa4]
// 00485650  52                   push edx
// 00485651  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00485658  e8b3910800           call 0x50e810
// 0048565d  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00485664  ff15ace67700         call dword ptr [0x77e6ac]
// 0048566a  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00485671  e81a9c0800           call 0x50f290
// 00485676  84c0                 test al, al
// 00485678  0f8552fbffff         jne 0x4851d0
// 0048567e  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00485685  c7842460010000ffffffff mov dword ptr [esp + 0x160], 0xffffffff
// 00485690  e8abf3ffff           call 0x484a40
// 00485695  8b8c2458010000       mov ecx, dword ptr [esp + 0x158]
// 0048569c  64890d00000000       mov dword ptr fs:[0], ecx
// 004856a3  59                   pop ecx
// 004856a4  5f                   pop edi
// 004856a5  5e                   pop esi
// 004856a6  5d                   pop ebp
// 004856a7  5b                   pop ebx
// 004856a8  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 004856af  33cc                 xor ecx, esp
// 004856b1  e868b31a00           call 0x630a1e
// 004856b6  81c450010000         add esp, 0x150
// 004856bc  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?addUniformsFromCode@VertexAndPixelShader@G3D@@IAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
