// roc 2011-06 004ab130  unit: RBX::Network::Player  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ab130
//
// 004ab130  6aff                 push -1
// 004ab132  6858949e00           push 0x9e9458
// 004ab137  64a100000000         mov eax, dword ptr fs:[0]
// 004ab13d  50                   push eax
// 004ab13e  64892500000000       mov dword ptr fs:[0], esp
// 004ab145  51                   push ecx
// 004ab146  56                   push esi
// 004ab147  8bf1                 mov esi, ecx
// 004ab149  8d442418             lea eax, [esp + 0x18]
// 004ab14d  50                   push eax
// 004ab14e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004ab156  e825962500           call 0x704780
// 004ab15b  83c404               add esp, 4
// 004ab15e  84c0                 test al, al
// 004ab160  0f8594000000         jne 0x4ab1fa
// 004ab166  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ab16a  88442404             mov byte ptr [esp + 4], al
// 004ab16e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ab172  51                   push ecx
// 004ab173  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ab177  52                   push edx
// 004ab178  83ec0c               sub esp, 0xc
// 004ab17b  8bc4                 mov eax, esp
// 004ab17d  8908                 mov dword ptr [eax], ecx
// 004ab17f  8b542430             mov edx, dword ptr [esp + 0x30]
// 004ab183  895004               mov dword ptr [eax + 4], edx
// 004ab186  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004ab18a  894808               mov dword ptr [eax + 8], ecx
// 004ab18d  8b442434             mov eax, dword ptr [esp + 0x34]
// 004ab191  89642438             mov dword ptr [esp + 0x38], esp
// 004ab195  85c0                 test eax, eax
// 004ab197  740c                 je 0x4ab1a5
// 004ab199  83c004               add eax, 4
// 004ab19c  ba01000000           mov edx, 1
// 004ab1a1  f00fc110             lock xadd dword ptr [eax], edx
// 004ab1a5  8bce                 mov ecx, esi
// 004ab1a7  e884b72b00           call 0x766930
// 004ab1ac  8b742420             mov esi, dword ptr [esp + 0x20]
// 004ab1b0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004ab1b8  85f6                 test esi, esi
// 004ab1ba  742a                 je 0x4ab1e6
// 004ab1bc  8d4604               lea eax, [esi + 4]
// 004ab1bf  83c9ff               or ecx, 0xffffffff
// 004ab1c2  f00fc108             lock xadd dword ptr [eax], ecx
// 004ab1c6  751e                 jne 0x4ab1e6
// 004ab1c8  8b16                 mov edx, dword ptr [esi]
// 004ab1ca  8b4204               mov eax, dword ptr [edx + 4]
// 004ab1cd  8bce                 mov ecx, esi
// 004ab1cf  ffd0                 call eax
// 004ab1d1  8d4e08               lea ecx, [esi + 8]
// 004ab1d4  83caff               or edx, 0xffffffff
// 004ab1d7  f00fc111             lock xadd dword ptr [ecx], edx
// 004ab1db  7509                 jne 0x4ab1e6
// 004ab1dd  8b06                 mov eax, dword ptr [esi]
// 004ab1df  8b5008               mov edx, dword ptr [eax + 8]
// 004ab1e2  8bce                 mov ecx, esi
// 004ab1e4  ffd2                 call edx
// 004ab1e6  b001                 mov al, 1
// 004ab1e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ab1ec  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab1f3  5e                   pop esi
// 004ab1f4  83c410               add esp, 0x10
// 004ab1f7  c21400               ret 0x14
// 004ab1fa  8b742420             mov esi, dword ptr [esp + 0x20]
// 004ab1fe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004ab206  85f6                 test esi, esi
// 004ab208  742a                 je 0x4ab234
// 004ab20a  8d4604               lea eax, [esi + 4]
// 004ab20d  83c9ff               or ecx, 0xffffffff
// 004ab210  f00fc108             lock xadd dword ptr [eax], ecx
// 004ab214  751e                 jne 0x4ab234
// 004ab216  8b16                 mov edx, dword ptr [esi]
// 004ab218  8b4204               mov eax, dword ptr [edx + 4]
// 004ab21b  8bce                 mov ecx, esi
// 004ab21d  ffd0                 call eax
// 004ab21f  8d4e08               lea ecx, [esi + 8]
// 004ab222  83caff               or edx, 0xffffffff
// 004ab225  f00fc111             lock xadd dword ptr [ecx], edx
// 004ab229  7509                 jne 0x4ab234
// 004ab22b  8b06                 mov eax, dword ptr [esi]
// 004ab22d  8b5008               mov edx, dword ptr [eax + 8]
// 004ab230  8bce                 mov ecx, esi
// 004ab232  ffd2                 call edx
// 004ab234  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ab238  32c0                 xor al, al
// 004ab23a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab241  5e                   pop esi
// 004ab242  83c410               add esp, 0x10
// 004ab245  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
