// roc 2008-06 00566860  unit: RBX::VSelection::?$FactoryProduct  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566860
//
// 00566860  64a100000000         mov eax, dword ptr fs:[0]
// 00566866  6aff                 push -1
// 00566868  6818627c00           push 0x7c6218
// 0056686d  50                   push eax
// 0056686e  64892500000000       mov dword ptr fs:[0], esp
// 00566875  56                   push esi
// 00566876  57                   push edi
// 00566877  8bf9                 mov edi, ecx
// 00566879  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056687d  8907                 mov dword ptr [edi], eax
// 0056687f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00566883  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056688b  894704               mov dword ptr [edi + 4], eax
// 0056688e  85c0                 test eax, eax
// 00566890  7410                 je 0x5668a2
// 00566892  83c004               add eax, 4
// 00566895  b901000000           mov ecx, 1
// 0056689a  f00fc108             lock xadd dword ptr [eax], ecx
// 0056689e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005668a2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005668a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005668aa  895708               mov dword ptr [edi + 8], edx
// 005668ad  894f0c               mov dword ptr [edi + 0xc], ecx
// 005668b0  85c9                 test ecx, ecx
// 005668b2  7414                 je 0x5668c8
// 005668b4  83c104               add ecx, 4
// 005668b7  b801000000           mov eax, 1
// 005668bc  f00fc101             lock xadd dword ptr [ecx], eax
// 005668c0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005668c4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005668c8  85c0                 test eax, eax
// 005668ca  7430                 je 0x5668fc
// 005668cc  8bf0                 mov esi, eax
// 005668ce  83c004               add eax, 4
// 005668d1  83c9ff               or ecx, 0xffffffff
// 005668d4  f00fc108             lock xadd dword ptr [eax], ecx
// 005668d8  751e                 jne 0x5668f8
// 005668da  8b16                 mov edx, dword ptr [esi]
// 005668dc  8b4204               mov eax, dword ptr [edx + 4]
// 005668df  8bce                 mov ecx, esi
// 005668e1  ffd0                 call eax
// 005668e3  8d4e08               lea ecx, [esi + 8]
// 005668e6  83caff               or edx, 0xffffffff
// 005668e9  f00fc111             lock xadd dword ptr [ecx], edx
// 005668ed  7509                 jne 0x5668f8
// 005668ef  8b06                 mov eax, dword ptr [esi]
// 005668f1  8b5008               mov edx, dword ptr [eax + 8]
// 005668f4  8bce                 mov ecx, esi
// 005668f6  ffd2                 call edx
// 005668f8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005668fc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00566904  85c9                 test ecx, ecx
// 00566906  742c                 je 0x566934
// 00566908  8bf1                 mov esi, ecx
// 0056690a  83c104               add ecx, 4
// 0056690d  83c8ff               or eax, 0xffffffff
// 00566910  f00fc101             lock xadd dword ptr [ecx], eax
// 00566914  751e                 jne 0x566934
// 00566916  8b16                 mov edx, dword ptr [esi]
// 00566918  8b4204               mov eax, dword ptr [edx + 4]
// 0056691b  8bce                 mov ecx, esi
// 0056691d  ffd0                 call eax
// 0056691f  8d4e08               lea ecx, [esi + 8]
// 00566922  83caff               or edx, 0xffffffff
// 00566925  f00fc111             lock xadd dword ptr [ecx], edx
// 00566929  7509                 jne 0x566934
// 0056692b  8b06                 mov eax, dword ptr [esi]
// 0056692d  8b5008               mov edx, dword ptr [eax + 8]
// 00566930  8bce                 mov ecx, esi
// 00566932  ffd2                 call edx
// 00566934  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00566938  8bc7                 mov eax, edi
// 0056693a  5f                   pop edi
// 0056693b  64890d00000000       mov dword ptr fs:[0], ecx
// 00566942  5e                   pop esi
// 00566943  83c40c               add esp, 0xc
// 00566946  c21000               ret 0x10
// library rbxgs/v8datamodel\Selection.cpp (function ??0SelectionChanged@RBX@@AAE@V?$shared_ptr@VInstance@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
