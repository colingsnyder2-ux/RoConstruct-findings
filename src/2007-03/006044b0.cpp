// roc 2007-03 006044b0  unit: seg_00600000  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006044b0
//
// 006044b0  6aff                 push -1
// 006044b2  68f8177500           push 0x7517f8
// 006044b7  64a100000000         mov eax, dword ptr fs:[0]
// 006044bd  50                   push eax
// 006044be  64892500000000       mov dword ptr fs:[0], esp
// 006044c5  51                   push ecx
// 006044c6  56                   push esi
// 006044c7  57                   push edi
// 006044c8  8bf9                 mov edi, ecx
// 006044ca  8b742420             mov esi, dword ptr [esp + 0x20]
// 006044ce  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006044d2  6a00                 push 0
// 006044d4  83ec08               sub esp, 8
// 006044d7  85f6                 test esi, esi
// 006044d9  8bc4                 mov eax, esp
// 006044db  8908                 mov dword ptr [eax], ecx
// 006044dd  c744242000000000     mov dword ptr [esp + 0x20], 0
// 006044e5  89642414             mov dword ptr [esp + 0x14], esp
// 006044e9  897004               mov dword ptr [eax + 4], esi
// 006044ec  740c                 je 0x6044fa
// 006044ee  8d5604               lea edx, [esi + 4]
// 006044f1  b801000000           mov eax, 1
// 006044f6  f00fc102             lock xadd dword ptr [edx], eax
// 006044fa  8bcf                 mov ecx, edi
// 006044fc  e8fffeffff           call 0x604400
// 00604501  85f6                 test esi, esi
// 00604503  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0060450b  742a                 je 0x604537
// 0060450d  8d4e04               lea ecx, [esi + 4]
// 00604510  83caff               or edx, 0xffffffff
// 00604513  f00fc111             lock xadd dword ptr [ecx], edx
// 00604517  751e                 jne 0x604537
// 00604519  8b06                 mov eax, dword ptr [esi]
// 0060451b  8b5004               mov edx, dword ptr [eax + 4]
// 0060451e  8bce                 mov ecx, esi
// 00604520  ffd2                 call edx
// 00604522  8d4608               lea eax, [esi + 8]
// 00604525  83c9ff               or ecx, 0xffffffff
// 00604528  f00fc108             lock xadd dword ptr [eax], ecx
// 0060452c  7509                 jne 0x604537
// 0060452e  8b16                 mov edx, dword ptr [esi]
// 00604530  8b4208               mov eax, dword ptr [edx + 8]
// 00604533  8bce                 mov ecx, esi
// 00604535  ffd0                 call eax
// 00604537  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0060453b  8bc7                 mov eax, edi
// 0060453d  5f                   pop edi
// 0060453e  64890d00000000       mov dword ptr fs:[0], ecx
// 00604545  5e                   pop esi
// 00604546  83c410               add esp, 0x10
// 00604549  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
