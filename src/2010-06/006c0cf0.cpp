// roc 2010-06 006c0cf0  unit: RBX::VDebrisService::?$FactoryProduct  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006c0cf0
//
// 006c0cf0  6aff                 push -1
// 006c0cf2  6888df9a00           push 0x9adf88
// 006c0cf7  64a100000000         mov eax, dword ptr fs:[0]
// 006c0cfd  50                   push eax
// 006c0cfe  64892500000000       mov dword ptr fs:[0], esp
// 006c0d05  51                   push ecx
// 006c0d06  53                   push ebx
// 006c0d07  56                   push esi
// 006c0d08  8b542428             mov edx, dword ptr [esp + 0x28]
// 006c0d0c  c644240800           mov byte ptr [esp + 8], 0
// 006c0d11  8b442408             mov eax, dword ptr [esp + 8]
// 006c0d15  50                   push eax
// 006c0d16  52                   push edx
// 006c0d17  8b542424             mov edx, dword ptr [esp + 0x24]
// 006c0d1b  83ec0c               sub esp, 0xc
// 006c0d1e  8bc4                 mov eax, esp
// 006c0d20  8910                 mov dword ptr [eax], edx
// 006c0d22  8b542434             mov edx, dword ptr [esp + 0x34]
// 006c0d26  895004               mov dword ptr [eax + 4], edx
// 006c0d29  8b542438             mov edx, dword ptr [esp + 0x38]
// 006c0d2d  895008               mov dword ptr [eax + 8], edx
// 006c0d30  8b442438             mov eax, dword ptr [esp + 0x38]
// 006c0d34  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006c0d3c  8964243c             mov dword ptr [esp + 0x3c], esp
// 006c0d40  85c0                 test eax, eax
// 006c0d42  740c                 je 0x6c0d50
// 006c0d44  83c004               add eax, 4
// 006c0d47  ba01000000           mov edx, 1
// 006c0d4c  f00fc110             lock xadd dword ptr [eax], edx
// 006c0d50  e87bfeffff           call 0x6c0bd0
// 006c0d55  8b742424             mov esi, dword ptr [esp + 0x24]
// 006c0d59  8ad8                 mov bl, al
// 006c0d5b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006c0d63  85f6                 test esi, esi
// 006c0d65  742a                 je 0x6c0d91
// 006c0d67  8d4604               lea eax, [esi + 4]
// 006c0d6a  83c9ff               or ecx, 0xffffffff
// 006c0d6d  f00fc108             lock xadd dword ptr [eax], ecx
// 006c0d71  751e                 jne 0x6c0d91
// 006c0d73  8b16                 mov edx, dword ptr [esi]
// 006c0d75  8b4204               mov eax, dword ptr [edx + 4]
// 006c0d78  8bce                 mov ecx, esi
// 006c0d7a  ffd0                 call eax
// 006c0d7c  8d4e08               lea ecx, [esi + 8]
// 006c0d7f  83caff               or edx, 0xffffffff
// 006c0d82  f00fc111             lock xadd dword ptr [ecx], edx
// 006c0d86  7509                 jne 0x6c0d91
// 006c0d88  8b06                 mov eax, dword ptr [esi]
// 006c0d8a  8b5008               mov edx, dword ptr [eax + 8]
// 006c0d8d  8bce                 mov ecx, esi
// 006c0d8f  ffd2                 call edx
// 006c0d91  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c0d95  5e                   pop esi
// 006c0d96  8ac3                 mov al, bl
// 006c0d98  64890d00000000       mov dword ptr fs:[0], ecx
// 006c0d9f  5b                   pop ebx
// 006c0da0  83c410               add esp, 0x10
// 006c0da3  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
