// roc 2007-03 005336c0  unit: seg_00530000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005336c0
//
// 005336c0  6aff                 push -1
// 005336c2  68f8177500           push 0x7517f8
// 005336c7  64a100000000         mov eax, dword ptr fs:[0]
// 005336cd  50                   push eax
// 005336ce  64892500000000       mov dword ptr fs:[0], esp
// 005336d5  51                   push ecx
// 005336d6  56                   push esi
// 005336d7  57                   push edi
// 005336d8  8bf9                 mov edi, ecx
// 005336da  8b742420             mov esi, dword ptr [esp + 0x20]
// 005336de  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005336e2  6a00                 push 0
// 005336e4  83ec08               sub esp, 8
// 005336e7  85f6                 test esi, esi
// 005336e9  8bc4                 mov eax, esp
// 005336eb  8908                 mov dword ptr [eax], ecx
// 005336ed  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005336f5  89642414             mov dword ptr [esp + 0x14], esp
// 005336f9  897004               mov dword ptr [eax + 4], esi
// 005336fc  740c                 je 0x53370a
// 005336fe  8d5604               lea edx, [esi + 4]
// 00533701  b801000000           mov eax, 1
// 00533706  f00fc102             lock xadd dword ptr [edx], eax
// 0053370a  8bcf                 mov ecx, edi
// 0053370c  e85ffeffff           call 0x533570
// 00533711  85f6                 test esi, esi
// 00533713  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0053371b  742a                 je 0x533747
// 0053371d  8d4e04               lea ecx, [esi + 4]
// 00533720  83caff               or edx, 0xffffffff
// 00533723  f00fc111             lock xadd dword ptr [ecx], edx
// 00533727  751e                 jne 0x533747
// 00533729  8b06                 mov eax, dword ptr [esi]
// 0053372b  8b5004               mov edx, dword ptr [eax + 4]
// 0053372e  8bce                 mov ecx, esi
// 00533730  ffd2                 call edx
// 00533732  8d4608               lea eax, [esi + 8]
// 00533735  83c9ff               or ecx, 0xffffffff
// 00533738  f00fc108             lock xadd dword ptr [eax], ecx
// 0053373c  7509                 jne 0x533747
// 0053373e  8b16                 mov edx, dword ptr [esi]
// 00533740  8b4208               mov eax, dword ptr [edx + 8]
// 00533743  8bce                 mov ecx, esi
// 00533745  ffd0                 call eax
// 00533747  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0053374b  8bc7                 mov eax, edi
// 0053374d  5f                   pop edi
// 0053374e  64890d00000000       mov dword ptr fs:[0], ecx
// 00533755  5e                   pop esi
// 00533756  83c410               add esp, 0x10
// 00533759  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
