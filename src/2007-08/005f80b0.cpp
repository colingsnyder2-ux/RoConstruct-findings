// roc 2007-08 005f80b0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f80b0
//
// 005f80b0  6aff                 push -1
// 005f80b2  6898657500           push 0x756598
// 005f80b7  64a100000000         mov eax, dword ptr fs:[0]
// 005f80bd  50                   push eax
// 005f80be  64892500000000       mov dword ptr fs:[0], esp
// 005f80c5  51                   push ecx
// 005f80c6  56                   push esi
// 005f80c7  57                   push edi
// 005f80c8  8bf9                 mov edi, ecx
// 005f80ca  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f80ce  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f80d2  6a00                 push 0
// 005f80d4  83ec08               sub esp, 8
// 005f80d7  85f6                 test esi, esi
// 005f80d9  8bc4                 mov eax, esp
// 005f80db  8908                 mov dword ptr [eax], ecx
// 005f80dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f80e5  89642414             mov dword ptr [esp + 0x14], esp
// 005f80e9  897004               mov dword ptr [eax + 4], esi
// 005f80ec  740c                 je 0x5f80fa
// 005f80ee  8d5604               lea edx, [esi + 4]
// 005f80f1  b801000000           mov eax, 1
// 005f80f6  f00fc102             lock xadd dword ptr [edx], eax
// 005f80fa  8bcf                 mov ecx, edi
// 005f80fc  e89ff4ffff           call 0x5f75a0
// 005f8101  85f6                 test esi, esi
// 005f8103  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f810b  742a                 je 0x5f8137
// 005f810d  8d4e04               lea ecx, [esi + 4]
// 005f8110  83caff               or edx, 0xffffffff
// 005f8113  f00fc111             lock xadd dword ptr [ecx], edx
// 005f8117  751e                 jne 0x5f8137
// 005f8119  8b06                 mov eax, dword ptr [esi]
// 005f811b  8b5004               mov edx, dword ptr [eax + 4]
// 005f811e  8bce                 mov ecx, esi
// 005f8120  ffd2                 call edx
// 005f8122  8d4608               lea eax, [esi + 8]
// 005f8125  83c9ff               or ecx, 0xffffffff
// 005f8128  f00fc108             lock xadd dword ptr [eax], ecx
// 005f812c  7509                 jne 0x5f8137
// 005f812e  8b16                 mov edx, dword ptr [esi]
// 005f8130  8b4208               mov eax, dword ptr [edx + 8]
// 005f8133  8bce                 mov ecx, esi
// 005f8135  ffd0                 call eax
// 005f8137  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f813b  8bc7                 mov eax, edi
// 005f813d  5f                   pop edi
// 005f813e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8145  5e                   pop esi
// 005f8146  83c410               add esp, 0x10
// 005f8149  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
