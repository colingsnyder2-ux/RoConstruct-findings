// roc 2007-03 0052f550  unit: seg_00520000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052f550
//
// 0052f550  6aff                 push -1
// 0052f552  68e8397500           push 0x7539e8
// 0052f557  64a100000000         mov eax, dword ptr fs:[0]
// 0052f55d  50                   push eax
// 0052f55e  64892500000000       mov dword ptr fs:[0], esp
// 0052f565  83ec08               sub esp, 8
// 0052f568  8bc1                 mov eax, ecx
// 0052f56a  8b5028               mov edx, dword ptr [eax + 0x28]
// 0052f56d  56                   push esi
// 0052f56e  8d4c2404             lea ecx, [esp + 4]
// 0052f572  51                   push ecx
// 0052f573  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0052f576  034c2420             add ecx, dword ptr [esp + 0x20]
// 0052f57a  ffd2                 call edx
// 0052f57c  8bf0                 mov esi, eax
// 0052f57e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0052f586  e8d5db0300           call 0x56d160
// 0052f58b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052f58f  8901                 mov dword ptr [ecx], eax
// 0052f591  56                   push esi
// 0052f592  83c104               add ecx, 4
// 0052f595  e8b60df6ff           call 0x490350
// 0052f59a  8b442408             mov eax, dword ptr [esp + 8]
// 0052f59e  85c0                 test eax, eax
// 0052f5a0  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0052f5a8  742c                 je 0x52f5d6
// 0052f5aa  8bf0                 mov esi, eax
// 0052f5ac  83c004               add eax, 4
// 0052f5af  83c9ff               or ecx, 0xffffffff
// 0052f5b2  f00fc108             lock xadd dword ptr [eax], ecx
// 0052f5b6  751e                 jne 0x52f5d6
// 0052f5b8  8b16                 mov edx, dword ptr [esi]
// 0052f5ba  8b4204               mov eax, dword ptr [edx + 4]
// 0052f5bd  8bce                 mov ecx, esi
// 0052f5bf  ffd0                 call eax
// 0052f5c1  8d4e08               lea ecx, [esi + 8]
// 0052f5c4  83caff               or edx, 0xffffffff
// 0052f5c7  f00fc111             lock xadd dword ptr [ecx], edx
// 0052f5cb  7509                 jne 0x52f5d6
// 0052f5cd  8b06                 mov eax, dword ptr [esi]
// 0052f5cf  8b5008               mov edx, dword ptr [eax + 8]
// 0052f5d2  8bce                 mov ecx, esi
// 0052f5d4  ffd2                 call edx
// 0052f5d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052f5da  5e                   pop esi
// 0052f5db  64890d00000000       mov dword ptr fs:[0], ecx
// 0052f5e2  83c414               add esp, 0x14
// 0052f5e5  c20800               ret 8
// library rbxgs/v8datamodel\Selection.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VSelection@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ$0A@@Reflection@RBX@@ABEXPAVSelection@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
