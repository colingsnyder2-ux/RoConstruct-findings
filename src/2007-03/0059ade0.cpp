// roc 2007-03 0059ade0  unit: seg_00590000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059ade0
//
// 0059ade0  6aff                 push -1
// 0059ade2  68f8177500           push 0x7517f8
// 0059ade7  64a100000000         mov eax, dword ptr fs:[0]
// 0059aded  50                   push eax
// 0059adee  64892500000000       mov dword ptr fs:[0], esp
// 0059adf5  51                   push ecx
// 0059adf6  56                   push esi
// 0059adf7  57                   push edi
// 0059adf8  8bf9                 mov edi, ecx
// 0059adfa  8b742420             mov esi, dword ptr [esp + 0x20]
// 0059adfe  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059ae02  6a00                 push 0
// 0059ae04  83ec08               sub esp, 8
// 0059ae07  85f6                 test esi, esi
// 0059ae09  8bc4                 mov eax, esp
// 0059ae0b  8908                 mov dword ptr [eax], ecx
// 0059ae0d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0059ae15  89642414             mov dword ptr [esp + 0x14], esp
// 0059ae19  897004               mov dword ptr [eax + 4], esi
// 0059ae1c  740c                 je 0x59ae2a
// 0059ae1e  8d5604               lea edx, [esi + 4]
// 0059ae21  b801000000           mov eax, 1
// 0059ae26  f00fc102             lock xadd dword ptr [edx], eax
// 0059ae2a  8bcf                 mov ecx, edi
// 0059ae2c  e85ff6ffff           call 0x59a490
// 0059ae31  85f6                 test esi, esi
// 0059ae33  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0059ae3b  742a                 je 0x59ae67
// 0059ae3d  8d4e04               lea ecx, [esi + 4]
// 0059ae40  83caff               or edx, 0xffffffff
// 0059ae43  f00fc111             lock xadd dword ptr [ecx], edx
// 0059ae47  751e                 jne 0x59ae67
// 0059ae49  8b06                 mov eax, dword ptr [esi]
// 0059ae4b  8b5004               mov edx, dword ptr [eax + 4]
// 0059ae4e  8bce                 mov ecx, esi
// 0059ae50  ffd2                 call edx
// 0059ae52  8d4608               lea eax, [esi + 8]
// 0059ae55  83c9ff               or ecx, 0xffffffff
// 0059ae58  f00fc108             lock xadd dword ptr [eax], ecx
// 0059ae5c  7509                 jne 0x59ae67
// 0059ae5e  8b16                 mov edx, dword ptr [esi]
// 0059ae60  8b4208               mov eax, dword ptr [edx + 8]
// 0059ae63  8bce                 mov ecx, esi
// 0059ae65  ffd0                 call eax
// 0059ae67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059ae6b  8bc7                 mov eax, edi
// 0059ae6d  5f                   pop edi
// 0059ae6e  64890d00000000       mov dword ptr fs:[0], ecx
// 0059ae75  5e                   pop esi
// 0059ae76  83c410               add esp, 0x10
// 0059ae79  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
