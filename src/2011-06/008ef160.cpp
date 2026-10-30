// roc 2011-06 008ef160  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 520 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ef160
//
// 008ef160  6aff                 push -1
// 008ef162  6822e8a000           push 0xa0e822
// 008ef167  64a100000000         mov eax, dword ptr fs:[0]
// 008ef16d  50                   push eax
// 008ef16e  83ec14               sub esp, 0x14
// 008ef171  53                   push ebx
// 008ef172  55                   push ebp
// 008ef173  56                   push esi
// 008ef174  57                   push edi
// 008ef175  a12058c900           mov eax, dword ptr [0xc95820]
// 008ef17a  33c4                 xor eax, esp
// 008ef17c  50                   push eax
// 008ef17d  8d442428             lea eax, [esp + 0x28]
// 008ef181  64a300000000         mov dword ptr fs:[0], eax
// 008ef187  8bf1                 mov esi, ecx
// 008ef189  8d4c2414             lea ecx, [esp + 0x14]
// 008ef18d  e8ae14f9ff           call 0x880640
// 008ef192  8d8628010000         lea eax, [esi + 0x128]
// 008ef198  50                   push eax
// 008ef199  8d4c2418             lea ecx, [esp + 0x18]
// 008ef19d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 008ef1a5  e80693fcff           call 0x8b84b0
// 008ef1aa  8b8648010000         mov eax, dword ptr [esi + 0x148]
// 008ef1b0  8bbeb0000000         mov edi, dword ptr [esi + 0xb0]
// 008ef1b6  8b9ea4000000         mov ebx, dword ptr [esi + 0xa4]
// 008ef1bc  8d48ff               lea ecx, [eax - 1]
// 008ef1bf  8b442438             mov eax, dword ptr [esp + 0x38]
// 008ef1c3  3bc1                 cmp eax, ecx
// 008ef1c5  0f85dd000000         jne 0x8ef2a8
// 008ef1cb  f6c304               test bl, 4
// 008ef1ce  0f84d4000000         je 0x8ef2a8
// 008ef1d4  682c010000           push 0x12c
// 008ef1d9  e880aef1ff           call 0x80a05e
// 008ef1de  8be8                 mov ebp, eax
// 008ef1e0  83c404               add esp, 4
// 008ef1e3  896c2438             mov dword ptr [esp + 0x38], ebp
// 008ef1e7  c644243001           mov byte ptr [esp + 0x30], 1
// 008ef1ec  85ed                 test ebp, ebp
// 008ef1ee  7420                 je 0x8ef210
// 008ef1f0  8b5620               mov edx, dword ptr [esi + 0x20]
// 008ef1f3  52                   push edx
// 008ef1f4  ff15b819a400         call dword ptr [0xa419b8]
// 008ef1fa  50                   push eax
// 008ef1fb  e828b1f1ff           call 0x80a328
// 008ef200  50                   push eax
// 008ef201  83e360               and ebx, 0x60
// 008ef204  53                   push ebx
// 008ef205  57                   push edi
// 008ef206  57                   push edi
// 008ef207  8bcd                 mov ecx, ebp
// 008ef209  e86217f8ff           call 0x870970
// 008ef20e  eb02                 jmp 0x8ef212
// 008ef210  33c0                 xor eax, eax
// 008ef212  898658010000         mov dword ptr [esi + 0x158], eax
// 008ef218  8b10                 mov edx, dword ptr [eax]
// 008ef21a  8bc8                 mov ecx, eax
// 008ef21c  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 008ef222  c644243000           mov byte ptr [esp + 0x30], 0
// 008ef227  ffd0                 call eax
// 008ef229  83f801               cmp eax, 1
// 008ef22c  7556                 jne 0x8ef284
// 008ef22e  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 008ef234  8b8124010000         mov eax, dword ptr [ecx + 0x124]
// 008ef23a  3bf8                 cmp edi, eax
// 008ef23c  7507                 jne 0x8ef245
// 008ef23e  bd29270000           mov ebp, 0x2729
// 008ef243  eb07                 jmp 0x8ef24c
// 008ef245  bd2c270000           mov ebp, 0x272c
// 008ef24a  8bf8                 mov edi, eax
// 008ef24c  8b159492d100         mov edx, dword ptr [0xd19294]
// 008ef252  3b566c               cmp edx, dword ptr [esi + 0x6c]
// 008ef255  7c0e                 jl 0x8ef265
// 008ef257  6a01                 push 1
// 008ef259  6a00                 push 0
// 008ef25b  b98c92d100           mov ecx, 0xd1928c
// 008ef260  e8f3db0d00           call 0x9cce58
// 008ef265  57                   push edi
// 008ef266  8bce                 mov ecx, esi
// 008ef268  e8c3faffff           call 0x8eed30
// 008ef26d  85c0                 test eax, eax
// 008ef26f  7518                 jne 0x8ef289
// 008ef271  a19492d100           mov eax, dword ptr [0xd19294]
// 008ef276  57                   push edi
// 008ef277  50                   push eax
// 008ef278  b98c92d100           mov ecx, 0xd1928c
// 008ef27d  e8ecd40d00           call 0x9cc76e
// 008ef282  eb05                 jmp 0x8ef289
// 008ef284  bd2d270000           mov ebp, 0x272d
// 008ef289  8b8e58010000         mov ecx, dword ptr [esi + 0x158]
// 008ef28f  85c9                 test ecx, ecx
// 008ef291  746d                 je 0x8ef300
// 008ef293  8b11                 mov edx, dword ptr [ecx]
// 008ef295  8b4204               mov eax, dword ptr [edx + 4]
// 008ef298  6a01                 push 1
// 008ef29a  ffd0                 call eax
// 008ef29c  c7865801000000000000 mov dword ptr [esi + 0x158], 0
// 008ef2a6  eb58                 jmp 0x8ef300
// 008ef2a8  85c0                 test eax, eax
// 008ef2aa  7524                 jne 0x8ef2d0
// 008ef2ac  f6c301               test bl, 1
// 008ef2af  740a                 je 0x8ef2bb
// 008ef2b1  bd2e270000           mov ebp, 0x272e
// 008ef2b6  83cfff               or edi, 0xffffffff
// 008ef2b9  eb45                 jmp 0x8ef300
// 008ef2bb  8bb6b4000000         mov esi, dword ptr [esi + 0xb4]
// 008ef2c1  3bfe                 cmp edi, esi
// 008ef2c3  7507                 jne 0x8ef2cc
// 008ef2c5  bd29270000           mov ebp, 0x2729
// 008ef2ca  eb34                 jmp 0x8ef300
// 008ef2cc  8bfe                 mov edi, esi
// 008ef2ce  eb2b                 jmp 0x8ef2fb
// 008ef2d0  83f8ff               cmp eax, -1
// 008ef2d3  7507                 jne 0x8ef2dc
// 008ef2d5  bd2d270000           mov ebp, 0x272d
// 008ef2da  eb24                 jmp 0x8ef300
// 008ef2dc  50                   push eax
// 008ef2dd  8bce                 mov ecx, esi
// 008ef2df  e8ccf5ffff           call 0x8ee8b0
// 008ef2e4  85c0                 test eax, eax
// 008ef2e6  7454                 je 0x8ef33c
// 008ef2e8  8b8020010000         mov eax, dword ptr [eax + 0x120]
// 008ef2ee  3bf8                 cmp edi, eax
// 008ef2f0  7507                 jne 0x8ef2f9
// 008ef2f2  bd29270000           mov ebp, 0x2729
// 008ef2f7  eb07                 jmp 0x8ef300
// 008ef2f9  8bf8                 mov edi, eax
// 008ef2fb  bd2c270000           mov ebp, 0x272c
// 008ef300  33f6                 xor esi, esi
// 008ef302  3974241c             cmp dword ptr [esp + 0x1c], esi
// 008ef306  7e34                 jle 0x8ef33c
// 008ef308  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008ef30c  85f6                 test esi, esi
// 008ef30e  7c53                 jl 0x8ef363
// 008ef310  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 008ef314  7d4d                 jge 0x8ef363
// 008ef316  8b0cb3               mov ecx, dword ptr [ebx + esi*4]
// 008ef319  51                   push ecx
// 008ef31a  ff15ec1ba400         call dword ptr [0xa41bec]
// 008ef320  85c0                 test eax, eax
// 008ef322  7411                 je 0x8ef335
// 008ef324  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 008ef328  8b04b3               mov eax, dword ptr [ebx + esi*4]
// 008ef32b  52                   push edx
// 008ef32c  57                   push edi
// 008ef32d  55                   push ebp
// 008ef32e  50                   push eax
// 008ef32f  ff15c019a400         call dword ptr [0xa419c0]
// 008ef335  46                   inc esi
// 008ef336  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 008ef33a  7cd0                 jl 0x8ef30c
// 008ef33c  8d4c2414             lea ecx, [esp + 0x14]
// 008ef340  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 008ef348  e81313f9ff           call 0x880660
// 008ef34d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008ef351  64890d00000000       mov dword ptr fs:[0], ecx
// 008ef358  59                   pop ecx
// 008ef359  5f                   pop edi
// 008ef35a  5e                   pop esi
// 008ef35b  5d                   pop ebp
// 008ef35c  5b                   pop ebx
// 008ef35d  83c420               add esp, 0x20
// 008ef360  c20800               ret 8
// 008ef363  e8a2aff1ff           call 0x80a30a
// copied from an identical function in another client (function ?OnEndSelection@CXTColorSelectorCtrl@@MAEXHJ@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Controls\XTColorSelectorCtrl.cpp