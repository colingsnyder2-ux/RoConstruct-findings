// roc 2007-08 00540d10  unit: RBX::VInstance::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540d10
//
// 00540d10  6aff                 push -1
// 00540d12  681bb67500           push 0x75b61b
// 00540d17  64a100000000         mov eax, dword ptr fs:[0]
// 00540d1d  50                   push eax
// 00540d1e  64892500000000       mov dword ptr fs:[0], esp
// 00540d25  51                   push ecx
// 00540d26  56                   push esi
// 00540d27  6a28                 push 0x28
// 00540d29  8bf1                 mov esi, ecx
// 00540d2b  e8c6f10e00           call 0x62fef6
// 00540d30  83c404               add esp, 4
// 00540d33  89442404             mov dword ptr [esp + 4], eax
// 00540d37  85c0                 test eax, eax
// 00540d39  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00540d41  741f                 je 0x540d62
// 00540d43  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00540d47  56                   push esi
// 00540d48  51                   push ecx
// 00540d49  8bc8                 mov ecx, eax
// 00540d4b  e8b0f9ffff           call 0x540700
// 00540d50  5e                   pop esi
// 00540d51  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00540d55  64890d00000000       mov dword ptr fs:[0], ecx
// 00540d5c  83c410               add esp, 0x10
// 00540d5f  c20400               ret 4
// 00540d62  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00540d66  33c0                 xor eax, eax
// 00540d68  5e                   pop esi
// 00540d69  64890d00000000       mov dword ptr fs:[0], ecx
// 00540d70  83c410               add esp, 0x10
// 00540d73  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
