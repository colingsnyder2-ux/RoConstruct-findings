// roc 2008-06 0063a7a0  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a7a0
//
// 0063a7a0  6aff                 push -1
// 0063a7a2  68bea47d00           push 0x7da4be
// 0063a7a7  64a100000000         mov eax, dword ptr fs:[0]
// 0063a7ad  50                   push eax
// 0063a7ae  64892500000000       mov dword ptr fs:[0], esp
// 0063a7b5  83ec08               sub esp, 8
// 0063a7b8  56                   push esi
// 0063a7b9  8bf1                 mov esi, ecx
// 0063a7bb  c70600000000         mov dword ptr [esi], 0
// 0063a7c1  89742404             mov dword ptr [esp + 4], esi
// 0063a7c5  c7460400000000       mov dword ptr [esi + 4], 0
// 0063a7cc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063a7d0  8b10                 mov edx, dword ptr [eax]
// 0063a7d2  6a00                 push 0
// 0063a7d4  83ec08               sub esp, 8
// 0063a7d7  8bcc                 mov ecx, esp
// 0063a7d9  8911                 mov dword ptr [ecx], edx
// 0063a7db  8b4004               mov eax, dword ptr [eax + 4]
// 0063a7de  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0063a7e6  89642414             mov dword ptr [esp + 0x14], esp
// 0063a7ea  894104               mov dword ptr [ecx + 4], eax
// 0063a7ed  85c0                 test eax, eax
// 0063a7ef  740c                 je 0x63a7fd
// 0063a7f1  83c004               add eax, 4
// 0063a7f4  b901000000           mov ecx, 1
// 0063a7f9  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a7fd  8d4e08               lea ecx, [esi + 8]
// 0063a800  e8bbf5ffff           call 0x639dc0
// 0063a805  6a28                 push 0x28
// 0063a807  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a80c  e80f610600           call 0x6a0920
// 0063a811  83c404               add esp, 4
// 0063a814  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063a818  c644241402           mov byte ptr [esp + 0x14], 2
// 0063a81d  85c0                 test eax, eax
// 0063a81f  7409                 je 0x63a82a
// 0063a821  8bc8                 mov ecx, eax
// 0063a823  e81805deff           call 0x41ad40
// 0063a828  eb02                 jmp 0x63a82c
// 0063a82a  33c0                 xor eax, eax
// 0063a82c  50                   push eax
// 0063a82d  8bce                 mov ecx, esi
// 0063a82f  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a834  e8b708deff           call 0x41b0f0
// 0063a839  8bce                 mov ecx, esi
// 0063a83b  e800b0f5ff           call 0x595840
// 0063a840  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063a844  8bc6                 mov eax, esi
// 0063a846  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a84d  5e                   pop esi
// 0063a84e  83c414               add esp, 0x14
// 0063a851  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
