// roc 2007-03 00541a20  unit: seg_00540000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541a20
//
// 00541a20  6aff                 push -1
// 00541a22  68e8397500           push 0x7539e8
// 00541a27  64a100000000         mov eax, dword ptr fs:[0]
// 00541a2d  50                   push eax
// 00541a2e  64892500000000       mov dword ptr fs:[0], esp
// 00541a35  83ec08               sub esp, 8
// 00541a38  8bc1                 mov eax, ecx
// 00541a3a  8b5028               mov edx, dword ptr [eax + 0x28]
// 00541a3d  56                   push esi
// 00541a3e  8d4c2404             lea ecx, [esp + 4]
// 00541a42  51                   push ecx
// 00541a43  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 00541a46  034c2420             add ecx, dword ptr [esp + 0x20]
// 00541a4a  ffd2                 call edx
// 00541a4c  8bf0                 mov esi, eax
// 00541a4e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00541a56  e895b60200           call 0x56d0f0
// 00541a5b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00541a5f  8901                 mov dword ptr [ecx], eax
// 00541a61  56                   push esi
// 00541a62  83c104               add ecx, 4
// 00541a65  e85697edff           call 0x41b1c0
// 00541a6a  8b442408             mov eax, dword ptr [esp + 8]
// 00541a6e  85c0                 test eax, eax
// 00541a70  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00541a78  742c                 je 0x541aa6
// 00541a7a  8bf0                 mov esi, eax
// 00541a7c  83c004               add eax, 4
// 00541a7f  83c9ff               or ecx, 0xffffffff
// 00541a82  f00fc108             lock xadd dword ptr [eax], ecx
// 00541a86  751e                 jne 0x541aa6
// 00541a88  8b16                 mov edx, dword ptr [esi]
// 00541a8a  8b4204               mov eax, dword ptr [edx + 4]
// 00541a8d  8bce                 mov ecx, esi
// 00541a8f  ffd0                 call eax
// 00541a91  8d4e08               lea ecx, [esi + 8]
// 00541a94  83caff               or edx, 0xffffffff
// 00541a97  f00fc111             lock xadd dword ptr [ecx], edx
// 00541a9b  7509                 jne 0x541aa6
// 00541a9d  8b06                 mov eax, dword ptr [esi]
// 00541a9f  8b5008               mov edx, dword ptr [eax + 8]
// 00541aa2  8bce                 mov ecx, esi
// 00541aa4  ffd2                 call edx
// 00541aa6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00541aaa  5e                   pop esi
// 00541aab  64890d00000000       mov dword ptr fs:[0], ecx
// 00541ab2  83c414               add esp, 0x14
// 00541ab5  c20800               ret 8
// library rbxgs/v8datamodel\Selection.cpp (function ??$call@V?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@@?$BoundFuncDesc@VSelection@RBX@@$$A6A?AV?$shared_ptr@$$CBV?$vector@V?$shared_ptr@VInstance@RBX@@@boost@@V?$allocator@V?$shared_ptr@VInstance@RBX@@@boost@@@std@@@std@@@boost@@XZ$0A@@Reflection@RBX@@ABEXPAVSelection@2@AAVValue@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Selection.cpp
