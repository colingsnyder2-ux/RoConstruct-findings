// roc 2010-06 006c0bd0  unit: RBX::VDebrisService::?$FactoryProduct  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c0bd0
//
// 006c0bd0  6aff                 push -1
// 006c0bd2  6888df9a00           push 0x9adf88
// 006c0bd7  64a100000000         mov eax, dword ptr fs:[0]
// 006c0bdd  50                   push eax
// 006c0bde  64892500000000       mov dword ptr fs:[0], esp
// 006c0be5  51                   push ecx
// 006c0be6  56                   push esi
// 006c0be7  8bf1                 mov esi, ecx
// 006c0be9  8d442418             lea eax, [esp + 0x18]
// 006c0bed  50                   push eax
// 006c0bee  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006c0bf6  e8556b0300           call 0x6f7750
// 006c0bfb  83c404               add esp, 4
// 006c0bfe  84c0                 test al, al
// 006c0c00  0f8594000000         jne 0x6c0c9a
// 006c0c06  8b542424             mov edx, dword ptr [esp + 0x24]
// 006c0c0a  88442404             mov byte ptr [esp + 4], al
// 006c0c0e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c0c12  51                   push ecx
// 006c0c13  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006c0c17  52                   push edx
// 006c0c18  83ec0c               sub esp, 0xc
// 006c0c1b  8bc4                 mov eax, esp
// 006c0c1d  8908                 mov dword ptr [eax], ecx
// 006c0c1f  8b542430             mov edx, dword ptr [esp + 0x30]
// 006c0c23  895004               mov dword ptr [eax + 4], edx
// 006c0c26  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006c0c2a  894808               mov dword ptr [eax + 8], ecx
// 006c0c2d  8b442434             mov eax, dword ptr [esp + 0x34]
// 006c0c31  89642438             mov dword ptr [esp + 0x38], esp
// 006c0c35  85c0                 test eax, eax
// 006c0c37  740c                 je 0x6c0c45
// 006c0c39  83c004               add eax, 4
// 006c0c3c  ba01000000           mov edx, 1
// 006c0c41  f00fc110             lock xadd dword ptr [eax], edx
// 006c0c45  8bce                 mov ecx, esi
// 006c0c47  e8648ed9ff           call 0x459ab0
// 006c0c4c  8b742420             mov esi, dword ptr [esp + 0x20]
// 006c0c50  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006c0c58  85f6                 test esi, esi
// 006c0c5a  742a                 je 0x6c0c86
// 006c0c5c  8d4604               lea eax, [esi + 4]
// 006c0c5f  83c9ff               or ecx, 0xffffffff
// 006c0c62  f00fc108             lock xadd dword ptr [eax], ecx
// 006c0c66  751e                 jne 0x6c0c86
// 006c0c68  8b16                 mov edx, dword ptr [esi]
// 006c0c6a  8b4204               mov eax, dword ptr [edx + 4]
// 006c0c6d  8bce                 mov ecx, esi
// 006c0c6f  ffd0                 call eax
// 006c0c71  8d4e08               lea ecx, [esi + 8]
// 006c0c74  83caff               or edx, 0xffffffff
// 006c0c77  f00fc111             lock xadd dword ptr [ecx], edx
// 006c0c7b  7509                 jne 0x6c0c86
// 006c0c7d  8b06                 mov eax, dword ptr [esi]
// 006c0c7f  8b5008               mov edx, dword ptr [eax + 8]
// 006c0c82  8bce                 mov ecx, esi
// 006c0c84  ffd2                 call edx
// 006c0c86  b001                 mov al, 1
// 006c0c88  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c0c8c  64890d00000000       mov dword ptr fs:[0], ecx
// 006c0c93  5e                   pop esi
// 006c0c94  83c410               add esp, 0x10
// 006c0c97  c21400               ret 0x14
// 006c0c9a  8b742420             mov esi, dword ptr [esp + 0x20]
// 006c0c9e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006c0ca6  85f6                 test esi, esi
// 006c0ca8  742a                 je 0x6c0cd4
// 006c0caa  8d4604               lea eax, [esi + 4]
// 006c0cad  83c9ff               or ecx, 0xffffffff
// 006c0cb0  f00fc108             lock xadd dword ptr [eax], ecx
// 006c0cb4  751e                 jne 0x6c0cd4
// 006c0cb6  8b16                 mov edx, dword ptr [esi]
// 006c0cb8  8b4204               mov eax, dword ptr [edx + 4]
// 006c0cbb  8bce                 mov ecx, esi
// 006c0cbd  ffd0                 call eax
// 006c0cbf  8d4e08               lea ecx, [esi + 8]
// 006c0cc2  83caff               or edx, 0xffffffff
// 006c0cc5  f00fc111             lock xadd dword ptr [ecx], edx
// 006c0cc9  7509                 jne 0x6c0cd4
// 006c0ccb  8b06                 mov eax, dword ptr [esi]
// 006c0ccd  8b5008               mov edx, dword ptr [eax + 8]
// 006c0cd0  8bce                 mov ecx, esi
// 006c0cd2  ffd2                 call edx
// 006c0cd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c0cd8  32c0                 xor al, al
// 006c0cda  64890d00000000       mov dword ptr fs:[0], ecx
// 006c0ce1  5e                   pop esi
// 006c0ce2  83c410               add esp, 0x10
// 006c0ce5  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
