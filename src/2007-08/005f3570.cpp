// roc 2007-08 005f3570  unit: RBX::H$1?sIntValue::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f3570
//
// 005f3570  6aff                 push -1
// 005f3572  681bb67500           push 0x75b61b
// 005f3577  64a100000000         mov eax, dword ptr fs:[0]
// 005f357d  50                   push eax
// 005f357e  64892500000000       mov dword ptr fs:[0], esp
// 005f3585  51                   push ecx
// 005f3586  56                   push esi
// 005f3587  6a28                 push 0x28
// 005f3589  8bf1                 mov esi, ecx
// 005f358b  e866c90300           call 0x62fef6
// 005f3590  83c404               add esp, 4
// 005f3593  89442404             mov dword ptr [esp + 4], eax
// 005f3597  85c0                 test eax, eax
// 005f3599  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f35a1  741f                 je 0x5f35c2
// 005f35a3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f35a7  56                   push esi
// 005f35a8  51                   push ecx
// 005f35a9  8bc8                 mov ecx, eax
// 005f35ab  e860f4ffff           call 0x5f2a10
// 005f35b0  5e                   pop esi
// 005f35b1  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f35b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f35bc  83c410               add esp, 0x10
// 005f35bf  c20400               ret 4
// 005f35c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f35c6  33c0                 xor eax, eax
// 005f35c8  5e                   pop esi
// 005f35c9  64890d00000000       mov dword ptr fs:[0], ecx
// 005f35d0  83c410               add esp, 0x10
// 005f35d3  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
