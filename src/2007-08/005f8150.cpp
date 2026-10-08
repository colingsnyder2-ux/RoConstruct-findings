// roc 2007-08 005f8150  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8150
//
// 005f8150  6aff                 push -1
// 005f8152  6898657500           push 0x756598
// 005f8157  64a100000000         mov eax, dword ptr fs:[0]
// 005f815d  50                   push eax
// 005f815e  64892500000000       mov dword ptr fs:[0], esp
// 005f8165  51                   push ecx
// 005f8166  56                   push esi
// 005f8167  57                   push edi
// 005f8168  8bf9                 mov edi, ecx
// 005f816a  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f816e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f8172  6a00                 push 0
// 005f8174  83ec08               sub esp, 8
// 005f8177  85f6                 test esi, esi
// 005f8179  8bc4                 mov eax, esp
// 005f817b  8908                 mov dword ptr [eax], ecx
// 005f817d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f8185  89642414             mov dword ptr [esp + 0x14], esp
// 005f8189  897004               mov dword ptr [eax + 4], esi
// 005f818c  740c                 je 0x5f819a
// 005f818e  8d5604               lea edx, [esi + 4]
// 005f8191  b801000000           mov eax, 1
// 005f8196  f00fc102             lock xadd dword ptr [edx], eax
// 005f819a  8bcf                 mov ecx, edi
// 005f819c  e8aff4ffff           call 0x5f7650
// 005f81a1  85f6                 test esi, esi
// 005f81a3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f81ab  742a                 je 0x5f81d7
// 005f81ad  8d4e04               lea ecx, [esi + 4]
// 005f81b0  83caff               or edx, 0xffffffff
// 005f81b3  f00fc111             lock xadd dword ptr [ecx], edx
// 005f81b7  751e                 jne 0x5f81d7
// 005f81b9  8b06                 mov eax, dword ptr [esi]
// 005f81bb  8b5004               mov edx, dword ptr [eax + 4]
// 005f81be  8bce                 mov ecx, esi
// 005f81c0  ffd2                 call edx
// 005f81c2  8d4608               lea eax, [esi + 8]
// 005f81c5  83c9ff               or ecx, 0xffffffff
// 005f81c8  f00fc108             lock xadd dword ptr [eax], ecx
// 005f81cc  7509                 jne 0x5f81d7
// 005f81ce  8b16                 mov edx, dword ptr [esi]
// 005f81d0  8b4208               mov eax, dword ptr [edx + 8]
// 005f81d3  8bce                 mov ecx, esi
// 005f81d5  ffd0                 call eax
// 005f81d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f81db  8bc7                 mov eax, edi
// 005f81dd  5f                   pop edi
// 005f81de  64890d00000000       mov dword ptr fs:[0], ecx
// 005f81e5  5e                   pop esi
// 005f81e6  83c410               add esp, 0x10
// 005f81e9  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
