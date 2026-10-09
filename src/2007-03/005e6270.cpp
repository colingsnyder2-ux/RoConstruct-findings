// roc 2007-03 005e6270  unit: seg_005e0000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e6270
//
// 005e6270  6aff                 push -1
// 005e6272  68f8177500           push 0x7517f8
// 005e6277  64a100000000         mov eax, dword ptr fs:[0]
// 005e627d  50                   push eax
// 005e627e  64892500000000       mov dword ptr fs:[0], esp
// 005e6285  51                   push ecx
// 005e6286  56                   push esi
// 005e6287  57                   push edi
// 005e6288  8bf9                 mov edi, ecx
// 005e628a  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e628e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e6292  6a00                 push 0
// 005e6294  83ec08               sub esp, 8
// 005e6297  85f6                 test esi, esi
// 005e6299  8bc4                 mov eax, esp
// 005e629b  8908                 mov dword ptr [eax], ecx
// 005e629d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e62a5  89642414             mov dword ptr [esp + 0x14], esp
// 005e62a9  897004               mov dword ptr [eax + 4], esi
// 005e62ac  740c                 je 0x5e62ba
// 005e62ae  8d5604               lea edx, [esi + 4]
// 005e62b1  b801000000           mov eax, 1
// 005e62b6  f00fc102             lock xadd dword ptr [edx], eax
// 005e62ba  8bcf                 mov ecx, edi
// 005e62bc  e88ff4ffff           call 0x5e5750
// 005e62c1  85f6                 test esi, esi
// 005e62c3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e62cb  742a                 je 0x5e62f7
// 005e62cd  8d4e04               lea ecx, [esi + 4]
// 005e62d0  83caff               or edx, 0xffffffff
// 005e62d3  f00fc111             lock xadd dword ptr [ecx], edx
// 005e62d7  751e                 jne 0x5e62f7
// 005e62d9  8b06                 mov eax, dword ptr [esi]
// 005e62db  8b5004               mov edx, dword ptr [eax + 4]
// 005e62de  8bce                 mov ecx, esi
// 005e62e0  ffd2                 call edx
// 005e62e2  8d4608               lea eax, [esi + 8]
// 005e62e5  83c9ff               or ecx, 0xffffffff
// 005e62e8  f00fc108             lock xadd dword ptr [eax], ecx
// 005e62ec  7509                 jne 0x5e62f7
// 005e62ee  8b16                 mov edx, dword ptr [esi]
// 005e62f0  8b4208               mov eax, dword ptr [edx + 8]
// 005e62f3  8bce                 mov ecx, esi
// 005e62f5  ffd0                 call eax
// 005e62f7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e62fb  8bc7                 mov eax, edi
// 005e62fd  5f                   pop edi
// 005e62fe  64890d00000000       mov dword ptr fs:[0], ecx
// 005e6305  5e                   pop esi
// 005e6306  83c410               add esp, 0x10
// 005e6309  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
