// roc 2008-06 0063a560  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a560
//
// 0063a560  6aff                 push -1
// 0063a562  68bea47d00           push 0x7da4be
// 0063a567  64a100000000         mov eax, dword ptr fs:[0]
// 0063a56d  50                   push eax
// 0063a56e  64892500000000       mov dword ptr fs:[0], esp
// 0063a575  83ec08               sub esp, 8
// 0063a578  56                   push esi
// 0063a579  8bf1                 mov esi, ecx
// 0063a57b  c70600000000         mov dword ptr [esi], 0
// 0063a581  89742404             mov dword ptr [esp + 4], esi
// 0063a585  c7460400000000       mov dword ptr [esi + 4], 0
// 0063a58c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063a590  8b10                 mov edx, dword ptr [eax]
// 0063a592  6a00                 push 0
// 0063a594  83ec08               sub esp, 8
// 0063a597  8bcc                 mov ecx, esp
// 0063a599  8911                 mov dword ptr [ecx], edx
// 0063a59b  8b4004               mov eax, dword ptr [eax + 4]
// 0063a59e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0063a5a6  89642414             mov dword ptr [esp + 0x14], esp
// 0063a5aa  894104               mov dword ptr [ecx + 4], eax
// 0063a5ad  85c0                 test eax, eax
// 0063a5af  740c                 je 0x63a5bd
// 0063a5b1  83c004               add eax, 4
// 0063a5b4  b901000000           mov ecx, 1
// 0063a5b9  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a5bd  8d4e08               lea ecx, [esi + 8]
// 0063a5c0  e8ebf5ffff           call 0x639bb0
// 0063a5c5  6a28                 push 0x28
// 0063a5c7  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a5cc  e84f630600           call 0x6a0920
// 0063a5d1  83c404               add esp, 4
// 0063a5d4  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063a5d8  c644241402           mov byte ptr [esp + 0x14], 2
// 0063a5dd  85c0                 test eax, eax
// 0063a5df  7409                 je 0x63a5ea
// 0063a5e1  8bc8                 mov ecx, eax
// 0063a5e3  e85807deff           call 0x41ad40
// 0063a5e8  eb02                 jmp 0x63a5ec
// 0063a5ea  33c0                 xor eax, eax
// 0063a5ec  50                   push eax
// 0063a5ed  8bce                 mov ecx, esi
// 0063a5ef  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a5f4  e8f70adeff           call 0x41b0f0
// 0063a5f9  8bce                 mov ecx, esi
// 0063a5fb  e840b2f5ff           call 0x595840
// 0063a600  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063a604  8bc6                 mov eax, esi
// 0063a606  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a60d  5e                   pop esi
// 0063a60e  83c414               add esp, 0x14
// 0063a611  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
