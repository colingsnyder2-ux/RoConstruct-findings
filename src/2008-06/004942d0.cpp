// roc 2008-06 004942d0  unit: RBX::Network::Player  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004942d0
//
// 004942d0  6aff                 push -1
// 004942d2  68bea47d00           push 0x7da4be
// 004942d7  64a100000000         mov eax, dword ptr fs:[0]
// 004942dd  50                   push eax
// 004942de  64892500000000       mov dword ptr fs:[0], esp
// 004942e5  83ec08               sub esp, 8
// 004942e8  56                   push esi
// 004942e9  8bf1                 mov esi, ecx
// 004942eb  c70600000000         mov dword ptr [esi], 0
// 004942f1  89742404             mov dword ptr [esp + 4], esi
// 004942f5  c7460400000000       mov dword ptr [esi + 4], 0
// 004942fc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00494300  8b10                 mov edx, dword ptr [eax]
// 00494302  6a00                 push 0
// 00494304  83ec08               sub esp, 8
// 00494307  8bcc                 mov ecx, esp
// 00494309  8911                 mov dword ptr [ecx], edx
// 0049430b  8b4004               mov eax, dword ptr [eax + 4]
// 0049430e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00494316  89642414             mov dword ptr [esp + 0x14], esp
// 0049431a  894104               mov dword ptr [ecx + 4], eax
// 0049431d  85c0                 test eax, eax
// 0049431f  740c                 je 0x49432d
// 00494321  83c004               add eax, 4
// 00494324  b901000000           mov ecx, 1
// 00494329  f00fc108             lock xadd dword ptr [eax], ecx
// 0049432d  8d4e08               lea ecx, [esi + 8]
// 00494330  e80bf8ffff           call 0x493b40
// 00494335  6a28                 push 0x28
// 00494337  c644241801           mov byte ptr [esp + 0x18], 1
// 0049433c  e8dfc52000           call 0x6a0920
// 00494341  83c404               add esp, 4
// 00494344  8944241c             mov dword ptr [esp + 0x1c], eax
// 00494348  c644241402           mov byte ptr [esp + 0x14], 2
// 0049434d  85c0                 test eax, eax
// 0049434f  7409                 je 0x49435a
// 00494351  8bc8                 mov ecx, eax
// 00494353  e8e869f8ff           call 0x41ad40
// 00494358  eb02                 jmp 0x49435c
// 0049435a  33c0                 xor eax, eax
// 0049435c  50                   push eax
// 0049435d  8bce                 mov ecx, esi
// 0049435f  c644241801           mov byte ptr [esp + 0x18], 1
// 00494364  e8876df8ff           call 0x41b0f0
// 00494369  8bce                 mov ecx, esi
// 0049436b  e8d0141000           call 0x595840
// 00494370  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00494374  8bc6                 mov eax, esi
// 00494376  64890d00000000       mov dword ptr fs:[0], ecx
// 0049437d  5e                   pop esi
// 0049437e  83c414               add esp, 0x14
// 00494381  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
