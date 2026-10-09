// roc 2008-06 0062b500  unit: RBX::Explosion  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b500
//
// 0062b500  6aff                 push -1
// 0062b502  68bea47d00           push 0x7da4be
// 0062b507  64a100000000         mov eax, dword ptr fs:[0]
// 0062b50d  50                   push eax
// 0062b50e  64892500000000       mov dword ptr fs:[0], esp
// 0062b515  83ec08               sub esp, 8
// 0062b518  56                   push esi
// 0062b519  8bf1                 mov esi, ecx
// 0062b51b  c70600000000         mov dword ptr [esi], 0
// 0062b521  89742404             mov dword ptr [esp + 4], esi
// 0062b525  c7460400000000       mov dword ptr [esi + 4], 0
// 0062b52c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062b530  8b10                 mov edx, dword ptr [eax]
// 0062b532  6a00                 push 0
// 0062b534  83ec08               sub esp, 8
// 0062b537  8bcc                 mov ecx, esp
// 0062b539  8911                 mov dword ptr [ecx], edx
// 0062b53b  8b4004               mov eax, dword ptr [eax + 4]
// 0062b53e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0062b546  89642414             mov dword ptr [esp + 0x14], esp
// 0062b54a  894104               mov dword ptr [ecx + 4], eax
// 0062b54d  85c0                 test eax, eax
// 0062b54f  740c                 je 0x62b55d
// 0062b551  83c004               add eax, 4
// 0062b554  b901000000           mov ecx, 1
// 0062b559  f00fc108             lock xadd dword ptr [eax], ecx
// 0062b55d  8d4e08               lea ecx, [esi + 8]
// 0062b560  e82bfeffff           call 0x62b390
// 0062b565  6a28                 push 0x28
// 0062b567  c644241801           mov byte ptr [esp + 0x18], 1
// 0062b56c  e8af530700           call 0x6a0920
// 0062b571  83c404               add esp, 4
// 0062b574  8944241c             mov dword ptr [esp + 0x1c], eax
// 0062b578  c644241402           mov byte ptr [esp + 0x14], 2
// 0062b57d  85c0                 test eax, eax
// 0062b57f  7409                 je 0x62b58a
// 0062b581  8bc8                 mov ecx, eax
// 0062b583  e8b8f7deff           call 0x41ad40
// 0062b588  eb02                 jmp 0x62b58c
// 0062b58a  33c0                 xor eax, eax
// 0062b58c  50                   push eax
// 0062b58d  8bce                 mov ecx, esi
// 0062b58f  c644241801           mov byte ptr [esp + 0x18], 1
// 0062b594  e857fbdeff           call 0x41b0f0
// 0062b599  8bce                 mov ecx, esi
// 0062b59b  e8a0a2f6ff           call 0x595840
// 0062b5a0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062b5a4  8bc6                 mov eax, esi
// 0062b5a6  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b5ad  5e                   pop esi
// 0062b5ae  83c414               add esp, 0x14
// 0062b5b1  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
