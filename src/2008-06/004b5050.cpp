// roc 2008-06 004b5050  unit: RBX::Network::Replicator::DeleteInstanceItem  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5050
//
// 004b5050  6aff                 push -1
// 004b5052  6868617c00           push 0x7c6168
// 004b5057  64a100000000         mov eax, dword ptr fs:[0]
// 004b505d  50                   push eax
// 004b505e  64892500000000       mov dword ptr fs:[0], esp
// 004b5065  51                   push ecx
// 004b5066  56                   push esi
// 004b5067  57                   push edi
// 004b5068  8bf9                 mov edi, ecx
// 004b506a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b506e  6a00                 push 0
// 004b5070  83ec08               sub esp, 8
// 004b5073  8bc4                 mov eax, esp
// 004b5075  8908                 mov dword ptr [eax], ecx
// 004b5077  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004b507b  895004               mov dword ptr [eax + 4], edx
// 004b507e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004b5082  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004b508a  89642414             mov dword ptr [esp + 0x14], esp
// 004b508e  85c0                 test eax, eax
// 004b5090  740c                 je 0x4b509e
// 004b5092  83c004               add eax, 4
// 004b5095  b901000000           mov ecx, 1
// 004b509a  f00fc108             lock xadd dword ptr [eax], ecx
// 004b509e  8bcf                 mov ecx, edi
// 004b50a0  e80bf5ffff           call 0x4b45b0
// 004b50a5  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b50a9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b50b1  85f6                 test esi, esi
// 004b50b3  742a                 je 0x4b50df
// 004b50b5  8d5604               lea edx, [esi + 4]
// 004b50b8  83c8ff               or eax, 0xffffffff
// 004b50bb  f00fc102             lock xadd dword ptr [edx], eax
// 004b50bf  751e                 jne 0x4b50df
// 004b50c1  8b16                 mov edx, dword ptr [esi]
// 004b50c3  8b4204               mov eax, dword ptr [edx + 4]
// 004b50c6  8bce                 mov ecx, esi
// 004b50c8  ffd0                 call eax
// 004b50ca  8d4e08               lea ecx, [esi + 8]
// 004b50cd  83caff               or edx, 0xffffffff
// 004b50d0  f00fc111             lock xadd dword ptr [ecx], edx
// 004b50d4  7509                 jne 0x4b50df
// 004b50d6  8b06                 mov eax, dword ptr [esi]
// 004b50d8  8b5008               mov edx, dword ptr [eax + 8]
// 004b50db  8bce                 mov ecx, esi
// 004b50dd  ffd2                 call edx
// 004b50df  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b50e3  8bc7                 mov eax, edi
// 004b50e5  5f                   pop edi
// 004b50e6  64890d00000000       mov dword ptr fs:[0], ecx
// 004b50ed  5e                   pop esi
// 004b50ee  83c410               add esp, 0x10
// 004b50f1  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
