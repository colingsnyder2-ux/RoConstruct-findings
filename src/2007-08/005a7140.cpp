// roc 2007-08 005a7140  unit: RBX::VHumanoid::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a7140
//
// 005a7140  6aff                 push -1
// 005a7142  681bb67500           push 0x75b61b
// 005a7147  64a100000000         mov eax, dword ptr fs:[0]
// 005a714d  50                   push eax
// 005a714e  64892500000000       mov dword ptr fs:[0], esp
// 005a7155  51                   push ecx
// 005a7156  56                   push esi
// 005a7157  6a28                 push 0x28
// 005a7159  8bf1                 mov esi, ecx
// 005a715b  e8968d0800           call 0x62fef6
// 005a7160  83c404               add esp, 4
// 005a7163  89442404             mov dword ptr [esp + 4], eax
// 005a7167  85c0                 test eax, eax
// 005a7169  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a7171  741f                 je 0x5a7192
// 005a7173  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005a7177  56                   push esi
// 005a7178  51                   push ecx
// 005a7179  8bc8                 mov ecx, eax
// 005a717b  e8f0fdffff           call 0x5a6f70
// 005a7180  5e                   pop esi
// 005a7181  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a7185  64890d00000000       mov dword ptr fs:[0], ecx
// 005a718c  83c410               add esp, 0x10
// 005a718f  c20400               ret 4
// 005a7192  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a7196  33c0                 xor eax, eax
// 005a7198  5e                   pop esi
// 005a7199  64890d00000000       mov dword ptr fs:[0], ecx
// 005a71a0  83c410               add esp, 0x10
// 005a71a3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
