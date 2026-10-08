// roc 2007-08 005f7f70  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f7f70
//
// 005f7f70  6aff                 push -1
// 005f7f72  6898657500           push 0x756598
// 005f7f77  64a100000000         mov eax, dword ptr fs:[0]
// 005f7f7d  50                   push eax
// 005f7f7e  64892500000000       mov dword ptr fs:[0], esp
// 005f7f85  51                   push ecx
// 005f7f86  56                   push esi
// 005f7f87  57                   push edi
// 005f7f88  8bf9                 mov edi, ecx
// 005f7f8a  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f7f8e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f7f92  6a00                 push 0
// 005f7f94  83ec08               sub esp, 8
// 005f7f97  85f6                 test esi, esi
// 005f7f99  8bc4                 mov eax, esp
// 005f7f9b  8908                 mov dword ptr [eax], ecx
// 005f7f9d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f7fa5  89642414             mov dword ptr [esp + 0x14], esp
// 005f7fa9  897004               mov dword ptr [eax + 4], esi
// 005f7fac  740c                 je 0x5f7fba
// 005f7fae  8d5604               lea edx, [esi + 4]
// 005f7fb1  b801000000           mov eax, 1
// 005f7fb6  f00fc102             lock xadd dword ptr [edx], eax
// 005f7fba  8bcf                 mov ecx, edi
// 005f7fbc  e87ff4ffff           call 0x5f7440
// 005f7fc1  85f6                 test esi, esi
// 005f7fc3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f7fcb  742a                 je 0x5f7ff7
// 005f7fcd  8d4e04               lea ecx, [esi + 4]
// 005f7fd0  83caff               or edx, 0xffffffff
// 005f7fd3  f00fc111             lock xadd dword ptr [ecx], edx
// 005f7fd7  751e                 jne 0x5f7ff7
// 005f7fd9  8b06                 mov eax, dword ptr [esi]
// 005f7fdb  8b5004               mov edx, dword ptr [eax + 4]
// 005f7fde  8bce                 mov ecx, esi
// 005f7fe0  ffd2                 call edx
// 005f7fe2  8d4608               lea eax, [esi + 8]
// 005f7fe5  83c9ff               or ecx, 0xffffffff
// 005f7fe8  f00fc108             lock xadd dword ptr [eax], ecx
// 005f7fec  7509                 jne 0x5f7ff7
// 005f7fee  8b16                 mov edx, dword ptr [esi]
// 005f7ff0  8b4208               mov eax, dword ptr [edx + 8]
// 005f7ff3  8bce                 mov ecx, esi
// 005f7ff5  ffd0                 call eax
// 005f7ff7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f7ffb  8bc7                 mov eax, edi
// 005f7ffd  5f                   pop edi
// 005f7ffe  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8005  5e                   pop esi
// 005f8006  83c410               add esp, 0x10
// 005f8009  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
