// roc 2008-06 005dbd00  unit: RBX::VPartInstance::?$FilteredSelection  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dbd00
//
// 005dbd00  6aff                 push -1
// 005dbd02  6868617c00           push 0x7c6168
// 005dbd07  64a100000000         mov eax, dword ptr fs:[0]
// 005dbd0d  50                   push eax
// 005dbd0e  64892500000000       mov dword ptr fs:[0], esp
// 005dbd15  51                   push ecx
// 005dbd16  56                   push esi
// 005dbd17  57                   push edi
// 005dbd18  8bf9                 mov edi, ecx
// 005dbd1a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005dbd1e  6a00                 push 0
// 005dbd20  83ec08               sub esp, 8
// 005dbd23  8bc4                 mov eax, esp
// 005dbd25  8908                 mov dword ptr [eax], ecx
// 005dbd27  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005dbd2b  895004               mov dword ptr [eax + 4], edx
// 005dbd2e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dbd32  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005dbd3a  89642414             mov dword ptr [esp + 0x14], esp
// 005dbd3e  85c0                 test eax, eax
// 005dbd40  740c                 je 0x5dbd4e
// 005dbd42  83c004               add eax, 4
// 005dbd45  b901000000           mov ecx, 1
// 005dbd4a  f00fc108             lock xadd dword ptr [eax], ecx
// 005dbd4e  8bcf                 mov ecx, edi
// 005dbd50  e81bffffff           call 0x5dbc70
// 005dbd55  8b742420             mov esi, dword ptr [esp + 0x20]
// 005dbd59  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005dbd61  85f6                 test esi, esi
// 005dbd63  742a                 je 0x5dbd8f
// 005dbd65  8d5604               lea edx, [esi + 4]
// 005dbd68  83c8ff               or eax, 0xffffffff
// 005dbd6b  f00fc102             lock xadd dword ptr [edx], eax
// 005dbd6f  751e                 jne 0x5dbd8f
// 005dbd71  8b16                 mov edx, dword ptr [esi]
// 005dbd73  8b4204               mov eax, dword ptr [edx + 4]
// 005dbd76  8bce                 mov ecx, esi
// 005dbd78  ffd0                 call eax
// 005dbd7a  8d4e08               lea ecx, [esi + 8]
// 005dbd7d  83caff               or edx, 0xffffffff
// 005dbd80  f00fc111             lock xadd dword ptr [ecx], edx
// 005dbd84  7509                 jne 0x5dbd8f
// 005dbd86  8b06                 mov eax, dword ptr [esi]
// 005dbd88  8b5008               mov edx, dword ptr [eax + 8]
// 005dbd8b  8bce                 mov ecx, esi
// 005dbd8d  ffd2                 call edx
// 005dbd8f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005dbd93  8bc7                 mov eax, edi
// 005dbd95  5f                   pop edi
// 005dbd96  64890d00000000       mov dword ptr fs:[0], ecx
// 005dbd9d  5e                   pop esi
// 005dbd9e  83c410               add esp, 0x10
// 005dbda1  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
