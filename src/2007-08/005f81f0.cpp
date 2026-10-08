// roc 2007-08 005f81f0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f81f0
//
// 005f81f0  6aff                 push -1
// 005f81f2  6898657500           push 0x756598
// 005f81f7  64a100000000         mov eax, dword ptr fs:[0]
// 005f81fd  50                   push eax
// 005f81fe  64892500000000       mov dword ptr fs:[0], esp
// 005f8205  51                   push ecx
// 005f8206  56                   push esi
// 005f8207  57                   push edi
// 005f8208  8bf9                 mov edi, ecx
// 005f820a  8b742420             mov esi, dword ptr [esp + 0x20]
// 005f820e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f8212  6a00                 push 0
// 005f8214  83ec08               sub esp, 8
// 005f8217  85f6                 test esi, esi
// 005f8219  8bc4                 mov eax, esp
// 005f821b  8908                 mov dword ptr [eax], ecx
// 005f821d  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005f8225  89642414             mov dword ptr [esp + 0x14], esp
// 005f8229  897004               mov dword ptr [eax + 4], esi
// 005f822c  740c                 je 0x5f823a
// 005f822e  8d5604               lea edx, [esi + 4]
// 005f8231  b801000000           mov eax, 1
// 005f8236  f00fc102             lock xadd dword ptr [edx], eax
// 005f823a  8bcf                 mov ecx, edi
// 005f823c  e8bff4ffff           call 0x5f7700
// 005f8241  85f6                 test esi, esi
// 005f8243  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005f824b  742a                 je 0x5f8277
// 005f824d  8d4e04               lea ecx, [esi + 4]
// 005f8250  83caff               or edx, 0xffffffff
// 005f8253  f00fc111             lock xadd dword ptr [ecx], edx
// 005f8257  751e                 jne 0x5f8277
// 005f8259  8b06                 mov eax, dword ptr [esi]
// 005f825b  8b5004               mov edx, dword ptr [eax + 4]
// 005f825e  8bce                 mov ecx, esi
// 005f8260  ffd2                 call edx
// 005f8262  8d4608               lea eax, [esi + 8]
// 005f8265  83c9ff               or ecx, 0xffffffff
// 005f8268  f00fc108             lock xadd dword ptr [eax], ecx
// 005f826c  7509                 jne 0x5f8277
// 005f826e  8b16                 mov edx, dword ptr [esi]
// 005f8270  8b4208               mov eax, dword ptr [edx + 8]
// 005f8273  8bce                 mov ecx, esi
// 005f8275  ffd0                 call eax
// 005f8277  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005f827b  8bc7                 mov eax, edi
// 005f827d  5f                   pop edi
// 005f827e  64890d00000000       mov dword ptr fs:[0], ecx
// 005f8285  5e                   pop esi
// 005f8286  83c410               add esp, 0x10
// 005f8289  c20c00               ret 0xc
// library openrbx-client/App\humanoid\Humanoid.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@@?$function@$$A6AXXZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$0A@$$A6AXXZ@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/humanoid/Humanoid.cpp
