// roc 2012-06 006df360  unit: RBX::VFunctionalTest::?$FactoryProduct::Creator  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006df360
//
// 006df360  6aff                 push -1
// 006df362  68f810ab00           push 0xab10f8
// 006df367  64a100000000         mov eax, dword ptr fs:[0]
// 006df36d  50                   push eax
// 006df36e  64892500000000       mov dword ptr fs:[0], esp
// 006df375  51                   push ecx
// 006df376  53                   push ebx
// 006df377  56                   push esi
// 006df378  8b542428             mov edx, dword ptr [esp + 0x28]
// 006df37c  c644240800           mov byte ptr [esp + 8], 0
// 006df381  8b442408             mov eax, dword ptr [esp + 8]
// 006df385  50                   push eax
// 006df386  52                   push edx
// 006df387  8b542424             mov edx, dword ptr [esp + 0x24]
// 006df38b  83ec0c               sub esp, 0xc
// 006df38e  8bc4                 mov eax, esp
// 006df390  8910                 mov dword ptr [eax], edx
// 006df392  8b542434             mov edx, dword ptr [esp + 0x34]
// 006df396  895004               mov dword ptr [eax + 4], edx
// 006df399  8b542438             mov edx, dword ptr [esp + 0x38]
// 006df39d  895008               mov dword ptr [eax + 8], edx
// 006df3a0  8b442438             mov eax, dword ptr [esp + 0x38]
// 006df3a4  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006df3ac  8964243c             mov dword ptr [esp + 0x3c], esp
// 006df3b0  85c0                 test eax, eax
// 006df3b2  740c                 je 0x6df3c0
// 006df3b4  83c004               add eax, 4
// 006df3b7  ba01000000           mov edx, 1
// 006df3bc  f00fc110             lock xadd dword ptr [eax], edx
// 006df3c0  e87bfeffff           call 0x6df240
// 006df3c5  8b742424             mov esi, dword ptr [esp + 0x24]
// 006df3c9  8ad8                 mov bl, al
// 006df3cb  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006df3d3  85f6                 test esi, esi
// 006df3d5  742a                 je 0x6df401
// 006df3d7  8d4604               lea eax, [esi + 4]
// 006df3da  83c9ff               or ecx, 0xffffffff
// 006df3dd  f00fc108             lock xadd dword ptr [eax], ecx
// 006df3e1  751e                 jne 0x6df401
// 006df3e3  8b16                 mov edx, dword ptr [esi]
// 006df3e5  8b4204               mov eax, dword ptr [edx + 4]
// 006df3e8  8bce                 mov ecx, esi
// 006df3ea  ffd0                 call eax
// 006df3ec  8d4e08               lea ecx, [esi + 8]
// 006df3ef  83caff               or edx, 0xffffffff
// 006df3f2  f00fc111             lock xadd dword ptr [ecx], edx
// 006df3f6  7509                 jne 0x6df401
// 006df3f8  8b06                 mov eax, dword ptr [esi]
// 006df3fa  8b5008               mov edx, dword ptr [eax + 8]
// 006df3fd  8bce                 mov ecx, esi
// 006df3ff  ffd2                 call edx
// 006df401  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006df405  5e                   pop esi
// 006df406  8ac3                 mov al, bl
// 006df408  64890d00000000       mov dword ptr fs:[0], ecx
// 006df40f  5b                   pop ebx
// 006df410  83c410               add esp, 0x10
// 006df413  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
