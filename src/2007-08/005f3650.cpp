// roc 2007-08 005f3650  unit: G3D::VCoordinateFrame::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3650
//
// 005f3650  6aff                 push -1
// 005f3652  681bb67500           push 0x75b61b
// 005f3657  64a100000000         mov eax, dword ptr fs:[0]
// 005f365d  50                   push eax
// 005f365e  64892500000000       mov dword ptr fs:[0], esp
// 005f3665  51                   push ecx
// 005f3666  56                   push esi
// 005f3667  6a28                 push 0x28
// 005f3669  8bf1                 mov esi, ecx
// 005f366b  e886c80300           call 0x62fef6
// 005f3670  83c404               add esp, 4
// 005f3673  89442404             mov dword ptr [esp + 4], eax
// 005f3677  85c0                 test eax, eax
// 005f3679  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f3681  741f                 je 0x5f36a2
// 005f3683  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f3687  56                   push esi
// 005f3688  51                   push ecx
// 005f3689  8bc8                 mov ecx, eax
// 005f368b  e860f4ffff           call 0x5f2af0
// 005f3690  5e                   pop esi
// 005f3691  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f3695  64890d00000000       mov dword ptr fs:[0], ecx
// 005f369c  83c410               add esp, 0x10
// 005f369f  c20400               ret 4
// 005f36a2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f36a6  33c0                 xor eax, eax
// 005f36a8  5e                   pop esi
// 005f36a9  64890d00000000       mov dword ptr fs:[0], ecx
// 005f36b0  83c410               add esp, 0x10
// 005f36b3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
