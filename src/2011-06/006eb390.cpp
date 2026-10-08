// roc 2011-06 006eb390  unit: VWiniInetRequest_source::?$stream_buffer  size: 259 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eb390
//
// 006eb390  6aff                 push -1
// 006eb392  6850489f00           push 0x9f4850
// 006eb397  64a100000000         mov eax, dword ptr fs:[0]
// 006eb39d  50                   push eax
// 006eb39e  64892500000000       mov dword ptr fs:[0], esp
// 006eb3a5  51                   push ecx
// 006eb3a6  56                   push esi
// 006eb3a7  57                   push edi
// 006eb3a8  8bf9                 mov edi, ecx
// 006eb3aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006eb3ae  83ec08               sub esp, 8
// 006eb3b1  8bc4                 mov eax, esp
// 006eb3b3  8908                 mov dword ptr [eax], ecx
// 006eb3b5  8b542430             mov edx, dword ptr [esp + 0x30]
// 006eb3b9  895004               mov dword ptr [eax + 4], edx
// 006eb3bc  8b442430             mov eax, dword ptr [esp + 0x30]
// 006eb3c0  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 006eb3c8  89642410             mov dword ptr [esp + 0x10], esp
// 006eb3cc  85c0                 test eax, eax
// 006eb3ce  740c                 je 0x6eb3dc
// 006eb3d0  83c004               add eax, 4
// 006eb3d3  b901000000           mov ecx, 1
// 006eb3d8  f00fc108             lock xadd dword ptr [eax], ecx
// 006eb3dc  8b542424             mov edx, dword ptr [esp + 0x24]
// 006eb3e0  83ec08               sub esp, 8
// 006eb3e3  8bc4                 mov eax, esp
// 006eb3e5  8910                 mov dword ptr [eax], edx
// 006eb3e7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006eb3eb  894804               mov dword ptr [eax + 4], ecx
// 006eb3ee  8b442430             mov eax, dword ptr [esp + 0x30]
// 006eb3f2  89642418             mov dword ptr [esp + 0x18], esp
// 006eb3f6  85c0                 test eax, eax
// 006eb3f8  740c                 je 0x6eb406
// 006eb3fa  83c004               add eax, 4
// 006eb3fd  ba01000000           mov edx, 1
// 006eb402  f00fc110             lock xadd dword ptr [eax], edx
// 006eb406  8bcf                 mov ecx, edi
// 006eb408  e8a3f8d4ff           call 0x43acb0
// 006eb40d  8b742420             mov esi, dword ptr [esp + 0x20]
// 006eb411  c644241400           mov byte ptr [esp + 0x14], 0
// 006eb416  85f6                 test esi, esi
// 006eb418  742a                 je 0x6eb444
// 006eb41a  8d4604               lea eax, [esi + 4]
// 006eb41d  83c9ff               or ecx, 0xffffffff
// 006eb420  f00fc108             lock xadd dword ptr [eax], ecx
// 006eb424  751e                 jne 0x6eb444
// 006eb426  8b16                 mov edx, dword ptr [esi]
// 006eb428  8b4204               mov eax, dword ptr [edx + 4]
// 006eb42b  8bce                 mov ecx, esi
// 006eb42d  ffd0                 call eax
// 006eb42f  8d4e08               lea ecx, [esi + 8]
// 006eb432  83caff               or edx, 0xffffffff
// 006eb435  f00fc111             lock xadd dword ptr [ecx], edx
// 006eb439  7509                 jne 0x6eb444
// 006eb43b  8b06                 mov eax, dword ptr [esi]
// 006eb43d  8b5008               mov edx, dword ptr [eax + 8]
// 006eb440  8bce                 mov ecx, esi
// 006eb442  ffd2                 call edx
// 006eb444  8b742428             mov esi, dword ptr [esp + 0x28]
// 006eb448  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006eb450  85f6                 test esi, esi
// 006eb452  742a                 je 0x6eb47e
// 006eb454  8d4604               lea eax, [esi + 4]
// 006eb457  83c9ff               or ecx, 0xffffffff
// 006eb45a  f00fc108             lock xadd dword ptr [eax], ecx
// 006eb45e  751e                 jne 0x6eb47e
// 006eb460  8b16                 mov edx, dword ptr [esi]
// 006eb462  8b4204               mov eax, dword ptr [edx + 4]
// 006eb465  8bce                 mov ecx, esi
// 006eb467  ffd0                 call eax
// 006eb469  8d4e08               lea ecx, [esi + 8]
// 006eb46c  83caff               or edx, 0xffffffff
// 006eb46f  f00fc111             lock xadd dword ptr [ecx], edx
// 006eb473  7509                 jne 0x6eb47e
// 006eb475  8b06                 mov eax, dword ptr [esi]
// 006eb477  8b5008               mov edx, dword ptr [eax + 8]
// 006eb47a  8bce                 mov ecx, esi
// 006eb47c  ffd2                 call edx
// 006eb47e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006eb482  8bc7                 mov eax, edi
// 006eb484  5f                   pop edi
// 006eb485  64890d00000000       mov dword ptr fs:[0], ecx
// 006eb48c  5e                   pop esi
// 006eb48d  83c410               add esp, 0x10
// 006eb490  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$list2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
