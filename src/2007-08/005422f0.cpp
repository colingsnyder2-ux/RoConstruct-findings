// roc 2007-08 005422f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005422f0
//
// 005422f0  6aff                 push -1
// 005422f2  6898657500           push 0x756598
// 005422f7  64a100000000         mov eax, dword ptr fs:[0]
// 005422fd  50                   push eax
// 005422fe  64892500000000       mov dword ptr fs:[0], esp
// 00542305  51                   push ecx
// 00542306  56                   push esi
// 00542307  57                   push edi
// 00542308  8bf9                 mov edi, ecx
// 0054230a  8b742420             mov esi, dword ptr [esp + 0x20]
// 0054230e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00542312  6a00                 push 0
// 00542314  83ec08               sub esp, 8
// 00542317  85f6                 test esi, esi
// 00542319  8bc4                 mov eax, esp
// 0054231b  8908                 mov dword ptr [eax], ecx
// 0054231d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00542325  89642414             mov dword ptr [esp + 0x14], esp
// 00542329  897004               mov dword ptr [eax + 4], esi
// 0054232c  740c                 je 0x54233a
// 0054232e  8d5604               lea edx, [esi + 4]
// 00542331  b801000000           mov eax, 1
// 00542336  f00fc102             lock xadd dword ptr [edx], eax
// 0054233a  8bcf                 mov ecx, edi
// 0054233c  e8fffeffff           call 0x542240
// 00542341  85f6                 test esi, esi
// 00542343  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0054234b  742a                 je 0x542377
// 0054234d  8d4e04               lea ecx, [esi + 4]
// 00542350  83caff               or edx, 0xffffffff
// 00542353  f00fc111             lock xadd dword ptr [ecx], edx
// 00542357  751e                 jne 0x542377
// 00542359  8b06                 mov eax, dword ptr [esi]
// 0054235b  8b5004               mov edx, dword ptr [eax + 4]
// 0054235e  8bce                 mov ecx, esi
// 00542360  ffd2                 call edx
// 00542362  8d4608               lea eax, [esi + 8]
// 00542365  83c9ff               or ecx, 0xffffffff
// 00542368  f00fc108             lock xadd dword ptr [eax], ecx
// 0054236c  7509                 jne 0x542377
// 0054236e  8b16                 mov edx, dword ptr [esi]
// 00542370  8b4208               mov eax, dword ptr [edx + 8]
// 00542373  8bce                 mov ecx, esi
// 00542375  ffd0                 call eax
// 00542377  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054237b  8bc7                 mov eax, edi
// 0054237d  5f                   pop edi
// 0054237e  64890d00000000       mov dword ptr fs:[0], ecx
// 00542385  5e                   pop esi
// 00542386  83c410               add esp, 0x10
// 00542389  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
