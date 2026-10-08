// roc 2007-08 0052f950  unit: RBX::VRunService::?$BoundFuncDesc  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052f950
//
// 0052f950  6aff                 push -1
// 0052f952  6898657500           push 0x756598
// 0052f957  64a100000000         mov eax, dword ptr fs:[0]
// 0052f95d  50                   push eax
// 0052f95e  64892500000000       mov dword ptr fs:[0], esp
// 0052f965  51                   push ecx
// 0052f966  56                   push esi
// 0052f967  57                   push edi
// 0052f968  8bf9                 mov edi, ecx
// 0052f96a  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052f96e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052f972  6a00                 push 0
// 0052f974  83ec08               sub esp, 8
// 0052f977  85f6                 test esi, esi
// 0052f979  8bc4                 mov eax, esp
// 0052f97b  8908                 mov dword ptr [eax], ecx
// 0052f97d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0052f985  89642414             mov dword ptr [esp + 0x14], esp
// 0052f989  897004               mov dword ptr [eax + 4], esi
// 0052f98c  740c                 je 0x52f99a
// 0052f98e  8d5604               lea edx, [esi + 4]
// 0052f991  b801000000           mov eax, 1
// 0052f996  f00fc102             lock xadd dword ptr [edx], eax
// 0052f99a  8bcf                 mov ecx, edi
// 0052f99c  e8fffeffff           call 0x52f8a0
// 0052f9a1  85f6                 test esi, esi
// 0052f9a3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0052f9ab  742a                 je 0x52f9d7
// 0052f9ad  8d4e04               lea ecx, [esi + 4]
// 0052f9b0  83caff               or edx, 0xffffffff
// 0052f9b3  f00fc111             lock xadd dword ptr [ecx], edx
// 0052f9b7  751e                 jne 0x52f9d7
// 0052f9b9  8b06                 mov eax, dword ptr [esi]
// 0052f9bb  8b5004               mov edx, dword ptr [eax + 4]
// 0052f9be  8bce                 mov ecx, esi
// 0052f9c0  ffd2                 call edx
// 0052f9c2  8d4608               lea eax, [esi + 8]
// 0052f9c5  83c9ff               or ecx, 0xffffffff
// 0052f9c8  f00fc108             lock xadd dword ptr [eax], ecx
// 0052f9cc  7509                 jne 0x52f9d7
// 0052f9ce  8b16                 mov edx, dword ptr [esi]
// 0052f9d0  8b4208               mov eax, dword ptr [edx + 8]
// 0052f9d3  8bce                 mov ecx, esi
// 0052f9d5  ffd0                 call eax
// 0052f9d7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0052f9db  8bc7                 mov eax, edi
// 0052f9dd  5f                   pop edi
// 0052f9de  64890d00000000       mov dword ptr fs:[0], ecx
// 0052f9e5  5e                   pop esi
// 0052f9e6  83c410               add esp, 0x10
// 0052f9e9  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
