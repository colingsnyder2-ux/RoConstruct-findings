// roc 2008-06 00639c60  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00639c60
//
// 00639c60  6aff                 push -1
// 00639c62  6868617c00           push 0x7c6168
// 00639c67  64a100000000         mov eax, dword ptr fs:[0]
// 00639c6d  50                   push eax
// 00639c6e  64892500000000       mov dword ptr fs:[0], esp
// 00639c75  51                   push ecx
// 00639c76  56                   push esi
// 00639c77  57                   push edi
// 00639c78  8bf9                 mov edi, ecx
// 00639c7a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00639c7e  6a00                 push 0
// 00639c80  83ec08               sub esp, 8
// 00639c83  8bc4                 mov eax, esp
// 00639c85  8908                 mov dword ptr [eax], ecx
// 00639c87  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00639c8b  895004               mov dword ptr [eax + 4], edx
// 00639c8e  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00639c92  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00639c9a  89642414             mov dword ptr [esp + 0x14], esp
// 00639c9e  85c0                 test eax, eax
// 00639ca0  740c                 je 0x639cae
// 00639ca2  83c004               add eax, 4
// 00639ca5  b901000000           mov ecx, 1
// 00639caa  f00fc108             lock xadd dword ptr [eax], ecx
// 00639cae  8bcf                 mov ecx, edi
// 00639cb0  e8abf1ffff           call 0x638e60
// 00639cb5  8b742420             mov esi, dword ptr [esp + 0x20]
// 00639cb9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00639cc1  85f6                 test esi, esi
// 00639cc3  742a                 je 0x639cef
// 00639cc5  8d5604               lea edx, [esi + 4]
// 00639cc8  83c8ff               or eax, 0xffffffff
// 00639ccb  f00fc102             lock xadd dword ptr [edx], eax
// 00639ccf  751e                 jne 0x639cef
// 00639cd1  8b16                 mov edx, dword ptr [esi]
// 00639cd3  8b4204               mov eax, dword ptr [edx + 4]
// 00639cd6  8bce                 mov ecx, esi
// 00639cd8  ffd0                 call eax
// 00639cda  8d4e08               lea ecx, [esi + 8]
// 00639cdd  83caff               or edx, 0xffffffff
// 00639ce0  f00fc111             lock xadd dword ptr [ecx], edx
// 00639ce4  7509                 jne 0x639cef
// 00639ce6  8b06                 mov eax, dword ptr [esi]
// 00639ce8  8b5008               mov edx, dword ptr [eax + 8]
// 00639ceb  8bce                 mov ecx, esi
// 00639ced  ffd2                 call edx
// 00639cef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00639cf3  8bc7                 mov eax, edi
// 00639cf5  5f                   pop edi
// 00639cf6  64890d00000000       mov dword ptr fs:[0], ecx
// 00639cfd  5e                   pop esi
// 00639cfe  83c410               add esp, 0x10
// 00639d01  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
