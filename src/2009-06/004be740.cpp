// roc 2009-06 004be740  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004be740
//
// 004be740  6aff                 push -1
// 004be742  6808b08600           push 0x86b008
// 004be747  64a100000000         mov eax, dword ptr fs:[0]
// 004be74d  50                   push eax
// 004be74e  64892500000000       mov dword ptr fs:[0], esp
// 004be755  51                   push ecx
// 004be756  56                   push esi
// 004be757  8bc1                 mov eax, ecx
// 004be759  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004be75d  83ec08               sub esp, 8
// 004be760  8bcc                 mov ecx, esp
// 004be762  8911                 mov dword ptr [ecx], edx
// 004be764  8b542428             mov edx, dword ptr [esp + 0x28]
// 004be768  895104               mov dword ptr [ecx + 4], edx
// 004be76b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004be76f  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004be777  8964240c             mov dword ptr [esp + 0xc], esp
// 004be77b  85c9                 test ecx, ecx
// 004be77d  740c                 je 0x4be78b
// 004be77f  83c104               add ecx, 4
// 004be782  ba01000000           mov edx, 1
// 004be787  f00fc111             lock xadd dword ptr [ecx], edx
// 004be78b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004be78f  8b11                 mov edx, dword ptr [ecx]
// 004be791  8b4804               mov ecx, dword ptr [eax + 4]
// 004be794  03ca                 add ecx, edx
// 004be796  8b10                 mov edx, dword ptr [eax]
// 004be798  ffd2                 call edx
// 004be79a  8b742420             mov esi, dword ptr [esp + 0x20]
// 004be79e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004be7a6  85f6                 test esi, esi
// 004be7a8  742a                 je 0x4be7d4
// 004be7aa  8d4604               lea eax, [esi + 4]
// 004be7ad  83c9ff               or ecx, 0xffffffff
// 004be7b0  f00fc108             lock xadd dword ptr [eax], ecx
// 004be7b4  751e                 jne 0x4be7d4
// 004be7b6  8b16                 mov edx, dword ptr [esi]
// 004be7b8  8b4204               mov eax, dword ptr [edx + 4]
// 004be7bb  8bce                 mov ecx, esi
// 004be7bd  ffd0                 call eax
// 004be7bf  8d4e08               lea ecx, [esi + 8]
// 004be7c2  83caff               or edx, 0xffffffff
// 004be7c5  f00fc111             lock xadd dword ptr [ecx], edx
// 004be7c9  7509                 jne 0x4be7d4
// 004be7cb  8b06                 mov eax, dword ptr [esi]
// 004be7cd  8b5008               mov edx, dword ptr [eax + 8]
// 004be7d0  8bce                 mov ecx, esi
// 004be7d2  ffd2                 call edx
// 004be7d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004be7d8  64890d00000000       mov dword ptr fs:[0], ecx
// 004be7df  5e                   pop esi
// 004be7e0  83c410               add esp, 0x10
// 004be7e3  c20c00               ret 0xc
// library rbxgs/util\RunStateOwner.cpp (function ??$?RV?$shared_ptr@VRunService@RBX@@@boost@@@?$mf1@XVRunService@RBX@@V?$shared_ptr@VDataModel@RBX@@@boost@@@_mfi@boost@@QBEXAAV?$shared_ptr@VRunService@RBX@@@2@V?$shared_ptr@VDataModel@RBX@@@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
