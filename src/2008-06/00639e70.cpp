// roc 2008-06 00639e70  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639e70
//
// 00639e70  6aff                 push -1
// 00639e72  6868617c00           push 0x7c6168
// 00639e77  64a100000000         mov eax, dword ptr fs:[0]
// 00639e7d  50                   push eax
// 00639e7e  64892500000000       mov dword ptr fs:[0], esp
// 00639e85  51                   push ecx
// 00639e86  56                   push esi
// 00639e87  57                   push edi
// 00639e88  8bf9                 mov edi, ecx
// 00639e8a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00639e8e  6a00                 push 0
// 00639e90  83ec08               sub esp, 8
// 00639e93  8bc4                 mov eax, esp
// 00639e95  8908                 mov dword ptr [eax], ecx
// 00639e97  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00639e9b  895004               mov dword ptr [eax + 4], edx
// 00639e9e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00639ea2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00639eaa  89642414             mov dword ptr [esp + 0x14], esp
// 00639eae  85c0                 test eax, eax
// 00639eb0  740c                 je 0x639ebe
// 00639eb2  83c004               add eax, 4
// 00639eb5  b901000000           mov ecx, 1
// 00639eba  f00fc108             lock xadd dword ptr [eax], ecx
// 00639ebe  8bcf                 mov ecx, edi
// 00639ec0  e84bf1ffff           call 0x639010
// 00639ec5  8b742420             mov esi, dword ptr [esp + 0x20]
// 00639ec9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00639ed1  85f6                 test esi, esi
// 00639ed3  742a                 je 0x639eff
// 00639ed5  8d5604               lea edx, [esi + 4]
// 00639ed8  83c8ff               or eax, 0xffffffff
// 00639edb  f00fc102             lock xadd dword ptr [edx], eax
// 00639edf  751e                 jne 0x639eff
// 00639ee1  8b16                 mov edx, dword ptr [esi]
// 00639ee3  8b4204               mov eax, dword ptr [edx + 4]
// 00639ee6  8bce                 mov ecx, esi
// 00639ee8  ffd0                 call eax
// 00639eea  8d4e08               lea ecx, [esi + 8]
// 00639eed  83caff               or edx, 0xffffffff
// 00639ef0  f00fc111             lock xadd dword ptr [ecx], edx
// 00639ef4  7509                 jne 0x639eff
// 00639ef6  8b06                 mov eax, dword ptr [esi]
// 00639ef8  8b5008               mov edx, dword ptr [eax + 8]
// 00639efb  8bce                 mov ecx, esi
// 00639efd  ffd2                 call edx
// 00639eff  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639f03  8bc7                 mov eax, edi
// 00639f05  5f                   pop edi
// 00639f06  64890d00000000       mov dword ptr fs:[0], ecx
// 00639f0d  5e                   pop esi
// 00639f0e  83c410               add esp, 0x10
// 00639f11  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
