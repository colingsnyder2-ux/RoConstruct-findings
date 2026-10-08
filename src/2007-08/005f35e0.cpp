// roc 2007-08 005f35e0  unit: G3D::VVector3::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f35e0
//
// 005f35e0  6aff                 push -1
// 005f35e2  681bb67500           push 0x75b61b
// 005f35e7  64a100000000         mov eax, dword ptr fs:[0]
// 005f35ed  50                   push eax
// 005f35ee  64892500000000       mov dword ptr fs:[0], esp
// 005f35f5  51                   push ecx
// 005f35f6  56                   push esi
// 005f35f7  6a28                 push 0x28
// 005f35f9  8bf1                 mov esi, ecx
// 005f35fb  e8f6c80300           call 0x62fef6
// 005f3600  83c404               add esp, 4
// 005f3603  89442404             mov dword ptr [esp + 4], eax
// 005f3607  85c0                 test eax, eax
// 005f3609  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f3611  741f                 je 0x5f3632
// 005f3613  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f3617  56                   push esi
// 005f3618  51                   push ecx
// 005f3619  8bc8                 mov ecx, eax
// 005f361b  e860f4ffff           call 0x5f2a80
// 005f3620  5e                   pop esi
// 005f3621  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f3625  64890d00000000       mov dword ptr fs:[0], ecx
// 005f362c  83c410               add esp, 0x10
// 005f362f  c20400               ret 4
// 005f3632  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f3636  33c0                 xor eax, eax
// 005f3638  5e                   pop esi
// 005f3639  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3640  83c410               add esp, 0x10
// 005f3643  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
