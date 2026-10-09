// roc 2008-06 0063a620  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a620
//
// 0063a620  6aff                 push -1
// 0063a622  68bea47d00           push 0x7da4be
// 0063a627  64a100000000         mov eax, dword ptr fs:[0]
// 0063a62d  50                   push eax
// 0063a62e  64892500000000       mov dword ptr fs:[0], esp
// 0063a635  83ec08               sub esp, 8
// 0063a638  56                   push esi
// 0063a639  8bf1                 mov esi, ecx
// 0063a63b  c70600000000         mov dword ptr [esi], 0
// 0063a641  89742404             mov dword ptr [esp + 4], esi
// 0063a645  c7460400000000       mov dword ptr [esi + 4], 0
// 0063a64c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063a650  8b10                 mov edx, dword ptr [eax]
// 0063a652  6a00                 push 0
// 0063a654  83ec08               sub esp, 8
// 0063a657  8bcc                 mov ecx, esp
// 0063a659  8911                 mov dword ptr [ecx], edx
// 0063a65b  8b4004               mov eax, dword ptr [eax + 4]
// 0063a65e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0063a666  89642414             mov dword ptr [esp + 0x14], esp
// 0063a66a  894104               mov dword ptr [ecx + 4], eax
// 0063a66d  85c0                 test eax, eax
// 0063a66f  740c                 je 0x63a67d
// 0063a671  83c004               add eax, 4
// 0063a674  b901000000           mov ecx, 1
// 0063a679  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a67d  8d4e08               lea ecx, [esi + 8]
// 0063a680  e8dbf5ffff           call 0x639c60
// 0063a685  6a28                 push 0x28
// 0063a687  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a68c  e88f620600           call 0x6a0920
// 0063a691  83c404               add esp, 4
// 0063a694  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063a698  c644241402           mov byte ptr [esp + 0x14], 2
// 0063a69d  85c0                 test eax, eax
// 0063a69f  7409                 je 0x63a6aa
// 0063a6a1  8bc8                 mov ecx, eax
// 0063a6a3  e89806deff           call 0x41ad40
// 0063a6a8  eb02                 jmp 0x63a6ac
// 0063a6aa  33c0                 xor eax, eax
// 0063a6ac  50                   push eax
// 0063a6ad  8bce                 mov ecx, esi
// 0063a6af  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a6b4  e8370adeff           call 0x41b0f0
// 0063a6b9  8bce                 mov ecx, esi
// 0063a6bb  e880b1f5ff           call 0x595840
// 0063a6c0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063a6c4  8bc6                 mov eax, esi
// 0063a6c6  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a6cd  5e                   pop esi
// 0063a6ce  83c414               add esp, 0x14
// 0063a6d1  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
