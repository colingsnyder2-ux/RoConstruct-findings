// roc 2008-06 00557090  unit: RBX::VRunService::?$BoundFuncDesc  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557090
//
// 00557090  6aff                 push -1
// 00557092  68bea47d00           push 0x7da4be
// 00557097  64a100000000         mov eax, dword ptr fs:[0]
// 0055709d  50                   push eax
// 0055709e  64892500000000       mov dword ptr fs:[0], esp
// 005570a5  83ec08               sub esp, 8
// 005570a8  56                   push esi
// 005570a9  8bf1                 mov esi, ecx
// 005570ab  c70600000000         mov dword ptr [esi], 0
// 005570b1  89742404             mov dword ptr [esp + 4], esi
// 005570b5  c7460400000000       mov dword ptr [esi + 4], 0
// 005570bc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005570c0  8b10                 mov edx, dword ptr [eax]
// 005570c2  6a00                 push 0
// 005570c4  83ec08               sub esp, 8
// 005570c7  8bcc                 mov ecx, esp
// 005570c9  8911                 mov dword ptr [ecx], edx
// 005570cb  8b4004               mov eax, dword ptr [eax + 4]
// 005570ce  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005570d6  89642414             mov dword ptr [esp + 0x14], esp
// 005570da  894104               mov dword ptr [ecx + 4], eax
// 005570dd  85c0                 test eax, eax
// 005570df  740c                 je 0x5570ed
// 005570e1  83c004               add eax, 4
// 005570e4  b901000000           mov ecx, 1
// 005570e9  f00fc108             lock xadd dword ptr [eax], ecx
// 005570ed  8d4e08               lea ecx, [esi + 8]
// 005570f0  e8ebfeffff           call 0x556fe0
// 005570f5  6a28                 push 0x28
// 005570f7  c644241801           mov byte ptr [esp + 0x18], 1
// 005570fc  e81f981400           call 0x6a0920
// 00557101  83c404               add esp, 4
// 00557104  8944241c             mov dword ptr [esp + 0x1c], eax
// 00557108  c644241402           mov byte ptr [esp + 0x14], 2
// 0055710d  85c0                 test eax, eax
// 0055710f  7409                 je 0x55711a
// 00557111  8bc8                 mov ecx, eax
// 00557113  e8283cecff           call 0x41ad40
// 00557118  eb02                 jmp 0x55711c
// 0055711a  33c0                 xor eax, eax
// 0055711c  50                   push eax
// 0055711d  8bce                 mov ecx, esi
// 0055711f  c644241801           mov byte ptr [esp + 0x18], 1
// 00557124  e8c73fecff           call 0x41b0f0
// 00557129  8bce                 mov ecx, esi
// 0055712b  e810e70300           call 0x595840
// 00557130  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00557134  8bc6                 mov eax, esi
// 00557136  64890d00000000       mov dword ptr fs:[0], ecx
// 0055713d  5e                   pop esi
// 0055713e  83c414               add esp, 0x14
// 00557141  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
