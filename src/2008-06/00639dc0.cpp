// roc 2008-06 00639dc0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639dc0
//
// 00639dc0  6aff                 push -1
// 00639dc2  6868617c00           push 0x7c6168
// 00639dc7  64a100000000         mov eax, dword ptr fs:[0]
// 00639dcd  50                   push eax
// 00639dce  64892500000000       mov dword ptr fs:[0], esp
// 00639dd5  51                   push ecx
// 00639dd6  56                   push esi
// 00639dd7  57                   push edi
// 00639dd8  8bf9                 mov edi, ecx
// 00639dda  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00639dde  6a00                 push 0
// 00639de0  83ec08               sub esp, 8
// 00639de3  8bc4                 mov eax, esp
// 00639de5  8908                 mov dword ptr [eax], ecx
// 00639de7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00639deb  895004               mov dword ptr [eax + 4], edx
// 00639dee  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00639df2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00639dfa  89642414             mov dword ptr [esp + 0x14], esp
// 00639dfe  85c0                 test eax, eax
// 00639e00  740c                 je 0x639e0e
// 00639e02  83c004               add eax, 4
// 00639e05  b901000000           mov ecx, 1
// 00639e0a  f00fc108             lock xadd dword ptr [eax], ecx
// 00639e0e  8bcf                 mov ecx, edi
// 00639e10  e86bf1ffff           call 0x638f80
// 00639e15  8b742420             mov esi, dword ptr [esp + 0x20]
// 00639e19  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00639e21  85f6                 test esi, esi
// 00639e23  742a                 je 0x639e4f
// 00639e25  8d5604               lea edx, [esi + 4]
// 00639e28  83c8ff               or eax, 0xffffffff
// 00639e2b  f00fc102             lock xadd dword ptr [edx], eax
// 00639e2f  751e                 jne 0x639e4f
// 00639e31  8b16                 mov edx, dword ptr [esi]
// 00639e33  8b4204               mov eax, dword ptr [edx + 4]
// 00639e36  8bce                 mov ecx, esi
// 00639e38  ffd0                 call eax
// 00639e3a  8d4e08               lea ecx, [esi + 8]
// 00639e3d  83caff               or edx, 0xffffffff
// 00639e40  f00fc111             lock xadd dword ptr [ecx], edx
// 00639e44  7509                 jne 0x639e4f
// 00639e46  8b06                 mov eax, dword ptr [esi]
// 00639e48  8b5008               mov edx, dword ptr [eax + 8]
// 00639e4b  8bce                 mov ecx, esi
// 00639e4d  ffd2                 call edx
// 00639e4f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639e53  8bc7                 mov eax, edi
// 00639e55  5f                   pop edi
// 00639e56  64890d00000000       mov dword ptr fs:[0], ecx
// 00639e5d  5e                   pop esi
// 00639e5e  83c410               add esp, 0x10
// 00639e61  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
