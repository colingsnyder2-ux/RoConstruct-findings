// roc 2008-06 004b5be0  unit: RBX::Network::VClient::?$FactoryProduct  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5be0
//
// 004b5be0  6aff                 push -1
// 004b5be2  68bea47d00           push 0x7da4be
// 004b5be7  64a100000000         mov eax, dword ptr fs:[0]
// 004b5bed  50                   push eax
// 004b5bee  64892500000000       mov dword ptr fs:[0], esp
// 004b5bf5  83ec08               sub esp, 8
// 004b5bf8  56                   push esi
// 004b5bf9  8bf1                 mov esi, ecx
// 004b5bfb  c70600000000         mov dword ptr [esi], 0
// 004b5c01  89742404             mov dword ptr [esp + 4], esi
// 004b5c05  c7460400000000       mov dword ptr [esi + 4], 0
// 004b5c0c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b5c10  8b10                 mov edx, dword ptr [eax]
// 004b5c12  6a00                 push 0
// 004b5c14  83ec08               sub esp, 8
// 004b5c17  8bcc                 mov ecx, esp
// 004b5c19  8911                 mov dword ptr [ecx], edx
// 004b5c1b  8b4004               mov eax, dword ptr [eax + 4]
// 004b5c1e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004b5c26  89642414             mov dword ptr [esp + 0x14], esp
// 004b5c2a  894104               mov dword ptr [ecx + 4], eax
// 004b5c2d  85c0                 test eax, eax
// 004b5c2f  740c                 je 0x4b5c3d
// 004b5c31  83c004               add eax, 4
// 004b5c34  b901000000           mov ecx, 1
// 004b5c39  f00fc108             lock xadd dword ptr [eax], ecx
// 004b5c3d  8d4e08               lea ecx, [esi + 8]
// 004b5c40  e80bf4ffff           call 0x4b5050
// 004b5c45  6a28                 push 0x28
// 004b5c47  c644241801           mov byte ptr [esp + 0x18], 1
// 004b5c4c  e8cfac1e00           call 0x6a0920
// 004b5c51  83c404               add esp, 4
// 004b5c54  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b5c58  c644241402           mov byte ptr [esp + 0x14], 2
// 004b5c5d  85c0                 test eax, eax
// 004b5c5f  7409                 je 0x4b5c6a
// 004b5c61  8bc8                 mov ecx, eax
// 004b5c63  e8d850f6ff           call 0x41ad40
// 004b5c68  eb02                 jmp 0x4b5c6c
// 004b5c6a  33c0                 xor eax, eax
// 004b5c6c  50                   push eax
// 004b5c6d  8bce                 mov ecx, esi
// 004b5c6f  c644241801           mov byte ptr [esp + 0x18], 1
// 004b5c74  e87754f6ff           call 0x41b0f0
// 004b5c79  8bce                 mov ecx, esi
// 004b5c7b  e8c0fb0d00           call 0x595840
// 004b5c80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5c84  8bc6                 mov eax, esi
// 004b5c86  64890d00000000       mov dword ptr fs:[0], ecx
// 004b5c8d  5e                   pop esi
// 004b5c8e  83c414               add esp, 0x14
// 004b5c91  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
