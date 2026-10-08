// roc 2010-06 0062e6f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062e6f0
//
// 0062e6f0  64a100000000         mov eax, dword ptr fs:[0]
// 0062e6f6  6aff                 push -1
// 0062e6f8  68e81a9c00           push 0x9c1ae8
// 0062e6fd  50                   push eax
// 0062e6fe  64892500000000       mov dword ptr fs:[0], esp
// 0062e705  56                   push esi
// 0062e706  57                   push edi
// 0062e707  8bf9                 mov edi, ecx
// 0062e709  8b442418             mov eax, dword ptr [esp + 0x18]
// 0062e70d  8907                 mov dword ptr [edi], eax
// 0062e70f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062e713  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062e71b  894704               mov dword ptr [edi + 4], eax
// 0062e71e  85c0                 test eax, eax
// 0062e720  7410                 je 0x62e732
// 0062e722  83c004               add eax, 4
// 0062e725  b901000000           mov ecx, 1
// 0062e72a  f00fc108             lock xadd dword ptr [eax], ecx
// 0062e72e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062e732  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062e736  8b542420             mov edx, dword ptr [esp + 0x20]
// 0062e73a  895708               mov dword ptr [edi + 8], edx
// 0062e73d  894f0c               mov dword ptr [edi + 0xc], ecx
// 0062e740  85c9                 test ecx, ecx
// 0062e742  7414                 je 0x62e758
// 0062e744  83c104               add ecx, 4
// 0062e747  b801000000           mov eax, 1
// 0062e74c  f00fc101             lock xadd dword ptr [ecx], eax
// 0062e750  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062e754  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062e758  85c0                 test eax, eax
// 0062e75a  7430                 je 0x62e78c
// 0062e75c  8bf0                 mov esi, eax
// 0062e75e  83c004               add eax, 4
// 0062e761  83c9ff               or ecx, 0xffffffff
// 0062e764  f00fc108             lock xadd dword ptr [eax], ecx
// 0062e768  751e                 jne 0x62e788
// 0062e76a  8b16                 mov edx, dword ptr [esi]
// 0062e76c  8b4204               mov eax, dword ptr [edx + 4]
// 0062e76f  8bce                 mov ecx, esi
// 0062e771  ffd0                 call eax
// 0062e773  8d4e08               lea ecx, [esi + 8]
// 0062e776  83caff               or edx, 0xffffffff
// 0062e779  f00fc111             lock xadd dword ptr [ecx], edx
// 0062e77d  7509                 jne 0x62e788
// 0062e77f  8b06                 mov eax, dword ptr [esi]
// 0062e781  8b5008               mov edx, dword ptr [eax + 8]
// 0062e784  8bce                 mov ecx, esi
// 0062e786  ffd2                 call edx
// 0062e788  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0062e78c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0062e794  85c9                 test ecx, ecx
// 0062e796  742c                 je 0x62e7c4
// 0062e798  8bf1                 mov esi, ecx
// 0062e79a  83c104               add ecx, 4
// 0062e79d  83c8ff               or eax, 0xffffffff
// 0062e7a0  f00fc101             lock xadd dword ptr [ecx], eax
// 0062e7a4  751e                 jne 0x62e7c4
// 0062e7a6  8b16                 mov edx, dword ptr [esi]
// 0062e7a8  8b4204               mov eax, dword ptr [edx + 4]
// 0062e7ab  8bce                 mov ecx, esi
// 0062e7ad  ffd0                 call eax
// 0062e7af  8d4e08               lea ecx, [esi + 8]
// 0062e7b2  83caff               or edx, 0xffffffff
// 0062e7b5  f00fc111             lock xadd dword ptr [ecx], edx
// 0062e7b9  7509                 jne 0x62e7c4
// 0062e7bb  8b06                 mov eax, dword ptr [esi]
// 0062e7bd  8b5008               mov edx, dword ptr [eax + 8]
// 0062e7c0  8bce                 mov ecx, esi
// 0062e7c2  ffd2                 call edx
// 0062e7c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062e7c8  8bc7                 mov eax, edi
// 0062e7ca  5f                   pop edi
// 0062e7cb  64890d00000000       mov dword ptr fs:[0], ecx
// 0062e7d2  5e                   pop esi
// 0062e7d3  83c40c               add esp, 0xc
// 0062e7d6  c21000               ret 0x10
// library rbxgs/v8datamodel\Selection.cpp (function ??0SelectionChanged@RBX@@AAE@V?$shared_ptr@VInstance@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
