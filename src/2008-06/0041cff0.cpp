// roc 2008-06 0041cff0  unit: VDHTMLWindowService::?$FactoryProduct::Creator  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041cff0
//
// 0041cff0  6aff                 push -1
// 0041cff2  6868617c00           push 0x7c6168
// 0041cff7  64a100000000         mov eax, dword ptr fs:[0]
// 0041cffd  50                   push eax
// 0041cffe  64892500000000       mov dword ptr fs:[0], esp
// 0041d005  51                   push ecx
// 0041d006  56                   push esi
// 0041d007  57                   push edi
// 0041d008  8bf9                 mov edi, ecx
// 0041d00a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0041d00e  6a00                 push 0
// 0041d010  83ec08               sub esp, 8
// 0041d013  8bc4                 mov eax, esp
// 0041d015  8908                 mov dword ptr [eax], ecx
// 0041d017  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0041d01b  895004               mov dword ptr [eax + 4], edx
// 0041d01e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0041d022  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0041d02a  89642414             mov dword ptr [esp + 0x14], esp
// 0041d02e  85c0                 test eax, eax
// 0041d030  740c                 je 0x41d03e
// 0041d032  83c004               add eax, 4
// 0041d035  b901000000           mov ecx, 1
// 0041d03a  f00fc108             lock xadd dword ptr [eax], ecx
// 0041d03e  8bcf                 mov ecx, edi
// 0041d040  e8dbfdffff           call 0x41ce20
// 0041d045  8b742420             mov esi, dword ptr [esp + 0x20]
// 0041d049  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0041d051  85f6                 test esi, esi
// 0041d053  742a                 je 0x41d07f
// 0041d055  8d5604               lea edx, [esi + 4]
// 0041d058  83c8ff               or eax, 0xffffffff
// 0041d05b  f00fc102             lock xadd dword ptr [edx], eax
// 0041d05f  751e                 jne 0x41d07f
// 0041d061  8b16                 mov edx, dword ptr [esi]
// 0041d063  8b4204               mov eax, dword ptr [edx + 4]
// 0041d066  8bce                 mov ecx, esi
// 0041d068  ffd0                 call eax
// 0041d06a  8d4e08               lea ecx, [esi + 8]
// 0041d06d  83caff               or edx, 0xffffffff
// 0041d070  f00fc111             lock xadd dword ptr [ecx], edx
// 0041d074  7509                 jne 0x41d07f
// 0041d076  8b06                 mov eax, dword ptr [esi]
// 0041d078  8b5008               mov edx, dword ptr [eax + 8]
// 0041d07b  8bce                 mov ecx, esi
// 0041d07d  ffd2                 call edx
// 0041d07f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0041d083  8bc7                 mov eax, edi
// 0041d085  5f                   pop edi
// 0041d086  64890d00000000       mov dword ptr fs:[0], ecx
// 0041d08d  5e                   pop esi
// 0041d08e  83c410               add esp, 0x10
// 0041d091  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
