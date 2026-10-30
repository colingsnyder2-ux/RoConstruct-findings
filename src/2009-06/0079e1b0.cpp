// roc 2009-06 0079e1b0  unit: CXTPControlGalleryPaintManager  size: 3093 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079e1b0
//
// 0079e1b0  81ec84000000         sub esp, 0x84
// 0079e1b6  53                   push ebx
// 0079e1b7  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 0079e1be  8b4360               mov eax, dword ptr [ebx + 0x60]
// 0079e1c1  55                   push ebp
// 0079e1c2  56                   push esi
// 0079e1c3  57                   push edi
// 0079e1c4  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0079e1cb  85c0                 test eax, eax
// 0079e1cd  741d                 je 0x79e1ec
// 0079e1cf  83c9ff               or ecx, 0xffffffff
// 0079e1d2  83783000             cmp dword ptr [eax + 0x30], 0
// 0079e1d6  750b                 jne 0x79e1e3
// 0079e1d8  833800               cmp dword ptr [eax], 0
// 0079e1db  7506                 jne 0x79e1e3
// 0079e1dd  894c2410             mov dword ptr [esp + 0x10], ecx
// 0079e1e1  eb14                 jmp 0x79e1f7
// 0079e1e3  8b4358               mov eax, dword ptr [ebx + 0x58]
// 0079e1e6  89442410             mov dword ptr [esp + 0x10], eax
// 0079e1ea  eb0b                 jmp 0x79e1f7
// 0079e1ec  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 0079e1ef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0079e1f7  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0079e1fa  2b531c               sub edx, dword ptr [ebx + 0x1c]
// 0079e1fd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0079e201  85d2                 test edx, edx
// 0079e203  0f8eaf0b0000         jle 0x79edb8
// 0079e209  8b4308               mov eax, dword ptr [ebx + 8]
// 0079e20c  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0079e20f  2b4304               sub eax, dword ptr [ebx + 4]
// 0079e212  40                   inc eax
// 0079e213  85c0                 test eax, eax
// 0079e215  7e14                 jle 0x79e22b
// 0079e217  8b13                 mov edx, dword ptr [ebx]
// 0079e219  8b4204               mov eax, dword ptr [edx + 4]
// 0079e21c  8bcb                 mov ecx, ebx
// 0079e21e  ffd0                 call eax
// 0079e220  85c0                 test eax, eax
// 0079e222  7407                 je 0x79e22b
// 0079e224  bf01000000           mov edi, 1
// 0079e229  eb02                 jmp 0x79e22d
// 0079e22b  33ff                 xor edi, edi
// 0079e22d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 0079e230  8b4338               mov eax, dword ptr [ebx + 0x38]
// 0079e233  8bf1                 mov esi, ecx
// 0079e235  2bf0                 sub esi, eax
// 0079e237  2b4328               sub eax, dword ptr [ebx + 0x28]
// 0079e23a  8944244c             mov dword ptr [esp + 0x4c], eax
// 0079e23e  85ff                 test edi, edi
// 0079e240  7405                 je 0x79e247
// 0079e242  3b4b2c               cmp ecx, dword ptr [ebx + 0x2c]
// 0079e245  7e06                 jle 0x79e24d
// 0079e247  33f6                 xor esi, esi
// 0079e249  8974244c             mov dword ptr [esp + 0x4c], esi
// 0079e24d  8bcb                 mov ecx, ebx
// 0079e24f  e8cc230700           call 0x810620
// 0079e254  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 0079e258  89442448             mov dword ptr [esp + 0x48], eax
// 0079e25c  0f84b1050000         je 0x79e813
// 0079e262  8d4b48               lea ecx, [ebx + 0x48]
// 0079e265  51                   push ecx
// 0079e266  8d942488000000       lea edx, [esp + 0x88]
// 0079e26d  52                   push edx
// 0079e26e  ff1500ee8900         call dword ptr [0x89ee00]
// 0079e274  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 0079e277  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0079e27e  8b5328               mov edx, dword ptr [ebx + 0x28]
// 0079e281  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 0079e288  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0079e28c  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 0079e293  896c2424             mov dword ptr [esp + 0x24], ebp
// 0079e297  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0079e29b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0079e29f  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0079e2a3  89542444             mov dword ptr [esp + 0x44], edx
// 0079e2a7  89542454             mov dword ptr [esp + 0x54], edx
// 0079e2ab  89542474             mov dword ptr [esp + 0x74], edx
// 0079e2af  03d5                 add edx, ebp
// 0079e2b1  03f2                 add esi, edx
// 0079e2b3  89442438             mov dword ptr [esp + 0x38], eax
// 0079e2b7  89442418             mov dword ptr [esp + 0x18], eax
// 0079e2bb  89442450             mov dword ptr [esp + 0x50], eax
// 0079e2bf  89442470             mov dword ptr [esp + 0x70], eax
// 0079e2c3  89442428             mov dword ptr [esp + 0x28], eax
// 0079e2c7  89442460             mov dword ptr [esp + 0x60], eax
// 0079e2cb  8b442448             mov eax, dword ptr [esp + 0x48]
// 0079e2cf  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0079e2d3  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0079e2da  8954247c             mov dword ptr [esp + 0x7c], edx
// 0079e2de  8954242c             mov dword ptr [esp + 0x2c], edx
// 0079e2e2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0079e2e6  894c2440             mov dword ptr [esp + 0x40], ecx
// 0079e2ea  894c2420             mov dword ptr [esp + 0x20], ecx
// 0079e2ee  894c2458             mov dword ptr [esp + 0x58], ecx
// 0079e2f2  894c2478             mov dword ptr [esp + 0x78], ecx
// 0079e2f6  894c2430             mov dword ptr [esp + 0x30], ecx
// 0079e2fa  89742434             mov dword ptr [esp + 0x34], esi
// 0079e2fe  89742464             mov dword ptr [esp + 0x64], esi
// 0079e302  894c2468             mov dword ptr [esp + 0x68], ecx
// 0079e306  8954246c             mov dword ptr [esp + 0x6c], edx
// 0079e30a  83f803               cmp eax, 3
// 0079e30d  0f85fc010000         jne 0x79e50f
// 0079e313  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 0079e31a  83c620               add esi, 0x20
// 0079e31d  8bce                 mov ecx, esi
// 0079e31f  e87c28ffff           call 0x790ba0
// 0079e324  85c0                 test eax, eax
// 0079e326  0f8443030000         je 0x79e66f
// 0079e32c  85ff                 test edi, edi
// 0079e32e  7505                 jne 0x79e335
// 0079e330  8d4f04               lea ecx, [edi + 4]
// 0079e333  eb1a                 jmp 0x79e34f
// 0079e335  b83c000000           mov eax, 0x3c
// 0079e33a  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e33e  7505                 jne 0x79e345
// 0079e340  8d48c7               lea ecx, [eax - 0x39]
// 0079e343  eb0a                 jmp 0x79e34f
// 0079e345  33c9                 xor ecx, ecx
// 0079e347  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e34b  0f94c1               sete cl
// 0079e34e  41                   inc ecx
// 0079e34f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 0079e356  85db                 test ebx, ebx
// 0079e358  7504                 jne 0x79e35e
// 0079e35a  33c0                 xor eax, eax
// 0079e35c  eb03                 jmp 0x79e361
// 0079e35e  8b4304               mov eax, dword ptr [ebx + 4]
// 0079e361  6a00                 push 0
// 0079e363  8d54243c             lea edx, [esp + 0x3c]
// 0079e367  52                   push edx
// 0079e368  51                   push ecx
// 0079e369  6a01                 push 1
// 0079e36b  50                   push eax
// 0079e36c  8bce                 mov ecx, esi
// 0079e36e  e8ad24ffff           call 0x790820
// 0079e373  85ff                 test edi, edi
// 0079e375  7505                 jne 0x79e37c
// 0079e377  8d4f08               lea ecx, [edi + 8]
// 0079e37a  eb1c                 jmp 0x79e398
// 0079e37c  b83d000000           mov eax, 0x3d
// 0079e381  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e385  7505                 jne 0x79e38c
// 0079e387  8d48ca               lea ecx, [eax - 0x36]
// 0079e38a  eb0c                 jmp 0x79e398
// 0079e38c  33c9                 xor ecx, ecx
// 0079e38e  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e392  0f94c1               sete cl
// 0079e395  83c105               add ecx, 5
// 0079e398  85db                 test ebx, ebx
// 0079e39a  7504                 jne 0x79e3a0
// 0079e39c  33c0                 xor eax, eax
// 0079e39e  eb03                 jmp 0x79e3a3
// 0079e3a0  8b4304               mov eax, dword ptr [ebx + 4]
// 0079e3a3  6a00                 push 0
// 0079e3a5  8d54241c             lea edx, [esp + 0x1c]
// 0079e3a9  52                   push edx
// 0079e3aa  51                   push ecx
// 0079e3ab  6a01                 push 1
// 0079e3ad  50                   push eax
// 0079e3ae  8bce                 mov ecx, esi
// 0079e3b0  e86b24ffff           call 0x790820
// 0079e3b5  8b2dfced8900         mov ebp, dword ptr [0x89edfc]
// 0079e3bb  8d442450             lea eax, [esp + 0x50]
// 0079e3bf  50                   push eax
// 0079e3c0  ffd5                 call ebp
// 0079e3c2  85c0                 test eax, eax
// 0079e3c4  0f85ee090000         jne 0x79edb8
// 0079e3ca  8d4c2470             lea ecx, [esp + 0x70]
// 0079e3ce  51                   push ecx
// 0079e3cf  ffd5                 call ebp
// 0079e3d1  85c0                 test eax, eax
// 0079e3d3  7540                 jne 0x79e415
// 0079e3d5  85ff                 test edi, edi
// 0079e3d7  7505                 jne 0x79e3de
// 0079e3d9  8d4804               lea ecx, [eax + 4]
// 0079e3dc  eb1a                 jmp 0x79e3f8
// 0079e3de  b83e000000           mov eax, 0x3e
// 0079e3e3  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e3e7  7505                 jne 0x79e3ee
// 0079e3e9  8d48c5               lea ecx, [eax - 0x3b]
// 0079e3ec  eb0a                 jmp 0x79e3f8
// 0079e3ee  33c9                 xor ecx, ecx
// 0079e3f0  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e3f4  0f94c1               sete cl
// 0079e3f7  41                   inc ecx
// 0079e3f8  85db                 test ebx, ebx
// 0079e3fa  7504                 jne 0x79e400
// 0079e3fc  33c0                 xor eax, eax
// 0079e3fe  eb03                 jmp 0x79e403
// 0079e400  8b4304               mov eax, dword ptr [ebx + 4]
// 0079e403  6a00                 push 0
// 0079e405  8d542474             lea edx, [esp + 0x74]
// 0079e409  52                   push edx
// 0079e40a  51                   push ecx
// 0079e40b  6a06                 push 6
// 0079e40d  50                   push eax
// 0079e40e  8bce                 mov ecx, esi
// 0079e410  e80b24ffff           call 0x790820
// 0079e415  8d442428             lea eax, [esp + 0x28]
// 0079e419  50                   push eax
// 0079e41a  ffd5                 call ebp
// 0079e41c  85c0                 test eax, eax
// 0079e41e  0f858f000000         jne 0x79e4b3
// 0079e424  b840000000           mov eax, 0x40
// 0079e429  85ff                 test edi, edi
// 0079e42b  7505                 jne 0x79e432
// 0079e42d  8d48c4               lea ecx, [eax - 0x3c]
// 0079e430  eb17                 jmp 0x79e449
// 0079e432  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e436  7507                 jne 0x79e43f
// 0079e438  b903000000           mov ecx, 3
// 0079e43d  eb0a                 jmp 0x79e449
// 0079e43f  33c9                 xor ecx, ecx
// 0079e441  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e445  0f94c1               sete cl
// 0079e448  41                   inc ecx
// 0079e449  85db                 test ebx, ebx
// 0079e44b  7504                 jne 0x79e451
// 0079e44d  33c0                 xor eax, eax
// 0079e44f  eb03                 jmp 0x79e454
// 0079e451  8b4304               mov eax, dword ptr [ebx + 4]
// 0079e454  6a00                 push 0
// 0079e456  8d54242c             lea edx, [esp + 0x2c]
// 0079e45a  52                   push edx
// 0079e45b  51                   push ecx
// 0079e45c  6a03                 push 3
// 0079e45e  50                   push eax
// 0079e45f  8bce                 mov ecx, esi
// 0079e461  e8ba23ffff           call 0x790820
// 0079e466  8b442434             mov eax, dword ptr [esp + 0x34]
// 0079e46a  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0079e46e  83f80d               cmp eax, 0xd
// 0079e471  7e40                 jle 0x79e4b3
// 0079e473  85ff                 test edi, edi
// 0079e475  7505                 jne 0x79e47c
// 0079e477  8d4f04               lea ecx, [edi + 4]
// 0079e47a  eb1a                 jmp 0x79e496
// 0079e47c  b840000000           mov eax, 0x40
// 0079e481  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e485  7505                 jne 0x79e48c
// 0079e487  8d48c3               lea ecx, [eax - 0x3d]
// 0079e48a  eb0a                 jmp 0x79e496
// 0079e48c  33c9                 xor ecx, ecx
// 0079e48e  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e492  0f94c1               sete cl
// 0079e495  41                   inc ecx
// 0079e496  85db                 test ebx, ebx
// 0079e498  7504                 jne 0x79e49e
// 0079e49a  33c0                 xor eax, eax
// 0079e49c  eb03                 jmp 0x79e4a1
// 0079e49e  8b4304               mov eax, dword ptr [ebx + 4]
// 0079e4a1  6a00                 push 0
// 0079e4a3  8d54242c             lea edx, [esp + 0x2c]
// 0079e4a7  52                   push edx
// 0079e4a8  51                   push ecx
// 0079e4a9  6a09                 push 9
// 0079e4ab  50                   push eax
// 0079e4ac  8bce                 mov ecx, esi
// 0079e4ae  e86d23ffff           call 0x790820
// 0079e4b3  8d442460             lea eax, [esp + 0x60]
// 0079e4b7  50                   push eax
// 0079e4b8  ffd5                 call ebp
// 0079e4ba  85c0                 test eax, eax
// 0079e4bc  0f85f6080000         jne 0x79edb8
// 0079e4c2  85ff                 test edi, edi
// 0079e4c4  7505                 jne 0x79e4cb
// 0079e4c6  8d4804               lea ecx, [eax + 4]
// 0079e4c9  eb1a                 jmp 0x79e4e5
// 0079e4cb  b83f000000           mov eax, 0x3f
// 0079e4d0  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e4d4  7505                 jne 0x79e4db
// 0079e4d6  8d48c4               lea ecx, [eax - 0x3c]
// 0079e4d9  eb0a                 jmp 0x79e4e5
// 0079e4db  33c9                 xor ecx, ecx
// 0079e4dd  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e4e1  0f94c1               sete cl
// 0079e4e4  41                   inc ecx
// 0079e4e5  85db                 test ebx, ebx
// 0079e4e7  7504                 jne 0x79e4ed
// 0079e4e9  33c0                 xor eax, eax
// 0079e4eb  eb03                 jmp 0x79e4f0
// 0079e4ed  8b4304               mov eax, dword ptr [ebx + 4]
// 0079e4f0  6a00                 push 0
// 0079e4f2  8d542464             lea edx, [esp + 0x64]
// 0079e4f6  52                   push edx
// 0079e4f7  51                   push ecx
// 0079e4f8  6a07                 push 7
// 0079e4fa  50                   push eax
// 0079e4fb  8bce                 mov ecx, esi
// 0079e4fd  e81e23ffff           call 0x790820
// 0079e502  5f                   pop edi
// 0079e503  5e                   pop esi
// 0079e504  5d                   pop ebp
// 0079e505  5b                   pop ebx
// 0079e506  81c484000000         add esp, 0x84
// 0079e50c  c20800               ret 8
// 0079e50f  83f802               cmp eax, 2
// 0079e512  0f8557010000         jne 0x79e66f
// 0079e518  e80366fbff           call 0x754b20
// 0079e51d  6a0f                 push 0xf
// 0079e51f  8bc8                 mov ecx, eax
// 0079e521  e87a5dfbff           call 0x7542a0
// 0079e526  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0079e52d  50                   push eax
// 0079e52e  8d44243c             lea eax, [esp + 0x3c]
// 0079e532  50                   push eax
// 0079e533  8bce                 mov ecx, esi
// 0079e535  e896b2f7ff           call 0x7197d0
// 0079e53a  85ff                 test edi, edi
// 0079e53c  742e                 je 0x79e56c
// 0079e53e  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 0079e543  7527                 jne 0x79e56c
// 0079e545  e8d665fbff           call 0x754b20
// 0079e54a  6a14                 push 0x14
// 0079e54c  8bc8                 mov ecx, eax
// 0079e54e  e84d5dfbff           call 0x7542a0
// 0079e553  8be8                 mov ebp, eax
// 0079e555  e8c665fbff           call 0x754b20
// 0079e55a  6a10                 push 0x10
// 0079e55c  8bc8                 mov ecx, eax
// 0079e55e  e83d5dfbff           call 0x7542a0
// 0079e563  55                   push ebp
// 0079e564  50                   push eax
// 0079e565  8d4c2440             lea ecx, [esp + 0x40]
// 0079e569  51                   push ecx
// 0079e56a  eb25                 jmp 0x79e591
// 0079e56c  e8af65fbff           call 0x754b20
// 0079e571  6a10                 push 0x10
// 0079e573  8bc8                 mov ecx, eax
// 0079e575  e8265dfbff           call 0x7542a0
// 0079e57a  8be8                 mov ebp, eax
// 0079e57c  e89f65fbff           call 0x754b20
// 0079e581  6a14                 push 0x14
// 0079e583  8bc8                 mov ecx, eax
// 0079e585  e8165dfbff           call 0x7542a0
// 0079e58a  55                   push ebp
// 0079e58b  50                   push eax
// 0079e58c  8d542440             lea edx, [esp + 0x40]
// 0079e590  52                   push edx
// 0079e591  8bce                 mov ecx, esi
// 0079e593  e832b2f7ff           call 0x7197ca
// 0079e598  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0079e59c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0079e5a0  57                   push edi
// 0079e5a1  6a01                 push 1
// 0079e5a3  6a00                 push 0
// 0079e5a5  83ec10               sub esp, 0x10
// 0079e5a8  8bc4                 mov eax, esp
// 0079e5aa  8908                 mov dword ptr [eax], ecx
// 0079e5ac  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0079e5b0  895004               mov dword ptr [eax + 4], edx
// 0079e5b3  8b542460             mov edx, dword ptr [esp + 0x60]
// 0079e5b7  894808               mov dword ptr [eax + 8], ecx
// 0079e5ba  56                   push esi
// 0079e5bb  89500c               mov dword ptr [eax + 0xc], edx
// 0079e5be  e8bdfaffff           call 0x79e080
// 0079e5c3  83c420               add esp, 0x20
// 0079e5c6  e85565fbff           call 0x754b20
// 0079e5cb  6a0f                 push 0xf
// 0079e5cd  8bc8                 mov ecx, eax
// 0079e5cf  e8cc5cfbff           call 0x7542a0
// 0079e5d4  50                   push eax
// 0079e5d5  8d44241c             lea eax, [esp + 0x1c]
// 0079e5d9  50                   push eax
// 0079e5da  8bce                 mov ecx, esi
// 0079e5dc  e8efb1f7ff           call 0x7197d0
// 0079e5e1  85ff                 test edi, edi
// 0079e5e3  742e                 je 0x79e613
// 0079e5e5  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0079e5ea  7527                 jne 0x79e613
// 0079e5ec  e82f65fbff           call 0x754b20
// 0079e5f1  6a14                 push 0x14
// 0079e5f3  8bc8                 mov ecx, eax
// 0079e5f5  e8a65cfbff           call 0x7542a0
// 0079e5fa  8be8                 mov ebp, eax
// 0079e5fc  e81f65fbff           call 0x754b20
// 0079e601  6a10                 push 0x10
// 0079e603  8bc8                 mov ecx, eax
// 0079e605  e8965cfbff           call 0x7542a0
// 0079e60a  55                   push ebp
// 0079e60b  50                   push eax
// 0079e60c  8d4c2420             lea ecx, [esp + 0x20]
// 0079e610  51                   push ecx
// 0079e611  eb25                 jmp 0x79e638
// 0079e613  e80865fbff           call 0x754b20
// 0079e618  6a10                 push 0x10
// 0079e61a  8bc8                 mov ecx, eax
// 0079e61c  e87f5cfbff           call 0x7542a0
// 0079e621  8be8                 mov ebp, eax
// 0079e623  e8f864fbff           call 0x754b20
// 0079e628  6a14                 push 0x14
// 0079e62a  8bc8                 mov ecx, eax
// 0079e62c  e86f5cfbff           call 0x7542a0
// 0079e631  55                   push ebp
// 0079e632  50                   push eax
// 0079e633  8d542420             lea edx, [esp + 0x20]
// 0079e637  52                   push edx
// 0079e638  8bce                 mov ecx, esi
// 0079e63a  e88bb1f7ff           call 0x7197ca
// 0079e63f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079e643  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0079e647  57                   push edi
// 0079e648  6a00                 push 0
// 0079e64a  6a00                 push 0
// 0079e64c  83ec10               sub esp, 0x10
// 0079e64f  8bc4                 mov eax, esp
// 0079e651  8908                 mov dword ptr [eax], ecx
// 0079e653  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079e657  895004               mov dword ptr [eax + 4], edx
// 0079e65a  8b542440             mov edx, dword ptr [esp + 0x40]
// 0079e65e  894808               mov dword ptr [eax + 8], ecx
// 0079e661  56                   push esi
// 0079e662  89500c               mov dword ptr [eax + 0xc], edx
// 0079e665  e816faffff           call 0x79e080
// 0079e66a  83c420               add esp, 0x20
// 0079e66d  eb72                 jmp 0x79e6e1
// 0079e66f  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0079e676  85f6                 test esi, esi
// 0079e678  7504                 jne 0x79e67e
// 0079e67a  33c0                 xor eax, eax
// 0079e67c  eb03                 jmp 0x79e681
// 0079e67e  8b4604               mov eax, dword ptr [esi + 4]
// 0079e681  f7df                 neg edi
// 0079e683  1bff                 sbb edi, edi
// 0079e685  8b2dcced8900         mov ebp, dword ptr [0x89edcc]
// 0079e68b  33c9                 xor ecx, ecx
// 0079e68d  81e700ffffff         and edi, 0xffffff00
// 0079e693  81c700010000         add edi, 0x100
// 0079e699  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 0079e69e  8d542438             lea edx, [esp + 0x38]
// 0079e6a2  0f95c1               setne cl
// 0079e6a5  49                   dec ecx
// 0079e6a6  81e100020000         and ecx, 0x200
// 0079e6ac  0bcf                 or ecx, edi
// 0079e6ae  51                   push ecx
// 0079e6af  6a03                 push 3
// 0079e6b1  52                   push edx
// 0079e6b2  50                   push eax
// 0079e6b3  ffd5                 call ebp
// 0079e6b5  85f6                 test esi, esi
// 0079e6b7  7504                 jne 0x79e6bd
// 0079e6b9  33c0                 xor eax, eax
// 0079e6bb  eb03                 jmp 0x79e6c0
// 0079e6bd  8b4604               mov eax, dword ptr [esi + 4]
// 0079e6c0  33c9                 xor ecx, ecx
// 0079e6c2  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0079e6c7  8d542418             lea edx, [esp + 0x18]
// 0079e6cb  0f95c1               setne cl
// 0079e6ce  49                   dec ecx
// 0079e6cf  81e100020000         and ecx, 0x200
// 0079e6d5  0bcf                 or ecx, edi
// 0079e6d7  83c901               or ecx, 1
// 0079e6da  51                   push ecx
// 0079e6db  6a03                 push 3
// 0079e6dd  52                   push edx
// 0079e6de  50                   push eax
// 0079e6df  ffd5                 call ebp
// 0079e6e1  8b03                 mov eax, dword ptr [ebx]
// 0079e6e3  8b5008               mov edx, dword ptr [eax + 8]
// 0079e6e6  8bcb                 mov ecx, ebx
// 0079e6e8  ffd2                 call edx
// 0079e6ea  85c0                 test eax, eax
// 0079e6ec  7504                 jne 0x79e6f2
// 0079e6ee  33d2                 xor edx, edx
// 0079e6f0  eb03                 jmp 0x79e6f5
// 0079e6f2  8b5020               mov edx, dword ptr [eax + 0x20]
// 0079e6f5  85f6                 test esi, esi
// 0079e6f7  7504                 jne 0x79e6fd
// 0079e6f9  33c9                 xor ecx, ecx
// 0079e6fb  eb03                 jmp 0x79e700
// 0079e6fd  8b4e04               mov ecx, dword ptr [esi + 4]
// 0079e700  85c0                 test eax, eax
// 0079e702  7403                 je 0x79e707
// 0079e704  8b4020               mov eax, dword ptr [eax + 0x20]
// 0079e707  52                   push edx
// 0079e708  51                   push ecx
// 0079e709  6837010000           push 0x137
// 0079e70e  50                   push eax
// 0079e70f  ff155ced8900         call dword ptr [0x89ed5c]
// 0079e715  85f6                 test esi, esi
// 0079e717  7504                 jne 0x79e71d
// 0079e719  33c9                 xor ecx, ecx
// 0079e71b  eb03                 jmp 0x79e720
// 0079e71d  8b4e04               mov ecx, dword ptr [esi + 4]
// 0079e720  50                   push eax
// 0079e721  8d442454             lea eax, [esp + 0x54]
// 0079e725  50                   push eax
// 0079e726  51                   push ecx
// 0079e727  ff15b4ec8900         call dword ptr [0x89ecb4]
// 0079e72d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0079e731  8b2dccee8900         mov ebp, dword ptr [0x89eecc]
// 0079e737  83fb3e               cmp ebx, 0x3e
// 0079e73a  7513                 jne 0x79e74f
// 0079e73c  85f6                 test esi, esi
// 0079e73e  7504                 jne 0x79e744
// 0079e740  33c0                 xor eax, eax
// 0079e742  eb03                 jmp 0x79e747
// 0079e744  8b4604               mov eax, dword ptr [esi + 4]
// 0079e747  8d4c2470             lea ecx, [esp + 0x70]
// 0079e74b  51                   push ecx
// 0079e74c  50                   push eax
// 0079e74d  ffd5                 call ebp
// 0079e74f  8b3dfced8900         mov edi, dword ptr [0x89edfc]
// 0079e755  8d542450             lea edx, [esp + 0x50]
// 0079e759  52                   push edx
// 0079e75a  ffd7                 call edi
// 0079e75c  85c0                 test eax, eax
// 0079e75e  7579                 jne 0x79e7d9
// 0079e760  8d442428             lea eax, [esp + 0x28]
// 0079e764  50                   push eax
// 0079e765  ffd7                 call edi
// 0079e767  85c0                 test eax, eax
// 0079e769  756e                 jne 0x79e7d9
// 0079e76b  e8b063fbff           call 0x754b20
// 0079e770  6a0f                 push 0xf
// 0079e772  8bc8                 mov ecx, eax
// 0079e774  e8275bfbff           call 0x7542a0
// 0079e779  50                   push eax
// 0079e77a  8d4c242c             lea ecx, [esp + 0x2c]
// 0079e77e  51                   push ecx
// 0079e77f  8bce                 mov ecx, esi
// 0079e781  e84ab0f7ff           call 0x7197d0
// 0079e786  837c244802           cmp dword ptr [esp + 0x48], 2
// 0079e78b  752e                 jne 0x79e7bb
// 0079e78d  e88e63fbff           call 0x754b20
// 0079e792  6a10                 push 0x10
// 0079e794  8bc8                 mov ecx, eax
// 0079e796  e8055bfbff           call 0x7542a0
// 0079e79b  8bf8                 mov edi, eax
// 0079e79d  e87e63fbff           call 0x754b20
// 0079e7a2  6a14                 push 0x14
// 0079e7a4  8bc8                 mov ecx, eax
// 0079e7a6  e8f55afbff           call 0x7542a0
// 0079e7ab  57                   push edi
// 0079e7ac  50                   push eax
// 0079e7ad  8d542430             lea edx, [esp + 0x30]
// 0079e7b1  52                   push edx
// 0079e7b2  8bce                 mov ecx, esi
// 0079e7b4  e811b0f7ff           call 0x7197ca
// 0079e7b9  eb1e                 jmp 0x79e7d9
// 0079e7bb  85f6                 test esi, esi
// 0079e7bd  7504                 jne 0x79e7c3
// 0079e7bf  33c0                 xor eax, eax
// 0079e7c1  eb03                 jmp 0x79e7c6
// 0079e7c3  8b4604               mov eax, dword ptr [esi + 4]
// 0079e7c6  680f200000           push 0x200f
// 0079e7cb  6a05                 push 5
// 0079e7cd  8d4c2430             lea ecx, [esp + 0x30]
// 0079e7d1  51                   push ecx
// 0079e7d2  50                   push eax
// 0079e7d3  ff15c8ec8900         call dword ptr [0x89ecc8]
// 0079e7d9  83fb3f               cmp ebx, 0x3f
// 0079e7dc  0f85d6050000         jne 0x79edb8
// 0079e7e2  85f6                 test esi, esi
// 0079e7e4  7515                 jne 0x79e7fb
// 0079e7e6  8d542460             lea edx, [esp + 0x60]
// 0079e7ea  52                   push edx
// 0079e7eb  56                   push esi
// 0079e7ec  ffd5                 call ebp
// 0079e7ee  5f                   pop edi
// 0079e7ef  5e                   pop esi
// 0079e7f0  5d                   pop ebp
// 0079e7f1  5b                   pop ebx
// 0079e7f2  81c484000000         add esp, 0x84
// 0079e7f8  c20800               ret 8
// 0079e7fb  8b7604               mov esi, dword ptr [esi + 4]
// 0079e7fe  8d542460             lea edx, [esp + 0x60]
// 0079e802  52                   push edx
// 0079e803  56                   push esi
// 0079e804  ffd5                 call ebp
// 0079e806  5f                   pop edi
// 0079e807  5e                   pop esi
// 0079e808  5d                   pop ebp
// 0079e809  5b                   pop ebx
// 0079e80a  81c484000000         add esp, 0x84
// 0079e810  c20800               ret 8
// 0079e813  8d4348               lea eax, [ebx + 0x48]
// 0079e816  50                   push eax
// 0079e817  8d8c2488000000       lea ecx, [esp + 0x88]
// 0079e81e  51                   push ecx
// 0079e81f  ff1500ee8900         call dword ptr [0x89ee00]
// 0079e825  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 0079e828  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0079e82f  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0079e836  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0079e83d  896c2418             mov dword ptr [esp + 0x18], ebp
// 0079e841  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 0079e848  896c2420             mov dword ptr [esp + 0x20], ebp
// 0079e84c  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0079e850  89542428             mov dword ptr [esp + 0x28], edx
// 0079e854  8b5328               mov edx, dword ptr [ebx + 0x28]
// 0079e857  8944242c             mov dword ptr [esp + 0x2c], eax
// 0079e85b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0079e85f  89442454             mov dword ptr [esp + 0x54], eax
// 0079e863  89442464             mov dword ptr [esp + 0x64], eax
// 0079e867  8944243c             mov dword ptr [esp + 0x3c], eax
// 0079e86b  89442474             mov dword ptr [esp + 0x74], eax
// 0079e86f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0079e873  896c2458             mov dword ptr [esp + 0x58], ebp
// 0079e877  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0079e87b  89542430             mov dword ptr [esp + 0x30], edx
// 0079e87f  89542450             mov dword ptr [esp + 0x50], edx
// 0079e883  89542460             mov dword ptr [esp + 0x60], edx
// 0079e887  03d5                 add edx, ebp
// 0079e889  03f2                 add esi, edx
// 0079e88b  89442478             mov dword ptr [esp + 0x78], eax
// 0079e88f  8b442448             mov eax, dword ptr [esp + 0x48]
// 0079e893  894c2434             mov dword ptr [esp + 0x34], ecx
// 0079e897  894c2424             mov dword ptr [esp + 0x24], ecx
// 0079e89b  894c245c             mov dword ptr [esp + 0x5c], ecx
// 0079e89f  89542468             mov dword ptr [esp + 0x68], edx
// 0079e8a3  894c246c             mov dword ptr [esp + 0x6c], ecx
// 0079e8a7  89542438             mov dword ptr [esp + 0x38], edx
// 0079e8ab  89742440             mov dword ptr [esp + 0x40], esi
// 0079e8af  894c2444             mov dword ptr [esp + 0x44], ecx
// 0079e8b3  89742470             mov dword ptr [esp + 0x70], esi
// 0079e8b7  894c247c             mov dword ptr [esp + 0x7c], ecx
// 0079e8bb  83f803               cmp eax, 3
// 0079e8be  0f85fe010000         jne 0x79eac2
// 0079e8c4  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 0079e8cb  83c620               add esi, 0x20
// 0079e8ce  8bce                 mov ecx, esi
// 0079e8d0  e8cb22ffff           call 0x790ba0
// 0079e8d5  85c0                 test eax, eax
// 0079e8d7  0f8445030000         je 0x79ec22
// 0079e8dd  85ff                 test edi, edi
// 0079e8df  7505                 jne 0x79e8e6
// 0079e8e1  8d4f0c               lea ecx, [edi + 0xc]
// 0079e8e4  eb1c                 jmp 0x79e902
// 0079e8e6  b83c000000           mov eax, 0x3c
// 0079e8eb  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e8ef  7505                 jne 0x79e8f6
// 0079e8f1  8d48cf               lea ecx, [eax - 0x31]
// 0079e8f4  eb0c                 jmp 0x79e902
// 0079e8f6  33c9                 xor ecx, ecx
// 0079e8f8  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e8fc  0f94c1               sete cl
// 0079e8ff  83c109               add ecx, 9
// 0079e902  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 0079e909  85ed                 test ebp, ebp
// 0079e90b  7504                 jne 0x79e911
// 0079e90d  33c0                 xor eax, eax
// 0079e90f  eb03                 jmp 0x79e914
// 0079e911  8b4504               mov eax, dword ptr [ebp + 4]
// 0079e914  6a00                 push 0
// 0079e916  8d54242c             lea edx, [esp + 0x2c]
// 0079e91a  52                   push edx
// 0079e91b  51                   push ecx
// 0079e91c  6a01                 push 1
// 0079e91e  50                   push eax
// 0079e91f  8bce                 mov ecx, esi
// 0079e921  e8fa1effff           call 0x790820
// 0079e926  85ff                 test edi, edi
// 0079e928  7505                 jne 0x79e92f
// 0079e92a  8d4f10               lea ecx, [edi + 0x10]
// 0079e92d  eb1c                 jmp 0x79e94b
// 0079e92f  b83d000000           mov eax, 0x3d
// 0079e934  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e938  7505                 jne 0x79e93f
// 0079e93a  8d48d2               lea ecx, [eax - 0x2e]
// 0079e93d  eb0c                 jmp 0x79e94b
// 0079e93f  33c9                 xor ecx, ecx
// 0079e941  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e945  0f94c1               sete cl
// 0079e948  83c10d               add ecx, 0xd
// 0079e94b  85ed                 test ebp, ebp
// 0079e94d  7504                 jne 0x79e953
// 0079e94f  33c0                 xor eax, eax
// 0079e951  eb03                 jmp 0x79e956
// 0079e953  8b4504               mov eax, dword ptr [ebp + 4]
// 0079e956  6a00                 push 0
// 0079e958  8d54241c             lea edx, [esp + 0x1c]
// 0079e95c  52                   push edx
// 0079e95d  51                   push ecx
// 0079e95e  6a01                 push 1
// 0079e960  50                   push eax
// 0079e961  8bce                 mov ecx, esi
// 0079e963  e8b81effff           call 0x790820
// 0079e968  8b1dfced8900         mov ebx, dword ptr [0x89edfc]
// 0079e96e  8d442450             lea eax, [esp + 0x50]
// 0079e972  50                   push eax
// 0079e973  ffd3                 call ebx
// 0079e975  85c0                 test eax, eax
// 0079e977  0f853b040000         jne 0x79edb8
// 0079e97d  8d4c2460             lea ecx, [esp + 0x60]
// 0079e981  51                   push ecx
// 0079e982  ffd3                 call ebx
// 0079e984  85c0                 test eax, eax
// 0079e986  7540                 jne 0x79e9c8
// 0079e988  85ff                 test edi, edi
// 0079e98a  7505                 jne 0x79e991
// 0079e98c  8d4804               lea ecx, [eax + 4]
// 0079e98f  eb1a                 jmp 0x79e9ab
// 0079e991  b83e000000           mov eax, 0x3e
// 0079e996  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e99a  7505                 jne 0x79e9a1
// 0079e99c  8d48c5               lea ecx, [eax - 0x3b]
// 0079e99f  eb0a                 jmp 0x79e9ab
// 0079e9a1  33c9                 xor ecx, ecx
// 0079e9a3  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e9a7  0f94c1               sete cl
// 0079e9aa  41                   inc ecx
// 0079e9ab  85ed                 test ebp, ebp
// 0079e9ad  7504                 jne 0x79e9b3
// 0079e9af  33c0                 xor eax, eax
// 0079e9b1  eb03                 jmp 0x79e9b6
// 0079e9b3  8b4504               mov eax, dword ptr [ebp + 4]
// 0079e9b6  6a00                 push 0
// 0079e9b8  8d542464             lea edx, [esp + 0x64]
// 0079e9bc  52                   push edx
// 0079e9bd  51                   push ecx
// 0079e9be  6a04                 push 4
// 0079e9c0  50                   push eax
// 0079e9c1  8bce                 mov ecx, esi
// 0079e9c3  e8581effff           call 0x790820
// 0079e9c8  8d442438             lea eax, [esp + 0x38]
// 0079e9cc  50                   push eax
// 0079e9cd  ffd3                 call ebx
// 0079e9cf  85c0                 test eax, eax
// 0079e9d1  0f858f000000         jne 0x79ea66
// 0079e9d7  b840000000           mov eax, 0x40
// 0079e9dc  85ff                 test edi, edi
// 0079e9de  7505                 jne 0x79e9e5
// 0079e9e0  8d48c4               lea ecx, [eax - 0x3c]
// 0079e9e3  eb17                 jmp 0x79e9fc
// 0079e9e5  39442410             cmp dword ptr [esp + 0x10], eax
// 0079e9e9  7507                 jne 0x79e9f2
// 0079e9eb  b903000000           mov ecx, 3
// 0079e9f0  eb0a                 jmp 0x79e9fc
// 0079e9f2  33c9                 xor ecx, ecx
// 0079e9f4  39442414             cmp dword ptr [esp + 0x14], eax
// 0079e9f8  0f94c1               sete cl
// 0079e9fb  41                   inc ecx
// 0079e9fc  85ed                 test ebp, ebp
// 0079e9fe  7504                 jne 0x79ea04
// 0079ea00  33c0                 xor eax, eax
// 0079ea02  eb03                 jmp 0x79ea07
// 0079ea04  8b4504               mov eax, dword ptr [ebp + 4]
// 0079ea07  6a00                 push 0
// 0079ea09  8d54243c             lea edx, [esp + 0x3c]
// 0079ea0d  52                   push edx
// 0079ea0e  51                   push ecx
// 0079ea0f  6a02                 push 2
// 0079ea11  50                   push eax
// 0079ea12  8bce                 mov ecx, esi
// 0079ea14  e8071effff           call 0x790820
// 0079ea19  8b442440             mov eax, dword ptr [esp + 0x40]
// 0079ea1d  2b442438             sub eax, dword ptr [esp + 0x38]
// 0079ea21  83f80d               cmp eax, 0xd
// 0079ea24  7e40                 jle 0x79ea66
// 0079ea26  85ff                 test edi, edi
// 0079ea28  7505                 jne 0x79ea2f
// 0079ea2a  8d4f04               lea ecx, [edi + 4]
// 0079ea2d  eb1a                 jmp 0x79ea49
// 0079ea2f  b840000000           mov eax, 0x40
// 0079ea34  39442410             cmp dword ptr [esp + 0x10], eax
// 0079ea38  7505                 jne 0x79ea3f
// 0079ea3a  8d48c3               lea ecx, [eax - 0x3d]
// 0079ea3d  eb0a                 jmp 0x79ea49
// 0079ea3f  33c9                 xor ecx, ecx
// 0079ea41  39442414             cmp dword ptr [esp + 0x14], eax
// 0079ea45  0f94c1               sete cl
// 0079ea48  41                   inc ecx
// 0079ea49  85ed                 test ebp, ebp
// 0079ea4b  7504                 jne 0x79ea51
// 0079ea4d  33c0                 xor eax, eax
// 0079ea4f  eb03                 jmp 0x79ea54
// 0079ea51  8b4504               mov eax, dword ptr [ebp + 4]
// 0079ea54  6a00                 push 0
// 0079ea56  8d54243c             lea edx, [esp + 0x3c]
// 0079ea5a  52                   push edx
// 0079ea5b  51                   push ecx
// 0079ea5c  6a08                 push 8
// 0079ea5e  50                   push eax
// 0079ea5f  8bce                 mov ecx, esi
// 0079ea61  e8ba1dffff           call 0x790820
// 0079ea66  8d442470             lea eax, [esp + 0x70]
// 0079ea6a  50                   push eax
// 0079ea6b  ffd3                 call ebx
// 0079ea6d  85c0                 test eax, eax
// 0079ea6f  0f8543030000         jne 0x79edb8
// 0079ea75  85ff                 test edi, edi
// 0079ea77  7505                 jne 0x79ea7e
// 0079ea79  8d4804               lea ecx, [eax + 4]
// 0079ea7c  eb1a                 jmp 0x79ea98
// 0079ea7e  b83f000000           mov eax, 0x3f
// 0079ea83  39442410             cmp dword ptr [esp + 0x10], eax
// 0079ea87  7505                 jne 0x79ea8e
// 0079ea89  8d48c4               lea ecx, [eax - 0x3c]
// 0079ea8c  eb0a                 jmp 0x79ea98
// 0079ea8e  33c9                 xor ecx, ecx
// 0079ea90  39442414             cmp dword ptr [esp + 0x14], eax
// 0079ea94  0f94c1               sete cl
// 0079ea97  41                   inc ecx
// 0079ea98  85ed                 test ebp, ebp
// 0079ea9a  7504                 jne 0x79eaa0
// 0079ea9c  33c0                 xor eax, eax
// 0079ea9e  eb03                 jmp 0x79eaa3
// 0079eaa0  8b4504               mov eax, dword ptr [ebp + 4]
// 0079eaa3  6a00                 push 0
// 0079eaa5  8d542474             lea edx, [esp + 0x74]
// 0079eaa9  52                   push edx
// 0079eaaa  51                   push ecx
// 0079eaab  6a05                 push 5
// 0079eaad  50                   push eax
// 0079eaae  8bce                 mov ecx, esi
// 0079eab0  e86b1dffff           call 0x790820
// 0079eab5  5f                   pop edi
// 0079eab6  5e                   pop esi
// 0079eab7  5d                   pop ebp
// 0079eab8  5b                   pop ebx
// 0079eab9  81c484000000         add esp, 0x84
// 0079eabf  c20800               ret 8
// 0079eac2  83f802               cmp eax, 2
// 0079eac5  0f8557010000         jne 0x79ec22
// 0079eacb  e85060fbff           call 0x754b20
// 0079ead0  6a0f                 push 0xf
// 0079ead2  8bc8                 mov ecx, eax
// 0079ead4  e8c757fbff           call 0x7542a0
// 0079ead9  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0079eae0  50                   push eax
// 0079eae1  8d44242c             lea eax, [esp + 0x2c]
// 0079eae5  50                   push eax
// 0079eae6  8bce                 mov ecx, esi
// 0079eae8  e8e3acf7ff           call 0x7197d0
// 0079eaed  85ff                 test edi, edi
// 0079eaef  742e                 je 0x79eb1f
// 0079eaf1  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 0079eaf6  7527                 jne 0x79eb1f
// 0079eaf8  e82360fbff           call 0x754b20
// 0079eafd  6a14                 push 0x14
// 0079eaff  8bc8                 mov ecx, eax
// 0079eb01  e89a57fbff           call 0x7542a0
// 0079eb06  8be8                 mov ebp, eax
// 0079eb08  e81360fbff           call 0x754b20
// 0079eb0d  6a10                 push 0x10
// 0079eb0f  8bc8                 mov ecx, eax
// 0079eb11  e88a57fbff           call 0x7542a0
// 0079eb16  55                   push ebp
// 0079eb17  50                   push eax
// 0079eb18  8d4c2430             lea ecx, [esp + 0x30]
// 0079eb1c  51                   push ecx
// 0079eb1d  eb25                 jmp 0x79eb44
// 0079eb1f  e8fc5ffbff           call 0x754b20
// 0079eb24  6a10                 push 0x10
// 0079eb26  8bc8                 mov ecx, eax
// 0079eb28  e87357fbff           call 0x7542a0
// 0079eb2d  8be8                 mov ebp, eax
// 0079eb2f  e8ec5ffbff           call 0x754b20
// 0079eb34  6a14                 push 0x14
// 0079eb36  8bc8                 mov ecx, eax
// 0079eb38  e86357fbff           call 0x7542a0
// 0079eb3d  55                   push ebp
// 0079eb3e  50                   push eax
// 0079eb3f  8d542430             lea edx, [esp + 0x30]
// 0079eb43  52                   push edx
// 0079eb44  8bce                 mov ecx, esi
// 0079eb46  e87facf7ff           call 0x7197ca
// 0079eb4b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0079eb4f  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0079eb53  57                   push edi
// 0079eb54  6a01                 push 1
// 0079eb56  6a01                 push 1
// 0079eb58  83ec10               sub esp, 0x10
// 0079eb5b  8bc4                 mov eax, esp
// 0079eb5d  8908                 mov dword ptr [eax], ecx
// 0079eb5f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0079eb63  895004               mov dword ptr [eax + 4], edx
// 0079eb66  8b542450             mov edx, dword ptr [esp + 0x50]
// 0079eb6a  894808               mov dword ptr [eax + 8], ecx
// 0079eb6d  56                   push esi
// 0079eb6e  89500c               mov dword ptr [eax + 0xc], edx
// 0079eb71  e80af5ffff           call 0x79e080
// 0079eb76  83c420               add esp, 0x20
// 0079eb79  e8a25ffbff           call 0x754b20
// 0079eb7e  6a0f                 push 0xf
// 0079eb80  8bc8                 mov ecx, eax
// 0079eb82  e81957fbff           call 0x7542a0
// 0079eb87  50                   push eax
// 0079eb88  8d44241c             lea eax, [esp + 0x1c]
// 0079eb8c  50                   push eax
// 0079eb8d  8bce                 mov ecx, esi
// 0079eb8f  e83cacf7ff           call 0x7197d0
// 0079eb94  85ff                 test edi, edi
// 0079eb96  742e                 je 0x79ebc6
// 0079eb98  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0079eb9d  7527                 jne 0x79ebc6
// 0079eb9f  e87c5ffbff           call 0x754b20
// 0079eba4  6a14                 push 0x14
// 0079eba6  8bc8                 mov ecx, eax
// 0079eba8  e8f356fbff           call 0x7542a0
// 0079ebad  8be8                 mov ebp, eax
// 0079ebaf  e86c5ffbff           call 0x754b20
// 0079ebb4  6a10                 push 0x10
// 0079ebb6  8bc8                 mov ecx, eax
// 0079ebb8  e8e356fbff           call 0x7542a0
// 0079ebbd  55                   push ebp
// 0079ebbe  50                   push eax
// 0079ebbf  8d4c2420             lea ecx, [esp + 0x20]
// 0079ebc3  51                   push ecx
// 0079ebc4  eb25                 jmp 0x79ebeb
// 0079ebc6  e8555ffbff           call 0x754b20
// 0079ebcb  6a10                 push 0x10
// 0079ebcd  8bc8                 mov ecx, eax
// 0079ebcf  e8cc56fbff           call 0x7542a0
// 0079ebd4  8be8                 mov ebp, eax
// 0079ebd6  e8455ffbff           call 0x754b20
// 0079ebdb  6a14                 push 0x14
// 0079ebdd  8bc8                 mov ecx, eax
// 0079ebdf  e8bc56fbff           call 0x7542a0
// 0079ebe4  55                   push ebp
// 0079ebe5  50                   push eax
// 0079ebe6  8d542420             lea edx, [esp + 0x20]
// 0079ebea  52                   push edx
// 0079ebeb  8bce                 mov ecx, esi
// 0079ebed  e8d8abf7ff           call 0x7197ca
// 0079ebf2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079ebf6  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0079ebfa  57                   push edi
// 0079ebfb  6a00                 push 0
// 0079ebfd  6a01                 push 1
// 0079ebff  83ec10               sub esp, 0x10
// 0079ec02  8bc4                 mov eax, esp
// 0079ec04  8908                 mov dword ptr [eax], ecx
// 0079ec06  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0079ec0a  895004               mov dword ptr [eax + 4], edx
// 0079ec0d  8b542440             mov edx, dword ptr [esp + 0x40]
// 0079ec11  894808               mov dword ptr [eax + 8], ecx
// 0079ec14  56                   push esi
// 0079ec15  89500c               mov dword ptr [eax + 0xc], edx
// 0079ec18  e863f4ffff           call 0x79e080
// 0079ec1d  83c420               add esp, 0x20
// 0079ec20  eb75                 jmp 0x79ec97
// 0079ec22  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 0079ec29  85f6                 test esi, esi
// 0079ec2b  7504                 jne 0x79ec31
// 0079ec2d  33c0                 xor eax, eax
// 0079ec2f  eb03                 jmp 0x79ec34
// 0079ec31  8b4604               mov eax, dword ptr [esi + 4]
// 0079ec34  f7df                 neg edi
// 0079ec36  1bff                 sbb edi, edi
// 0079ec38  33c9                 xor ecx, ecx
// 0079ec3a  8b2dcced8900         mov ebp, dword ptr [0x89edcc]
// 0079ec40  81e700ffffff         and edi, 0xffffff00
// 0079ec46  81c700010000         add edi, 0x100
// 0079ec4c  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 0079ec51  8d542428             lea edx, [esp + 0x28]
// 0079ec55  0f95c1               setne cl
// 0079ec58  49                   dec ecx
// 0079ec59  81e100020000         and ecx, 0x200
// 0079ec5f  0bcf                 or ecx, edi
// 0079ec61  83c902               or ecx, 2
// 0079ec64  51                   push ecx
// 0079ec65  6a03                 push 3
// 0079ec67  52                   push edx
// 0079ec68  50                   push eax
// 0079ec69  ffd5                 call ebp
// 0079ec6b  85f6                 test esi, esi
// 0079ec6d  7504                 jne 0x79ec73
// 0079ec6f  33c0                 xor eax, eax
// 0079ec71  eb03                 jmp 0x79ec76
// 0079ec73  8b4604               mov eax, dword ptr [esi + 4]
// 0079ec76  33c9                 xor ecx, ecx
// 0079ec78  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0079ec7d  8d542418             lea edx, [esp + 0x18]
// 0079ec81  0f95c1               setne cl
// 0079ec84  49                   dec ecx
// 0079ec85  81e100020000         and ecx, 0x200
// 0079ec8b  0bcf                 or ecx, edi
// 0079ec8d  83c903               or ecx, 3
// 0079ec90  51                   push ecx
// 0079ec91  6a03                 push 3
// 0079ec93  52                   push edx
// 0079ec94  50                   push eax
// 0079ec95  ffd5                 call ebp
// 0079ec97  8b03                 mov eax, dword ptr [ebx]
// 0079ec99  8b5008               mov edx, dword ptr [eax + 8]
// 0079ec9c  8bcb                 mov ecx, ebx
// 0079ec9e  ffd2                 call edx
// 0079eca0  85c0                 test eax, eax
// 0079eca2  7504                 jne 0x79eca8
// 0079eca4  33d2                 xor edx, edx
// 0079eca6  eb03                 jmp 0x79ecab
// 0079eca8  8b5020               mov edx, dword ptr [eax + 0x20]
// 0079ecab  85f6                 test esi, esi
// 0079ecad  7504                 jne 0x79ecb3
// 0079ecaf  33c9                 xor ecx, ecx
// 0079ecb1  eb03                 jmp 0x79ecb6
// 0079ecb3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0079ecb6  85c0                 test eax, eax
// 0079ecb8  7403                 je 0x79ecbd
// 0079ecba  8b4020               mov eax, dword ptr [eax + 0x20]
// 0079ecbd  52                   push edx
// 0079ecbe  51                   push ecx
// 0079ecbf  6837010000           push 0x137
// 0079ecc4  50                   push eax
// 0079ecc5  ff155ced8900         call dword ptr [0x89ed5c]
// 0079eccb  85f6                 test esi, esi
// 0079eccd  7504                 jne 0x79ecd3
// 0079eccf  33c9                 xor ecx, ecx
// 0079ecd1  eb03                 jmp 0x79ecd6
// 0079ecd3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0079ecd6  50                   push eax
// 0079ecd7  8d442454             lea eax, [esp + 0x54]
// 0079ecdb  50                   push eax
// 0079ecdc  51                   push ecx
// 0079ecdd  ff15b4ec8900         call dword ptr [0x89ecb4]
// 0079ece3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0079ece7  8b2dccee8900         mov ebp, dword ptr [0x89eecc]
// 0079eced  83fb3e               cmp ebx, 0x3e
// 0079ecf0  7513                 jne 0x79ed05
// 0079ecf2  85f6                 test esi, esi
// 0079ecf4  7504                 jne 0x79ecfa
// 0079ecf6  33c0                 xor eax, eax
// 0079ecf8  eb03                 jmp 0x79ecfd
// 0079ecfa  8b4604               mov eax, dword ptr [esi + 4]
// 0079ecfd  8d4c2460             lea ecx, [esp + 0x60]
// 0079ed01  51                   push ecx
// 0079ed02  50                   push eax
// 0079ed03  ffd5                 call ebp
// 0079ed05  8b3dfced8900         mov edi, dword ptr [0x89edfc]
// 0079ed0b  8d542450             lea edx, [esp + 0x50]
// 0079ed0f  52                   push edx
// 0079ed10  ffd7                 call edi
// 0079ed12  85c0                 test eax, eax
// 0079ed14  7579                 jne 0x79ed8f
// 0079ed16  8d442438             lea eax, [esp + 0x38]
// 0079ed1a  50                   push eax
// 0079ed1b  ffd7                 call edi
// 0079ed1d  85c0                 test eax, eax
// 0079ed1f  756e                 jne 0x79ed8f
// 0079ed21  e8fa5dfbff           call 0x754b20
// 0079ed26  6a0f                 push 0xf
// 0079ed28  8bc8                 mov ecx, eax
// 0079ed2a  e87155fbff           call 0x7542a0
// 0079ed2f  50                   push eax
// 0079ed30  8d4c243c             lea ecx, [esp + 0x3c]
// 0079ed34  51                   push ecx
// 0079ed35  8bce                 mov ecx, esi
// 0079ed37  e894aaf7ff           call 0x7197d0
// 0079ed3c  837c244802           cmp dword ptr [esp + 0x48], 2
// 0079ed41  752e                 jne 0x79ed71
// 0079ed43  e8d85dfbff           call 0x754b20
// 0079ed48  6a10                 push 0x10
// 0079ed4a  8bc8                 mov ecx, eax
// 0079ed4c  e84f55fbff           call 0x7542a0
// 0079ed51  8bf8                 mov edi, eax
// 0079ed53  e8c85dfbff           call 0x754b20
// 0079ed58  6a14                 push 0x14
// 0079ed5a  8bc8                 mov ecx, eax
// 0079ed5c  e83f55fbff           call 0x7542a0
// 0079ed61  57                   push edi
// 0079ed62  50                   push eax
// 0079ed63  8d542440             lea edx, [esp + 0x40]
// 0079ed67  52                   push edx
// 0079ed68  8bce                 mov ecx, esi
// 0079ed6a  e85baaf7ff           call 0x7197ca
// 0079ed6f  eb1e                 jmp 0x79ed8f
// 0079ed71  85f6                 test esi, esi
// 0079ed73  7504                 jne 0x79ed79
// 0079ed75  33c0                 xor eax, eax
// 0079ed77  eb03                 jmp 0x79ed7c
// 0079ed79  8b4604               mov eax, dword ptr [esi + 4]
// 0079ed7c  680f200000           push 0x200f
// 0079ed81  6a05                 push 5
// 0079ed83  8d4c2440             lea ecx, [esp + 0x40]
// 0079ed87  51                   push ecx
// 0079ed88  50                   push eax
// 0079ed89  ff15c8ec8900         call dword ptr [0x89ecc8]
// 0079ed8f  83fb3f               cmp ebx, 0x3f
// 0079ed92  7524                 jne 0x79edb8
// 0079ed94  85f6                 test esi, esi
// 0079ed96  7515                 jne 0x79edad
// 0079ed98  8d542470             lea edx, [esp + 0x70]
// 0079ed9c  52                   push edx
// 0079ed9d  56                   push esi
// 0079ed9e  ffd5                 call ebp
// 0079eda0  5f                   pop edi
// 0079eda1  5e                   pop esi
// 0079eda2  5d                   pop ebp
// 0079eda3  5b                   pop ebx
// 0079eda4  81c484000000         add esp, 0x84
// 0079edaa  c20800               ret 8
// 0079edad  8b7604               mov esi, dword ptr [esi + 4]
// 0079edb0  8d542470             lea edx, [esp + 0x70]
// 0079edb4  52                   push edx
// 0079edb5  56                   push esi
// 0079edb6  ffd5                 call ebp
// 0079edb8  5f                   pop edi
// 0079edb9  5e                   pop esi
// 0079edba  5d                   pop ebp
// 0079edbb  5b                   pop ebx
// 0079edbc  81c484000000         add esp, 0x84
// 0079edc2  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DrawScrollBar@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
