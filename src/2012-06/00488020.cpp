// roc 2012-06 00488020  unit: ScreenshotVerb  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00488020
//
// 00488020  6aff                 push -1
// 00488022  68f810ab00           push 0xab10f8
// 00488027  64a100000000         mov eax, dword ptr fs:[0]
// 0048802d  50                   push eax
// 0048802e  64892500000000       mov dword ptr fs:[0], esp
// 00488035  51                   push ecx
// 00488036  56                   push esi
// 00488037  57                   push edi
// 00488038  8bf1                 mov esi, ecx
// 0048803a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0048803e  83ec0c               sub esp, 0xc
// 00488041  8bc4                 mov eax, esp
// 00488043  c70600000000         mov dword ptr [esi], 0
// 00488049  8908                 mov dword ptr [eax], ecx
// 0048804b  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0048804f  895004               mov dword ptr [eax + 4], edx
// 00488052  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00488056  894808               mov dword ptr [eax + 8], ecx
// 00488059  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048805d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00488065  89642414             mov dword ptr [esp + 0x14], esp
// 00488069  85c0                 test eax, eax
// 0048806b  740c                 je 0x488079
// 0048806d  83c004               add eax, 4
// 00488070  ba01000000           mov edx, 1
// 00488075  f00fc110             lock xadd dword ptr [eax], edx
// 00488079  8bce                 mov ecx, esi
// 0048807b  e830f5ffff           call 0x4875b0
// 00488080  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00488084  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0048808c  85ff                 test edi, edi
// 0048808e  742a                 je 0x4880ba
// 00488090  8d4704               lea eax, [edi + 4]
// 00488093  83c9ff               or ecx, 0xffffffff
// 00488096  f00fc108             lock xadd dword ptr [eax], ecx
// 0048809a  751e                 jne 0x4880ba
// 0048809c  8b17                 mov edx, dword ptr [edi]
// 0048809e  8b4204               mov eax, dword ptr [edx + 4]
// 004880a1  8bcf                 mov ecx, edi
// 004880a3  ffd0                 call eax
// 004880a5  8d4f08               lea ecx, [edi + 8]
// 004880a8  83caff               or edx, 0xffffffff
// 004880ab  f00fc111             lock xadd dword ptr [ecx], edx
// 004880af  7509                 jne 0x4880ba
// 004880b1  8b07                 mov eax, dword ptr [edi]
// 004880b3  8b5008               mov edx, dword ptr [eax + 8]
// 004880b6  8bcf                 mov ecx, edi
// 004880b8  ffd2                 call edx
// 004880ba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004880be  5f                   pop edi
// 004880bf  8bc6                 mov eax, esi
// 004880c1  64890d00000000       mov dword ptr fs:[0], ecx
// 004880c8  5e                   pop esi
// 004880c9  83c410               add esp, 0x10
// 004880cc  c21000               ret 0x10
// library rbxgs/v8datamodel\DebrisService.cpp (function ??$?0V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$weak_ptr@VInstance@RBX@@@boost@@@ZV?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
