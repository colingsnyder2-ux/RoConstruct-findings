// roc 2007-08 005ef170  unit: RBX::VBodyPosition::?$BoundFuncDesc  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef170
//
// 005ef170  6aff                 push -1
// 005ef172  6888587500           push 0x755888
// 005ef177  64a100000000         mov eax, dword ptr fs:[0]
// 005ef17d  50                   push eax
// 005ef17e  64892500000000       mov dword ptr fs:[0], esp
// 005ef185  51                   push ecx
// 005ef186  8b442420             mov eax, dword ptr [esp + 0x20]
// 005ef18a  56                   push esi
// 005ef18b  8bf1                 mov esi, ecx
// 005ef18d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ef191  50                   push eax
// 005ef192  51                   push ecx
// 005ef193  8974240c             mov dword ptr [esp + 0xc], esi
// 005ef197  e8d4e1ffff           call 0x5ed370
// 005ef19c  50                   push eax
// 005ef19d  8bce                 mov ecx, esi
// 005ef19f  e80c1cf8ff           call 0x570db0
// 005ef1a4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005ef1a8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ef1ac  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005ef1b4  c70670fb7b00         mov dword ptr [esi], 0x7bfb70
// 005ef1ba  895628               mov dword ptr [esi + 0x28], edx
// 005ef1bd  89462c               mov dword ptr [esi + 0x2c], eax
// 005ef1c0  e8abe8f7ff           call 0x56da70
// 005ef1c5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ef1c9  894614               mov dword ptr [esi + 0x14], eax
// 005ef1cc  8bc6                 mov eax, esi
// 005ef1ce  5e                   pop esi
// 005ef1cf  64890d00000000       mov dword ptr fs:[0], ecx
// 005ef1d6  83c410               add esp, 0x10
// 005ef1d9  c21000               ret 0x10
// library rbxgs/util\RunStateOwner.cpp (function ??0?$BoundFuncDesc@VRunService@RBX@@$$A6AXXZ$0A@@Reflection@RBX@@QAE@P8RunService@2@AEXXZPBDW4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/RunStateOwner.cpp
