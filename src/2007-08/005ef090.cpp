// roc 2007-08 005ef090  unit: RBX::VRocket::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef090
//
// 005ef090  6aff                 push -1
// 005ef092  6888587500           push 0x755888
// 005ef097  64a100000000         mov eax, dword ptr fs:[0]
// 005ef09d  50                   push eax
// 005ef09e  64892500000000       mov dword ptr fs:[0], esp
// 005ef0a5  51                   push ecx
// 005ef0a6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ef0aa  56                   push esi
// 005ef0ab  8bf1                 mov esi, ecx
// 005ef0ad  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ef0b1  50                   push eax
// 005ef0b2  51                   push ecx
// 005ef0b3  8974240c             mov dword ptr [esp + 0xc], esi
// 005ef0b7  e844e2ffff           call 0x5ed300
// 005ef0bc  50                   push eax
// 005ef0bd  8bce                 mov ecx, esi
// 005ef0bf  e8ec1cf8ff           call 0x570db0
// 005ef0c4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ef0c8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ef0cc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ef0d4  c70664fb7b00         mov dword ptr [esi], 0x7bfb64
// 005ef0da  895628               mov dword ptr [esi + 0x28], edx
// 005ef0dd  89462c               mov dword ptr [esi + 0x2c], eax
// 005ef0e0  e88be9f7ff           call 0x56da70
// 005ef0e5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef0e9  894614               mov dword ptr [esi + 0x14], eax
// 005ef0ec  8bc6                 mov eax, esi
// 005ef0ee  5e                   pop esi
// 005ef0ef  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef0f6  83c410               add esp, 0x10
// 005ef0f9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
