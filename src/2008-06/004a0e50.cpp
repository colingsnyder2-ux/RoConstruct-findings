// roc 2008-06 004a0e50  unit: RBX::Network::VClient::?$BoundFuncDesc  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a0e50
//
// 004a0e50  6aff                 push -1
// 004a0e52  6868617c00           push 0x7c6168
// 004a0e57  64a100000000         mov eax, dword ptr fs:[0]
// 004a0e5d  50                   push eax
// 004a0e5e  64892500000000       mov dword ptr fs:[0], esp
// 004a0e65  51                   push ecx
// 004a0e66  56                   push esi
// 004a0e67  57                   push edi
// 004a0e68  8bf9                 mov edi, ecx
// 004a0e6a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004a0e6e  6a00                 push 0
// 004a0e70  83ec08               sub esp, 8
// 004a0e73  8bc4                 mov eax, esp
// 004a0e75  8908                 mov dword ptr [eax], ecx
// 004a0e77  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004a0e7b  895004               mov dword ptr [eax + 4], edx
// 004a0e7e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004a0e82  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004a0e8a  89642414             mov dword ptr [esp + 0x14], esp
// 004a0e8e  85c0                 test eax, eax
// 004a0e90  740c                 je 0x4a0e9e
// 004a0e92  83c004               add eax, 4
// 004a0e95  b901000000           mov ecx, 1
// 004a0e9a  f00fc108             lock xadd dword ptr [eax], ecx
// 004a0e9e  8bcf                 mov ecx, edi
// 004a0ea0  e85bfaffff           call 0x4a0900
// 004a0ea5  8b742420             mov esi, dword ptr [esp + 0x20]
// 004a0ea9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004a0eb1  85f6                 test esi, esi
// 004a0eb3  742a                 je 0x4a0edf
// 004a0eb5  8d5604               lea edx, [esi + 4]
// 004a0eb8  83c8ff               or eax, 0xffffffff
// 004a0ebb  f00fc102             lock xadd dword ptr [edx], eax
// 004a0ebf  751e                 jne 0x4a0edf
// 004a0ec1  8b16                 mov edx, dword ptr [esi]
// 004a0ec3  8b4204               mov eax, dword ptr [edx + 4]
// 004a0ec6  8bce                 mov ecx, esi
// 004a0ec8  ffd0                 call eax
// 004a0eca  8d4e08               lea ecx, [esi + 8]
// 004a0ecd  83caff               or edx, 0xffffffff
// 004a0ed0  f00fc111             lock xadd dword ptr [ecx], edx
// 004a0ed4  7509                 jne 0x4a0edf
// 004a0ed6  8b06                 mov eax, dword ptr [esi]
// 004a0ed8  8b5008               mov edx, dword ptr [eax + 8]
// 004a0edb  8bce                 mov ecx, esi
// 004a0edd  ffd2                 call edx
// 004a0edf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a0ee3  8bc7                 mov eax, edi
// 004a0ee5  5f                   pop edi
// 004a0ee6  64890d00000000       mov dword ptr fs:[0], ecx
// 004a0eed  5e                   pop esi
// 004a0eee  83c410               add esp, 0x10
// 004a0ef1  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
