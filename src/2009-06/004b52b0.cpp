// roc 2009-06 004b52b0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 162 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b52b0
//
// 004b52b0  6aff                 push -1
// 004b52b2  6838938500           push 0x859338
// 004b52b7  64a100000000         mov eax, dword ptr fs:[0]
// 004b52bd  50                   push eax
// 004b52be  64892500000000       mov dword ptr fs:[0], esp
// 004b52c5  51                   push ecx
// 004b52c6  56                   push esi
// 004b52c7  57                   push edi
// 004b52c8  8bf9                 mov edi, ecx
// 004b52ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b52ce  83ec08               sub esp, 8
// 004b52d1  8bc4                 mov eax, esp
// 004b52d3  8908                 mov dword ptr [eax], ecx
// 004b52d5  8b542428             mov edx, dword ptr [esp + 0x28]
// 004b52d9  895004               mov dword ptr [eax + 4], edx
// 004b52dc  8b442428             mov eax, dword ptr [esp + 0x28]
// 004b52e0  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004b52e8  89642410             mov dword ptr [esp + 0x10], esp
// 004b52ec  85c0                 test eax, eax
// 004b52ee  740c                 je 0x4b52fc
// 004b52f0  83c004               add eax, 4
// 004b52f3  b901000000           mov ecx, 1
// 004b52f8  f00fc108             lock xadd dword ptr [eax], ecx
// 004b52fc  8bcf                 mov ecx, edi
// 004b52fe  e82dfe1700           call 0x635130
// 004b5303  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b5307  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b530f  85f6                 test esi, esi
// 004b5311  742a                 je 0x4b533d
// 004b5313  8d5604               lea edx, [esi + 4]
// 004b5316  83c8ff               or eax, 0xffffffff
// 004b5319  f00fc102             lock xadd dword ptr [edx], eax
// 004b531d  751e                 jne 0x4b533d
// 004b531f  8b16                 mov edx, dword ptr [esi]
// 004b5321  8b4204               mov eax, dword ptr [edx + 4]
// 004b5324  8bce                 mov ecx, esi
// 004b5326  ffd0                 call eax
// 004b5328  8d4e08               lea ecx, [esi + 8]
// 004b532b  83caff               or edx, 0xffffffff
// 004b532e  f00fc111             lock xadd dword ptr [ecx], edx
// 004b5332  7509                 jne 0x4b533d
// 004b5334  8b06                 mov eax, dword ptr [esi]
// 004b5336  8b5008               mov edx, dword ptr [eax + 8]
// 004b5339  8bce                 mov ecx, esi
// 004b533b  ffd2                 call edx
// 004b533d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5341  8bc7                 mov eax, edi
// 004b5343  5f                   pop edi
// 004b5344  64890d00000000       mov dword ptr fs:[0], ecx
// 004b534b  5e                   pop esi
// 004b534c  83c410               add esp, 0x10
// 004b534f  c20800               ret 8
// library rbxgs/v8datamodel\DebrisService.cpp (function ??0?$list1@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@_bi@boost@@@_bi@boost@@QAE@V?$value@V?$shared_ptr@VInstance@RBX@@@boost@@@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebrisService.cpp
