// roc 2008-06 00494110  unit: RBX::Network::Player  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494110
//
// 00494110  6aff                 push -1
// 00494112  68bea47d00           push 0x7da4be
// 00494117  64a100000000         mov eax, dword ptr fs:[0]
// 0049411d  50                   push eax
// 0049411e  64892500000000       mov dword ptr fs:[0], esp
// 00494125  83ec08               sub esp, 8
// 00494128  56                   push esi
// 00494129  8bf1                 mov esi, ecx
// 0049412b  c70600000000         mov dword ptr [esi], 0
// 00494131  89742404             mov dword ptr [esp + 4], esi
// 00494135  c7460400000000       mov dword ptr [esi + 4], 0
// 0049413c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00494140  8b10                 mov edx, dword ptr [eax]
// 00494142  6a00                 push 0
// 00494144  83ec08               sub esp, 8
// 00494147  8bcc                 mov ecx, esp
// 00494149  8911                 mov dword ptr [ecx], edx
// 0049414b  8b4004               mov eax, dword ptr [eax + 4]
// 0049414e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00494156  89642414             mov dword ptr [esp + 0x14], esp
// 0049415a  894104               mov dword ptr [ecx + 4], eax
// 0049415d  85c0                 test eax, eax
// 0049415f  740c                 je 0x49416d
// 00494161  83c004               add eax, 4
// 00494164  b901000000           mov ecx, 1
// 00494169  f00fc108             lock xadd dword ptr [eax], ecx
// 0049416d  8d4e08               lea ecx, [esi + 8]
// 00494170  e81bf9ffff           call 0x493a90
// 00494175  6a28                 push 0x28
// 00494177  c644241801           mov byte ptr [esp + 0x18], 1
// 0049417c  e89fc72000           call 0x6a0920
// 00494181  83c404               add esp, 4
// 00494184  8944241c             mov dword ptr [esp + 0x1c], eax
// 00494188  c644241402           mov byte ptr [esp + 0x14], 2
// 0049418d  85c0                 test eax, eax
// 0049418f  7409                 je 0x49419a
// 00494191  8bc8                 mov ecx, eax
// 00494193  e8a86bf8ff           call 0x41ad40
// 00494198  eb02                 jmp 0x49419c
// 0049419a  33c0                 xor eax, eax
// 0049419c  50                   push eax
// 0049419d  8bce                 mov ecx, esi
// 0049419f  c644241801           mov byte ptr [esp + 0x18], 1
// 004941a4  e8476ff8ff           call 0x41b0f0
// 004941a9  8bce                 mov ecx, esi
// 004941ab  e890161000           call 0x595840
// 004941b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004941b4  8bc6                 mov eax, esi
// 004941b6  64890d00000000       mov dword ptr fs:[0], ecx
// 004941bd  5e                   pop esi
// 004941be  83c414               add esp, 0x14
// 004941c1  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
