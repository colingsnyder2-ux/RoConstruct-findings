// roc 2007-08 0053ef70  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053ef70
//
// 0053ef70  6aff                 push -1
// 0053ef72  68880a7500           push 0x750a88
// 0053ef77  64a100000000         mov eax, dword ptr fs:[0]
// 0053ef7d  50                   push eax
// 0053ef7e  64892500000000       mov dword ptr fs:[0], esp
// 0053ef85  51                   push ecx
// 0053ef86  56                   push esi
// 0053ef87  57                   push edi
// 0053ef88  8bf9                 mov edi, ecx
// 0053ef8a  8b742424             mov esi, dword ptr [esp + 0x24]
// 0053ef8e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053ef92  83ec08               sub esp, 8
// 0053ef95  85f6                 test esi, esi
// 0053ef97  8bc4                 mov eax, esp
// 0053ef99  c70700000000         mov dword ptr [edi], 0
// 0053ef9f  8908                 mov dword ptr [eax], ecx
// 0053efa1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0053efa9  89642410             mov dword ptr [esp + 0x10], esp
// 0053efad  897004               mov dword ptr [eax + 4], esi
// 0053efb0  740c                 je 0x53efbe
// 0053efb2  8d5604               lea edx, [esi + 4]
// 0053efb5  b801000000           mov eax, 1
// 0053efba  f00fc102             lock xadd dword ptr [edx], eax
// 0053efbe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053efc2  51                   push ecx
// 0053efc3  8d4f04               lea ecx, [edi + 4]
// 0053efc6  e8e5f5ffff           call 0x53e5b0
// 0053efcb  85f6                 test esi, esi
// 0053efcd  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0053efd5  742a                 je 0x53f001
// 0053efd7  8d5604               lea edx, [esi + 4]
// 0053efda  83c8ff               or eax, 0xffffffff
// 0053efdd  f00fc102             lock xadd dword ptr [edx], eax
// 0053efe1  751e                 jne 0x53f001
// 0053efe3  8b16                 mov edx, dword ptr [esi]
// 0053efe5  8b4204               mov eax, dword ptr [edx + 4]
// 0053efe8  8bce                 mov ecx, esi
// 0053efea  ffd0                 call eax
// 0053efec  8d4e08               lea ecx, [esi + 8]
// 0053efef  83caff               or edx, 0xffffffff
// 0053eff2  f00fc111             lock xadd dword ptr [ecx], edx
// 0053eff6  7509                 jne 0x53f001
// 0053eff8  8b06                 mov eax, dword ptr [esi]
// 0053effa  8b5008               mov edx, dword ptr [eax + 8]
// 0053effd  8bce                 mov ecx, esi
// 0053efff  ffd2                 call edx
// 0053f001  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053f005  8bc7                 mov eax, edi
// 0053f007  5f                   pop edi
// 0053f008  64890d00000000       mov dword ptr fs:[0], ecx
// 0053f00f  5e                   pop esi
// 0053f010  83c410               add esp, 0x10
// 0053f013  c20c00               ret 0xc
// library rbxgs/v8tree\Instance.cpp (function ??$?0VInstanceHandle@RBX@@@XmlAttribute@@QAE@ABVName@RBX@@VInstanceHandle@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
