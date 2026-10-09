// roc 2009-12 0044efd0  unit: CRobloxApp  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044efd0
//
// 0044efd0  6aff                 push -1
// 0044efd2  6888459400           push 0x944588
// 0044efd7  64a100000000         mov eax, dword ptr fs:[0]
// 0044efdd  50                   push eax
// 0044efde  64892500000000       mov dword ptr fs:[0], esp
// 0044efe5  51                   push ecx
// 0044efe6  56                   push esi
// 0044efe7  8bf1                 mov esi, ecx
// 0044efe9  8d442418             lea eax, [esp + 0x18]
// 0044efed  50                   push eax
// 0044efee  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0044eff6  e875a93000           call 0x759970
// 0044effb  83c404               add esp, 4
// 0044effe  84c0                 test al, al
// 0044f000  0f8594000000         jne 0x44f09a
// 0044f006  8b542424             mov edx, dword ptr [esp + 0x24]
// 0044f00a  88442404             mov byte ptr [esp + 4], al
// 0044f00e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044f012  51                   push ecx
// 0044f013  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0044f017  52                   push edx
// 0044f018  83ec0c               sub esp, 0xc
// 0044f01b  8bc4                 mov eax, esp
// 0044f01d  8908                 mov dword ptr [eax], ecx
// 0044f01f  8b542430             mov edx, dword ptr [esp + 0x30]
// 0044f023  895004               mov dword ptr [eax + 4], edx
// 0044f026  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0044f02a  894808               mov dword ptr [eax + 8], ecx
// 0044f02d  8b442434             mov eax, dword ptr [esp + 0x34]
// 0044f031  89642438             mov dword ptr [esp + 0x38], esp
// 0044f035  85c0                 test eax, eax
// 0044f037  740c                 je 0x44f045
// 0044f039  83c004               add eax, 4
// 0044f03c  ba01000000           mov edx, 1
// 0044f041  f00fc110             lock xadd dword ptr [eax], edx
// 0044f045  8bce                 mov ecx, esi
// 0044f047  e8c49e2100           call 0x668f10
// 0044f04c  8b742420             mov esi, dword ptr [esp + 0x20]
// 0044f050  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044f058  85f6                 test esi, esi
// 0044f05a  742a                 je 0x44f086
// 0044f05c  8d4604               lea eax, [esi + 4]
// 0044f05f  83c9ff               or ecx, 0xffffffff
// 0044f062  f00fc108             lock xadd dword ptr [eax], ecx
// 0044f066  751e                 jne 0x44f086
// 0044f068  8b16                 mov edx, dword ptr [esi]
// 0044f06a  8b4204               mov eax, dword ptr [edx + 4]
// 0044f06d  8bce                 mov ecx, esi
// 0044f06f  ffd0                 call eax
// 0044f071  8d4e08               lea ecx, [esi + 8]
// 0044f074  83caff               or edx, 0xffffffff
// 0044f077  f00fc111             lock xadd dword ptr [ecx], edx
// 0044f07b  7509                 jne 0x44f086
// 0044f07d  8b06                 mov eax, dword ptr [esi]
// 0044f07f  8b5008               mov edx, dword ptr [eax + 8]
// 0044f082  8bce                 mov ecx, esi
// 0044f084  ffd2                 call edx
// 0044f086  b001                 mov al, 1
// 0044f088  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044f08c  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f093  5e                   pop esi
// 0044f094  83c410               add esp, 0x10
// 0044f097  c21400               ret 0x14
// 0044f09a  8b742420             mov esi, dword ptr [esp + 0x20]
// 0044f09e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0044f0a6  85f6                 test esi, esi
// 0044f0a8  742a                 je 0x44f0d4
// 0044f0aa  8d4604               lea eax, [esi + 4]
// 0044f0ad  83c9ff               or ecx, 0xffffffff
// 0044f0b0  f00fc108             lock xadd dword ptr [eax], ecx
// 0044f0b4  751e                 jne 0x44f0d4
// 0044f0b6  8b16                 mov edx, dword ptr [esi]
// 0044f0b8  8b4204               mov eax, dword ptr [edx + 4]
// 0044f0bb  8bce                 mov ecx, esi
// 0044f0bd  ffd0                 call eax
// 0044f0bf  8d4e08               lea ecx, [esi + 8]
// 0044f0c2  83caff               or edx, 0xffffffff
// 0044f0c5  f00fc111             lock xadd dword ptr [ecx], edx
// 0044f0c9  7509                 jne 0x44f0d4
// 0044f0cb  8b06                 mov eax, dword ptr [esi]
// 0044f0cd  8b5008               mov edx, dword ptr [eax + 8]
// 0044f0d0  8bce                 mov ecx, esi
// 0044f0d2  ffd2                 call edx
// 0044f0d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044f0d8  32c0                 xor al, al
// 0044f0da  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f0e1  5e                   pop esi
// 0044f0e2  83c410               add esp, 0x10
// 0044f0e5  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
