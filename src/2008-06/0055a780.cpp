// roc 2008-06 0055a780  unit: RBX::VInstance::?$NonFactoryProduct  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055a780
//
// 0055a780  6aff                 push -1
// 0055a782  6868617c00           push 0x7c6168
// 0055a787  64a100000000         mov eax, dword ptr fs:[0]
// 0055a78d  50                   push eax
// 0055a78e  64892500000000       mov dword ptr fs:[0], esp
// 0055a795  51                   push ecx
// 0055a796  56                   push esi
// 0055a797  57                   push edi
// 0055a798  8bf9                 mov edi, ecx
// 0055a79a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0055a79e  6a00                 push 0
// 0055a7a0  83ec08               sub esp, 8
// 0055a7a3  8bc4                 mov eax, esp
// 0055a7a5  8908                 mov dword ptr [eax], ecx
// 0055a7a7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0055a7ab  895004               mov dword ptr [eax + 4], edx
// 0055a7ae  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0055a7b2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0055a7ba  89642414             mov dword ptr [esp + 0x14], esp
// 0055a7be  85c0                 test eax, eax
// 0055a7c0  740c                 je 0x55a7ce
// 0055a7c2  83c004               add eax, 4
// 0055a7c5  b901000000           mov ecx, 1
// 0055a7ca  f00fc108             lock xadd dword ptr [eax], ecx
// 0055a7ce  8bcf                 mov ecx, edi
// 0055a7d0  e8dbfcffff           call 0x55a4b0
// 0055a7d5  8b742420             mov esi, dword ptr [esp + 0x20]
// 0055a7d9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0055a7e1  85f6                 test esi, esi
// 0055a7e3  742a                 je 0x55a80f
// 0055a7e5  8d5604               lea edx, [esi + 4]
// 0055a7e8  83c8ff               or eax, 0xffffffff
// 0055a7eb  f00fc102             lock xadd dword ptr [edx], eax
// 0055a7ef  751e                 jne 0x55a80f
// 0055a7f1  8b16                 mov edx, dword ptr [esi]
// 0055a7f3  8b4204               mov eax, dword ptr [edx + 4]
// 0055a7f6  8bce                 mov ecx, esi
// 0055a7f8  ffd0                 call eax
// 0055a7fa  8d4e08               lea ecx, [esi + 8]
// 0055a7fd  83caff               or edx, 0xffffffff
// 0055a800  f00fc111             lock xadd dword ptr [ecx], edx
// 0055a804  7509                 jne 0x55a80f
// 0055a806  8b06                 mov eax, dword ptr [esi]
// 0055a808  8b5008               mov edx, dword ptr [eax + 8]
// 0055a80b  8bce                 mov ecx, esi
// 0055a80d  ffd2                 call edx
// 0055a80f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0055a813  8bc7                 mov eax, edi
// 0055a815  5f                   pop edi
// 0055a816  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a81d  5e                   pop esi
// 0055a81e  83c410               add esp, 0x10
// 0055a821  c20c00               ret 0xc
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@QAE@VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
