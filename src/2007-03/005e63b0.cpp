// roc 2007-03 005e63b0  unit: seg_005e0000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e63b0
//
// 005e63b0  6aff                 push -1
// 005e63b2  68f8177500           push 0x7517f8
// 005e63b7  64a100000000         mov eax, dword ptr fs:[0]
// 005e63bd  50                   push eax
// 005e63be  64892500000000       mov dword ptr fs:[0], esp
// 005e63c5  51                   push ecx
// 005e63c6  56                   push esi
// 005e63c7  57                   push edi
// 005e63c8  8bf9                 mov edi, ecx
// 005e63ca  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e63ce  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e63d2  6a00                 push 0
// 005e63d4  83ec08               sub esp, 8
// 005e63d7  85f6                 test esi, esi
// 005e63d9  8bc4                 mov eax, esp
// 005e63db  8908                 mov dword ptr [eax], ecx
// 005e63dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e63e5  89642414             mov dword ptr [esp + 0x14], esp
// 005e63e9  897004               mov dword ptr [eax + 4], esi
// 005e63ec  740c                 je 0x5e63fa
// 005e63ee  8d5604               lea edx, [esi + 4]
// 005e63f1  b801000000           mov eax, 1
// 005e63f6  f00fc102             lock xadd dword ptr [edx], eax
// 005e63fa  8bcf                 mov ecx, edi
// 005e63fc  e8aff4ffff           call 0x5e58b0
// 005e6401  85f6                 test esi, esi
// 005e6403  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e640b  742a                 je 0x5e6437
// 005e640d  8d4e04               lea ecx, [esi + 4]
// 005e6410  83caff               or edx, 0xffffffff
// 005e6413  f00fc111             lock xadd dword ptr [ecx], edx
// 005e6417  751e                 jne 0x5e6437
// 005e6419  8b06                 mov eax, dword ptr [esi]
// 005e641b  8b5004               mov edx, dword ptr [eax + 4]
// 005e641e  8bce                 mov ecx, esi
// 005e6420  ffd2                 call edx
// 005e6422  8d4608               lea eax, [esi + 8]
// 005e6425  83c9ff               or ecx, 0xffffffff
// 005e6428  f00fc108             lock xadd dword ptr [eax], ecx
// 005e642c  7509                 jne 0x5e6437
// 005e642e  8b16                 mov edx, dword ptr [esi]
// 005e6430  8b4208               mov eax, dword ptr [edx + 8]
// 005e6433  8bce                 mov ecx, esi
// 005e6435  ffd0                 call eax
// 005e6437  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e643b  8bc7                 mov eax, edi
// 005e643d  5f                   pop edi
// 005e643e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e6445  5e                   pop esi
// 005e6446  83c410               add esp, 0x10
// 005e6449  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
