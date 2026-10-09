// roc 2008-06 004b5db0  unit: RBX::Network::VClient::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b5db0
//
// 004b5db0  6aff                 push -1
// 004b5db2  6868617c00           push 0x7c6168
// 004b5db7  64a100000000         mov eax, dword ptr fs:[0]
// 004b5dbd  50                   push eax
// 004b5dbe  64892500000000       mov dword ptr fs:[0], esp
// 004b5dc5  51                   push ecx
// 004b5dc6  56                   push esi
// 004b5dc7  57                   push edi
// 004b5dc8  8bf9                 mov edi, ecx
// 004b5dca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004b5dce  6a00                 push 0
// 004b5dd0  83ec08               sub esp, 8
// 004b5dd3  8bc4                 mov eax, esp
// 004b5dd5  8908                 mov dword ptr [eax], ecx
// 004b5dd7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 004b5ddb  895004               mov dword ptr [eax + 4], edx
// 004b5dde  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004b5de2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004b5dea  89642414             mov dword ptr [esp + 0x14], esp
// 004b5dee  85c0                 test eax, eax
// 004b5df0  740c                 je 0x4b5dfe
// 004b5df2  83c004               add eax, 4
// 004b5df5  b901000000           mov ecx, 1
// 004b5dfa  f00fc108             lock xadd dword ptr [eax], ecx
// 004b5dfe  8bcf                 mov ecx, edi
// 004b5e00  e81bf4ffff           call 0x4b5220
// 004b5e05  8b742420             mov esi, dword ptr [esp + 0x20]
// 004b5e09  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004b5e11  85f6                 test esi, esi
// 004b5e13  742a                 je 0x4b5e3f
// 004b5e15  8d5604               lea edx, [esi + 4]
// 004b5e18  83c8ff               or eax, 0xffffffff
// 004b5e1b  f00fc102             lock xadd dword ptr [edx], eax
// 004b5e1f  751e                 jne 0x4b5e3f
// 004b5e21  8b16                 mov edx, dword ptr [esi]
// 004b5e23  8b4204               mov eax, dword ptr [edx + 4]
// 004b5e26  8bce                 mov ecx, esi
// 004b5e28  ffd0                 call eax
// 004b5e2a  8d4e08               lea ecx, [esi + 8]
// 004b5e2d  83caff               or edx, 0xffffffff
// 004b5e30  f00fc111             lock xadd dword ptr [ecx], edx
// 004b5e34  7509                 jne 0x4b5e3f
// 004b5e36  8b06                 mov eax, dword ptr [esi]
// 004b5e38  8b5008               mov edx, dword ptr [eax + 8]
// 004b5e3b  8bce                 mov ecx, esi
// 004b5e3d  ffd2                 call edx
// 004b5e3f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b5e43  8bc7                 mov eax, edi
// 004b5e45  5f                   pop edi
// 004b5e46  64890d00000000       mov dword ptr fs:[0], ecx
// 004b5e4d  5e                   pop esi
// 004b5e4e  83c410               add esp, 0x10
// 004b5e51  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
