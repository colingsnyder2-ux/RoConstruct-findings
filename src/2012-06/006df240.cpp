// roc 2012-06 006df240  unit: RBX::VFunctionalTest::?$FactoryProduct::Creator  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006df240
//
// 006df240  6aff                 push -1
// 006df242  68f810ab00           push 0xab10f8
// 006df247  64a100000000         mov eax, dword ptr fs:[0]
// 006df24d  50                   push eax
// 006df24e  64892500000000       mov dword ptr fs:[0], esp
// 006df255  51                   push ecx
// 006df256  56                   push esi
// 006df257  8bf1                 mov esi, ecx
// 006df259  8d442418             lea eax, [esp + 0x18]
// 006df25d  50                   push eax
// 006df25e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006df266  e8c51c1a00           call 0x880f30
// 006df26b  83c404               add esp, 4
// 006df26e  84c0                 test al, al
// 006df270  0f8594000000         jne 0x6df30a
// 006df276  8b542424             mov edx, dword ptr [esp + 0x24]
// 006df27a  88442404             mov byte ptr [esp + 4], al
// 006df27e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006df282  51                   push ecx
// 006df283  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006df287  52                   push edx
// 006df288  83ec0c               sub esp, 0xc
// 006df28b  8bc4                 mov eax, esp
// 006df28d  8908                 mov dword ptr [eax], ecx
// 006df28f  8b542430             mov edx, dword ptr [esp + 0x30]
// 006df293  895004               mov dword ptr [eax + 4], edx
// 006df296  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006df29a  894808               mov dword ptr [eax + 8], ecx
// 006df29d  8b442434             mov eax, dword ptr [esp + 0x34]
// 006df2a1  89642438             mov dword ptr [esp + 0x38], esp
// 006df2a5  85c0                 test eax, eax
// 006df2a7  740c                 je 0x6df2b5
// 006df2a9  83c004               add eax, 4
// 006df2ac  ba01000000           mov edx, 1
// 006df2b1  f00fc110             lock xadd dword ptr [eax], edx
// 006df2b5  8bce                 mov ecx, esi
// 006df2b7  e8d423daff           call 0x481690
// 006df2bc  8b742420             mov esi, dword ptr [esp + 0x20]
// 006df2c0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006df2c8  85f6                 test esi, esi
// 006df2ca  742a                 je 0x6df2f6
// 006df2cc  8d4604               lea eax, [esi + 4]
// 006df2cf  83c9ff               or ecx, 0xffffffff
// 006df2d2  f00fc108             lock xadd dword ptr [eax], ecx
// 006df2d6  751e                 jne 0x6df2f6
// 006df2d8  8b16                 mov edx, dword ptr [esi]
// 006df2da  8b4204               mov eax, dword ptr [edx + 4]
// 006df2dd  8bce                 mov ecx, esi
// 006df2df  ffd0                 call eax
// 006df2e1  8d4e08               lea ecx, [esi + 8]
// 006df2e4  83caff               or edx, 0xffffffff
// 006df2e7  f00fc111             lock xadd dword ptr [ecx], edx
// 006df2eb  7509                 jne 0x6df2f6
// 006df2ed  8b06                 mov eax, dword ptr [esi]
// 006df2ef  8b5008               mov edx, dword ptr [eax + 8]
// 006df2f2  8bce                 mov ecx, esi
// 006df2f4  ffd2                 call edx
// 006df2f6  b001                 mov al, 1
// 006df2f8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006df2fc  64890d00000000       mov dword ptr fs:[0], ecx
// 006df303  5e                   pop esi
// 006df304  83c410               add esp, 0x10
// 006df307  c21400               ret 0x14
// 006df30a  8b742420             mov esi, dword ptr [esp + 0x20]
// 006df30e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006df316  85f6                 test esi, esi
// 006df318  742a                 je 0x6df344
// 006df31a  8d4604               lea eax, [esi + 4]
// 006df31d  83c9ff               or ecx, 0xffffffff
// 006df320  f00fc108             lock xadd dword ptr [eax], ecx
// 006df324  751e                 jne 0x6df344
// 006df326  8b16                 mov edx, dword ptr [esi]
// 006df328  8b4204               mov eax, dword ptr [edx + 4]
// 006df32b  8bce                 mov ecx, esi
// 006df32d  ffd0                 call eax
// 006df32f  8d4e08               lea ecx, [esi + 8]
// 006df332  83caff               or edx, 0xffffffff
// 006df335  f00fc111             lock xadd dword ptr [ecx], edx
// 006df339  7509                 jne 0x6df344
// 006df33b  8b06                 mov eax, dword ptr [esi]
// 006df33d  8b5008               mov edx, dword ptr [eax + 8]
// 006df340  8bce                 mov ecx, esi
// 006df342  ffd2                 call edx
// 006df344  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006df348  32c0                 xor al, al
// 006df34a  64890d00000000       mov dword ptr fs:[0], ecx
// 006df351  5e                   pop esi
// 006df352  83c410               add esp, 0x10
// 006df355  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
