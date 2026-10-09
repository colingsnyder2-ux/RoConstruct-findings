// roc 2009-12 0044f2e0  unit: CRobloxCommandLineInfo  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0044f2e0
//
// 0044f2e0  6aff                 push -1
// 0044f2e2  6888459400           push 0x944588
// 0044f2e7  64a100000000         mov eax, dword ptr fs:[0]
// 0044f2ed  50                   push eax
// 0044f2ee  64892500000000       mov dword ptr fs:[0], esp
// 0044f2f5  51                   push ecx
// 0044f2f6  53                   push ebx
// 0044f2f7  56                   push esi
// 0044f2f8  8b542428             mov edx, dword ptr [esp + 0x28]
// 0044f2fc  c644240800           mov byte ptr [esp + 8], 0
// 0044f301  8b442408             mov eax, dword ptr [esp + 8]
// 0044f305  50                   push eax
// 0044f306  52                   push edx
// 0044f307  8b542424             mov edx, dword ptr [esp + 0x24]
// 0044f30b  83ec0c               sub esp, 0xc
// 0044f30e  8bc4                 mov eax, esp
// 0044f310  8910                 mov dword ptr [eax], edx
// 0044f312  8b542434             mov edx, dword ptr [esp + 0x34]
// 0044f316  895004               mov dword ptr [eax + 4], edx
// 0044f319  8b542438             mov edx, dword ptr [esp + 0x38]
// 0044f31d  895008               mov dword ptr [eax + 8], edx
// 0044f320  8b442438             mov eax, dword ptr [esp + 0x38]
// 0044f324  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0044f32c  8964243c             mov dword ptr [esp + 0x3c], esp
// 0044f330  85c0                 test eax, eax
// 0044f332  740c                 je 0x44f340
// 0044f334  83c004               add eax, 4
// 0044f337  ba01000000           mov edx, 1
// 0044f33c  f00fc110             lock xadd dword ptr [eax], edx
// 0044f340  e88bfcffff           call 0x44efd0
// 0044f345  8b742424             mov esi, dword ptr [esp + 0x24]
// 0044f349  8ad8                 mov bl, al
// 0044f34b  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0044f353  85f6                 test esi, esi
// 0044f355  742a                 je 0x44f381
// 0044f357  8d4604               lea eax, [esi + 4]
// 0044f35a  83c9ff               or ecx, 0xffffffff
// 0044f35d  f00fc108             lock xadd dword ptr [eax], ecx
// 0044f361  751e                 jne 0x44f381
// 0044f363  8b16                 mov edx, dword ptr [esi]
// 0044f365  8b4204               mov eax, dword ptr [edx + 4]
// 0044f368  8bce                 mov ecx, esi
// 0044f36a  ffd0                 call eax
// 0044f36c  8d4e08               lea ecx, [esi + 8]
// 0044f36f  83caff               or edx, 0xffffffff
// 0044f372  f00fc111             lock xadd dword ptr [ecx], edx
// 0044f376  7509                 jne 0x44f381
// 0044f378  8b06                 mov eax, dword ptr [esi]
// 0044f37a  8b5008               mov edx, dword ptr [eax + 8]
// 0044f37d  8bce                 mov ecx, esi
// 0044f37f  ffd2                 call edx
// 0044f381  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044f385  5e                   pop esi
// 0044f386  8ac3                 mov al, bl
// 0044f388  64890d00000000       mov dword ptr fs:[0], ecx
// 0044f38f  5b                   pop ebx
// 0044f390  83c410               add esp, 0x10
// 0044f393  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
