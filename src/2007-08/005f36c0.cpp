// roc 2007-08 005f36c0  unit: G3D::VColor3::V?$Value::?$SignalDesc  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f36c0
//
// 005f36c0  6aff                 push -1
// 005f36c2  681bb67500           push 0x75b61b
// 005f36c7  64a100000000         mov eax, dword ptr fs:[0]
// 005f36cd  50                   push eax
// 005f36ce  64892500000000       mov dword ptr fs:[0], esp
// 005f36d5  51                   push ecx
// 005f36d6  56                   push esi
// 005f36d7  6a28                 push 0x28
// 005f36d9  8bf1                 mov esi, ecx
// 005f36db  e816c80300           call 0x62fef6
// 005f36e0  83c404               add esp, 4
// 005f36e3  89442404             mov dword ptr [esp + 4], eax
// 005f36e7  85c0                 test eax, eax
// 005f36e9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f36f1  741f                 je 0x5f3712
// 005f36f3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005f36f7  56                   push esi
// 005f36f8  51                   push ecx
// 005f36f9  8bc8                 mov ecx, eax
// 005f36fb  e860f4ffff           call 0x5f2b60
// 005f3700  5e                   pop esi
// 005f3701  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005f3705  64890d00000000       mov dword ptr fs:[0], ecx
// 005f370c  83c410               add esp, 0x10
// 005f370f  c20400               ret 4
// 005f3712  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f3716  33c0                 xor eax, eax
// 005f3718  5e                   pop esi
// 005f3719  64890d00000000       mov dword ptr fs:[0], ecx
// 005f3720  83c410               add esp, 0x10
// 005f3723  c20400               ret 4
// library rbxgs/util\RunStateOwner.cpp (function ?newSignalInstance@?$TSignalDesc@$$A6AXM@Z@Reflection@RBX@@EBEPAVSignalInstance@23@AAVSignalSource@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
