// roc 2007-08 0052ebb0  unit: RBX::VRunService::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ebb0
//
// 0052ebb0  6aff                 push -1
// 0052ebb2  681bb67500           push 0x75b61b
// 0052ebb7  64a100000000         mov eax, dword ptr fs:[0]
// 0052ebbd  50                   push eax
// 0052ebbe  64892500000000       mov dword ptr fs:[0], esp
// 0052ebc5  51                   push ecx
// 0052ebc6  56                   push esi
// 0052ebc7  6a28                 push 0x28
// 0052ebc9  8bf1                 mov esi, ecx
// 0052ebcb  e826131000           call 0x62fef6
// 0052ebd0  83c404               add esp, 4
// 0052ebd3  89442404             mov dword ptr [esp + 4], eax
// 0052ebd7  85c0                 test eax, eax
// 0052ebd9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052ebe1  741f                 je 0x52ec02
// 0052ebe3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0052ebe7  56                   push esi
// 0052ebe8  51                   push ecx
// 0052ebe9  8bc8                 mov ecx, eax
// 0052ebeb  e840fcffff           call 0x52e830
// 0052ebf0  5e                   pop esi
// 0052ebf1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0052ebf5  64890d00000000       mov dword ptr fs:[0], ecx
// 0052ebfc  83c410               add esp, 0x10
// 0052ebff  c20400               ret 4
// 0052ec02  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0052ec06  33c0                 xor eax, eax
// 0052ec08  5e                   pop esi
// 0052ec09  64890d00000000       mov dword ptr fs:[0], ecx
// 0052ec10  83c410               add esp, 0x10
// 0052ec13  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
