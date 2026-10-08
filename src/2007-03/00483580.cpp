// roc 2007-03 00483580  unit: seg_00480000  size: 1455 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00483580
//
// 00483580  6aff                 push -1
// 00483582  6850877400           push 0x748750
// 00483587  64a100000000         mov eax, dword ptr fs:[0]
// 0048358d  50                   push eax
// 0048358e  81ec44010000         sub esp, 0x144
// 00483594  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00483599  33c4                 xor eax, esp
// 0048359b  89842440010000       mov dword ptr [esp + 0x140], eax
// 004835a2  53                   push ebx
// 004835a3  55                   push ebp
// 004835a4  56                   push esi
// 004835a5  57                   push edi
// 004835a6  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 004835ab  33c4                 xor eax, esp
// 004835ad  50                   push eax
// 004835ae  8d842458010000       lea eax, [esp + 0x158]
// 004835b5  64a300000000         mov dword ptr fs:[0], eax
// 004835bb  8bb42468010000       mov esi, dword ptr [esp + 0x168]
// 004835c2  33db                 xor ebx, ebx
// 004835c4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004835c8  894c241c             mov dword ptr [esp + 0x1c], ecx
// 004835cc  8d4c2454             lea ecx, [esp + 0x54]
// 004835d0  c644244c01           mov byte ptr [esp + 0x4c], 1
// 004835d5  c644244d01           mov byte ptr [esp + 0x4d], 1
// 004835da  c644244e01           mov byte ptr [esp + 0x4e], 1
// 004835df  885c244f             mov byte ptr [esp + 0x4f], bl
// 004835e3  885c2450             mov byte ptr [esp + 0x50], bl
// 004835e7  c644245101           mov byte ptr [esp + 0x51], 1
// 004835ec  c644245201           mov byte ptr [esp + 0x52], 1
// 004835f1  ff1584e77700         call dword ptr [0x77e784]
// 004835f7  895c2470             mov dword ptr [esp + 0x70], ebx
// 004835fb  885c2474             mov byte ptr [esp + 0x74], bl
// 004835ff  8d44244c             lea eax, [esp + 0x4c]
// 00483603  50                   push eax
// 00483604  56                   push esi
// 00483605  53                   push ebx
// 00483606  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 0048360d  899c246c010000       mov dword ptr [esp + 0x16c], ebx
// 00483614  e8d7f90700           call 0x502ff0
// 00483619  8d4c2454             lea ecx, [esp + 0x54]
// 0048361d  c684246001000002     mov byte ptr [esp + 0x160], 2
// 00483625  ff158ce77700         call dword ptr [0x77e78c]
// 0048362b  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00483632  e8f9020800           call 0x503930
// 00483637  84c0                 test al, al
// 00483639  0f84af040000         je 0x483aee
// 0048363f  90                   nop 
// 00483640  8d8c2428010000       lea ecx, [esp + 0x128]
// 00483647  51                   push ecx
// 00483648  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048364f  e8ec010800           call 0x503840
// 00483654  be01000000           mov esi, 1
// 00483659  0bde                 or ebx, esi
// 0048365b  397024               cmp dword ptr [eax + 0x24], esi
// 0048365e  c684246001000003     mov byte ptr [esp + 0x160], 3
// 00483666  895c2418             mov dword ptr [esp + 0x18], ebx
// 0048366a  753f                 jne 0x4836ab
// 0048366c  8d542420             lea edx, [esp + 0x20]
// 00483670  52                   push edx
// 00483671  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00483678  e8c3010800           call 0x503840
// 0048367d  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 00483683  68e49c7900           push 0x799ce4
// 00483688  83cb02               or ebx, 2
// 0048368b  50                   push eax
// 0048368c  c784246801000004000000 mov dword ptr [esp + 0x168], 4
// 00483697  895c2420             mov dword ptr [esp + 0x20], ebx
// 0048369b  ffd7                 call edi
// 0048369d  83c408               add esp, 8
// 004836a0  84c0                 test al, al
// 004836a2  740d                 je 0x4836b1
// 004836a4  c644241701           mov byte ptr [esp + 0x17], 1
// 004836a9  eb0b                 jmp 0x4836b6
// 004836ab  8b3dd8e67700         mov edi, dword ptr [0x77e6d8]
// 004836b1  c644241700           mov byte ptr [esp + 0x17], 0
// 004836b6  f6c302               test bl, 2
// 004836b9  c784246001000003000000 mov dword ptr [esp + 0x160], 3
// 004836c4  7411                 je 0x4836d7
// 004836c6  83e3fd               and ebx, 0xfffffffd
// 004836c9  8d4c2420             lea ecx, [esp + 0x20]
// 004836cd  895c2418             mov dword ptr [esp + 0x18], ebx
// 004836d1  ff158ce77700         call dword ptr [0x77e78c]
// 004836d7  f6c301               test bl, 1
// 004836da  bd02000000           mov ebp, 2
// 004836df  89ac2460010000       mov dword ptr [esp + 0x160], ebp
// 004836e6  7410                 je 0x4836f8
// 004836e8  8d8c2428010000       lea ecx, [esp + 0x128]
// 004836ef  83e3fe               and ebx, 0xfffffffe
// 004836f2  ff158ce77700         call dword ptr [0x77e78c]
// 004836f8  807c241700           cmp byte ptr [esp + 0x17], 0
// 004836fd  0f84b6030000         je 0x483ab9
// 00483703  68e49c7900           push 0x799ce4
// 00483708  8d4c2424             lea ecx, [esp + 0x24]
// 0048370c  ff1578e77700         call dword ptr [0x77e778]
// 00483712  8d442420             lea eax, [esp + 0x20]
// 00483716  50                   push eax
// 00483717  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048371e  c684246401000005     mov byte ptr [esp + 0x164], 5
// 00483726  e895ff0700           call 0x5036c0
// 0048372b  8d4c2420             lea ecx, [esp + 0x20]
// 0048372f  c684246001000002     mov byte ptr [esp + 0x160], 2
// 00483737  ff158ce77700         call dword ptr [0x77e78c]
// 0048373d  8d4c2478             lea ecx, [esp + 0x78]
// 00483741  51                   push ecx
// 00483742  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00483749  e8f2000800           call 0x503840
// 0048374e  83cb04               or ebx, 4
// 00483751  397024               cmp dword ptr [eax + 0x24], esi
// 00483754  c684246001000006     mov byte ptr [esp + 0x160], 6
// 0048375c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00483760  7537                 jne 0x483799
// 00483762  8d542420             lea edx, [esp + 0x20]
// 00483766  52                   push edx
// 00483767  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048376e  e8cd000800           call 0x503840
// 00483773  68dc9c7900           push 0x799cdc
// 00483778  83cb08               or ebx, 8
// 0048377b  50                   push eax
// 0048377c  c784246801000007000000 mov dword ptr [esp + 0x168], 7
// 00483787  895c2420             mov dword ptr [esp + 0x20], ebx
// 0048378b  ffd7                 call edi
// 0048378d  83c408               add esp, 8
// 00483790  84c0                 test al, al
// 00483792  c644241701           mov byte ptr [esp + 0x17], 1
// 00483797  7505                 jne 0x48379e
// 00483799  c644241700           mov byte ptr [esp + 0x17], 0
// 0048379e  f6c308               test bl, 8
// 004837a1  c784246001000006000000 mov dword ptr [esp + 0x160], 6
// 004837ac  7411                 je 0x4837bf
// 004837ae  83e3f7               and ebx, 0xfffffff7
// 004837b1  8d4c2420             lea ecx, [esp + 0x20]
// 004837b5  895c2418             mov dword ptr [esp + 0x18], ebx
// 004837b9  ff158ce77700         call dword ptr [0x77e78c]
// 004837bf  f6c304               test bl, 4
// 004837c2  89ac2460010000       mov dword ptr [esp + 0x160], ebp
// 004837c9  740d                 je 0x4837d8
// 004837cb  8d4c2478             lea ecx, [esp + 0x78]
// 004837cf  83e3fb               and ebx, 0xfffffffb
// 004837d2  ff158ce77700         call dword ptr [0x77e78c]
// 004837d8  807c241700           cmp byte ptr [esp + 0x17], 0
// 004837dd  743a                 je 0x483819
// 004837df  68dc9c7900           push 0x799cdc
// 004837e4  8d4c2424             lea ecx, [esp + 0x24]
// 004837e8  ff1578e77700         call dword ptr [0x77e778]
// 004837ee  8d442420             lea eax, [esp + 0x20]
// 004837f2  50                   push eax
// 004837f3  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004837fa  c684246401000008     mov byte ptr [esp + 0x164], 8
// 00483802  e8b9fe0700           call 0x5036c0
// 00483807  8d4c2420             lea ecx, [esp + 0x20]
// 0048380b  c684246001000002     mov byte ptr [esp + 0x160], 2
// 00483813  ff158ce77700         call dword ptr [0x77e78c]
// 00483819  8d4c2420             lea ecx, [esp + 0x20]
// 0048381d  51                   push ecx
// 0048381e  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00483825  e816fe0700           call 0x503640
// 0048382a  8bf0                 mov esi, eax
// 0048382c  c684246001000009     mov byte ptr [esp + 0x160], 9
// 00483834  e8d7d0ffff           call 0x480910
// 00483839  8d4c2420             lea ecx, [esp + 0x20]
// 0048383d  8be8                 mov ebp, eax
// 0048383f  c684246001000002     mov byte ptr [esp + 0x160], 2
// 00483847  ff158ce77700         call dword ptr [0x77e78c]
// 0048384d  8d942428010000       lea edx, [esp + 0x128]
// 00483854  52                   push edx
// 00483855  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048385c  e8dffd0700           call 0x503640
// 00483861  8d442420             lea eax, [esp + 0x20]
// 00483865  50                   push eax
// 00483866  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048386d  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 00483875  e8c6ff0700           call 0x503840
// 0048387a  83cb10               or ebx, 0x10
// 0048387d  83782401             cmp dword ptr [eax + 0x24], 1
// 00483881  c68424600100000b     mov byte ptr [esp + 0x160], 0xb
// 00483889  895c2418             mov dword ptr [esp + 0x18], ebx
// 0048388d  7537                 jne 0x4838c6
// 0048388f  8d4c2478             lea ecx, [esp + 0x78]
// 00483893  51                   push ecx
// 00483894  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048389b  e8a0ff0700           call 0x503840
// 004838a0  68d89c7900           push 0x799cd8
// 004838a5  83cb20               or ebx, 0x20
// 004838a8  50                   push eax
// 004838a9  c78424680100000c000000 mov dword ptr [esp + 0x168], 0xc
// 004838b4  895c2420             mov dword ptr [esp + 0x20], ebx
// 004838b8  ffd7                 call edi
// 004838ba  83c408               add esp, 8
// 004838bd  84c0                 test al, al
// 004838bf  c644241701           mov byte ptr [esp + 0x17], 1
// 004838c4  7505                 jne 0x4838cb
// 004838c6  c644241700           mov byte ptr [esp + 0x17], 0
// 004838cb  f6c320               test bl, 0x20
// 004838ce  c78424600100000b000000 mov dword ptr [esp + 0x160], 0xb
// 004838d9  7411                 je 0x4838ec
// 004838db  83e3df               and ebx, 0xffffffdf
// 004838de  8d4c2478             lea ecx, [esp + 0x78]
// 004838e2  895c2418             mov dword ptr [esp + 0x18], ebx
// 004838e6  ff158ce77700         call dword ptr [0x77e78c]
// 004838ec  f6c310               test bl, 0x10
// 004838ef  c78424600100000a000000 mov dword ptr [esp + 0x160], 0xa
// 004838fa  740d                 je 0x483909
// 004838fc  8d4c2420             lea ecx, [esp + 0x20]
// 00483900  83e3ef               and ebx, 0xffffffef
// 00483903  ff158ce77700         call dword ptr [0x77e78c]
// 00483909  807c241700           cmp byte ptr [esp + 0x17], 0
// 0048390e  0f8482000000         je 0x483996
// 00483914  68d89c7900           push 0x799cd8
// 00483919  8d4c2424             lea ecx, [esp + 0x24]
// 0048391d  ff1578e77700         call dword ptr [0x77e778]
// 00483923  8d542420             lea edx, [esp + 0x20]
// 00483927  52                   push edx
// 00483928  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 0048392f  c68424640100000d     mov byte ptr [esp + 0x164], 0xd
// 00483937  e884fd0700           call 0x5036c0
// 0048393c  8d4c2420             lea ecx, [esp + 0x20]
// 00483940  c68424600100000a     mov byte ptr [esp + 0x160], 0xa
// 00483948  ff158ce77700         call dword ptr [0x77e78c]
// 0048394e  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00483955  e886fa0700           call 0x5033e0
// 0048395a  ddd8                 fstp st(0)
// 0048395c  68d49c7900           push 0x799cd4
// 00483961  8d4c2424             lea ecx, [esp + 0x24]
// 00483965  ff1578e77700         call dword ptr [0x77e778]
// 0048396b  8d442420             lea eax, [esp + 0x20]
// 0048396f  50                   push eax
// 00483970  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00483977  c68424640100000e     mov byte ptr [esp + 0x164], 0xe
// 0048397f  e83cfd0700           call 0x5036c0
// 00483984  8d4c2420             lea ecx, [esp + 0x20]
// 00483988  c68424600100000a     mov byte ptr [esp + 0x160], 0xa
// 00483990  ff158ce77700         call dword ptr [0x77e78c]
// 00483996  68f85f7800           push 0x785ff8
// 0048399b  8d4c2424             lea ecx, [esp + 0x24]
// 0048399f  ff1578e77700         call dword ptr [0x77e778]
// 004839a5  8d4c2420             lea ecx, [esp + 0x20]
// 004839a9  51                   push ecx
// 004839aa  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 004839b1  c68424640100000f     mov byte ptr [esp + 0x164], 0xf
// 004839b9  e802fd0700           call 0x5036c0
// 004839be  8d4c2420             lea ecx, [esp + 0x20]
// 004839c2  c68424600100000a     mov byte ptr [esp + 0x160], 0xa
// 004839ca  ff158ce77700         call dword ptr [0x77e78c]
// 004839d0  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004839d4  33f6                 xor esi, esi
// 004839d6  39b294010000         cmp dword ptr [edx + 0x194], esi
// 004839dc  7e3d                 jle 0x483a1b
// 004839de  33ff                 xor edi, edi
// 004839e0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004839e4  8b8090010000         mov eax, dword ptr [eax + 0x190]
// 004839ea  03c7                 add eax, edi
// 004839ec  8d8c2428010000       lea ecx, [esp + 0x128]
// 004839f3  51                   push ecx
// 004839f4  83c008               add eax, 8
// 004839f7  50                   push eax
// 004839f8  ff15ece67700         call dword ptr [0x77e6ec]
// 004839fe  83c408               add esp, 8
// 00483a01  84c0                 test al, al
// 00483a03  0f859f000000         jne 0x483aa8
// 00483a09  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00483a0d  83c601               add esi, 1
// 00483a10  83c730               add edi, 0x30
// 00483a13  3bb294010000         cmp esi, dword ptr [edx + 0x194]
// 00483a19  7cc5                 jl 0x4839e0
// 00483a1b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00483a1f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00483a25  81c690010000         add esi, 0x190
// 00483a2b  6a00                 push 0
// 00483a2d  83c001               add eax, 1
// 00483a30  50                   push eax
// 00483a31  8bce                 mov ecx, esi
// 00483a33  e8e8d4ffff           call 0x480f20
// 00483a38  8b4604               mov eax, dword ptr [esi + 4]
// 00483a3b  8b16                 mov edx, dword ptr [esi]
// 00483a3d  8d0c40               lea ecx, [eax + eax*2]
// 00483a40  c1e104               shl ecx, 4
// 00483a43  c64411d001           mov byte ptr [ecx + edx - 0x30], 1
// 00483a48  8b4604               mov eax, dword ptr [esi + 4]
// 00483a4b  8b0e                 mov ecx, dword ptr [esi]
// 00483a4d  8d0440               lea eax, [eax + eax*2]
// 00483a50  c1e004               shl eax, 4
// 00483a53  83cfff               or edi, 0xffffffff
// 00483a56  897c08d4             mov dword ptr [eax + ecx - 0x2c], edi
// 00483a5a  8b4604               mov eax, dword ptr [esi + 4]
// 00483a5d  8b0e                 mov ecx, dword ptr [esi]
// 00483a5f  8d0440               lea eax, [eax + eax*2]
// 00483a62  8d942428010000       lea edx, [esp + 0x128]
// 00483a69  c1e004               shl eax, 4
// 00483a6c  52                   push edx
// 00483a6d  8d4c08d8             lea ecx, [eax + ecx - 0x28]
// 00483a71  ff154ce77700         call dword ptr [0x77e74c]
// 00483a77  8b4604               mov eax, dword ptr [esi + 4]
// 00483a7a  8d1440               lea edx, [eax + eax*2]
// 00483a7d  8b06                 mov eax, dword ptr [esi]
// 00483a7f  c1e204               shl edx, 4
// 00483a82  c74402f801000000     mov dword ptr [edx + eax - 8], 1
// 00483a8a  8b4604               mov eax, dword ptr [esi + 4]
// 00483a8d  8b16                 mov edx, dword ptr [esi]
// 00483a8f  8d0c40               lea ecx, [eax + eax*2]
// 00483a92  c1e104               shl ecx, 4
// 00483a95  896c11f4             mov dword ptr [ecx + edx - 0xc], ebp
// 00483a99  8b4604               mov eax, dword ptr [esi + 4]
// 00483a9c  8b0e                 mov ecx, dword ptr [esi]
// 00483a9e  8d0440               lea eax, [eax + eax*2]
// 00483aa1  c1e004               shl eax, 4
// 00483aa4  897c08fc             mov dword ptr [eax + ecx - 4], edi
// 00483aa8  c684246001000002     mov byte ptr [esp + 0x160], 2
// 00483ab0  8d8c2428010000       lea ecx, [esp + 0x128]
// 00483ab7  eb1b                 jmp 0x483ad4
// 00483ab9  8d9424a4000000       lea edx, [esp + 0xa4]
// 00483ac0  52                   push edx
// 00483ac1  8d8c24d4000000       lea ecx, [esp + 0xd4]
// 00483ac8  e8e3f30700           call 0x502eb0
// 00483acd  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00483ad4  ff158ce77700         call dword ptr [0x77e78c]
// 00483ada  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00483ae1  e84afe0700           call 0x503930
// 00483ae6  84c0                 test al, al
// 00483ae8  0f8552fbffff         jne 0x483640
// 00483aee  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00483af5  c7842460010000ffffffff mov dword ptr [esp + 0x160], 0xffffffff
// 00483b00  e8abf3ffff           call 0x482eb0
// 00483b05  8b8c2458010000       mov ecx, dword ptr [esp + 0x158]
// 00483b0c  64890d00000000       mov dword ptr fs:[0], ecx
// 00483b13  59                   pop ecx
// 00483b14  5f                   pop edi
// 00483b15  5e                   pop esi
// 00483b16  5d                   pop ebp
// 00483b17  5b                   pop ebx
// 00483b18  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 00483b1f  33cc                 xor ecx, esp
// 00483b21  e880b31900           call 0x61eea6
// 00483b26  81c450010000         add esp, 0x150
// 00483b2c  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?addUniformsFromCode@VertexAndPixelShader@G3D@@IAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
