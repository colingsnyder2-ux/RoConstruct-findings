// roc 2007-08 004bd720  unit: RakPeer  size: 443 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004bd720
//
// 004bd720  81ec00010000         sub esp, 0x100
// 004bd726  33c0                 xor eax, eax
// 004bd728  53                   push ebx
// 004bd729  55                   push ebp
// 004bd72a  56                   push esi
// 004bd72b  8bb42410010000       mov esi, dword ptr [esp + 0x110]
// 004bd732  57                   push edi
// 004bd733  b908000000           mov ecx, 8
// 004bd738  8d7c2410             lea edi, [esp + 0x10]
// 004bd73c  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bd73e  8bb42418010000       mov esi, dword ptr [esp + 0x118]
// 004bd745  b908000000           mov ecx, 8
// 004bd74a  8dbc2490000000       lea edi, [esp + 0x90]
// 004bd751  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bd753  8bb4241c010000       mov esi, dword ptr [esp + 0x11c]
// 004bd75a  b908000000           mov ecx, 8
// 004bd75f  8d7c2450             lea edi, [esp + 0x50]
// 004bd763  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bd765  6a3c                 push 0x3c
// 004bd767  50                   push eax
// 004bd768  89442438             mov dword ptr [esp + 0x38], eax
// 004bd76c  8944243c             mov dword ptr [esp + 0x3c], eax
// 004bd770  89442440             mov dword ptr [esp + 0x40], eax
// 004bd774  89442444             mov dword ptr [esp + 0x44], eax
// 004bd778  89442448             mov dword ptr [esp + 0x48], eax
// 004bd77c  8944244c             mov dword ptr [esp + 0x4c], eax
// 004bd780  89442450             mov dword ptr [esp + 0x50], eax
// 004bd784  89442454             mov dword ptr [esp + 0x54], eax
// 004bd788  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 004bd78f  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 004bd796  898424c0000000       mov dword ptr [esp + 0xc0], eax
// 004bd79d  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 004bd7a4  898424c8000000       mov dword ptr [esp + 0xc8], eax
// 004bd7ab  898424cc000000       mov dword ptr [esp + 0xcc], eax
// 004bd7b2  898424d0000000       mov dword ptr [esp + 0xd0], eax
// 004bd7b9  898424d4000000       mov dword ptr [esp + 0xd4], eax
// 004bd7c0  89442478             mov dword ptr [esp + 0x78], eax
// 004bd7c4  8944247c             mov dword ptr [esp + 0x7c], eax
// 004bd7c8  89842480000000       mov dword ptr [esp + 0x80], eax
// 004bd7cf  89842484000000       mov dword ptr [esp + 0x84], eax
// 004bd7d6  89842488000000       mov dword ptr [esp + 0x88], eax
// 004bd7dd  8984248c000000       mov dword ptr [esp + 0x8c], eax
// 004bd7e4  89842490000000       mov dword ptr [esp + 0x90], eax
// 004bd7eb  89842494000000       mov dword ptr [esp + 0x94], eax
// 004bd7f2  8d8424dc000000       lea eax, [esp + 0xdc]
// 004bd7f9  50                   push eax
// 004bd7fa  c78424dc00000001000000 mov dword ptr [esp + 0xdc], 1
// 004bd805  e882331700           call 0x630b8c
// 004bd80a  8d4c241c             lea ecx, [esp + 0x1c]
// 004bd80e  51                   push ecx
// 004bd80f  8d542460             lea edx, [esp + 0x60]
// 004bd813  52                   push edx
// 004bd814  8bc1                 mov eax, ecx
// 004bd816  50                   push eax
// 004bd817  e834d9ffff           call 0x4bb150
// 004bd81c  83c418               add esp, 0x18
// 004bd81f  33f6                 xor esi, esi
// 004bd821  33ed                 xor ebp, ebp
// 004bd823  eb0b                 jmp 0x4bd830
// 004bd825  8da42400000000       lea esp, [esp]
// 004bd82c  8d642400             lea esp, [esp]
// 004bd830  8b9cac90000000       mov ebx, dword ptr [esp + ebp*4 + 0x90]
// 004bd837  85db                 test ebx, ebx
// 004bd839  bf20000000           mov edi, 0x20
// 004bd83e  746d                 je 0x4bd8ad
// 004bd840  f6c301               test bl, 1
// 004bd843  745c                 je 0x4bd8a1
// 004bd845  85f6                 test esi, esi
// 004bd847  742b                 je 0x4bd874
// 004bd849  8da42400000000       lea esp, [esp]
// 004bd850  8d4c2410             lea ecx, [esp + 0x10]
// 004bd854  51                   push ecx
// 004bd855  e846dfffff           call 0x4bb7a0
// 004bd85a  8d542414             lea edx, [esp + 0x14]
// 004bd85e  52                   push edx
// 004bd85f  8d442458             lea eax, [esp + 0x58]
// 004bd863  50                   push eax
// 004bd864  8bca                 mov ecx, edx
// 004bd866  51                   push ecx
// 004bd867  e8e4d8ffff           call 0x4bb150
// 004bd86c  83c410               add esp, 0x10
// 004bd86f  83ee01               sub esi, 1
// 004bd872  75dc                 jne 0x4bd850
// 004bd874  8d9424d0000000       lea edx, [esp + 0xd0]
// 004bd87b  52                   push edx
// 004bd87c  8d442414             lea eax, [esp + 0x14]
// 004bd880  50                   push eax
// 004bd881  8bca                 mov ecx, edx
// 004bd883  51                   push ecx
// 004bd884  e837e0ffff           call 0x4bb8c0
// 004bd889  8d9424dc000000       lea edx, [esp + 0xdc]
// 004bd890  52                   push edx
// 004bd891  8d442460             lea eax, [esp + 0x60]
// 004bd895  50                   push eax
// 004bd896  8bca                 mov ecx, edx
// 004bd898  51                   push ecx
// 004bd899  e8b2d8ffff           call 0x4bb150
// 004bd89e  83c418               add esp, 0x18
// 004bd8a1  d1eb                 shr ebx, 1
// 004bd8a3  83c601               add esi, 1
// 004bd8a6  83ef01               sub edi, 1
// 004bd8a9  85db                 test ebx, ebx
// 004bd8ab  7593                 jne 0x4bd840
// 004bd8ad  83c501               add ebp, 1
// 004bd8b0  03f7                 add esi, edi
// 004bd8b2  83fd08               cmp ebp, 8
// 004bd8b5  0f8275ffffff         jb 0x4bd830
// 004bd8bb  8bbc2420010000       mov edi, dword ptr [esp + 0x120]
// 004bd8c2  b908000000           mov ecx, 8
// 004bd8c7  8db424d0000000       lea esi, [esp + 0xd0]
// 004bd8ce  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bd8d0  5f                   pop edi
// 004bd8d1  5e                   pop esi
// 004bd8d2  5d                   pop ebp
// 004bd8d3  5b                   pop ebx
// 004bd8d4  81c400010000         add esp, 0x100
// 004bd8da  c3                   ret 
// library openrbx-raknet/RakPeer.cpp (function ??$simpleModExp@$$BY07I@big@@YAXAAY07I000@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet RakPeer.cpp
