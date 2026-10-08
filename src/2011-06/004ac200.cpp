// roc 2011-06 004ac200  unit: RBX::Network::Player::W4ChatMode::?$EnumDesc  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004ac200
//
// 004ac200  6aff                 push -1
// 004ac202  6858949e00           push 0x9e9458
// 004ac207  64a100000000         mov eax, dword ptr fs:[0]
// 004ac20d  50                   push eax
// 004ac20e  64892500000000       mov dword ptr fs:[0], esp
// 004ac215  51                   push ecx
// 004ac216  53                   push ebx
// 004ac217  56                   push esi
// 004ac218  8b542428             mov edx, dword ptr [esp + 0x28]
// 004ac21c  c644240800           mov byte ptr [esp + 8], 0
// 004ac221  8b442408             mov eax, dword ptr [esp + 8]
// 004ac225  50                   push eax
// 004ac226  52                   push edx
// 004ac227  8b542424             mov edx, dword ptr [esp + 0x24]
// 004ac22b  83ec0c               sub esp, 0xc
// 004ac22e  8bc4                 mov eax, esp
// 004ac230  8910                 mov dword ptr [eax], edx
// 004ac232  8b542434             mov edx, dword ptr [esp + 0x34]
// 004ac236  895004               mov dword ptr [eax + 4], edx
// 004ac239  8b542438             mov edx, dword ptr [esp + 0x38]
// 004ac23d  895008               mov dword ptr [eax + 8], edx
// 004ac240  8b442438             mov eax, dword ptr [esp + 0x38]
// 004ac244  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004ac24c  8964243c             mov dword ptr [esp + 0x3c], esp
// 004ac250  85c0                 test eax, eax
// 004ac252  740c                 je 0x4ac260
// 004ac254  83c004               add eax, 4
// 004ac257  ba01000000           mov edx, 1
// 004ac25c  f00fc110             lock xadd dword ptr [eax], edx
// 004ac260  e8cbeeffff           call 0x4ab130
// 004ac265  8b742424             mov esi, dword ptr [esp + 0x24]
// 004ac269  8ad8                 mov bl, al
// 004ac26b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004ac273  85f6                 test esi, esi
// 004ac275  742a                 je 0x4ac2a1
// 004ac277  8d4604               lea eax, [esi + 4]
// 004ac27a  83c9ff               or ecx, 0xffffffff
// 004ac27d  f00fc108             lock xadd dword ptr [eax], ecx
// 004ac281  751e                 jne 0x4ac2a1
// 004ac283  8b16                 mov edx, dword ptr [esi]
// 004ac285  8b4204               mov eax, dword ptr [edx + 4]
// 004ac288  8bce                 mov ecx, esi
// 004ac28a  ffd0                 call eax
// 004ac28c  8d4e08               lea ecx, [esi + 8]
// 004ac28f  83caff               or edx, 0xffffffff
// 004ac292  f00fc111             lock xadd dword ptr [ecx], edx
// 004ac296  7509                 jne 0x4ac2a1
// 004ac298  8b06                 mov eax, dword ptr [esi]
// 004ac29a  8b5008               mov edx, dword ptr [eax + 8]
// 004ac29d  8bce                 mov ecx, esi
// 004ac29f  ffd2                 call edx
// 004ac2a1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004ac2a5  5e                   pop esi
// 004ac2a6  8ac3                 mov al, bl
// 004ac2a8  64890d00000000       mov dword ptr fs:[0], ecx
// 004ac2af  5b                   pop ebx
// 004ac2b0  83c410               add esp, 0x10
// 004ac2b3  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
