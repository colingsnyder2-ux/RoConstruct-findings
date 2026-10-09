// roc 2008-06 00493b40  unit: RBX::VShirt::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00493b40
//
// 00493b40  6aff                 push -1
// 00493b42  6868617c00           push 0x7c6168
// 00493b47  64a100000000         mov eax, dword ptr fs:[0]
// 00493b4d  50                   push eax
// 00493b4e  64892500000000       mov dword ptr fs:[0], esp
// 00493b55  51                   push ecx
// 00493b56  56                   push esi
// 00493b57  57                   push edi
// 00493b58  8bf9                 mov edi, ecx
// 00493b5a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00493b5e  6a00                 push 0
// 00493b60  83ec08               sub esp, 8
// 00493b63  8bc4                 mov eax, esp
// 00493b65  8908                 mov dword ptr [eax], ecx
// 00493b67  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00493b6b  895004               mov dword ptr [eax + 4], edx
// 00493b6e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00493b72  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00493b7a  89642414             mov dword ptr [esp + 0x14], esp
// 00493b7e  85c0                 test eax, eax
// 00493b80  740c                 je 0x493b8e
// 00493b82  83c004               add eax, 4
// 00493b85  b901000000           mov ecx, 1
// 00493b8a  f00fc108             lock xadd dword ptr [eax], ecx
// 00493b8e  8bcf                 mov ecx, edi
// 00493b90  e88bfaffff           call 0x493620
// 00493b95  8b742420             mov esi, dword ptr [esp + 0x20]
// 00493b99  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00493ba1  85f6                 test esi, esi
// 00493ba3  742a                 je 0x493bcf
// 00493ba5  8d5604               lea edx, [esi + 4]
// 00493ba8  83c8ff               or eax, 0xffffffff
// 00493bab  f00fc102             lock xadd dword ptr [edx], eax
// 00493baf  751e                 jne 0x493bcf
// 00493bb1  8b16                 mov edx, dword ptr [esi]
// 00493bb3  8b4204               mov eax, dword ptr [edx + 4]
// 00493bb6  8bce                 mov ecx, esi
// 00493bb8  ffd0                 call eax
// 00493bba  8d4e08               lea ecx, [esi + 8]
// 00493bbd  83caff               or edx, 0xffffffff
// 00493bc0  f00fc111             lock xadd dword ptr [ecx], edx
// 00493bc4  7509                 jne 0x493bcf
// 00493bc6  8b06                 mov eax, dword ptr [esi]
// 00493bc8  8b5008               mov edx, dword ptr [eax + 8]
// 00493bcb  8bce                 mov ecx, esi
// 00493bcd  ffd2                 call edx
// 00493bcf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00493bd3  8bc7                 mov eax, edi
// 00493bd5  5f                   pop edi
// 00493bd6  64890d00000000       mov dword ptr fs:[0], ecx
// 00493bdd  5e                   pop esi
// 00493bde  83c410               add esp, 0x10
// 00493be1  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
