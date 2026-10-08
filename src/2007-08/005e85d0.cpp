// roc 2007-08 005e85d0  unit: RBX::VExplosion::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e85d0
//
// 005e85d0  6aff                 push -1
// 005e85d2  681bb67500           push 0x75b61b
// 005e85d7  64a100000000         mov eax, dword ptr fs:[0]
// 005e85dd  50                   push eax
// 005e85de  64892500000000       mov dword ptr fs:[0], esp
// 005e85e5  51                   push ecx
// 005e85e6  56                   push esi
// 005e85e7  6a28                 push 0x28
// 005e85e9  8bf1                 mov esi, ecx
// 005e85eb  e806790400           call 0x62fef6
// 005e85f0  83c404               add esp, 4
// 005e85f3  89442404             mov dword ptr [esp + 4], eax
// 005e85f7  85c0                 test eax, eax
// 005e85f9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e8601  741f                 je 0x5e8622
// 005e8603  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e8607  56                   push esi
// 005e8608  51                   push ecx
// 005e8609  8bc8                 mov ecx, eax
// 005e860b  e840fdffff           call 0x5e8350
// 005e8610  5e                   pop esi
// 005e8611  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e8615  64890d00000000       mov dword ptr fs:[0], ecx
// 005e861c  83c410               add esp, 0x10
// 005e861f  c20400               ret 4
// 005e8622  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e8626  33c0                 xor eax, eax
// 005e8628  5e                   pop esi
// 005e8629  64890d00000000       mov dword ptr fs:[0], ecx
// 005e8630  83c410               add esp, 0x10
// 005e8633  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
