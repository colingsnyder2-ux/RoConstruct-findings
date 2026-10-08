// roc 2009-12 005fb210  unit: G3D::TextInput::WrongSymbol  size: 3042 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005fb210
//
// 005fb210  6aff                 push -1
// 005fb212  685ef99300           push 0x93f95e
// 005fb217  64a100000000         mov eax, dword ptr fs:[0]
// 005fb21d  50                   push eax
// 005fb21e  64892500000000       mov dword ptr fs:[0], esp
// 005fb225  81ec90000000         sub esp, 0x90
// 005fb22b  53                   push ebx
// 005fb22c  55                   push ebp
// 005fb22d  56                   push esi
// 005fb22e  8bf1                 mov esi, ecx
// 005fb230  6856fd9900           push 0x99fd56
// 005fb235  8d4c2414             lea ecx, [esp + 0x14]
// 005fb239  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005fb241  ff15f4b69800         call dword ptr [0x98b6f4]
// 005fb247  8b4630               mov eax, dword ptr [esi + 0x30]
// 005fb24a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005fb24d  8944242c             mov dword ptr [esp + 0x2c], eax
// 005fb251  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb254  894c2430             mov dword ptr [esp + 0x30], ecx
// 005fb258  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 005fb25b  bd01000000           mov ebp, 1
// 005fb260  89ac24a4000000       mov dword ptr [esp + 0xa4], ebp
// 005fb267  c744243403000000     mov dword ptr [esp + 0x34], 3
// 005fb26f  c744243805000000     mov dword ptr [esp + 0x38], 5
// 005fb277  3bc1                 cmp eax, ecx
// 005fb279  730c                 jae 0x5fb287
// 005fb27b  8b5620               mov edx, dword ptr [esi + 0x20]
// 005fb27e  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 005fb282  83fbff               cmp ebx, -1
// 005fb285  754b                 jne 0x5fb2d2
// 005fb287  8bb424ac000000       mov esi, dword ptr [esp + 0xac]
// 005fb28e  8d442410             lea eax, [esp + 0x10]
// 005fb292  50                   push eax
// 005fb293  8bce                 mov ecx, esi
// 005fb295  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fb29b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005fb29f  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fb2a3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005fb2a7  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005fb2aa  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005fb2ae  895620               mov dword ptr [esi + 0x20], edx
// 005fb2b1  894624               mov dword ptr [esi + 0x24], eax
// 005fb2b4  894e28               mov dword ptr [esi + 0x28], ecx
// 005fb2b7  8d4c2410             lea ecx, [esp + 0x10]
// 005fb2bb  896c240c             mov dword ptr [esp + 0xc], ebp
// 005fb2bf  c68424a400000000     mov byte ptr [esp + 0xa4], 0
// 005fb2c7  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fb2cd  e97f0a0000           jmp 0x5fbd51
// 005fb2d2  57                   push edi
// 005fb2d3  8b3d24b89800         mov edi, dword ptr [0x98b824]
// 005fb2d9  8da42400000000       lea esp, [esp]
// 005fb2e0  0fbed3               movsx edx, bl
// 005fb2e3  52                   push edx
// 005fb2e4  ffd7                 call edi
// 005fb2e6  83c404               add esp, 4
// 005fb2e9  85c0                 test eax, eax
// 005fb2eb  7447                 je 0x5fb334
// 005fb2ed  8d4900               lea ecx, [ecx]
// 005fb2f0  8b5624               mov edx, dword ptr [esi + 0x24]
// 005fb2f3  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb2f6  3bc2                 cmp eax, edx
// 005fb2f8  731a                 jae 0x5fb314
// 005fb2fa  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005fb2fd  8a0c08               mov cl, byte ptr [eax + ecx]
// 005fb300  40                   inc eax
// 005fb301  89462c               mov dword ptr [esi + 0x2c], eax
// 005fb304  80f90a               cmp cl, 0xa
// 005fb307  7508                 jne 0x5fb311
// 005fb309  016e30               add dword ptr [esi + 0x30], ebp
// 005fb30c  896e34               mov dword ptr [esi + 0x34], ebp
// 005fb30f  eb03                 jmp 0x5fb314
// 005fb311  016e34               add dword ptr [esi + 0x34], ebp
// 005fb314  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb317  3bc2                 cmp eax, edx
// 005fb319  7205                 jb 0x5fb320
// 005fb31b  83cbff               or ebx, 0xffffffff
// 005fb31e  eb07                 jmp 0x5fb327
// 005fb320  8b5620               mov edx, dword ptr [esi + 0x20]
// 005fb323  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 005fb327  0fbec3               movsx eax, bl
// 005fb32a  50                   push eax
// 005fb32b  ffd7                 call edi
// 005fb32d  83c404               add esp, 4
// 005fb330  85c0                 test eax, eax
// 005fb332  75bc                 jne 0x5fb2f0
// 005fb334  55                   push ebp
// 005fb335  8bce                 mov ecx, esi
// 005fb337  e8c4fcffff           call 0x5fb000
// 005fb33c  807e3900             cmp byte ptr [esi + 0x39], 0
// 005fb340  7409                 je 0x5fb34b
// 005fb342  83fb2f               cmp ebx, 0x2f
// 005fb345  7504                 jne 0x5fb34b
// 005fb347  3bc3                 cmp eax, ebx
// 005fb349  741c                 je 0x5fb367
// 005fb34b  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 005fb34e  84c9                 test cl, cl
// 005fb350  7407                 je 0x5fb359
// 005fb352  0fbec9               movsx ecx, cl
// 005fb355  3bd9                 cmp ebx, ecx
// 005fb357  740e                 je 0x5fb367
// 005fb359  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 005fb35c  84c9                 test cl, cl
// 005fb35e  7460                 je 0x5fb3c0
// 005fb360  0fbed1               movsx edx, cl
// 005fb363  3bda                 cmp ebx, edx
// 005fb365  7559                 jne 0x5fb3c0
// 005fb367  8b5624               mov edx, dword ptr [esi + 0x24]
// 005fb36a  8d9b00000000         lea ebx, [ebx]
// 005fb370  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb373  3bc2                 cmp eax, edx
// 005fb375  731a                 jae 0x5fb391
// 005fb377  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005fb37a  8a0c08               mov cl, byte ptr [eax + ecx]
// 005fb37d  40                   inc eax
// 005fb37e  89462c               mov dword ptr [esi + 0x2c], eax
// 005fb381  80f90a               cmp cl, 0xa
// 005fb384  7508                 jne 0x5fb38e
// 005fb386  016e30               add dword ptr [esi + 0x30], ebp
// 005fb389  896e34               mov dword ptr [esi + 0x34], ebp
// 005fb38c  eb03                 jmp 0x5fb391
// 005fb38e  016e34               add dword ptr [esi + 0x34], ebp
// 005fb391  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb394  3bc2                 cmp eax, edx
// 005fb396  7205                 jb 0x5fb39d
// 005fb398  83cbff               or ebx, 0xffffffff
// 005fb39b  eb07                 jmp 0x5fb3a4
// 005fb39d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005fb3a0  0fb61c08             movzx ebx, byte ptr [eax + ecx]
// 005fb3a4  80fb0a               cmp bl, 0xa
// 005fb3a7  0f8433ffffff         je 0x5fb2e0
// 005fb3ad  80fb0d               cmp bl, 0xd
// 005fb3b0  0f842affffff         je 0x5fb2e0
// 005fb3b6  83fbff               cmp ebx, -1
// 005fb3b9  75b5                 jne 0x5fb370
// 005fb3bb  e920ffffff           jmp 0x5fb2e0
// 005fb3c0  807e3800             cmp byte ptr [esi + 0x38], 0
// 005fb3c4  0f84fc000000         je 0x5fb4c6
// 005fb3ca  83fb2f               cmp ebx, 0x2f
// 005fb3cd  0f85f3000000         jne 0x5fb4c6
// 005fb3d3  83f82a               cmp eax, 0x2a
// 005fb3d6  0f85ea000000         jne 0x5fb4c6
// 005fb3dc  8b5e24               mov ebx, dword ptr [esi + 0x24]
// 005fb3df  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb3e2  3bc3                 cmp eax, ebx
// 005fb3e4  731a                 jae 0x5fb400
// 005fb3e6  8b5620               mov edx, dword ptr [esi + 0x20]
// 005fb3e9  8a0c10               mov cl, byte ptr [eax + edx]
// 005fb3ec  40                   inc eax
// 005fb3ed  89462c               mov dword ptr [esi + 0x2c], eax
// 005fb3f0  80f90a               cmp cl, 0xa
// 005fb3f3  7508                 jne 0x5fb3fd
// 005fb3f5  016e30               add dword ptr [esi + 0x30], ebp
// 005fb3f8  896e34               mov dword ptr [esi + 0x34], ebp
// 005fb3fb  eb03                 jmp 0x5fb400
// 005fb3fd  016e34               add dword ptr [esi + 0x34], ebp
// 005fb400  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb403  3bc3                 cmp eax, ebx
// 005fb405  731a                 jae 0x5fb421
// 005fb407  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005fb40a  8a0c08               mov cl, byte ptr [eax + ecx]
// 005fb40d  40                   inc eax
// 005fb40e  89462c               mov dword ptr [esi + 0x2c], eax
// 005fb411  80f90a               cmp cl, 0xa
// 005fb414  7508                 jne 0x5fb41e
// 005fb416  016e30               add dword ptr [esi + 0x30], ebp
// 005fb419  896e34               mov dword ptr [esi + 0x34], ebp
// 005fb41c  eb03                 jmp 0x5fb421
// 005fb41e  016e34               add dword ptr [esi + 0x34], ebp
// 005fb421  6a00                 push 0
// 005fb423  8bce                 mov ecx, esi
// 005fb425  e8d6fbffff           call 0x5fb000
// 005fb42a  55                   push ebp
// 005fb42b  8bce                 mov ecx, esi
// 005fb42d  8bf8                 mov edi, eax
// 005fb42f  e8ccfbffff           call 0x5fb000
// 005fb434  83ff2a               cmp edi, 0x2a
// 005fb437  7505                 jne 0x5fb43e
// 005fb439  83f82f               cmp eax, 0x2f
// 005fb43c  eb03                 jmp 0x5fb441
// 005fb43e  83ffff               cmp edi, -1
// 005fb441  7423                 je 0x5fb466
// 005fb443  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 005fb446  3bcb                 cmp ecx, ebx
// 005fb448  73e0                 jae 0x5fb42a
// 005fb44a  8b5620               mov edx, dword ptr [esi + 0x20]
// 005fb44d  8a1411               mov dl, byte ptr [ecx + edx]
// 005fb450  41                   inc ecx
// 005fb451  894e2c               mov dword ptr [esi + 0x2c], ecx
// 005fb454  80fa0a               cmp dl, 0xa
// 005fb457  7508                 jne 0x5fb461
// 005fb459  016e30               add dword ptr [esi + 0x30], ebp
// 005fb45c  896e34               mov dword ptr [esi + 0x34], ebp
// 005fb45f  ebc9                 jmp 0x5fb42a
// 005fb461  016e34               add dword ptr [esi + 0x34], ebp
// 005fb464  ebc4                 jmp 0x5fb42a
// 005fb466  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb469  3bc3                 cmp eax, ebx
// 005fb46b  731a                 jae 0x5fb487
// 005fb46d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005fb470  8a0c08               mov cl, byte ptr [eax + ecx]
// 005fb473  40                   inc eax
// 005fb474  89462c               mov dword ptr [esi + 0x2c], eax
// 005fb477  80f90a               cmp cl, 0xa
// 005fb47a  7508                 jne 0x5fb484
// 005fb47c  016e30               add dword ptr [esi + 0x30], ebp
// 005fb47f  896e34               mov dword ptr [esi + 0x34], ebp
// 005fb482  eb03                 jmp 0x5fb487
// 005fb484  016e34               add dword ptr [esi + 0x34], ebp
// 005fb487  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fb48a  3bc3                 cmp eax, ebx
// 005fb48c  7328                 jae 0x5fb4b6
// 005fb48e  8b5620               mov edx, dword ptr [esi + 0x20]
// 005fb491  8a0c10               mov cl, byte ptr [eax + edx]
// 005fb494  40                   inc eax
// 005fb495  89462c               mov dword ptr [esi + 0x2c], eax
// 005fb498  80f90a               cmp cl, 0xa
// 005fb49b  7516                 jne 0x5fb4b3
// 005fb49d  016e30               add dword ptr [esi + 0x30], ebp
// 005fb4a0  6a00                 push 0
// 005fb4a2  8bce                 mov ecx, esi
// 005fb4a4  896e34               mov dword ptr [esi + 0x34], ebp
// 005fb4a7  e854fbffff           call 0x5fb000
// 005fb4ac  8bd8                 mov ebx, eax
// 005fb4ae  e920feffff           jmp 0x5fb2d3
// 005fb4b3  016e34               add dword ptr [esi + 0x34], ebp
// 005fb4b6  6a00                 push 0
// 005fb4b8  8bce                 mov ecx, esi
// 005fb4ba  e841fbffff           call 0x5fb000
// 005fb4bf  8bd8                 mov ebx, eax
// 005fb4c1  e90dfeffff           jmp 0x5fb2d3
// 005fb4c6  8b4630               mov eax, dword ptr [esi + 0x30]
// 005fb4c9  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005fb4cc  89442430             mov dword ptr [esp + 0x30], eax
// 005fb4d0  894c2434             mov dword ptr [esp + 0x34], ecx
// 005fb4d4  83fbff               cmp ebx, -1
// 005fb4d7  7539                 jne 0x5fb512
// 005fb4d9  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb4e0  8d542414             lea edx, [esp + 0x14]
// 005fb4e4  52                   push edx
// 005fb4e5  8bce                 mov ecx, esi
// 005fb4e7  ff15f0b69800         call dword ptr [0x98b6f0]
// 005fb4ed  8b442430             mov eax, dword ptr [esp + 0x30]
// 005fb4f1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005fb4f5  8b542438             mov edx, dword ptr [esp + 0x38]
// 005fb4f9  89461c               mov dword ptr [esi + 0x1c], eax
// 005fb4fc  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005fb500  894e20               mov dword ptr [esi + 0x20], ecx
// 005fb503  895624               mov dword ptr [esi + 0x24], edx
// 005fb506  894628               mov dword ptr [esi + 0x28], eax
// 005fb509  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb50d  e92c080000           jmp 0x5fbd3e
// 005fb512  8d43df               lea eax, [ebx - 0x21]
// 005fb515  b902000000           mov ecx, 2
// 005fb51a  83f85d               cmp eax, 0x5d
// 005fb51d  0f8755010000         ja 0x5fb678
// 005fb523  0fb69094bd5f00       movzx edx, byte ptr [eax + 0x5fbd94]
// 005fb52a  ff249570bd5f00       jmp dword ptr [edx*4 + 0x5fbd70]
// 005fb531  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005fb535  53                   push ebx
// 005fb536  8d4c2418             lea ecx, [esp + 0x18]
// 005fb53a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005fb53e  ff1598b59800         call dword ptr [0x98b598]
// 005fb544  8bce                 mov ecx, esi
// 005fb546  e885fcffff           call 0x5fb1d0
// 005fb54b  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb552  8d442414             lea eax, [esp + 0x14]
// 005fb556  50                   push eax
// 005fb557  8bce                 mov ecx, esi
// 005fb559  e8c2f5ffff           call 0x5fab20
// 005fb55e  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb562  e9d7070000           jmp 0x5fbd3e
// 005fb567  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005fb56b  53                   push ebx
// 005fb56c  8d4c2418             lea ecx, [esp + 0x18]
// 005fb570  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005fb574  ff1598b59800         call dword ptr [0x98b598]
// 005fb57a  8bce                 mov ecx, esi
// 005fb57c  e84ffcffff           call 0x5fb1d0
// 005fb581  8bd8                 mov ebx, eax
// 005fb583  83fb2d               cmp ebx, 0x2d
// 005fb586  745b                 je 0x5fb5e3
// 005fb588  83fb3c               cmp ebx, 0x3c
// 005fb58b  7e05                 jle 0x5fb592
// 005fb58d  83fb3e               cmp ebx, 0x3e
// 005fb590  7e51                 jle 0x5fb5e3
// 005fb592  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 005fb596  742f                 je 0x5fb5c7
// 005fb598  53                   push ebx
// 005fb599  e842f5ffff           call 0x5faae0
// 005fb59e  83c404               add esp, 4
// 005fb5a1  84c0                 test al, al
// 005fb5a3  0f85cf000000         jne 0x5fb678
// 005fb5a9  83fb2e               cmp ebx, 0x2e
// 005fb5ac  7519                 jne 0x5fb5c7
// 005fb5ae  55                   push ebp
// 005fb5af  8bce                 mov ecx, esi
// 005fb5b1  e84afaffff           call 0x5fb000
// 005fb5b6  50                   push eax
// 005fb5b7  e824f5ffff           call 0x5faae0
// 005fb5bc  83c404               add esp, 4
// 005fb5bf  84c0                 test al, al
// 005fb5c1  0f85b1000000         jne 0x5fb678
// 005fb5c7  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb5ce  8d4c2414             lea ecx, [esp + 0x14]
// 005fb5d2  51                   push ecx
// 005fb5d3  8bce                 mov ecx, esi
// 005fb5d5  e846f5ffff           call 0x5fab20
// 005fb5da  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb5de  e95b070000           jmp 0x5fbd3e
// 005fb5e3  53                   push ebx
// 005fb5e4  8d4c2418             lea ecx, [esp + 0x18]
// 005fb5e8  ff154cb59800         call dword ptr [0x98b54c]
// 005fb5ee  8bce                 mov ecx, esi
// 005fb5f0  e8cbf9ffff           call 0x5fafc0
// 005fb5f5  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb5fc  8d542414             lea edx, [esp + 0x14]
// 005fb600  52                   push edx
// 005fb601  8bce                 mov ecx, esi
// 005fb603  e818f5ffff           call 0x5fab20
// 005fb608  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb60c  e92d070000           jmp 0x5fbd3e
// 005fb611  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005fb615  53                   push ebx
// 005fb616  8d4c2418             lea ecx, [esp + 0x18]
// 005fb61a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005fb61e  ff1598b59800         call dword ptr [0x98b598]
// 005fb624  8bce                 mov ecx, esi
// 005fb626  e8a5fbffff           call 0x5fb1d0
// 005fb62b  8bd8                 mov ebx, eax
// 005fb62d  83fb2b               cmp ebx, 0x2b
// 005fb630  0f84a1000000         je 0x5fb6d7
// 005fb636  83fb3d               cmp ebx, 0x3d
// 005fb639  0f8498000000         je 0x5fb6d7
// 005fb63f  807e3d00             cmp byte ptr [esi + 0x3d], 0
// 005fb643  0f8402ffffff         je 0x5fb54b
// 005fb649  53                   push ebx
// 005fb64a  e891f4ffff           call 0x5faae0
// 005fb64f  83c404               add esp, 4
// 005fb652  84c0                 test al, al
// 005fb654  7522                 jne 0x5fb678
// 005fb656  83fb2e               cmp ebx, 0x2e
// 005fb659  0f85ecfeffff         jne 0x5fb54b
// 005fb65f  55                   push ebp
// 005fb660  8bce                 mov ecx, esi
// 005fb662  e899f9ffff           call 0x5fb000
// 005fb667  50                   push eax
// 005fb668  e873f4ffff           call 0x5faae0
// 005fb66d  83c404               add esp, 4
// 005fb670  84c0                 test al, al
// 005fb672  0f84d3feffff         je 0x5fb54b
// 005fb678  8b2ddcb89800         mov ebp, dword ptr [0x98b8dc]
// 005fb67e  0fbefb               movsx edi, bl
// 005fb681  57                   push edi
// 005fb682  ffd5                 call ebp
// 005fb684  83c404               add esp, 4
// 005fb687  85c0                 test eax, eax
// 005fb689  0f853a030000         jne 0x5fb9c9
// 005fb68f  83fb2e               cmp ebx, 0x2e
// 005fb692  0f8431030000         je 0x5fb9c9
// 005fb698  53                   push ebx
// 005fb699  e862f4ffff           call 0x5fab00
// 005fb69e  83c404               add esp, 4
// 005fb6a1  84c0                 test al, al
// 005fb6a3  0f85bd020000         jne 0x5fb966
// 005fb6a9  83fb5f               cmp ebx, 0x5f
// 005fb6ac  0f84b4020000         je 0x5fb966
// 005fb6b2  83fb22               cmp ebx, 0x22
// 005fb6b5  0f8530020000         jne 0x5fb8eb
// 005fb6bb  8bce                 mov ecx, esi
// 005fb6bd  e8fef8ffff           call 0x5fafc0
// 005fb6c2  8d442414             lea eax, [esp + 0x14]
// 005fb6c6  50                   push eax
// 005fb6c7  53                   push ebx
// 005fb6c8  e863f9ffff           call 0x5fb030
// 005fb6cd  8d4c2414             lea ecx, [esp + 0x14]
// 005fb6d1  51                   push ecx
// 005fb6d2  e951060000           jmp 0x5fbd28
// 005fb6d7  53                   push ebx
// 005fb6d8  8d4c2418             lea ecx, [esp + 0x18]
// 005fb6dc  ff154cb59800         call dword ptr [0x98b54c]
// 005fb6e2  8bce                 mov ecx, esi
// 005fb6e4  e8d7f8ffff           call 0x5fafc0
// 005fb6e9  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb6f0  8d4c2414             lea ecx, [esp + 0x14]
// 005fb6f4  51                   push ecx
// 005fb6f5  8bce                 mov ecx, esi
// 005fb6f7  e824f4ffff           call 0x5fab20
// 005fb6fc  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb700  e939060000           jmp 0x5fbd3e
// 005fb705  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005fb709  53                   push ebx
// 005fb70a  8d4c2418             lea ecx, [esp + 0x18]
// 005fb70e  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005fb712  ff1598b59800         call dword ptr [0x98b598]
// 005fb718  8bce                 mov ecx, esi
// 005fb71a  e8b1faffff           call 0x5fb1d0
// 005fb71f  83f83a               cmp eax, 0x3a
// 005fb722  0f8523feffff         jne 0x5fb54b
// 005fb728  50                   push eax
// 005fb729  8d4c2418             lea ecx, [esp + 0x18]
// 005fb72d  ff154cb59800         call dword ptr [0x98b54c]
// 005fb733  8bce                 mov ecx, esi
// 005fb735  e886f8ffff           call 0x5fafc0
// 005fb73a  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb741  8d542414             lea edx, [esp + 0x14]
// 005fb745  52                   push edx
// 005fb746  8bce                 mov ecx, esi
// 005fb748  e8d3f3ffff           call 0x5fab20
// 005fb74d  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb751  e9e8050000           jmp 0x5fbd3e
// 005fb756  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005fb75a  53                   push ebx
// 005fb75b  8d4c2418             lea ecx, [esp + 0x18]
// 005fb75f  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005fb763  ff1598b59800         call dword ptr [0x98b598]
// 005fb769  8bce                 mov ecx, esi
// 005fb76b  e860faffff           call 0x5fb1d0
// 005fb770  83f83d               cmp eax, 0x3d
// 005fb773  75c5                 jne 0x5fb73a
// 005fb775  50                   push eax
// 005fb776  8d4c2418             lea ecx, [esp + 0x18]
// 005fb77a  ff154cb59800         call dword ptr [0x98b54c]
// 005fb780  8bce                 mov ecx, esi
// 005fb782  e839f8ffff           call 0x5fafc0
// 005fb787  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb78e  8d4c2414             lea ecx, [esp + 0x14]
// 005fb792  51                   push ecx
// 005fb793  8bce                 mov ecx, esi
// 005fb795  e886f3ffff           call 0x5fab20
// 005fb79a  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb79e  e99b050000           jmp 0x5fbd3e
// 005fb7a3  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005fb7a7  53                   push ebx
// 005fb7a8  8d4c2418             lea ecx, [esp + 0x18]
// 005fb7ac  8bfb                 mov edi, ebx
// 005fb7ae  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005fb7b2  ff1598b59800         call dword ptr [0x98b598]
// 005fb7b8  8bce                 mov ecx, esi
// 005fb7ba  e811faffff           call 0x5fb1d0
// 005fb7bf  83f83d               cmp eax, 0x3d
// 005fb7c2  7408                 je 0x5fb7cc
// 005fb7c4  3bf8                 cmp edi, eax
// 005fb7c6  0f857ffdffff         jne 0x5fb54b
// 005fb7cc  50                   push eax
// 005fb7cd  8d4c2418             lea ecx, [esp + 0x18]
// 005fb7d1  ff154cb59800         call dword ptr [0x98b54c]
// 005fb7d7  8bce                 mov ecx, esi
// 005fb7d9  e8e2f7ffff           call 0x5fafc0
// 005fb7de  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb7e5  8d4c2414             lea ecx, [esp + 0x14]
// 005fb7e9  51                   push ecx
// 005fb7ea  8bce                 mov ecx, esi
// 005fb7ec  e82ff3ffff           call 0x5fab20
// 005fb7f1  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb7f5  e944050000           jmp 0x5fbd3e
// 005fb7fa  894c243c             mov dword ptr [esp + 0x3c], ecx
// 005fb7fe  53                   push ebx
// 005fb7ff  8d4c2418             lea ecx, [esp + 0x18]
// 005fb803  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005fb807  ff1598b59800         call dword ptr [0x98b598]
// 005fb80d  8bce                 mov ecx, esi
// 005fb80f  e8bcf9ffff           call 0x5fb1d0
// 005fb814  8a4e3b               mov cl, byte ptr [esi + 0x3b]
// 005fb817  84c9                 test cl, cl
// 005fb819  7407                 je 0x5fb822
// 005fb81b  0fbed1               movsx edx, cl
// 005fb81e  3bc2                 cmp eax, edx
// 005fb820  7416                 je 0x5fb838
// 005fb822  8a4e3c               mov cl, byte ptr [esi + 0x3c]
// 005fb825  84c9                 test cl, cl
// 005fb827  0f841efdffff         je 0x5fb54b
// 005fb82d  0fbec9               movsx ecx, cl
// 005fb830  3bc1                 cmp eax, ecx
// 005fb832  0f8513fdffff         jne 0x5fb54b
// 005fb838  50                   push eax
// 005fb839  8d4c2418             lea ecx, [esp + 0x18]
// 005fb83d  ff1598b59800         call dword ptr [0x98b598]
// 005fb843  8bce                 mov ecx, esi
// 005fb845  e876f7ffff           call 0x5fafc0
// 005fb84a  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb851  8d542414             lea edx, [esp + 0x14]
// 005fb855  52                   push edx
// 005fb856  8bce                 mov ecx, esi
// 005fb858  e8c3f2ffff           call 0x5fab20
// 005fb85d  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb861  e9d8040000           jmp 0x5fbd3e
// 005fb866  55                   push ebp
// 005fb867  8bce                 mov ecx, esi
// 005fb869  e892f7ffff           call 0x5fb000
// 005fb86e  50                   push eax
// 005fb86f  e86cf2ffff           call 0x5faae0
// 005fb874  83c404               add esp, 4
// 005fb877  84c0                 test al, al
// 005fb879  0f85f9fdffff         jne 0x5fb678
// 005fb87f  53                   push ebx
// 005fb880  8d4c2418             lea ecx, [esp + 0x18]
// 005fb884  896c243c             mov dword ptr [esp + 0x3c], ebp
// 005fb888  c744244002000000     mov dword ptr [esp + 0x40], 2
// 005fb890  ff1598b59800         call dword ptr [0x98b598]
// 005fb896  8bce                 mov ecx, esi
// 005fb898  e833f9ffff           call 0x5fb1d0
// 005fb89d  83f82e               cmp eax, 0x2e
// 005fb8a0  0f8594feffff         jne 0x5fb73a
// 005fb8a6  50                   push eax
// 005fb8a7  8d4c2418             lea ecx, [esp + 0x18]
// 005fb8ab  ff154cb59800         call dword ptr [0x98b54c]
// 005fb8b1  8bce                 mov ecx, esi
// 005fb8b3  e818f9ffff           call 0x5fb1d0
// 005fb8b8  83f82e               cmp eax, 0x2e
// 005fb8bb  7512                 jne 0x5fb8cf
// 005fb8bd  50                   push eax
// 005fb8be  8d4c2418             lea ecx, [esp + 0x18]
// 005fb8c2  ff154cb59800         call dword ptr [0x98b54c]
// 005fb8c8  8bce                 mov ecx, esi
// 005fb8ca  e8f1f6ffff           call 0x5fafc0
// 005fb8cf  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005fb8d6  8d4c2414             lea ecx, [esp + 0x14]
// 005fb8da  51                   push ecx
// 005fb8db  8bce                 mov ecx, esi
// 005fb8dd  e83ef2ffff           call 0x5fab20
// 005fb8e2  896c2410             mov dword ptr [esp + 0x10], ebp
// 005fb8e6  e953040000           jmp 0x5fbd3e
// 005fb8eb  83fb27               cmp ebx, 0x27
// 005fb8ee  753e                 jne 0x5fb92e
// 005fb8f0  8bce                 mov ecx, esi
// 005fb8f2  e8c9f6ffff           call 0x5fafc0
// 005fb8f7  807e3e00             cmp byte ptr [esi + 0x3e], 0
// 005fb8fb  7410                 je 0x5fb90d
// 005fb8fd  8d542414             lea edx, [esp + 0x14]
// 005fb901  52                   push edx
// 005fb902  53                   push ebx
// 005fb903  e828f7ffff           call 0x5fb030
// 005fb908  e916040000           jmp 0x5fbd23
// 005fb90d  6a27                 push 0x27
// 005fb90f  8d4c2418             lea ecx, [esp + 0x18]
// 005fb913  ff1598b59800         call dword ptr [0x98b598]
// 005fb919  c744243801000000     mov dword ptr [esp + 0x38], 1
// 005fb921  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 005fb929  e9f5030000           jmp 0x5fbd23
// 005fb92e  83fbff               cmp ebx, -1
// 005fb931  7529                 jne 0x5fb95c
// 005fb933  6856fd9900           push 0x99fd56
// 005fb938  8d4c2418             lea ecx, [esp + 0x18]
// 005fb93c  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 005fb944  c744244005000000     mov dword ptr [esp + 0x40], 5
// 005fb94c  ff1500b79800         call dword ptr [0x98b700]
// 005fb952  8d4c2414             lea ecx, [esp + 0x14]
// 005fb956  51                   push ecx
// 005fb957  e9cc030000           jmp 0x5fbd28
// 005fb95c  8d542414             lea edx, [esp + 0x14]
// 005fb960  52                   push edx
// 005fb961  e9c2030000           jmp 0x5fbd28
// 005fb966  6856fd9900           push 0x99fd56
// 005fb96b  8d4c2418             lea ecx, [esp + 0x18]
// 005fb96f  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 005fb977  c744244002000000     mov dword ptr [esp + 0x40], 2
// 005fb97f  ff1500b79800         call dword ptr [0x98b700]
// 005fb985  8b2d4cb89800         mov ebp, dword ptr [0x98b84c]
// 005fb98b  eb03                 jmp 0x5fb990
// 005fb98d  8d4900               lea ecx, [ecx]
// 005fb990  53                   push ebx
// 005fb991  8d4c2418             lea ecx, [esp + 0x18]
// 005fb995  ff154cb59800         call dword ptr [0x98b54c]
// 005fb99b  8bce                 mov ecx, esi
// 005fb99d  e82ef8ffff           call 0x5fb1d0
// 005fb9a2  8bd8                 mov ebx, eax
// 005fb9a4  0fbefb               movsx edi, bl
// 005fb9a7  57                   push edi
// 005fb9a8  ffd5                 call ebp
// 005fb9aa  83c404               add esp, 4
// 005fb9ad  85c0                 test eax, eax
// 005fb9af  75df                 jne 0x5fb990
// 005fb9b1  57                   push edi
// 005fb9b2  ff15dcb89800         call dword ptr [0x98b8dc]
// 005fb9b8  83c404               add esp, 4
// 005fb9bb  85c0                 test eax, eax
// 005fb9bd  75d1                 jne 0x5fb990
// 005fb9bf  83fb5f               cmp ebx, 0x5f
// 005fb9c2  74cc                 je 0x5fb990
// 005fb9c4  e95a030000           jmp 0x5fbd23
// 005fb9c9  8d4c2414             lea ecx, [esp + 0x14]
// 005fb9cd  68942e9c00           push 0x9c2e94
// 005fb9d2  51                   push ecx
// 005fb9d3  ff156cb69800         call dword ptr [0x98b66c]
// 005fb9d9  83c408               add esp, 8
// 005fb9dc  84c0                 test al, al
// 005fb9de  740f                 je 0x5fb9ef
// 005fb9e0  6856fd9900           push 0x99fd56
// 005fb9e5  8d4c2418             lea ecx, [esp + 0x18]
// 005fb9e9  ff1500b79800         call dword ptr [0x98b700]
// 005fb9ef  c744243802000000     mov dword ptr [esp + 0x38], 2
// 005fb9f7  83fb2e               cmp ebx, 0x2e
// 005fb9fa  7554                 jne 0x5fba50
// 005fb9fc  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 005fba04  57                   push edi
// 005fba05  ffd5                 call ebp
// 005fba07  83c404               add esp, 4
// 005fba0a  85c0                 test eax, eax
// 005fba0c  0f84db000000         je 0x5fbaed
// 005fba12  bf01000000           mov edi, 1
// 005fba17  eb07                 jmp 0x5fba20
// 005fba19  8da42400000000       lea esp, [esp]
// 005fba20  53                   push ebx
// 005fba21  8d4c2418             lea ecx, [esp + 0x18]
// 005fba25  ff154cb59800         call dword ptr [0x98b54c]
// 005fba2b  8b5624               mov edx, dword ptr [esi + 0x24]
// 005fba2e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fba31  3bc2                 cmp eax, edx
// 005fba33  0f8390000000         jae 0x5fbac9
// 005fba39  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 005fba3c  8a0c08               mov cl, byte ptr [eax + ecx]
// 005fba3f  40                   inc eax
// 005fba40  89462c               mov dword ptr [esi + 0x2c], eax
// 005fba43  80f90a               cmp cl, 0xa
// 005fba46  757e                 jne 0x5fbac6
// 005fba48  017e30               add dword ptr [esi + 0x30], edi
// 005fba4b  897e34               mov dword ptr [esi + 0x34], edi
// 005fba4e  eb79                 jmp 0x5fbac9
// 005fba50  c744243c03000000     mov dword ptr [esp + 0x3c], 3
// 005fba58  83fb30               cmp ebx, 0x30
// 005fba5b  75a7                 jne 0x5fba04
// 005fba5d  6a01                 push 1
// 005fba5f  8bce                 mov ecx, esi
// 005fba61  e89af5ffff           call 0x5fb000
// 005fba66  83f878               cmp eax, 0x78
// 005fba69  7599                 jne 0x5fba04
// 005fba6b  68902e9c00           push 0x9c2e90
// 005fba70  8d4c2418             lea ecx, [esp + 0x18]
// 005fba74  ff1504b79800         call dword ptr [0x98b704]
// 005fba7a  8bce                 mov ecx, esi
// 005fba7c  e83ff5ffff           call 0x5fafc0
// 005fba81  e83af5ffff           call 0x5fafc0
// 005fba86  6a00                 push 0
// 005fba88  e873f5ffff           call 0x5fb000
// 005fba8d  8bd8                 mov ebx, eax
// 005fba8f  0fbed3               movsx edx, bl
// 005fba92  52                   push edx
// 005fba93  ffd5                 call ebp
// 005fba95  83c404               add esp, 4
// 005fba98  85c0                 test eax, eax
// 005fba9a  7516                 jne 0x5fbab2
// 005fba9c  83fb41               cmp ebx, 0x41
// 005fba9f  7c05                 jl 0x5fbaa6
// 005fbaa1  83fb46               cmp ebx, 0x46
// 005fbaa4  7e0c                 jle 0x5fbab2
// 005fbaa6  8d439f               lea eax, [ebx - 0x61]
// 005fbaa9  83f805               cmp eax, 5
// 005fbaac  0f8771020000         ja 0x5fbd23
// 005fbab2  53                   push ebx
// 005fbab3  8d4c2418             lea ecx, [esp + 0x18]
// 005fbab7  ff154cb59800         call dword ptr [0x98b54c]
// 005fbabd  8bce                 mov ecx, esi
// 005fbabf  e80cf7ffff           call 0x5fb1d0
// 005fbac4  ebc7                 jmp 0x5fba8d
// 005fbac6  017e34               add dword ptr [esi + 0x34], edi
// 005fbac9  8b462c               mov eax, dword ptr [esi + 0x2c]
// 005fbacc  3bc2                 cmp eax, edx
// 005fbace  7205                 jb 0x5fbad5
// 005fbad0  83cbff               or ebx, 0xffffffff
// 005fbad3  eb07                 jmp 0x5fbadc
// 005fbad5  8b5620               mov edx, dword ptr [esi + 0x20]
// 005fbad8  0fb61c10             movzx ebx, byte ptr [eax + edx]
// 005fbadc  0fbec3               movsx eax, bl
// 005fbadf  50                   push eax
// 005fbae0  ffd5                 call ebp
// 005fbae2  83c404               add esp, 4
// 005fbae5  85c0                 test eax, eax
// 005fbae7  0f8533ffffff         jne 0x5fba20
// 005fbaed  83fb2e               cmp ebx, 0x2e
// 005fbaf0  0f85bb010000         jne 0x5fbcb1
// 005fbaf6  53                   push ebx
// 005fbaf7  8d4c2418             lea ecx, [esp + 0x18]
// 005fbafb  c744244004000000     mov dword ptr [esp + 0x40], 4
// 005fbb03  ff154cb59800         call dword ptr [0x98b54c]
// 005fbb09  8bce                 mov ecx, esi
// 005fbb0b  e8c0f6ffff           call 0x5fb1d0
// 005fbb10  807e6000             cmp byte ptr [esi + 0x60], 0
// 005fbb14  8bd8                 mov ebx, eax
// 005fbb16  0f8464010000         je 0x5fbc80
// 005fbb1c  83fb23               cmp ebx, 0x23
// 005fbb1f  0f855b010000         jne 0x5fbc80
// 005fbb25  8bce                 mov ecx, esi
// 005fbb27  e8a4f6ffff           call 0x5fb1d0
// 005fbb2c  83f849               cmp eax, 0x49
// 005fbb2f  743d                 je 0x5fbb6e
// 005fbb31  68582e9c00           push 0x9c2e58
// 005fbb36  8d4c2444             lea ecx, [esp + 0x44]
// 005fbb3a  ff15f4b69800         call dword ptr [0x98b6f4]
// 005fbb40  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005fbb43  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fbb47  51                   push ecx
// 005fbb48  52                   push edx
// 005fbb49  8d442448             lea eax, [esp + 0x48]
// 005fbb4d  50                   push eax
// 005fbb4e  8d4c2468             lea ecx, [esp + 0x68]
// 005fbb52  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 005fbb5a  e851f2ffff           call 0x5fadb0
// 005fbb5f  681031ab00           push 0xab3110
// 005fbb64  8d4c2460             lea ecx, [esp + 0x60]
// 005fbb68  51                   push ecx
// 005fbb69  e80a8d1f00           call 0x7f4878
// 005fbb6e  8bce                 mov ecx, esi
// 005fbb70  e85bf6ffff           call 0x5fb1d0
// 005fbb75  83f84e               cmp eax, 0x4e
// 005fbb78  743d                 je 0x5fbbb7
// 005fbb7a  68582e9c00           push 0x9c2e58
// 005fbb7f  8d4c2444             lea ecx, [esp + 0x44]
// 005fbb83  ff15f4b69800         call dword ptr [0x98b6f4]
// 005fbb89  8b5634               mov edx, dword ptr [esi + 0x34]
// 005fbb8c  8b442430             mov eax, dword ptr [esp + 0x30]
// 005fbb90  52                   push edx
// 005fbb91  50                   push eax
// 005fbb92  8d4c2448             lea ecx, [esp + 0x48]
// 005fbb96  51                   push ecx
// 005fbb97  8d4c2468             lea ecx, [esp + 0x68]
// 005fbb9b  c68424b400000003     mov byte ptr [esp + 0xb4], 3
// 005fbba3  e808f2ffff           call 0x5fadb0
// 005fbba8  681031ab00           push 0xab3110
// 005fbbad  8d542460             lea edx, [esp + 0x60]
// 005fbbb1  52                   push edx
// 005fbbb2  e8c18c1f00           call 0x7f4878
// 005fbbb7  68542e9c00           push 0x9c2e54
// 005fbbbc  8d4c2418             lea ecx, [esp + 0x18]
// 005fbbc0  ff1504b79800         call dword ptr [0x98b704]
// 005fbbc6  8bce                 mov ecx, esi
// 005fbbc8  e803f6ffff           call 0x5fb1d0
// 005fbbcd  83f846               cmp eax, 0x46
// 005fbbd0  7442                 je 0x5fbc14
// 005fbbd2  83f844               cmp eax, 0x44
// 005fbbd5  743d                 je 0x5fbc14
// 005fbbd7  68582e9c00           push 0x9c2e58
// 005fbbdc  8d4c2444             lea ecx, [esp + 0x44]
// 005fbbe0  ff15f4b69800         call dword ptr [0x98b6f4]
// 005fbbe6  8b4634               mov eax, dword ptr [esi + 0x34]
// 005fbbe9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005fbbed  50                   push eax
// 005fbbee  51                   push ecx
// 005fbbef  8d542448             lea edx, [esp + 0x48]
// 005fbbf3  52                   push edx
// 005fbbf4  8d4c2468             lea ecx, [esp + 0x68]
// 005fbbf8  c68424b400000004     mov byte ptr [esp + 0xb4], 4
// 005fbc00  e8abf1ffff           call 0x5fadb0
// 005fbc05  681031ab00           push 0xab3110
// 005fbc0a  8d442460             lea eax, [esp + 0x60]
// 005fbc0e  50                   push eax
// 005fbc0f  e8648c1f00           call 0x7f4878
// 005fbc14  50                   push eax
// 005fbc15  8d4c2418             lea ecx, [esp + 0x18]
// 005fbc19  ff154cb59800         call dword ptr [0x98b54c]
// 005fbc1f  33ff                 xor edi, edi
// 005fbc21  8bce                 mov ecx, esi
// 005fbc23  e8a8f5ffff           call 0x5fb1d0
// 005fbc28  83f830               cmp eax, 0x30
// 005fbc2b  7516                 jne 0x5fbc43
// 005fbc2d  50                   push eax
// 005fbc2e  8d4c2418             lea ecx, [esp + 0x18]
// 005fbc32  ff154cb59800         call dword ptr [0x98b54c]
// 005fbc38  47                   inc edi
// 005fbc39  83ff02               cmp edi, 2
// 005fbc3c  7ce3                 jl 0x5fbc21
// 005fbc3e  e9e0000000           jmp 0x5fbd23
// 005fbc43  681c2e9c00           push 0x9c2e1c
// 005fbc48  8d4c2444             lea ecx, [esp + 0x44]
// 005fbc4c  ff15f4b69800         call dword ptr [0x98b6f4]
// 005fbc52  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005fbc55  8b542430             mov edx, dword ptr [esp + 0x30]
// 005fbc59  51                   push ecx
// 005fbc5a  52                   push edx
// 005fbc5b  8d442448             lea eax, [esp + 0x48]
// 005fbc5f  50                   push eax
// 005fbc60  8d4c2468             lea ecx, [esp + 0x68]
// 005fbc64  c68424b400000005     mov byte ptr [esp + 0xb4], 5
// 005fbc6c  e83ff1ffff           call 0x5fadb0
// 005fbc71  681031ab00           push 0xab3110
// 005fbc76  8d4c2460             lea ecx, [esp + 0x60]
// 005fbc7a  51                   push ecx
// 005fbc7b  e8f88b1f00           call 0x7f4878
// 005fbc80  0fbed3               movsx edx, bl
// 005fbc83  52                   push edx
// 005fbc84  ffd5                 call ebp
// 005fbc86  83c404               add esp, 4
// 005fbc89  85c0                 test eax, eax
// 005fbc8b  7424                 je 0x5fbcb1
// 005fbc8d  8d4900               lea ecx, [ecx]
// 005fbc90  53                   push ebx
// 005fbc91  8d4c2418             lea ecx, [esp + 0x18]
// 005fbc95  ff154cb59800         call dword ptr [0x98b54c]
// 005fbc9b  8bce                 mov ecx, esi
// 005fbc9d  e82ef5ffff           call 0x5fb1d0
// 005fbca2  8bd8                 mov ebx, eax
// 005fbca4  0fbec3               movsx eax, bl
// 005fbca7  50                   push eax
// 005fbca8  ffd5                 call ebp
// 005fbcaa  83c404               add esp, 4
// 005fbcad  85c0                 test eax, eax
// 005fbcaf  75df                 jne 0x5fbc90
// 005fbcb1  83fb65               cmp ebx, 0x65
// 005fbcb4  7405                 je 0x5fbcbb
// 005fbcb6  83fb45               cmp ebx, 0x45
// 005fbcb9  7568                 jne 0x5fbd23
// 005fbcbb  53                   push ebx
// 005fbcbc  8d4c2418             lea ecx, [esp + 0x18]
// 005fbcc0  c744244004000000     mov dword ptr [esp + 0x40], 4
// 005fbcc8  ff154cb59800         call dword ptr [0x98b54c]
// 005fbcce  8bce                 mov ecx, esi
// 005fbcd0  e8fbf4ffff           call 0x5fb1d0
// 005fbcd5  8bd8                 mov ebx, eax
// 005fbcd7  83fb2d               cmp ebx, 0x2d
// 005fbcda  7405                 je 0x5fbce1
// 005fbcdc  83fb2b               cmp ebx, 0x2b
// 005fbcdf  7514                 jne 0x5fbcf5
// 005fbce1  53                   push ebx
// 005fbce2  8d4c2418             lea ecx, [esp + 0x18]
// 005fbce6  ff154cb59800         call dword ptr [0x98b54c]
// 005fbcec  8bce                 mov ecx, esi
// 005fbcee  e8ddf4ffff           call 0x5fb1d0
// 005fbcf3  8bd8                 mov ebx, eax
// 005fbcf5  0fbecb               movsx ecx, bl
// 005fbcf8  51                   push ecx
// 005fbcf9  ffd5                 call ebp
// 005fbcfb  83c404               add esp, 4
// 005fbcfe  85c0                 test eax, eax
// 005fbd00  7421                 je 0x5fbd23
// 005fbd02  53                   push ebx
// 005fbd03  8d4c2418             lea ecx, [esp + 0x18]
// 005fbd07  ff154cb59800         call dword ptr [0x98b54c]
// 005fbd0d  8bce                 mov ecx, esi
// 005fbd0f  e8bcf4ffff           call 0x5fb1d0
// 005fbd14  8bd8                 mov ebx, eax
// 005fbd16  0fbed3               movsx edx, bl
// 005fbd19  52                   push edx
// 005fbd1a  ffd5                 call ebp
// 005fbd1c  83c404               add esp, 4
// 005fbd1f  85c0                 test eax, eax
// 005fbd21  75df                 jne 0x5fbd02
// 005fbd23  8d442414             lea eax, [esp + 0x14]
// 005fbd27  50                   push eax
// 005fbd28  8bb424b4000000       mov esi, dword ptr [esp + 0xb4]
// 005fbd2f  8bce                 mov ecx, esi
// 005fbd31  e8eaedffff           call 0x5fab20
// 005fbd36  c744241001000000     mov dword ptr [esp + 0x10], 1
// 005fbd3e  8d4c2414             lea ecx, [esp + 0x14]
// 005fbd42  c68424a800000000     mov byte ptr [esp + 0xa8], 0
// 005fbd4a  ff15e4b69800         call dword ptr [0x98b6e4]
// 005fbd50  5f                   pop edi
// 005fbd51  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 005fbd58  8bc6                 mov eax, esi
// 005fbd5a  5e                   pop esi
// 005fbd5b  5d                   pop ebp
// 005fbd5c  5b                   pop ebx
// 005fbd5d  64890d00000000       mov dword ptr fs:[0], ecx
// 005fbd64  81c49c000000         add esp, 0x9c
// 005fbd6a  c20400               ret 4
// 005fbd6d  8d4900               lea ecx, [ecx]
// 005fbd70  56                   push esi
// 005fbd71  b75f                 mov bh, 0x5f
// 005fbd73  0031                 add byte ptr [ecx], dh
// 005fbd75  b55f                 mov ch, 0x5f
// 005fbd77  00a3b75f0011         add byte ptr [ebx + 0x11005fb7], ah
// 005fbd7d  b65f                 mov dh, 0x5f
// 005fbd7f  0067b5               add byte ptr [edi - 0x4b], ah
// 005fbd82  5f                   pop edi
// 005fbd83  0066b8               add byte ptr [esi - 0x48], ah
// 005fbd86  5f                   pop edi
// 005fbd87  0005b75f00fa         add byte ptr [0xfa005fb7], al
// 005fbd8d  b75f                 mov bh, 0x5f
// 005fbd8f  0078b6               add byte ptr [eax - 0x4a], bh
// 005fbd92  5f                   pop edi
// 005fbd93  0000                 add byte ptr [eax], al
// 005fbd95  0801                 or byte ptr [ecx], al
// 005fbd97  0108                 add dword ptr [eax], ecx
// 005fbd99  0208                 add cl, byte ptr [eax]
// 005fbd9b  0101                 add dword ptr [ecx], eax
// 005fbd9d  0003                 add byte ptr [ebx], al
// 005fbd9f  01040500080808       add dword ptr [eax + 0x8080800], eax
// 005fbda6  0808                 or byte ptr [eax], cl
// 005fbda8  0808                 or byte ptr [eax], cl
// 005fbdaa  0808                 or byte ptr [eax], cl
// 005fbdac  0806                 or byte ptr [esi], al
// 005fbdae  0102                 add dword ptr [edx], eax
// 005fbdb0  0002                 add byte ptr [edx], al
// 005fbdb2  0101                 add dword ptr [ecx], eax
// 005fbdb4  0808                 or byte ptr [eax], cl
// 005fbdb6  0808                 or byte ptr [eax], cl
// 005fbdb8  0808                 or byte ptr [eax], cl
// 005fbdba  0808                 or byte ptr [eax], cl
// 005fbdbc  0808                 or byte ptr [eax], cl
// 005fbdbe  0808                 or byte ptr [eax], cl
// 005fbdc0  0808                 or byte ptr [eax], cl
// 005fbdc2  0808                 or byte ptr [eax], cl
// 005fbdc4  0808                 or byte ptr [eax], cl
// 005fbdc6  0808                 or byte ptr [eax], cl
// 005fbdc8  0808                 or byte ptr [eax], cl
// 005fbdca  0808                 or byte ptr [eax], cl
// 005fbdcc  0808                 or byte ptr [eax], cl
// 005fbdce  0107                 add dword ptr [edi], eax
// 005fbdd0  0100                 add dword ptr [eax], eax
// 005fbdd2  0808                 or byte ptr [eax], cl
// 005fbdd4  0808                 or byte ptr [eax], cl
// 005fbdd6  0808                 or byte ptr [eax], cl
// 005fbdd8  0808                 or byte ptr [eax], cl
// 005fbdda  0808                 or byte ptr [eax], cl
// 005fbddc  0808                 or byte ptr [eax], cl
// 005fbdde  0808                 or byte ptr [eax], cl
// 005fbde0  0808                 or byte ptr [eax], cl
// 005fbde2  0808                 or byte ptr [eax], cl
// 005fbde4  0808                 or byte ptr [eax], cl
// 005fbde6  0808                 or byte ptr [eax], cl
// 005fbde8  0808                 or byte ptr [eax], cl
// 005fbdea  0808                 or byte ptr [eax], cl
// 005fbdec  0808                 or byte ptr [eax], cl
// 005fbdee  0102                 add dword ptr [edx], eax
// 005fbdf0  0100                 add dword ptr [eax], eax
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?nextToken@TextInput@G3D@@AAE?AVToken@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
