// roc 2008-06 004a0fb0  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0fb0
//
// 004a0fb0  6aff                 push -1
// 004a0fb2  68bea47d00           push 0x7da4be
// 004a0fb7  64a100000000         mov eax, dword ptr fs:[0]
// 004a0fbd  50                   push eax
// 004a0fbe  64892500000000       mov dword ptr fs:[0], esp
// 004a0fc5  83ec08               sub esp, 8
// 004a0fc8  56                   push esi
// 004a0fc9  8bf1                 mov esi, ecx
// 004a0fcb  c70600000000         mov dword ptr [esi], 0
// 004a0fd1  89742404             mov dword ptr [esp + 4], esi
// 004a0fd5  c7460400000000       mov dword ptr [esi + 4], 0
// 004a0fdc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a0fe0  8b10                 mov edx, dword ptr [eax]
// 004a0fe2  6a00                 push 0
// 004a0fe4  83ec08               sub esp, 8
// 004a0fe7  8bcc                 mov ecx, esp
// 004a0fe9  8911                 mov dword ptr [ecx], edx
// 004a0feb  8b4004               mov eax, dword ptr [eax + 4]
// 004a0fee  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004a0ff6  89642414             mov dword ptr [esp + 0x14], esp
// 004a0ffa  894104               mov dword ptr [ecx + 4], eax
// 004a0ffd  85c0                 test eax, eax
// 004a0fff  740c                 je 0x4a100d
// 004a1001  83c004               add eax, 4
// 004a1004  b901000000           mov ecx, 1
// 004a1009  f00fc108             lock xadd dword ptr [eax], ecx
// 004a100d  8d4e08               lea ecx, [esi + 8]
// 004a1010  e83bfeffff           call 0x4a0e50
// 004a1015  6a28                 push 0x28
// 004a1017  c644241801           mov byte ptr [esp + 0x18], 1
// 004a101c  e8fff81f00           call 0x6a0920
// 004a1021  83c404               add esp, 4
// 004a1024  8944241c             mov dword ptr [esp + 0x1c], eax
// 004a1028  c644241402           mov byte ptr [esp + 0x14], 2
// 004a102d  85c0                 test eax, eax
// 004a102f  7409                 je 0x4a103a
// 004a1031  8bc8                 mov ecx, eax
// 004a1033  e8089df7ff           call 0x41ad40
// 004a1038  eb02                 jmp 0x4a103c
// 004a103a  33c0                 xor eax, eax
// 004a103c  50                   push eax
// 004a103d  8bce                 mov ecx, esi
// 004a103f  c644241801           mov byte ptr [esp + 0x18], 1
// 004a1044  e8a7a0f7ff           call 0x41b0f0
// 004a1049  8bce                 mov ecx, esi
// 004a104b  e8f0470f00           call 0x595840
// 004a1050  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a1054  8bc6                 mov eax, esi
// 004a1056  64890d00000000       mov dword ptr fs:[0], ecx
// 004a105d  5e                   pop esi
// 004a105e  83c414               add esp, 0x14
// 004a1061  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
