// roc 2008-06 0063a4a0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a4a0
//
// 0063a4a0  6aff                 push -1
// 0063a4a2  68bea47d00           push 0x7da4be
// 0063a4a7  64a100000000         mov eax, dword ptr fs:[0]
// 0063a4ad  50                   push eax
// 0063a4ae  64892500000000       mov dword ptr fs:[0], esp
// 0063a4b5  83ec08               sub esp, 8
// 0063a4b8  56                   push esi
// 0063a4b9  8bf1                 mov esi, ecx
// 0063a4bb  c70600000000         mov dword ptr [esi], 0
// 0063a4c1  89742404             mov dword ptr [esp + 4], esi
// 0063a4c5  c7460400000000       mov dword ptr [esi + 4], 0
// 0063a4cc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063a4d0  8b10                 mov edx, dword ptr [eax]
// 0063a4d2  6a00                 push 0
// 0063a4d4  83ec08               sub esp, 8
// 0063a4d7  8bcc                 mov ecx, esp
// 0063a4d9  8911                 mov dword ptr [ecx], edx
// 0063a4db  8b4004               mov eax, dword ptr [eax + 4]
// 0063a4de  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0063a4e6  89642414             mov dword ptr [esp + 0x14], esp
// 0063a4ea  894104               mov dword ptr [ecx + 4], eax
// 0063a4ed  85c0                 test eax, eax
// 0063a4ef  740c                 je 0x63a4fd
// 0063a4f1  83c004               add eax, 4
// 0063a4f4  b901000000           mov ecx, 1
// 0063a4f9  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a4fd  8d4e08               lea ecx, [esi + 8]
// 0063a500  e8fbf5ffff           call 0x639b00
// 0063a505  6a28                 push 0x28
// 0063a507  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a50c  e80f640600           call 0x6a0920
// 0063a511  83c404               add esp, 4
// 0063a514  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063a518  c644241402           mov byte ptr [esp + 0x14], 2
// 0063a51d  85c0                 test eax, eax
// 0063a51f  7409                 je 0x63a52a
// 0063a521  8bc8                 mov ecx, eax
// 0063a523  e81808deff           call 0x41ad40
// 0063a528  eb02                 jmp 0x63a52c
// 0063a52a  33c0                 xor eax, eax
// 0063a52c  50                   push eax
// 0063a52d  8bce                 mov ecx, esi
// 0063a52f  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a534  e8b70bdeff           call 0x41b0f0
// 0063a539  8bce                 mov ecx, esi
// 0063a53b  e800b3f5ff           call 0x595840
// 0063a540  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063a544  8bc6                 mov eax, esi
// 0063a546  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a54d  5e                   pop esi
// 0063a54e  83c414               add esp, 0x14
// 0063a551  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
