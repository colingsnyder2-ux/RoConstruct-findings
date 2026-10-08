// roc 2008-06 005d6750  unit: RBX::VTeams::?$BoundFuncDesc  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d6750
//
// 005d6750  6aff                 push -1
// 005d6752  6868917d00           push 0x7d9168
// 005d6757  64a100000000         mov eax, dword ptr fs:[0]
// 005d675d  50                   push eax
// 005d675e  64892500000000       mov dword ptr fs:[0], esp
// 005d6765  83ec08               sub esp, 8
// 005d6768  8bc1                 mov eax, ecx
// 005d676a  8b5038               mov edx, dword ptr [eax + 0x38]
// 005d676d  56                   push esi
// 005d676e  8d4c2404             lea ecx, [esp + 4]
// 005d6772  51                   push ecx
// 005d6773  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 005d6776  034c2420             add ecx, dword ptr [esp + 0x20]
// 005d677a  ffd2                 call edx
// 005d677c  8bf0                 mov esi, eax
// 005d677e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005d6786  e8c563f9ff           call 0x56cb50
// 005d678b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d678f  8901                 mov dword ptr [ecx], eax
// 005d6791  56                   push esi
// 005d6792  83c104               add ecx, 4
// 005d6795  e8164fecff           call 0x49b6b0
// 005d679a  8b442408             mov eax, dword ptr [esp + 8]
// 005d679e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005d67a6  85c0                 test eax, eax
// 005d67a8  742c                 je 0x5d67d6
// 005d67aa  8bf0                 mov esi, eax
// 005d67ac  83c004               add eax, 4
// 005d67af  83c9ff               or ecx, 0xffffffff
// 005d67b2  f00fc108             lock xadd dword ptr [eax], ecx
// 005d67b6  751e                 jne 0x5d67d6
// 005d67b8  8b16                 mov edx, dword ptr [esi]
// 005d67ba  8b4204               mov eax, dword ptr [edx + 4]
// 005d67bd  8bce                 mov ecx, esi
// 005d67bf  ffd0                 call eax
// 005d67c1  8d4e08               lea ecx, [esi + 8]
// 005d67c4  83caff               or edx, 0xffffffff
// 005d67c7  f00fc111             lock xadd dword ptr [ecx], edx
// 005d67cb  7509                 jne 0x5d67d6
// 005d67cd  8b06                 mov eax, dword ptr [esi]
// 005d67cf  8b5008               mov edx, dword ptr [eax + 8]
// 005d67d2  8bce                 mov ecx, esi
// 005d67d4  ffd2                 call edx
// 005d67d6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d67da  5e                   pop esi
// 005d67db  64890d00000000       mov dword ptr fs:[0], ecx
// 005d67e2  83c414               add esp, 0x14
// 005d67e5  c20800               ret 8
// library rbxgs/v8datamodel\Selection.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VSelection@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ$0A@@Reflection@RBX@@ABEXPAVSelection@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
