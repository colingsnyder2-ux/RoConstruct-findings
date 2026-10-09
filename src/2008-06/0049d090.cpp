// roc 2008-06 0049d090  unit: RBX::Network::VPlayers::?$BoundFuncDesc  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049d090
//
// 0049d090  6aff                 push -1
// 0049d092  6868617c00           push 0x7c6168
// 0049d097  64a100000000         mov eax, dword ptr fs:[0]
// 0049d09d  50                   push eax
// 0049d09e  64892500000000       mov dword ptr fs:[0], esp
// 0049d0a5  51                   push ecx
// 0049d0a6  56                   push esi
// 0049d0a7  57                   push edi
// 0049d0a8  8bf9                 mov edi, ecx
// 0049d0aa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0049d0ae  6a00                 push 0
// 0049d0b0  83ec08               sub esp, 8
// 0049d0b3  8bc4                 mov eax, esp
// 0049d0b5  8908                 mov dword ptr [eax], ecx
// 0049d0b7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0049d0bb  895004               mov dword ptr [eax + 4], edx
// 0049d0be  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0049d0c2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0049d0ca  89642414             mov dword ptr [esp + 0x14], esp
// 0049d0ce  85c0                 test eax, eax
// 0049d0d0  740c                 je 0x49d0de
// 0049d0d2  83c004               add eax, 4
// 0049d0d5  b901000000           mov ecx, 1
// 0049d0da  f00fc108             lock xadd dword ptr [eax], ecx
// 0049d0de  8bcf                 mov ecx, edi
// 0049d0e0  e84bf5ffff           call 0x49c630
// 0049d0e5  8b742420             mov esi, dword ptr [esp + 0x20]
// 0049d0e9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0049d0f1  85f6                 test esi, esi
// 0049d0f3  742a                 je 0x49d11f
// 0049d0f5  8d5604               lea edx, [esi + 4]
// 0049d0f8  83c8ff               or eax, 0xffffffff
// 0049d0fb  f00fc102             lock xadd dword ptr [edx], eax
// 0049d0ff  751e                 jne 0x49d11f
// 0049d101  8b16                 mov edx, dword ptr [esi]
// 0049d103  8b4204               mov eax, dword ptr [edx + 4]
// 0049d106  8bce                 mov ecx, esi
// 0049d108  ffd0                 call eax
// 0049d10a  8d4e08               lea ecx, [esi + 8]
// 0049d10d  83caff               or edx, 0xffffffff
// 0049d110  f00fc111             lock xadd dword ptr [ecx], edx
// 0049d114  7509                 jne 0x49d11f
// 0049d116  8b06                 mov eax, dword ptr [esi]
// 0049d118  8b5008               mov edx, dword ptr [eax + 8]
// 0049d11b  8bce                 mov ecx, esi
// 0049d11d  ffd2                 call edx
// 0049d11f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0049d123  8bc7                 mov eax, edi
// 0049d125  5f                   pop edi
// 0049d126  64890d00000000       mov dword ptr fs:[0], ecx
// 0049d12d  5e                   pop esi
// 0049d12e  83c410               add esp, 0x10
// 0049d131  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
