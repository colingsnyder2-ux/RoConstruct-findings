// roc 2008-06 0049d390  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049d390
//
// 0049d390  6aff                 push -1
// 0049d392  68bea47d00           push 0x7da4be
// 0049d397  64a100000000         mov eax, dword ptr fs:[0]
// 0049d39d  50                   push eax
// 0049d39e  64892500000000       mov dword ptr fs:[0], esp
// 0049d3a5  83ec08               sub esp, 8
// 0049d3a8  56                   push esi
// 0049d3a9  8bf1                 mov esi, ecx
// 0049d3ab  c70600000000         mov dword ptr [esi], 0
// 0049d3b1  89742404             mov dword ptr [esp + 4], esi
// 0049d3b5  c7460400000000       mov dword ptr [esi + 4], 0
// 0049d3bc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0049d3c0  8b10                 mov edx, dword ptr [eax]
// 0049d3c2  6a00                 push 0
// 0049d3c4  83ec08               sub esp, 8
// 0049d3c7  8bcc                 mov ecx, esp
// 0049d3c9  8911                 mov dword ptr [ecx], edx
// 0049d3cb  8b4004               mov eax, dword ptr [eax + 4]
// 0049d3ce  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0049d3d6  89642414             mov dword ptr [esp + 0x14], esp
// 0049d3da  894104               mov dword ptr [ecx + 4], eax
// 0049d3dd  85c0                 test eax, eax
// 0049d3df  740c                 je 0x49d3ed
// 0049d3e1  83c004               add eax, 4
// 0049d3e4  b901000000           mov ecx, 1
// 0049d3e9  f00fc108             lock xadd dword ptr [eax], ecx
// 0049d3ed  8d4e08               lea ecx, [esi + 8]
// 0049d3f0  e89bfcffff           call 0x49d090
// 0049d3f5  6a28                 push 0x28
// 0049d3f7  c644241801           mov byte ptr [esp + 0x18], 1
// 0049d3fc  e81f352000           call 0x6a0920
// 0049d401  83c404               add esp, 4
// 0049d404  8944241c             mov dword ptr [esp + 0x1c], eax
// 0049d408  c644241402           mov byte ptr [esp + 0x14], 2
// 0049d40d  85c0                 test eax, eax
// 0049d40f  7409                 je 0x49d41a
// 0049d411  8bc8                 mov ecx, eax
// 0049d413  e828d9f7ff           call 0x41ad40
// 0049d418  eb02                 jmp 0x49d41c
// 0049d41a  33c0                 xor eax, eax
// 0049d41c  50                   push eax
// 0049d41d  8bce                 mov ecx, esi
// 0049d41f  c644241801           mov byte ptr [esp + 0x18], 1
// 0049d424  e8c7dcf7ff           call 0x41b0f0
// 0049d429  8bce                 mov ecx, esi
// 0049d42b  e810840f00           call 0x595840
// 0049d430  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049d434  8bc6                 mov eax, esi
// 0049d436  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d43d  5e                   pop esi
// 0049d43e  83c414               add esp, 0x14
// 0049d441  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
