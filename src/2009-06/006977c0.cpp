// roc 2009-06 006977c0  unit: RBX::VDebrisService::?$FactoryProduct  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006977c0
//
// 006977c0  6aff                 push -1
// 006977c2  68883e8700           push 0x873e88
// 006977c7  64a100000000         mov eax, dword ptr fs:[0]
// 006977cd  50                   push eax
// 006977ce  64892500000000       mov dword ptr fs:[0], esp
// 006977d5  51                   push ecx
// 006977d6  53                   push ebx
// 006977d7  56                   push esi
// 006977d8  8b542428             mov edx, dword ptr [esp + 0x28]
// 006977dc  c644240800           mov byte ptr [esp + 8], 0
// 006977e1  8b442408             mov eax, dword ptr [esp + 8]
// 006977e5  50                   push eax
// 006977e6  52                   push edx
// 006977e7  8b542424             mov edx, dword ptr [esp + 0x24]
// 006977eb  83ec0c               sub esp, 0xc
// 006977ee  8bc4                 mov eax, esp
// 006977f0  8910                 mov dword ptr [eax], edx
// 006977f2  8b542434             mov edx, dword ptr [esp + 0x34]
// 006977f6  895004               mov dword ptr [eax + 4], edx
// 006977f9  8b542438             mov edx, dword ptr [esp + 0x38]
// 006977fd  895008               mov dword ptr [eax + 8], edx
// 00697800  8b442438             mov eax, dword ptr [esp + 0x38]
// 00697804  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0069780c  8964243c             mov dword ptr [esp + 0x3c], esp
// 00697810  85c0                 test eax, eax
// 00697812  740c                 je 0x697820
// 00697814  83c004               add eax, 4
// 00697817  ba01000000           mov edx, 1
// 0069781c  f00fc110             lock xadd dword ptr [eax], edx
// 00697820  e8ebfdffff           call 0x697610
// 00697825  8b742424             mov esi, dword ptr [esp + 0x24]
// 00697829  8ad8                 mov bl, al
// 0069782b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00697833  85f6                 test esi, esi
// 00697835  742a                 je 0x697861
// 00697837  8d4604               lea eax, [esi + 4]
// 0069783a  83c9ff               or ecx, 0xffffffff
// 0069783d  f00fc108             lock xadd dword ptr [eax], ecx
// 00697841  751e                 jne 0x697861
// 00697843  8b16                 mov edx, dword ptr [esi]
// 00697845  8b4204               mov eax, dword ptr [edx + 4]
// 00697848  8bce                 mov ecx, esi
// 0069784a  ffd0                 call eax
// 0069784c  8d4e08               lea ecx, [esi + 8]
// 0069784f  83caff               or edx, 0xffffffff
// 00697852  f00fc111             lock xadd dword ptr [ecx], edx
// 00697856  7509                 jne 0x697861
// 00697858  8b06                 mov eax, dword ptr [esi]
// 0069785a  8b5008               mov edx, dword ptr [eax + 8]
// 0069785d  8bce                 mov ecx, esi
// 0069785f  ffd2                 call edx
// 00697861  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00697865  5e                   pop esi
// 00697866  8ac3                 mov al, bl
// 00697868  64890d00000000       mov dword ptr fs:[0], ecx
// 0069786f  5b                   pop ebx
// 00697870  83c410               add esp, 0x10
// 00697873  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
