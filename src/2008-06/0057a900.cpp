// roc 2008-06 0057a900  unit: RBX::VServiceProvider::?$NonFactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057a900
//
// 0057a900  6aff                 push -1
// 0057a902  6868617c00           push 0x7c6168
// 0057a907  64a100000000         mov eax, dword ptr fs:[0]
// 0057a90d  50                   push eax
// 0057a90e  64892500000000       mov dword ptr fs:[0], esp
// 0057a915  51                   push ecx
// 0057a916  56                   push esi
// 0057a917  57                   push edi
// 0057a918  8bf9                 mov edi, ecx
// 0057a91a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0057a91e  6a00                 push 0
// 0057a920  83ec08               sub esp, 8
// 0057a923  8bc4                 mov eax, esp
// 0057a925  8908                 mov dword ptr [eax], ecx
// 0057a927  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0057a92b  895004               mov dword ptr [eax + 4], edx
// 0057a92e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0057a932  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0057a93a  89642414             mov dword ptr [esp + 0x14], esp
// 0057a93e  85c0                 test eax, eax
// 0057a940  740c                 je 0x57a94e
// 0057a942  83c004               add eax, 4
// 0057a945  b901000000           mov ecx, 1
// 0057a94a  f00fc108             lock xadd dword ptr [eax], ecx
// 0057a94e  8bcf                 mov ecx, edi
// 0057a950  e81bffffff           call 0x57a870
// 0057a955  8b742420             mov esi, dword ptr [esp + 0x20]
// 0057a959  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0057a961  85f6                 test esi, esi
// 0057a963  742a                 je 0x57a98f
// 0057a965  8d5604               lea edx, [esi + 4]
// 0057a968  83c8ff               or eax, 0xffffffff
// 0057a96b  f00fc102             lock xadd dword ptr [edx], eax
// 0057a96f  751e                 jne 0x57a98f
// 0057a971  8b16                 mov edx, dword ptr [esi]
// 0057a973  8b4204               mov eax, dword ptr [edx + 4]
// 0057a976  8bce                 mov ecx, esi
// 0057a978  ffd0                 call eax
// 0057a97a  8d4e08               lea ecx, [esi + 8]
// 0057a97d  83caff               or edx, 0xffffffff
// 0057a980  f00fc111             lock xadd dword ptr [ecx], edx
// 0057a984  7509                 jne 0x57a98f
// 0057a986  8b06                 mov eax, dword ptr [esi]
// 0057a988  8b5008               mov edx, dword ptr [eax + 8]
// 0057a98b  8bce                 mov ecx, esi
// 0057a98d  ffd2                 call edx
// 0057a98f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057a993  8bc7                 mov eax, edi
// 0057a995  5f                   pop edi
// 0057a996  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a99d  5e                   pop esi
// 0057a99e  83c410               add esp, 0x10
// 0057a9a1  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
