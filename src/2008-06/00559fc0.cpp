// roc 2008-06 00559fc0  unit: RBX::VInstance::?$BoundFuncDesc  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559fc0
//
// 00559fc0  6aff                 push -1
// 00559fc2  6868917d00           push 0x7d9168
// 00559fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00559fcd  50                   push eax
// 00559fce  64892500000000       mov dword ptr fs:[0], esp
// 00559fd5  83ec08               sub esp, 8
// 00559fd8  8bc1                 mov eax, ecx
// 00559fda  8b5038               mov edx, dword ptr [eax + 0x38]
// 00559fdd  56                   push esi
// 00559fde  8d4c2404             lea ecx, [esp + 4]
// 00559fe2  51                   push ecx
// 00559fe3  8b483c               mov ecx, dword ptr [eax + 0x3c]
// 00559fe6  034c2420             add ecx, dword ptr [esp + 0x20]
// 00559fea  ffd2                 call edx
// 00559fec  8bf0                 mov esi, eax
// 00559fee  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00559ff6  e8e52a0100           call 0x56cae0
// 00559ffb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00559fff  8901                 mov dword ptr [ecx], eax
// 0055a001  56                   push esi
// 0055a002  83c104               add ecx, 4
// 0055a005  e8f63cf3ff           call 0x48dd00
// 0055a00a  8b442408             mov eax, dword ptr [esp + 8]
// 0055a00e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0055a016  85c0                 test eax, eax
// 0055a018  742c                 je 0x55a046
// 0055a01a  8bf0                 mov esi, eax
// 0055a01c  83c004               add eax, 4
// 0055a01f  83c9ff               or ecx, 0xffffffff
// 0055a022  f00fc108             lock xadd dword ptr [eax], ecx
// 0055a026  751e                 jne 0x55a046
// 0055a028  8b16                 mov edx, dword ptr [esi]
// 0055a02a  8b4204               mov eax, dword ptr [edx + 4]
// 0055a02d  8bce                 mov ecx, esi
// 0055a02f  ffd0                 call eax
// 0055a031  8d4e08               lea ecx, [esi + 8]
// 0055a034  83caff               or edx, 0xffffffff
// 0055a037  f00fc111             lock xadd dword ptr [ecx], edx
// 0055a03b  7509                 jne 0x55a046
// 0055a03d  8b06                 mov eax, dword ptr [esi]
// 0055a03f  8b5008               mov edx, dword ptr [eax + 8]
// 0055a042  8bce                 mov ecx, esi
// 0055a044  ffd2                 call edx
// 0055a046  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055a04a  5e                   pop esi
// 0055a04b  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a052  83c414               add esp, 0x14
// 0055a055  c20800               ret 8
// library rbxgs/v8datamodel\Selection.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VSelection@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ$0A@@Reflection@RBX@@ABEXPAVSelection@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
