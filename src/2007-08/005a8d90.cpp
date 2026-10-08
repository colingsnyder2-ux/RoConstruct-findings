// roc 2007-08 005a8d90  unit: RBX::VHumanoid::?$BoundPropGetSet  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a8d90
//
// 005a8d90  6aff                 push -1
// 005a8d92  6898657500           push 0x756598
// 005a8d97  64a100000000         mov eax, dword ptr fs:[0]
// 005a8d9d  50                   push eax
// 005a8d9e  64892500000000       mov dword ptr fs:[0], esp
// 005a8da5  51                   push ecx
// 005a8da6  56                   push esi
// 005a8da7  57                   push edi
// 005a8da8  8bf9                 mov edi, ecx
// 005a8daa  8b742420             mov esi, dword ptr [esp + 0x20]
// 005a8dae  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a8db2  6a00                 push 0
// 005a8db4  83ec08               sub esp, 8
// 005a8db7  85f6                 test esi, esi
// 005a8db9  8bc4                 mov eax, esp
// 005a8dbb  8908                 mov dword ptr [eax], ecx
// 005a8dbd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a8dc5  89642414             mov dword ptr [esp + 0x14], esp
// 005a8dc9  897004               mov dword ptr [eax + 4], esi
// 005a8dcc  740c                 je 0x5a8dda
// 005a8dce  8d5604               lea edx, [esi + 4]
// 005a8dd1  b801000000           mov eax, 1
// 005a8dd6  f00fc102             lock xadd dword ptr [edx], eax
// 005a8dda  8bcf                 mov ecx, edi
// 005a8ddc  e8fffeffff           call 0x5a8ce0
// 005a8de1  85f6                 test esi, esi
// 005a8de3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005a8deb  742a                 je 0x5a8e17
// 005a8ded  8d4e04               lea ecx, [esi + 4]
// 005a8df0  83caff               or edx, 0xffffffff
// 005a8df3  f00fc111             lock xadd dword ptr [ecx], edx
// 005a8df7  751e                 jne 0x5a8e17
// 005a8df9  8b06                 mov eax, dword ptr [esi]
// 005a8dfb  8b5004               mov edx, dword ptr [eax + 4]
// 005a8dfe  8bce                 mov ecx, esi
// 005a8e00  ffd2                 call edx
// 005a8e02  8d4608               lea eax, [esi + 8]
// 005a8e05  83c9ff               or ecx, 0xffffffff
// 005a8e08  f00fc108             lock xadd dword ptr [eax], ecx
// 005a8e0c  7509                 jne 0x5a8e17
// 005a8e0e  8b16                 mov edx, dword ptr [esi]
// 005a8e10  8b4208               mov eax, dword ptr [edx + 8]
// 005a8e13  8bce                 mov ecx, esi
// 005a8e15  ffd0                 call eax
// 005a8e17  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005a8e1b  8bc7                 mov eax, edi
// 005a8e1d  5f                   pop edi
// 005a8e1e  64890d00000000       mov dword ptr fs:[0], ecx
// 005a8e25  5e                   pop esi
// 005a8e26  83c410               add esp, 0x10
// 005a8e29  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
