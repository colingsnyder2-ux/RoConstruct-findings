// roc 2007-08 005f3730  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3730
//
// 005f3730  6aff                 push -1
// 005f3732  681bb67500           push 0x75b61b
// 005f3737  64a100000000         mov eax, dword ptr fs:[0]
// 005f373d  50                   push eax
// 005f373e  64892500000000       mov dword ptr fs:[0], esp
// 005f3745  51                   push ecx
// 005f3746  56                   push esi
// 005f3747  6a28                 push 0x28
// 005f3749  8bf1                 mov esi, ecx
// 005f374b  e8a6c70300           call 0x62fef6
// 005f3750  83c404               add esp, 4
// 005f3753  89442404             mov dword ptr [esp + 4], eax
// 005f3757  85c0                 test eax, eax
// 005f3759  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f3761  741f                 je 0x5f3782
// 005f3763  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f3767  56                   push esi
// 005f3768  51                   push ecx
// 005f3769  8bc8                 mov ecx, eax
// 005f376b  e8d0f4ffff           call 0x5f2c40
// 005f3770  5e                   pop esi
// 005f3771  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f3775  64890d00000000       mov dword ptr fs:[0], ecx
// 005f377c  83c410               add esp, 0x10
// 005f377f  c20400               ret 4
// 005f3782  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f3786  33c0                 xor eax, eax
// 005f3788  5e                   pop esi
// 005f3789  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3790  83c410               add esp, 0x10
// 005f3793  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
