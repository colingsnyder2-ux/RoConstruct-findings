// from server: 100% by auto
// roc 2008-06 004881b0  unit: G3D::VertexAndPixelShader  size: 1363 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004881b0
//
// 004881b0  6aff                 push -1
// 004881b2  68205b7c00           push 0x7c5b20
// 004881b7  64a100000000         mov eax, dword ptr fs:[0]
// 004881bd  50                   push eax
// 004881be  64892500000000       mov dword ptr fs:[0], esp
// 004881c5  81ec4c010000         sub esp, 0x14c
// 004881cb  53                   push ebx
// 004881cc  33db                 xor ebx, ebx
// 004881ce  895c2408             mov dword ptr [esp + 8], ebx
// 004881d2  894c240c             mov dword ptr [esp + 0xc], ecx
// 004881d6  8d4c2444             lea ecx, [esp + 0x44]
// 004881da  c644243c01           mov byte ptr [esp + 0x3c], 1
// 004881df  c644243d01           mov byte ptr [esp + 0x3d], 1
// 004881e4  c644243e01           mov byte ptr [esp + 0x3e], 1
// 004881e9  885c243f             mov byte ptr [esp + 0x3f], bl
// 004881ed  885c2440             mov byte ptr [esp + 0x40], bl
// 004881f1  c644244101           mov byte ptr [esp + 0x41], 1
// 004881f6  c644244201           mov byte ptr [esp + 0x42], 1
// 004881fb  ff1560248000         call dword ptr [0x802460]
// 00488201  895c2460             mov dword ptr [esp + 0x60], ebx
// 00488205  885c2464             mov byte ptr [esp + 0x64], bl
// 00488209  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 00488210  8d44243c             lea eax, [esp + 0x3c]
// 00488214  50                   push eax
// 00488215  51                   push ecx
// 00488216  53                   push ebx
// 00488217  8d4c2474             lea ecx, [esp + 0x74]
// 0048821b  899c2464010000       mov dword ptr [esp + 0x164], ebx
// 00488222  e829fa0800           call 0x517c50
// 00488227  8d4c2444             lea ecx, [esp + 0x44]
// 0048822b  c684245801000002     mov byte ptr [esp + 0x158], 2
// 00488233  ff1568248000         call dword ptr [0x802468]
// 00488239  8d4c2468             lea ecx, [esp + 0x68]
// 0048823d  e82e010900           call 0x518370
// 00488242  84c0                 test al, al
// 00488244  0f848d040000         je 0x4886d7
// 0048824a  55                   push ebp
// 0048824b  56                   push esi
// 0048824c  57                   push edi
// 0048824d  8d4900               lea ecx, [ecx]
// 00488250  8d9424d8000000       lea edx, [esp + 0xd8]
// 00488257  52                   push edx
// 00488258  8d4c2478             lea ecx, [esp + 0x78]
// 0048825c  e84f000900           call 0x5182b0
// 00488261  be01000000           mov esi, 1
// 00488266  0bde                 or ebx, esi
// 00488268  c684246401000003     mov byte ptr [esp + 0x164], 3
// 00488270  895c2414             mov dword ptr [esp + 0x14], ebx
// 00488274  397024               cmp dword ptr [eax + 0x24], esi
// 00488277  753c                 jne 0x4882b5
// 00488279  8d44241c             lea eax, [esp + 0x1c]
// 0048827d  50                   push eax
// 0048827e  8d4c2478             lea ecx, [esp + 0x78]
// 00488282  e829000900           call 0x5182b0
// 00488287  8b3d6c238000         mov edi, dword ptr [0x80236c]
// 0048828d  68c0128200           push 0x8212c0
// 00488292  83cb02               or ebx, 2
// 00488295  50                   push eax
// 00488296  c784246c01000004000000 mov dword ptr [esp + 0x16c], 4
// 004882a1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004882a5  ffd7                 call edi
// 004882a7  83c408               add esp, 8
// 004882aa  84c0                 test al, al
// 004882ac  740d                 je 0x4882bb
// 004882ae  c644241301           mov byte ptr [esp + 0x13], 1
// 004882b3  eb0b                 jmp 0x4882c0
// 004882b5  8b3d6c238000         mov edi, dword ptr [0x80236c]
// 004882bb  c644241300           mov byte ptr [esp + 0x13], 0
// 004882c0  c784246401000003000000 mov dword ptr [esp + 0x164], 3
// 004882cb  f6c302               test bl, 2
// 004882ce  7411                 je 0x4882e1
// 004882d0  83e3fd               and ebx, 0xfffffffd
// 004882d3  8d4c241c             lea ecx, [esp + 0x1c]
// 004882d7  895c2414             mov dword ptr [esp + 0x14], ebx
// 004882db  ff1568248000         call dword ptr [0x802468]
// 004882e1  bd02000000           mov ebp, 2
// 004882e6  89ac2464010000       mov dword ptr [esp + 0x164], ebp
// 004882ed  f6c301               test bl, 1
// 004882f0  7410                 je 0x488302
// 004882f2  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 004882f9  83e3fe               and ebx, 0xfffffffe
// 004882fc  ff1568248000         call dword ptr [0x802468]
// 00488302  807c241300           cmp byte ptr [esp + 0x13], 0
// 00488307  0f8498030000         je 0x4886a5
// 0048830d  68c0128200           push 0x8212c0
// 00488312  8d4c2420             lea ecx, [esp + 0x20]
// 00488316  ff1558248000         call dword ptr [0x802458]
// 0048831c  8d4c241c             lea ecx, [esp + 0x1c]
// 00488320  51                   push ecx
// 00488321  8d4c2478             lea ecx, [esp + 0x78]
// 00488325  c684246801000005     mov byte ptr [esp + 0x168], 5
// 0048832d  e84efe0800           call 0x518180
// 00488332  8d4c241c             lea ecx, [esp + 0x1c]
// 00488336  c684246401000002     mov byte ptr [esp + 0x164], 2
// 0048833e  ff1568248000         call dword ptr [0x802468]
// 00488344  8d942404010000       lea edx, [esp + 0x104]
// 0048834b  52                   push edx
// 0048834c  8d4c2478             lea ecx, [esp + 0x78]
// 00488350  e85bff0800           call 0x5182b0
// 00488355  83cb04               or ebx, 4
// 00488358  c684246401000006     mov byte ptr [esp + 0x164], 6
// 00488360  895c2414             mov dword ptr [esp + 0x14], ebx
// 00488364  397024               cmp dword ptr [eax + 0x24], esi
// 00488367  7534                 jne 0x48839d
// 00488369  8d44241c             lea eax, [esp + 0x1c]
// 0048836d  50                   push eax
// 0048836e  8d4c2478             lea ecx, [esp + 0x78]
// 00488372  e839ff0800           call 0x5182b0
// 00488377  68b8128200           push 0x8212b8
// 0048837c  83cb08               or ebx, 8
// 0048837f  50                   push eax
// 00488380  c784246c01000007000000 mov dword ptr [esp + 0x16c], 7
// 0048838b  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0048838f  ffd7                 call edi
// 00488391  83c408               add esp, 8
// 00488394  c644241301           mov byte ptr [esp + 0x13], 1
// 00488399  84c0                 test al, al
// 0048839b  7505                 jne 0x4883a2
// 0048839d  c644241300           mov byte ptr [esp + 0x13], 0
// 004883a2  c784246401000006000000 mov dword ptr [esp + 0x164], 6
// 004883ad  f6c308               test bl, 8
// 004883b0  7411                 je 0x4883c3
// 004883b2  83e3f7               and ebx, 0xfffffff7
// 004883b5  8d4c241c             lea ecx, [esp + 0x1c]
// 004883b9  895c2414             mov dword ptr [esp + 0x14], ebx
// 004883bd  ff1568248000         call dword ptr [0x802468]
// 004883c3  89ac2464010000       mov dword ptr [esp + 0x164], ebp
// 004883ca  f6c304               test bl, 4
// 004883cd  7410                 je 0x4883df
// 004883cf  8d8c2404010000       lea ecx, [esp + 0x104]
// 004883d6  83e3fb               and ebx, 0xfffffffb
// 004883d9  ff1568248000         call dword ptr [0x802468]
// 004883df  807c241300           cmp byte ptr [esp + 0x13], 0
// 004883e4  7437                 je 0x48841d
// 004883e6  68b8128200           push 0x8212b8
// 004883eb  8d4c2420             lea ecx, [esp + 0x20]
// 004883ef  ff1558248000         call dword ptr [0x802458]
// 004883f5  8d4c241c             lea ecx, [esp + 0x1c]
// 004883f9  51                   push ecx
// 004883fa  8d4c2478             lea ecx, [esp + 0x78]
// 004883fe  c684246801000008     mov byte ptr [esp + 0x168], 8
// 00488406  e875fd0800           call 0x518180
// 0048840b  8d4c241c             lea ecx, [esp + 0x1c]
// 0048840f  c684246401000002     mov byte ptr [esp + 0x164], 2
// 00488417  ff1568248000         call dword ptr [0x802468]
// 0048841d  8d54241c             lea edx, [esp + 0x1c]
// 00488421  52                   push edx
// 00488422  8d4c2478             lea ecx, [esp + 0x78]
// 00488426  e8e5fc0800           call 0x518110
// 0048842b  8bf0                 mov esi, eax
// 0048842d  c684246401000009     mov byte ptr [esp + 0x164], 9
// 00488435  e876d2ffff           call 0x4856b0
// 0048843a  8d4c241c             lea ecx, [esp + 0x1c]
// 0048843e  8be8                 mov ebp, eax
// 00488440  c684246401000002     mov byte ptr [esp + 0x164], 2
// 00488448  ff1568248000         call dword ptr [0x802468]
// 0048844e  8d8424d8000000       lea eax, [esp + 0xd8]
// 00488455  50                   push eax
// 00488456  8d4c2478             lea ecx, [esp + 0x78]
// 0048845a  e8b1fc0800           call 0x518110
// 0048845f  8d4c241c             lea ecx, [esp + 0x1c]
// 00488463  51                   push ecx
// 00488464  8d4c2478             lea ecx, [esp + 0x78]
// 00488468  c68424680100000a     mov byte ptr [esp + 0x168], 0xa
// 00488470  e83bfe0800           call 0x5182b0
// 00488475  83cb10               or ebx, 0x10
// 00488478  83782401             cmp dword ptr [eax + 0x24], 1
// 0048847c  c68424640100000b     mov byte ptr [esp + 0x164], 0xb
// 00488484  895c2414             mov dword ptr [esp + 0x14], ebx
// 00488488  7537                 jne 0x4884c1
// 0048848a  8d942404010000       lea edx, [esp + 0x104]
// 00488491  52                   push edx
// 00488492  8d4c2478             lea ecx, [esp + 0x78]
// 00488496  e815fe0800           call 0x5182b0
// 0048849b  68b4128200           push 0x8212b4
// 004884a0  83cb20               or ebx, 0x20
// 004884a3  50                   push eax
// 004884a4  c784246c0100000c000000 mov dword ptr [esp + 0x16c], 0xc
// 004884af  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004884b3  ffd7                 call edi
// 004884b5  83c408               add esp, 8
// 004884b8  c644241301           mov byte ptr [esp + 0x13], 1
// 004884bd  84c0                 test al, al
// 004884bf  7505                 jne 0x4884c6
// 004884c1  c644241300           mov byte ptr [esp + 0x13], 0
// 004884c6  c78424640100000b000000 mov dword ptr [esp + 0x164], 0xb
// 004884d1  f6c320               test bl, 0x20
// 004884d4  7414                 je 0x4884ea
// 004884d6  83e3df               and ebx, 0xffffffdf
// 004884d9  8d8c2404010000       lea ecx, [esp + 0x104]
// 004884e0  895c2414             mov dword ptr [esp + 0x14], ebx
// 004884e4  ff1568248000         call dword ptr [0x802468]
// 004884ea  c78424640100000a000000 mov dword ptr [esp + 0x164], 0xa
// 004884f5  f6c310               test bl, 0x10
// 004884f8  740d                 je 0x488507
// 004884fa  8d4c241c             lea ecx, [esp + 0x1c]
// 004884fe  83e3ef               and ebx, 0xffffffef
// 00488501  ff1568248000         call dword ptr [0x802468]
// 00488507  807c241300           cmp byte ptr [esp + 0x13], 0
// 0048850c  7479                 je 0x488587
// 0048850e  68b4128200           push 0x8212b4
// 00488513  8d4c2420             lea ecx, [esp + 0x20]
// 00488517  ff1558248000         call dword ptr [0x802458]
// 0048851d  8d44241c             lea eax, [esp + 0x1c]
// 00488521  50                   push eax
// 00488522  8d4c2478             lea ecx, [esp + 0x78]
// 00488526  c68424680100000d     mov byte ptr [esp + 0x168], 0xd
// 0048852e  e84dfc0800           call 0x518180
// 00488533  8d4c241c             lea ecx, [esp + 0x1c]
// 00488537  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 0048853f  ff1568248000         call dword ptr [0x802468]
// 00488545  8d4c2474             lea ecx, [esp + 0x74]
// 00488549  e882f90800           call 0x517ed0
// 0048854e  ddd8                 fstp st(0)
// 00488550  68b0128200           push 0x8212b0
// 00488555  8d4c2420             lea ecx, [esp + 0x20]
// 00488559  ff1558248000         call dword ptr [0x802458]
// 0048855f  8d4c241c             lea ecx, [esp + 0x1c]
// 00488563  51                   push ecx
// 00488564  8d4c2478             lea ecx, [esp + 0x78]
// 00488568  c68424680100000e     mov byte ptr [esp + 0x168], 0xe
// 00488570  e80bfc0800           call 0x518180
// 00488575  8d4c241c             lea ecx, [esp + 0x1c]
// 00488579  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 00488581  ff1568248000         call dword ptr [0x802468]
// 00488587  68ac128200           push 0x8212ac
// 0048858c  8d4c2420             lea ecx, [esp + 0x20]
// 00488590  ff1558248000         call dword ptr [0x802458]
// 00488596  8d54241c             lea edx, [esp + 0x1c]
// 0048859a  52                   push edx
// 0048859b  8d4c2478             lea ecx, [esp + 0x78]
// 0048859f  c68424680100000f     mov byte ptr [esp + 0x168], 0xf
// 004885a7  e8d4fb0800           call 0x518180
// 004885ac  8d4c241c             lea ecx, [esp + 0x1c]
// 004885b0  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 004885b8  ff1568248000         call dword ptr [0x802468]
// 004885be  8b442418             mov eax, dword ptr [esp + 0x18]
// 004885c2  33f6                 xor esi, esi
// 004885c4  39b094010000         cmp dword ptr [eax + 0x194], esi
// 004885ca  7e3d                 jle 0x488609
// 004885cc  33ff                 xor edi, edi
// 004885ce  8bff                 mov edi, edi
// 004885d0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004885d4  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 004885da  03c7                 add eax, edi
// 004885dc  8d9424d8000000       lea edx, [esp + 0xd8]
// 004885e3  52                   push edx
// 004885e4  83c008               add eax, 8
// 004885e7  50                   push eax
// 004885e8  ff1544248000         call dword ptr [0x802444]
// 004885ee  83c408               add esp, 8
// 004885f1  84c0                 test al, al
// 004885f3  0f859b000000         jne 0x488694
// 004885f9  8b442418             mov eax, dword ptr [esp + 0x18]
// 004885fd  46                   inc esi
// 004885fe  83c730               add edi, 0x30
// 00488601  3bb094010000         cmp esi, dword ptr [eax + 0x194]
// 00488607  7cc7                 jl 0x4885d0
// 00488609  8b742418             mov esi, dword ptr [esp + 0x18]
// 0048860d  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00488613  81c690010000         add esi, 0x190
// 00488619  41                   inc ecx
// 0048861a  6a00                 push 0
// 0048861c  51                   push ecx
// 0048861d  8bce                 mov ecx, esi
// 0048861f  e8ccd6ffff           call 0x485cf0
// 00488624  8b4604               mov eax, dword ptr [esi + 4]
// 00488627  8d1440               lea edx, [eax + eax*2]
// 0048862a  8b06                 mov eax, dword ptr [esi]
// 0048862c  c1e204               shl edx, 4
// 0048862f  c64402d001           mov byte ptr [edx + eax - 0x30], 1
// 00488634  8b4604               mov eax, dword ptr [esi + 4]
// 00488637  8b16                 mov edx, dword ptr [esi]
// 00488639  8d0c40               lea ecx, [eax + eax*2]
// 0048863c  c1e104               shl ecx, 4
// 0048863f  8d8424d8000000       lea eax, [esp + 0xd8]
// 00488646  83cfff               or edi, 0xffffffff
// 00488649  897c11d4             mov dword ptr [ecx + edx - 0x2c], edi
// 0048864d  8b16                 mov edx, dword ptr [esi]
// 0048864f  50                   push eax
// 00488650  8b4604               mov eax, dword ptr [esi + 4]
// 00488653  8d0c40               lea ecx, [eax + eax*2]
// 00488656  c1e104               shl ecx, 4
// 00488659  8d4c11d8             lea ecx, [ecx + edx - 0x28]
// 0048865d  ff150c248000         call dword ptr [0x80240c]
// 00488663  8b4604               mov eax, dword ptr [esi + 4]
// 00488666  8b0e                 mov ecx, dword ptr [esi]
// 00488668  8d0440               lea eax, [eax + eax*2]
// 0048866b  c1e004               shl eax, 4
// 0048866e  c74408f801000000     mov dword ptr [eax + ecx - 8], 1
// 00488676  8b4604               mov eax, dword ptr [esi + 4]
// 00488679  8d1440               lea edx, [eax + eax*2]
// 0048867c  8b06                 mov eax, dword ptr [esi]
// 0048867e  c1e204               shl edx, 4
// 00488681  896c02f4             mov dword ptr [edx + eax - 0xc], ebp
// 00488685  8b4604               mov eax, dword ptr [esi + 4]
// 00488688  8b16                 mov edx, dword ptr [esi]
// 0048868a  8d0c40               lea ecx, [eax + eax*2]
// 0048868d  c1e104               shl ecx, 4
// 00488690  897c11fc             mov dword ptr [ecx + edx - 4], edi
// 00488694  c684246401000002     mov byte ptr [esp + 0x164], 2
// 0048869c  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 004886a3  eb18                 jmp 0x4886bd
// 004886a5  8d842430010000       lea eax, [esp + 0x130]
// 004886ac  50                   push eax
// 004886ad  8d4c2478             lea ecx, [esp + 0x78]
// 004886b1  e87af40800           call 0x517b30
// 004886b6  8d8c2430010000       lea ecx, [esp + 0x130]
// 004886bd  ff1568248000         call dword ptr [0x802468]
// 004886c3  8d4c2474             lea ecx, [esp + 0x74]
// 004886c7  e8a4fc0800           call 0x518370
// 004886cc  84c0                 test al, al
// 004886ce  0f857cfbffff         jne 0x488250
// 004886d4  5f                   pop edi
// 004886d5  5e                   pop esi
// 004886d6  5d                   pop ebp
// 004886d7  8d4c2468             lea ecx, [esp + 0x68]
// 004886db  c7842458010000ffffffff mov dword ptr [esp + 0x158], 0xffffffff
// 004886e6  e815f4ffff           call 0x487b00
// 004886eb  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 004886f2  5b                   pop ebx
// 004886f3  64890d00000000       mov dword ptr fs:[0], ecx
// 004886fa  81c458010000         add esp, 0x158
// 00488700  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?addUniformsFromCode@VertexAndPixelShader@G3D@@IAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
