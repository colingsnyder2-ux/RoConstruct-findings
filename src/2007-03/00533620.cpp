// roc 2007-03 00533620  unit: seg_00530000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00533620
//
// 00533620  6aff                 push -1
// 00533622  68f8177500           push 0x7517f8
// 00533627  64a100000000         mov eax, dword ptr fs:[0]
// 0053362d  50                   push eax
// 0053362e  64892500000000       mov dword ptr fs:[0], esp
// 00533635  51                   push ecx
// 00533636  56                   push esi
// 00533637  57                   push edi
// 00533638  8bf9                 mov edi, ecx
// 0053363a  8b742420             mov esi, dword ptr [esp + 0x20]
// 0053363e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00533642  6a00                 push 0
// 00533644  83ec08               sub esp, 8
// 00533647  85f6                 test esi, esi
// 00533649  8bc4                 mov eax, esp
// 0053364b  8908                 mov dword ptr [eax], ecx
// 0053364d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00533655  89642414             mov dword ptr [esp + 0x14], esp
// 00533659  897004               mov dword ptr [eax + 4], esi
// 0053365c  740c                 je 0x53366a
// 0053365e  8d5604               lea edx, [esi + 4]
// 00533661  b801000000           mov eax, 1
// 00533666  f00fc102             lock xadd dword ptr [edx], eax
// 0053366a  8bcf                 mov ecx, edi
// 0053366c  e84ffeffff           call 0x5334c0
// 00533671  85f6                 test esi, esi
// 00533673  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0053367b  742a                 je 0x5336a7
// 0053367d  8d4e04               lea ecx, [esi + 4]
// 00533680  83caff               or edx, 0xffffffff
// 00533683  f00fc111             lock xadd dword ptr [ecx], edx
// 00533687  751e                 jne 0x5336a7
// 00533689  8b06                 mov eax, dword ptr [esi]
// 0053368b  8b5004               mov edx, dword ptr [eax + 4]
// 0053368e  8bce                 mov ecx, esi
// 00533690  ffd2                 call edx
// 00533692  8d4608               lea eax, [esi + 8]
// 00533695  83c9ff               or ecx, 0xffffffff
// 00533698  f00fc108             lock xadd dword ptr [eax], ecx
// 0053369c  7509                 jne 0x5336a7
// 0053369e  8b16                 mov edx, dword ptr [esi]
// 005336a0  8b4208               mov eax, dword ptr [edx + 8]
// 005336a3  8bce                 mov ecx, esi
// 005336a5  ffd0                 call eax
// 005336a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005336ab  8bc7                 mov eax, edi
// 005336ad  5f                   pop edi
// 005336ae  64890d00000000       mov dword ptr fs:[0], ecx
// 005336b5  5e                   pop esi
// 005336b6  83c410               add esp, 0x10
// 005336b9  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
