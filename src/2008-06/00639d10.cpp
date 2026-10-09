// roc 2008-06 00639d10  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639d10
//
// 00639d10  6aff                 push -1
// 00639d12  6868617c00           push 0x7c6168
// 00639d17  64a100000000         mov eax, dword ptr fs:[0]
// 00639d1d  50                   push eax
// 00639d1e  64892500000000       mov dword ptr fs:[0], esp
// 00639d25  51                   push ecx
// 00639d26  56                   push esi
// 00639d27  57                   push edi
// 00639d28  8bf9                 mov edi, ecx
// 00639d2a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00639d2e  6a00                 push 0
// 00639d30  83ec08               sub esp, 8
// 00639d33  8bc4                 mov eax, esp
// 00639d35  8908                 mov dword ptr [eax], ecx
// 00639d37  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00639d3b  895004               mov dword ptr [eax + 4], edx
// 00639d3e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00639d42  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00639d4a  89642414             mov dword ptr [esp + 0x14], esp
// 00639d4e  85c0                 test eax, eax
// 00639d50  740c                 je 0x639d5e
// 00639d52  83c004               add eax, 4
// 00639d55  b901000000           mov ecx, 1
// 00639d5a  f00fc108             lock xadd dword ptr [eax], ecx
// 00639d5e  8bcf                 mov ecx, edi
// 00639d60  e88bf1ffff           call 0x638ef0
// 00639d65  8b742420             mov esi, dword ptr [esp + 0x20]
// 00639d69  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00639d71  85f6                 test esi, esi
// 00639d73  742a                 je 0x639d9f
// 00639d75  8d5604               lea edx, [esi + 4]
// 00639d78  83c8ff               or eax, 0xffffffff
// 00639d7b  f00fc102             lock xadd dword ptr [edx], eax
// 00639d7f  751e                 jne 0x639d9f
// 00639d81  8b16                 mov edx, dword ptr [esi]
// 00639d83  8b4204               mov eax, dword ptr [edx + 4]
// 00639d86  8bce                 mov ecx, esi
// 00639d88  ffd0                 call eax
// 00639d8a  8d4e08               lea ecx, [esi + 8]
// 00639d8d  83caff               or edx, 0xffffffff
// 00639d90  f00fc111             lock xadd dword ptr [ecx], edx
// 00639d94  7509                 jne 0x639d9f
// 00639d96  8b06                 mov eax, dword ptr [esi]
// 00639d98  8b5008               mov edx, dword ptr [eax + 8]
// 00639d9b  8bce                 mov ecx, esi
// 00639d9d  ffd2                 call edx
// 00639d9f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639da3  8bc7                 mov eax, edi
// 00639da5  5f                   pop edi
// 00639da6  64890d00000000       mov dword ptr fs:[0], ecx
// 00639dad  5e                   pop esi
// 00639dae  83c410               add esp, 0x10
// 00639db1  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
