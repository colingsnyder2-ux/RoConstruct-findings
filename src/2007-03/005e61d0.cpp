// roc 2007-03 005e61d0  unit: seg_005e0000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005e61d0
//
// 005e61d0  6aff                 push -1
// 005e61d2  68f8177500           push 0x7517f8
// 005e61d7  64a100000000         mov eax, dword ptr fs:[0]
// 005e61dd  50                   push eax
// 005e61de  64892500000000       mov dword ptr fs:[0], esp
// 005e61e5  51                   push ecx
// 005e61e6  56                   push esi
// 005e61e7  57                   push edi
// 005e61e8  8bf9                 mov edi, ecx
// 005e61ea  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e61ee  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e61f2  6a00                 push 0
// 005e61f4  83ec08               sub esp, 8
// 005e61f7  85f6                 test esi, esi
// 005e61f9  8bc4                 mov eax, esp
// 005e61fb  8908                 mov dword ptr [eax], ecx
// 005e61fd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e6205  89642414             mov dword ptr [esp + 0x14], esp
// 005e6209  897004               mov dword ptr [eax + 4], esi
// 005e620c  740c                 je 0x5e621a
// 005e620e  8d5604               lea edx, [esi + 4]
// 005e6211  b801000000           mov eax, 1
// 005e6216  f00fc102             lock xadd dword ptr [edx], eax
// 005e621a  8bcf                 mov ecx, edi
// 005e621c  e87ff4ffff           call 0x5e56a0
// 005e6221  85f6                 test esi, esi
// 005e6223  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e622b  742a                 je 0x5e6257
// 005e622d  8d4e04               lea ecx, [esi + 4]
// 005e6230  83caff               or edx, 0xffffffff
// 005e6233  f00fc111             lock xadd dword ptr [ecx], edx
// 005e6237  751e                 jne 0x5e6257
// 005e6239  8b06                 mov eax, dword ptr [esi]
// 005e623b  8b5004               mov edx, dword ptr [eax + 4]
// 005e623e  8bce                 mov ecx, esi
// 005e6240  ffd2                 call edx
// 005e6242  8d4608               lea eax, [esi + 8]
// 005e6245  83c9ff               or ecx, 0xffffffff
// 005e6248  f00fc108             lock xadd dword ptr [eax], ecx
// 005e624c  7509                 jne 0x5e6257
// 005e624e  8b16                 mov edx, dword ptr [esi]
// 005e6250  8b4208               mov eax, dword ptr [edx + 8]
// 005e6253  8bce                 mov ecx, esi
// 005e6255  ffd0                 call eax
// 005e6257  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e625b  8bc7                 mov eax, edi
// 005e625d  5f                   pop edi
// 005e625e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e6265  5e                   pop esi
// 005e6266  83c410               add esp, 0x10
// 005e6269  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
