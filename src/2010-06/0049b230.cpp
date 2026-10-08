// from server: 100% by auto
// roc 2010-06 0049b230  unit: G3D::VertexAndPixelShader  size: 1363 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049b230
//
// 0049b230  6aff                 push -1
// 0049b232  6810739800           push 0x987310
// 0049b237  64a100000000         mov eax, dword ptr fs:[0]
// 0049b23d  50                   push eax
// 0049b23e  64892500000000       mov dword ptr fs:[0], esp
// 0049b245  81ec4c010000         sub esp, 0x14c
// 0049b24b  53                   push ebx
// 0049b24c  33db                 xor ebx, ebx
// 0049b24e  895c2408             mov dword ptr [esp + 8], ebx
// 0049b252  894c240c             mov dword ptr [esp + 0xc], ecx
// 0049b256  8d4c2444             lea ecx, [esp + 0x44]
// 0049b25a  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0049b25f  c644243d01           mov byte ptr [esp + 0x3d], 1
// 0049b264  c644243e01           mov byte ptr [esp + 0x3e], 1
// 0049b269  885c243f             mov byte ptr [esp + 0x3f], bl
// 0049b26d  885c2440             mov byte ptr [esp + 0x40], bl
// 0049b271  c644244101           mov byte ptr [esp + 0x41], 1
// 0049b276  c644244201           mov byte ptr [esp + 0x42], 1
// 0049b27b  ff1504a49e00         call dword ptr [0x9ea404]
// 0049b281  895c2460             mov dword ptr [esp + 0x60], ebx
// 0049b285  885c2464             mov byte ptr [esp + 0x64], bl
// 0049b289  8b8c2460010000       mov ecx, dword ptr [esp + 0x160]
// 0049b290  8d44243c             lea eax, [esp + 0x3c]
// 0049b294  50                   push eax
// 0049b295  51                   push ecx
// 0049b296  53                   push ebx
// 0049b297  8d4c2474             lea ecx, [esp + 0x74]
// 0049b29b  899c2464010000       mov dword ptr [esp + 0x164], ebx
// 0049b2a2  e8392c0c00           call 0x55dee0
// 0049b2a7  8d4c2444             lea ecx, [esp + 0x44]
// 0049b2ab  c684245801000002     mov byte ptr [esp + 0x158], 2
// 0049b2b3  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b2b9  8d4c2468             lea ecx, [esp + 0x68]
// 0049b2bd  e83e330c00           call 0x55e600
// 0049b2c2  84c0                 test al, al
// 0049b2c4  0f848d040000         je 0x49b757
// 0049b2ca  55                   push ebp
// 0049b2cb  56                   push esi
// 0049b2cc  57                   push edi
// 0049b2cd  8d4900               lea ecx, [ecx]
// 0049b2d0  8d9424d8000000       lea edx, [esp + 0xd8]
// 0049b2d7  52                   push edx
// 0049b2d8  8d4c2478             lea ecx, [esp + 0x78]
// 0049b2dc  e85f320c00           call 0x55e540
// 0049b2e1  be01000000           mov esi, 1
// 0049b2e6  0bde                 or ebx, esi
// 0049b2e8  c684246401000003     mov byte ptr [esp + 0x164], 3
// 0049b2f0  895c2414             mov dword ptr [esp + 0x14], ebx
// 0049b2f4  397024               cmp dword ptr [eax + 0x24], esi
// 0049b2f7  753c                 jne 0x49b335
// 0049b2f9  8d44241c             lea eax, [esp + 0x1c]
// 0049b2fd  50                   push eax
// 0049b2fe  8d4c2478             lea ecx, [esp + 0x78]
// 0049b302  e839320c00           call 0x55e540
// 0049b307  8b3d58a49e00         mov edi, dword ptr [0x9ea458]
// 0049b30d  680478a100           push 0xa17804
// 0049b312  83cb02               or ebx, 2
// 0049b315  50                   push eax
// 0049b316  c784246c01000004000000 mov dword ptr [esp + 0x16c], 4
// 0049b321  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0049b325  ffd7                 call edi
// 0049b327  83c408               add esp, 8
// 0049b32a  84c0                 test al, al
// 0049b32c  740d                 je 0x49b33b
// 0049b32e  c644241301           mov byte ptr [esp + 0x13], 1
// 0049b333  eb0b                 jmp 0x49b340
// 0049b335  8b3d58a49e00         mov edi, dword ptr [0x9ea458]
// 0049b33b  c644241300           mov byte ptr [esp + 0x13], 0
// 0049b340  c784246401000003000000 mov dword ptr [esp + 0x164], 3
// 0049b34b  f6c302               test bl, 2
// 0049b34e  7411                 je 0x49b361
// 0049b350  83e3fd               and ebx, 0xfffffffd
// 0049b353  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b357  895c2414             mov dword ptr [esp + 0x14], ebx
// 0049b35b  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b361  bd02000000           mov ebp, 2
// 0049b366  89ac2464010000       mov dword ptr [esp + 0x164], ebp
// 0049b36d  f6c301               test bl, 1
// 0049b370  7410                 je 0x49b382
// 0049b372  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 0049b379  83e3fe               and ebx, 0xfffffffe
// 0049b37c  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b382  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049b387  0f8498030000         je 0x49b725
// 0049b38d  680478a100           push 0xa17804
// 0049b392  8d4c2420             lea ecx, [esp + 0x20]
// 0049b396  ff1510a49e00         call dword ptr [0x9ea410]
// 0049b39c  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b3a0  51                   push ecx
// 0049b3a1  8d4c2478             lea ecx, [esp + 0x78]
// 0049b3a5  c684246801000005     mov byte ptr [esp + 0x168], 5
// 0049b3ad  e85e300c00           call 0x55e410
// 0049b3b2  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b3b6  c684246401000002     mov byte ptr [esp + 0x164], 2
// 0049b3be  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b3c4  8d942404010000       lea edx, [esp + 0x104]
// 0049b3cb  52                   push edx
// 0049b3cc  8d4c2478             lea ecx, [esp + 0x78]
// 0049b3d0  e86b310c00           call 0x55e540
// 0049b3d5  83cb04               or ebx, 4
// 0049b3d8  c684246401000006     mov byte ptr [esp + 0x164], 6
// 0049b3e0  895c2414             mov dword ptr [esp + 0x14], ebx
// 0049b3e4  397024               cmp dword ptr [eax + 0x24], esi
// 0049b3e7  7534                 jne 0x49b41d
// 0049b3e9  8d44241c             lea eax, [esp + 0x1c]
// 0049b3ed  50                   push eax
// 0049b3ee  8d4c2478             lea ecx, [esp + 0x78]
// 0049b3f2  e849310c00           call 0x55e540
// 0049b3f7  68fc77a100           push 0xa177fc
// 0049b3fc  83cb08               or ebx, 8
// 0049b3ff  50                   push eax
// 0049b400  c784246c01000007000000 mov dword ptr [esp + 0x16c], 7
// 0049b40b  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0049b40f  ffd7                 call edi
// 0049b411  83c408               add esp, 8
// 0049b414  c644241301           mov byte ptr [esp + 0x13], 1
// 0049b419  84c0                 test al, al
// 0049b41b  7505                 jne 0x49b422
// 0049b41d  c644241300           mov byte ptr [esp + 0x13], 0
// 0049b422  c784246401000006000000 mov dword ptr [esp + 0x164], 6
// 0049b42d  f6c308               test bl, 8
// 0049b430  7411                 je 0x49b443
// 0049b432  83e3f7               and ebx, 0xfffffff7
// 0049b435  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b439  895c2414             mov dword ptr [esp + 0x14], ebx
// 0049b43d  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b443  89ac2464010000       mov dword ptr [esp + 0x164], ebp
// 0049b44a  f6c304               test bl, 4
// 0049b44d  7410                 je 0x49b45f
// 0049b44f  8d8c2404010000       lea ecx, [esp + 0x104]
// 0049b456  83e3fb               and ebx, 0xfffffffb
// 0049b459  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b45f  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049b464  7437                 je 0x49b49d
// 0049b466  68fc77a100           push 0xa177fc
// 0049b46b  8d4c2420             lea ecx, [esp + 0x20]
// 0049b46f  ff1510a49e00         call dword ptr [0x9ea410]
// 0049b475  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b479  51                   push ecx
// 0049b47a  8d4c2478             lea ecx, [esp + 0x78]
// 0049b47e  c684246801000008     mov byte ptr [esp + 0x168], 8
// 0049b486  e8852f0c00           call 0x55e410
// 0049b48b  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b48f  c684246401000002     mov byte ptr [esp + 0x164], 2
// 0049b497  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b49d  8d54241c             lea edx, [esp + 0x1c]
// 0049b4a1  52                   push edx
// 0049b4a2  8d4c2478             lea ecx, [esp + 0x78]
// 0049b4a6  e8f52e0c00           call 0x55e3a0
// 0049b4ab  8bf0                 mov esi, eax
// 0049b4ad  c684246401000009     mov byte ptr [esp + 0x164], 9
// 0049b4b5  e856d0ffff           call 0x498510
// 0049b4ba  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b4be  8be8                 mov ebp, eax
// 0049b4c0  c684246401000002     mov byte ptr [esp + 0x164], 2
// 0049b4c8  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b4ce  8d8424d8000000       lea eax, [esp + 0xd8]
// 0049b4d5  50                   push eax
// 0049b4d6  8d4c2478             lea ecx, [esp + 0x78]
// 0049b4da  e8c12e0c00           call 0x55e3a0
// 0049b4df  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b4e3  51                   push ecx
// 0049b4e4  8d4c2478             lea ecx, [esp + 0x78]
// 0049b4e8  c68424680100000a     mov byte ptr [esp + 0x168], 0xa
// 0049b4f0  e84b300c00           call 0x55e540
// 0049b4f5  83cb10               or ebx, 0x10
// 0049b4f8  83782401             cmp dword ptr [eax + 0x24], 1
// 0049b4fc  c68424640100000b     mov byte ptr [esp + 0x164], 0xb
// 0049b504  895c2414             mov dword ptr [esp + 0x14], ebx
// 0049b508  7537                 jne 0x49b541
// 0049b50a  8d942404010000       lea edx, [esp + 0x104]
// 0049b511  52                   push edx
// 0049b512  8d4c2478             lea ecx, [esp + 0x78]
// 0049b516  e825300c00           call 0x55e540
// 0049b51b  68f877a100           push 0xa177f8
// 0049b520  83cb20               or ebx, 0x20
// 0049b523  50                   push eax
// 0049b524  c784246c0100000c000000 mov dword ptr [esp + 0x16c], 0xc
// 0049b52f  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0049b533  ffd7                 call edi
// 0049b535  83c408               add esp, 8
// 0049b538  c644241301           mov byte ptr [esp + 0x13], 1
// 0049b53d  84c0                 test al, al
// 0049b53f  7505                 jne 0x49b546
// 0049b541  c644241300           mov byte ptr [esp + 0x13], 0
// 0049b546  c78424640100000b000000 mov dword ptr [esp + 0x164], 0xb
// 0049b551  f6c320               test bl, 0x20
// 0049b554  7414                 je 0x49b56a
// 0049b556  83e3df               and ebx, 0xffffffdf
// 0049b559  8d8c2404010000       lea ecx, [esp + 0x104]
// 0049b560  895c2414             mov dword ptr [esp + 0x14], ebx
// 0049b564  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b56a  c78424640100000a000000 mov dword ptr [esp + 0x164], 0xa
// 0049b575  f6c310               test bl, 0x10
// 0049b578  740d                 je 0x49b587
// 0049b57a  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b57e  83e3ef               and ebx, 0xffffffef
// 0049b581  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b587  807c241300           cmp byte ptr [esp + 0x13], 0
// 0049b58c  7479                 je 0x49b607
// 0049b58e  68f877a100           push 0xa177f8
// 0049b593  8d4c2420             lea ecx, [esp + 0x20]
// 0049b597  ff1510a49e00         call dword ptr [0x9ea410]
// 0049b59d  8d44241c             lea eax, [esp + 0x1c]
// 0049b5a1  50                   push eax
// 0049b5a2  8d4c2478             lea ecx, [esp + 0x78]
// 0049b5a6  c68424680100000d     mov byte ptr [esp + 0x168], 0xd
// 0049b5ae  e85d2e0c00           call 0x55e410
// 0049b5b3  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b5b7  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 0049b5bf  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b5c5  8d4c2474             lea ecx, [esp + 0x74]
// 0049b5c9  e8922b0c00           call 0x55e160
// 0049b5ce  ddd8                 fstp st(0)
// 0049b5d0  68f477a100           push 0xa177f4
// 0049b5d5  8d4c2420             lea ecx, [esp + 0x20]
// 0049b5d9  ff1510a49e00         call dword ptr [0x9ea410]
// 0049b5df  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b5e3  51                   push ecx
// 0049b5e4  8d4c2478             lea ecx, [esp + 0x78]
// 0049b5e8  c68424680100000e     mov byte ptr [esp + 0x168], 0xe
// 0049b5f0  e81b2e0c00           call 0x55e410
// 0049b5f5  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b5f9  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 0049b601  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b607  6850c5a000           push 0xa0c550
// 0049b60c  8d4c2420             lea ecx, [esp + 0x20]
// 0049b610  ff1510a49e00         call dword ptr [0x9ea410]
// 0049b616  8d54241c             lea edx, [esp + 0x1c]
// 0049b61a  52                   push edx
// 0049b61b  8d4c2478             lea ecx, [esp + 0x78]
// 0049b61f  c68424680100000f     mov byte ptr [esp + 0x168], 0xf
// 0049b627  e8e42d0c00           call 0x55e410
// 0049b62c  8d4c241c             lea ecx, [esp + 0x1c]
// 0049b630  c68424640100000a     mov byte ptr [esp + 0x164], 0xa
// 0049b638  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b63e  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049b642  33f6                 xor esi, esi
// 0049b644  39b094010000         cmp dword ptr [eax + 0x194], esi
// 0049b64a  7e3d                 jle 0x49b689
// 0049b64c  33ff                 xor edi, edi
// 0049b64e  8bff                 mov edi, edi
// 0049b650  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049b654  8b8190010000         mov eax, dword ptr [ecx + 0x190]
// 0049b65a  03c7                 add eax, edi
// 0049b65c  8d9424d8000000       lea edx, [esp + 0xd8]
// 0049b663  52                   push edx
// 0049b664  83c008               add eax, 8
// 0049b667  50                   push eax
// 0049b668  ff158ca49e00         call dword ptr [0x9ea48c]
// 0049b66e  83c408               add esp, 8
// 0049b671  84c0                 test al, al
// 0049b673  0f859b000000         jne 0x49b714
// 0049b679  8b442418             mov eax, dword ptr [esp + 0x18]
// 0049b67d  46                   inc esi
// 0049b67e  83c730               add edi, 0x30
// 0049b681  3bb094010000         cmp esi, dword ptr [eax + 0x194]
// 0049b687  7cc7                 jl 0x49b650
// 0049b689  8b742418             mov esi, dword ptr [esp + 0x18]
// 0049b68d  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 0049b693  81c690010000         add esi, 0x190
// 0049b699  41                   inc ecx
// 0049b69a  6a00                 push 0
// 0049b69c  51                   push ecx
// 0049b69d  8bce                 mov ecx, esi
// 0049b69f  e8acd4ffff           call 0x498b50
// 0049b6a4  8b4604               mov eax, dword ptr [esi + 4]
// 0049b6a7  8d1440               lea edx, [eax + eax*2]
// 0049b6aa  8b06                 mov eax, dword ptr [esi]
// 0049b6ac  c1e204               shl edx, 4
// 0049b6af  c64402d001           mov byte ptr [edx + eax - 0x30], 1
// 0049b6b4  8b4604               mov eax, dword ptr [esi + 4]
// 0049b6b7  8b16                 mov edx, dword ptr [esi]
// 0049b6b9  8d0c40               lea ecx, [eax + eax*2]
// 0049b6bc  c1e104               shl ecx, 4
// 0049b6bf  8d8424d8000000       lea eax, [esp + 0xd8]
// 0049b6c6  83cfff               or edi, 0xffffffff
// 0049b6c9  897c11d4             mov dword ptr [ecx + edx - 0x2c], edi
// 0049b6cd  8b16                 mov edx, dword ptr [esi]
// 0049b6cf  50                   push eax
// 0049b6d0  8b4604               mov eax, dword ptr [esi + 4]
// 0049b6d3  8d0c40               lea ecx, [eax + eax*2]
// 0049b6d6  c1e104               shl ecx, 4
// 0049b6d9  8d4c11d8             lea ecx, [ecx + edx - 0x28]
// 0049b6dd  ff1568a49e00         call dword ptr [0x9ea468]
// 0049b6e3  8b4604               mov eax, dword ptr [esi + 4]
// 0049b6e6  8b0e                 mov ecx, dword ptr [esi]
// 0049b6e8  8d0440               lea eax, [eax + eax*2]
// 0049b6eb  c1e004               shl eax, 4
// 0049b6ee  c74408f801000000     mov dword ptr [eax + ecx - 8], 1
// 0049b6f6  8b4604               mov eax, dword ptr [esi + 4]
// 0049b6f9  8d1440               lea edx, [eax + eax*2]
// 0049b6fc  8b06                 mov eax, dword ptr [esi]
// 0049b6fe  c1e204               shl edx, 4
// 0049b701  896c02f4             mov dword ptr [edx + eax - 0xc], ebp
// 0049b705  8b4604               mov eax, dword ptr [esi + 4]
// 0049b708  8b16                 mov edx, dword ptr [esi]
// 0049b70a  8d0c40               lea ecx, [eax + eax*2]
// 0049b70d  c1e104               shl ecx, 4
// 0049b710  897c11fc             mov dword ptr [ecx + edx - 4], edi
// 0049b714  c684246401000002     mov byte ptr [esp + 0x164], 2
// 0049b71c  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 0049b723  eb18                 jmp 0x49b73d
// 0049b725  8d842430010000       lea eax, [esp + 0x130]
// 0049b72c  50                   push eax
// 0049b72d  8d4c2478             lea ecx, [esp + 0x78]
// 0049b731  e88a260c00           call 0x55ddc0
// 0049b736  8d8c2430010000       lea ecx, [esp + 0x130]
// 0049b73d  ff1500a49e00         call dword ptr [0x9ea400]
// 0049b743  8d4c2474             lea ecx, [esp + 0x74]
// 0049b747  e8b42e0c00           call 0x55e600
// 0049b74c  84c0                 test al, al
// 0049b74e  0f857cfbffff         jne 0x49b2d0
// 0049b754  5f                   pop edi
// 0049b755  5e                   pop esi
// 0049b756  5d                   pop ebp
// 0049b757  8d4c2468             lea ecx, [esp + 0x68]
// 0049b75b  c7842458010000ffffffff mov dword ptr [esp + 0x158], 0xffffffff
// 0049b766  e875f2ffff           call 0x49a9e0
// 0049b76b  8b8c2450010000       mov ecx, dword ptr [esp + 0x150]
// 0049b772  5b                   pop ebx
// 0049b773  64890d00000000       mov dword ptr fs:[0], ecx
// 0049b77a  81c458010000         add esp, 0x158
// 0049b780  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?addUniformsFromCode@VertexAndPixelShader@G3D@@IAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
