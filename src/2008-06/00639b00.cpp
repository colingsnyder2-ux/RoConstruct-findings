// roc 2008-06 00639b00  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639b00
//
// 00639b00  6aff                 push -1
// 00639b02  6868617c00           push 0x7c6168
// 00639b07  64a100000000         mov eax, dword ptr fs:[0]
// 00639b0d  50                   push eax
// 00639b0e  64892500000000       mov dword ptr fs:[0], esp
// 00639b15  51                   push ecx
// 00639b16  56                   push esi
// 00639b17  57                   push edi
// 00639b18  8bf9                 mov edi, ecx
// 00639b1a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00639b1e  6a00                 push 0
// 00639b20  83ec08               sub esp, 8
// 00639b23  8bc4                 mov eax, esp
// 00639b25  8908                 mov dword ptr [eax], ecx
// 00639b27  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00639b2b  895004               mov dword ptr [eax + 4], edx
// 00639b2e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00639b32  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00639b3a  89642414             mov dword ptr [esp + 0x14], esp
// 00639b3e  85c0                 test eax, eax
// 00639b40  740c                 je 0x639b4e
// 00639b42  83c004               add eax, 4
// 00639b45  b901000000           mov ecx, 1
// 00639b4a  f00fc108             lock xadd dword ptr [eax], ecx
// 00639b4e  8bcf                 mov ecx, edi
// 00639b50  e8ebf1ffff           call 0x638d40
// 00639b55  8b742420             mov esi, dword ptr [esp + 0x20]
// 00639b59  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00639b61  85f6                 test esi, esi
// 00639b63  742a                 je 0x639b8f
// 00639b65  8d5604               lea edx, [esi + 4]
// 00639b68  83c8ff               or eax, 0xffffffff
// 00639b6b  f00fc102             lock xadd dword ptr [edx], eax
// 00639b6f  751e                 jne 0x639b8f
// 00639b71  8b16                 mov edx, dword ptr [esi]
// 00639b73  8b4204               mov eax, dword ptr [edx + 4]
// 00639b76  8bce                 mov ecx, esi
// 00639b78  ffd0                 call eax
// 00639b7a  8d4e08               lea ecx, [esi + 8]
// 00639b7d  83caff               or edx, 0xffffffff
// 00639b80  f00fc111             lock xadd dword ptr [ecx], edx
// 00639b84  7509                 jne 0x639b8f
// 00639b86  8b06                 mov eax, dword ptr [esi]
// 00639b88  8b5008               mov edx, dword ptr [eax + 8]
// 00639b8b  8bce                 mov ecx, esi
// 00639b8d  ffd2                 call edx
// 00639b8f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639b93  8bc7                 mov eax, edi
// 00639b95  5f                   pop edi
// 00639b96  64890d00000000       mov dword ptr fs:[0], ecx
// 00639b9d  5e                   pop esi
// 00639b9e  83c410               add esp, 0x10
// 00639ba1  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
