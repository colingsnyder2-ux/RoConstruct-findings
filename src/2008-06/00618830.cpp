// roc 2008-06 00618830  unit: RBX::Flag  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00618830
//
// 00618830  6aff                 push -1
// 00618832  6868617c00           push 0x7c6168
// 00618837  64a100000000         mov eax, dword ptr fs:[0]
// 0061883d  50                   push eax
// 0061883e  64892500000000       mov dword ptr fs:[0], esp
// 00618845  51                   push ecx
// 00618846  56                   push esi
// 00618847  57                   push edi
// 00618848  8bf9                 mov edi, ecx
// 0061884a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0061884e  83ec08               sub esp, 8
// 00618851  8bc4                 mov eax, esp
// 00618853  8908                 mov dword ptr [eax], ecx
// 00618855  8b542428             mov edx, dword ptr [esp + 0x28]
// 00618859  895004               mov dword ptr [eax + 4], edx
// 0061885c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00618860  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00618868  89642410             mov dword ptr [esp + 0x10], esp
// 0061886c  85c0                 test eax, eax
// 0061886e  740c                 je 0x61887c
// 00618870  83c004               add eax, 4
// 00618873  b901000000           mov ecx, 1
// 00618878  f00fc108             lock xadd dword ptr [eax], ecx
// 0061887c  8bcf                 mov ecx, edi
// 0061887e  e88dbff3ff           call 0x554810
// 00618883  8b742420             mov esi, dword ptr [esp + 0x20]
// 00618887  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0061888f  85f6                 test esi, esi
// 00618891  742a                 je 0x6188bd
// 00618893  8d5604               lea edx, [esi + 4]
// 00618896  83c8ff               or eax, 0xffffffff
// 00618899  f00fc102             lock xadd dword ptr [edx], eax
// 0061889d  751e                 jne 0x6188bd
// 0061889f  8b16                 mov edx, dword ptr [esi]
// 006188a1  8b4204               mov eax, dword ptr [edx + 4]
// 006188a4  8bce                 mov ecx, esi
// 006188a6  ffd0                 call eax
// 006188a8  8d4e08               lea ecx, [esi + 8]
// 006188ab  83caff               or edx, 0xffffffff
// 006188ae  f00fc111             lock xadd dword ptr [ecx], edx
// 006188b2  7509                 jne 0x6188bd
// 006188b4  8b06                 mov eax, dword ptr [esi]
// 006188b6  8b5008               mov edx, dword ptr [eax + 8]
// 006188b9  8bce                 mov ecx, esi
// 006188bb  ffd2                 call edx
// 006188bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006188c1  8bc7                 mov eax, edi
// 006188c3  5f                   pop edi
// 006188c4  64890d00000000       mov dword ptr fs:[0], ecx
// 006188cb  5e                   pop esi
// 006188cc  83c410               add esp, 0x10
// 006188cf  c20800               ret 8
// library rbxgs/v8datamodel\DebrisService.cpp (function ??0?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
