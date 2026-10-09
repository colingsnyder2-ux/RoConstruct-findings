// roc 2008-06 004b61d0  unit: RBX::VPartInstance::?$SignalDesc  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b61d0
//
// 004b61d0  6aff                 push -1
// 004b61d2  68bea47d00           push 0x7da4be
// 004b61d7  64a100000000         mov eax, dword ptr fs:[0]
// 004b61dd  50                   push eax
// 004b61de  64892500000000       mov dword ptr fs:[0], esp
// 004b61e5  83ec08               sub esp, 8
// 004b61e8  56                   push esi
// 004b61e9  8bf1                 mov esi, ecx
// 004b61eb  c70600000000         mov dword ptr [esi], 0
// 004b61f1  89742404             mov dword ptr [esp + 4], esi
// 004b61f5  c7460400000000       mov dword ptr [esi + 4], 0
// 004b61fc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004b6200  8b10                 mov edx, dword ptr [eax]
// 004b6202  6a00                 push 0
// 004b6204  83ec08               sub esp, 8
// 004b6207  8bcc                 mov ecx, esp
// 004b6209  8911                 mov dword ptr [ecx], edx
// 004b620b  8b4004               mov eax, dword ptr [eax + 4]
// 004b620e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004b6216  89642414             mov dword ptr [esp + 0x14], esp
// 004b621a  894104               mov dword ptr [ecx + 4], eax
// 004b621d  85c0                 test eax, eax
// 004b621f  740c                 je 0x4b622d
// 004b6221  83c004               add eax, 4
// 004b6224  b901000000           mov ecx, 1
// 004b6229  f00fc108             lock xadd dword ptr [eax], ecx
// 004b622d  8d4e08               lea ecx, [esi + 8]
// 004b6230  e87bfbffff           call 0x4b5db0
// 004b6235  6a28                 push 0x28
// 004b6237  c644241801           mov byte ptr [esp + 0x18], 1
// 004b623c  e8dfa61e00           call 0x6a0920
// 004b6241  83c404               add esp, 4
// 004b6244  8944241c             mov dword ptr [esp + 0x1c], eax
// 004b6248  c644241402           mov byte ptr [esp + 0x14], 2
// 004b624d  85c0                 test eax, eax
// 004b624f  7409                 je 0x4b625a
// 004b6251  8bc8                 mov ecx, eax
// 004b6253  e8e84af6ff           call 0x41ad40
// 004b6258  eb02                 jmp 0x4b625c
// 004b625a  33c0                 xor eax, eax
// 004b625c  50                   push eax
// 004b625d  8bce                 mov ecx, esi
// 004b625f  c644241801           mov byte ptr [esp + 0x18], 1
// 004b6264  e8874ef6ff           call 0x41b0f0
// 004b6269  8bce                 mov ecx, esi
// 004b626b  e8d0f50d00           call 0x595840
// 004b6270  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b6274  8bc6                 mov eax, esi
// 004b6276  64890d00000000       mov dword ptr fs:[0], ecx
// 004b627d  5e                   pop esi
// 004b627e  83c414               add esp, 0x14
// 004b6281  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
