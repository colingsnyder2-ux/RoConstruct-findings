// roc 2010-06 0086a420  unit: CXTPDockingPanePaintManager  size: 583 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0086a420
//
// 0086a420  6aff                 push -1
// 0086a422  68f6929b00           push 0x9b92f6
// 0086a427  64a100000000         mov eax, dword ptr fs:[0]
// 0086a42d  50                   push eax
// 0086a42e  81ec84010000         sub esp, 0x184
// 0086a434  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0086a439  33c4                 xor eax, esp
// 0086a43b  89842480010000       mov dword ptr [esp + 0x180], eax
// 0086a442  53                   push ebx
// 0086a443  55                   push ebp
// 0086a444  56                   push esi
// 0086a445  57                   push edi
// 0086a446  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0086a44b  33c4                 xor eax, esp
// 0086a44d  50                   push eax
// 0086a44e  8d842498010000       lea eax, [esp + 0x198]
// 0086a455  64a300000000         mov dword ptr fs:[0], eax
// 0086a45b  8bf1                 mov esi, ecx
// 0086a45d  e88eb2f7ff           call 0x7e56f0
// 0086a462  e8b996f7ff           call 0x7e3b20
// 0086a467  8bd8                 mov ebx, eax
// 0086a469  33ff                 xor edi, edi
// 0086a46b  8daea4000000         lea ebp, [esi + 0xa4]
// 0086a471  57                   push edi
// 0086a472  8bcb                 mov ecx, ebx
// 0086a474  e8378ef7ff           call 0x7e32b0
// 0086a479  894500               mov dword ptr [ebp], eax
// 0086a47c  47                   inc edi
// 0086a47d  83c504               add ebp, 4
// 0086a480  83ff3e               cmp edi, 0x3e
// 0086a483  76ec                 jbe 0x86a471
// 0086a485  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0086a48b  89463c               mov dword ptr [esi + 0x3c], eax
// 0086a48e  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0086a494  894648               mov dword ptr [esi + 0x48], eax
// 0086a497  e88496f7ff           call 0x7e3b20
// 0086a49c  d905e026a100         fld dword ptr [0xa126e0]
// 0086a4a2  8b3d04ba9e00         mov edi, dword ptr [0x9eba04]
// 0086a4a8  51                   push ecx
// 0086a4a9  d91c24               fstp dword ptr [esp]
// 0086a4ac  68cd000000           push 0xcd
// 0086a4b1  6a05                 push 5
// 0086a4b3  8bd8                 mov ebx, eax
// 0086a4b5  ffd7                 call edi
// 0086a4b7  50                   push eax
// 0086a4b8  6a0f                 push 0xf
// 0086a4ba  ffd7                 call edi
// 0086a4bc  50                   push eax
// 0086a4bd  8bcb                 mov ecx, ebx
// 0086a4bf  e83c8df7ff           call 0x7e3200
// 0086a4c4  50                   push eax
// 0086a4c5  6a0f                 push 0xf
// 0086a4c7  ffd7                 call edi
// 0086a4c9  50                   push eax
// 0086a4ca  8d4e50               lea ecx, [esi + 0x50]
// 0086a4cd  e83e8bf7ff           call 0x7e3010
// 0086a4d2  33db                 xor ebx, ebx
// 0086a4d4  399e98000000         cmp dword ptr [esi + 0x98], ebx
// 0086a4da  744f                 je 0x86a52b
// 0086a4dc  6850010000           push 0x150
// 0086a4e1  8d442448             lea eax, [esp + 0x48]
// 0086a4e5  53                   push ebx
// 0086a4e6  50                   push eax
// 0086a4e7  c744244c54010000     mov dword ptr [esp + 0x4c], 0x154
// 0086a4ef  e8f0e6f3ff           call 0x7a8be4
// 0086a4f4  83c40c               add esp, 0xc
// 0086a4f7  53                   push ebx
// 0086a4f8  8d4c2444             lea ecx, [esp + 0x44]
// 0086a4fc  51                   push ecx
// 0086a4fd  6854010000           push 0x154
// 0086a502  6a29                 push 0x29
// 0086a504  ff1594ba9e00         call dword ptr [0x9eba94]
// 0086a50a  395e20               cmp dword ptr [esi + 0x20], ebx
// 0086a50d  750b                 jne 0x86a51a
// 0086a50f  c78424ac00000090010000 mov dword ptr [esp + 0xac], 0x190
// 0086a51a  6a01                 push 1
// 0086a51c  8d9424a0000000       lea edx, [esp + 0xa0]
// 0086a523  52                   push edx
// 0086a524  8bce                 mov ecx, esi
// 0086a526  e835fdffff           call 0x86a260
// 0086a52b  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 0086a531  8b01                 mov eax, dword ptr [ecx]
// 0086a533  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0086a536  ffd2                 call edx
// 0086a538  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 0086a53e  8b01                 mov eax, dword ptr [ecx]
// 0086a540  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0086a543  ffd2                 call edx
// 0086a545  ff1574ba9e00         call dword ptr [0x9eba74]
// 0086a54b  50                   push eax
// 0086a54c  e819d7f3ff           call 0x7a7c6a
// 0086a551  50                   push eax
// 0086a552  8d4c2420             lea ecx, [esp + 0x20]
// 0086a556  e841281100           call 0x97cd9c
// 0086a55b  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0086a561  050c010000           add eax, 0x10c
// 0086a566  50                   push eax
// 0086a567  8d442420             lea eax, [esp + 0x20]
// 0086a56b  50                   push eax
// 0086a56c  8d4c2438             lea ecx, [esp + 0x38]
// 0086a570  899c24a8010000       mov dword ptr [esp + 0x1a8], ebx
// 0086a577  e82451f9ff           call 0x7ff6a0
// 0086a57c  8b542424             mov edx, dword ptr [esp + 0x24]
// 0086a580  8b3d94a19e00         mov edi, dword ptr [0x9ea194]
// 0086a586  8d4c2414             lea ecx, [esp + 0x14]
// 0086a58a  51                   push ecx
// 0086a58b  6a01                 push 1
// 0086a58d  68e86ea000           push 0xa06ee8
// 0086a592  52                   push edx
// 0086a593  c68424b001000001     mov byte ptr [esp + 0x1b0], 1
// 0086a59b  ffd7                 call edi
// 0086a59d  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086a5a1  83c00a               add eax, 0xa
// 0086a5a4  83f818               cmp eax, 0x18
// 0086a5a7  7d07                 jge 0x86a5b0
// 0086a5a9  b818000000           mov eax, 0x18
// 0086a5ae  eb1a                 jmp 0x86a5ca
// 0086a5b0  8b542424             mov edx, dword ptr [esp + 0x24]
// 0086a5b4  8d4c2414             lea ecx, [esp + 0x14]
// 0086a5b8  51                   push ecx
// 0086a5b9  6a01                 push 1
// 0086a5bb  68e86ea000           push 0xa06ee8
// 0086a5c0  52                   push edx
// 0086a5c1  ffd7                 call edi
// 0086a5c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 0086a5c7  83c00a               add eax, 0xa
// 0086a5ca  68b8bea600           push 0xa6beb8
// 0086a5cf  53                   push ebx
// 0086a5d0  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 0086a5d6  898680000000         mov dword ptr [esi + 0x80], eax
// 0086a5dc  e81f57fbff           call 0x81fd00
// 0086a5e1  68845da500           push 0xa55d84
// 0086a5e6  53                   push ebx
// 0086a5e7  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 0086a5ed  e80e57fbff           call 0x81fd00
// 0086a5f2  686c6ea600           push 0xa66e6c
// 0086a5f7  53                   push ebx
// 0086a5f8  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 0086a5fe  e8fd56fbff           call 0x81fd00
// 0086a603  686c5fa600           push 0xa65f6c
// 0086a608  53                   push ebx
// 0086a609  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 0086a60f  e8ec56fbff           call 0x81fd00
// 0086a614  8d4c2430             lea ecx, [esp + 0x30]
// 0086a618  899eec010000         mov dword ptr [esi + 0x1ec], ebx
// 0086a61e  c68424a001000000     mov byte ptr [esp + 0x1a0], 0
// 0086a626  e8f550f9ff           call 0x7ff720
// 0086a62b  8d4c241c             lea ecx, [esp + 0x1c]
// 0086a62f  c78424a0010000ffffffff mov dword ptr [esp + 0x1a0], 0xffffffff
// 0086a63a  e857271100           call 0x97cd96
// 0086a63f  8b8c2498010000       mov ecx, dword ptr [esp + 0x198]
// 0086a646  64890d00000000       mov dword ptr fs:[0], ecx
// 0086a64d  59                   pop ecx
// 0086a64e  5f                   pop edi
// 0086a64f  5e                   pop esi
// 0086a650  5d                   pop ebp
// 0086a651  5b                   pop ebx
// 0086a652  8b8c2480010000       mov ecx, dword ptr [esp + 0x180]
// 0086a659  33cc                 xor ecx, esp
// 0086a65b  e874eef3ff           call 0x7a94d4
// 0086a660  81c490010000         add esp, 0x190
// 0086a666  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CXTPDockingPanePaintManager@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\DockingPane\XTPDockingPanePaintManager.cpp