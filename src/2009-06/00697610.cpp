// roc 2009-06 00697610  unit: RBX::VDebrisService::?$FactoryProduct  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00697610
//
// 00697610  6aff                 push -1
// 00697612  68883e8700           push 0x873e88
// 00697617  64a100000000         mov eax, dword ptr fs:[0]
// 0069761d  50                   push eax
// 0069761e  64892500000000       mov dword ptr fs:[0], esp
// 00697625  51                   push ecx
// 00697626  56                   push esi
// 00697627  8bf1                 mov esi, ecx
// 00697629  8d442418             lea eax, [esp + 0x18]
// 0069762d  50                   push eax
// 0069762e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00697636  e87552faff           call 0x63c8b0
// 0069763b  83c404               add esp, 4
// 0069763e  84c0                 test al, al
// 00697640  0f8594000000         jne 0x6976da
// 00697646  8b542424             mov edx, dword ptr [esp + 0x24]
// 0069764a  88442404             mov byte ptr [esp + 4], al
// 0069764e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00697652  51                   push ecx
// 00697653  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00697657  52                   push edx
// 00697658  83ec0c               sub esp, 0xc
// 0069765b  8bc4                 mov eax, esp
// 0069765d  8908                 mov dword ptr [eax], ecx
// 0069765f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00697663  895004               mov dword ptr [eax + 4], edx
// 00697666  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0069766a  894808               mov dword ptr [eax + 8], ecx
// 0069766d  8b442434             mov eax, dword ptr [esp + 0x34]
// 00697671  89642438             mov dword ptr [esp + 0x38], esp
// 00697675  85c0                 test eax, eax
// 00697677  740c                 je 0x697685
// 00697679  83c004               add eax, 4
// 0069767c  ba01000000           mov edx, 1
// 00697681  f00fc110             lock xadd dword ptr [eax], edx
// 00697685  8bce                 mov ecx, esi
// 00697687  e8846e0700           call 0x70e510
// 0069768c  8b742420             mov esi, dword ptr [esp + 0x20]
// 00697690  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00697698  85f6                 test esi, esi
// 0069769a  742a                 je 0x6976c6
// 0069769c  8d4604               lea eax, [esi + 4]
// 0069769f  83c9ff               or ecx, 0xffffffff
// 006976a2  f00fc108             lock xadd dword ptr [eax], ecx
// 006976a6  751e                 jne 0x6976c6
// 006976a8  8b16                 mov edx, dword ptr [esi]
// 006976aa  8b4204               mov eax, dword ptr [edx + 4]
// 006976ad  8bce                 mov ecx, esi
// 006976af  ffd0                 call eax
// 006976b1  8d4e08               lea ecx, [esi + 8]
// 006976b4  83caff               or edx, 0xffffffff
// 006976b7  f00fc111             lock xadd dword ptr [ecx], edx
// 006976bb  7509                 jne 0x6976c6
// 006976bd  8b06                 mov eax, dword ptr [esi]
// 006976bf  8b5008               mov edx, dword ptr [eax + 8]
// 006976c2  8bce                 mov ecx, esi
// 006976c4  ffd2                 call edx
// 006976c6  b001                 mov al, 1
// 006976c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006976cc  64890d00000000       mov dword ptr fs:[0], ecx
// 006976d3  5e                   pop esi
// 006976d4  83c410               add esp, 0x10
// 006976d7  c21400               ret 0x14
// 006976da  8b742420             mov esi, dword ptr [esp + 0x20]
// 006976de  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006976e6  85f6                 test esi, esi
// 006976e8  742a                 je 0x697714
// 006976ea  8d4604               lea eax, [esi + 4]
// 006976ed  83c9ff               or ecx, 0xffffffff
// 006976f0  f00fc108             lock xadd dword ptr [eax], ecx
// 006976f4  751e                 jne 0x697714
// 006976f6  8b16                 mov edx, dword ptr [esi]
// 006976f8  8b4204               mov eax, dword ptr [edx + 4]
// 006976fb  8bce                 mov ecx, esi
// 006976fd  ffd0                 call eax
// 006976ff  8d4e08               lea ecx, [esi + 8]
// 00697702  83caff               or edx, 0xffffffff
// 00697705  f00fc111             lock xadd dword ptr [ecx], edx
// 00697709  7509                 jne 0x697714
// 0069770b  8b06                 mov eax, dword ptr [esi]
// 0069770d  8b5008               mov edx, dword ptr [eax + 8]
// 00697710  8bce                 mov ecx, esi
// 00697712  ffd2                 call edx
// 00697714  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00697718  32c0                 xor al, al
// 0069771a  64890d00000000       mov dword ptr fs:[0], ecx
// 00697721  5e                   pop esi
// 00697722  83c410               add esp, 0x10
// 00697725  c21400               ret 0x14
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
