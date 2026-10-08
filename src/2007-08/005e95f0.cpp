// roc 2007-08 005e95f0  unit: RBX::Explosion  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e95f0
//
// 005e95f0  6aff                 push -1
// 005e95f2  6898657500           push 0x756598
// 005e95f7  64a100000000         mov eax, dword ptr fs:[0]
// 005e95fd  50                   push eax
// 005e95fe  64892500000000       mov dword ptr fs:[0], esp
// 005e9605  51                   push ecx
// 005e9606  56                   push esi
// 005e9607  57                   push edi
// 005e9608  8bf9                 mov edi, ecx
// 005e960a  8b742420             mov esi, dword ptr [esp + 0x20]
// 005e960e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e9612  6a00                 push 0
// 005e9614  83ec08               sub esp, 8
// 005e9617  85f6                 test esi, esi
// 005e9619  8bc4                 mov eax, esp
// 005e961b  8908                 mov dword ptr [eax], ecx
// 005e961d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005e9625  89642414             mov dword ptr [esp + 0x14], esp
// 005e9629  897004               mov dword ptr [eax + 4], esi
// 005e962c  740c                 je 0x5e963a
// 005e962e  8d5604               lea edx, [esi + 4]
// 005e9631  b801000000           mov eax, 1
// 005e9636  f00fc102             lock xadd dword ptr [edx], eax
// 005e963a  8bcf                 mov ecx, edi
// 005e963c  e8fffeffff           call 0x5e9540
// 005e9641  85f6                 test esi, esi
// 005e9643  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005e964b  742a                 je 0x5e9677
// 005e964d  8d4e04               lea ecx, [esi + 4]
// 005e9650  83caff               or edx, 0xffffffff
// 005e9653  f00fc111             lock xadd dword ptr [ecx], edx
// 005e9657  751e                 jne 0x5e9677
// 005e9659  8b06                 mov eax, dword ptr [esi]
// 005e965b  8b5004               mov edx, dword ptr [eax + 4]
// 005e965e  8bce                 mov ecx, esi
// 005e9660  ffd2                 call edx
// 005e9662  8d4608               lea eax, [esi + 8]
// 005e9665  83c9ff               or ecx, 0xffffffff
// 005e9668  f00fc108             lock xadd dword ptr [eax], ecx
// 005e966c  7509                 jne 0x5e9677
// 005e966e  8b16                 mov edx, dword ptr [esi]
// 005e9670  8b4208               mov eax, dword ptr [edx + 8]
// 005e9673  8bce                 mov ecx, esi
// 005e9675  ffd0                 call eax
// 005e9677  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e967b  8bc7                 mov eax, edi
// 005e967d  5f                   pop edi
// 005e967e  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9685  5e                   pop esi
// 005e9686  83c410               add esp, 0x10
// 005e9689  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
