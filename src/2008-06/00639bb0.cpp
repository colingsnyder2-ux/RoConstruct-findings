// roc 2008-06 00639bb0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639bb0
//
// 00639bb0  6aff                 push -1
// 00639bb2  6868617c00           push 0x7c6168
// 00639bb7  64a100000000         mov eax, dword ptr fs:[0]
// 00639bbd  50                   push eax
// 00639bbe  64892500000000       mov dword ptr fs:[0], esp
// 00639bc5  51                   push ecx
// 00639bc6  56                   push esi
// 00639bc7  57                   push edi
// 00639bc8  8bf9                 mov edi, ecx
// 00639bca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00639bce  6a00                 push 0
// 00639bd0  83ec08               sub esp, 8
// 00639bd3  8bc4                 mov eax, esp
// 00639bd5  8908                 mov dword ptr [eax], ecx
// 00639bd7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00639bdb  895004               mov dword ptr [eax + 4], edx
// 00639bde  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00639be2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00639bea  89642414             mov dword ptr [esp + 0x14], esp
// 00639bee  85c0                 test eax, eax
// 00639bf0  740c                 je 0x639bfe
// 00639bf2  83c004               add eax, 4
// 00639bf5  b901000000           mov ecx, 1
// 00639bfa  f00fc108             lock xadd dword ptr [eax], ecx
// 00639bfe  8bcf                 mov ecx, edi
// 00639c00  e8cbf1ffff           call 0x638dd0
// 00639c05  8b742420             mov esi, dword ptr [esp + 0x20]
// 00639c09  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00639c11  85f6                 test esi, esi
// 00639c13  742a                 je 0x639c3f
// 00639c15  8d5604               lea edx, [esi + 4]
// 00639c18  83c8ff               or eax, 0xffffffff
// 00639c1b  f00fc102             lock xadd dword ptr [edx], eax
// 00639c1f  751e                 jne 0x639c3f
// 00639c21  8b16                 mov edx, dword ptr [esi]
// 00639c23  8b4204               mov eax, dword ptr [edx + 4]
// 00639c26  8bce                 mov ecx, esi
// 00639c28  ffd0                 call eax
// 00639c2a  8d4e08               lea ecx, [esi + 8]
// 00639c2d  83caff               or edx, 0xffffffff
// 00639c30  f00fc111             lock xadd dword ptr [ecx], edx
// 00639c34  7509                 jne 0x639c3f
// 00639c36  8b06                 mov eax, dword ptr [esi]
// 00639c38  8b5008               mov edx, dword ptr [eax + 8]
// 00639c3b  8bce                 mov ecx, esi
// 00639c3d  ffd2                 call edx
// 00639c3f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639c43  8bc7                 mov eax, edi
// 00639c45  5f                   pop edi
// 00639c46  64890d00000000       mov dword ptr fs:[0], ecx
// 00639c4d  5e                   pop esi
// 00639c4e  83c410               add esp, 0x10
// 00639c51  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
