// roc 2008-06 00592180  unit: RBX::RootInstance  size: 323 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00592180
//
// 00592180  6aff                 push -1
// 00592182  68e18a7c00           push 0x7c8ae1
// 00592187  64a100000000         mov eax, dword ptr fs:[0]
// 0059218d  50                   push eax
// 0059218e  64892500000000       mov dword ptr fs:[0], esp
// 00592195  83ec24               sub esp, 0x24
// 00592198  55                   push ebp
// 00592199  56                   push esi
// 0059219a  8bf1                 mov esi, ecx
// 0059219c  57                   push edi
// 0059219d  8d4c2414             lea ecx, [esp + 0x14]
// 005921a1  ff1560248000         call dword ptr [0x802460]
// 005921a7  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 005921ab  8d442414             lea eax, [esp + 0x14]
// 005921af  50                   push eax
// 005921b0  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 005921b8  e853a0feff           call 0x57c210
// 005921bd  8d4c2414             lea ecx, [esp + 0x14]
// 005921c1  51                   push ecx
// 005921c2  8d542410             lea edx, [esp + 0x10]
// 005921c6  83c61c               add esi, 0x1c
// 005921c9  52                   push edx
// 005921ca  8bce                 mov ecx, esi
// 005921cc  e8affbffff           call 0x591d80
// 005921d1  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005921d5  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 005921d8  8b36                 mov esi, dword ptr [esi]
// 005921da  85ff                 test edi, edi
// 005921dc  7404                 je 0x5921e2
// 005921de  3bfe                 cmp edi, esi
// 005921e0  7406                 je 0x5921e8
// 005921e2  ff1590288000         call dword ptr [0x802890]
// 005921e8  8b742410             mov esi, dword ptr [esp + 0x10]
// 005921ec  3bf5                 cmp esi, ebp
// 005921ee  7454                 je 0x592244
// 005921f0  85ff                 test edi, edi
// 005921f2  754c                 jne 0x592240
// 005921f4  ff1590288000         call dword ptr [0x802890]
// 005921fa  3b7718               cmp esi, dword ptr [edi + 0x18]
// 005921fd  7506                 jne 0x592205
// 005921ff  ff1590288000         call dword ptr [0x802890]
// 00592205  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00592209  8b11                 mov edx, dword ptr [ecx]
// 0059220b  8b12                 mov edx, dword ptr [edx]
// 0059220d  8d4628               lea eax, [esi + 0x28]
// 00592210  50                   push eax
// 00592211  8b442448             mov eax, dword ptr [esp + 0x48]
// 00592215  50                   push eax
// 00592216  ffd2                 call edx
// 00592218  8d4c2414             lea ecx, [esp + 0x14]
// 0059221c  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00592224  ff1568248000         call dword ptr [0x802468]
// 0059222a  5f                   pop edi
// 0059222b  5e                   pop esi
// 0059222c  b001                 mov al, 1
// 0059222e  5d                   pop ebp
// 0059222f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00592233  64890d00000000       mov dword ptr fs:[0], ecx
// 0059223a  83c430               add esp, 0x30
// 0059223d  c20c00               ret 0xc
// 00592240  8b3f                 mov edi, dword ptr [edi]
// 00592242  ebb6                 jmp 0x5921fa
// 00592244  6a00                 push 0
// 00592246  8d4c2410             lea ecx, [esp + 0x10]
// 0059224a  e8b12b0000           call 0x594e00
// 0059224f  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00592253  8b11                 mov edx, dword ptr [ecx]
// 00592255  8b12                 mov edx, dword ptr [edx]
// 00592257  50                   push eax
// 00592258  8b442448             mov eax, dword ptr [esp + 0x48]
// 0059225c  50                   push eax
// 0059225d  c644244001           mov byte ptr [esp + 0x40], 1
// 00592262  ffd2                 call edx
// 00592264  8b742410             mov esi, dword ptr [esp + 0x10]
// 00592268  c644243800           mov byte ptr [esp + 0x38], 0
// 0059226d  85f6                 test esi, esi
// 0059226f  742a                 je 0x59229b
// 00592271  8d4604               lea eax, [esi + 4]
// 00592274  83c9ff               or ecx, 0xffffffff
// 00592277  f00fc108             lock xadd dword ptr [eax], ecx
// 0059227b  751e                 jne 0x59229b
// 0059227d  8b16                 mov edx, dword ptr [esi]
// 0059227f  8b4204               mov eax, dword ptr [edx + 4]
// 00592282  8bce                 mov ecx, esi
// 00592284  ffd0                 call eax
// 00592286  8d4e08               lea ecx, [esi + 8]
// 00592289  83caff               or edx, 0xffffffff
// 0059228c  f00fc111             lock xadd dword ptr [ecx], edx
// 00592290  7509                 jne 0x59229b
// 00592292  8b06                 mov eax, dword ptr [esi]
// 00592294  8b5008               mov edx, dword ptr [eax + 8]
// 00592297  8bce                 mov ecx, esi
// 00592299  ffd2                 call edx
// 0059229b  8d4c2414             lea ecx, [esp + 0x14]
// 0059229f  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005922a7  ff1568248000         call dword ptr [0x802468]
// 005922ad  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005922b1  5f                   pop edi
// 005922b2  5e                   pop esi
// 005922b3  32c0                 xor al, al
// 005922b5  5d                   pop ebp
// 005922b6  64890d00000000       mov dword ptr fs:[0], ecx
// 005922bd  83c430               add esp, 0x30
// 005922c0  c20c00               ret 0xc
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?resolveIDREF@ArchiveBinder@@QAE_NUIDREFBinding@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
