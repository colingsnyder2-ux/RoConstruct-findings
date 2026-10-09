// roc 2008-06 00493a90  unit: RBX::VShirt::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00493a90
//
// 00493a90  6aff                 push -1
// 00493a92  6868617c00           push 0x7c6168
// 00493a97  64a100000000         mov eax, dword ptr fs:[0]
// 00493a9d  50                   push eax
// 00493a9e  64892500000000       mov dword ptr fs:[0], esp
// 00493aa5  51                   push ecx
// 00493aa6  56                   push esi
// 00493aa7  57                   push edi
// 00493aa8  8bf9                 mov edi, ecx
// 00493aaa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00493aae  6a00                 push 0
// 00493ab0  83ec08               sub esp, 8
// 00493ab3  8bc4                 mov eax, esp
// 00493ab5  8908                 mov dword ptr [eax], ecx
// 00493ab7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00493abb  895004               mov dword ptr [eax + 4], edx
// 00493abe  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00493ac2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00493aca  89642414             mov dword ptr [esp + 0x14], esp
// 00493ace  85c0                 test eax, eax
// 00493ad0  740c                 je 0x493ade
// 00493ad2  83c004               add eax, 4
// 00493ad5  b901000000           mov ecx, 1
// 00493ada  f00fc108             lock xadd dword ptr [eax], ecx
// 00493ade  8bcf                 mov ecx, edi
// 00493ae0  e8abfaffff           call 0x493590
// 00493ae5  8b742420             mov esi, dword ptr [esp + 0x20]
// 00493ae9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00493af1  85f6                 test esi, esi
// 00493af3  742a                 je 0x493b1f
// 00493af5  8d5604               lea edx, [esi + 4]
// 00493af8  83c8ff               or eax, 0xffffffff
// 00493afb  f00fc102             lock xadd dword ptr [edx], eax
// 00493aff  751e                 jne 0x493b1f
// 00493b01  8b16                 mov edx, dword ptr [esi]
// 00493b03  8b4204               mov eax, dword ptr [edx + 4]
// 00493b06  8bce                 mov ecx, esi
// 00493b08  ffd0                 call eax
// 00493b0a  8d4e08               lea ecx, [esi + 8]
// 00493b0d  83caff               or edx, 0xffffffff
// 00493b10  f00fc111             lock xadd dword ptr [ecx], edx
// 00493b14  7509                 jne 0x493b1f
// 00493b16  8b06                 mov eax, dword ptr [esi]
// 00493b18  8b5008               mov edx, dword ptr [eax + 8]
// 00493b1b  8bce                 mov ecx, esi
// 00493b1d  ffd2                 call edx
// 00493b1f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00493b23  8bc7                 mov eax, edi
// 00493b25  5f                   pop edi
// 00493b26  64890d00000000       mov dword ptr fs:[0], ecx
// 00493b2d  5e                   pop esi
// 00493b2e  83c410               add esp, 0x10
// 00493b31  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
