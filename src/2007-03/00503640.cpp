// roc 2007-03 00503640  unit: seg_00500000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00503640
//
// 00503640  6aff                 push -1
// 00503642  68820f7500           push 0x750f82
// 00503647  64a100000000         mov eax, dword ptr fs:[0]
// 0050364d  50                   push eax
// 0050364e  83ec30               sub esp, 0x30
// 00503651  56                   push esi
// 00503652  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00503657  33c4                 xor eax, esp
// 00503659  50                   push eax
// 0050365a  8d442438             lea eax, [esp + 0x38]
// 0050365e  64a300000000         mov dword ptr fs:[0], eax
// 00503664  8d44240c             lea eax, [esp + 0xc]
// 00503668  50                   push eax
// 00503669  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00503671  e86affffff           call 0x5035e0
// 00503676  8b742448             mov esi, dword ptr [esp + 0x48]
// 0050367a  50                   push eax
// 0050367b  8bce                 mov ecx, esi
// 0050367d  c744244401000000     mov dword ptr [esp + 0x44], 1
// 00503685  ff157ce77700         call dword ptr [0x77e77c]
// 0050368b  8d4c240c             lea ecx, [esp + 0xc]
// 0050368f  c744240801000000     mov dword ptr [esp + 8], 1
// 00503697  c644244000           mov byte ptr [esp + 0x40], 0
// 0050369c  ff158ce77700         call dword ptr [0x77e78c]
// 005036a2  8bc6                 mov eax, esi
// 005036a4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 005036a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005036af  59                   pop ecx
// 005036b0  5e                   pop esi
// 005036b1  83c43c               add esp, 0x3c
// 005036b4  c20400               ret 4
// library g3d-6.09/G3Dcpp\TextInput.cpp (function ?readString@TextInput@G3D@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/TextInput.cpp
