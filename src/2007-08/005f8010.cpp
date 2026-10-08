// roc 2007-08 005f8010  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8010
//
// 005f8010  6aff                 push -1
// 005f8012  6898657500           push 0x756598
// 005f8017  64a100000000         mov eax, dword ptr fs:[0]
// 005f801d  50                   push eax
// 005f801e  64892500000000       mov dword ptr fs:[0], esp
// 005f8025  51                   push ecx
// 005f8026  56                   push esi
// 005f8027  57                   push edi
// 005f8028  8bf9                 mov edi, ecx
// 005f802a  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f802e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f8032  6a00                 push 0
// 005f8034  83ec08               sub esp, 8
// 005f8037  85f6                 test esi, esi
// 005f8039  8bc4                 mov eax, esp
// 005f803b  8908                 mov dword ptr [eax], ecx
// 005f803d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f8045  89642414             mov dword ptr [esp + 0x14], esp
// 005f8049  897004               mov dword ptr [eax + 4], esi
// 005f804c  740c                 je 0x5f805a
// 005f804e  8d5604               lea edx, [esi + 4]
// 005f8051  b801000000           mov eax, 1
// 005f8056  f00fc102             lock xadd dword ptr [edx], eax
// 005f805a  8bcf                 mov ecx, edi
// 005f805c  e88ff4ffff           call 0x5f74f0
// 005f8061  85f6                 test esi, esi
// 005f8063  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f806b  742a                 je 0x5f8097
// 005f806d  8d4e04               lea ecx, [esi + 4]
// 005f8070  83caff               or edx, 0xffffffff
// 005f8073  f00fc111             lock xadd dword ptr [ecx], edx
// 005f8077  751e                 jne 0x5f8097
// 005f8079  8b06                 mov eax, dword ptr [esi]
// 005f807b  8b5004               mov edx, dword ptr [eax + 4]
// 005f807e  8bce                 mov ecx, esi
// 005f8080  ffd2                 call edx
// 005f8082  8d4608               lea eax, [esi + 8]
// 005f8085  83c9ff               or ecx, 0xffffffff
// 005f8088  f00fc108             lock xadd dword ptr [eax], ecx
// 005f808c  7509                 jne 0x5f8097
// 005f808e  8b16                 mov edx, dword ptr [esi]
// 005f8090  8b4208               mov eax, dword ptr [edx + 8]
// 005f8093  8bce                 mov ecx, esi
// 005f8095  ffd0                 call eax
// 005f8097  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f809b  8bc7                 mov eax, edi
// 005f809d  5f                   pop edi
// 005f809e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f80a5  5e                   pop esi
// 005f80a6  83c410               add esp, 0x10
// 005f80a9  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
