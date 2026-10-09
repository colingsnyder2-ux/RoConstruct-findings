// roc 2007-03 005e6310  unit: seg_005e0000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e6310
//
// 005e6310  6aff                 push -1
// 005e6312  68f8177500           push 0x7517f8
// 005e6317  64a100000000         mov eax, dword ptr fs:[0]
// 005e631d  50                   push eax
// 005e631e  64892500000000       mov dword ptr fs:[0], esp
// 005e6325  51                   push ecx
// 005e6326  56                   push esi
// 005e6327  57                   push edi
// 005e6328  8bf9                 mov edi, ecx
// 005e632a  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e632e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e6332  6a00                 push 0
// 005e6334  83ec08               sub esp, 8
// 005e6337  85f6                 test esi, esi
// 005e6339  8bc4                 mov eax, esp
// 005e633b  8908                 mov dword ptr [eax], ecx
// 005e633d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e6345  89642414             mov dword ptr [esp + 0x14], esp
// 005e6349  897004               mov dword ptr [eax + 4], esi
// 005e634c  740c                 je 0x5e635a
// 005e634e  8d5604               lea edx, [esi + 4]
// 005e6351  b801000000           mov eax, 1
// 005e6356  f00fc102             lock xadd dword ptr [edx], eax
// 005e635a  8bcf                 mov ecx, edi
// 005e635c  e89ff4ffff           call 0x5e5800
// 005e6361  85f6                 test esi, esi
// 005e6363  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e636b  742a                 je 0x5e6397
// 005e636d  8d4e04               lea ecx, [esi + 4]
// 005e6370  83caff               or edx, 0xffffffff
// 005e6373  f00fc111             lock xadd dword ptr [ecx], edx
// 005e6377  751e                 jne 0x5e6397
// 005e6379  8b06                 mov eax, dword ptr [esi]
// 005e637b  8b5004               mov edx, dword ptr [eax + 4]
// 005e637e  8bce                 mov ecx, esi
// 005e6380  ffd2                 call edx
// 005e6382  8d4608               lea eax, [esi + 8]
// 005e6385  83c9ff               or ecx, 0xffffffff
// 005e6388  f00fc108             lock xadd dword ptr [eax], ecx
// 005e638c  7509                 jne 0x5e6397
// 005e638e  8b16                 mov edx, dword ptr [esi]
// 005e6390  8b4208               mov eax, dword ptr [edx + 8]
// 005e6393  8bce                 mov ecx, esi
// 005e6395  ffd0                 call eax
// 005e6397  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e639b  8bc7                 mov eax, edi
// 005e639d  5f                   pop edi
// 005e639e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e63a5  5e                   pop esi
// 005e63a6  83c410               add esp, 0x10
// 005e63a9  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
