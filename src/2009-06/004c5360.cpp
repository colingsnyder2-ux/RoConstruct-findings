// roc 2009-06 004c5360  unit: RBX::Network::Players::Plugin  size: 253 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c5360
//
// 004c5360  6aff                 push -1
// 004c5362  68701f8500           push 0x851f70
// 004c5367  64a100000000         mov eax, dword ptr fs:[0]
// 004c536d  50                   push eax
// 004c536e  64892500000000       mov dword ptr fs:[0], esp
// 004c5375  51                   push ecx
// 004c5376  56                   push esi
// 004c5377  57                   push edi
// 004c5378  8bf9                 mov edi, ecx
// 004c537a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c537e  83ec08               sub esp, 8
// 004c5381  8bc4                 mov eax, esp
// 004c5383  8908                 mov dword ptr [eax], ecx
// 004c5385  8b542428             mov edx, dword ptr [esp + 0x28]
// 004c5389  895004               mov dword ptr [eax + 4], edx
// 004c538c  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c5390  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 004c5398  89642410             mov dword ptr [esp + 0x10], esp
// 004c539c  85c0                 test eax, eax
// 004c539e  740c                 je 0x4c53ac
// 004c53a0  83c004               add eax, 4
// 004c53a3  b901000000           mov ecx, 1
// 004c53a8  f00fc108             lock xadd dword ptr [eax], ecx
// 004c53ac  8bcf                 mov ecx, edi
// 004c53ae  e87dfd1600           call 0x635130
// 004c53b3  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c53b7  8b542424             mov edx, dword ptr [esp + 0x24]
// 004c53bb  895708               mov dword ptr [edi + 8], edx
// 004c53be  89470c               mov dword ptr [edi + 0xc], eax
// 004c53c1  85c0                 test eax, eax
// 004c53c3  7410                 je 0x4c53d5
// 004c53c5  83c004               add eax, 4
// 004c53c8  b901000000           mov ecx, 1
// 004c53cd  f00fc108             lock xadd dword ptr [eax], ecx
// 004c53d1  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c53d5  8b742420             mov esi, dword ptr [esp + 0x20]
// 004c53d9  c644241400           mov byte ptr [esp + 0x14], 0
// 004c53de  85f6                 test esi, esi
// 004c53e0  742e                 je 0x4c5410
// 004c53e2  8d5604               lea edx, [esi + 4]
// 004c53e5  83c8ff               or eax, 0xffffffff
// 004c53e8  f00fc102             lock xadd dword ptr [edx], eax
// 004c53ec  751e                 jne 0x4c540c
// 004c53ee  8b16                 mov edx, dword ptr [esi]
// 004c53f0  8b4204               mov eax, dword ptr [edx + 4]
// 004c53f3  8bce                 mov ecx, esi
// 004c53f5  ffd0                 call eax
// 004c53f7  8d4e08               lea ecx, [esi + 8]
// 004c53fa  83caff               or edx, 0xffffffff
// 004c53fd  f00fc111             lock xadd dword ptr [ecx], edx
// 004c5401  7509                 jne 0x4c540c
// 004c5403  8b06                 mov eax, dword ptr [esi]
// 004c5405  8b5008               mov edx, dword ptr [eax + 8]
// 004c5408  8bce                 mov ecx, esi
// 004c540a  ffd2                 call edx
// 004c540c  8b442428             mov eax, dword ptr [esp + 0x28]
// 004c5410  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004c5418  85c0                 test eax, eax
// 004c541a  742c                 je 0x4c5448
// 004c541c  8bf0                 mov esi, eax
// 004c541e  83c004               add eax, 4
// 004c5421  83c9ff               or ecx, 0xffffffff
// 004c5424  f00fc108             lock xadd dword ptr [eax], ecx
// 004c5428  751e                 jne 0x4c5448
// 004c542a  8b16                 mov edx, dword ptr [esi]
// 004c542c  8b4204               mov eax, dword ptr [edx + 4]
// 004c542f  8bce                 mov ecx, esi
// 004c5431  ffd0                 call eax
// 004c5433  8d4e08               lea ecx, [esi + 8]
// 004c5436  83caff               or edx, 0xffffffff
// 004c5439  f00fc111             lock xadd dword ptr [ecx], edx
// 004c543d  7509                 jne 0x4c5448
// 004c543f  8b06                 mov eax, dword ptr [esi]
// 004c5441  8b5008               mov edx, dword ptr [eax + 8]
// 004c5444  8bce                 mov ecx, esi
// 004c5446  ffd2                 call edx
// 004c5448  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c544c  8bc7                 mov eax, edi
// 004c544e  5f                   pop edi
// 004c544f  64890d00000000       mov dword ptr fs:[0], ecx
// 004c5456  5e                   pop esi
// 004c5457  83c410               add esp, 0x10
// 004c545a  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$storage2@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@_bi@boost@@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@23@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VRunService@RBX@@@boost@@@12@V?$value@V?$shared_ptr@VDataModel@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
