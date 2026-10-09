// roc 2008-06 0063a860  unit: RBX::VBrickColor::V?$Value::?$FactoryProduct::Creator  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063a860
//
// 0063a860  6aff                 push -1
// 0063a862  68bea47d00           push 0x7da4be
// 0063a867  64a100000000         mov eax, dword ptr fs:[0]
// 0063a86d  50                   push eax
// 0063a86e  64892500000000       mov dword ptr fs:[0], esp
// 0063a875  83ec08               sub esp, 8
// 0063a878  56                   push esi
// 0063a879  8bf1                 mov esi, ecx
// 0063a87b  c70600000000         mov dword ptr [esi], 0
// 0063a881  89742404             mov dword ptr [esp + 4], esi
// 0063a885  c7460400000000       mov dword ptr [esi + 4], 0
// 0063a88c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0063a890  8b10                 mov edx, dword ptr [eax]
// 0063a892  6a00                 push 0
// 0063a894  83ec08               sub esp, 8
// 0063a897  8bcc                 mov ecx, esp
// 0063a899  8911                 mov dword ptr [ecx], edx
// 0063a89b  8b4004               mov eax, dword ptr [eax + 4]
// 0063a89e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0063a8a6  89642414             mov dword ptr [esp + 0x14], esp
// 0063a8aa  894104               mov dword ptr [ecx + 4], eax
// 0063a8ad  85c0                 test eax, eax
// 0063a8af  740c                 je 0x63a8bd
// 0063a8b1  83c004               add eax, 4
// 0063a8b4  b901000000           mov ecx, 1
// 0063a8b9  f00fc108             lock xadd dword ptr [eax], ecx
// 0063a8bd  8d4e08               lea ecx, [esi + 8]
// 0063a8c0  e8abf5ffff           call 0x639e70
// 0063a8c5  6a28                 push 0x28
// 0063a8c7  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a8cc  e84f600600           call 0x6a0920
// 0063a8d1  83c404               add esp, 4
// 0063a8d4  8944241c             mov dword ptr [esp + 0x1c], eax
// 0063a8d8  c644241402           mov byte ptr [esp + 0x14], 2
// 0063a8dd  85c0                 test eax, eax
// 0063a8df  7409                 je 0x63a8ea
// 0063a8e1  8bc8                 mov ecx, eax
// 0063a8e3  e85804deff           call 0x41ad40
// 0063a8e8  eb02                 jmp 0x63a8ec
// 0063a8ea  33c0                 xor eax, eax
// 0063a8ec  50                   push eax
// 0063a8ed  8bce                 mov ecx, esi
// 0063a8ef  c644241801           mov byte ptr [esp + 0x18], 1
// 0063a8f4  e8f707deff           call 0x41b0f0
// 0063a8f9  8bce                 mov ecx, esi
// 0063a8fb  e840aff5ff           call 0x595840
// 0063a900  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0063a904  8bc6                 mov eax, esi
// 0063a906  64890d00000000       mov dword ptr fs:[0], ecx
// 0063a90d  5e                   pop esi
// 0063a90e  83c414               add esp, 0x14
// 0063a911  c20400               ret 4
// library openrbx-client/App\util\RunStateOwner.cpp (function ??$?0VGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@?$slot@V?$function@$$A6AXMM@ZV?$allocator@X@std@@@boost@@@boost@@QAE@ABVGenericSlotAdapter@?$SignalDescImpl@$01$$A6AXMM@Z@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/RunStateOwner.cpp
