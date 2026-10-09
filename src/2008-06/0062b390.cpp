// roc 2008-06 0062b390  unit: RBX::Explosion  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062b390
//
// 0062b390  6aff                 push -1
// 0062b392  6868617c00           push 0x7c6168
// 0062b397  64a100000000         mov eax, dword ptr fs:[0]
// 0062b39d  50                   push eax
// 0062b39e  64892500000000       mov dword ptr fs:[0], esp
// 0062b3a5  51                   push ecx
// 0062b3a6  56                   push esi
// 0062b3a7  57                   push edi
// 0062b3a8  8bf9                 mov edi, ecx
// 0062b3aa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0062b3ae  6a00                 push 0
// 0062b3b0  83ec08               sub esp, 8
// 0062b3b3  8bc4                 mov eax, esp
// 0062b3b5  8908                 mov dword ptr [eax], ecx
// 0062b3b7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0062b3bb  895004               mov dword ptr [eax + 4], edx
// 0062b3be  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062b3c2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0062b3ca  89642414             mov dword ptr [esp + 0x14], esp
// 0062b3ce  85c0                 test eax, eax
// 0062b3d0  740c                 je 0x62b3de
// 0062b3d2  83c004               add eax, 4
// 0062b3d5  b901000000           mov ecx, 1
// 0062b3da  f00fc108             lock xadd dword ptr [eax], ecx
// 0062b3de  8bcf                 mov ecx, edi
// 0062b3e0  e84bfdffff           call 0x62b130
// 0062b3e5  8b742420             mov esi, dword ptr [esp + 0x20]
// 0062b3e9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0062b3f1  85f6                 test esi, esi
// 0062b3f3  742a                 je 0x62b41f
// 0062b3f5  8d5604               lea edx, [esi + 4]
// 0062b3f8  83c8ff               or eax, 0xffffffff
// 0062b3fb  f00fc102             lock xadd dword ptr [edx], eax
// 0062b3ff  751e                 jne 0x62b41f
// 0062b401  8b16                 mov edx, dword ptr [esi]
// 0062b403  8b4204               mov eax, dword ptr [edx + 4]
// 0062b406  8bce                 mov ecx, esi
// 0062b408  ffd0                 call eax
// 0062b40a  8d4e08               lea ecx, [esi + 8]
// 0062b40d  83caff               or edx, 0xffffffff
// 0062b410  f00fc111             lock xadd dword ptr [ecx], edx
// 0062b414  7509                 jne 0x62b41f
// 0062b416  8b06                 mov eax, dword ptr [esi]
// 0062b418  8b5008               mov edx, dword ptr [eax + 8]
// 0062b41b  8bce                 mov ecx, esi
// 0062b41d  ffd2                 call edx
// 0062b41f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062b423  8bc7                 mov eax, edi
// 0062b425  5f                   pop edi
// 0062b426  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b42d  5e                   pop esi
// 0062b42e  83c410               add esp, 0x10
// 0062b431  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
